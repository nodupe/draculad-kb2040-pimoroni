/*
Copyright 2022 Thomas Baart <thomas@splitkb.com>

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

#define MATRIX_ROW_PINS {D4, C6, D7, E6}
#define MATRIX_COL_PINS {F4, F5,F6, F7, B1}

#define DIODE_DIRECTION COL2ROW


/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */


#ifdef OLED_ENABLE
 #define OLED_DISPLAY_128X64
 #define OLED_TIMEOUT 30000
 #define SPLIT_OLED_ENABLE
#endif

#define RGB_DI_PIN D3
#ifdef RGB_DI_PIN
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLED_NUM 10
#define RGBLIGHT_SPLIT
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_SLEEP
#endif

#define LAYER_STATE_8BIT
#define SPLIT_POINTING_ENABLE 
#define POINTING_DEVICE_RIGHT
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN D5
#define I2C1_SCL_PIN B0
#define SPLIT_HAND_PIN D2
#define	SPLIT_HAND_PIN_LOW_IS_LEFT
