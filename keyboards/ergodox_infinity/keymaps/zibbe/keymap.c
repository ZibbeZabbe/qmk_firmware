// Nordic layout for Ergodox infinity

#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"
#include "version.h"
#include "keymap_nordic.h"
#include "keymap_german.h"

// Layer names
#define BASE 0 // default layer
#define MDIA 1 // media keys
#define QWER 2 // media keys
#define SYMB 3 // symbols

#define _______ KC_TRNS

enum custom_keycodes {
    PLACEHOLDER = SAFE_RANGE, // can always be here
    EPRM,
    VRSN,
    RGB_SLD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *


 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   '    |   1  |   2  |   3  |   4  |   5  | ESC  |           | ESC  |   6  |   7  |   8  |   9  |   0  |  BkSp  |

 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   F  |   P  |   G  | Enter|           |  ?   |   J  |   L  |   U  |   Y  |   ;  | Enter  |

 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | BkSp   |   A  |   R  |   S  |   T  |   D  |------|           |------|   H  |   N  |   E  |   I  |  O   | Enter  |

 * |--------+------+------+------+------+------|   +  |           |  !   |------+------+------+------+------+--------|
 * | LShift |  Z   |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |  ,;  |  Up  |  -   | +L2    |

 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  Ctrl|  F1  |  F23 | Win  | Alt  |                                       |  .:  | Left |  Down| Right|  L0  |

 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        | F24  | F10  |       | F16  |   Del  |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | F21  |       | F15  |        |      |
 *                                 | Space| F20  |------|       |------|  BkSp  |  ~L1 |
 *                                 |      |      | F22  |       | F14  |        |      |






 *                                 `--------------------'       `----------------------'
 */

[BASE] = LAYOUT_ergodox(  // layer 0 : default
        // left hand
        KC_RBRC,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC_ESC,
        KC_TAB,        KC_Q,         KC_W,   KC_F,   KC_P,   KC_G,   KC_ENTER,
        KC_BSPC,        KC_A,         KC_R,   KC_S,   KC_T,   KC_D,
        KC_LSFT,        KC_Z,       KC_X,   KC_C,   KC_V,   KC_B,   KC_PPLS,
                  KC_LCTRL,      KC_F1,      KC_F23,  KC_LGUI,     KC_LALT,
                                              KC_F24,  KC_F10,
                                                              KC_F21,
                                               KC_SPC,KC_F20,KC_F22,




        // right hand
             KC_ESC,     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,             KC_BSPC,
             NO_QUES,    KC_J,   KC_L,   KC_U,   KC_Y,   NO_APOS,          KC_ENTER,
                          KC_H,   KC_N,   KC_E,   KC_I,   KC_O,   KC_ENTER,


             LSFT(KC_1),KC_K,   KC_M,   KC_COMM,KC_UP, KC_SLSH,   TO(1),
                                  KC_DOT,  KC_LEFT,KC_DOWN,KC_RIGHT,          KC_NO,
             KC_VOLU,        KC_DELETE,
             KC_VOLD,
             KC_MPLY,KC_BSPC, MO(3)




),

/* Keymap 1: Media and mouse keys

 *


 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |

 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |   7  |  8   |  9   |      |        |
 * |--------+------+------+------+------+------|  F12 |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |   4  |  5   |  6   |      |  Play  |

 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LShift |  Z   |   X  |   C  |   V  |   B  |      |           |      |      |   1  |  2   |  3   |      |        |



 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  Ctrl|  F1  |  F23 | Win  | Alt  |                                       |   .  |  0   | Mute |      |      |

 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'






 */

[MDIA] = LAYOUT_ergodox(  // layer 1 : functions
  // left hand
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F12,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_Z,  KC_X,   KC_C,   KC_V,   KC_B,   KC_NO,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_TRNS,
                                                    KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,
  // right hand
       RESET,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS,    KC_7,    KC_8,    KC_9, KC_PPLS, KC_TRNS,
                    KC_N,    KC_4,    KC_5,    KC_6, KC_PPLS, KC_TRNS,
       KC_TRNS,     KC_B,    KC_1,    KC_2,    KC_3, KC_ENTER, TO(2),
                          KC_TRNS, KC_0, KC_NO, KC_NO, TO(0),
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS


),

/* Keymap 2: QWER layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |Console |   1  |   2  |   3  |   4  |   5  |  ESC |           |  ESC |   6  |   7  |   8  |   9  |   0  | Bckspc |

 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Del    |   Q  |   W  |   E  |   R  |   T  | Enter|           |  ?   |   Y  |   U  |   I  |   O  |   P  | Enter  |

 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | BkSp   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |      | Enter  |

 * |--------+------+------+------+------+------|   +  |           |  !   |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |  Up  |   -  | RShift |

 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  Ctrl|  F1  |  F23 | Win  | Alt  |                                       |   .  | Left | Down | Right| ~L1  |

 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        | F24  | F10  |       | F16  |   Del  |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | F21  |       | F15  |        |      |
 *                                 | Space| F20  |------|       |------|  BkSp  |  ~L1 |
 *                                 |      |      | F22  |       | F14  |        |      |
 *                                 `--------------------'       `----------------------'



 */
// SYMBOLS
[QWER] = LAYOUT_ergodox(
        // left hand

        KC_GRAVE,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC_ESC,
        KC_TAB,        KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   KC_ENTER,
        KC_BSPC,        KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
        KC_LSFT,        KC_Z,         KC_X,   KC_C,   KC_V,   KC_B,   KC_M,
                     KC_LCTRL,     KC_F1,   KC_TRNS,  KC_K,  KC_LALT,
                                       KC_TRNS,KC_TRNS,
                                               KC_TRNS,
                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_RGHT,     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,             KC_BSPC,
             NO_QUES,    KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,             KC_ENTER,
                          KC_H,   KC_J,   KC_K,   KC_L,   KC_NO,            KC_ENTER,
             LSFT(KC_1),KC_N,   KC_M,   KC_COMM,KC_UP, KC_MINS,   KC_NO,
                                  KC_DOT,  KC_LEFT,KC_DOWN,KC_RIGHT,          TO(0),
       KC_TRNS, KC_TRNS,














       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS
),

