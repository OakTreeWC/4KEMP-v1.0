// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_kemp(
        KC_F13, KC_F14 ,
		KC_F15, KC_F16, KC_F17
    )
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_L, KC_R) },
    [1] =   { ENCODER_CCW_CW(LCTL(KC_F13), LCTL(KC_F14)) },
    [2] =   { ENCODER_CCW_CW(LCTL(KC_F15), LCTL(KC_F16)) },
    [3] =   { ENCODER_CCW_CW(LCTL(KC_F17), LCTL(KC_F18)) }
    //                  Encoder 1
};
#endif
