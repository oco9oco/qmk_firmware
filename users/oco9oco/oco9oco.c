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
#include "oco9oco.h"

void haen_keycode(uint16_t keycode){
//    tap_code(KC_HAEN);
    tap_code(keycode);
//    tap_code(KC_HAEN);
}
// process_record_user
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
// HAEN_A ... HAEN_G
#ifdef RGBLIGHT_ENABLE
        case TO_NOMOD:
            if(__PRESSED__){
                rgblight_setrgb(0, 0, 50);
            }
            return true;
        case TO_BASE:
            if(__PRESSED__){
                rgblight_setrgb(RGB_OFF);
            }
            return true;
#endif
        case PDF_HL:
            if(__PRESSED__){
                tap_code(KC_APP);
                tap_code(KC_H);
            }
            break;
        case HAEN_A:
            if (record->event.pressed) {
                haen_keycode(KC_A);
            }
            break;
        case HAEN_B:
            if (record->event.pressed) {
                haen_keycode(KC_B);
            }
            break;
        case HAEN_C:
            if (record->event.pressed) {
                haen_keycode(KC_C);
            }
            break;
        case HAEN_D:
            if (record->event.pressed) {
                haen_keycode(KC_D);
            }
            break;
        case HAEN_E:
            if (record->event.pressed) {
                haen_keycode(KC_E);
            }
            break;
        case HAEN_F:
            if (record->event.pressed) {
                haen_keycode(KC_F);
            }
            break;
        case HAEN_G:
            if (record->event.pressed) {
                haen_keycode(KC_G);
            }
            break;
// 괄호 커서이동 기능
        case LT(_IPC, KC_BSPC):
        case LT(_NUM, KC_DEL):
            if (record->event.pressed) {
                prns_pressed = false;
                num_in_prns  = false;
            } else {
                if (prns_pressed && num_in_prns) {
                    SEND_STRING(SS_TAP(X_RGHT));
                }
            }
            break;
        case KC_1 ... KC_0:
            if (record->event.pressed && prns_pressed) {
                num_in_prns = true;
            } return true;
        break;
// Intercept mod-tap
        case IPC(A):
            if(record->tap.count && record->event.pressed){
                // SEND_STRING(SS_TAP(X_HAEN) SS_TAP(X_A) SS_TAP(X_HAEN));
                tap_code(KC_A);
            }else if(record->event.pressed) {
                register_code(KC_LGUI);
            }else{
                unregister_code(KC_LGUI);
            }
            return false;
            break;

        case IPC(S):
            if(record->tap.count && record->event.pressed){
                SEND_STRING("()" SS_TAP(X_LEFT));
                prns_pressed = true;
            }else if(record->event.pressed) {
                register_code(KC_LALT);
            }else{
                unregister_code(KC_LALT);
            }
            return false;
            break;

        case IPC(F):
            if(record->tap.count && record->event.pressed){
                SEND_STRING(", ");
            }else if(record->event.pressed) {
                register_code(KC_LSFT);
            }else{
                unregister_code(KC_LSFT);
            }
            return false;
            break;

        case IPC(Z):
            if (record->tap.count && record->event.pressed) {
                tap_code16(C(KC_Z));
            } else if (record->event.pressed) {
                register_code(KC_LSFT);
            } else {unregister_code(KC_LSFT);}
            return false;
            break;

        case IPC(C):
        if(record->tap.count && record->event.pressed){
            tap_code16(KC_UNDS);
        }else if(record->event.pressed) {
            tap_code16(KC_EQL);
        }
        return false;
        break;
        case BRKT:
            if (record->event.pressed) {
                SEND_STRING("[]" SS_TAP(X_LEFT));
                prns_pressed = true;  // 괄호입력상태
            }
            break;
        case CMM_SPC:
            if (record->event.pressed) {
                SEND_STRING(", ");
            }
            break;
        case CLN_SPC:
            if (record->event.pressed) {
                SEND_STRING(": ");
            }
            break;
        // case SLSH_LL:
        //     if (record->event.pressed) {
        //         SEND_STRING(SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_SLSH) SS_TAP(X_RGHT) SS_TAP(X_RGHT));
        //     }
        //     break;
    }
    return true;
};
