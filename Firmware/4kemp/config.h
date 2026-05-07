// Copyright 2026 William C. (@OakTreeWC)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


/* key matrix size */
#define MATRIX_COLS 3
#define MATRIX_ROWS 2

/* key matrix pins */
#define MATRIX_COL_PINS { GP28, GP29, GP6 }
#define MATRIX_ROW_PINS { GP26, GP27 }


#define ENCODERS_PAD_A { GP7 }
#define ENCODERS_PAD_B { GP0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0xB7, 0x1A, 0x17, 0x25, 0x78, 0xE3, 0x4A, 0x13}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

#define RGB_TRIGGER_ON_KEYDOWN
#define RGB_MATRIX_SLEEP // turn off effects when suspended
#define RGB_MATRIX_LED_COUNT 9

#define WS2812_DI_PIN GP1
#define NOP_FUDGE 1

#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_SPLASH
#define RGBLIGHT_SLEEP
#define RGB_DISABLE_WHEN_USB_SUSPENDED


