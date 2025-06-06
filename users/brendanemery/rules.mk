# Copyright 2022 splitkb.com <support@splitkb.com>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

# Only load these source files if the features are enabled. Keyboards can
# enable or disable these features in their own rules.mk files.

ifeq ($(strip $(USER_CAPS_WORD_ENABLE)), yes)
	SRC += features/caps_word.c
    OPT_DEFS += -DUSER_CAPS_WORD_ENABLE
endif

ifeq ($(strip $(USER_NUM_WORD_ENABLE)), yes)
	SRC += features/num_word.c
    OPT_DEFS += -DUSER_NUM_WORD_ENABLE
endif

SRC += features/terminal_macros.c

# Define these last so any other logic can set up some defines first
SRC += process_records.c
