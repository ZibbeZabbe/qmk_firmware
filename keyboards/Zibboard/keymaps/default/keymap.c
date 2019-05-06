#include QMK_KEYBOARD_H

// Layers
#define DEFALT 0
//#define LOWER  1
#define RESETL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DEFALT] = LAYOUT(
    KC_A, KC_B, KC_C, KC_D, LT(LAYER_1, KC_E),           \
    KC_F, KC_G, KC_H, KC_I, KC_J,           \
    KC_K, KC_L, KC_M, KC_N, KC_O,           \
    KC_P, KC_Q, KC_R, KC_S, KC_T,           \
    KC_U, KC_V, KC_W, KC_X, KC_Y, KC_Z, KC_1, \
    KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, \
    KC_9, KC_0, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, \
    KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12 \
  ),


//  [LOWER] = LAYOUT(
//  RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
//  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
//  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
//  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
//  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
//	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
//	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
//	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO \
//  ),


  [RESETL] = LAYOUT(
    RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO \
  )
};

//-----------------------------------------------------------------------------

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(RAISE), // Raise layer
  [1] = ACTION_LAYER_MOMENTARY(LOWER), // Lower layer
  [2] = ACTION_LAYER_TOGGLE(BDO), // BDO layer
  [3] = ACTION_LAYER_TOGGLE(RESETL) // RESET layer
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  // MACRODOWN only works in this function
  switch (id) {
  case 0:
    if (record->event.pressed) {
      register_code(KC_RSFT);
    }
    else {
      unregister_code(KC_RSFT);
    }
    break;
  }
  return MACRO_NONE;
};

static uint8_t qw_dv_swap_state = 0;

bool process_record_user (uint16_t keycode, keyrecord_t *record) {
  if (keycode == KC_LGUI) {
    if (record->event.pressed) {
      qw_dv_swap_state |= 0b00000001;
    } else {
      qw_dv_swap_state &= ~(0b00000001);
    }
  }
  if (keycode == KC_LCTL) {
    if (record->event.pressed) {
      qw_dv_swap_state |= 0b00000010;
    } else {
      qw_dv_swap_state &= ~(0b00000010);
    }
  }

  if (qw_dv_swap_state == 0b00000011) {
    layer_invert(DVORAK);
  }
  return true;
}
