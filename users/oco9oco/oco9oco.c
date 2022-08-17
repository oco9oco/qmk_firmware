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
    tap_code(KC_HAEN);
    tap_code(keycode);
    tap_code(KC_HAEN);
}
void appcmd(uint16_t keycode){
    tap_code(KC_APP);
    tap_code(keycode);
}
// process_record_user
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
// appcmd function
        case JOINTBL:
            if(__PRESSED__){
                appcmd(KC_J);
            }
            break;

        case PDF_HL:
            if(__PRESSED__){
                appcmd(KC_H);
            }
            break;

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

        case HAEN_A:
            if (__PRESSED__) {
                haen_keycode(KC_A);
            }
            break;
        case HAEN_B:
            if (__PRESSED__) {
                haen_keycode(KC_B);
            }
            break;
        case HAEN_C:
            if (__PRESSED__) {
                haen_keycode(KC_C);
            }
            break;
        case HAEN_D:
            if (__PRESSED__) {
                haen_keycode(KC_D);
            }
            break;
        case HAEN_E:
            if (__PRESSED__) {
                haen_keycode(KC_E);
            }
            break;
        case HAEN_F:
            if (__PRESSED__) {
                haen_keycode(KC_F);
            }
            break;
        case HAEN_G:
            if (__PRESSED__) {
                haen_keycode(KC_G);
            }
            break;
// 괄호 커서이동 기능
        case LT(_IPC, KC_BSPC):
        case LT(_NUM, KC_DEL):
            if (__PRESSED__) {
                prns_pressed = false;
                num_in_prns  = false;
            } else {
                if (prns_pressed && num_in_prns) {
                    SEND_STRING(SS_TAP(X_RGHT));
                }
            }
            break;
        case KC_1 ... KC_0:
            if (__PRESSED__ && prns_pressed) {
                num_in_prns = true;
            } return true;
        break;
// Intercept mod-tap
        case IPC(A):
            if(__TAPPED__ && __PRESSED__){
                SEND_STRING(SS_TAP(X_HAEN) SS_TAP(X_A) SS_TAP(X_HAEN));
                //tap_code(KC_A);
            }else if(__PRESSED__) {
                register_code(KC_LSFT);
            }else{
                unregister_code(KC_LSFT);
            }
            return false;
            break;

        case IPC(S):
            if(__TAPPED__ && __PRESSED__){
                SEND_STRING("()" SS_TAP(X_LEFT));
                prns_pressed = true;
            }else if(__PRESSED__) {
                register_code(KC_LALT);
            }else{
                unregister_code(KC_LALT);
            }
            return false;
            break;

        case IPC(F):
            if(__TAPPED__ && __PRESSED__){
                SEND_STRING(", ");
            }else if(__PRESSED__) {
                register_code(KC_LSFT);
            }else{
                unregister_code(KC_LSFT);
            }
            return false;
            break;

        case IPC(Z):
            if (__TAPPED__ && __PRESSED__) {
                tap_code16(SCRNSHOT);
            } else if (__PRESSED__) {
                register_code(KC_LGUI);
            } else {unregister_code(KC_LGUI);}
            return false;
            break;

        case IPC(C):
        if(__TAPPED__ && __PRESSED__){
            tap_code16(KC_UNDS);
        }else if(__PRESSED__) {
            tap_code16(KC_EQL);
        }
        return false;
        break;

case NAV(Z):
            if(__TAPPED__&&__PRESSED__){
                tap_code16(C(KC_Z));
            }else if(__PRESSED__){
                register_code(KC_LGUI);
            } else {unregister_code(KC_LGUI);}
            return false;
            break;
// IPC CLASSIFICATION
        case A62B18:
        if(__PRESSED__){
            SEND_STRING("A62B18");
        }
        break;
        case E05C:
        if(__PRESSED__){
            SEND_STRING("E05C");
        }
        break;
        case E05B:
        if(__PRESSED__){
            SEND_STRING("E05B");
        }
        break;

        case E05D:
        if(__PRESSED__){
            SEND_STRING("E05D");
        }
        break;
        case B60J:
        if(__PRESSED__){
            SEND_STRING("B60J");
        }
        break;
        case E05G:
        if(__PRESSED__){
            SEND_STRING("E05G");
        }
        break;
        case F24F:
        if(__PRESSED__){
            SEND_STRING("F24F");
        }
        break;
        case E06B:
        if(__PRESSED__){
            SEND_STRING("E06B");
        }
        break;
        case E05F:
        if(__PRESSED__){
            SEND_STRING("E05F");
        }
        break;        

        //CLOSING BRACKET PAIRS
        case BRKT:
            if (__PRESSED__) {
                SEND_STRING("[]" SS_TAP(X_LEFT));
                prns_pressed = true;  // 괄호입력상태
            }
            break; 
        case ABRK:
            if (__PRESSED__) {
                SEND_STRING("<>" SS_TAP(X_LEFT));
                prns_pressed = true;  // 괄호입력상태
            }
            break; 
                        
        case CMM_SPC:
            if (__PRESSED__) {
                SEND_STRING(", ");
            }
            break;
        case CLN_SPC:
            if (__PRESSED__) {
                SEND_STRING(": ");
            }
            break;
        // case SLSH_LL:
        //     if (__PRESSED__) {
        //         SEND_STRING(SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_SLSH) SS_TAP(X_RGHT) SS_TAP(X_RGHT));
        //     }
        //     break;
    }
    return true;
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GUIT_Z:
            return TAPPING_TERM+200;
        case THUMB_L2:
        case SFTT_A:
            return TAPPING_TERM-100;
        case SFTT_F:
        case SFTT_J:
        case GUIT_A:
        case GUIT_SCL:
            return TAPPING_TERM + 50;
        case NAV(S):
        case NAV(D):
        case NAV(F):
            return TAPPING_TERM -100;
        default:
            return TAPPING_TERM;
    }
}
//Get hold on other key press
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_CAPS:
        // case SFTT_A:
        // case SFTT_Z:
            return true;// KEY_ROW, KEY_COL: look for oco9oco.h
        default:
            return false;
    }
}
// Ignore mod tap interrupt
bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case NAV(Z):
        case THUMB_L3:
        case THUMB_R2:
        case THUMB_R3:
        case SFTT_A:
        case SFTT_Z:
        case GUIT_Z:
        case SFTT_F:
        case SFTT_J:
        case ALTT_S:
        case CTLT_D:
        case GUIT_SCL:
        case ALTT_L:
        case CTLT_K:
        case GUIT_A:
        case LT(_NAV, KC_0):
        case SFT_CAPS:
            return true;
        default:
            return false;
    }
}
