/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2006 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Sam Lantinga
    slouken@libsdl.org
*/
#include "../../include/SDL_scancode.h"

/* XFree86 key code to SDL scancode mapping table
   Sources:
   - atKeyNames.h from XFree86 source code
*/
/* *INDENT-OFF* */
static SDL_scancode xfree86_scancode_table[] = {
    /*  0 */    SDL_SCANCODE_UNKNOWN,
    /*  1 */    SDL_SCANCODE_ESCAPE,
    /*  2 */    SDL_SCANCODE_1,
    /*  3 */    SDL_SCANCODE_2,
    /*  4 */    SDL_SCANCODE_3,
    /*  5 */    SDL_SCANCODE_4,
    /*  6 */    SDL_SCANCODE_5,
    /*  7 */    SDL_SCANCODE_6,
    /*  8 */    SDL_SCANCODE_7,
    /*  9 */    SDL_SCANCODE_8,
    /*  10 */   SDL_SCANCODE_9,
    /*  11 */   SDL_SCANCODE_0,
    /*  12 */   SDL_SCANCODE_MINUS,
    /*  13 */   SDL_SCANCODE_EQUALS,
    /*  14 */   SDL_SCANCODE_BACKSPACE,
    /*  15 */   SDL_SCANCODE_TAB,
    /*  16 */   SDL_SCANCODE_Q,
    /*  17 */   SDL_SCANCODE_W,
    /*  18 */   SDL_SCANCODE_E,
    /*  19 */   SDL_SCANCODE_R,
    /*  20 */   SDL_SCANCODE_T,
    /*  21 */   SDL_SCANCODE_Y,
    /*  22 */   SDL_SCANCODE_U,
    /*  23 */   SDL_SCANCODE_I,
    /*  24 */   SDL_SCANCODE_O,
    /*  25 */   SDL_SCANCODE_P,
    /*  26 */   SDL_SCANCODE_LEFTBRACKET,
    /*  27 */   SDL_SCANCODE_RIGHTBRACKET,
    /*  28 */   SDL_SCANCODE_RETURN,
    /*  29 */   SDL_SCANCODE_LCTRL,
    /*  30 */   SDL_SCANCODE_A,
    /*  31 */   SDL_SCANCODE_S,
    /*  32 */   SDL_SCANCODE_D,
    /*  33 */   SDL_SCANCODE_F,
    /*  34 */   SDL_SCANCODE_G,
    /*  35 */   SDL_SCANCODE_H,
    /*  36 */   SDL_SCANCODE_J,
    /*  37 */   SDL_SCANCODE_K,
    /*  38 */   SDL_SCANCODE_L,
    /*  39 */   SDL_SCANCODE_SEMICOLON,
    /*  40 */   SDL_SCANCODE_APOSTROPHE,
    /*  41 */   SDL_SCANCODE_GRAVE,
    /*  42 */   SDL_SCANCODE_LSHIFT,
    /*  43 */   SDL_SCANCODE_BACKSLASH,
    /*  44 */   SDL_SCANCODE_Z,
    /*  45 */   SDL_SCANCODE_X,
    /*  46 */   SDL_SCANCODE_C,
    /*  47 */   SDL_SCANCODE_V,
    /*  48 */   SDL_SCANCODE_B,
    /*  49 */   SDL_SCANCODE_N,
    /*  50 */   SDL_SCANCODE_M,
    /*  51 */   SDL_SCANCODE_COMMA,
    /*  52 */   SDL_SCANCODE_PERIOD,
    /*  53 */   SDL_SCANCODE_SLASH,
    /*  54 */   SDL_SCANCODE_RSHIFT,
    /*  55 */   SDL_SCANCODE_KP_MULTIPLY,
    /*  56 */   SDL_SCANCODE_LALT,
    /*  57 */   SDL_SCANCODE_SPACE,
    /*  58 */   SDL_SCANCODE_CAPSLOCK,
    /*  59 */   SDL_SCANCODE_F1,
    /*  60 */   SDL_SCANCODE_F2,
    /*  61 */   SDL_SCANCODE_F3,
    /*  62 */   SDL_SCANCODE_F4,
    /*  63 */   SDL_SCANCODE_F5,
    /*  64 */   SDL_SCANCODE_F6,
    /*  65 */   SDL_SCANCODE_F7,
    /*  66 */   SDL_SCANCODE_F8,
    /*  67 */   SDL_SCANCODE_F9,
    /*  68 */   SDL_SCANCODE_F10,
    /*  69 */   SDL_SCANCODE_NUMLOCKCLEAR,
    /*  70 */   SDL_SCANCODE_SCROLLLOCK,
    /*  71 */   SDL_SCANCODE_KP_7,
    /*  72 */   SDL_SCANCODE_KP_8,
    /*  73 */   SDL_SCANCODE_KP_9,
    /*  74 */   SDL_SCANCODE_KP_MINUS,
    /*  75 */   SDL_SCANCODE_KP_4,
    /*  76 */   SDL_SCANCODE_KP_5,
    /*  77 */   SDL_SCANCODE_KP_6,
    /*  78 */   SDL_SCANCODE_KP_PLUS,
    /*  79 */   SDL_SCANCODE_KP_1,
    /*  80 */   SDL_SCANCODE_KP_2,
    /*  81 */   SDL_SCANCODE_KP_3,
    /*  82 */   SDL_SCANCODE_KP_0,
    /*  83 */   SDL_SCANCODE_KP_PERIOD,
    /*  84 */   SDL_SCANCODE_SYSREQ,
    /*  85 */   SDL_SCANCODE_MODE,
    /*  86 */   SDL_SCANCODE_NONUSBACKSLASH,
    /*  87 */   SDL_SCANCODE_F11,
    /*  88 */   SDL_SCANCODE_F12,
    /*  89 */   SDL_SCANCODE_HOME,
    /*  90 */   SDL_SCANCODE_UP,
    /*  91 */   SDL_SCANCODE_PAGEUP,
    /*  92 */   SDL_SCANCODE_LEFT,
    /*  93 */   SDL_SCANCODE_BRIGHTNESSDOWN, /* on PowerBook G4 / KEY_Begin */
    /*  94 */   SDL_SCANCODE_RIGHT,
    /*  95 */   SDL_SCANCODE_END,
    /*  96 */   SDL_SCANCODE_DOWN,
    /*  97 */   SDL_SCANCODE_PAGEDOWN,
    /*  98 */   SDL_SCANCODE_INSERT,
    /*  99 */   SDL_SCANCODE_DELETE,
    /*  100 */  SDL_SCANCODE_KP_ENTER,
    /*  101 */  SDL_SCANCODE_RCTRL,
    /*  102 */  SDL_SCANCODE_PAUSE,
    /*  103 */  SDL_SCANCODE_PRINTSCREEN,
    /*  104 */  SDL_SCANCODE_KP_DIVIDE,
    /*  105 */  SDL_SCANCODE_RALT,
    /*  106 */  SDL_SCANCODE_UNKNOWN, /* BREAK */
    /*  107 */  SDL_SCANCODE_LGUI,
    /*  108 */  SDL_SCANCODE_RGUI,
    /*  109 */  SDL_SCANCODE_APPLICATION,
    /*  110 */  SDL_SCANCODE_F13,
    /*  111 */  SDL_SCANCODE_F14,
    /*  112 */  SDL_SCANCODE_F15,
    /*  113 */  SDL_SCANCODE_F16,
    /*  114 */  SDL_SCANCODE_F17,
    /*  115 */	SDL_SCANCODE_UNKNOWN,
    /*	116 */  SDL_SCANCODE_UNKNOWN, /* is translated to XK_ISO_Level3_Shift by my X server, but I have no keyboard that generates this code, so I don't know what the correct SDL_SCANCODE_* for it is */
    /*  117 */  SDL_SCANCODE_UNKNOWN,
    /*  118 */  SDL_SCANCODE_KP_EQUALS,
    /*  119 */  SDL_SCANCODE_UNKNOWN,
    /*  120 */  SDL_SCANCODE_UNKNOWN,
    /*  121 */  SDL_SCANCODE_UNKNOWN,
    /*  122 */  SDL_SCANCODE_UNKNOWN,
    /*  123 */  SDL_SCANCODE_UNKNOWN,
    /*  124 */  SDL_SCANCODE_UNKNOWN,
    /*  125 */  SDL_SCANCODE_INTERNATIONAL3, /* Yen */
    /*  126 */  SDL_SCANCODE_UNKNOWN,
    /*  127 */  SDL_SCANCODE_UNKNOWN,
    /*  128 */  SDL_SCANCODE_UNKNOWN,
    /*  129 */  SDL_SCANCODE_UNKNOWN,
    /*  130 */  SDL_SCANCODE_UNKNOWN,
    /*  131 */  SDL_SCANCODE_UNKNOWN,
    /*  132 */  SDL_SCANCODE_POWER,
    /*  133 */  SDL_SCANCODE_MUTE,
    /*  134 */  SDL_SCANCODE_VOLUMEDOWN,
    /*  135 */  SDL_SCANCODE_VOLUMEUP,
    /*  136 */  SDL_SCANCODE_HELP,
    /*  137 */  SDL_SCANCODE_STOP,
    /*  138 */  SDL_SCANCODE_AGAIN,
    /*  139 */  SDL_SCANCODE_UNKNOWN, /* PROPS */
    /*  140 */  SDL_SCANCODE_UNDO,
    /*  141 */  SDL_SCANCODE_UNKNOWN, /* FRONT */
    /*  142 */  SDL_SCANCODE_COPY,
    /*  143 */  SDL_SCANCODE_UNKNOWN, /* OPEN */
    /*  144 */  SDL_SCANCODE_PASTE,
    /*  145 */  SDL_SCANCODE_FIND,
    /*  146 */  SDL_SCANCODE_CUT,
};
/* *INDENT-ON* */
