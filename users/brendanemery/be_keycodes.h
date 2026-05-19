#pragma once
#include QMK_KEYBOARD_H

// Custom keycodes and macros
enum userspace_custom_keycodes {
    CAPWORD = SAFE_RANGE,

#ifdef USER_NUM_WORD_ENABLE
    NUMWORD,
#endif
    HOME_DIR,
    CXX_SCOPE,
    UP_DIR,
    VIM_SAVE,
    VIM_CLOSE,
    VIM_SAVE_AND_CLOSE
};
