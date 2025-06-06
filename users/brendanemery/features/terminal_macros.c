/* Copyright 2021 Joshua T.
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

#include "terminal_macros.h"


bool process_record_terminal_macros(uint16_t keycode, const keyrecord_t *record) {
    // Get the base keycode of a mod or layer tap key
    switch (keycode) {
        case HOME_DIR:
            if (record->event.pressed) {
                SEND_STRING("~/");
            }
            break;

        case CXX_SCOPE:
            if (record->event.pressed) {
                SEND_STRING("::");
            }
            break;

        case UP_DIR:
            if (record->event.pressed) {
                SEND_STRING("../");
            }
            break;

        default:
            break;
    }

    return true;
}