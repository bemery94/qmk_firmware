#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#include "brendanemery.h"

#define UNDO LCTL(KC_Z)
#define REDO LCTL(KC_Y)

const key_override_t delete_key_override       = ko_make_basic(MOD_MASK_ALT, KC_BSPC, KC_DEL);
const key_override_t less_than_key_override    = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_LT);
const key_override_t greater_than_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_GT);
const key_override_t backslash_override        = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_BSLS);
const key_override_t tilde_override            = ko_make_basic(MOD_MASK_SHIFT, KC_TILD, KC_PIPE);
const key_override_t question_mark_override    = ko_make_basic(MOD_MASK_SHIFT, KC_EXLM, KC_QUES);
const key_override_t redo_override             = ko_make_basic(MOD_MASK_SHIFT, UNDO, REDO);
const key_override_t up_arrow_override         = ko_make_basic(MOD_MASK_ALT, KC_TILD, KC_CIRC);
const key_override_t home_override             = ko_make_basic(MOD_MASK_SHIFT, KC_UNDS, KC_HOME);
const key_override_t end_override              = ko_make_basic(MOD_MASK_SHIFT, KC_DLR, KC_END);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {&delete_key_override, &less_than_key_override, &greater_than_key_override, &backslash_override, &tilde_override, &question_mark_override, &redo_override, &up_arrow_override, &home_override, &end_override};
