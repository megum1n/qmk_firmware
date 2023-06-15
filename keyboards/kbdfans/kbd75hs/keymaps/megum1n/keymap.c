#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_75_ansi(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL, KC_PGUP,
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_PGDN,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_HOME,
    KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   KC_END,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            KC_UP,    MO(1),
    KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                       MO(2),    KC_RALT,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
  ),

  [1] = LAYOUT_75_ansi(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_F17,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  LSG(KC_M),
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
    _______,  _______,  _______,                                _______,                      _______,  _______,  _______,  KC_MPRV,  KC_MPLY,  KC_MNXT
  ),

  [2] = LAYOUT_75_ansi(
    _______,  _______,  _______,  QK_BOOT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_BRID,  KC_BRIU,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_VOLD,  KC_VOLU,  _______,  _______,
    _______,  KC_BTN1,  KC_MS_U,  KC_BTN2,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  KC_MS_L,  KC_MS_D,  KC_MS_R,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
    _______,  _______,  RGB_M_G,                                RGB_TOG,                      _______,  _______,  _______,  _______,  _______,  _______
  )
};

// const key_override_t alt_h_key_override = ko_make_basic(MOD_MASK_CTRL, KC_H, KC_LEFT);
// const key_override_t alt_j_key_override = ko_make_basic(MOD_MASK_CTRL, KC_J, KC_DOWN);
// const key_override_t alt_k_key_override = ko_make_basic(MOD_MASK_CTRL, KC_K, KC_UP);
// const key_override_t alt_l_key_override = ko_make_basic(MOD_MASK_CTRL, KC_L, KC_RGHT);

// const key_override_t **key_overrides = (const key_override_t *[]){
//   &alt_h_key_override,
//   &alt_j_key_override,
//   &alt_k_key_override,
//   &alt_l_key_override,
//   NULL
// };
