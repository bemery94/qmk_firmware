/* Copyright 2022 splitkb.com <support@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* QMK */
#define TAPPING_TERM 250

// If pressing a hold key twice within the QUICK_TAP_TERM, then the second time it is tapped and held, it will be considered tapped repeatedly instead of held. E.g. pressing Shift(A) and then quickly pressing and holding Shift(A) will cause "a" to be written repeatedly. When this is set to 0, then the second time Shift(A) is held, it will be considered held.
#define QUICK_TAP_TERM 0

// If the layer key is held down and then another key is pressed and released, then the layer key will be considered as "held", despite the tapping term.
#define PERMISSIVE_HOLD

// This will basically disable Permissive hold if two keys are pressed on the same hand. I.e. it assumes that usually we hold a key on one hand and then tap a key on the other in order to get the hold functionality. (If holding down the key longer than tapping term, then it will always be ahold).
#define CHORDAL_HOLD

// This allows us to selectively enable HOLD_ON_OTHER_KEY_PRESS for select keys. If a key is held and another key is pressed, then the key will be considered held, regardless of which key is released first. This makes it easier to consider a key as "held". We use this for the thumbs since we are very unlikely to accidentally trigger a hold with a thumb (since we only use space and enter as taps on thumbs which are unlikely to be "rolled with other keys"). This will take precedence over PERMISSIVE_HOLD.
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

// // Combos are active across all layers.
// #define COMBO_ONLY_FROM_LAYER 0

// // Allow using the combo_should_trigger function for disabling combos on some layers
// #define COMBO_SHOULD_TRIGGER 1
