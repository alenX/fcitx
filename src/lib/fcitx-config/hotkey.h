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
 * @file   hotkey.h
 * @author Yuking yuking_net@sohu.com
 * @date   2008-1-16
 * 
 * @brief  键盘扫描码列表
 * 
 * 
 */

#ifndef _FCITX_HOTKEY_H_
#define _FCITX_HOTKEY_H_

#include <fcitx-config/fcitx-config.h>

#ifdef __cplusplus
extern "C" {
#endif



/**
 * @brief mainly come from X11/keysymdef.h
 **/
typedef enum _FcitxKeySym {
Key_VoidSymbol                  = 0xffffff,  /* Void symbol */


/*
 * TTY function keys, cleverly chosen to map to ASCII, for convenience of
 * programming, but could have been arbitrary (at the cost of lookup
 * tables in client code).
 */

Key_BackSpace                     = 0xff08,  /* Back space, back char */
Key_Tab                           = 0xff09,
Key_Linefeed                      = 0xff0a,  /* Linefeed, LF */
Key_Clear                         = 0xff0b,
Key_Return                        = 0xff0d,  /* Return, enter */
Key_Pause                         = 0xff13,  /* Pause, hold */
Key_Scroll_Lock                   = 0xff14,
Key_Sys_Req                       = 0xff15,
Key_Escape                        = 0xff1b,
Key_Delete                        = 0xffff,  /* Delete, rubout */



/* International & multi-key character composition */

Key_Multi_key                     = 0xff20,  /* Multi-key character compose */
Key_Codeinput                     = 0xff37,
Key_SingleCandidate               = 0xff3c,
Key_MultipleCandidate             = 0xff3d,
Key_PreviousCandidate             = 0xff3e,

/* Japanese keyboard support */

Key_Kanji                         = 0xff21,  /* Kanji, Kanji convert */
Key_Muhenkan                      = 0xff22,  /* Cancel Conversion */
Key_Henkan_Mode                   = 0xff23,  /* Start/Stop Conversion */
Key_Henkan                        = 0xff23,  /* Alias for Henkan_Mode */
Key_Romaji                        = 0xff24,  /* to Romaji */
Key_Hiragana                      = 0xff25,  /* to Hiragana */
Key_Katakana                      = 0xff26,  /* to Katakana */
Key_Hiragana_Katakana             = 0xff27,  /* Hiragana/Katakana toggle */
Key_Zenkaku                       = 0xff28,  /* to Zenkaku */
Key_Hankaku                       = 0xff29,  /* to Hankaku */
Key_Zenkaku_Hankaku               = 0xff2a,  /* Zenkaku/Hankaku toggle */
Key_Touroku                       = 0xff2b,  /* Add to Dictionary */
Key_Massyo                        = 0xff2c,  /* Delete from Dictionary */
Key_Kana_Lock                     = 0xff2d,  /* Kana Lock */
Key_Kana_Shift                    = 0xff2e,  /* Kana Shift */
Key_Eisu_Shift                    = 0xff2f,  /* Alphanumeric Shift */
Key_Eisu_toggle                   = 0xff30,  /* Alphanumeric toggle */
Key_Kanji_Bangou                  = 0xff37,  /* Codeinput */
Key_Zen_Koho                      = 0xff3d,  /* Multiple/All Candidate(s) */
Key_Mae_Koho                      = 0xff3e,  /* Previous Candidate */

/* = 0xff31, thru = 0xff3f, are under Key_KOREAN */

/* Cursor control & motion */

Key_Home                          = 0xff50,
Key_Left                          = 0xff51,  /* Move left, left arrow */
Key_Up                            = 0xff52,  /* Move up, up arrow */
Key_Right                         = 0xff53,  /* Move right, right arrow */
Key_Down                          = 0xff54,  /* Move down, down arrow */
Key_Prior                         = 0xff55,  /* Prior, previous */
Key_Page_Up                       = 0xff55,
Key_Next                          = 0xff56,  /* Next */
Key_Page_Down                     = 0xff56,
Key_End                           = 0xff57,  /* EOL */
Key_Begin                         = 0xff58,  /* BOL */


/* Misc functions */

Key_Select                        = 0xff60,  /* Select, mark */
Key_Print                         = 0xff61,
Key_Execute                       = 0xff62,  /* Execute, run, do */
Key_Insert                        = 0xff63,  /* Insert, insert here */
Key_Undo                          = 0xff65,
Key_Redo                          = 0xff66,  /* Redo, again */
Key_Menu                          = 0xff67,
Key_Find                          = 0xff68,  /* Find, search */
Key_Cancel                        = 0xff69,  /* Cancel, stop, abort, exit */
Key_Help                          = 0xff6a,  /* Help */
Key_Break                         = 0xff6b,
Key_Mode_switch                   = 0xff7e,  /* Character set switch */
Key_script_switch                 = 0xff7e,  /* Alias for mode_switch */
Key_Num_Lock                      = 0xff7f,

/* Keypad functions, keypad numbers cleverly chosen to map to ASCII */

Key_KP_Space                      = 0xff80,  /* Space */
Key_KP_Tab                        = 0xff89,
Key_KP_Enter                      = 0xff8d,  /* Enter */
Key_KP_F1                         = 0xff91,  /* PF1, KP_A, ... */
Key_KP_F2                         = 0xff92,
Key_KP_F3                         = 0xff93,
Key_KP_F4                         = 0xff94,
Key_KP_Home                       = 0xff95,
Key_KP_Left                       = 0xff96,
Key_KP_Up                         = 0xff97,
Key_KP_Right                      = 0xff98,
Key_KP_Down                       = 0xff99,
Key_KP_Prior                      = 0xff9a,
Key_KP_Page_Up                    = 0xff9a,
Key_KP_Next                       = 0xff9b,
Key_KP_Page_Down                  = 0xff9b,
Key_KP_End                        = 0xff9c,
Key_KP_Begin                      = 0xff9d,
Key_KP_Insert                     = 0xff9e,
Key_KP_Delete                     = 0xff9f,
Key_KP_Equal                      = 0xffbd,  /* Equals */
Key_KP_Multiply                   = 0xffaa,
Key_KP_Add                        = 0xffab,
Key_KP_Separator                  = 0xffac,  /* Separator, often comma */
Key_KP_Subtract                   = 0xffad,
Key_KP_Decimal                    = 0xffae,
Key_KP_Divide                     = 0xffaf,

Key_KP_0                          = 0xffb0,
Key_KP_1                          = 0xffb1,
Key_KP_2                          = 0xffb2,
Key_KP_3                          = 0xffb3,
Key_KP_4                          = 0xffb4,
Key_KP_5                          = 0xffb5,
Key_KP_6                          = 0xffb6,
Key_KP_7                          = 0xffb7,
Key_KP_8                          = 0xffb8,
Key_KP_9                          = 0xffb9,



/*
 * Auxiliary functions; note the duplicate definitions for left and right
 * function keys;  Sun keyboards and a few other manufacturers have such
 * function key groups on the left and/or right sides of the keyboard.
 * We've not found a keyboard with more than 35 function keys total.
 */

Key_F1                            = 0xffbe,
Key_F2                            = 0xffbf,
Key_F3                            = 0xffc0,
Key_F4                            = 0xffc1,
Key_F5                            = 0xffc2,
Key_F6                            = 0xffc3,
Key_F7                            = 0xffc4,
Key_F8                            = 0xffc5,
Key_F9                            = 0xffc6,
Key_F10                           = 0xffc7,
Key_F11                           = 0xffc8,
Key_L1                            = 0xffc8,
Key_F12                           = 0xffc9,
Key_L2                            = 0xffc9,
Key_F13                           = 0xffca,
Key_L3                            = 0xffca,
Key_F14                           = 0xffcb,
Key_L4                            = 0xffcb,
Key_F15                           = 0xffcc,
Key_L5                            = 0xffcc,
Key_F16                           = 0xffcd,
Key_L6                            = 0xffcd,
Key_F17                           = 0xffce,
Key_L7                            = 0xffce,
Key_F18                           = 0xffcf,
Key_L8                            = 0xffcf,
Key_F19                           = 0xffd0,
Key_L9                            = 0xffd0,
Key_F20                           = 0xffd1,
Key_L10                           = 0xffd1,
Key_F21                           = 0xffd2,
Key_R1                            = 0xffd2,
Key_F22                           = 0xffd3,
Key_R2                            = 0xffd3,
Key_F23                           = 0xffd4,
Key_R3                            = 0xffd4,
Key_F24                           = 0xffd5,
Key_R4                            = 0xffd5,
Key_F25                           = 0xffd6,
Key_R5                            = 0xffd6,
Key_F26                           = 0xffd7,
Key_R6                            = 0xffd7,
Key_F27                           = 0xffd8,
Key_R7                            = 0xffd8,
Key_F28                           = 0xffd9,
Key_R8                            = 0xffd9,
Key_F29                           = 0xffda,
Key_R9                            = 0xffda,
Key_F30                           = 0xffdb,
Key_R10                           = 0xffdb,
Key_F31                           = 0xffdc,
Key_R11                           = 0xffdc,
Key_F32                           = 0xffdd,
Key_R12                           = 0xffdd,
Key_F33                           = 0xffde,
Key_R13                           = 0xffde,
Key_F34                           = 0xffdf,
Key_R14                           = 0xffdf,
Key_F35                           = 0xffe0,
Key_R15                           = 0xffe0,

/* Modifiers */

Key_Shift_L                       = 0xffe1,  /* Left shift */
Key_Shift_R                       = 0xffe2,  /* Right shift */
Key_Control_L                     = 0xffe3,  /* Left control */
Key_Control_R                     = 0xffe4,  /* Right control */
Key_Caps_Lock                     = 0xffe5,  /* Caps lock */
Key_Shift_Lock                    = 0xffe6,  /* Shift lock */

Key_Meta_L                        = 0xffe7,  /* Left meta */
Key_Meta_R                        = 0xffe8,  /* Right meta */
Key_Alt_L                         = 0xffe9,  /* Left alt */
Key_Alt_R                         = 0xffea,  /* Right alt */
Key_Super_L                       = 0xffeb,  /* Left super */
Key_Super_R                       = 0xffec,  /* Right super */
Key_Hyper_L                       = 0xffed,  /* Left hyper */
Key_Hyper_R                       = 0xffee,  /* Right hyper */


/*
 * Keyboard (XKB) Extension function and modifier keys
 * (from Appendix C of "The X Keyboard Extension: Protocol Specification")
 * Byte 3 = = 0xfe,
 */


Key_ISO_Lock                      = 0xfe01,
Key_ISO_Level2_Latch              = 0xfe02,
Key_ISO_Level3_Shift              = 0xfe03,
Key_ISO_Level3_Latch              = 0xfe04,
Key_ISO_Level3_Lock               = 0xfe05,
Key_ISO_Level5_Shift              = 0xfe11,
Key_ISO_Level5_Latch              = 0xfe12,
Key_ISO_Level5_Lock               = 0xfe13,
Key_ISO_Group_Shift               = 0xff7e,  /* Alias for mode_switch */
Key_ISO_Group_Latch               = 0xfe06,
Key_ISO_Group_Lock                = 0xfe07,
Key_ISO_Next_Group                = 0xfe08,
Key_ISO_Next_Group_Lock           = 0xfe09,
Key_ISO_Prev_Group                = 0xfe0a,
Key_ISO_Prev_Group_Lock           = 0xfe0b,
Key_ISO_First_Group               = 0xfe0c,
Key_ISO_First_Group_Lock          = 0xfe0d,
Key_ISO_Last_Group                = 0xfe0e,
Key_ISO_Last_Group_Lock           = 0xfe0f,

Key_ISO_Left_Tab                  = 0xfe20,
Key_ISO_Move_Line_Up              = 0xfe21,
Key_ISO_Move_Line_Down            = 0xfe22,
Key_ISO_Partial_Line_Up           = 0xfe23,
Key_ISO_Partial_Line_Down         = 0xfe24,
Key_ISO_Partial_Space_Left        = 0xfe25,
Key_ISO_Partial_Space_Right       = 0xfe26,
Key_ISO_Set_Margin_Left           = 0xfe27,
Key_ISO_Set_Margin_Right          = 0xfe28,
Key_ISO_Release_Margin_Left       = 0xfe29,
Key_ISO_Release_Margin_Right      = 0xfe2a,
Key_ISO_Release_Both_Margins      = 0xfe2b,
Key_ISO_Fast_Cursor_Left          = 0xfe2c,
Key_ISO_Fast_Cursor_Right         = 0xfe2d,
Key_ISO_Fast_Cursor_Up            = 0xfe2e,
Key_ISO_Fast_Cursor_Down          = 0xfe2f,
Key_ISO_Continuous_Underline      = 0xfe30,
Key_ISO_Discontinuous_Underline   = 0xfe31,
Key_ISO_Emphasize                 = 0xfe32,
Key_ISO_Center_Object             = 0xfe33,
Key_ISO_Enter                     = 0xfe34,

Key_dead_grave                    = 0xfe50,
Key_dead_acute                    = 0xfe51,
Key_dead_circumflex               = 0xfe52,
Key_dead_tilde                    = 0xfe53,
Key_dead_perispomeni              = 0xfe53,  /* alias for dead_tilde */
Key_dead_macron                   = 0xfe54,
Key_dead_breve                    = 0xfe55,
Key_dead_abovedot                 = 0xfe56,
Key_dead_diaeresis                = 0xfe57,
Key_dead_abovering                = 0xfe58,
Key_dead_doubleacute              = 0xfe59,
Key_dead_caron                    = 0xfe5a,
Key_dead_cedilla                  = 0xfe5b,
Key_dead_ogonek                   = 0xfe5c,
Key_dead_iota                     = 0xfe5d,
Key_dead_voiced_sound             = 0xfe5e,
Key_dead_semivoiced_sound         = 0xfe5f,
Key_dead_belowdot                 = 0xfe60,
Key_dead_hook                     = 0xfe61,
Key_dead_horn                     = 0xfe62,
Key_dead_stroke                   = 0xfe63,
Key_dead_abovecomma               = 0xfe64,
Key_dead_psili                    = 0xfe64,  /* alias for dead_abovecomma */
Key_dead_abovereversedcomma       = 0xfe65,
Key_dead_dasia                    = 0xfe65,  /* alias for dead_abovereversedcomma */
Key_dead_doublegrave              = 0xfe66,
Key_dead_belowring                = 0xfe67,
Key_dead_belowmacron              = 0xfe68,
Key_dead_belowcircumflex          = 0xfe69,
Key_dead_belowtilde               = 0xfe6a,
Key_dead_belowbreve               = 0xfe6b,
Key_dead_belowdiaeresis           = 0xfe6c,
Key_dead_invertedbreve            = 0xfe6d,
Key_dead_belowcomma               = 0xfe6e,
Key_dead_currency                 = 0xfe6f,

/* dead vowels for universal syllable entry */
Key_dead_a                        = 0xfe80,
Key_dead_A                        = 0xfe81,
Key_dead_e                        = 0xfe82,
Key_dead_E                        = 0xfe83,
Key_dead_i                        = 0xfe84,
Key_dead_I                        = 0xfe85,
Key_dead_o                        = 0xfe86,
Key_dead_O                        = 0xfe87,
Key_dead_u                        = 0xfe88,
Key_dead_U                        = 0xfe89,
Key_dead_small_schwa              = 0xfe8a,
Key_dead_capital_schwa            = 0xfe8b,

Key_First_Virtual_Screen          = 0xfed0,
Key_Prev_Virtual_Screen           = 0xfed1,
Key_Next_Virtual_Screen           = 0xfed2,
Key_Last_Virtual_Screen           = 0xfed4,
Key_Terminate_Server              = 0xfed5,

Key_AccessX_Enable                = 0xfe70,
Key_AccessX_Feedback_Enable       = 0xfe71,
Key_RepeatKeys_Enable             = 0xfe72,
Key_SlowKeys_Enable               = 0xfe73,
Key_BounceKeys_Enable             = 0xfe74,
Key_StickyKeys_Enable             = 0xfe75,
Key_MouseKeys_Enable              = 0xfe76,
Key_MouseKeys_Accel_Enable        = 0xfe77,
Key_Overlay1_Enable               = 0xfe78,
Key_Overlay2_Enable               = 0xfe79,
Key_AudibleBell_Enable            = 0xfe7a,

Key_Pointer_Left                  = 0xfee0,
Key_Pointer_Right                 = 0xfee1,
Key_Pointer_Up                    = 0xfee2,
Key_Pointer_Down                  = 0xfee3,
Key_Pointer_UpLeft                = 0xfee4,
Key_Pointer_UpRight               = 0xfee5,
Key_Pointer_DownLeft              = 0xfee6,
Key_Pointer_DownRight             = 0xfee7,
Key_Pointer_Button_Dflt           = 0xfee8,
Key_Pointer_Button1               = 0xfee9,
Key_Pointer_Button2               = 0xfeea,
Key_Pointer_Button3               = 0xfeeb,
Key_Pointer_Button4               = 0xfeec,
Key_Pointer_Button5               = 0xfeed,
Key_Pointer_DblClick_Dflt         = 0xfeee,
Key_Pointer_DblClick1             = 0xfeef,
Key_Pointer_DblClick2             = 0xfef0,
Key_Pointer_DblClick3             = 0xfef1,
Key_Pointer_DblClick4             = 0xfef2,
Key_Pointer_DblClick5             = 0xfef3,
Key_Pointer_Drag_Dflt             = 0xfef4,
Key_Pointer_Drag1                 = 0xfef5,
Key_Pointer_Drag2                 = 0xfef6,
Key_Pointer_Drag3                 = 0xfef7,
Key_Pointer_Drag4                 = 0xfef8,
Key_Pointer_Drag5                 = 0xfefd,

Key_Pointer_EnableKeys            = 0xfef9,
Key_Pointer_Accelerate            = 0xfefa,
Key_Pointer_DfltBtnNext           = 0xfefb,
Key_Pointer_DfltBtnPrev           = 0xfefc,



/*
 * 3270 Terminal Keys
 * Byte 3 = = 0xfd,
 */


Key_3270_Duplicate                = 0xfd01,
Key_3270_FieldMark                = 0xfd02,
Key_3270_Right2                   = 0xfd03,
Key_3270_Left2                    = 0xfd04,
Key_3270_BackTab                  = 0xfd05,
Key_3270_EraseEOF                 = 0xfd06,
Key_3270_EraseInput               = 0xfd07,
Key_3270_Reset                    = 0xfd08,
Key_3270_Quit                     = 0xfd09,
Key_3270_PA1                      = 0xfd0a,
Key_3270_PA2                      = 0xfd0b,
Key_3270_PA3                      = 0xfd0c,
Key_3270_Test                     = 0xfd0d,
Key_3270_Attn                     = 0xfd0e,
Key_3270_CursorBlink              = 0xfd0f,
Key_3270_AltCursor                = 0xfd10,
Key_3270_KeyClick                 = 0xfd11,
Key_3270_Jump                     = 0xfd12,
Key_3270_Ident                    = 0xfd13,
Key_3270_Rule                     = 0xfd14,
Key_3270_Copy                     = 0xfd15,
Key_3270_Play                     = 0xfd16,
Key_3270_Setup                    = 0xfd17,
Key_3270_Record                   = 0xfd18,
Key_3270_ChangeScreen             = 0xfd19,
Key_3270_DeleteWord               = 0xfd1a,
Key_3270_ExSelect                 = 0xfd1b,
Key_3270_CursorSelect             = 0xfd1c,
Key_3270_PrintScreen              = 0xfd1d,
Key_3270_Enter                    = 0xfd1e,


/*
 * Latin 1
 * (ISO/IEC 8859-1 = Unicode U+0020..U+00FF)
 * Byte 3 = 0
 */

Key_space                         = 0x0020,  /* U+0020 SPACE */
Key_exclam                        = 0x0021,  /* U+0021 EXCLAMATION MARK */
Key_quotedbl                      = 0x0022,  /* U+0022 QUOTATION MARK */
Key_numbersign                    = 0x0023,  /* U+0023 NUMBER SIGN */
Key_dollar                        = 0x0024,  /* U+0024 DOLLAR SIGN */
Key_percent                       = 0x0025,  /* U+0025 PERCENT SIGN */
Key_ampersand                     = 0x0026,  /* U+0026 AMPERSAND */
Key_apostrophe                    = 0x0027,  /* U+0027 APOSTROPHE */
Key_quoteright                    = 0x0027,  /* deprecated */
Key_parenleft                     = 0x0028,  /* U+0028 LEFT PARENTHESIS */
Key_parenright                    = 0x0029,  /* U+0029 RIGHT PARENTHESIS */
Key_asterisk                      = 0x002a,  /* U+002A ASTERISK */
Key_plus                          = 0x002b,  /* U+002B PLUS SIGN */
Key_comma                         = 0x002c,  /* U+002C COMMA */
Key_minus                         = 0x002d,  /* U+002D HYPHEN-MINUS */
Key_period                        = 0x002e,  /* U+002E FULL STOP */
Key_slash                         = 0x002f,  /* U+002F SOLIDUS */
Key_0                             = 0x0030,  /* U+0030 DIGIT ZERO */
Key_1                             = 0x0031,  /* U+0031 DIGIT ONE */
Key_2                             = 0x0032,  /* U+0032 DIGIT TWO */
Key_3                             = 0x0033,  /* U+0033 DIGIT THREE */
Key_4                             = 0x0034,  /* U+0034 DIGIT FOUR */
Key_5                             = 0x0035,  /* U+0035 DIGIT FIVE */
Key_6                             = 0x0036,  /* U+0036 DIGIT SIX */
Key_7                             = 0x0037,  /* U+0037 DIGIT SEVEN */
Key_8                             = 0x0038,  /* U+0038 DIGIT EIGHT */
Key_9                             = 0x0039,  /* U+0039 DIGIT NINE */
Key_colon                         = 0x003a,  /* U+003A COLON */
Key_semicolon                     = 0x003b,  /* U+003B SEMICOLON */
Key_less                          = 0x003c,  /* U+003C LESS-THAN SIGN */
Key_equal                         = 0x003d,  /* U+003D EQUALS SIGN */
Key_greater                       = 0x003e,  /* U+003E GREATER-THAN SIGN */
Key_question                      = 0x003f,  /* U+003F QUESTION MARK */
Key_at                            = 0x0040,  /* U+0040 COMMERCIAL AT */
Key_A                             = 0x0041,  /* U+0041 LATIN CAPITAL LETTER A */
Key_B                             = 0x0042,  /* U+0042 LATIN CAPITAL LETTER B */
Key_C                             = 0x0043,  /* U+0043 LATIN CAPITAL LETTER C */
Key_D                             = 0x0044,  /* U+0044 LATIN CAPITAL LETTER D */
Key_E                             = 0x0045,  /* U+0045 LATIN CAPITAL LETTER E */
Key_F                             = 0x0046,  /* U+0046 LATIN CAPITAL LETTER F */
Key_G                             = 0x0047,  /* U+0047 LATIN CAPITAL LETTER G */
Key_H                             = 0x0048,  /* U+0048 LATIN CAPITAL LETTER H */
Key_I                             = 0x0049,  /* U+0049 LATIN CAPITAL LETTER I */
Key_J                             = 0x004a,  /* U+004A LATIN CAPITAL LETTER J */
Key_K                             = 0x004b,  /* U+004B LATIN CAPITAL LETTER K */
Key_L                             = 0x004c,  /* U+004C LATIN CAPITAL LETTER L */
Key_M                             = 0x004d,  /* U+004D LATIN CAPITAL LETTER M */
Key_N                             = 0x004e,  /* U+004E LATIN CAPITAL LETTER N */
Key_O                             = 0x004f,  /* U+004F LATIN CAPITAL LETTER O */
Key_P                             = 0x0050,  /* U+0050 LATIN CAPITAL LETTER P */
Key_Q                             = 0x0051,  /* U+0051 LATIN CAPITAL LETTER Q */
Key_R                             = 0x0052,  /* U+0052 LATIN CAPITAL LETTER R */
Key_S                             = 0x0053,  /* U+0053 LATIN CAPITAL LETTER S */
Key_T                             = 0x0054,  /* U+0054 LATIN CAPITAL LETTER T */
Key_U                             = 0x0055,  /* U+0055 LATIN CAPITAL LETTER U */
Key_V                             = 0x0056,  /* U+0056 LATIN CAPITAL LETTER V */
Key_W                             = 0x0057,  /* U+0057 LATIN CAPITAL LETTER W */
Key_X                             = 0x0058,  /* U+0058 LATIN CAPITAL LETTER X */
Key_Y                             = 0x0059,  /* U+0059 LATIN CAPITAL LETTER Y */
Key_Z                             = 0x005a,  /* U+005A LATIN CAPITAL LETTER Z */
Key_bracketleft                   = 0x005b,  /* U+005B LEFT SQUARE BRACKET */
Key_backslash                     = 0x005c,  /* U+005C REVERSE SOLIDUS */
Key_bracketright                  = 0x005d,  /* U+005D RIGHT SQUARE BRACKET */
Key_asciicircum                   = 0x005e,  /* U+005E CIRCUMFLEX ACCENT */
Key_underscore                    = 0x005f,  /* U+005F LOW LINE */
Key_grave                         = 0x0060,  /* U+0060 GRAVE ACCENT */
Key_quoteleft                     = 0x0060,  /* deprecated */
Key_a                             = 0x0061,  /* U+0061 LATIN SMALL LETTER A */
Key_b                             = 0x0062,  /* U+0062 LATIN SMALL LETTER B */
Key_c                             = 0x0063,  /* U+0063 LATIN SMALL LETTER C */
Key_d                             = 0x0064,  /* U+0064 LATIN SMALL LETTER D */
Key_e                             = 0x0065,  /* U+0065 LATIN SMALL LETTER E */
Key_f                             = 0x0066,  /* U+0066 LATIN SMALL LETTER F */
Key_g                             = 0x0067,  /* U+0067 LATIN SMALL LETTER G */
Key_h                             = 0x0068,  /* U+0068 LATIN SMALL LETTER H */
Key_i                             = 0x0069,  /* U+0069 LATIN SMALL LETTER I */
Key_j                             = 0x006a,  /* U+006A LATIN SMALL LETTER J */
Key_k                             = 0x006b,  /* U+006B LATIN SMALL LETTER K */
Key_l                             = 0x006c,  /* U+006C LATIN SMALL LETTER L */
Key_m                             = 0x006d,  /* U+006D LATIN SMALL LETTER M */
Key_n                             = 0x006e,  /* U+006E LATIN SMALL LETTER N */
Key_o                             = 0x006f,  /* U+006F LATIN SMALL LETTER O */
Key_p                             = 0x0070,  /* U+0070 LATIN SMALL LETTER P */
Key_q                             = 0x0071,  /* U+0071 LATIN SMALL LETTER Q */
Key_r                             = 0x0072,  /* U+0072 LATIN SMALL LETTER R */
Key_s                             = 0x0073,  /* U+0073 LATIN SMALL LETTER S */
Key_t                             = 0x0074,  /* U+0074 LATIN SMALL LETTER T */
Key_u                             = 0x0075,  /* U+0075 LATIN SMALL LETTER U */
Key_v                             = 0x0076,  /* U+0076 LATIN SMALL LETTER V */
Key_w                             = 0x0077,  /* U+0077 LATIN SMALL LETTER W */
Key_x                             = 0x0078,  /* U+0078 LATIN SMALL LETTER X */
Key_y                             = 0x0079,  /* U+0079 LATIN SMALL LETTER Y */
Key_z                             = 0x007a,  /* U+007A LATIN SMALL LETTER Z */
Key_braceleft                     = 0x007b,  /* U+007B LEFT CURLY BRACKET */
Key_bar                           = 0x007c,  /* U+007C VERTICAL LINE */
Key_braceright                    = 0x007d,  /* U+007D RIGHT CURLY BRACKET */
Key_asciitilde                    = 0x007e,  /* U+007E TILDE */

Key_nobreakspace                  = 0x00a0,  /* U+00A0 NO-BREAK SPACE */
Key_exclamdown                    = 0x00a1,  /* U+00A1 INVERTED EXCLAMATION MARK */
Key_cent                          = 0x00a2,  /* U+00A2 CENT SIGN */
Key_sterling                      = 0x00a3,  /* U+00A3 POUND SIGN */
Key_currency                      = 0x00a4,  /* U+00A4 CURRENCY SIGN */
Key_yen                           = 0x00a5,  /* U+00A5 YEN SIGN */
Key_brokenbar                     = 0x00a6,  /* U+00A6 BROKEN BAR */
Key_section                       = 0x00a7,  /* U+00A7 SECTION SIGN */
Key_diaeresis                     = 0x00a8,  /* U+00A8 DIAERESIS */
Key_copyright                     = 0x00a9,  /* U+00A9 COPYRIGHT SIGN */
Key_ordfeminine                   = 0x00aa,  /* U+00AA FEMININE ORDINAL INDICATOR */
Key_guillemotleft                 = 0x00ab,  /* U+00AB LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
Key_notsign                       = 0x00ac,  /* U+00AC NOT SIGN */
Key_hyphen                        = 0x00ad,  /* U+00AD SOFT HYPHEN */
Key_registered                    = 0x00ae,  /* U+00AE REGISTERED SIGN */
Key_macron                        = 0x00af,  /* U+00AF MACRON */
Key_degree                        = 0x00b0,  /* U+00B0 DEGREE SIGN */
Key_plusminus                     = 0x00b1,  /* U+00B1 PLUS-MINUS SIGN */
Key_twosuperior                   = 0x00b2,  /* U+00B2 SUPERSCRIPT TWO */
Key_threesuperior                 = 0x00b3,  /* U+00B3 SUPERSCRIPT THREE */
Key_acute                         = 0x00b4,  /* U+00B4 ACUTE ACCENT */
Key_mu                            = 0x00b5,  /* U+00B5 MICRO SIGN */
Key_paragraph                     = 0x00b6,  /* U+00B6 PILCROW SIGN */
Key_periodcentered                = 0x00b7,  /* U+00B7 MIDDLE DOT */
Key_cedilla                       = 0x00b8,  /* U+00B8 CEDILLA */
Key_onesuperior                   = 0x00b9,  /* U+00B9 SUPERSCRIPT ONE */
Key_masculine                     = 0x00ba,  /* U+00BA MASCULINE ORDINAL INDICATOR */
Key_guillemotright                = 0x00bb,  /* U+00BB RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
Key_onequarter                    = 0x00bc,  /* U+00BC VULGAR FRACTION ONE QUARTER */
Key_onehalf                       = 0x00bd,  /* U+00BD VULGAR FRACTION ONE HALF */
Key_threequarters                 = 0x00be,  /* U+00BE VULGAR FRACTION THREE QUARTERS */
Key_questiondown                  = 0x00bf,  /* U+00BF INVERTED QUESTION MARK */
Key_Agrave                        = 0x00c0,  /* U+00C0 LATIN CAPITAL LETTER A WITH GRAVE */
Key_Aacute                        = 0x00c1,  /* U+00C1 LATIN CAPITAL LETTER A WITH ACUTE */
Key_Acircumflex                   = 0x00c2,  /* U+00C2 LATIN CAPITAL LETTER A WITH CIRCUMFLEX */
Key_Atilde                        = 0x00c3,  /* U+00C3 LATIN CAPITAL LETTER A WITH TILDE */
Key_Adiaeresis                    = 0x00c4,  /* U+00C4 LATIN CAPITAL LETTER A WITH DIAERESIS */
Key_Aring                         = 0x00c5,  /* U+00C5 LATIN CAPITAL LETTER A WITH RING ABOVE */
Key_AE                            = 0x00c6,  /* U+00C6 LATIN CAPITAL LETTER AE */
Key_Ccedilla                      = 0x00c7,  /* U+00C7 LATIN CAPITAL LETTER C WITH CEDILLA */
Key_Egrave                        = 0x00c8,  /* U+00C8 LATIN CAPITAL LETTER E WITH GRAVE */
Key_Eacute                        = 0x00c9,  /* U+00C9 LATIN CAPITAL LETTER E WITH ACUTE */
Key_Ecircumflex                   = 0x00ca,  /* U+00CA LATIN CAPITAL LETTER E WITH CIRCUMFLEX */
Key_Ediaeresis                    = 0x00cb,  /* U+00CB LATIN CAPITAL LETTER E WITH DIAERESIS */
Key_Igrave                        = 0x00cc,  /* U+00CC LATIN CAPITAL LETTER I WITH GRAVE */
Key_Iacute                        = 0x00cd,  /* U+00CD LATIN CAPITAL LETTER I WITH ACUTE */
Key_Icircumflex                   = 0x00ce,  /* U+00CE LATIN CAPITAL LETTER I WITH CIRCUMFLEX */
Key_Idiaeresis                    = 0x00cf,  /* U+00CF LATIN CAPITAL LETTER I WITH DIAERESIS */
Key_ETH                           = 0x00d0,  /* U+00D0 LATIN CAPITAL LETTER ETH */
Key_Eth                           = 0x00d0,  /* deprecated */
Key_Ntilde                        = 0x00d1,  /* U+00D1 LATIN CAPITAL LETTER N WITH TILDE */
Key_Ograve                        = 0x00d2,  /* U+00D2 LATIN CAPITAL LETTER O WITH GRAVE */
Key_Oacute                        = 0x00d3,  /* U+00D3 LATIN CAPITAL LETTER O WITH ACUTE */
Key_Ocircumflex                   = 0x00d4,  /* U+00D4 LATIN CAPITAL LETTER O WITH CIRCUMFLEX */
Key_Otilde                        = 0x00d5,  /* U+00D5 LATIN CAPITAL LETTER O WITH TILDE */
Key_Odiaeresis                    = 0x00d6,  /* U+00D6 LATIN CAPITAL LETTER O WITH DIAERESIS */
Key_multiply                      = 0x00d7,  /* U+00D7 MULTIPLICATION SIGN */
Key_Oslash                        = 0x00d8,  /* U+00D8 LATIN CAPITAL LETTER O WITH STROKE */
Key_Ooblique                      = 0x00d8,  /* U+00D8 LATIN CAPITAL LETTER O WITH STROKE */
Key_Ugrave                        = 0x00d9,  /* U+00D9 LATIN CAPITAL LETTER U WITH GRAVE */
Key_Uacute                        = 0x00da,  /* U+00DA LATIN CAPITAL LETTER U WITH ACUTE */
Key_Ucircumflex                   = 0x00db,  /* U+00DB LATIN CAPITAL LETTER U WITH CIRCUMFLEX */
Key_Udiaeresis                    = 0x00dc,  /* U+00DC LATIN CAPITAL LETTER U WITH DIAERESIS */
Key_Yacute                        = 0x00dd,  /* U+00DD LATIN CAPITAL LETTER Y WITH ACUTE */
Key_THORN                         = 0x00de,  /* U+00DE LATIN CAPITAL LETTER THORN */
Key_Thorn                         = 0x00de,  /* deprecated */
Key_ssharp                        = 0x00df,  /* U+00DF LATIN SMALL LETTER SHARP S */
Key_agrave                        = 0x00e0,  /* U+00E0 LATIN SMALL LETTER A WITH GRAVE */
Key_aacute                        = 0x00e1,  /* U+00E1 LATIN SMALL LETTER A WITH ACUTE */
Key_acircumflex                   = 0x00e2,  /* U+00E2 LATIN SMALL LETTER A WITH CIRCUMFLEX */
Key_atilde                        = 0x00e3,  /* U+00E3 LATIN SMALL LETTER A WITH TILDE */
Key_adiaeresis                    = 0x00e4,  /* U+00E4 LATIN SMALL LETTER A WITH DIAERESIS */
Key_aring                         = 0x00e5,  /* U+00E5 LATIN SMALL LETTER A WITH RING ABOVE */
Key_ae                            = 0x00e6,  /* U+00E6 LATIN SMALL LETTER AE */
Key_ccedilla                      = 0x00e7,  /* U+00E7 LATIN SMALL LETTER C WITH CEDILLA */
Key_egrave                        = 0x00e8,  /* U+00E8 LATIN SMALL LETTER E WITH GRAVE */
Key_eacute                        = 0x00e9,  /* U+00E9 LATIN SMALL LETTER E WITH ACUTE */
Key_ecircumflex                   = 0x00ea,  /* U+00EA LATIN SMALL LETTER E WITH CIRCUMFLEX */
Key_ediaeresis                    = 0x00eb,  /* U+00EB LATIN SMALL LETTER E WITH DIAERESIS */
Key_igrave                        = 0x00ec,  /* U+00EC LATIN SMALL LETTER I WITH GRAVE */
Key_iacute                        = 0x00ed,  /* U+00ED LATIN SMALL LETTER I WITH ACUTE */
Key_icircumflex                   = 0x00ee,  /* U+00EE LATIN SMALL LETTER I WITH CIRCUMFLEX */
Key_idiaeresis                    = 0x00ef,  /* U+00EF LATIN SMALL LETTER I WITH DIAERESIS */
Key_eth                           = 0x00f0,  /* U+00F0 LATIN SMALL LETTER ETH */
Key_ntilde                        = 0x00f1,  /* U+00F1 LATIN SMALL LETTER N WITH TILDE */
Key_ograve                        = 0x00f2,  /* U+00F2 LATIN SMALL LETTER O WITH GRAVE */
Key_oacute                        = 0x00f3,  /* U+00F3 LATIN SMALL LETTER O WITH ACUTE */
Key_ocircumflex                   = 0x00f4,  /* U+00F4 LATIN SMALL LETTER O WITH CIRCUMFLEX */
Key_otilde                        = 0x00f5,  /* U+00F5 LATIN SMALL LETTER O WITH TILDE */
Key_odiaeresis                    = 0x00f6,  /* U+00F6 LATIN SMALL LETTER O WITH DIAERESIS */
Key_division                      = 0x00f7,  /* U+00F7 DIVISION SIGN */
Key_oslash                        = 0x00f8,  /* U+00F8 LATIN SMALL LETTER O WITH STROKE */
Key_ooblique                      = 0x00f8,  /* U+00F8 LATIN SMALL LETTER O WITH STROKE */
Key_ugrave                        = 0x00f9,  /* U+00F9 LATIN SMALL LETTER U WITH GRAVE */
Key_uacute                        = 0x00fa,  /* U+00FA LATIN SMALL LETTER U WITH ACUTE */
Key_ucircumflex                   = 0x00fb,  /* U+00FB LATIN SMALL LETTER U WITH CIRCUMFLEX */
Key_udiaeresis                    = 0x00fc,  /* U+00FC LATIN SMALL LETTER U WITH DIAERESIS */
Key_yacute                        = 0x00fd,  /* U+00FD LATIN SMALL LETTER Y WITH ACUTE */
Key_thorn                         = 0x00fe,  /* U+00FE LATIN SMALL LETTER THORN */
Key_ydiaeresis                    = 0x00ff,  /* U+00FF LATIN SMALL LETTER Y WITH DIAERESIS */


/*
 * Latin 2
 * Byte 3 = 1
 */


Key_Aogonek                       = 0x01a1,  /* U+0104 LATIN CAPITAL LETTER A WITH OGONEK */
Key_breve                         = 0x01a2,  /* U+02D8 BREVE */
Key_Lstroke                       = 0x01a3,  /* U+0141 LATIN CAPITAL LETTER L WITH STROKE */
Key_Lcaron                        = 0x01a5,  /* U+013D LATIN CAPITAL LETTER L WITH CARON */
Key_Sacute                        = 0x01a6,  /* U+015A LATIN CAPITAL LETTER S WITH ACUTE */
Key_Scaron                        = 0x01a9,  /* U+0160 LATIN CAPITAL LETTER S WITH CARON */
Key_Scedilla                      = 0x01aa,  /* U+015E LATIN CAPITAL LETTER S WITH CEDILLA */
Key_Tcaron                        = 0x01ab,  /* U+0164 LATIN CAPITAL LETTER T WITH CARON */
Key_Zacute                        = 0x01ac,  /* U+0179 LATIN CAPITAL LETTER Z WITH ACUTE */
Key_Zcaron                        = 0x01ae,  /* U+017D LATIN CAPITAL LETTER Z WITH CARON */
Key_Zabovedot                     = 0x01af,  /* U+017B LATIN CAPITAL LETTER Z WITH DOT ABOVE */
Key_aogonek                       = 0x01b1,  /* U+0105 LATIN SMALL LETTER A WITH OGONEK */
Key_ogonek                        = 0x01b2,  /* U+02DB OGONEK */
Key_lstroke                       = 0x01b3,  /* U+0142 LATIN SMALL LETTER L WITH STROKE */
Key_lcaron                        = 0x01b5,  /* U+013E LATIN SMALL LETTER L WITH CARON */
Key_sacute                        = 0x01b6,  /* U+015B LATIN SMALL LETTER S WITH ACUTE */
Key_caron                         = 0x01b7,  /* U+02C7 CARON */
Key_scaron                        = 0x01b9,  /* U+0161 LATIN SMALL LETTER S WITH CARON */
Key_scedilla                      = 0x01ba,  /* U+015F LATIN SMALL LETTER S WITH CEDILLA */
Key_tcaron                        = 0x01bb,  /* U+0165 LATIN SMALL LETTER T WITH CARON */
Key_zacute                        = 0x01bc,  /* U+017A LATIN SMALL LETTER Z WITH ACUTE */
Key_doubleacute                   = 0x01bd,  /* U+02DD DOUBLE ACUTE ACCENT */
Key_zcaron                        = 0x01be,  /* U+017E LATIN SMALL LETTER Z WITH CARON */
Key_zabovedot                     = 0x01bf,  /* U+017C LATIN SMALL LETTER Z WITH DOT ABOVE */
Key_Racute                        = 0x01c0,  /* U+0154 LATIN CAPITAL LETTER R WITH ACUTE */
Key_Abreve                        = 0x01c3,  /* U+0102 LATIN CAPITAL LETTER A WITH BREVE */
Key_Lacute                        = 0x01c5,  /* U+0139 LATIN CAPITAL LETTER L WITH ACUTE */
Key_Cacute                        = 0x01c6,  /* U+0106 LATIN CAPITAL LETTER C WITH ACUTE */
Key_Ccaron                        = 0x01c8,  /* U+010C LATIN CAPITAL LETTER C WITH CARON */
Key_Eogonek                       = 0x01ca,  /* U+0118 LATIN CAPITAL LETTER E WITH OGONEK */
Key_Ecaron                        = 0x01cc,  /* U+011A LATIN CAPITAL LETTER E WITH CARON */
Key_Dcaron                        = 0x01cf,  /* U+010E LATIN CAPITAL LETTER D WITH CARON */
Key_Dstroke                       = 0x01d0,  /* U+0110 LATIN CAPITAL LETTER D WITH STROKE */
Key_Nacute                        = 0x01d1,  /* U+0143 LATIN CAPITAL LETTER N WITH ACUTE */
Key_Ncaron                        = 0x01d2,  /* U+0147 LATIN CAPITAL LETTER N WITH CARON */
Key_Odoubleacute                  = 0x01d5,  /* U+0150 LATIN CAPITAL LETTER O WITH DOUBLE ACUTE */
Key_Rcaron                        = 0x01d8,  /* U+0158 LATIN CAPITAL LETTER R WITH CARON */
Key_Uring                         = 0x01d9,  /* U+016E LATIN CAPITAL LETTER U WITH RING ABOVE */
Key_Udoubleacute                  = 0x01db,  /* U+0170 LATIN CAPITAL LETTER U WITH DOUBLE ACUTE */
Key_Tcedilla                      = 0x01de,  /* U+0162 LATIN CAPITAL LETTER T WITH CEDILLA */
Key_racute                        = 0x01e0,  /* U+0155 LATIN SMALL LETTER R WITH ACUTE */
Key_abreve                        = 0x01e3,  /* U+0103 LATIN SMALL LETTER A WITH BREVE */
Key_lacute                        = 0x01e5,  /* U+013A LATIN SMALL LETTER L WITH ACUTE */
Key_cacute                        = 0x01e6,  /* U+0107 LATIN SMALL LETTER C WITH ACUTE */
Key_ccaron                        = 0x01e8,  /* U+010D LATIN SMALL LETTER C WITH CARON */
Key_eogonek                       = 0x01ea,  /* U+0119 LATIN SMALL LETTER E WITH OGONEK */
Key_ecaron                        = 0x01ec,  /* U+011B LATIN SMALL LETTER E WITH CARON */
Key_dcaron                        = 0x01ef,  /* U+010F LATIN SMALL LETTER D WITH CARON */
Key_dstroke                       = 0x01f0,  /* U+0111 LATIN SMALL LETTER D WITH STROKE */
Key_nacute                        = 0x01f1,  /* U+0144 LATIN SMALL LETTER N WITH ACUTE */
Key_ncaron                        = 0x01f2,  /* U+0148 LATIN SMALL LETTER N WITH CARON */
Key_odoubleacute                  = 0x01f5,  /* U+0151 LATIN SMALL LETTER O WITH DOUBLE ACUTE */
Key_udoubleacute                  = 0x01fb,  /* U+0171 LATIN SMALL LETTER U WITH DOUBLE ACUTE */
Key_rcaron                        = 0x01f8,  /* U+0159 LATIN SMALL LETTER R WITH CARON */
Key_uring                         = 0x01f9,  /* U+016F LATIN SMALL LETTER U WITH RING ABOVE */
Key_tcedilla                      = 0x01fe,  /* U+0163 LATIN SMALL LETTER T WITH CEDILLA */
Key_abovedot                      = 0x01ff,  /* U+02D9 DOT ABOVE */


/*
 * Latin 3
 * Byte 3 = 2
 */


Key_Hstroke                       = 0x02a1,  /* U+0126 LATIN CAPITAL LETTER H WITH STROKE */
Key_Hcircumflex                   = 0x02a6,  /* U+0124 LATIN CAPITAL LETTER H WITH CIRCUMFLEX */
Key_Iabovedot                     = 0x02a9,  /* U+0130 LATIN CAPITAL LETTER I WITH DOT ABOVE */
Key_Gbreve                        = 0x02ab,  /* U+011E LATIN CAPITAL LETTER G WITH BREVE */
Key_Jcircumflex                   = 0x02ac,  /* U+0134 LATIN CAPITAL LETTER J WITH CIRCUMFLEX */
Key_hstroke                       = 0x02b1,  /* U+0127 LATIN SMALL LETTER H WITH STROKE */
Key_hcircumflex                   = 0x02b6,  /* U+0125 LATIN SMALL LETTER H WITH CIRCUMFLEX */
Key_idotless                      = 0x02b9,  /* U+0131 LATIN SMALL LETTER DOTLESS I */
Key_gbreve                        = 0x02bb,  /* U+011F LATIN SMALL LETTER G WITH BREVE */
Key_jcircumflex                   = 0x02bc,  /* U+0135 LATIN SMALL LETTER J WITH CIRCUMFLEX */
Key_Cabovedot                     = 0x02c5,  /* U+010A LATIN CAPITAL LETTER C WITH DOT ABOVE */
Key_Ccircumflex                   = 0x02c6,  /* U+0108 LATIN CAPITAL LETTER C WITH CIRCUMFLEX */
Key_Gabovedot                     = 0x02d5,  /* U+0120 LATIN CAPITAL LETTER G WITH DOT ABOVE */
Key_Gcircumflex                   = 0x02d8,  /* U+011C LATIN CAPITAL LETTER G WITH CIRCUMFLEX */
Key_Ubreve                        = 0x02dd,  /* U+016C LATIN CAPITAL LETTER U WITH BREVE */
Key_Scircumflex                   = 0x02de,  /* U+015C LATIN CAPITAL LETTER S WITH CIRCUMFLEX */
Key_cabovedot                     = 0x02e5,  /* U+010B LATIN SMALL LETTER C WITH DOT ABOVE */
Key_ccircumflex                   = 0x02e6,  /* U+0109 LATIN SMALL LETTER C WITH CIRCUMFLEX */
Key_gabovedot                     = 0x02f5,  /* U+0121 LATIN SMALL LETTER G WITH DOT ABOVE */
Key_gcircumflex                   = 0x02f8,  /* U+011D LATIN SMALL LETTER G WITH CIRCUMFLEX */
Key_ubreve                        = 0x02fd,  /* U+016D LATIN SMALL LETTER U WITH BREVE */
Key_scircumflex                   = 0x02fe,  /* U+015D LATIN SMALL LETTER S WITH CIRCUMFLEX */



/*
 * Latin 4
 * Byte 3 = 3
 */


Key_kra                           = 0x03a2,  /* U+0138 LATIN SMALL LETTER KRA */
Key_kappa                         = 0x03a2,  /* deprecated */
Key_Rcedilla                      = 0x03a3,  /* U+0156 LATIN CAPITAL LETTER R WITH CEDILLA */
Key_Itilde                        = 0x03a5,  /* U+0128 LATIN CAPITAL LETTER I WITH TILDE */
Key_Lcedilla                      = 0x03a6,  /* U+013B LATIN CAPITAL LETTER L WITH CEDILLA */
Key_Emacron                       = 0x03aa,  /* U+0112 LATIN CAPITAL LETTER E WITH MACRON */
Key_Gcedilla                      = 0x03ab,  /* U+0122 LATIN CAPITAL LETTER G WITH CEDILLA */
Key_Tslash                        = 0x03ac,  /* U+0166 LATIN CAPITAL LETTER T WITH STROKE */
Key_rcedilla                      = 0x03b3,  /* U+0157 LATIN SMALL LETTER R WITH CEDILLA */
Key_itilde                        = 0x03b5,  /* U+0129 LATIN SMALL LETTER I WITH TILDE */
Key_lcedilla                      = 0x03b6,  /* U+013C LATIN SMALL LETTER L WITH CEDILLA */
Key_emacron                       = 0x03ba,  /* U+0113 LATIN SMALL LETTER E WITH MACRON */
Key_gcedilla                      = 0x03bb,  /* U+0123 LATIN SMALL LETTER G WITH CEDILLA */
Key_tslash                        = 0x03bc,  /* U+0167 LATIN SMALL LETTER T WITH STROKE */
Key_ENG                           = 0x03bd,  /* U+014A LATIN CAPITAL LETTER ENG */
Key_eng                           = 0x03bf,  /* U+014B LATIN SMALL LETTER ENG */
Key_Amacron                       = 0x03c0,  /* U+0100 LATIN CAPITAL LETTER A WITH MACRON */
Key_Iogonek                       = 0x03c7,  /* U+012E LATIN CAPITAL LETTER I WITH OGONEK */
Key_Eabovedot                     = 0x03cc,  /* U+0116 LATIN CAPITAL LETTER E WITH DOT ABOVE */
Key_Imacron                       = 0x03cf,  /* U+012A LATIN CAPITAL LETTER I WITH MACRON */
Key_Ncedilla                      = 0x03d1,  /* U+0145 LATIN CAPITAL LETTER N WITH CEDILLA */
Key_Omacron                       = 0x03d2,  /* U+014C LATIN CAPITAL LETTER O WITH MACRON */
Key_Kcedilla                      = 0x03d3,  /* U+0136 LATIN CAPITAL LETTER K WITH CEDILLA */
Key_Uogonek                       = 0x03d9,  /* U+0172 LATIN CAPITAL LETTER U WITH OGONEK */
Key_Utilde                        = 0x03dd,  /* U+0168 LATIN CAPITAL LETTER U WITH TILDE */
Key_Umacron                       = 0x03de,  /* U+016A LATIN CAPITAL LETTER U WITH MACRON */
Key_amacron                       = 0x03e0,  /* U+0101 LATIN SMALL LETTER A WITH MACRON */
Key_iogonek                       = 0x03e7,  /* U+012F LATIN SMALL LETTER I WITH OGONEK */
Key_eabovedot                     = 0x03ec,  /* U+0117 LATIN SMALL LETTER E WITH DOT ABOVE */
Key_imacron                       = 0x03ef,  /* U+012B LATIN SMALL LETTER I WITH MACRON */
Key_ncedilla                      = 0x03f1,  /* U+0146 LATIN SMALL LETTER N WITH CEDILLA */
Key_omacron                       = 0x03f2,  /* U+014D LATIN SMALL LETTER O WITH MACRON */
Key_kcedilla                      = 0x03f3,  /* U+0137 LATIN SMALL LETTER K WITH CEDILLA */
Key_uogonek                       = 0x03f9,  /* U+0173 LATIN SMALL LETTER U WITH OGONEK */
Key_utilde                        = 0x03fd,  /* U+0169 LATIN SMALL LETTER U WITH TILDE */
Key_umacron                       = 0x03fe,  /* U+016B LATIN SMALL LETTER U WITH MACRON */


/*
 * Latin 8
 */

Key_Babovedot                  = 0x1001e02,  /* U+1E02 LATIN CAPITAL LETTER B WITH DOT ABOVE */
Key_babovedot                  = 0x1001e03,  /* U+1E03 LATIN SMALL LETTER B WITH DOT ABOVE */
Key_Dabovedot                  = 0x1001e0a,  /* U+1E0A LATIN CAPITAL LETTER D WITH DOT ABOVE */
Key_Wgrave                     = 0x1001e80,  /* U+1E80 LATIN CAPITAL LETTER W WITH GRAVE */
Key_Wacute                     = 0x1001e82,  /* U+1E82 LATIN CAPITAL LETTER W WITH ACUTE */
Key_dabovedot                  = 0x1001e0b,  /* U+1E0B LATIN SMALL LETTER D WITH DOT ABOVE */
Key_Ygrave                     = 0x1001ef2,  /* U+1EF2 LATIN CAPITAL LETTER Y WITH GRAVE */
Key_Fabovedot                  = 0x1001e1e,  /* U+1E1E LATIN CAPITAL LETTER F WITH DOT ABOVE */
Key_fabovedot                  = 0x1001e1f,  /* U+1E1F LATIN SMALL LETTER F WITH DOT ABOVE */
Key_Mabovedot                  = 0x1001e40,  /* U+1E40 LATIN CAPITAL LETTER M WITH DOT ABOVE */
Key_mabovedot                  = 0x1001e41,  /* U+1E41 LATIN SMALL LETTER M WITH DOT ABOVE */
Key_Pabovedot                  = 0x1001e56,  /* U+1E56 LATIN CAPITAL LETTER P WITH DOT ABOVE */
Key_wgrave                     = 0x1001e81,  /* U+1E81 LATIN SMALL LETTER W WITH GRAVE */
Key_pabovedot                  = 0x1001e57,  /* U+1E57 LATIN SMALL LETTER P WITH DOT ABOVE */
Key_wacute                     = 0x1001e83,  /* U+1E83 LATIN SMALL LETTER W WITH ACUTE */
Key_Sabovedot                  = 0x1001e60,  /* U+1E60 LATIN CAPITAL LETTER S WITH DOT ABOVE */
Key_ygrave                     = 0x1001ef3,  /* U+1EF3 LATIN SMALL LETTER Y WITH GRAVE */
Key_Wdiaeresis                 = 0x1001e84,  /* U+1E84 LATIN CAPITAL LETTER W WITH DIAERESIS */
Key_wdiaeresis                 = 0x1001e85,  /* U+1E85 LATIN SMALL LETTER W WITH DIAERESIS */
Key_sabovedot                  = 0x1001e61,  /* U+1E61 LATIN SMALL LETTER S WITH DOT ABOVE */
Key_Wcircumflex                = 0x1000174,  /* U+0174 LATIN CAPITAL LETTER W WITH CIRCUMFLEX */
Key_Tabovedot                  = 0x1001e6a,  /* U+1E6A LATIN CAPITAL LETTER T WITH DOT ABOVE */
Key_Ycircumflex                = 0x1000176,  /* U+0176 LATIN CAPITAL LETTER Y WITH CIRCUMFLEX */
Key_wcircumflex                = 0x1000175,  /* U+0175 LATIN SMALL LETTER W WITH CIRCUMFLEX */
Key_tabovedot                  = 0x1001e6b,  /* U+1E6B LATIN SMALL LETTER T WITH DOT ABOVE */
Key_ycircumflex                = 0x1000177,  /* U+0177 LATIN SMALL LETTER Y WITH CIRCUMFLEX */


/*
 * Latin 9
 * Byte 3 = = 0x13,
 */


Key_OE                            = 0x13bc,  /* U+0152 LATIN CAPITAL LIGATURE OE */
Key_oe                            = 0x13bd,  /* U+0153 LATIN SMALL LIGATURE OE */
Key_Ydiaeresis                    = 0x13be,  /* U+0178 LATIN CAPITAL LETTER Y WITH DIAERESIS */


/*
 * Katakana
 * Byte 3 = 4
 */


Key_overline                      = 0x047e,  /* U+203E OVERLINE */
Key_kana_fullstop                 = 0x04a1,  /* U+3002 IDEOGRAPHIC FULL STOP */
Key_kana_openingbracket           = 0x04a2,  /* U+300C LEFT CORNER BRACKET */
Key_kana_closingbracket           = 0x04a3,  /* U+300D RIGHT CORNER BRACKET */
Key_kana_comma                    = 0x04a4,  /* U+3001 IDEOGRAPHIC COMMA */
Key_kana_conjunctive              = 0x04a5,  /* U+30FB KATAKANA MIDDLE DOT */
Key_kana_middledot                = 0x04a5,  /* deprecated */
Key_kana_WO                       = 0x04a6,  /* U+30F2 KATAKANA LETTER WO */
Key_kana_a                        = 0x04a7,  /* U+30A1 KATAKANA LETTER SMALL A */
Key_kana_i                        = 0x04a8,  /* U+30A3 KATAKANA LETTER SMALL I */
Key_kana_u                        = 0x04a9,  /* U+30A5 KATAKANA LETTER SMALL U */
Key_kana_e                        = 0x04aa,  /* U+30A7 KATAKANA LETTER SMALL E */
Key_kana_o                        = 0x04ab,  /* U+30A9 KATAKANA LETTER SMALL O */
Key_kana_ya                       = 0x04ac,  /* U+30E3 KATAKANA LETTER SMALL YA */
Key_kana_yu                       = 0x04ad,  /* U+30E5 KATAKANA LETTER SMALL YU */
Key_kana_yo                       = 0x04ae,  /* U+30E7 KATAKANA LETTER SMALL YO */
Key_kana_tsu                      = 0x04af,  /* U+30C3 KATAKANA LETTER SMALL TU */
Key_kana_tu                       = 0x04af,  /* deprecated */
Key_prolongedsound                = 0x04b0,  /* U+30FC KATAKANA-HIRAGANA PROLONGED SOUND MARK */
Key_kana_A                        = 0x04b1,  /* U+30A2 KATAKANA LETTER A */
Key_kana_I                        = 0x04b2,  /* U+30A4 KATAKANA LETTER I */
Key_kana_U                        = 0x04b3,  /* U+30A6 KATAKANA LETTER U */
Key_kana_E                        = 0x04b4,  /* U+30A8 KATAKANA LETTER E */
Key_kana_O                        = 0x04b5,  /* U+30AA KATAKANA LETTER O */
Key_kana_KA                       = 0x04b6,  /* U+30AB KATAKANA LETTER KA */
Key_kana_KI                       = 0x04b7,  /* U+30AD KATAKANA LETTER KI */
Key_kana_KU                       = 0x04b8,  /* U+30AF KATAKANA LETTER KU */
Key_kana_KE                       = 0x04b9,  /* U+30B1 KATAKANA LETTER KE */
Key_kana_KO                       = 0x04ba,  /* U+30B3 KATAKANA LETTER KO */
Key_kana_SA                       = 0x04bb,  /* U+30B5 KATAKANA LETTER SA */
Key_kana_SHI                      = 0x04bc,  /* U+30B7 KATAKANA LETTER SI */
Key_kana_SU                       = 0x04bd,  /* U+30B9 KATAKANA LETTER SU */
Key_kana_SE                       = 0x04be,  /* U+30BB KATAKANA LETTER SE */
Key_kana_SO                       = 0x04bf,  /* U+30BD KATAKANA LETTER SO */
Key_kana_TA                       = 0x04c0,  /* U+30BF KATAKANA LETTER TA */
Key_kana_CHI                      = 0x04c1,  /* U+30C1 KATAKANA LETTER TI */
Key_kana_TI                       = 0x04c1,  /* deprecated */
Key_kana_TSU                      = 0x04c2,  /* U+30C4 KATAKANA LETTER TU */
Key_kana_TU                       = 0x04c2,  /* deprecated */
Key_kana_TE                       = 0x04c3,  /* U+30C6 KATAKANA LETTER TE */
Key_kana_TO                       = 0x04c4,  /* U+30C8 KATAKANA LETTER TO */
Key_kana_NA                       = 0x04c5,  /* U+30CA KATAKANA LETTER NA */
Key_kana_NI                       = 0x04c6,  /* U+30CB KATAKANA LETTER NI */
Key_kana_NU                       = 0x04c7,  /* U+30CC KATAKANA LETTER NU */
Key_kana_NE                       = 0x04c8,  /* U+30CD KATAKANA LETTER NE */
Key_kana_NO                       = 0x04c9,  /* U+30CE KATAKANA LETTER NO */
Key_kana_HA                       = 0x04ca,  /* U+30CF KATAKANA LETTER HA */
Key_kana_HI                       = 0x04cb,  /* U+30D2 KATAKANA LETTER HI */
Key_kana_FU                       = 0x04cc,  /* U+30D5 KATAKANA LETTER HU */
Key_kana_HU                       = 0x04cc,  /* deprecated */
Key_kana_HE                       = 0x04cd,  /* U+30D8 KATAKANA LETTER HE */
Key_kana_HO                       = 0x04ce,  /* U+30DB KATAKANA LETTER HO */
Key_kana_MA                       = 0x04cf,  /* U+30DE KATAKANA LETTER MA */
Key_kana_MI                       = 0x04d0,  /* U+30DF KATAKANA LETTER MI */
Key_kana_MU                       = 0x04d1,  /* U+30E0 KATAKANA LETTER MU */
Key_kana_ME                       = 0x04d2,  /* U+30E1 KATAKANA LETTER ME */
Key_kana_MO                       = 0x04d3,  /* U+30E2 KATAKANA LETTER MO */
Key_kana_YA                       = 0x04d4,  /* U+30E4 KATAKANA LETTER YA */
Key_kana_YU                       = 0x04d5,  /* U+30E6 KATAKANA LETTER YU */
Key_kana_YO                       = 0x04d6,  /* U+30E8 KATAKANA LETTER YO */
Key_kana_RA                       = 0x04d7,  /* U+30E9 KATAKANA LETTER RA */
Key_kana_RI                       = 0x04d8,  /* U+30EA KATAKANA LETTER RI */
Key_kana_RU                       = 0x04d9,  /* U+30EB KATAKANA LETTER RU */
Key_kana_RE                       = 0x04da,  /* U+30EC KATAKANA LETTER RE */
Key_kana_RO                       = 0x04db,  /* U+30ED KATAKANA LETTER RO */
Key_kana_WA                       = 0x04dc,  /* U+30EF KATAKANA LETTER WA */
Key_kana_N                        = 0x04dd,  /* U+30F3 KATAKANA LETTER N */
Key_voicedsound                   = 0x04de,  /* U+309B KATAKANA-HIRAGANA VOICED SOUND MARK */
Key_semivoicedsound               = 0x04df,  /* U+309C KATAKANA-HIRAGANA SEMI-VOICED SOUND MARK */
Key_kana_switch                   = 0xff7e,  /* Alias for mode_switch */


/*
 * Arabic
 * Byte 3 = 5
 */


Key_Farsi_0                    = 0x10006f0,  /* U+06F0 EXTENDED ARABIC-INDIC DIGIT ZERO */
Key_Farsi_1                    = 0x10006f1,  /* U+06F1 EXTENDED ARABIC-INDIC DIGIT ONE */
Key_Farsi_2                    = 0x10006f2,  /* U+06F2 EXTENDED ARABIC-INDIC DIGIT TWO */
Key_Farsi_3                    = 0x10006f3,  /* U+06F3 EXTENDED ARABIC-INDIC DIGIT THREE */
Key_Farsi_4                    = 0x10006f4,  /* U+06F4 EXTENDED ARABIC-INDIC DIGIT FOUR */
Key_Farsi_5                    = 0x10006f5,  /* U+06F5 EXTENDED ARABIC-INDIC DIGIT FIVE */
Key_Farsi_6                    = 0x10006f6,  /* U+06F6 EXTENDED ARABIC-INDIC DIGIT SIX */
Key_Farsi_7                    = 0x10006f7,  /* U+06F7 EXTENDED ARABIC-INDIC DIGIT SEVEN */
Key_Farsi_8                    = 0x10006f8,  /* U+06F8 EXTENDED ARABIC-INDIC DIGIT EIGHT */
Key_Farsi_9                    = 0x10006f9,  /* U+06F9 EXTENDED ARABIC-INDIC DIGIT NINE */
Key_Arabic_percent             = 0x100066a,  /* U+066A ARABIC PERCENT SIGN */
Key_Arabic_superscript_alef    = 0x1000670,  /* U+0670 ARABIC LETTER SUPERSCRIPT ALEF */
Key_Arabic_tteh                = 0x1000679,  /* U+0679 ARABIC LETTER TTEH */
Key_Arabic_peh                 = 0x100067e,  /* U+067E ARABIC LETTER PEH */
Key_Arabic_tcheh               = 0x1000686,  /* U+0686 ARABIC LETTER TCHEH */
Key_Arabic_ddal                = 0x1000688,  /* U+0688 ARABIC LETTER DDAL */
Key_Arabic_rreh                = 0x1000691,  /* U+0691 ARABIC LETTER RREH */
Key_Arabic_comma                  = 0x05ac,  /* U+060C ARABIC COMMA */
Key_Arabic_fullstop            = 0x10006d4,  /* U+06D4 ARABIC FULL STOP */
Key_Arabic_0                   = 0x1000660,  /* U+0660 ARABIC-INDIC DIGIT ZERO */
Key_Arabic_1                   = 0x1000661,  /* U+0661 ARABIC-INDIC DIGIT ONE */
Key_Arabic_2                   = 0x1000662,  /* U+0662 ARABIC-INDIC DIGIT TWO */
Key_Arabic_3                   = 0x1000663,  /* U+0663 ARABIC-INDIC DIGIT THREE */
Key_Arabic_4                   = 0x1000664,  /* U+0664 ARABIC-INDIC DIGIT FOUR */
Key_Arabic_5                   = 0x1000665,  /* U+0665 ARABIC-INDIC DIGIT FIVE */
Key_Arabic_6                   = 0x1000666,  /* U+0666 ARABIC-INDIC DIGIT SIX */
Key_Arabic_7                   = 0x1000667,  /* U+0667 ARABIC-INDIC DIGIT SEVEN */
Key_Arabic_8                   = 0x1000668,  /* U+0668 ARABIC-INDIC DIGIT EIGHT */
Key_Arabic_9                   = 0x1000669,  /* U+0669 ARABIC-INDIC DIGIT NINE */
Key_Arabic_semicolon              = 0x05bb,  /* U+061B ARABIC SEMICOLON */
Key_Arabic_question_mark          = 0x05bf,  /* U+061F ARABIC QUESTION MARK */
Key_Arabic_hamza                  = 0x05c1,  /* U+0621 ARABIC LETTER HAMZA */
Key_Arabic_maddaonalef            = 0x05c2,  /* U+0622 ARABIC LETTER ALEF WITH MADDA ABOVE */
Key_Arabic_hamzaonalef            = 0x05c3,  /* U+0623 ARABIC LETTER ALEF WITH HAMZA ABOVE */
Key_Arabic_hamzaonwaw             = 0x05c4,  /* U+0624 ARABIC LETTER WAW WITH HAMZA ABOVE */
Key_Arabic_hamzaunderalef         = 0x05c5,  /* U+0625 ARABIC LETTER ALEF WITH HAMZA BELOW */
Key_Arabic_hamzaonyeh             = 0x05c6,  /* U+0626 ARABIC LETTER YEH WITH HAMZA ABOVE */
Key_Arabic_alef                   = 0x05c7,  /* U+0627 ARABIC LETTER ALEF */
Key_Arabic_beh                    = 0x05c8,  /* U+0628 ARABIC LETTER BEH */
Key_Arabic_tehmarbuta             = 0x05c9,  /* U+0629 ARABIC LETTER TEH MARBUTA */
Key_Arabic_teh                    = 0x05ca,  /* U+062A ARABIC LETTER TEH */
Key_Arabic_theh                   = 0x05cb,  /* U+062B ARABIC LETTER THEH */
Key_Arabic_jeem                   = 0x05cc,  /* U+062C ARABIC LETTER JEEM */
Key_Arabic_hah                    = 0x05cd,  /* U+062D ARABIC LETTER HAH */
Key_Arabic_khah                   = 0x05ce,  /* U+062E ARABIC LETTER KHAH */
Key_Arabic_dal                    = 0x05cf,  /* U+062F ARABIC LETTER DAL */
Key_Arabic_thal                   = 0x05d0,  /* U+0630 ARABIC LETTER THAL */
Key_Arabic_ra                     = 0x05d1,  /* U+0631 ARABIC LETTER REH */
Key_Arabic_zain                   = 0x05d2,  /* U+0632 ARABIC LETTER ZAIN */
Key_Arabic_seen                   = 0x05d3,  /* U+0633 ARABIC LETTER SEEN */
Key_Arabic_sheen                  = 0x05d4,  /* U+0634 ARABIC LETTER SHEEN */
Key_Arabic_sad                    = 0x05d5,  /* U+0635 ARABIC LETTER SAD */
Key_Arabic_dad                    = 0x05d6,  /* U+0636 ARABIC LETTER DAD */
Key_Arabic_tah                    = 0x05d7,  /* U+0637 ARABIC LETTER TAH */
Key_Arabic_zah                    = 0x05d8,  /* U+0638 ARABIC LETTER ZAH */
Key_Arabic_ain                    = 0x05d9,  /* U+0639 ARABIC LETTER AIN */
Key_Arabic_ghain                  = 0x05da,  /* U+063A ARABIC LETTER GHAIN */
Key_Arabic_tatweel                = 0x05e0,  /* U+0640 ARABIC TATWEEL */
Key_Arabic_feh                    = 0x05e1,  /* U+0641 ARABIC LETTER FEH */
Key_Arabic_qaf                    = 0x05e2,  /* U+0642 ARABIC LETTER QAF */
Key_Arabic_kaf                    = 0x05e3,  /* U+0643 ARABIC LETTER KAF */
Key_Arabic_lam                    = 0x05e4,  /* U+0644 ARABIC LETTER LAM */
Key_Arabic_meem                   = 0x05e5,  /* U+0645 ARABIC LETTER MEEM */
Key_Arabic_noon                   = 0x05e6,  /* U+0646 ARABIC LETTER NOON */
Key_Arabic_ha                     = 0x05e7,  /* U+0647 ARABIC LETTER HEH */
Key_Arabic_heh                    = 0x05e7,  /* deprecated */
Key_Arabic_waw                    = 0x05e8,  /* U+0648 ARABIC LETTER WAW */
Key_Arabic_alefmaksura            = 0x05e9,  /* U+0649 ARABIC LETTER ALEF MAKSURA */
Key_Arabic_yeh                    = 0x05ea,  /* U+064A ARABIC LETTER YEH */
Key_Arabic_fathatan               = 0x05eb,  /* U+064B ARABIC FATHATAN */
Key_Arabic_dammatan               = 0x05ec,  /* U+064C ARABIC DAMMATAN */
Key_Arabic_kasratan               = 0x05ed,  /* U+064D ARABIC KASRATAN */
Key_Arabic_fatha                  = 0x05ee,  /* U+064E ARABIC FATHA */
Key_Arabic_damma                  = 0x05ef,  /* U+064F ARABIC DAMMA */
Key_Arabic_kasra                  = 0x05f0,  /* U+0650 ARABIC KASRA */
Key_Arabic_shadda                 = 0x05f1,  /* U+0651 ARABIC SHADDA */
Key_Arabic_sukun                  = 0x05f2,  /* U+0652 ARABIC SUKUN */
Key_Arabic_madda_above         = 0x1000653,  /* U+0653 ARABIC MADDAH ABOVE */
Key_Arabic_hamza_above         = 0x1000654,  /* U+0654 ARABIC HAMZA ABOVE */
Key_Arabic_hamza_below         = 0x1000655,  /* U+0655 ARABIC HAMZA BELOW */
Key_Arabic_jeh                 = 0x1000698,  /* U+0698 ARABIC LETTER JEH */
Key_Arabic_veh                 = 0x10006a4,  /* U+06A4 ARABIC LETTER VEH */
Key_Arabic_keheh               = 0x10006a9,  /* U+06A9 ARABIC LETTER KEHEH */
Key_Arabic_gaf                 = 0x10006af,  /* U+06AF ARABIC LETTER GAF */
Key_Arabic_noon_ghunna         = 0x10006ba,  /* U+06BA ARABIC LETTER NOON GHUNNA */
Key_Arabic_heh_doachashmee     = 0x10006be,  /* U+06BE ARABIC LETTER HEH DOACHASHMEE */
Key_Farsi_yeh                  = 0x10006cc,  /* U+06CC ARABIC LETTER FARSI YEH */
Key_Arabic_farsi_yeh           = 0x10006cc,  /* U+06CC ARABIC LETTER FARSI YEH */
Key_Arabic_yeh_baree           = 0x10006d2,  /* U+06D2 ARABIC LETTER YEH BARREE */
Key_Arabic_heh_goal            = 0x10006c1,  /* U+06C1 ARABIC LETTER HEH GOAL */
Key_Arabic_switch                 = 0xff7e,  /* Alias for mode_switch */


/*
 * Cyrillic
 * Byte 3 = 6
 */

Key_Cyrillic_GHE_bar           = 0x1000492,  /* U+0492 CYRILLIC CAPITAL LETTER GHE WITH STROKE */
Key_Cyrillic_ghe_bar           = 0x1000493,  /* U+0493 CYRILLIC SMALL LETTER GHE WITH STROKE */
Key_Cyrillic_ZHE_descender     = 0x1000496,  /* U+0496 CYRILLIC CAPITAL LETTER ZHE WITH DESCENDER */
Key_Cyrillic_zhe_descender     = 0x1000497,  /* U+0497 CYRILLIC SMALL LETTER ZHE WITH DESCENDER */
Key_Cyrillic_KA_descender      = 0x100049a,  /* U+049A CYRILLIC CAPITAL LETTER KA WITH DESCENDER */
Key_Cyrillic_ka_descender      = 0x100049b,  /* U+049B CYRILLIC SMALL LETTER KA WITH DESCENDER */
Key_Cyrillic_KA_vertstroke     = 0x100049c,  /* U+049C CYRILLIC CAPITAL LETTER KA WITH VERTICAL STROKE */
Key_Cyrillic_ka_vertstroke     = 0x100049d,  /* U+049D CYRILLIC SMALL LETTER KA WITH VERTICAL STROKE */
Key_Cyrillic_EN_descender      = 0x10004a2,  /* U+04A2 CYRILLIC CAPITAL LETTER EN WITH DESCENDER */
Key_Cyrillic_en_descender      = 0x10004a3,  /* U+04A3 CYRILLIC SMALL LETTER EN WITH DESCENDER */
Key_Cyrillic_U_straight        = 0x10004ae,  /* U+04AE CYRILLIC CAPITAL LETTER STRAIGHT U */
Key_Cyrillic_u_straight        = 0x10004af,  /* U+04AF CYRILLIC SMALL LETTER STRAIGHT U */
Key_Cyrillic_U_straight_bar    = 0x10004b0,  /* U+04B0 CYRILLIC CAPITAL LETTER STRAIGHT U WITH STROKE */
Key_Cyrillic_u_straight_bar    = 0x10004b1,  /* U+04B1 CYRILLIC SMALL LETTER STRAIGHT U WITH STROKE */
Key_Cyrillic_HA_descender      = 0x10004b2,  /* U+04B2 CYRILLIC CAPITAL LETTER HA WITH DESCENDER */
Key_Cyrillic_ha_descender      = 0x10004b3,  /* U+04B3 CYRILLIC SMALL LETTER HA WITH DESCENDER */
Key_Cyrillic_CHE_descender     = 0x10004b6,  /* U+04B6 CYRILLIC CAPITAL LETTER CHE WITH DESCENDER */
Key_Cyrillic_che_descender     = 0x10004b7,  /* U+04B7 CYRILLIC SMALL LETTER CHE WITH DESCENDER */
Key_Cyrillic_CHE_vertstroke    = 0x10004b8,  /* U+04B8 CYRILLIC CAPITAL LETTER CHE WITH VERTICAL STROKE */
Key_Cyrillic_che_vertstroke    = 0x10004b9,  /* U+04B9 CYRILLIC SMALL LETTER CHE WITH VERTICAL STROKE */
Key_Cyrillic_SHHA              = 0x10004ba,  /* U+04BA CYRILLIC CAPITAL LETTER SHHA */
Key_Cyrillic_shha              = 0x10004bb,  /* U+04BB CYRILLIC SMALL LETTER SHHA */

Key_Cyrillic_SCHWA             = 0x10004d8,  /* U+04D8 CYRILLIC CAPITAL LETTER SCHWA */
Key_Cyrillic_schwa             = 0x10004d9,  /* U+04D9 CYRILLIC SMALL LETTER SCHWA */
Key_Cyrillic_I_macron          = 0x10004e2,  /* U+04E2 CYRILLIC CAPITAL LETTER I WITH MACRON */
Key_Cyrillic_i_macron          = 0x10004e3,  /* U+04E3 CYRILLIC SMALL LETTER I WITH MACRON */
Key_Cyrillic_O_bar             = 0x10004e8,  /* U+04E8 CYRILLIC CAPITAL LETTER BARRED O */
Key_Cyrillic_o_bar             = 0x10004e9,  /* U+04E9 CYRILLIC SMALL LETTER BARRED O */
Key_Cyrillic_U_macron          = 0x10004ee,  /* U+04EE CYRILLIC CAPITAL LETTER U WITH MACRON */
Key_Cyrillic_u_macron          = 0x10004ef,  /* U+04EF CYRILLIC SMALL LETTER U WITH MACRON */

Key_Serbian_dje                   = 0x06a1,  /* U+0452 CYRILLIC SMALL LETTER DJE */
Key_Macedonia_gje                 = 0x06a2,  /* U+0453 CYRILLIC SMALL LETTER GJE */
Key_Cyrillic_io                   = 0x06a3,  /* U+0451 CYRILLIC SMALL LETTER IO */
Key_Ukrainian_ie                  = 0x06a4,  /* U+0454 CYRILLIC SMALL LETTER UKRAINIAN IE */
Key_Ukranian_je                   = 0x06a4,  /* deprecated */
Key_Macedonia_dse                 = 0x06a5,  /* U+0455 CYRILLIC SMALL LETTER DZE */
Key_Ukrainian_i                   = 0x06a6,  /* U+0456 CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I */
Key_Ukranian_i                    = 0x06a6,  /* deprecated */
Key_Ukrainian_yi                  = 0x06a7,  /* U+0457 CYRILLIC SMALL LETTER YI */
Key_Ukranian_yi                   = 0x06a7,  /* deprecated */
Key_Cyrillic_je                   = 0x06a8,  /* U+0458 CYRILLIC SMALL LETTER JE */
Key_Serbian_je                    = 0x06a8,  /* deprecated */
Key_Cyrillic_lje                  = 0x06a9,  /* U+0459 CYRILLIC SMALL LETTER LJE */
Key_Serbian_lje                   = 0x06a9,  /* deprecated */
Key_Cyrillic_nje                  = 0x06aa,  /* U+045A CYRILLIC SMALL LETTER NJE */
Key_Serbian_nje                   = 0x06aa,  /* deprecated */
Key_Serbian_tshe                  = 0x06ab,  /* U+045B CYRILLIC SMALL LETTER TSHE */
Key_Macedonia_kje                 = 0x06ac,  /* U+045C CYRILLIC SMALL LETTER KJE */
Key_Ukrainian_ghe_with_upturn     = 0x06ad,  /* U+0491 CYRILLIC SMALL LETTER GHE WITH UPTURN */
Key_Byelorussian_shortu           = 0x06ae,  /* U+045E CYRILLIC SMALL LETTER SHORT U */
Key_Cyrillic_dzhe                 = 0x06af,  /* U+045F CYRILLIC SMALL LETTER DZHE */
Key_Serbian_dze                   = 0x06af,  /* deprecated */
Key_numerosign                    = 0x06b0,  /* U+2116 NUMERO SIGN */
Key_Serbian_DJE                   = 0x06b1,  /* U+0402 CYRILLIC CAPITAL LETTER DJE */
Key_Macedonia_GJE                 = 0x06b2,  /* U+0403 CYRILLIC CAPITAL LETTER GJE */
Key_Cyrillic_IO                   = 0x06b3,  /* U+0401 CYRILLIC CAPITAL LETTER IO */
Key_Ukrainian_IE                  = 0x06b4,  /* U+0404 CYRILLIC CAPITAL LETTER UKRAINIAN IE */
Key_Ukranian_JE                   = 0x06b4,  /* deprecated */
Key_Macedonia_DSE                 = 0x06b5,  /* U+0405 CYRILLIC CAPITAL LETTER DZE */
Key_Ukrainian_I                   = 0x06b6,  /* U+0406 CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I */
Key_Ukranian_I                    = 0x06b6,  /* deprecated */
Key_Ukrainian_YI                  = 0x06b7,  /* U+0407 CYRILLIC CAPITAL LETTER YI */
Key_Ukranian_YI                   = 0x06b7,  /* deprecated */
Key_Cyrillic_JE                   = 0x06b8,  /* U+0408 CYRILLIC CAPITAL LETTER JE */
Key_Serbian_JE                    = 0x06b8,  /* deprecated */
Key_Cyrillic_LJE                  = 0x06b9,  /* U+0409 CYRILLIC CAPITAL LETTER LJE */
Key_Serbian_LJE                   = 0x06b9,  /* deprecated */
Key_Cyrillic_NJE                  = 0x06ba,  /* U+040A CYRILLIC CAPITAL LETTER NJE */
Key_Serbian_NJE                   = 0x06ba,  /* deprecated */
Key_Serbian_TSHE                  = 0x06bb,  /* U+040B CYRILLIC CAPITAL LETTER TSHE */
Key_Macedonia_KJE                 = 0x06bc,  /* U+040C CYRILLIC CAPITAL LETTER KJE */
Key_Ukrainian_GHE_WITH_UPTURN     = 0x06bd,  /* U+0490 CYRILLIC CAPITAL LETTER GHE WITH UPTURN */
Key_Byelorussian_SHORTU           = 0x06be,  /* U+040E CYRILLIC CAPITAL LETTER SHORT U */
Key_Cyrillic_DZHE                 = 0x06bf,  /* U+040F CYRILLIC CAPITAL LETTER DZHE */
Key_Serbian_DZE                   = 0x06bf,  /* deprecated */
Key_Cyrillic_yu                   = 0x06c0,  /* U+044E CYRILLIC SMALL LETTER YU */
Key_Cyrillic_a                    = 0x06c1,  /* U+0430 CYRILLIC SMALL LETTER A */
Key_Cyrillic_be                   = 0x06c2,  /* U+0431 CYRILLIC SMALL LETTER BE */
Key_Cyrillic_tse                  = 0x06c3,  /* U+0446 CYRILLIC SMALL LETTER TSE */
Key_Cyrillic_de                   = 0x06c4,  /* U+0434 CYRILLIC SMALL LETTER DE */
Key_Cyrillic_ie                   = 0x06c5,  /* U+0435 CYRILLIC SMALL LETTER IE */
Key_Cyrillic_ef                   = 0x06c6,  /* U+0444 CYRILLIC SMALL LETTER EF */
Key_Cyrillic_ghe                  = 0x06c7,  /* U+0433 CYRILLIC SMALL LETTER GHE */
Key_Cyrillic_ha                   = 0x06c8,  /* U+0445 CYRILLIC SMALL LETTER HA */
Key_Cyrillic_i                    = 0x06c9,  /* U+0438 CYRILLIC SMALL LETTER I */
Key_Cyrillic_shorti               = 0x06ca,  /* U+0439 CYRILLIC SMALL LETTER SHORT I */
Key_Cyrillic_ka                   = 0x06cb,  /* U+043A CYRILLIC SMALL LETTER KA */
Key_Cyrillic_el                   = 0x06cc,  /* U+043B CYRILLIC SMALL LETTER EL */
Key_Cyrillic_em                   = 0x06cd,  /* U+043C CYRILLIC SMALL LETTER EM */
Key_Cyrillic_en                   = 0x06ce,  /* U+043D CYRILLIC SMALL LETTER EN */
Key_Cyrillic_o                    = 0x06cf,  /* U+043E CYRILLIC SMALL LETTER O */
Key_Cyrillic_pe                   = 0x06d0,  /* U+043F CYRILLIC SMALL LETTER PE */
Key_Cyrillic_ya                   = 0x06d1,  /* U+044F CYRILLIC SMALL LETTER YA */
Key_Cyrillic_er                   = 0x06d2,  /* U+0440 CYRILLIC SMALL LETTER ER */
Key_Cyrillic_es                   = 0x06d3,  /* U+0441 CYRILLIC SMALL LETTER ES */
Key_Cyrillic_te                   = 0x06d4,  /* U+0442 CYRILLIC SMALL LETTER TE */
Key_Cyrillic_u                    = 0x06d5,  /* U+0443 CYRILLIC SMALL LETTER U */
Key_Cyrillic_zhe                  = 0x06d6,  /* U+0436 CYRILLIC SMALL LETTER ZHE */
Key_Cyrillic_ve                   = 0x06d7,  /* U+0432 CYRILLIC SMALL LETTER VE */
Key_Cyrillic_softsign             = 0x06d8,  /* U+044C CYRILLIC SMALL LETTER SOFT SIGN */
Key_Cyrillic_yeru                 = 0x06d9,  /* U+044B CYRILLIC SMALL LETTER YERU */
Key_Cyrillic_ze                   = 0x06da,  /* U+0437 CYRILLIC SMALL LETTER ZE */
Key_Cyrillic_sha                  = 0x06db,  /* U+0448 CYRILLIC SMALL LETTER SHA */
Key_Cyrillic_e                    = 0x06dc,  /* U+044D CYRILLIC SMALL LETTER E */
Key_Cyrillic_shcha                = 0x06dd,  /* U+0449 CYRILLIC SMALL LETTER SHCHA */
Key_Cyrillic_che                  = 0x06de,  /* U+0447 CYRILLIC SMALL LETTER CHE */
Key_Cyrillic_hardsign             = 0x06df,  /* U+044A CYRILLIC SMALL LETTER HARD SIGN */
Key_Cyrillic_YU                   = 0x06e0,  /* U+042E CYRILLIC CAPITAL LETTER YU */
Key_Cyrillic_A                    = 0x06e1,  /* U+0410 CYRILLIC CAPITAL LETTER A */
Key_Cyrillic_BE                   = 0x06e2,  /* U+0411 CYRILLIC CAPITAL LETTER BE */
Key_Cyrillic_TSE                  = 0x06e3,  /* U+0426 CYRILLIC CAPITAL LETTER TSE */
Key_Cyrillic_DE                   = 0x06e4,  /* U+0414 CYRILLIC CAPITAL LETTER DE */
Key_Cyrillic_IE                   = 0x06e5,  /* U+0415 CYRILLIC CAPITAL LETTER IE */
Key_Cyrillic_EF                   = 0x06e6,  /* U+0424 CYRILLIC CAPITAL LETTER EF */
Key_Cyrillic_GHE                  = 0x06e7,  /* U+0413 CYRILLIC CAPITAL LETTER GHE */
Key_Cyrillic_HA                   = 0x06e8,  /* U+0425 CYRILLIC CAPITAL LETTER HA */
Key_Cyrillic_I                    = 0x06e9,  /* U+0418 CYRILLIC CAPITAL LETTER I */
Key_Cyrillic_SHORTI               = 0x06ea,  /* U+0419 CYRILLIC CAPITAL LETTER SHORT I */
Key_Cyrillic_KA                   = 0x06eb,  /* U+041A CYRILLIC CAPITAL LETTER KA */
Key_Cyrillic_EL                   = 0x06ec,  /* U+041B CYRILLIC CAPITAL LETTER EL */
Key_Cyrillic_EM                   = 0x06ed,  /* U+041C CYRILLIC CAPITAL LETTER EM */
Key_Cyrillic_EN                   = 0x06ee,  /* U+041D CYRILLIC CAPITAL LETTER EN */
Key_Cyrillic_O                    = 0x06ef,  /* U+041E CYRILLIC CAPITAL LETTER O */
Key_Cyrillic_PE                   = 0x06f0,  /* U+041F CYRILLIC CAPITAL LETTER PE */
Key_Cyrillic_YA                   = 0x06f1,  /* U+042F CYRILLIC CAPITAL LETTER YA */
Key_Cyrillic_ER                   = 0x06f2,  /* U+0420 CYRILLIC CAPITAL LETTER ER */
Key_Cyrillic_ES                   = 0x06f3,  /* U+0421 CYRILLIC CAPITAL LETTER ES */
Key_Cyrillic_TE                   = 0x06f4,  /* U+0422 CYRILLIC CAPITAL LETTER TE */
Key_Cyrillic_U                    = 0x06f5,  /* U+0423 CYRILLIC CAPITAL LETTER U */
Key_Cyrillic_ZHE                  = 0x06f6,  /* U+0416 CYRILLIC CAPITAL LETTER ZHE */
Key_Cyrillic_VE                   = 0x06f7,  /* U+0412 CYRILLIC CAPITAL LETTER VE */
Key_Cyrillic_SOFTSIGN             = 0x06f8,  /* U+042C CYRILLIC CAPITAL LETTER SOFT SIGN */
Key_Cyrillic_YERU                 = 0x06f9,  /* U+042B CYRILLIC CAPITAL LETTER YERU */
Key_Cyrillic_ZE                   = 0x06fa,  /* U+0417 CYRILLIC CAPITAL LETTER ZE */
Key_Cyrillic_SHA                  = 0x06fb,  /* U+0428 CYRILLIC CAPITAL LETTER SHA */
Key_Cyrillic_E                    = 0x06fc,  /* U+042D CYRILLIC CAPITAL LETTER E */
Key_Cyrillic_SHCHA                = 0x06fd,  /* U+0429 CYRILLIC CAPITAL LETTER SHCHA */
Key_Cyrillic_CHE                  = 0x06fe,  /* U+0427 CYRILLIC CAPITAL LETTER CHE */
Key_Cyrillic_HARDSIGN             = 0x06ff,  /* U+042A CYRILLIC CAPITAL LETTER HARD SIGN */


/*
 * Greek
 * (based on an early draft of, and not quite identical to, ISO/IEC 8859-7)
 * Byte 3 = 7
 */


Key_Greek_ALPHAaccent             = 0x07a1,  /* U+0386 GREEK CAPITAL LETTER ALPHA WITH TONOS */
Key_Greek_EPSILONaccent           = 0x07a2,  /* U+0388 GREEK CAPITAL LETTER EPSILON WITH TONOS */
Key_Greek_ETAaccent               = 0x07a3,  /* U+0389 GREEK CAPITAL LETTER ETA WITH TONOS */
Key_Greek_IOTAaccent              = 0x07a4,  /* U+038A GREEK CAPITAL LETTER IOTA WITH TONOS */
Key_Greek_IOTAdieresis            = 0x07a5,  /* U+03AA GREEK CAPITAL LETTER IOTA WITH DIALYTIKA */
Key_Greek_IOTAdiaeresis           = 0x07a5,  /* old typo */
Key_Greek_OMICRONaccent           = 0x07a7,  /* U+038C GREEK CAPITAL LETTER OMICRON WITH TONOS */
Key_Greek_UPSILONaccent           = 0x07a8,  /* U+038E GREEK CAPITAL LETTER UPSILON WITH TONOS */
Key_Greek_UPSILONdieresis         = 0x07a9,  /* U+03AB GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA */
Key_Greek_OMEGAaccent             = 0x07ab,  /* U+038F GREEK CAPITAL LETTER OMEGA WITH TONOS */
Key_Greek_accentdieresis          = 0x07ae,  /* U+0385 GREEK DIALYTIKA TONOS */
Key_Greek_horizbar                = 0x07af,  /* U+2015 HORIZONTAL BAR */
Key_Greek_alphaaccent             = 0x07b1,  /* U+03AC GREEK SMALL LETTER ALPHA WITH TONOS */
Key_Greek_epsilonaccent           = 0x07b2,  /* U+03AD GREEK SMALL LETTER EPSILON WITH TONOS */
Key_Greek_etaaccent               = 0x07b3,  /* U+03AE GREEK SMALL LETTER ETA WITH TONOS */
Key_Greek_iotaaccent              = 0x07b4,  /* U+03AF GREEK SMALL LETTER IOTA WITH TONOS */
Key_Greek_iotadieresis            = 0x07b5,  /* U+03CA GREEK SMALL LETTER IOTA WITH DIALYTIKA */
Key_Greek_iotaaccentdieresis      = 0x07b6,  /* U+0390 GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS */
Key_Greek_omicronaccent           = 0x07b7,  /* U+03CC GREEK SMALL LETTER OMICRON WITH TONOS */
Key_Greek_upsilonaccent           = 0x07b8,  /* U+03CD GREEK SMALL LETTER UPSILON WITH TONOS */
Key_Greek_upsilondieresis         = 0x07b9,  /* U+03CB GREEK SMALL LETTER UPSILON WITH DIALYTIKA */
Key_Greek_upsilonaccentdieresis   = 0x07ba,  /* U+03B0 GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS */
Key_Greek_omegaaccent             = 0x07bb,  /* U+03CE GREEK SMALL LETTER OMEGA WITH TONOS */
Key_Greek_ALPHA                   = 0x07c1,  /* U+0391 GREEK CAPITAL LETTER ALPHA */
Key_Greek_BETA                    = 0x07c2,  /* U+0392 GREEK CAPITAL LETTER BETA */
Key_Greek_GAMMA                   = 0x07c3,  /* U+0393 GREEK CAPITAL LETTER GAMMA */
Key_Greek_DELTA                   = 0x07c4,  /* U+0394 GREEK CAPITAL LETTER DELTA */
Key_Greek_EPSILON                 = 0x07c5,  /* U+0395 GREEK CAPITAL LETTER EPSILON */
Key_Greek_ZETA                    = 0x07c6,  /* U+0396 GREEK CAPITAL LETTER ZETA */
Key_Greek_ETA                     = 0x07c7,  /* U+0397 GREEK CAPITAL LETTER ETA */
Key_Greek_THETA                   = 0x07c8,  /* U+0398 GREEK CAPITAL LETTER THETA */
Key_Greek_IOTA                    = 0x07c9,  /* U+0399 GREEK CAPITAL LETTER IOTA */
Key_Greek_KAPPA                   = 0x07ca,  /* U+039A GREEK CAPITAL LETTER KAPPA */
Key_Greek_LAMDA                   = 0x07cb,  /* U+039B GREEK CAPITAL LETTER LAMDA */
Key_Greek_LAMBDA                  = 0x07cb,  /* U+039B GREEK CAPITAL LETTER LAMDA */
Key_Greek_MU                      = 0x07cc,  /* U+039C GREEK CAPITAL LETTER MU */
Key_Greek_NU                      = 0x07cd,  /* U+039D GREEK CAPITAL LETTER NU */
Key_Greek_XI                      = 0x07ce,  /* U+039E GREEK CAPITAL LETTER XI */
Key_Greek_OMICRON                 = 0x07cf,  /* U+039F GREEK CAPITAL LETTER OMICRON */
Key_Greek_PI                      = 0x07d0,  /* U+03A0 GREEK CAPITAL LETTER PI */
Key_Greek_RHO                     = 0x07d1,  /* U+03A1 GREEK CAPITAL LETTER RHO */
Key_Greek_SIGMA                   = 0x07d2,  /* U+03A3 GREEK CAPITAL LETTER SIGMA */
Key_Greek_TAU                     = 0x07d4,  /* U+03A4 GREEK CAPITAL LETTER TAU */
Key_Greek_UPSILON                 = 0x07d5,  /* U+03A5 GREEK CAPITAL LETTER UPSILON */
Key_Greek_PHI                     = 0x07d6,  /* U+03A6 GREEK CAPITAL LETTER PHI */
Key_Greek_CHI                     = 0x07d7,  /* U+03A7 GREEK CAPITAL LETTER CHI */
Key_Greek_PSI                     = 0x07d8,  /* U+03A8 GREEK CAPITAL LETTER PSI */
Key_Greek_OMEGA                   = 0x07d9,  /* U+03A9 GREEK CAPITAL LETTER OMEGA */
Key_Greek_alpha                   = 0x07e1,  /* U+03B1 GREEK SMALL LETTER ALPHA */
Key_Greek_beta                    = 0x07e2,  /* U+03B2 GREEK SMALL LETTER BETA */
Key_Greek_gamma                   = 0x07e3,  /* U+03B3 GREEK SMALL LETTER GAMMA */
Key_Greek_delta                   = 0x07e4,  /* U+03B4 GREEK SMALL LETTER DELTA */
Key_Greek_epsilon                 = 0x07e5,  /* U+03B5 GREEK SMALL LETTER EPSILON */
Key_Greek_zeta                    = 0x07e6,  /* U+03B6 GREEK SMALL LETTER ZETA */
Key_Greek_eta                     = 0x07e7,  /* U+03B7 GREEK SMALL LETTER ETA */
Key_Greek_theta                   = 0x07e8,  /* U+03B8 GREEK SMALL LETTER THETA */
Key_Greek_iota                    = 0x07e9,  /* U+03B9 GREEK SMALL LETTER IOTA */
Key_Greek_kappa                   = 0x07ea,  /* U+03BA GREEK SMALL LETTER KAPPA */
Key_Greek_lamda                   = 0x07eb,  /* U+03BB GREEK SMALL LETTER LAMDA */
Key_Greek_lambda                  = 0x07eb,  /* U+03BB GREEK SMALL LETTER LAMDA */
Key_Greek_mu                      = 0x07ec,  /* U+03BC GREEK SMALL LETTER MU */
Key_Greek_nu                      = 0x07ed,  /* U+03BD GREEK SMALL LETTER NU */
Key_Greek_xi                      = 0x07ee,  /* U+03BE GREEK SMALL LETTER XI */
Key_Greek_omicron                 = 0x07ef,  /* U+03BF GREEK SMALL LETTER OMICRON */
Key_Greek_pi                      = 0x07f0,  /* U+03C0 GREEK SMALL LETTER PI */
Key_Greek_rho                     = 0x07f1,  /* U+03C1 GREEK SMALL LETTER RHO */
Key_Greek_sigma                   = 0x07f2,  /* U+03C3 GREEK SMALL LETTER SIGMA */
Key_Greek_finalsmallsigma         = 0x07f3,  /* U+03C2 GREEK SMALL LETTER FINAL SIGMA */
Key_Greek_tau                     = 0x07f4,  /* U+03C4 GREEK SMALL LETTER TAU */
Key_Greek_upsilon                 = 0x07f5,  /* U+03C5 GREEK SMALL LETTER UPSILON */
Key_Greek_phi                     = 0x07f6,  /* U+03C6 GREEK SMALL LETTER PHI */
Key_Greek_chi                     = 0x07f7,  /* U+03C7 GREEK SMALL LETTER CHI */
Key_Greek_psi                     = 0x07f8,  /* U+03C8 GREEK SMALL LETTER PSI */
Key_Greek_omega                   = 0x07f9,  /* U+03C9 GREEK SMALL LETTER OMEGA */
Key_Greek_switch                  = 0xff7e,  /* Alias for mode_switch */


/*
 * Technical
 * (from the DEC VT330/VT420 Technical Character Set, http://vt100.net/charsets/technical.html)
 * Byte 3 = 8
 */


Key_leftradical                   = 0x08a1,  /* U+23B7 RADICAL SYMBOL BOTTOM */
Key_topleftradical                = 0x08a2,  /*(U+250C BOX DRAWINGS LIGHT DOWN AND RIGHT)*/
Key_horizconnector                = 0x08a3,  /*(U+2500 BOX DRAWINGS LIGHT HORIZONTAL)*/
Key_topintegral                   = 0x08a4,  /* U+2320 TOP HALF INTEGRAL */
Key_botintegral                   = 0x08a5,  /* U+2321 BOTTOM HALF INTEGRAL */
Key_vertconnector                 = 0x08a6,  /*(U+2502 BOX DRAWINGS LIGHT VERTICAL)*/
Key_topleftsqbracket              = 0x08a7,  /* U+23A1 LEFT SQUARE BRACKET UPPER CORNER */
Key_botleftsqbracket              = 0x08a8,  /* U+23A3 LEFT SQUARE BRACKET LOWER CORNER */
Key_toprightsqbracket             = 0x08a9,  /* U+23A4 RIGHT SQUARE BRACKET UPPER CORNER */
Key_botrightsqbracket             = 0x08aa,  /* U+23A6 RIGHT SQUARE BRACKET LOWER CORNER */
Key_topleftparens                 = 0x08ab,  /* U+239B LEFT PARENTHESIS UPPER HOOK */
Key_botleftparens                 = 0x08ac,  /* U+239D LEFT PARENTHESIS LOWER HOOK */
Key_toprightparens                = 0x08ad,  /* U+239E RIGHT PARENTHESIS UPPER HOOK */
Key_botrightparens                = 0x08ae,  /* U+23A0 RIGHT PARENTHESIS LOWER HOOK */
Key_leftmiddlecurlybrace          = 0x08af,  /* U+23A8 LEFT CURLY BRACKET MIDDLE PIECE */
Key_rightmiddlecurlybrace         = 0x08b0,  /* U+23AC RIGHT CURLY BRACKET MIDDLE PIECE */
Key_topleftsummation              = 0x08b1,
Key_botleftsummation              = 0x08b2,
Key_topvertsummationconnector     = 0x08b3,
Key_botvertsummationconnector     = 0x08b4,
Key_toprightsummation             = 0x08b5,
Key_botrightsummation             = 0x08b6,
Key_rightmiddlesummation          = 0x08b7,
Key_lessthanequal                 = 0x08bc,  /* U+2264 LESS-THAN OR EQUAL TO */
Key_notequal                      = 0x08bd,  /* U+2260 NOT EQUAL TO */
Key_greaterthanequal              = 0x08be,  /* U+2265 GREATER-THAN OR EQUAL TO */
Key_integral                      = 0x08bf,  /* U+222B INTEGRAL */
Key_therefore                     = 0x08c0,  /* U+2234 THEREFORE */
Key_variation                     = 0x08c1,  /* U+221D PROPORTIONAL TO */
Key_infinity                      = 0x08c2,  /* U+221E INFINITY */
Key_nabla                         = 0x08c5,  /* U+2207 NABLA */
Key_approximate                   = 0x08c8,  /* U+223C TILDE OPERATOR */
Key_similarequal                  = 0x08c9,  /* U+2243 ASYMPTOTICALLY EQUAL TO */
Key_ifonlyif                      = 0x08cd,  /* U+21D4 LEFT RIGHT DOUBLE ARROW */
Key_implies                       = 0x08ce,  /* U+21D2 RIGHTWARDS DOUBLE ARROW */
Key_identical                     = 0x08cf,  /* U+2261 IDENTICAL TO */
Key_radical                       = 0x08d6,  /* U+221A SQUARE ROOT */
Key_includedin                    = 0x08da,  /* U+2282 SUBSET OF */
Key_includes                      = 0x08db,  /* U+2283 SUPERSET OF */
Key_intersection                  = 0x08dc,  /* U+2229 INTERSECTION */
Key_union                         = 0x08dd,  /* U+222A UNION */
Key_logicaland                    = 0x08de,  /* U+2227 LOGICAL AND */
Key_logicalor                     = 0x08df,  /* U+2228 LOGICAL OR */
Key_partialderivative             = 0x08ef,  /* U+2202 PARTIAL DIFFERENTIAL */
Key_function                      = 0x08f6,  /* U+0192 LATIN SMALL LETTER F WITH HOOK */
Key_leftarrow                     = 0x08fb,  /* U+2190 LEFTWARDS ARROW */
Key_uparrow                       = 0x08fc,  /* U+2191 UPWARDS ARROW */
Key_rightarrow                    = 0x08fd,  /* U+2192 RIGHTWARDS ARROW */
Key_downarrow                     = 0x08fe,  /* U+2193 DOWNWARDS ARROW */


/*
 * Special
 * (from the DEC VT100 Special Graphics Character Set)
 * Byte 3 = 9
 */


Key_blank                         = 0x09df,
Key_soliddiamond                  = 0x09e0,  /* U+25C6 BLACK DIAMOND */
Key_checkerboard                  = 0x09e1,  /* U+2592 MEDIUM SHADE */
Key_ht                            = 0x09e2,  /* U+2409 SYMBOL FOR HORIZONTAL TABULATION */
Key_ff                            = 0x09e3,  /* U+240C SYMBOL FOR FORM FEED */
Key_cr                            = 0x09e4,  /* U+240D SYMBOL FOR CARRIAGE RETURN */
Key_lf                            = 0x09e5,  /* U+240A SYMBOL FOR LINE FEED */
Key_nl                            = 0x09e8,  /* U+2424 SYMBOL FOR NEWLINE */
Key_vt                            = 0x09e9,  /* U+240B SYMBOL FOR VERTICAL TABULATION */
Key_lowrightcorner                = 0x09ea,  /* U+2518 BOX DRAWINGS LIGHT UP AND LEFT */
Key_uprightcorner                 = 0x09eb,  /* U+2510 BOX DRAWINGS LIGHT DOWN AND LEFT */
Key_upleftcorner                  = 0x09ec,  /* U+250C BOX DRAWINGS LIGHT DOWN AND RIGHT */
Key_lowleftcorner                 = 0x09ed,  /* U+2514 BOX DRAWINGS LIGHT UP AND RIGHT */
Key_crossinglines                 = 0x09ee,  /* U+253C BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL */
Key_horizlinescan1                = 0x09ef,  /* U+23BA HORIZONTAL SCAN LINE-1 */
Key_horizlinescan3                = 0x09f0,  /* U+23BB HORIZONTAL SCAN LINE-3 */
Key_horizlinescan5                = 0x09f1,  /* U+2500 BOX DRAWINGS LIGHT HORIZONTAL */
Key_horizlinescan7                = 0x09f2,  /* U+23BC HORIZONTAL SCAN LINE-7 */
Key_horizlinescan9                = 0x09f3,  /* U+23BD HORIZONTAL SCAN LINE-9 */
Key_leftt                         = 0x09f4,  /* U+251C BOX DRAWINGS LIGHT VERTICAL AND RIGHT */
Key_rightt                        = 0x09f5,  /* U+2524 BOX DRAWINGS LIGHT VERTICAL AND LEFT */
Key_bott                          = 0x09f6,  /* U+2534 BOX DRAWINGS LIGHT UP AND HORIZONTAL */
Key_topt                          = 0x09f7,  /* U+252C BOX DRAWINGS LIGHT DOWN AND HORIZONTAL */
Key_vertbar                       = 0x09f8,  /* U+2502 BOX DRAWINGS LIGHT VERTICAL */


/*
 * Publishing
 * (these are probably from a long forgotten DEC Publishing
 * font that once shipped with DECwrite)
 * Byte 3 = = 0x0a,
 */


Key_emspace                       = 0x0aa1,  /* U+2003 EM SPACE */
Key_enspace                       = 0x0aa2,  /* U+2002 EN SPACE */
Key_em3space                      = 0x0aa3,  /* U+2004 THREE-PER-EM SPACE */
Key_em4space                      = 0x0aa4,  /* U+2005 FOUR-PER-EM SPACE */
Key_digitspace                    = 0x0aa5,  /* U+2007 FIGURE SPACE */
Key_punctspace                    = 0x0aa6,  /* U+2008 PUNCTUATION SPACE */
Key_thinspace                     = 0x0aa7,  /* U+2009 THIN SPACE */
Key_hairspace                     = 0x0aa8,  /* U+200A HAIR SPACE */
Key_emdash                        = 0x0aa9,  /* U+2014 EM DASH */
Key_endash                        = 0x0aaa,  /* U+2013 EN DASH */
Key_signifblank                   = 0x0aac,  /*(U+2423 OPEN BOX)*/
Key_ellipsis                      = 0x0aae,  /* U+2026 HORIZONTAL ELLIPSIS */
Key_doubbaselinedot               = 0x0aaf,  /* U+2025 TWO DOT LEADER */
Key_onethird                      = 0x0ab0,  /* U+2153 VULGAR FRACTION ONE THIRD */
Key_twothirds                     = 0x0ab1,  /* U+2154 VULGAR FRACTION TWO THIRDS */
Key_onefifth                      = 0x0ab2,  /* U+2155 VULGAR FRACTION ONE FIFTH */
Key_twofifths                     = 0x0ab3,  /* U+2156 VULGAR FRACTION TWO FIFTHS */
Key_threefifths                   = 0x0ab4,  /* U+2157 VULGAR FRACTION THREE FIFTHS */
Key_fourfifths                    = 0x0ab5,  /* U+2158 VULGAR FRACTION FOUR FIFTHS */
Key_onesixth                      = 0x0ab6,  /* U+2159 VULGAR FRACTION ONE SIXTH */
Key_fivesixths                    = 0x0ab7,  /* U+215A VULGAR FRACTION FIVE SIXTHS */
Key_careof                        = 0x0ab8,  /* U+2105 CARE OF */
Key_figdash                       = 0x0abb,  /* U+2012 FIGURE DASH */
Key_leftanglebracket              = 0x0abc,  /*(U+27E8 MATHEMATICAL LEFT ANGLE BRACKET)*/
Key_decimalpoint                  = 0x0abd,  /*(U+002E FULL STOP)*/
Key_rightanglebracket             = 0x0abe,  /*(U+27E9 MATHEMATICAL RIGHT ANGLE BRACKET)*/
Key_marker                        = 0x0abf,
Key_oneeighth                     = 0x0ac3,  /* U+215B VULGAR FRACTION ONE EIGHTH */
Key_threeeighths                  = 0x0ac4,  /* U+215C VULGAR FRACTION THREE EIGHTHS */
Key_fiveeighths                   = 0x0ac5,  /* U+215D VULGAR FRACTION FIVE EIGHTHS */
Key_seveneighths                  = 0x0ac6,  /* U+215E VULGAR FRACTION SEVEN EIGHTHS */
Key_trademark                     = 0x0ac9,  /* U+2122 TRADE MARK SIGN */
Key_signaturemark                 = 0x0aca,  /*(U+2613 SALTIRE)*/
Key_trademarkincircle             = 0x0acb,
Key_leftopentriangle              = 0x0acc,  /*(U+25C1 WHITE LEFT-POINTING TRIANGLE)*/
Key_rightopentriangle             = 0x0acd,  /*(U+25B7 WHITE RIGHT-POINTING TRIANGLE)*/
Key_emopencircle                  = 0x0ace,  /*(U+25CB WHITE CIRCLE)*/
Key_emopenrectangle               = 0x0acf,  /*(U+25AF WHITE VERTICAL RECTANGLE)*/
Key_leftsinglequotemark           = 0x0ad0,  /* U+2018 LEFT SINGLE QUOTATION MARK */
Key_rightsinglequotemark          = 0x0ad1,  /* U+2019 RIGHT SINGLE QUOTATION MARK */
Key_leftdoublequotemark           = 0x0ad2,  /* U+201C LEFT DOUBLE QUOTATION MARK */
Key_rightdoublequotemark          = 0x0ad3,  /* U+201D RIGHT DOUBLE QUOTATION MARK */
Key_prescription                  = 0x0ad4,  /* U+211E PRESCRIPTION TAKE */
Key_minutes                       = 0x0ad6,  /* U+2032 PRIME */
Key_seconds                       = 0x0ad7,  /* U+2033 DOUBLE PRIME */
Key_latincross                    = 0x0ad9,  /* U+271D LATIN CROSS */
Key_hexagram                      = 0x0ada,
Key_filledrectbullet              = 0x0adb,  /*(U+25AC BLACK RECTANGLE)*/
Key_filledlefttribullet           = 0x0adc,  /*(U+25C0 BLACK LEFT-POINTING TRIANGLE)*/
Key_filledrighttribullet          = 0x0add,  /*(U+25B6 BLACK RIGHT-POINTING TRIANGLE)*/
Key_emfilledcircle                = 0x0ade,  /*(U+25CF BLACK CIRCLE)*/
Key_emfilledrect                  = 0x0adf,  /*(U+25AE BLACK VERTICAL RECTANGLE)*/
Key_enopencircbullet              = 0x0ae0,  /*(U+25E6 WHITE BULLET)*/
Key_enopensquarebullet            = 0x0ae1,  /*(U+25AB WHITE SMALL SQUARE)*/
Key_openrectbullet                = 0x0ae2,  /*(U+25AD WHITE RECTANGLE)*/
Key_opentribulletup               = 0x0ae3,  /*(U+25B3 WHITE UP-POINTING TRIANGLE)*/
Key_opentribulletdown             = 0x0ae4,  /*(U+25BD WHITE DOWN-POINTING TRIANGLE)*/
Key_openstar                      = 0x0ae5,  /*(U+2606 WHITE STAR)*/
Key_enfilledcircbullet            = 0x0ae6,  /*(U+2022 BULLET)*/
Key_enfilledsqbullet              = 0x0ae7,  /*(U+25AA BLACK SMALL SQUARE)*/
Key_filledtribulletup             = 0x0ae8,  /*(U+25B2 BLACK UP-POINTING TRIANGLE)*/
Key_filledtribulletdown           = 0x0ae9,  /*(U+25BC BLACK DOWN-POINTING TRIANGLE)*/
Key_leftpointer                   = 0x0aea,  /*(U+261C WHITE LEFT POINTING INDEX)*/
Key_rightpointer                  = 0x0aeb,  /*(U+261E WHITE RIGHT POINTING INDEX)*/
Key_club                          = 0x0aec,  /* U+2663 BLACK CLUB SUIT */
Key_diamond                       = 0x0aed,  /* U+2666 BLACK DIAMOND SUIT */
Key_heart                         = 0x0aee,  /* U+2665 BLACK HEART SUIT */
Key_maltesecross                  = 0x0af0,  /* U+2720 MALTESE CROSS */
Key_dagger                        = 0x0af1,  /* U+2020 DAGGER */
Key_doubledagger                  = 0x0af2,  /* U+2021 DOUBLE DAGGER */
Key_checkmark                     = 0x0af3,  /* U+2713 CHECK MARK */
Key_ballotcross                   = 0x0af4,  /* U+2717 BALLOT X */
Key_musicalsharp                  = 0x0af5,  /* U+266F MUSIC SHARP SIGN */
Key_musicalflat                   = 0x0af6,  /* U+266D MUSIC FLAT SIGN */
Key_malesymbol                    = 0x0af7,  /* U+2642 MALE SIGN */
Key_femalesymbol                  = 0x0af8,  /* U+2640 FEMALE SIGN */
Key_telephone                     = 0x0af9,  /* U+260E BLACK TELEPHONE */
Key_telephonerecorder             = 0x0afa,  /* U+2315 TELEPHONE RECORDER */
Key_phonographcopyright           = 0x0afb,  /* U+2117 SOUND RECORDING COPYRIGHT */
Key_caret                         = 0x0afc,  /* U+2038 CARET */
Key_singlelowquotemark            = 0x0afd,  /* U+201A SINGLE LOW-9 QUOTATION MARK */
Key_doublelowquotemark            = 0x0afe,  /* U+201E DOUBLE LOW-9 QUOTATION MARK */
Key_cursor                        = 0x0aff,


/*
 * APL
 * Byte 3 = = 0x0b,
 */


Key_leftcaret                     = 0x0ba3,  /*(U+003C LESS-THAN SIGN)*/
Key_rightcaret                    = 0x0ba6,  /*(U+003E GREATER-THAN SIGN)*/
Key_downcaret                     = 0x0ba8,  /*(U+2228 LOGICAL OR)*/
Key_upcaret                       = 0x0ba9,  /*(U+2227 LOGICAL AND)*/
Key_overbar                       = 0x0bc0,  /*(U+00AF MACRON)*/
Key_downtack                      = 0x0bc2,  /* U+22A4 DOWN TACK */
Key_upshoe                        = 0x0bc3,  /*(U+2229 INTERSECTION)*/
Key_downstile                     = 0x0bc4,  /* U+230A LEFT FLOOR */
Key_underbar                      = 0x0bc6,  /*(U+005F LOW LINE)*/
Key_jot                           = 0x0bca,  /* U+2218 RING OPERATOR */
Key_quad                          = 0x0bcc,  /* U+2395 APL FUNCTIONAL SYMBOL QUAD */
Key_uptack                        = 0x0bce,  /* U+22A5 UP TACK */
Key_circle                        = 0x0bcf,  /* U+25CB WHITE CIRCLE */
Key_upstile                       = 0x0bd3,  /* U+2308 LEFT CEILING */
Key_downshoe                      = 0x0bd6,  /*(U+222A UNION)*/
Key_rightshoe                     = 0x0bd8,  /*(U+2283 SUPERSET OF)*/
Key_leftshoe                      = 0x0bda,  /*(U+2282 SUBSET OF)*/
Key_lefttack                      = 0x0bdc,  /* U+22A3 LEFT TACK */
Key_righttack                     = 0x0bfc,  /* U+22A2 RIGHT TACK */


/*
 * Hebrew
 * Byte 3 = = 0x0c,
 */


Key_hebrew_doublelowline          = 0x0cdf,  /* U+2017 DOUBLE LOW LINE */
Key_hebrew_aleph                  = 0x0ce0,  /* U+05D0 HEBREW LETTER ALEF */
Key_hebrew_bet                    = 0x0ce1,  /* U+05D1 HEBREW LETTER BET */
Key_hebrew_beth                   = 0x0ce1,  /* deprecated */
Key_hebrew_gimel                  = 0x0ce2,  /* U+05D2 HEBREW LETTER GIMEL */
Key_hebrew_gimmel                 = 0x0ce2,  /* deprecated */
Key_hebrew_dalet                  = 0x0ce3,  /* U+05D3 HEBREW LETTER DALET */
Key_hebrew_daleth                 = 0x0ce3,  /* deprecated */
Key_hebrew_he                     = 0x0ce4,  /* U+05D4 HEBREW LETTER HE */
Key_hebrew_waw                    = 0x0ce5,  /* U+05D5 HEBREW LETTER VAV */
Key_hebrew_zain                   = 0x0ce6,  /* U+05D6 HEBREW LETTER ZAYIN */
Key_hebrew_zayin                  = 0x0ce6,  /* deprecated */
Key_hebrew_chet                   = 0x0ce7,  /* U+05D7 HEBREW LETTER HET */
Key_hebrew_het                    = 0x0ce7,  /* deprecated */
Key_hebrew_tet                    = 0x0ce8,  /* U+05D8 HEBREW LETTER TET */
Key_hebrew_teth                   = 0x0ce8,  /* deprecated */
Key_hebrew_yod                    = 0x0ce9,  /* U+05D9 HEBREW LETTER YOD */
Key_hebrew_finalkaph              = 0x0cea,  /* U+05DA HEBREW LETTER FINAL KAF */
Key_hebrew_kaph                   = 0x0ceb,  /* U+05DB HEBREW LETTER KAF */
Key_hebrew_lamed                  = 0x0cec,  /* U+05DC HEBREW LETTER LAMED */
Key_hebrew_finalmem               = 0x0ced,  /* U+05DD HEBREW LETTER FINAL MEM */
Key_hebrew_mem                    = 0x0cee,  /* U+05DE HEBREW LETTER MEM */
Key_hebrew_finalnun               = 0x0cef,  /* U+05DF HEBREW LETTER FINAL NUN */
Key_hebrew_nun                    = 0x0cf0,  /* U+05E0 HEBREW LETTER NUN */
Key_hebrew_samech                 = 0x0cf1,  /* U+05E1 HEBREW LETTER SAMEKH */
Key_hebrew_samekh                 = 0x0cf1,  /* deprecated */
Key_hebrew_ayin                   = 0x0cf2,  /* U+05E2 HEBREW LETTER AYIN */
Key_hebrew_finalpe                = 0x0cf3,  /* U+05E3 HEBREW LETTER FINAL PE */
Key_hebrew_pe                     = 0x0cf4,  /* U+05E4 HEBREW LETTER PE */
Key_hebrew_finalzade              = 0x0cf5,  /* U+05E5 HEBREW LETTER FINAL TSADI */
Key_hebrew_finalzadi              = 0x0cf5,  /* deprecated */
Key_hebrew_zade                   = 0x0cf6,  /* U+05E6 HEBREW LETTER TSADI */
Key_hebrew_zadi                   = 0x0cf6,  /* deprecated */
Key_hebrew_qoph                   = 0x0cf7,  /* U+05E7 HEBREW LETTER QOF */
Key_hebrew_kuf                    = 0x0cf7,  /* deprecated */
Key_hebrew_resh                   = 0x0cf8,  /* U+05E8 HEBREW LETTER RESH */
Key_hebrew_shin                   = 0x0cf9,  /* U+05E9 HEBREW LETTER SHIN */
Key_hebrew_taw                    = 0x0cfa,  /* U+05EA HEBREW LETTER TAV */
Key_hebrew_taf                    = 0x0cfa,  /* deprecated */
Key_Hebrew_switch                 = 0xff7e,  /* Alias for mode_switch */


/*
 * Thai
 * Byte 3 = = 0x0d,
 */


Key_Thai_kokai                    = 0x0da1,  /* U+0E01 THAI CHARACTER KO KAI */
Key_Thai_khokhai                  = 0x0da2,  /* U+0E02 THAI CHARACTER KHO KHAI */
Key_Thai_khokhuat                 = 0x0da3,  /* U+0E03 THAI CHARACTER KHO KHUAT */
Key_Thai_khokhwai                 = 0x0da4,  /* U+0E04 THAI CHARACTER KHO KHWAI */
Key_Thai_khokhon                  = 0x0da5,  /* U+0E05 THAI CHARACTER KHO KHON */
Key_Thai_khorakhang               = 0x0da6,  /* U+0E06 THAI CHARACTER KHO RAKHANG */
Key_Thai_ngongu                   = 0x0da7,  /* U+0E07 THAI CHARACTER NGO NGU */
Key_Thai_chochan                  = 0x0da8,  /* U+0E08 THAI CHARACTER CHO CHAN */
Key_Thai_choching                 = 0x0da9,  /* U+0E09 THAI CHARACTER CHO CHING */
Key_Thai_chochang                 = 0x0daa,  /* U+0E0A THAI CHARACTER CHO CHANG */
Key_Thai_soso                     = 0x0dab,  /* U+0E0B THAI CHARACTER SO SO */
Key_Thai_chochoe                  = 0x0dac,  /* U+0E0C THAI CHARACTER CHO CHOE */
Key_Thai_yoying                   = 0x0dad,  /* U+0E0D THAI CHARACTER YO YING */
Key_Thai_dochada                  = 0x0dae,  /* U+0E0E THAI CHARACTER DO CHADA */
Key_Thai_topatak                  = 0x0daf,  /* U+0E0F THAI CHARACTER TO PATAK */
Key_Thai_thothan                  = 0x0db0,  /* U+0E10 THAI CHARACTER THO THAN */
Key_Thai_thonangmontho            = 0x0db1,  /* U+0E11 THAI CHARACTER THO NANGMONTHO */
Key_Thai_thophuthao               = 0x0db2,  /* U+0E12 THAI CHARACTER THO PHUTHAO */
Key_Thai_nonen                    = 0x0db3,  /* U+0E13 THAI CHARACTER NO NEN */
Key_Thai_dodek                    = 0x0db4,  /* U+0E14 THAI CHARACTER DO DEK */
Key_Thai_totao                    = 0x0db5,  /* U+0E15 THAI CHARACTER TO TAO */
Key_Thai_thothung                 = 0x0db6,  /* U+0E16 THAI CHARACTER THO THUNG */
Key_Thai_thothahan                = 0x0db7,  /* U+0E17 THAI CHARACTER THO THAHAN */
Key_Thai_thothong                 = 0x0db8,  /* U+0E18 THAI CHARACTER THO THONG */
Key_Thai_nonu                     = 0x0db9,  /* U+0E19 THAI CHARACTER NO NU */
Key_Thai_bobaimai                 = 0x0dba,  /* U+0E1A THAI CHARACTER BO BAIMAI */
Key_Thai_popla                    = 0x0dbb,  /* U+0E1B THAI CHARACTER PO PLA */
Key_Thai_phophung                 = 0x0dbc,  /* U+0E1C THAI CHARACTER PHO PHUNG */
Key_Thai_fofa                     = 0x0dbd,  /* U+0E1D THAI CHARACTER FO FA */
Key_Thai_phophan                  = 0x0dbe,  /* U+0E1E THAI CHARACTER PHO PHAN */
Key_Thai_fofan                    = 0x0dbf,  /* U+0E1F THAI CHARACTER FO FAN */
Key_Thai_phosamphao               = 0x0dc0,  /* U+0E20 THAI CHARACTER PHO SAMPHAO */
Key_Thai_moma                     = 0x0dc1,  /* U+0E21 THAI CHARACTER MO MA */
Key_Thai_yoyak                    = 0x0dc2,  /* U+0E22 THAI CHARACTER YO YAK */
Key_Thai_rorua                    = 0x0dc3,  /* U+0E23 THAI CHARACTER RO RUA */
Key_Thai_ru                       = 0x0dc4,  /* U+0E24 THAI CHARACTER RU */
Key_Thai_loling                   = 0x0dc5,  /* U+0E25 THAI CHARACTER LO LING */
Key_Thai_lu                       = 0x0dc6,  /* U+0E26 THAI CHARACTER LU */
Key_Thai_wowaen                   = 0x0dc7,  /* U+0E27 THAI CHARACTER WO WAEN */
Key_Thai_sosala                   = 0x0dc8,  /* U+0E28 THAI CHARACTER SO SALA */
Key_Thai_sorusi                   = 0x0dc9,  /* U+0E29 THAI CHARACTER SO RUSI */
Key_Thai_sosua                    = 0x0dca,  /* U+0E2A THAI CHARACTER SO SUA */
Key_Thai_hohip                    = 0x0dcb,  /* U+0E2B THAI CHARACTER HO HIP */
Key_Thai_lochula                  = 0x0dcc,  /* U+0E2C THAI CHARACTER LO CHULA */
Key_Thai_oang                     = 0x0dcd,  /* U+0E2D THAI CHARACTER O ANG */
Key_Thai_honokhuk                 = 0x0dce,  /* U+0E2E THAI CHARACTER HO NOKHUK */
Key_Thai_paiyannoi                = 0x0dcf,  /* U+0E2F THAI CHARACTER PAIYANNOI */
Key_Thai_saraa                    = 0x0dd0,  /* U+0E30 THAI CHARACTER SARA A */
Key_Thai_maihanakat               = 0x0dd1,  /* U+0E31 THAI CHARACTER MAI HAN-AKAT */
Key_Thai_saraaa                   = 0x0dd2,  /* U+0E32 THAI CHARACTER SARA AA */
Key_Thai_saraam                   = 0x0dd3,  /* U+0E33 THAI CHARACTER SARA AM */
Key_Thai_sarai                    = 0x0dd4,  /* U+0E34 THAI CHARACTER SARA I */
Key_Thai_saraii                   = 0x0dd5,  /* U+0E35 THAI CHARACTER SARA II */
Key_Thai_saraue                   = 0x0dd6,  /* U+0E36 THAI CHARACTER SARA UE */
Key_Thai_sarauee                  = 0x0dd7,  /* U+0E37 THAI CHARACTER SARA UEE */
Key_Thai_sarau                    = 0x0dd8,  /* U+0E38 THAI CHARACTER SARA U */
Key_Thai_sarauu                   = 0x0dd9,  /* U+0E39 THAI CHARACTER SARA UU */
Key_Thai_phinthu                  = 0x0dda,  /* U+0E3A THAI CHARACTER PHINTHU */
Key_Thai_maihanakat_maitho        = 0x0dde,
Key_Thai_baht                     = 0x0ddf,  /* U+0E3F THAI CURRENCY SYMBOL BAHT */
Key_Thai_sarae                    = 0x0de0,  /* U+0E40 THAI CHARACTER SARA E */
Key_Thai_saraae                   = 0x0de1,  /* U+0E41 THAI CHARACTER SARA AE */
Key_Thai_sarao                    = 0x0de2,  /* U+0E42 THAI CHARACTER SARA O */
Key_Thai_saraaimaimuan            = 0x0de3,  /* U+0E43 THAI CHARACTER SARA AI MAIMUAN */
Key_Thai_saraaimaimalai           = 0x0de4,  /* U+0E44 THAI CHARACTER SARA AI MAIMALAI */
Key_Thai_lakkhangyao              = 0x0de5,  /* U+0E45 THAI CHARACTER LAKKHANGYAO */
Key_Thai_maiyamok                 = 0x0de6,  /* U+0E46 THAI CHARACTER MAIYAMOK */
Key_Thai_maitaikhu                = 0x0de7,  /* U+0E47 THAI CHARACTER MAITAIKHU */
Key_Thai_maiek                    = 0x0de8,  /* U+0E48 THAI CHARACTER MAI EK */
Key_Thai_maitho                   = 0x0de9,  /* U+0E49 THAI CHARACTER MAI THO */
Key_Thai_maitri                   = 0x0dea,  /* U+0E4A THAI CHARACTER MAI TRI */
Key_Thai_maichattawa              = 0x0deb,  /* U+0E4B THAI CHARACTER MAI CHATTAWA */
Key_Thai_thanthakhat              = 0x0dec,  /* U+0E4C THAI CHARACTER THANTHAKHAT */
Key_Thai_nikhahit                 = 0x0ded,  /* U+0E4D THAI CHARACTER NIKHAHIT */
Key_Thai_leksun                   = 0x0df0,  /* U+0E50 THAI DIGIT ZERO */
Key_Thai_leknung                  = 0x0df1,  /* U+0E51 THAI DIGIT ONE */
Key_Thai_leksong                  = 0x0df2,  /* U+0E52 THAI DIGIT TWO */
Key_Thai_leksam                   = 0x0df3,  /* U+0E53 THAI DIGIT THREE */
Key_Thai_leksi                    = 0x0df4,  /* U+0E54 THAI DIGIT FOUR */
Key_Thai_lekha                    = 0x0df5,  /* U+0E55 THAI DIGIT FIVE */
Key_Thai_lekhok                   = 0x0df6,  /* U+0E56 THAI DIGIT SIX */
Key_Thai_lekchet                  = 0x0df7,  /* U+0E57 THAI DIGIT SEVEN */
Key_Thai_lekpaet                  = 0x0df8,  /* U+0E58 THAI DIGIT EIGHT */
Key_Thai_lekkao                   = 0x0df9,  /* U+0E59 THAI DIGIT NINE */


/*
 * Korean
 * Byte 3 = = 0x0e,
 */



Key_Hangul                        = 0xff31,  /* Hangul start/stop(toggle) */
Key_Hangul_Start                  = 0xff32,  /* Hangul start */
Key_Hangul_End                    = 0xff33,  /* Hangul end, English start */
Key_Hangul_Hanja                  = 0xff34,  /* Start Hangul->Hanja Conversion */
Key_Hangul_Jamo                   = 0xff35,  /* Hangul Jamo mode */
Key_Hangul_Romaja                 = 0xff36,  /* Hangul Romaja mode */
Key_Hangul_Codeinput              = 0xff37,  /* Hangul code input mode */
Key_Hangul_Jeonja                 = 0xff38,  /* Jeonja mode */
Key_Hangul_Banja                  = 0xff39,  /* Banja mode */
Key_Hangul_PreHanja               = 0xff3a,  /* Pre Hanja conversion */
Key_Hangul_PostHanja              = 0xff3b,  /* Post Hanja conversion */
Key_Hangul_SingleCandidate        = 0xff3c,  /* Single candidate */
Key_Hangul_MultipleCandidate      = 0xff3d,  /* Multiple candidate */
Key_Hangul_PreviousCandidate      = 0xff3e,  /* Previous candidate */
Key_Hangul_Special                = 0xff3f,  /* Special symbols */
Key_Hangul_switch                 = 0xff7e,  /* Alias for mode_switch */

/* Hangul Consonant Characters */
Key_Hangul_Kiyeog                 = 0x0ea1,
Key_Hangul_SsangKiyeog            = 0x0ea2,
Key_Hangul_KiyeogSios             = 0x0ea3,
Key_Hangul_Nieun                  = 0x0ea4,
Key_Hangul_NieunJieuj             = 0x0ea5,
Key_Hangul_NieunHieuh             = 0x0ea6,
Key_Hangul_Dikeud                 = 0x0ea7,
Key_Hangul_SsangDikeud            = 0x0ea8,
Key_Hangul_Rieul                  = 0x0ea9,
Key_Hangul_RieulKiyeog            = 0x0eaa,
Key_Hangul_RieulMieum             = 0x0eab,
Key_Hangul_RieulPieub             = 0x0eac,
Key_Hangul_RieulSios              = 0x0ead,
Key_Hangul_RieulTieut             = 0x0eae,
Key_Hangul_RieulPhieuf            = 0x0eaf,
Key_Hangul_RieulHieuh             = 0x0eb0,
Key_Hangul_Mieum                  = 0x0eb1,
Key_Hangul_Pieub                  = 0x0eb2,
Key_Hangul_SsangPieub             = 0x0eb3,
Key_Hangul_PieubSios              = 0x0eb4,
Key_Hangul_Sios                   = 0x0eb5,
Key_Hangul_SsangSios              = 0x0eb6,
Key_Hangul_Ieung                  = 0x0eb7,
Key_Hangul_Jieuj                  = 0x0eb8,
Key_Hangul_SsangJieuj             = 0x0eb9,
Key_Hangul_Cieuc                  = 0x0eba,
Key_Hangul_Khieuq                 = 0x0ebb,
Key_Hangul_Tieut                  = 0x0ebc,
Key_Hangul_Phieuf                 = 0x0ebd,
Key_Hangul_Hieuh                  = 0x0ebe,

/* Hangul Vowel Characters */
Key_Hangul_A                      = 0x0ebf,
Key_Hangul_AE                     = 0x0ec0,
Key_Hangul_YA                     = 0x0ec1,
Key_Hangul_YAE                    = 0x0ec2,
Key_Hangul_EO                     = 0x0ec3,
Key_Hangul_E                      = 0x0ec4,
Key_Hangul_YEO                    = 0x0ec5,
Key_Hangul_YE                     = 0x0ec6,
Key_Hangul_O                      = 0x0ec7,
Key_Hangul_WA                     = 0x0ec8,
Key_Hangul_WAE                    = 0x0ec9,
Key_Hangul_OE                     = 0x0eca,
Key_Hangul_YO                     = 0x0ecb,
Key_Hangul_U                      = 0x0ecc,
Key_Hangul_WEO                    = 0x0ecd,
Key_Hangul_WE                     = 0x0ece,
Key_Hangul_WI                     = 0x0ecf,
Key_Hangul_YU                     = 0x0ed0,
Key_Hangul_EU                     = 0x0ed1,
Key_Hangul_YI                     = 0x0ed2,
Key_Hangul_I                      = 0x0ed3,

/* Hangul syllable-final (JongSeong) Characters */
Key_Hangul_J_Kiyeog               = 0x0ed4,
Key_Hangul_J_SsangKiyeog          = 0x0ed5,
Key_Hangul_J_KiyeogSios           = 0x0ed6,
Key_Hangul_J_Nieun                = 0x0ed7,
Key_Hangul_J_NieunJieuj           = 0x0ed8,
Key_Hangul_J_NieunHieuh           = 0x0ed9,
Key_Hangul_J_Dikeud               = 0x0eda,
Key_Hangul_J_Rieul                = 0x0edb,
Key_Hangul_J_RieulKiyeog          = 0x0edc,
Key_Hangul_J_RieulMieum           = 0x0edd,
Key_Hangul_J_RieulPieub           = 0x0ede,
Key_Hangul_J_RieulSios            = 0x0edf,
Key_Hangul_J_RieulTieut           = 0x0ee0,
Key_Hangul_J_RieulPhieuf          = 0x0ee1,
Key_Hangul_J_RieulHieuh           = 0x0ee2,
Key_Hangul_J_Mieum                = 0x0ee3,
Key_Hangul_J_Pieub                = 0x0ee4,
Key_Hangul_J_PieubSios            = 0x0ee5,
Key_Hangul_J_Sios                 = 0x0ee6,
Key_Hangul_J_SsangSios            = 0x0ee7,
Key_Hangul_J_Ieung                = 0x0ee8,
Key_Hangul_J_Jieuj                = 0x0ee9,
Key_Hangul_J_Cieuc                = 0x0eea,
Key_Hangul_J_Khieuq               = 0x0eeb,
Key_Hangul_J_Tieut                = 0x0eec,
Key_Hangul_J_Phieuf               = 0x0eed,
Key_Hangul_J_Hieuh                = 0x0eee,

/* Ancient Hangul Consonant Characters */
Key_Hangul_RieulYeorinHieuh       = 0x0eef,
Key_Hangul_SunkyeongeumMieum      = 0x0ef0,
Key_Hangul_SunkyeongeumPieub      = 0x0ef1,
Key_Hangul_PanSios                = 0x0ef2,
Key_Hangul_KkogjiDalrinIeung      = 0x0ef3,
Key_Hangul_SunkyeongeumPhieuf     = 0x0ef4,
Key_Hangul_YeorinHieuh            = 0x0ef5,

/* Ancient Hangul Vowel Characters */
Key_Hangul_AraeA                  = 0x0ef6,
Key_Hangul_AraeAE                 = 0x0ef7,

/* Ancient Hangul syllable-final (JongSeong) Characters */
Key_Hangul_J_PanSios              = 0x0ef8,
Key_Hangul_J_KkogjiDalrinIeung    = 0x0ef9,
Key_Hangul_J_YeorinHieuh          = 0x0efa,

/* Korean currency symbol */
Key_Korean_Won                    = 0x0eff,  /*(U+20A9 WON SIGN)*/



/*
 * Armenian
 */


Key_Armenian_ligature_ew       = 0x1000587,  /* U+0587 ARMENIAN SMALL LIGATURE ECH YIWN */
Key_Armenian_full_stop         = 0x1000589,  /* U+0589 ARMENIAN FULL STOP */
Key_Armenian_verjaket          = 0x1000589,  /* U+0589 ARMENIAN FULL STOP */
Key_Armenian_separation_mark   = 0x100055d,  /* U+055D ARMENIAN COMMA */
Key_Armenian_but               = 0x100055d,  /* U+055D ARMENIAN COMMA */
Key_Armenian_hyphen            = 0x100058a,  /* U+058A ARMENIAN HYPHEN */
Key_Armenian_yentamna          = 0x100058a,  /* U+058A ARMENIAN HYPHEN */
Key_Armenian_exclam            = 0x100055c,  /* U+055C ARMENIAN EXCLAMATION MARK */
Key_Armenian_amanak            = 0x100055c,  /* U+055C ARMENIAN EXCLAMATION MARK */
Key_Armenian_accent            = 0x100055b,  /* U+055B ARMENIAN EMPHASIS MARK */
Key_Armenian_shesht            = 0x100055b,  /* U+055B ARMENIAN EMPHASIS MARK */
Key_Armenian_question          = 0x100055e,  /* U+055E ARMENIAN QUESTION MARK */
Key_Armenian_paruyk            = 0x100055e,  /* U+055E ARMENIAN QUESTION MARK */
Key_Armenian_AYB               = 0x1000531,  /* U+0531 ARMENIAN CAPITAL LETTER AYB */
Key_Armenian_ayb               = 0x1000561,  /* U+0561 ARMENIAN SMALL LETTER AYB */
Key_Armenian_BEN               = 0x1000532,  /* U+0532 ARMENIAN CAPITAL LETTER BEN */
Key_Armenian_ben               = 0x1000562,  /* U+0562 ARMENIAN SMALL LETTER BEN */
Key_Armenian_GIM               = 0x1000533,  /* U+0533 ARMENIAN CAPITAL LETTER GIM */
Key_Armenian_gim               = 0x1000563,  /* U+0563 ARMENIAN SMALL LETTER GIM */
Key_Armenian_DA                = 0x1000534,  /* U+0534 ARMENIAN CAPITAL LETTER DA */
Key_Armenian_da                = 0x1000564,  /* U+0564 ARMENIAN SMALL LETTER DA */
Key_Armenian_YECH              = 0x1000535,  /* U+0535 ARMENIAN CAPITAL LETTER ECH */
Key_Armenian_yech              = 0x1000565,  /* U+0565 ARMENIAN SMALL LETTER ECH */
Key_Armenian_ZA                = 0x1000536,  /* U+0536 ARMENIAN CAPITAL LETTER ZA */
Key_Armenian_za                = 0x1000566,  /* U+0566 ARMENIAN SMALL LETTER ZA */
Key_Armenian_E                 = 0x1000537,  /* U+0537 ARMENIAN CAPITAL LETTER EH */
Key_Armenian_e                 = 0x1000567,  /* U+0567 ARMENIAN SMALL LETTER EH */
Key_Armenian_AT                = 0x1000538,  /* U+0538 ARMENIAN CAPITAL LETTER ET */
Key_Armenian_at                = 0x1000568,  /* U+0568 ARMENIAN SMALL LETTER ET */
Key_Armenian_TO                = 0x1000539,  /* U+0539 ARMENIAN CAPITAL LETTER TO */
Key_Armenian_to                = 0x1000569,  /* U+0569 ARMENIAN SMALL LETTER TO */
Key_Armenian_ZHE               = 0x100053a,  /* U+053A ARMENIAN CAPITAL LETTER ZHE */
Key_Armenian_zhe               = 0x100056a,  /* U+056A ARMENIAN SMALL LETTER ZHE */
Key_Armenian_INI               = 0x100053b,  /* U+053B ARMENIAN CAPITAL LETTER INI */
Key_Armenian_ini               = 0x100056b,  /* U+056B ARMENIAN SMALL LETTER INI */
Key_Armenian_LYUN              = 0x100053c,  /* U+053C ARMENIAN CAPITAL LETTER LIWN */
Key_Armenian_lyun              = 0x100056c,  /* U+056C ARMENIAN SMALL LETTER LIWN */
Key_Armenian_KHE               = 0x100053d,  /* U+053D ARMENIAN CAPITAL LETTER XEH */
Key_Armenian_khe               = 0x100056d,  /* U+056D ARMENIAN SMALL LETTER XEH */
Key_Armenian_TSA               = 0x100053e,  /* U+053E ARMENIAN CAPITAL LETTER CA */
Key_Armenian_tsa               = 0x100056e,  /* U+056E ARMENIAN SMALL LETTER CA */
Key_Armenian_KEN               = 0x100053f,  /* U+053F ARMENIAN CAPITAL LETTER KEN */
Key_Armenian_ken               = 0x100056f,  /* U+056F ARMENIAN SMALL LETTER KEN */
Key_Armenian_HO                = 0x1000540,  /* U+0540 ARMENIAN CAPITAL LETTER HO */
Key_Armenian_ho                = 0x1000570,  /* U+0570 ARMENIAN SMALL LETTER HO */
Key_Armenian_DZA               = 0x1000541,  /* U+0541 ARMENIAN CAPITAL LETTER JA */
Key_Armenian_dza               = 0x1000571,  /* U+0571 ARMENIAN SMALL LETTER JA */
Key_Armenian_GHAT              = 0x1000542,  /* U+0542 ARMENIAN CAPITAL LETTER GHAD */
Key_Armenian_ghat              = 0x1000572,  /* U+0572 ARMENIAN SMALL LETTER GHAD */
Key_Armenian_TCHE              = 0x1000543,  /* U+0543 ARMENIAN CAPITAL LETTER CHEH */
Key_Armenian_tche              = 0x1000573,  /* U+0573 ARMENIAN SMALL LETTER CHEH */
Key_Armenian_MEN               = 0x1000544,  /* U+0544 ARMENIAN CAPITAL LETTER MEN */
Key_Armenian_men               = 0x1000574,  /* U+0574 ARMENIAN SMALL LETTER MEN */
Key_Armenian_HI                = 0x1000545,  /* U+0545 ARMENIAN CAPITAL LETTER YI */
Key_Armenian_hi                = 0x1000575,  /* U+0575 ARMENIAN SMALL LETTER YI */
Key_Armenian_NU                = 0x1000546,  /* U+0546 ARMENIAN CAPITAL LETTER NOW */
Key_Armenian_nu                = 0x1000576,  /* U+0576 ARMENIAN SMALL LETTER NOW */
Key_Armenian_SHA               = 0x1000547,  /* U+0547 ARMENIAN CAPITAL LETTER SHA */
Key_Armenian_sha               = 0x1000577,  /* U+0577 ARMENIAN SMALL LETTER SHA */
Key_Armenian_VO                = 0x1000548,  /* U+0548 ARMENIAN CAPITAL LETTER VO */
Key_Armenian_vo                = 0x1000578,  /* U+0578 ARMENIAN SMALL LETTER VO */
Key_Armenian_CHA               = 0x1000549,  /* U+0549 ARMENIAN CAPITAL LETTER CHA */
Key_Armenian_cha               = 0x1000579,  /* U+0579 ARMENIAN SMALL LETTER CHA */
Key_Armenian_PE                = 0x100054a,  /* U+054A ARMENIAN CAPITAL LETTER PEH */
Key_Armenian_pe                = 0x100057a,  /* U+057A ARMENIAN SMALL LETTER PEH */
Key_Armenian_JE                = 0x100054b,  /* U+054B ARMENIAN CAPITAL LETTER JHEH */
Key_Armenian_je                = 0x100057b,  /* U+057B ARMENIAN SMALL LETTER JHEH */
Key_Armenian_RA                = 0x100054c,  /* U+054C ARMENIAN CAPITAL LETTER RA */
Key_Armenian_ra                = 0x100057c,  /* U+057C ARMENIAN SMALL LETTER RA */
Key_Armenian_SE                = 0x100054d,  /* U+054D ARMENIAN CAPITAL LETTER SEH */
Key_Armenian_se                = 0x100057d,  /* U+057D ARMENIAN SMALL LETTER SEH */
Key_Armenian_VEV               = 0x100054e,  /* U+054E ARMENIAN CAPITAL LETTER VEW */
Key_Armenian_vev               = 0x100057e,  /* U+057E ARMENIAN SMALL LETTER VEW */
Key_Armenian_TYUN              = 0x100054f,  /* U+054F ARMENIAN CAPITAL LETTER TIWN */
Key_Armenian_tyun              = 0x100057f,  /* U+057F ARMENIAN SMALL LETTER TIWN */
Key_Armenian_RE                = 0x1000550,  /* U+0550 ARMENIAN CAPITAL LETTER REH */
Key_Armenian_re                = 0x1000580,  /* U+0580 ARMENIAN SMALL LETTER REH */
Key_Armenian_TSO               = 0x1000551,  /* U+0551 ARMENIAN CAPITAL LETTER CO */
Key_Armenian_tso               = 0x1000581,  /* U+0581 ARMENIAN SMALL LETTER CO */
Key_Armenian_VYUN              = 0x1000552,  /* U+0552 ARMENIAN CAPITAL LETTER YIWN */
Key_Armenian_vyun              = 0x1000582,  /* U+0582 ARMENIAN SMALL LETTER YIWN */
Key_Armenian_PYUR              = 0x1000553,  /* U+0553 ARMENIAN CAPITAL LETTER PIWR */
Key_Armenian_pyur              = 0x1000583,  /* U+0583 ARMENIAN SMALL LETTER PIWR */
Key_Armenian_KE                = 0x1000554,  /* U+0554 ARMENIAN CAPITAL LETTER KEH */
Key_Armenian_ke                = 0x1000584,  /* U+0584 ARMENIAN SMALL LETTER KEH */
Key_Armenian_O                 = 0x1000555,  /* U+0555 ARMENIAN CAPITAL LETTER OH */
Key_Armenian_o                 = 0x1000585,  /* U+0585 ARMENIAN SMALL LETTER OH */
Key_Armenian_FE                = 0x1000556,  /* U+0556 ARMENIAN CAPITAL LETTER FEH */
Key_Armenian_fe                = 0x1000586,  /* U+0586 ARMENIAN SMALL LETTER FEH */
Key_Armenian_apostrophe        = 0x100055a,  /* U+055A ARMENIAN APOSTROPHE */


/*
 * Georgian
 */


Key_Georgian_an                = 0x10010d0,  /* U+10D0 GEORGIAN LETTER AN */
Key_Georgian_ban               = 0x10010d1,  /* U+10D1 GEORGIAN LETTER BAN */
Key_Georgian_gan               = 0x10010d2,  /* U+10D2 GEORGIAN LETTER GAN */
Key_Georgian_don               = 0x10010d3,  /* U+10D3 GEORGIAN LETTER DON */
Key_Georgian_en                = 0x10010d4,  /* U+10D4 GEORGIAN LETTER EN */
Key_Georgian_vin               = 0x10010d5,  /* U+10D5 GEORGIAN LETTER VIN */
Key_Georgian_zen               = 0x10010d6,  /* U+10D6 GEORGIAN LETTER ZEN */
Key_Georgian_tan               = 0x10010d7,  /* U+10D7 GEORGIAN LETTER TAN */
Key_Georgian_in                = 0x10010d8,  /* U+10D8 GEORGIAN LETTER IN */
Key_Georgian_kan               = 0x10010d9,  /* U+10D9 GEORGIAN LETTER KAN */
Key_Georgian_las               = 0x10010da,  /* U+10DA GEORGIAN LETTER LAS */
Key_Georgian_man               = 0x10010db,  /* U+10DB GEORGIAN LETTER MAN */
Key_Georgian_nar               = 0x10010dc,  /* U+10DC GEORGIAN LETTER NAR */
Key_Georgian_on                = 0x10010dd,  /* U+10DD GEORGIAN LETTER ON */
Key_Georgian_par               = 0x10010de,  /* U+10DE GEORGIAN LETTER PAR */
Key_Georgian_zhar              = 0x10010df,  /* U+10DF GEORGIAN LETTER ZHAR */
Key_Georgian_rae               = 0x10010e0,  /* U+10E0 GEORGIAN LETTER RAE */
Key_Georgian_san               = 0x10010e1,  /* U+10E1 GEORGIAN LETTER SAN */
Key_Georgian_tar               = 0x10010e2,  /* U+10E2 GEORGIAN LETTER TAR */
Key_Georgian_un                = 0x10010e3,  /* U+10E3 GEORGIAN LETTER UN */
Key_Georgian_phar              = 0x10010e4,  /* U+10E4 GEORGIAN LETTER PHAR */
Key_Georgian_khar              = 0x10010e5,  /* U+10E5 GEORGIAN LETTER KHAR */
Key_Georgian_ghan              = 0x10010e6,  /* U+10E6 GEORGIAN LETTER GHAN */
Key_Georgian_qar               = 0x10010e7,  /* U+10E7 GEORGIAN LETTER QAR */
Key_Georgian_shin              = 0x10010e8,  /* U+10E8 GEORGIAN LETTER SHIN */
Key_Georgian_chin              = 0x10010e9,  /* U+10E9 GEORGIAN LETTER CHIN */
Key_Georgian_can               = 0x10010ea,  /* U+10EA GEORGIAN LETTER CAN */
Key_Georgian_jil               = 0x10010eb,  /* U+10EB GEORGIAN LETTER JIL */
Key_Georgian_cil               = 0x10010ec,  /* U+10EC GEORGIAN LETTER CIL */
Key_Georgian_char              = 0x10010ed,  /* U+10ED GEORGIAN LETTER CHAR */
Key_Georgian_xan               = 0x10010ee,  /* U+10EE GEORGIAN LETTER XAN */
Key_Georgian_jhan              = 0x10010ef,  /* U+10EF GEORGIAN LETTER JHAN */
Key_Georgian_hae               = 0x10010f0,  /* U+10F0 GEORGIAN LETTER HAE */
Key_Georgian_he                = 0x10010f1,  /* U+10F1 GEORGIAN LETTER HE */
Key_Georgian_hie               = 0x10010f2,  /* U+10F2 GEORGIAN LETTER HIE */
Key_Georgian_we                = 0x10010f3,  /* U+10F3 GEORGIAN LETTER WE */
Key_Georgian_har               = 0x10010f4,  /* U+10F4 GEORGIAN LETTER HAR */
Key_Georgian_hoe               = 0x10010f5,  /* U+10F5 GEORGIAN LETTER HOE */
Key_Georgian_fi                = 0x10010f6,  /* U+10F6 GEORGIAN LETTER FI */


/*
 * Azeri (and other Turkic or Caucasian languages)
 */


/* latin */
Key_Xabovedot                  = 0x1001e8a,  /* U+1E8A LATIN CAPITAL LETTER X WITH DOT ABOVE */
Key_Ibreve                     = 0x100012c,  /* U+012C LATIN CAPITAL LETTER I WITH BREVE */
Key_Zstroke                    = 0x10001b5,  /* U+01B5 LATIN CAPITAL LETTER Z WITH STROKE */
Key_Gcaron                     = 0x10001e6,  /* U+01E6 LATIN CAPITAL LETTER G WITH CARON */
Key_Ocaron                     = 0x10001d1,  /* U+01D2 LATIN CAPITAL LETTER O WITH CARON */
Key_Obarred                    = 0x100019f,  /* U+019F LATIN CAPITAL LETTER O WITH MIDDLE TILDE */
Key_xabovedot                  = 0x1001e8b,  /* U+1E8B LATIN SMALL LETTER X WITH DOT ABOVE */
Key_ibreve                     = 0x100012d,  /* U+012D LATIN SMALL LETTER I WITH BREVE */
Key_zstroke                    = 0x10001b6,  /* U+01B6 LATIN SMALL LETTER Z WITH STROKE */
Key_gcaron                     = 0x10001e7,  /* U+01E7 LATIN SMALL LETTER G WITH CARON */
Key_ocaron                     = 0x10001d2,  /* U+01D2 LATIN SMALL LETTER O WITH CARON */
Key_obarred                    = 0x1000275,  /* U+0275 LATIN SMALL LETTER BARRED O */
Key_SCHWA                      = 0x100018f,  /* U+018F LATIN CAPITAL LETTER SCHWA */
Key_schwa                      = 0x1000259,  /* U+0259 LATIN SMALL LETTER SCHWA */
/* those are not really Caucasus */
/* For Inupiak */
Key_Lbelowdot                  = 0x1001e36,  /* U+1E36 LATIN CAPITAL LETTER L WITH DOT BELOW */
Key_lbelowdot                  = 0x1001e37,  /* U+1E37 LATIN SMALL LETTER L WITH DOT BELOW */


/*
 * Vietnamese
 */
 

Key_Abelowdot                  = 0x1001ea0,  /* U+1EA0 LATIN CAPITAL LETTER A WITH DOT BELOW */
Key_abelowdot                  = 0x1001ea1,  /* U+1EA1 LATIN SMALL LETTER A WITH DOT BELOW */
Key_Ahook                      = 0x1001ea2,  /* U+1EA2 LATIN CAPITAL LETTER A WITH HOOK ABOVE */
Key_ahook                      = 0x1001ea3,  /* U+1EA3 LATIN SMALL LETTER A WITH HOOK ABOVE */
Key_Acircumflexacute           = 0x1001ea4,  /* U+1EA4 LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND ACUTE */
Key_acircumflexacute           = 0x1001ea5,  /* U+1EA5 LATIN SMALL LETTER A WITH CIRCUMFLEX AND ACUTE */
Key_Acircumflexgrave           = 0x1001ea6,  /* U+1EA6 LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND GRAVE */
Key_acircumflexgrave           = 0x1001ea7,  /* U+1EA7 LATIN SMALL LETTER A WITH CIRCUMFLEX AND GRAVE */
Key_Acircumflexhook            = 0x1001ea8,  /* U+1EA8 LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
Key_acircumflexhook            = 0x1001ea9,  /* U+1EA9 LATIN SMALL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
Key_Acircumflextilde           = 0x1001eaa,  /* U+1EAA LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND TILDE */
Key_acircumflextilde           = 0x1001eab,  /* U+1EAB LATIN SMALL LETTER A WITH CIRCUMFLEX AND TILDE */
Key_Acircumflexbelowdot        = 0x1001eac,  /* U+1EAC LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
Key_acircumflexbelowdot        = 0x1001ead,  /* U+1EAD LATIN SMALL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
Key_Abreveacute                = 0x1001eae,  /* U+1EAE LATIN CAPITAL LETTER A WITH BREVE AND ACUTE */
Key_abreveacute                = 0x1001eaf,  /* U+1EAF LATIN SMALL LETTER A WITH BREVE AND ACUTE */
Key_Abrevegrave                = 0x1001eb0,  /* U+1EB0 LATIN CAPITAL LETTER A WITH BREVE AND GRAVE */
Key_abrevegrave                = 0x1001eb1,  /* U+1EB1 LATIN SMALL LETTER A WITH BREVE AND GRAVE */
Key_Abrevehook                 = 0x1001eb2,  /* U+1EB2 LATIN CAPITAL LETTER A WITH BREVE AND HOOK ABOVE */
Key_abrevehook                 = 0x1001eb3,  /* U+1EB3 LATIN SMALL LETTER A WITH BREVE AND HOOK ABOVE */
Key_Abrevetilde                = 0x1001eb4,  /* U+1EB4 LATIN CAPITAL LETTER A WITH BREVE AND TILDE */
Key_abrevetilde                = 0x1001eb5,  /* U+1EB5 LATIN SMALL LETTER A WITH BREVE AND TILDE */
Key_Abrevebelowdot             = 0x1001eb6,  /* U+1EB6 LATIN CAPITAL LETTER A WITH BREVE AND DOT BELOW */
Key_abrevebelowdot             = 0x1001eb7,  /* U+1EB7 LATIN SMALL LETTER A WITH BREVE AND DOT BELOW */
Key_Ebelowdot                  = 0x1001eb8,  /* U+1EB8 LATIN CAPITAL LETTER E WITH DOT BELOW */
Key_ebelowdot                  = 0x1001eb9,  /* U+1EB9 LATIN SMALL LETTER E WITH DOT BELOW */
Key_Ehook                      = 0x1001eba,  /* U+1EBA LATIN CAPITAL LETTER E WITH HOOK ABOVE */
Key_ehook                      = 0x1001ebb,  /* U+1EBB LATIN SMALL LETTER E WITH HOOK ABOVE */
Key_Etilde                     = 0x1001ebc,  /* U+1EBC LATIN CAPITAL LETTER E WITH TILDE */
Key_etilde                     = 0x1001ebd,  /* U+1EBD LATIN SMALL LETTER E WITH TILDE */
Key_Ecircumflexacute           = 0x1001ebe,  /* U+1EBE LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND ACUTE */
Key_ecircumflexacute           = 0x1001ebf,  /* U+1EBF LATIN SMALL LETTER E WITH CIRCUMFLEX AND ACUTE */
Key_Ecircumflexgrave           = 0x1001ec0,  /* U+1EC0 LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND GRAVE */
Key_ecircumflexgrave           = 0x1001ec1,  /* U+1EC1 LATIN SMALL LETTER E WITH CIRCUMFLEX AND GRAVE */
Key_Ecircumflexhook            = 0x1001ec2,  /* U+1EC2 LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
Key_ecircumflexhook            = 0x1001ec3,  /* U+1EC3 LATIN SMALL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
Key_Ecircumflextilde           = 0x1001ec4,  /* U+1EC4 LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND TILDE */
Key_ecircumflextilde           = 0x1001ec5,  /* U+1EC5 LATIN SMALL LETTER E WITH CIRCUMFLEX AND TILDE */
Key_Ecircumflexbelowdot        = 0x1001ec6,  /* U+1EC6 LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
Key_ecircumflexbelowdot        = 0x1001ec7,  /* U+1EC7 LATIN SMALL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
Key_Ihook                      = 0x1001ec8,  /* U+1EC8 LATIN CAPITAL LETTER I WITH HOOK ABOVE */
Key_ihook                      = 0x1001ec9,  /* U+1EC9 LATIN SMALL LETTER I WITH HOOK ABOVE */
Key_Ibelowdot                  = 0x1001eca,  /* U+1ECA LATIN CAPITAL LETTER I WITH DOT BELOW */
Key_ibelowdot                  = 0x1001ecb,  /* U+1ECB LATIN SMALL LETTER I WITH DOT BELOW */
Key_Obelowdot                  = 0x1001ecc,  /* U+1ECC LATIN CAPITAL LETTER O WITH DOT BELOW */
Key_obelowdot                  = 0x1001ecd,  /* U+1ECD LATIN SMALL LETTER O WITH DOT BELOW */
Key_Ohook                      = 0x1001ece,  /* U+1ECE LATIN CAPITAL LETTER O WITH HOOK ABOVE */
Key_ohook                      = 0x1001ecf,  /* U+1ECF LATIN SMALL LETTER O WITH HOOK ABOVE */
Key_Ocircumflexacute           = 0x1001ed0,  /* U+1ED0 LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND ACUTE */
Key_ocircumflexacute           = 0x1001ed1,  /* U+1ED1 LATIN SMALL LETTER O WITH CIRCUMFLEX AND ACUTE */
Key_Ocircumflexgrave           = 0x1001ed2,  /* U+1ED2 LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND GRAVE */
Key_ocircumflexgrave           = 0x1001ed3,  /* U+1ED3 LATIN SMALL LETTER O WITH CIRCUMFLEX AND GRAVE */
Key_Ocircumflexhook            = 0x1001ed4,  /* U+1ED4 LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
Key_ocircumflexhook            = 0x1001ed5,  /* U+1ED5 LATIN SMALL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
Key_Ocircumflextilde           = 0x1001ed6,  /* U+1ED6 LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND TILDE */
Key_ocircumflextilde           = 0x1001ed7,  /* U+1ED7 LATIN SMALL LETTER O WITH CIRCUMFLEX AND TILDE */
Key_Ocircumflexbelowdot        = 0x1001ed8,  /* U+1ED8 LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
Key_ocircumflexbelowdot        = 0x1001ed9,  /* U+1ED9 LATIN SMALL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
Key_Ohornacute                 = 0x1001eda,  /* U+1EDA LATIN CAPITAL LETTER O WITH HORN AND ACUTE */
Key_ohornacute                 = 0x1001edb,  /* U+1EDB LATIN SMALL LETTER O WITH HORN AND ACUTE */
Key_Ohorngrave                 = 0x1001edc,  /* U+1EDC LATIN CAPITAL LETTER O WITH HORN AND GRAVE */
Key_ohorngrave                 = 0x1001edd,  /* U+1EDD LATIN SMALL LETTER O WITH HORN AND GRAVE */
Key_Ohornhook                  = 0x1001ede,  /* U+1EDE LATIN CAPITAL LETTER O WITH HORN AND HOOK ABOVE */
Key_ohornhook                  = 0x1001edf,  /* U+1EDF LATIN SMALL LETTER O WITH HORN AND HOOK ABOVE */
Key_Ohorntilde                 = 0x1001ee0,  /* U+1EE0 LATIN CAPITAL LETTER O WITH HORN AND TILDE */
Key_ohorntilde                 = 0x1001ee1,  /* U+1EE1 LATIN SMALL LETTER O WITH HORN AND TILDE */
Key_Ohornbelowdot              = 0x1001ee2,  /* U+1EE2 LATIN CAPITAL LETTER O WITH HORN AND DOT BELOW */
Key_ohornbelowdot              = 0x1001ee3,  /* U+1EE3 LATIN SMALL LETTER O WITH HORN AND DOT BELOW */
Key_Ubelowdot                  = 0x1001ee4,  /* U+1EE4 LATIN CAPITAL LETTER U WITH DOT BELOW */
Key_ubelowdot                  = 0x1001ee5,  /* U+1EE5 LATIN SMALL LETTER U WITH DOT BELOW */
Key_Uhook                      = 0x1001ee6,  /* U+1EE6 LATIN CAPITAL LETTER U WITH HOOK ABOVE */
Key_uhook                      = 0x1001ee7,  /* U+1EE7 LATIN SMALL LETTER U WITH HOOK ABOVE */
Key_Uhornacute                 = 0x1001ee8,  /* U+1EE8 LATIN CAPITAL LETTER U WITH HORN AND ACUTE */
Key_uhornacute                 = 0x1001ee9,  /* U+1EE9 LATIN SMALL LETTER U WITH HORN AND ACUTE */
Key_Uhorngrave                 = 0x1001eea,  /* U+1EEA LATIN CAPITAL LETTER U WITH HORN AND GRAVE */
Key_uhorngrave                 = 0x1001eeb,  /* U+1EEB LATIN SMALL LETTER U WITH HORN AND GRAVE */
Key_Uhornhook                  = 0x1001eec,  /* U+1EEC LATIN CAPITAL LETTER U WITH HORN AND HOOK ABOVE */
Key_uhornhook                  = 0x1001eed,  /* U+1EED LATIN SMALL LETTER U WITH HORN AND HOOK ABOVE */
Key_Uhorntilde                 = 0x1001eee,  /* U+1EEE LATIN CAPITAL LETTER U WITH HORN AND TILDE */
Key_uhorntilde                 = 0x1001eef,  /* U+1EEF LATIN SMALL LETTER U WITH HORN AND TILDE */
Key_Uhornbelowdot              = 0x1001ef0,  /* U+1EF0 LATIN CAPITAL LETTER U WITH HORN AND DOT BELOW */
Key_uhornbelowdot              = 0x1001ef1,  /* U+1EF1 LATIN SMALL LETTER U WITH HORN AND DOT BELOW */
Key_Ybelowdot                  = 0x1001ef4,  /* U+1EF4 LATIN CAPITAL LETTER Y WITH DOT BELOW */
Key_ybelowdot                  = 0x1001ef5,  /* U+1EF5 LATIN SMALL LETTER Y WITH DOT BELOW */
Key_Yhook                      = 0x1001ef6,  /* U+1EF6 LATIN CAPITAL LETTER Y WITH HOOK ABOVE */
Key_yhook                      = 0x1001ef7,  /* U+1EF7 LATIN SMALL LETTER Y WITH HOOK ABOVE */
Key_Ytilde                     = 0x1001ef8,  /* U+1EF8 LATIN CAPITAL LETTER Y WITH TILDE */
Key_ytilde                     = 0x1001ef9,  /* U+1EF9 LATIN SMALL LETTER Y WITH TILDE */
Key_Ohorn                      = 0x10001a0,  /* U+01A0 LATIN CAPITAL LETTER O WITH HORN */
Key_ohorn                      = 0x10001a1,  /* U+01A1 LATIN SMALL LETTER O WITH HORN */
Key_Uhorn                      = 0x10001af,  /* U+01AF LATIN CAPITAL LETTER U WITH HORN */
Key_uhorn                      = 0x10001b0,  /* U+01B0 LATIN SMALL LETTER U WITH HORN */




Key_EcuSign                    = 0x10020a0,  /* U+20A0 EURO-CURRENCY SIGN */
Key_ColonSign                  = 0x10020a1,  /* U+20A1 COLON SIGN */
Key_CruzeiroSign               = 0x10020a2,  /* U+20A2 CRUZEIRO SIGN */
Key_FFrancSign                 = 0x10020a3,  /* U+20A3 FRENCH FRANC SIGN */
Key_LiraSign                   = 0x10020a4,  /* U+20A4 LIRA SIGN */
Key_MillSign                   = 0x10020a5,  /* U+20A5 MILL SIGN */
Key_NairaSign                  = 0x10020a6,  /* U+20A6 NAIRA SIGN */
Key_PesetaSign                 = 0x10020a7,  /* U+20A7 PESETA SIGN */
Key_RupeeSign                  = 0x10020a8,  /* U+20A8 RUPEE SIGN */
Key_WonSign                    = 0x10020a9,  /* U+20A9 WON SIGN */
Key_NewSheqelSign              = 0x10020aa,  /* U+20AA NEW SHEQEL SIGN */
Key_DongSign                   = 0x10020ab,  /* U+20AB DONG SIGN */
Key_EuroSign                      = 0x20ac,  /* U+20AC EURO SIGN */



/* one, two and three are defined above. */
Key_zerosuperior               = 0x1002070,  /* U+2070 SUPERSCRIPT ZERO */
Key_foursuperior               = 0x1002074,  /* U+2074 SUPERSCRIPT FOUR */
Key_fivesuperior               = 0x1002075,  /* U+2075 SUPERSCRIPT FIVE */
Key_sixsuperior                = 0x1002076,  /* U+2076 SUPERSCRIPT SIX */
Key_sevensuperior              = 0x1002077,  /* U+2077 SUPERSCRIPT SEVEN */
Key_eightsuperior              = 0x1002078,  /* U+2078 SUPERSCRIPT EIGHT */
Key_ninesuperior               = 0x1002079,  /* U+2079 SUPERSCRIPT NINE */
Key_zerosubscript              = 0x1002080,  /* U+2080 SUBSCRIPT ZERO */
Key_onesubscript               = 0x1002081,  /* U+2081 SUBSCRIPT ONE */
Key_twosubscript               = 0x1002082,  /* U+2082 SUBSCRIPT TWO */
Key_threesubscript             = 0x1002083,  /* U+2083 SUBSCRIPT THREE */
Key_foursubscript              = 0x1002084,  /* U+2084 SUBSCRIPT FOUR */
Key_fivesubscript              = 0x1002085,  /* U+2085 SUBSCRIPT FIVE */
Key_sixsubscript               = 0x1002086,  /* U+2086 SUBSCRIPT SIX */
Key_sevensubscript             = 0x1002087,  /* U+2087 SUBSCRIPT SEVEN */
Key_eightsubscript             = 0x1002088,  /* U+2088 SUBSCRIPT EIGHT */
Key_ninesubscript              = 0x1002089,  /* U+2089 SUBSCRIPT NINE */
Key_partdifferential           = 0x1002202,  /* U+2202 PARTIAL DIFFERENTIAL */
Key_emptyset                   = 0x1002205,  /* U+2205 NULL SET */
Key_elementof                  = 0x1002208,  /* U+2208 ELEMENT OF */
Key_notelementof               = 0x1002209,  /* U+2209 NOT AN ELEMENT OF */
Key_containsas                 = 0x100220B,  /* U+220B CONTAINS AS MEMBER */
Key_squareroot                 = 0x100221A,  /* U+221A SQUARE ROOT */
Key_cuberoot                   = 0x100221B,  /* U+221B CUBE ROOT */
Key_fourthroot                 = 0x100221C,  /* U+221C FOURTH ROOT */
Key_dintegral                  = 0x100222C,  /* U+222C DOUBLE INTEGRAL */
Key_tintegral                  = 0x100222D,  /* U+222D TRIPLE INTEGRAL */
Key_because                    = 0x1002235,  /* U+2235 BECAUSE */
Key_approxeq                   = 0x1002248,  /* U+2245 ALMOST EQUAL TO */
Key_notapproxeq                = 0x1002247,  /* U+2247 NOT ALMOST EQUAL TO */
Key_notidentical               = 0x1002262,  /* U+2262 NOT IDENTICAL TO */
Key_stricteq                   = 0x1002263,  /* U+2263 STRICTLY EQUIVALENT TO */          



Key_braille_dot_1                 = 0xfff1,
Key_braille_dot_2                 = 0xfff2,
Key_braille_dot_3                 = 0xfff3,
Key_braille_dot_4                 = 0xfff4,
Key_braille_dot_5                 = 0xfff5,
Key_braille_dot_6                 = 0xfff6,
Key_braille_dot_7                 = 0xfff7,
Key_braille_dot_8                 = 0xfff8,
Key_braille_dot_9                 = 0xfff9,
Key_braille_dot_10                = 0xfffa,
Key_braille_blank              = 0x1002800,  /* U+2800 BRAILLE PATTERN BLANK */
Key_braille_dots_1             = 0x1002801,  /* U+2801 BRAILLE PATTERN DOTS-1 */
Key_braille_dots_2             = 0x1002802,  /* U+2802 BRAILLE PATTERN DOTS-2 */
Key_braille_dots_12            = 0x1002803,  /* U+2803 BRAILLE PATTERN DOTS-12 */
Key_braille_dots_3             = 0x1002804,  /* U+2804 BRAILLE PATTERN DOTS-3 */
Key_braille_dots_13            = 0x1002805,  /* U+2805 BRAILLE PATTERN DOTS-13 */
Key_braille_dots_23            = 0x1002806,  /* U+2806 BRAILLE PATTERN DOTS-23 */
Key_braille_dots_123           = 0x1002807,  /* U+2807 BRAILLE PATTERN DOTS-123 */
Key_braille_dots_4             = 0x1002808,  /* U+2808 BRAILLE PATTERN DOTS-4 */
Key_braille_dots_14            = 0x1002809,  /* U+2809 BRAILLE PATTERN DOTS-14 */
Key_braille_dots_24            = 0x100280a,  /* U+280a BRAILLE PATTERN DOTS-24 */
Key_braille_dots_124           = 0x100280b,  /* U+280b BRAILLE PATTERN DOTS-124 */
Key_braille_dots_34            = 0x100280c,  /* U+280c BRAILLE PATTERN DOTS-34 */
Key_braille_dots_134           = 0x100280d,  /* U+280d BRAILLE PATTERN DOTS-134 */
Key_braille_dots_234           = 0x100280e,  /* U+280e BRAILLE PATTERN DOTS-234 */
Key_braille_dots_1234          = 0x100280f,  /* U+280f BRAILLE PATTERN DOTS-1234 */
Key_braille_dots_5             = 0x1002810,  /* U+2810 BRAILLE PATTERN DOTS-5 */
Key_braille_dots_15            = 0x1002811,  /* U+2811 BRAILLE PATTERN DOTS-15 */
Key_braille_dots_25            = 0x1002812,  /* U+2812 BRAILLE PATTERN DOTS-25 */
Key_braille_dots_125           = 0x1002813,  /* U+2813 BRAILLE PATTERN DOTS-125 */
Key_braille_dots_35            = 0x1002814,  /* U+2814 BRAILLE PATTERN DOTS-35 */
Key_braille_dots_135           = 0x1002815,  /* U+2815 BRAILLE PATTERN DOTS-135 */
Key_braille_dots_235           = 0x1002816,  /* U+2816 BRAILLE PATTERN DOTS-235 */
Key_braille_dots_1235          = 0x1002817,  /* U+2817 BRAILLE PATTERN DOTS-1235 */
Key_braille_dots_45            = 0x1002818,  /* U+2818 BRAILLE PATTERN DOTS-45 */
Key_braille_dots_145           = 0x1002819,  /* U+2819 BRAILLE PATTERN DOTS-145 */
Key_braille_dots_245           = 0x100281a,  /* U+281a BRAILLE PATTERN DOTS-245 */
Key_braille_dots_1245          = 0x100281b,  /* U+281b BRAILLE PATTERN DOTS-1245 */
Key_braille_dots_345           = 0x100281c,  /* U+281c BRAILLE PATTERN DOTS-345 */
Key_braille_dots_1345          = 0x100281d,  /* U+281d BRAILLE PATTERN DOTS-1345 */
Key_braille_dots_2345          = 0x100281e,  /* U+281e BRAILLE PATTERN DOTS-2345 */
Key_braille_dots_12345         = 0x100281f,  /* U+281f BRAILLE PATTERN DOTS-12345 */
Key_braille_dots_6             = 0x1002820,  /* U+2820 BRAILLE PATTERN DOTS-6 */
Key_braille_dots_16            = 0x1002821,  /* U+2821 BRAILLE PATTERN DOTS-16 */
Key_braille_dots_26            = 0x1002822,  /* U+2822 BRAILLE PATTERN DOTS-26 */
Key_braille_dots_126           = 0x1002823,  /* U+2823 BRAILLE PATTERN DOTS-126 */
Key_braille_dots_36            = 0x1002824,  /* U+2824 BRAILLE PATTERN DOTS-36 */
Key_braille_dots_136           = 0x1002825,  /* U+2825 BRAILLE PATTERN DOTS-136 */
Key_braille_dots_236           = 0x1002826,  /* U+2826 BRAILLE PATTERN DOTS-236 */
Key_braille_dots_1236          = 0x1002827,  /* U+2827 BRAILLE PATTERN DOTS-1236 */
Key_braille_dots_46            = 0x1002828,  /* U+2828 BRAILLE PATTERN DOTS-46 */
Key_braille_dots_146           = 0x1002829,  /* U+2829 BRAILLE PATTERN DOTS-146 */
Key_braille_dots_246           = 0x100282a,  /* U+282a BRAILLE PATTERN DOTS-246 */
Key_braille_dots_1246          = 0x100282b,  /* U+282b BRAILLE PATTERN DOTS-1246 */
Key_braille_dots_346           = 0x100282c,  /* U+282c BRAILLE PATTERN DOTS-346 */
Key_braille_dots_1346          = 0x100282d,  /* U+282d BRAILLE PATTERN DOTS-1346 */
Key_braille_dots_2346          = 0x100282e,  /* U+282e BRAILLE PATTERN DOTS-2346 */
Key_braille_dots_12346         = 0x100282f,  /* U+282f BRAILLE PATTERN DOTS-12346 */
Key_braille_dots_56            = 0x1002830,  /* U+2830 BRAILLE PATTERN DOTS-56 */
Key_braille_dots_156           = 0x1002831,  /* U+2831 BRAILLE PATTERN DOTS-156 */
Key_braille_dots_256           = 0x1002832,  /* U+2832 BRAILLE PATTERN DOTS-256 */
Key_braille_dots_1256          = 0x1002833,  /* U+2833 BRAILLE PATTERN DOTS-1256 */
Key_braille_dots_356           = 0x1002834,  /* U+2834 BRAILLE PATTERN DOTS-356 */
Key_braille_dots_1356          = 0x1002835,  /* U+2835 BRAILLE PATTERN DOTS-1356 */
Key_braille_dots_2356          = 0x1002836,  /* U+2836 BRAILLE PATTERN DOTS-2356 */
Key_braille_dots_12356         = 0x1002837,  /* U+2837 BRAILLE PATTERN DOTS-12356 */
Key_braille_dots_456           = 0x1002838,  /* U+2838 BRAILLE PATTERN DOTS-456 */
Key_braille_dots_1456          = 0x1002839,  /* U+2839 BRAILLE PATTERN DOTS-1456 */
Key_braille_dots_2456          = 0x100283a,  /* U+283a BRAILLE PATTERN DOTS-2456 */
Key_braille_dots_12456         = 0x100283b,  /* U+283b BRAILLE PATTERN DOTS-12456 */
Key_braille_dots_3456          = 0x100283c,  /* U+283c BRAILLE PATTERN DOTS-3456 */
Key_braille_dots_13456         = 0x100283d,  /* U+283d BRAILLE PATTERN DOTS-13456 */
Key_braille_dots_23456         = 0x100283e,  /* U+283e BRAILLE PATTERN DOTS-23456 */
Key_braille_dots_123456        = 0x100283f,  /* U+283f BRAILLE PATTERN DOTS-123456 */
Key_braille_dots_7             = 0x1002840,  /* U+2840 BRAILLE PATTERN DOTS-7 */
Key_braille_dots_17            = 0x1002841,  /* U+2841 BRAILLE PATTERN DOTS-17 */
Key_braille_dots_27            = 0x1002842,  /* U+2842 BRAILLE PATTERN DOTS-27 */
Key_braille_dots_127           = 0x1002843,  /* U+2843 BRAILLE PATTERN DOTS-127 */
Key_braille_dots_37            = 0x1002844,  /* U+2844 BRAILLE PATTERN DOTS-37 */
Key_braille_dots_137           = 0x1002845,  /* U+2845 BRAILLE PATTERN DOTS-137 */
Key_braille_dots_237           = 0x1002846,  /* U+2846 BRAILLE PATTERN DOTS-237 */
Key_braille_dots_1237          = 0x1002847,  /* U+2847 BRAILLE PATTERN DOTS-1237 */
Key_braille_dots_47            = 0x1002848,  /* U+2848 BRAILLE PATTERN DOTS-47 */
Key_braille_dots_147           = 0x1002849,  /* U+2849 BRAILLE PATTERN DOTS-147 */
Key_braille_dots_247           = 0x100284a,  /* U+284a BRAILLE PATTERN DOTS-247 */
Key_braille_dots_1247          = 0x100284b,  /* U+284b BRAILLE PATTERN DOTS-1247 */
Key_braille_dots_347           = 0x100284c,  /* U+284c BRAILLE PATTERN DOTS-347 */
Key_braille_dots_1347          = 0x100284d,  /* U+284d BRAILLE PATTERN DOTS-1347 */
Key_braille_dots_2347          = 0x100284e,  /* U+284e BRAILLE PATTERN DOTS-2347 */
Key_braille_dots_12347         = 0x100284f,  /* U+284f BRAILLE PATTERN DOTS-12347 */
Key_braille_dots_57            = 0x1002850,  /* U+2850 BRAILLE PATTERN DOTS-57 */
Key_braille_dots_157           = 0x1002851,  /* U+2851 BRAILLE PATTERN DOTS-157 */
Key_braille_dots_257           = 0x1002852,  /* U+2852 BRAILLE PATTERN DOTS-257 */
Key_braille_dots_1257          = 0x1002853,  /* U+2853 BRAILLE PATTERN DOTS-1257 */
Key_braille_dots_357           = 0x1002854,  /* U+2854 BRAILLE PATTERN DOTS-357 */
Key_braille_dots_1357          = 0x1002855,  /* U+2855 BRAILLE PATTERN DOTS-1357 */
Key_braille_dots_2357          = 0x1002856,  /* U+2856 BRAILLE PATTERN DOTS-2357 */
Key_braille_dots_12357         = 0x1002857,  /* U+2857 BRAILLE PATTERN DOTS-12357 */
Key_braille_dots_457           = 0x1002858,  /* U+2858 BRAILLE PATTERN DOTS-457 */
Key_braille_dots_1457          = 0x1002859,  /* U+2859 BRAILLE PATTERN DOTS-1457 */
Key_braille_dots_2457          = 0x100285a,  /* U+285a BRAILLE PATTERN DOTS-2457 */
Key_braille_dots_12457         = 0x100285b,  /* U+285b BRAILLE PATTERN DOTS-12457 */
Key_braille_dots_3457          = 0x100285c,  /* U+285c BRAILLE PATTERN DOTS-3457 */
Key_braille_dots_13457         = 0x100285d,  /* U+285d BRAILLE PATTERN DOTS-13457 */
Key_braille_dots_23457         = 0x100285e,  /* U+285e BRAILLE PATTERN DOTS-23457 */
Key_braille_dots_123457        = 0x100285f,  /* U+285f BRAILLE PATTERN DOTS-123457 */
Key_braille_dots_67            = 0x1002860,  /* U+2860 BRAILLE PATTERN DOTS-67 */
Key_braille_dots_167           = 0x1002861,  /* U+2861 BRAILLE PATTERN DOTS-167 */
Key_braille_dots_267           = 0x1002862,  /* U+2862 BRAILLE PATTERN DOTS-267 */
Key_braille_dots_1267          = 0x1002863,  /* U+2863 BRAILLE PATTERN DOTS-1267 */
Key_braille_dots_367           = 0x1002864,  /* U+2864 BRAILLE PATTERN DOTS-367 */
Key_braille_dots_1367          = 0x1002865,  /* U+2865 BRAILLE PATTERN DOTS-1367 */
Key_braille_dots_2367          = 0x1002866,  /* U+2866 BRAILLE PATTERN DOTS-2367 */
Key_braille_dots_12367         = 0x1002867,  /* U+2867 BRAILLE PATTERN DOTS-12367 */
Key_braille_dots_467           = 0x1002868,  /* U+2868 BRAILLE PATTERN DOTS-467 */
Key_braille_dots_1467          = 0x1002869,  /* U+2869 BRAILLE PATTERN DOTS-1467 */
Key_braille_dots_2467          = 0x100286a,  /* U+286a BRAILLE PATTERN DOTS-2467 */
Key_braille_dots_12467         = 0x100286b,  /* U+286b BRAILLE PATTERN DOTS-12467 */
Key_braille_dots_3467          = 0x100286c,  /* U+286c BRAILLE PATTERN DOTS-3467 */
Key_braille_dots_13467         = 0x100286d,  /* U+286d BRAILLE PATTERN DOTS-13467 */
Key_braille_dots_23467         = 0x100286e,  /* U+286e BRAILLE PATTERN DOTS-23467 */
Key_braille_dots_123467        = 0x100286f,  /* U+286f BRAILLE PATTERN DOTS-123467 */
Key_braille_dots_567           = 0x1002870,  /* U+2870 BRAILLE PATTERN DOTS-567 */
Key_braille_dots_1567          = 0x1002871,  /* U+2871 BRAILLE PATTERN DOTS-1567 */
Key_braille_dots_2567          = 0x1002872,  /* U+2872 BRAILLE PATTERN DOTS-2567 */
Key_braille_dots_12567         = 0x1002873,  /* U+2873 BRAILLE PATTERN DOTS-12567 */
Key_braille_dots_3567          = 0x1002874,  /* U+2874 BRAILLE PATTERN DOTS-3567 */
Key_braille_dots_13567         = 0x1002875,  /* U+2875 BRAILLE PATTERN DOTS-13567 */
Key_braille_dots_23567         = 0x1002876,  /* U+2876 BRAILLE PATTERN DOTS-23567 */
Key_braille_dots_123567        = 0x1002877,  /* U+2877 BRAILLE PATTERN DOTS-123567 */
Key_braille_dots_4567          = 0x1002878,  /* U+2878 BRAILLE PATTERN DOTS-4567 */
Key_braille_dots_14567         = 0x1002879,  /* U+2879 BRAILLE PATTERN DOTS-14567 */
Key_braille_dots_24567         = 0x100287a,  /* U+287a BRAILLE PATTERN DOTS-24567 */
Key_braille_dots_124567        = 0x100287b,  /* U+287b BRAILLE PATTERN DOTS-124567 */
Key_braille_dots_34567         = 0x100287c,  /* U+287c BRAILLE PATTERN DOTS-34567 */
Key_braille_dots_134567        = 0x100287d,  /* U+287d BRAILLE PATTERN DOTS-134567 */
Key_braille_dots_234567        = 0x100287e,  /* U+287e BRAILLE PATTERN DOTS-234567 */
Key_braille_dots_1234567       = 0x100287f,  /* U+287f BRAILLE PATTERN DOTS-1234567 */
Key_braille_dots_8             = 0x1002880,  /* U+2880 BRAILLE PATTERN DOTS-8 */
Key_braille_dots_18            = 0x1002881,  /* U+2881 BRAILLE PATTERN DOTS-18 */
Key_braille_dots_28            = 0x1002882,  /* U+2882 BRAILLE PATTERN DOTS-28 */
Key_braille_dots_128           = 0x1002883,  /* U+2883 BRAILLE PATTERN DOTS-128 */
Key_braille_dots_38            = 0x1002884,  /* U+2884 BRAILLE PATTERN DOTS-38 */
Key_braille_dots_138           = 0x1002885,  /* U+2885 BRAILLE PATTERN DOTS-138 */
Key_braille_dots_238           = 0x1002886,  /* U+2886 BRAILLE PATTERN DOTS-238 */
Key_braille_dots_1238          = 0x1002887,  /* U+2887 BRAILLE PATTERN DOTS-1238 */
Key_braille_dots_48            = 0x1002888,  /* U+2888 BRAILLE PATTERN DOTS-48 */
Key_braille_dots_148           = 0x1002889,  /* U+2889 BRAILLE PATTERN DOTS-148 */
Key_braille_dots_248           = 0x100288a,  /* U+288a BRAILLE PATTERN DOTS-248 */
Key_braille_dots_1248          = 0x100288b,  /* U+288b BRAILLE PATTERN DOTS-1248 */
Key_braille_dots_348           = 0x100288c,  /* U+288c BRAILLE PATTERN DOTS-348 */
Key_braille_dots_1348          = 0x100288d,  /* U+288d BRAILLE PATTERN DOTS-1348 */
Key_braille_dots_2348          = 0x100288e,  /* U+288e BRAILLE PATTERN DOTS-2348 */
Key_braille_dots_12348         = 0x100288f,  /* U+288f BRAILLE PATTERN DOTS-12348 */
Key_braille_dots_58            = 0x1002890,  /* U+2890 BRAILLE PATTERN DOTS-58 */
Key_braille_dots_158           = 0x1002891,  /* U+2891 BRAILLE PATTERN DOTS-158 */
Key_braille_dots_258           = 0x1002892,  /* U+2892 BRAILLE PATTERN DOTS-258 */
Key_braille_dots_1258          = 0x1002893,  /* U+2893 BRAILLE PATTERN DOTS-1258 */
Key_braille_dots_358           = 0x1002894,  /* U+2894 BRAILLE PATTERN DOTS-358 */
Key_braille_dots_1358          = 0x1002895,  /* U+2895 BRAILLE PATTERN DOTS-1358 */
Key_braille_dots_2358          = 0x1002896,  /* U+2896 BRAILLE PATTERN DOTS-2358 */
Key_braille_dots_12358         = 0x1002897,  /* U+2897 BRAILLE PATTERN DOTS-12358 */
Key_braille_dots_458           = 0x1002898,  /* U+2898 BRAILLE PATTERN DOTS-458 */
Key_braille_dots_1458          = 0x1002899,  /* U+2899 BRAILLE PATTERN DOTS-1458 */
Key_braille_dots_2458          = 0x100289a,  /* U+289a BRAILLE PATTERN DOTS-2458 */
Key_braille_dots_12458         = 0x100289b,  /* U+289b BRAILLE PATTERN DOTS-12458 */
Key_braille_dots_3458          = 0x100289c,  /* U+289c BRAILLE PATTERN DOTS-3458 */
Key_braille_dots_13458         = 0x100289d,  /* U+289d BRAILLE PATTERN DOTS-13458 */
Key_braille_dots_23458         = 0x100289e,  /* U+289e BRAILLE PATTERN DOTS-23458 */
Key_braille_dots_123458        = 0x100289f,  /* U+289f BRAILLE PATTERN DOTS-123458 */
Key_braille_dots_68            = 0x10028a0,  /* U+28a0 BRAILLE PATTERN DOTS-68 */
Key_braille_dots_168           = 0x10028a1,  /* U+28a1 BRAILLE PATTERN DOTS-168 */
Key_braille_dots_268           = 0x10028a2,  /* U+28a2 BRAILLE PATTERN DOTS-268 */
Key_braille_dots_1268          = 0x10028a3,  /* U+28a3 BRAILLE PATTERN DOTS-1268 */
Key_braille_dots_368           = 0x10028a4,  /* U+28a4 BRAILLE PATTERN DOTS-368 */
Key_braille_dots_1368          = 0x10028a5,  /* U+28a5 BRAILLE PATTERN DOTS-1368 */
Key_braille_dots_2368          = 0x10028a6,  /* U+28a6 BRAILLE PATTERN DOTS-2368 */
Key_braille_dots_12368         = 0x10028a7,  /* U+28a7 BRAILLE PATTERN DOTS-12368 */
Key_braille_dots_468           = 0x10028a8,  /* U+28a8 BRAILLE PATTERN DOTS-468 */
Key_braille_dots_1468          = 0x10028a9,  /* U+28a9 BRAILLE PATTERN DOTS-1468 */
Key_braille_dots_2468          = 0x10028aa,  /* U+28aa BRAILLE PATTERN DOTS-2468 */
Key_braille_dots_12468         = 0x10028ab,  /* U+28ab BRAILLE PATTERN DOTS-12468 */
Key_braille_dots_3468          = 0x10028ac,  /* U+28ac BRAILLE PATTERN DOTS-3468 */
Key_braille_dots_13468         = 0x10028ad,  /* U+28ad BRAILLE PATTERN DOTS-13468 */
Key_braille_dots_23468         = 0x10028ae,  /* U+28ae BRAILLE PATTERN DOTS-23468 */
Key_braille_dots_123468        = 0x10028af,  /* U+28af BRAILLE PATTERN DOTS-123468 */
Key_braille_dots_568           = 0x10028b0,  /* U+28b0 BRAILLE PATTERN DOTS-568 */
Key_braille_dots_1568          = 0x10028b1,  /* U+28b1 BRAILLE PATTERN DOTS-1568 */
Key_braille_dots_2568          = 0x10028b2,  /* U+28b2 BRAILLE PATTERN DOTS-2568 */
Key_braille_dots_12568         = 0x10028b3,  /* U+28b3 BRAILLE PATTERN DOTS-12568 */
Key_braille_dots_3568          = 0x10028b4,  /* U+28b4 BRAILLE PATTERN DOTS-3568 */
Key_braille_dots_13568         = 0x10028b5,  /* U+28b5 BRAILLE PATTERN DOTS-13568 */
Key_braille_dots_23568         = 0x10028b6,  /* U+28b6 BRAILLE PATTERN DOTS-23568 */
Key_braille_dots_123568        = 0x10028b7,  /* U+28b7 BRAILLE PATTERN DOTS-123568 */
Key_braille_dots_4568          = 0x10028b8,  /* U+28b8 BRAILLE PATTERN DOTS-4568 */
Key_braille_dots_14568         = 0x10028b9,  /* U+28b9 BRAILLE PATTERN DOTS-14568 */
Key_braille_dots_24568         = 0x10028ba,  /* U+28ba BRAILLE PATTERN DOTS-24568 */
Key_braille_dots_124568        = 0x10028bb,  /* U+28bb BRAILLE PATTERN DOTS-124568 */
Key_braille_dots_34568         = 0x10028bc,  /* U+28bc BRAILLE PATTERN DOTS-34568 */
Key_braille_dots_134568        = 0x10028bd,  /* U+28bd BRAILLE PATTERN DOTS-134568 */
Key_braille_dots_234568        = 0x10028be,  /* U+28be BRAILLE PATTERN DOTS-234568 */
Key_braille_dots_1234568       = 0x10028bf,  /* U+28bf BRAILLE PATTERN DOTS-1234568 */
Key_braille_dots_78            = 0x10028c0,  /* U+28c0 BRAILLE PATTERN DOTS-78 */
Key_braille_dots_178           = 0x10028c1,  /* U+28c1 BRAILLE PATTERN DOTS-178 */
Key_braille_dots_278           = 0x10028c2,  /* U+28c2 BRAILLE PATTERN DOTS-278 */
Key_braille_dots_1278          = 0x10028c3,  /* U+28c3 BRAILLE PATTERN DOTS-1278 */
Key_braille_dots_378           = 0x10028c4,  /* U+28c4 BRAILLE PATTERN DOTS-378 */
Key_braille_dots_1378          = 0x10028c5,  /* U+28c5 BRAILLE PATTERN DOTS-1378 */
Key_braille_dots_2378          = 0x10028c6,  /* U+28c6 BRAILLE PATTERN DOTS-2378 */
Key_braille_dots_12378         = 0x10028c7,  /* U+28c7 BRAILLE PATTERN DOTS-12378 */
Key_braille_dots_478           = 0x10028c8,  /* U+28c8 BRAILLE PATTERN DOTS-478 */
Key_braille_dots_1478          = 0x10028c9,  /* U+28c9 BRAILLE PATTERN DOTS-1478 */
Key_braille_dots_2478          = 0x10028ca,  /* U+28ca BRAILLE PATTERN DOTS-2478 */
Key_braille_dots_12478         = 0x10028cb,  /* U+28cb BRAILLE PATTERN DOTS-12478 */
Key_braille_dots_3478          = 0x10028cc,  /* U+28cc BRAILLE PATTERN DOTS-3478 */
Key_braille_dots_13478         = 0x10028cd,  /* U+28cd BRAILLE PATTERN DOTS-13478 */
Key_braille_dots_23478         = 0x10028ce,  /* U+28ce BRAILLE PATTERN DOTS-23478 */
Key_braille_dots_123478        = 0x10028cf,  /* U+28cf BRAILLE PATTERN DOTS-123478 */
Key_braille_dots_578           = 0x10028d0,  /* U+28d0 BRAILLE PATTERN DOTS-578 */
Key_braille_dots_1578          = 0x10028d1,  /* U+28d1 BRAILLE PATTERN DOTS-1578 */
Key_braille_dots_2578          = 0x10028d2,  /* U+28d2 BRAILLE PATTERN DOTS-2578 */
Key_braille_dots_12578         = 0x10028d3,  /* U+28d3 BRAILLE PATTERN DOTS-12578 */
Key_braille_dots_3578          = 0x10028d4,  /* U+28d4 BRAILLE PATTERN DOTS-3578 */
Key_braille_dots_13578         = 0x10028d5,  /* U+28d5 BRAILLE PATTERN DOTS-13578 */
Key_braille_dots_23578         = 0x10028d6,  /* U+28d6 BRAILLE PATTERN DOTS-23578 */
Key_braille_dots_123578        = 0x10028d7,  /* U+28d7 BRAILLE PATTERN DOTS-123578 */
Key_braille_dots_4578          = 0x10028d8,  /* U+28d8 BRAILLE PATTERN DOTS-4578 */
Key_braille_dots_14578         = 0x10028d9,  /* U+28d9 BRAILLE PATTERN DOTS-14578 */
Key_braille_dots_24578         = 0x10028da,  /* U+28da BRAILLE PATTERN DOTS-24578 */
Key_braille_dots_124578        = 0x10028db,  /* U+28db BRAILLE PATTERN DOTS-124578 */
Key_braille_dots_34578         = 0x10028dc,  /* U+28dc BRAILLE PATTERN DOTS-34578 */
Key_braille_dots_134578        = 0x10028dd,  /* U+28dd BRAILLE PATTERN DOTS-134578 */
Key_braille_dots_234578        = 0x10028de,  /* U+28de BRAILLE PATTERN DOTS-234578 */
Key_braille_dots_1234578       = 0x10028df,  /* U+28df BRAILLE PATTERN DOTS-1234578 */
Key_braille_dots_678           = 0x10028e0,  /* U+28e0 BRAILLE PATTERN DOTS-678 */
Key_braille_dots_1678          = 0x10028e1,  /* U+28e1 BRAILLE PATTERN DOTS-1678 */
Key_braille_dots_2678          = 0x10028e2,  /* U+28e2 BRAILLE PATTERN DOTS-2678 */
Key_braille_dots_12678         = 0x10028e3,  /* U+28e3 BRAILLE PATTERN DOTS-12678 */
Key_braille_dots_3678          = 0x10028e4,  /* U+28e4 BRAILLE PATTERN DOTS-3678 */
Key_braille_dots_13678         = 0x10028e5,  /* U+28e5 BRAILLE PATTERN DOTS-13678 */
Key_braille_dots_23678         = 0x10028e6,  /* U+28e6 BRAILLE PATTERN DOTS-23678 */
Key_braille_dots_123678        = 0x10028e7,  /* U+28e7 BRAILLE PATTERN DOTS-123678 */
Key_braille_dots_4678          = 0x10028e8,  /* U+28e8 BRAILLE PATTERN DOTS-4678 */
Key_braille_dots_14678         = 0x10028e9,  /* U+28e9 BRAILLE PATTERN DOTS-14678 */
Key_braille_dots_24678         = 0x10028ea,  /* U+28ea BRAILLE PATTERN DOTS-24678 */
Key_braille_dots_124678        = 0x10028eb,  /* U+28eb BRAILLE PATTERN DOTS-124678 */
Key_braille_dots_34678         = 0x10028ec,  /* U+28ec BRAILLE PATTERN DOTS-34678 */
Key_braille_dots_134678        = 0x10028ed,  /* U+28ed BRAILLE PATTERN DOTS-134678 */
Key_braille_dots_234678        = 0x10028ee,  /* U+28ee BRAILLE PATTERN DOTS-234678 */
Key_braille_dots_1234678       = 0x10028ef,  /* U+28ef BRAILLE PATTERN DOTS-1234678 */
Key_braille_dots_5678          = 0x10028f0,  /* U+28f0 BRAILLE PATTERN DOTS-5678 */
Key_braille_dots_15678         = 0x10028f1,  /* U+28f1 BRAILLE PATTERN DOTS-15678 */
Key_braille_dots_25678         = 0x10028f2,  /* U+28f2 BRAILLE PATTERN DOTS-25678 */
Key_braille_dots_125678        = 0x10028f3,  /* U+28f3 BRAILLE PATTERN DOTS-125678 */
Key_braille_dots_35678         = 0x10028f4,  /* U+28f4 BRAILLE PATTERN DOTS-35678 */
Key_braille_dots_135678        = 0x10028f5,  /* U+28f5 BRAILLE PATTERN DOTS-135678 */
Key_braille_dots_235678        = 0x10028f6,  /* U+28f6 BRAILLE PATTERN DOTS-235678 */
Key_braille_dots_1235678       = 0x10028f7,  /* U+28f7 BRAILLE PATTERN DOTS-1235678 */
Key_braille_dots_45678         = 0x10028f8,  /* U+28f8 BRAILLE PATTERN DOTS-45678 */
Key_braille_dots_145678        = 0x10028f9,  /* U+28f9 BRAILLE PATTERN DOTS-145678 */
Key_braille_dots_245678        = 0x10028fa,  /* U+28fa BRAILLE PATTERN DOTS-245678 */
Key_braille_dots_1245678       = 0x10028fb,  /* U+28fb BRAILLE PATTERN DOTS-1245678 */
Key_braille_dots_345678        = 0x10028fc,  /* U+28fc BRAILLE PATTERN DOTS-345678 */
Key_braille_dots_1345678       = 0x10028fd,  /* U+28fd BRAILLE PATTERN DOTS-1345678 */
Key_braille_dots_2345678       = 0x10028fe,  /* U+28fe BRAILLE PATTERN DOTS-2345678 */
Key_braille_dots_12345678      = 0x10028ff,  /* U+28ff BRAILLE PATTERN DOTS-12345678 */


/*
 * Sinhala (http://unicode.org/charts/PDF/U0D80.pdf)
 * http://www.nongnu.org/sinhala/doc/transliteration/sinhala-transliteration_6.html
 */


Key_Sinh_ng            = 0x1000d82,  /* U+0D82 SINHALA ANUSVARAYA */
Key_Sinh_h2            = 0x1000d83,  /* U+0D83 SINHALA VISARGAYA */
Key_Sinh_a             = 0x1000d85,  /* U+0D85 SINHALA AYANNA */
Key_Sinh_aa            = 0x1000d86,  /* U+0D86 SINHALA AAYANNA */
Key_Sinh_ae            = 0x1000d87,  /* U+0D87 SINHALA AEYANNA */
Key_Sinh_aee           = 0x1000d88,  /* U+0D88 SINHALA AEEYANNA */
Key_Sinh_i             = 0x1000d89,  /* U+0D89 SINHALA IYANNA */
Key_Sinh_ii            = 0x1000d8a,  /* U+0D8A SINHALA IIYANNA */
Key_Sinh_u             = 0x1000d8b,  /* U+0D8B SINHALA UYANNA */
Key_Sinh_uu            = 0x1000d8c,  /* U+0D8C SINHALA UUYANNA */
Key_Sinh_ri            = 0x1000d8d,  /* U+0D8D SINHALA IRUYANNA */
Key_Sinh_rii           = 0x1000d8e,  /* U+0D8E SINHALA IRUUYANNA */
Key_Sinh_lu            = 0x1000d8f,  /* U+0D8F SINHALA ILUYANNA */
Key_Sinh_luu           = 0x1000d90,  /* U+0D90 SINHALA ILUUYANNA */
Key_Sinh_e             = 0x1000d91,  /* U+0D91 SINHALA EYANNA */
Key_Sinh_ee            = 0x1000d92,  /* U+0D92 SINHALA EEYANNA */
Key_Sinh_ai            = 0x1000d93,  /* U+0D93 SINHALA AIYANNA */
Key_Sinh_o             = 0x1000d94,  /* U+0D94 SINHALA OYANNA */
Key_Sinh_oo            = 0x1000d95,  /* U+0D95 SINHALA OOYANNA */
Key_Sinh_au            = 0x1000d96,  /* U+0D96 SINHALA AUYANNA */
Key_Sinh_ka            = 0x1000d9a,  /* U+0D9A SINHALA KAYANNA */
Key_Sinh_kha           = 0x1000d9b,  /* U+0D9B SINHALA MAHA. KAYANNA */
Key_Sinh_ga            = 0x1000d9c,  /* U+0D9C SINHALA GAYANNA */
Key_Sinh_gha           = 0x1000d9d,  /* U+0D9D SINHALA MAHA. GAYANNA */
Key_Sinh_ng2           = 0x1000d9e,  /* U+0D9E SINHALA KANTAJA NAASIKYAYA */
Key_Sinh_nga           = 0x1000d9f,  /* U+0D9F SINHALA SANYAKA GAYANNA */
Key_Sinh_ca            = 0x1000da0,  /* U+0DA0 SINHALA CAYANNA */
Key_Sinh_cha           = 0x1000da1,  /* U+0DA1 SINHALA MAHA. CAYANNA */
Key_Sinh_ja            = 0x1000da2,  /* U+0DA2 SINHALA JAYANNA */
Key_Sinh_jha           = 0x1000da3,  /* U+0DA3 SINHALA MAHA. JAYANNA */
Key_Sinh_nya           = 0x1000da4,  /* U+0DA4 SINHALA TAALUJA NAASIKYAYA */
Key_Sinh_jnya          = 0x1000da5,  /* U+0DA5 SINHALA TAALUJA SANYOOGA NAASIKYAYA */
Key_Sinh_nja           = 0x1000da6,  /* U+0DA6 SINHALA SANYAKA JAYANNA */
Key_Sinh_tta           = 0x1000da7,  /* U+0DA7 SINHALA TTAYANNA */
Key_Sinh_ttha          = 0x1000da8,  /* U+0DA8 SINHALA MAHA. TTAYANNA */
Key_Sinh_dda           = 0x1000da9,  /* U+0DA9 SINHALA DDAYANNA */
Key_Sinh_ddha          = 0x1000daa,  /* U+0DAA SINHALA MAHA. DDAYANNA */
Key_Sinh_nna           = 0x1000dab,  /* U+0DAB SINHALA MUURDHAJA NAYANNA */
Key_Sinh_ndda          = 0x1000dac,  /* U+0DAC SINHALA SANYAKA DDAYANNA */
Key_Sinh_tha           = 0x1000dad,  /* U+0DAD SINHALA TAYANNA */
Key_Sinh_thha          = 0x1000dae,  /* U+0DAE SINHALA MAHA. TAYANNA */
Key_Sinh_dha           = 0x1000daf,  /* U+0DAF SINHALA DAYANNA */
Key_Sinh_dhha          = 0x1000db0,  /* U+0DB0 SINHALA MAHA. DAYANNA */
Key_Sinh_na            = 0x1000db1,  /* U+0DB1 SINHALA DANTAJA NAYANNA */
Key_Sinh_ndha          = 0x1000db3,  /* U+0DB3 SINHALA SANYAKA DAYANNA */
Key_Sinh_pa            = 0x1000db4,  /* U+0DB4 SINHALA PAYANNA */
Key_Sinh_pha           = 0x1000db5,  /* U+0DB5 SINHALA MAHA. PAYANNA */
Key_Sinh_ba            = 0x1000db6,  /* U+0DB6 SINHALA BAYANNA */
Key_Sinh_bha           = 0x1000db7,  /* U+0DB7 SINHALA MAHA. BAYANNA */
Key_Sinh_ma            = 0x1000db8,  /* U+0DB8 SINHALA MAYANNA */
Key_Sinh_mba           = 0x1000db9,  /* U+0DB9 SINHALA AMBA BAYANNA */
Key_Sinh_ya            = 0x1000dba,  /* U+0DBA SINHALA YAYANNA */
Key_Sinh_ra            = 0x1000dbb,  /* U+0DBB SINHALA RAYANNA */
Key_Sinh_la            = 0x1000dbd,  /* U+0DBD SINHALA DANTAJA LAYANNA */
Key_Sinh_va            = 0x1000dc0,  /* U+0DC0 SINHALA VAYANNA */
Key_Sinh_sha           = 0x1000dc1,  /* U+0DC1 SINHALA TAALUJA SAYANNA */
Key_Sinh_ssha          = 0x1000dc2,  /* U+0DC2 SINHALA MUURDHAJA SAYANNA */
Key_Sinh_sa            = 0x1000dc3,  /* U+0DC3 SINHALA DANTAJA SAYANNA */
Key_Sinh_ha            = 0x1000dc4,  /* U+0DC4 SINHALA HAYANNA */
Key_Sinh_lla           = 0x1000dc5,  /* U+0DC5 SINHALA MUURDHAJA LAYANNA */
Key_Sinh_fa            = 0x1000dc6,  /* U+0DC6 SINHALA FAYANNA */
Key_Sinh_al            = 0x1000dca,  /* U+0DCA SINHALA AL-LAKUNA */
Key_Sinh_aa2           = 0x1000dcf,  /* U+0DCF SINHALA AELA-PILLA */
Key_Sinh_ae2           = 0x1000dd0,  /* U+0DD0 SINHALA AEDA-PILLA */
Key_Sinh_aee2          = 0x1000dd1,  /* U+0DD1 SINHALA DIGA AEDA-PILLA */
Key_Sinh_i2            = 0x1000dd2,  /* U+0DD2 SINHALA IS-PILLA */
Key_Sinh_ii2           = 0x1000dd3,  /* U+0DD3 SINHALA DIGA IS-PILLA */
Key_Sinh_u2            = 0x1000dd4,  /* U+0DD4 SINHALA PAA-PILLA */
Key_Sinh_uu2           = 0x1000dd6,  /* U+0DD6 SINHALA DIGA PAA-PILLA */
Key_Sinh_ru2           = 0x1000dd8,  /* U+0DD8 SINHALA GAETTA-PILLA */
Key_Sinh_e2            = 0x1000dd9,  /* U+0DD9 SINHALA KOMBUVA */
Key_Sinh_ee2           = 0x1000dda,  /* U+0DDA SINHALA DIGA KOMBUVA */
Key_Sinh_ai2           = 0x1000ddb,  /* U+0DDB SINHALA KOMBU DEKA */
Key_Sinh_o2            = 0x1000ddc,  /* U+0DDC SINHALA KOMBUVA HAA AELA-PILLA*/
Key_Sinh_oo2           = 0x1000ddd,  /* U+0DDD SINHALA KOMBUVA HAA DIGA AELA-PILLA*/
Key_Sinh_au2           = 0x1000dde,  /* U+0DDE SINHALA KOMBUVA HAA GAYANUKITTA */
Key_Sinh_lu2           = 0x1000ddf,  /* U+0DDF SINHALA GAYANUKITTA */
Key_Sinh_ruu2          = 0x1000df2,  /* U+0DF2 SINHALA DIGA GAETTA-PILLA */
Key_Sinh_luu2          = 0x1000df3,  /* U+0DF3 SINHALA DIGA GAYANUKITTA */
Key_Sinh_kunddaliya    = 0x1000df4,  /* U+0DF4 SINHALA KUNDDALIYA */
} FcitxKeySym;

typedef struct _HOTKEYS
{
    char *desc;
    FcitxKeySym sym;
    int state;
} HOTKEYS;

typedef struct _KEY_LIST {
    char           *strKey;
    int             code;
} KEY_LIST;

typedef enum _KEY_STATE {
    KEY_NONE = 0,
    KEY_SHIFT_COMP = 1 << 0,
    KEY_CAPSLOCK = 1 << 1,
    KEY_CTRL_COMP = 1 << 2,
    KEY_ALT_COMP = 1 << 3,
    KEY_ALT_SHIFT_COMP = KEY_ALT_COMP | KEY_SHIFT_COMP,
    KEY_CTRL_SHIFT_COMP = KEY_CTRL_COMP | KEY_SHIFT_COMP,
    KEY_CTRL_ALT_COMP = KEY_CTRL_COMP | KEY_ALT_COMP,
    KEY_CTRL_ALT_SHIFT_COMP = KEY_CTRL_COMP | KEY_ALT_COMP | KEY_SHIFT_COMP,
    KEY_NUMLOCK = 1 << 4,
    KEY_SUPER_COMP = 1 << 6,
    KEY_SCROLLLOCK = 1 << 7,
    KEY_MOUSE_PRESSED = 1 << 8
} KEY_STATE;

void SetHotKey (char *strKey, HOTKEYS * hotkey);
void GetKey (FcitxKeySym keysym, unsigned int iKeyState, FcitxKeySym* outk, unsigned int* outs);
boolean ParseKey (char *strKey, FcitxKeySym* sym, int* state);
int GetKeyList (char *strKey);
char* GetKeyString(FcitxKeySym sym, unsigned int state);

boolean IsHotKeyDigit(FcitxKeySym sym, int state);
boolean IsHotKeyUAZ(FcitxKeySym sym, int state);
boolean IsHotKeyLAZ(FcitxKeySym sym, int state);
boolean IsHotKeySimple(FcitxKeySym sym, int state);

#ifdef __cplusplus
}
#endif

#endif
