/***************************************************************************
 *   Copyright (C) 2002~2005 by Yuking                                     *
 *   yuking_net@sohu.com                                                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
/**
 * @file   tools.c
 * @author Yuking yuking_net@sohu.com
 * @date   2008-1-16
 *
 * @brief  配置文件读写
 *
 *
 */

#include <pthread.h>
#include <stdio.h>
#include <libintl.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

#include "core/fcitx.h"
#include "core/ui.h"
#include "utils.h"
#include "fcitx-config/uthash.h"
#include "fcitx-config/xdg.h"
#include "utf8.h"
#include "utf8_in_gb18030.h"

static pthread_mutex_t fcitxMutex;

const UT_icd stat_icd = {sizeof(FcitxUIStatus), 0, 0, 0};

static int cmpi(const void * a, const void *b)
{
    return (*((int*)a)) - (*((int*)b));
}

/*
 * 计算文件中有多少行
 * 注意:文件中的空行也做为一行处理
 */
int CalculateRecordNumber (FILE * fpDict)
{
    char           *strBuf = NULL;
    size_t          bufLen = 0;
    int             nNumber = 0;

    while (getline(&strBuf, &bufLen, fpDict) != -1) {
        nNumber++;
    }
    rewind (fpDict);

    if (strBuf)
        free(strBuf);

    return nNumber;
}


int CalHZIndex (char *strHZ)
{
    unsigned int iutf = 0;
    int l = utf8_char_len(strHZ);
    unsigned char* utf = (unsigned char*) strHZ;
    unsigned int *res;
    int idx;

    if (l == 2)
    {
        iutf = *utf++ << 8;
        iutf |= *utf++;
    }
    else if (l == 3)
    {
        iutf = *utf++ << 16;
        iutf |= *utf++ << 8;
        iutf |= *utf++;
    }
    else if (l == 4)
    {
        iutf = *utf++ << 24;

        iutf |= *utf++ << 16;
        iutf |= *utf++ << 8;
        iutf |= *utf++;
    }

    res = bsearch(&iutf, utf8_in_gb18030, 63360, sizeof(int), cmpi);
    if (res)
        idx = res - utf8_in_gb18030;
    else
        idx = 63361;
    return idx;
}

/**
 * @brief 自定义的二分查找，和bsearch库函数相比支持不精确位置的查询
 *
 * @param key
 * @param base
 * @param nmemb
 * @param size
 * @param accurate
 * @param compar
 *
 * @return
 */
void *custom_bsearch(const void *key, const void *base,
                     size_t nmemb, size_t size, int accurate,
                     int (*compar)(const void *, const void *))
{
    if (accurate)
        return bsearch(key, base, nmemb, size, compar);
    else
    {
        size_t l, u, idx;
        const void *p;
        int comparison;

        l = 0;
        u = nmemb;
        while (l < u)
        {
            idx = (l + u) / 2;
            p = (void *) (((const char *) base) + (idx * size));
            comparison = (*compar) (key, p);
            if (comparison <= 0)
                u = idx;
            else if (comparison > 0)
                l = idx + 1;
        }

        if (u >= nmemb)
            return NULL;
        else
            return (void *) (((const char *) base) + (l * size));
    }
}

void FcitxInitThread()
{
    FcitxState* gs = GetFcitxGlobalState();
    int rc;
    rc = pthread_mutex_init(&fcitxMutex, NULL);
    gs->bMutexInited = True;
    if (rc != 0)
        FcitxLog(ERROR, _("pthread mutex init failed"));
}

void InitAsDaemon()
{
    pid_t pid;
    if ((pid = fork()) > 0)
    {
        waitpid(pid, NULL, 0);
        exit(0);
    }
    setsid();
    signal(SIGINT, SIG_IGN);
    signal(SIGHUP, SIG_IGN);
    signal(SIGQUIT, SIG_IGN);
    signal(SIGPIPE, SIG_IGN);
    signal(SIGTTOU, SIG_IGN);
    signal(SIGTTIN, SIG_IGN);
    signal(SIGCHLD, SIG_IGN);
    if (fork() > 0)
        exit(0);
    chdir("/");

    umask(0);
}

int FcitxLock()
{
    FcitxState* gs = GetFcitxGlobalState();
    if (gs->bMutexInited)
        return pthread_mutex_lock(&fcitxMutex);
    return 0;
}

int FcitxUnlock()
{
    FcitxState* gs = GetFcitxGlobalState();
    if (gs->bMutexInited)
        return pthread_mutex_unlock(&fcitxMutex);
    return 0;
}

UT_array* SplitString(const char *str)
{
    UT_array* array;
    utarray_new(array, &ut_str_icd);
    char *bakstr = strdup(str);
    size_t len = strlen(bakstr);
    int i = 0, last = 0;
    for (i =0 ; i <= len ; i++)
    {
        if (bakstr[i] == ',' || bakstr[i] == '\0')
        {
            bakstr[i] = '\0';
            char *p = &bakstr[last];
            if (strlen(p) > 0)
                utarray_push_back(array, &p);
            last = i + 1;
        }
    }
    free(bakstr);
    return array;
}

void FreeStringList(UT_array *list)
{
    utarray_free(list);
}

FcitxState* GetFcitxGlobalState()
{
    static FcitxState* gs = NULL;
    if (gs == NULL)
    {
        gs = malloc0(sizeof(FcitxState));
        gs->messageUp = InitMessages();
        gs->messageDown = InitMessages();
        utarray_init(&gs->uistats, &stat_icd);
    }
    return gs;
}

Messages* GetMessageUp()
{
    FcitxState* gs = GetFcitxGlobalState();
    return gs->messageUp;
}

Messages* GetMessageDown()
{
    FcitxState* gs = GetFcitxGlobalState();
    return gs->messageDown;
}

UT_array* GetUIStatus()
{
    FcitxState* gs = GetFcitxGlobalState();
    return &gs->uistats;
}