	/* Keymap 3: Symbol Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |  F13   |  F1  |  F2  |  F3  |  F4  |  F5  | F11  |           |  F12 |  F6  |  F7  |  F8  |  F9  |  F10 |   BkSp |

 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |   Å  |      |      | Enter  |

 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |   Ö  |      |  Ä   |      | Enter  |

 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |

 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |

 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | PGUP |       | Home |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      | PGDN |       |  End |      |      |



 *                                 `--------------------'       `--------------------'
 */
// SYMBOLS
[SYMB] = LAYOUT_ergodox(
       // left hand

       KC_F13,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F11,
       KC_TRNS,KC_NO,KC_NO,  KC_NO,KC_NO,KC_NO,KC_TRNS,
       KC_CAPS,KC_NO,KC_NO, KC_NO,KC_NO,KC_TRNS,
       KC_TRNS,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,NO_BSLS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                       KC_TRNS,KC_TRNS,
                                               KC_PGUP,
                               KC_TRNS,KC_TRNS,KC_PGDOWN,
       // right hand





       KC_F12, KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_NO,
       KC_TRNS, KC_NO,   KC_NO,   NO_AM,    KC_NO,    KC_NO, KC_ENTER,
                KC_NO, NO_AE,   KC_NO,    NO_OSLH,    KC_NO, KC_ENTER,

       KC_TRNS, KC_NO, KC_NO,   KC_NO,    KC_TRNS,    KC_NO, KC_NO,
                         KC_TRNS,KC_TRNS,  KC_TRNS,    KC_TRNS,  TO(0),
       KC_TRNS, KC_PSCR,
       KC_END,


       KC_HOME, KC_MNXT, KC_TRNS
),
};

const uint16_t PROGMEM fn_actions[] = {
    [2] = ACTION_LAYER_TAP_TOGGLE(SYMB)                // FN1 - Momentary Layer 2 (Symbols)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
        case 1:
        if (record->event.pressed) { // For resetting EEPROM
          eeconfig_init();
        }
        break;
      }
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_mode(1);
        #endif
      }
      return false;
      break;
  }
  return true;
}  

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    
    uint8_t layer = biton32(layer_state);
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }   
};