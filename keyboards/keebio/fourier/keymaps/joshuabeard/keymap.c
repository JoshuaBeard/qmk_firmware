#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _SECOND 1
#define _LOWER 2
#define _RAISE 3
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  SECOND,
  LOWER,
  RAISE,
  ADJUST,
};

enum my_keycodes {
    INTERROBANG,
    A_GRAVE,
    A_CIRCUMFLEX,
    AE,
    C_CEDILLA,
    E_ACUTE,
    E_GRAVE,
    E_CIRCUMFLEX,
    E_DIAERESIS,
    I_CIRCUMFLEX,
    I_DIAERESIS,
    O_CIRCUMFLEX,
    OE,
    U_GRAVE,
    U_CIRCUMFLEX,
    U_DIAERESIS,
    Y_DIAERESIS,
    ALPHA,
    BETA,
    GAMMA,
    DELTA,
    EPSILON,
    ZETA,
    ETA,
    IOTA,
    THETA,
    KAPPA,
    LAMBDA,
    MU,
    NU,
    XI,
    PI,
    RHO,
    SIGMA,
    TAU,
    UPSILON,
    PHI,
    CHI,
    PSI,
    OMEGA,
};

const uint32_t PROGMEM my_unicode_map[] = {
    [INTERROBANG] = 0x203D,
    [A_GRAVE] = 0x00E0,
    [A_CIRCUMFLEX] = 0x00E2,
    [AE] = 0x0E6,
    [C_CEDILLA] = 0x00E7,
    [E_ACUTE] = 0x0E9,
    [E_GRAVE] = 0x0E8,
    [E_CIRCUMFLEX] = 0x00EA,
    [E_DIAERESIS] = 0x0EB,
    [I_CIRCUMFLEX] = 0x0EE,
    [I_DIAERESIS] = 0x0EF,
    [O_CIRCUMFLEX] = 0x0F4,
    [OE] = 0x0153, 
    [U_GRAVE] = 0x0F9,
    [U_CIRCUMFLEX] = 0x0FB,
    [U_DIAERESIS] = 0x0FC,
    [Y_DIAERESIS] = 0x0FF,
    [ALPHA] = 0x0B1,
    [BETA] = 0x0B2,
    [GAMMA] = 0x0B3,
    [DELTA] = 0x0B4,
    [EPSILON] = 0x0B5,
    [ZETA] = 0x0B6,
    [ETA] = 0x0B7,
    [THETA] = 0x0B8,
    [IOTA] = 0x0B9,
    [KAPPA] = 0x0BA,
    [LAMBDA] = 0x0BB,
    [MU] = 0x0BC,
    [NU] = 0x0BD,
    [XI] = 0x0BE,
    [PI] = 0x0C0,
    [RHO] = 0x0C1,
    [SIGMA] = 0x0C3,
    [TAU] = 0x0C4,
    [UPSILON] = 0x0C5,
    [PHI] = 0x0C6,
    [CHI] = 0x0C7,
    [PSI] = 0x0C8,
    [OMEGA] = 0x0C9,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRAVE,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    LOWER,          RAISE,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LALT, KC_LSFT,  KC_BSPC,                    KC_SPC,  SECOND,  KC_LCTL 
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SECOND] = LAYOUT(
  //┌──────────────────┬────────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬──────────┬────────┐
       KC_BRIGHTNESS_UP, INTERROBANG, _______, KC_PGUP, _______, _______,                            _______,  KC_7  ,  KC_8  ,  KC_9  ,   _______, KC_VOLU,
  //├──────────────────┼────────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼──────────┼────────┤
     KC_BRIGHTNESS_DOWN,     _______, KC_HOME,  KC_UP ,  KC_END, _______,                            _______,  KC_4  ,  KC_5  ,  KC_6  ,  KC_PLUS , KC_VOLD,
  //├──────────────────┼────────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼──────────┼────────┤
                _______,     _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_LPRN,                            KC_RPRN,  KC_1  ,  KC_2  ,  KC_3  ,   _______, KC_MUTE,
  //├──────────────────┼────────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼──────────┼────────┤
                _______,     _______, _______, KC_PGDOWN, _______, KC_LBRC, _______,          _______, KC_RBRC, _______,  KC_0  , KC_PDOT, KC_BSLASH, KC_EQL,
  //└──────────────────┴────────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴──────────┴────────┘
                                                   _______, _______, KC_DEL,                    KC_SPC,  _______, _______
                                              // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
  [_LOWER] = LAYOUT(
  //┌────────┬────────────┬─────────────┬──────────┬────────┬────────┐                          ┌────────────┬─────────────┬─────────────┬────────┬────────┬────────┐
      _______,     _______,      _______,   _______, _______, _______,                                _______, U_DIAERESIS,       _______, _______, _______, _______,
  //├────────┼────────────┼─────────────┼──────────┼────────┼────────┤                          ├────────────┼─────────────┼─────────────┼────────┼────────┼────────┤
      _______, E_DIAERESIS, E_CIRCUMFLEX,   E_ACUTE, E_GRAVE, _______,                            Y_DIAERESIS,      U_GRAVE, O_CIRCUMFLEX, _______, _______, _______,
  //├────────┼────────────┼─────────────┼──────────┼────────┼────────┤                          ├────────────┼─────────────┼─────────────┼────────┼────────┼────────┤
      _______,     A_GRAVE, A_CIRCUMFLEX,        AE, _______,   _______,                            _______,   U_CIRCUMFLEX,           OE, _______, _______, _______,
  //├────────┼────────────┼─────────────┼──────────┼────────┼────────┼────────┐        ┌────────┼────────────┼─────────────┼─────────────┼────────┼────────┼────────┤
      _______,     _______,      _______, C_CEDILLA, _______, _______, _______,          _______,     _______,      _______,      _______, _______, _______, _______,
  //└────────┴────────────┴─────────────┴─────┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────────┴───┬─────────┴───┬─────────┴────────┴────────┴────────┘
                                               _______, _______, _______,                    _______,     _______,       _______
                                           // └────────┴────────┴────────┘                 └────────┴────────────┴─────────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      _______, _______,   OMEGA, EPSILON,     RHO,     TAU,                                PSI, UPSILON,    IOTA,   THETA,      PI, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      _______,   ALPHA,   SIGMA,   DELTA,     PHI,   GAMMA,                                ETA, _______,   KAPPA,  LAMBDA, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______,     ZETA,     CHI, _______, _______,    BETA, _______,          _______,      NU,      MU, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case SECOND:
      if (record->event.pressed) {
        layer_on(_SECOND);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_SECOND);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
