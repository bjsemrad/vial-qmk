// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
    _PROGRM,
    _LOADER,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,               KC_W,           KC_E,           KC_R,           KC_T,                   KC_Y,               KC_U,           KC_I,           KC_O,           KC_P,
    LGUI_T(KC_A),       LALT_T(KC_S),   LSFT_T(KC_D),   LCTL_T(KC_F),   KC_G,                   KC_H,               LCTL_T(KC_J),   LSFT_T(KC_K),   LALT_T(KC_L),   LGUI_T(KC_SCLN),
    KC_Z,               KC_X,           KC_C,           KC_V,           KC_B,                   KC_N,               KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,
                                                        TL_LOWR,        LT(_PROGRM, KC_SPACE),  LGUI_T(KC_ENTER),   LT(_RAISE, KC_BSPC)
  ),

  [1] = LAYOUT(
    KC_1,               KC_2,           KC_3,           KC_4,           KC_5,                   KC_6,               KC_7,           KC_8,           KC_9,           KC_0,
    LSFT(KC_1),         LSFT(KC_2),     LSFT(KC_3),     LSFT(KC_4),     LSFT(KC_5),             LSFT(KC_6),         LSFT(KC_7),     LSFT(KC_8),     LSFT(KC_9),     LSFT(KC_0),
    KC_NO,              KC_NO,          KC_NO,          KC_NO,          KC_NO,                  KC_NO,              KC_NO,          KC_NO,          LSFT(KC_LBRC),  LSFT(KC_RBRC),
                                                        KC_TRNS,        KC_TRNS,                KC_TRNS,            TL_UPPR
  ),

  [2] = LAYOUT(
    LGUI(KC_1),         LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_5),             LGUI(KC_6),        LGUI(KC_7),      LGUI(KC_8),     LGUI(KC_9),     LGUI(KC_0),
    LGUI_T(KC_ESCAPE),  KC_LALT,        KC_LSFT,        KC_LCTL,        KC_TAB,                 KC_NO,             KC_LEFT,         KC_DOWN,        KC_UP,          KC_RIGHT,
    KC_NO,              KC_NO,          KC_NO,          KC_NO,          KC_NO,                  KC_NO,             KC_HOME,         KC_PGUP,        KC_PGDN,        KC_END,
                                                        TL_LOWR,        KC_LSFT,                KC_TRNS,           KC_TRNS
  ),

  [3] = LAYOUT(
    KC_F1,             KC_F2,           KC_F3,          KC_F4,          KC_F5,                  KC_NO,              KC_BTN1,           KC_BTN2,         KC_TRNS,        KC_NO,
    KC_F6,             KC_F7,           KC_F8,          KC_F9,          KC_F10,                 KC_TRNS,            KC_MS_L,           KC_MS_D,         KC_MS_U,        KC_MS_R,
    KC_F11,            KC_F12,          KC_VOLD,        KC_VOLU,        KC_MUTE,                KC_BTN3,            KC_BTN1,           KC_BTN2,         KC_TRNS,        TG(5),
                                                        KC_TRNS,        KC_TRNS,                KC_TRNS,            KC_TRNS
  ),

  [4] = LAYOUT(
    KC_TRNS,           KC_TRNS,         KC_TRNS,        LSFT(KC_7),     LSFT(KC_8),             KC_BSLS,            KC_LBRC,            KC_RBRC,        LSFT(KC_9),     LSFT(KC_0),
    KC_LGUI,           KC_LALT,         KC_LSFT,        KC_LCTL,        LSFT(KC_GRAVE),         LSFT(KC_BSLS),      LSFT(KC_LBRC),      LSFT(KC_RBRC),  KC_EQUAL,       LSFT(KC_QUOTE),
    KC_TRNS,           KC_TRNS,         KC_TRNS,        KC_TRNS,        KC_GRAVE,               LSFT(KC_MINUS),     LSFT(KC_EQUAL),     KC_MINUS,       KC_NO,          KC_QUOTE,
                                                        KC_TRNS,        KC_TRNS,                LALT(KC_ENTER),     KC_TRNS
  ),

  [5] = LAYOUT(
    KC_TRNS,           KC_TRNS,         KC_TRNS,        KC_TRNS,        KC_TRNS,                KC_TRNS,            KC_TRNS,            KC_TRNS,        KC_TRNS,        KC_TRNS,
    KC_TRNS,           KC_TRNS,         KC_TRNS,        KC_TRNS,        KC_TRNS,                KC_TRNS,            KC_TRNS,            KC_TRNS,        KC_TRNS,        KC_TRNS,
    KC_TRNS,           KC_TRNS,         KC_TRNS,        KC_TRNS,        KC_TRNS,                KC_TRNS,            KC_TRNS,            KC_TRNS,        KC_TRNS,        QK_BOOT,
                                                        KC_TRNS,        KC_TRNS,                KC_TRNS,            KC_TRNS
  ),
};
