/*
Copyright 2022 oco9oco <oco9oco@gmail.com>
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
#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT_PER_KEY
//#define PERMISSIVE_HOLD_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
//MOUSEKEY

#define MK_KINETIC_SPEED

#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_DELAY 0

#ifdef  MK_KINETIC_SPEED
    #define MOUSEKEY_MOVE_DELTA 5
    #define MOUSEKEY_INITIAL_SPEED 100
    #define MOUSEKEY_BASE_SPEED 1000
    #define MOUSEKEY_DECELERATED_SPEED 400
    #define MOUSEKEY_ACCELERATED_SPEED 3000
    #define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 8
    #define MOUSEKEY_WHEEL_BASE_MOVEMENTS 16
    #define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 24
    #define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 12
#else
    #define MOUSEKEY_MAX_SPEED 7
    #define MOUSEKEY_TIME_TO_MAX 60
    #define MOUSEKEY_WHEEL_MAX_SPEED 4
    #define MOUSEKEY_WHEEL_TIME_TO_MAX 18
#endif

#define ONESHOT_TAP_TOGGLE 1  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000

#define COMBO_TERM 40
//#define COMBO_COUNT 4
