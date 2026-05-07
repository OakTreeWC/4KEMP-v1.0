#include "4kemp.h"
#include "raw_hid.h"
#include "quantum.h"

#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
       	____, ____ ,
		____, ____, KC_MPLY
    ),

    [1] = LAYOUT(
        ____, ____,
        ____, ____, ____
    ),

    [2] = LAYOUT(
        ____, ____,
        ____, ____, ____
    ),

    [3] = LAYOUT(
        ____, ____,
        ____, ____, ____
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


led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   0,1   },
  {   2,3, NO_LED   }
}, {
  // LED Index to Physical Position
  { 0,  0 }, { 74,  0 },
  {  37,  0 }, {  110,  0 },
  {0,0}, {0,0}, {0,0}, {0,0}, {0,0}
}, {
  // LED Index to Flag
  2,2,2,2,4,4,4,4,4
} };

void changecolor(uint8_t r, uint8_t g, uint8_t b) {
    for (uint8_t i = 0; i < 12; i++) {
        rgb_matrix_set_color(i, r, g, b);
    }
}

void raw_hid_receive_user(uint8_t *data, uint8_t length) {
    if (length < 6) return;           // at least 6 bytes required
    if (data[0] != 0x01) return;      // command 0x01 = set LED

    uint8_t led = data[1];            // LED index (0..3)
    uint8_t r   = data[2];            // red
    uint8_t g   = data[3];            // green
    uint8_t b   = data[4];            // blue

    if (led < 4) {                     // only valid indices
        rgb_matrix_set_color(led, r, g, b);
    }
}
