#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


#include "brendanemery.h"
#include "g/keymap_combo.h"

enum combos {
  AT_SYMBOL,
  AMPERSAND,
  DOLLAR,
  EQUALS,
  PERCENTAGE,
  HASH,
  COPY,
  CUT,
  PASTE,
  OPEN_BRACKET,
  CLOSE_BRACKET,
  OPEN_SQUARE_BRACKET,
  CLOSE_SQUARE_BRACKET,
  PLUS,
  UNDERSCORE,
  MINUS,
  UP_ARROW,
  ASTERISK,
  ESCAPE,
  SEMICOLON,
  HOME_NAV_MOUSE
};

const uint16_t PROGMEM at_symbol_combo[] = {KC_D, LCTL_T(KC_T), COMBO_END};
const uint16_t PROGMEM ampersand_combo[] = {KC_D, KC_L, COMBO_END};

const uint16_t PROGMEM dollar_combo[] = {LALT_T(KC_I), LGUI_T(KC_C), COMBO_END};
const uint16_t PROGMEM equals_combo[] = {LSFT_T(KC_H), KC_M, COMBO_END};
const uint16_t PROGMEM percentage_combo[] = {KC_O, LCTL_T(KC_E), COMBO_END};

const uint16_t PROGMEM hash_combo[] = {KC_U, KC_O, COMBO_END};

const uint16_t PROGMEM copy_combo[] = {KC_P, KC_G, COMBO_END};
const uint16_t PROGMEM cut_combo[] = {KC_G, KC_M, COMBO_END};
const uint16_t PROGMEM paste_combo[] = {KC_P, KC_M, COMBO_END};

const uint16_t PROGMEM open_bracket_combo[] = {LSFT_T(KC_A), LCTL_T(KC_E), COMBO_END};
const uint16_t PROGMEM close_bracket_combo[] = {LCTL_T(KC_E), LALT_T(KC_I), COMBO_END};
const uint16_t PROGMEM open_square_bracket_combo[] = {KC_DOT, KC_EXLM, COMBO_END};
const uint16_t PROGMEM close_square_bracket_combo[] = {KC_EXLM, KC_GRV, COMBO_END};

const uint16_t PROGMEM plus_combo[] = {KC_L, LSFT_T(KC_H), COMBO_END};
const uint16_t PROGMEM underscore_combo[] = {LGUI_T(KC_S), LALT_T(KC_N), COMBO_END};
const uint16_t PROGMEM minus_combo[] = {LSFT_T(KC_A), KC_U, COMBO_END};
const uint16_t PROGMEM asterisk_combo[] = {LALT_T(KC_N), LCTL_T(KC_T), COMBO_END};
const uint16_t PROGMEM escape_combo[] = {LCTL_T(KC_T), LSFT_T(KC_H), COMBO_END};
const uint16_t PROGMEM semicolon_combo[] = {LSFT_T(KC_A), KC_DOT, COMBO_END};

const uint16_t PROGMEM home_navigation_mouse_combo[] = {LGUI_T(KC_S), LALT_T(KC_N), COMBO_END};

combo_t key_combos[] = {
    [AT_SYMBOL] = COMBO(at_symbol_combo, KC_AT),
    [HASH] = COMBO(hash_combo, KC_HASH),
    [DOLLAR] = COMBO(dollar_combo, KC_DLR),
    [EQUALS] = COMBO(equals_combo, KC_EQL),
    [PERCENTAGE] = COMBO(percentage_combo, KC_PERC),
    [AMPERSAND] = COMBO(ampersand_combo, KC_AMPR),
    [OPEN_BRACKET] = COMBO(open_bracket_combo, KC_LPRN),
    [CLOSE_BRACKET] = COMBO(close_bracket_combo, KC_RPRN),
    [OPEN_SQUARE_BRACKET] = COMBO(open_square_bracket_combo, KC_LBRC),
    [CLOSE_SQUARE_BRACKET] = COMBO(close_square_bracket_combo, KC_RBRC),
    [PLUS] = COMBO(plus_combo, KC_PLUS), 
    [UNDERSCORE] = COMBO(underscore_combo, KC_UNDS),   
    [MINUS] = COMBO(minus_combo, KC_MINS),
    [ASTERISK] = COMBO(asterisk_combo, KC_ASTR), 
    [ESCAPE] = COMBO(escape_combo, KC_ESC),   
    [SEMICOLON] = COMBO(semicolon_combo, KC_SCLN),   
    [COPY] = COMBO(copy_combo, KC_COPY), 
    [CUT] = COMBO(cut_combo, KC_CUT), 
    [PASTE] = COMBO(paste_combo, KC_PSTE),
    [HOME_NAV_MOUSE] = COMBO(home_navigation_mouse_combo, KC_ASTR)
};


// bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
//     /* Disable combo `SOME_COMBO` on layer `_LAYER_A` */
//     switch (combo_index) {
//         case UNDERSCORE:
//             if (layer_state_is(2) || layer_state_is(3)) {
//                 return false;
//             }
//         case HOME_NAV_MOUSE:
//             if (layer_state_is(0) || layer_state_is(1)) {
//                 return false;
//             }
//     }

//     return true;
// }