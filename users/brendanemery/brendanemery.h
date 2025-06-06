#pragma once
#include QMK_KEYBOARD_H
#include "be_keycodes.h"
#include "be_layers.h"
// #include "be_combos.h"

#ifdef USER_CAPS_WORD_ENABLE
#    include "features/caps_word.h"
#endif

#ifdef USER_NUM_WORD_ENABLE
#    include "features/num_word.h"
#endif

#include "features/terminal_macros.h"