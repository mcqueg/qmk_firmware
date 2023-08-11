#include QMK_KEYBOARD_H

enum layer_number {
  _COLE_MAC = 0,
  _NAV_MAC,
  _SYM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_COLE_MAC] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,  KC_QUOT,
  KC_LCTL, KC_A,   KC_R,    ALT_T(KC_S), LCMD_T(KC_T),    KC_G,           KC_M,    RCMD_T(KC_N),    KC_E,    KC_I,    KC_O,  KC_RCTL,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V,  KC_LBRC,  KC_RBRC,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                          _______, _______, LT(_SYM, KC_BSPC), LT(_NAV_MAC, KC_SPC), SFT_T(KC_ENT), KC_DEL, _______, _______
),
[_NAV_MAC] = LAYOUT(
  KC_ESC,  _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                    _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
  _______, _______, _______, _______, KC_BTN1,   KC_BTN2,                A(KC_LEFT), KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, A(KC_RIGHT),
  _______, LCMD(KC_Z), LCMD(KC_X), LCMD(KC_C), _______, LCMD(KC_V),_______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______,
                             _______, _______, _______, _______, _______, _______, _______, _______
),

[_SYM] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_LBRC,                    KC_RBRC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
  KC_PERC, KC_SCLN, KC_COLN, KC_ASTR, KC_PLUS, KC_LCBR,                    KC_RCBR, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  _______, KC_DQUO, KC_QUOT, KC_UNDS, KC_MINS, KC_LPRN, _______, _______, KC_RPRN, KC_EQL,  KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                             _______, _______, _______, _______, _______, _______, _______, _______
)
};

// #include QMK_KEYBOARD_H
// enum layer_number {
//   _COLEMAK = 0,
//   _SYM_FN,
//   _NUM_NAV,
//   _MOUSE,
// };

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//  [_COLEMAK] = LAYOUT(
//   KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_GRV,
//   KC_TAB,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                     KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,  KC_QUOT,
//   KC_LCTL,  KC_A,   KC_R,    KC_S,    KC_T,    KC_G,                     KC_M,    KC_N,    KC_E,    KC_I,    KC_O,     KC_BSPC,
//   KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V, KC_LBRC,   KC_RBRC, KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
//            TT(_MOUSE), KC_LOPT, KC_LCMD, LT(_SYM_FN,KC_SPACE), LT(_NUM_NAV,KC_ENT), KC_RCMD, KC_RCTL, KC_RALT
// ),

 
// [_SYM_FN] = LAYOUT(
//   _______, _______, _______, _______, _______, _______,                   _______, _______, _______,_______, _______, _______,
//   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
//   KC_GRV, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
//   _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
//                              _______, _______, _______, _______, _______,  _______, _______, _______
// ),

// [_NUM_NAV] = LAYOUT(
//   _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
//   KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
//   _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______,                      KC_INS,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DEL,
//   _______, _______, _______, _______, _______, _______,   _______, _______,  KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
//                              _______, _______, _______,  _______, _______,  _______, _______, _______
// ),

// [_MOUSE] = LAYOUT(
//     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
//     KC_ACL0, XXXXXXX, XXXXXXX, KC_BTN1, KC_BTN2, KC_ACL0,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
//     KC_ACL1, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_ACL1,                   XXXXXXX,  KC_BTN1, KC_BTN2, XXXXXXX, XXXXXXX, XXXXXXX,  
//     KC_ACL2, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_ACL2, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
//                             KC_TRNS, XXXXXXX, XXXXXXX, KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX 
// )
// };

// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, _SYM_FN, _NUM_NAV, _MOUSE);
// }

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
