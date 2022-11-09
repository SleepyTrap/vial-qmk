/*
Copyright 2020 Matt3o

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER sleepy
#define PRODUCT sleep_e

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13


#define MATRIX_ROW_PINS { D3, D5, F6, F7 }
#define MATRIX_COL_PINS { E6, B0, B1, B2, B3, B7, D4, D6, D7, B4, B5, B6, C6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW





#define DEBOUNCE 5


/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
