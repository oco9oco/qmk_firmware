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

#include "oco9oco.h" //look for users/oco9oco/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//clang-format off

[_BASE] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------| 
    KC_ESC,  __________________NUMROW_L_________________,                            __________________NUMROW_R_________________, KC_MINS,
    KC_GRAVE,__________________QWERTY_L1________________,                            __________________QWERTY_R1________________, KC_EQL,
    KC_CAPS, __________________QWERTY_HOME_L2___________,                            __________________QWERTY_HOME_R2___________, KC_QUOT,
    KC_LSFT, __________________QWERTY_L3_SFTZ___________, TO(_BASE_NOMOD),  KC_B,    __________________QWERTY_R3________________, KC_BSLS,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
               MO(_SETTINGS),  KC_LALT, THUMB_L1,THUMB_L2,THUMB_L3,         THUMB_R3,THUMB_R2,THUMB_R1,KC_LALT, KC_LGUI
),


[_BASE_NOMOD] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------| 
    TO_BASE, KC_WH_D, KC_BTN2, KC_BTN3, KC_BTN1, KC_WH_U,                            __________________NUMROW_R_________________, _______, 
    _______, __________________QWERTY_L1________________,                            __________________QWERTY_R1________________, _______, 
    _______, __________________QWERTY_L2_SFTA___________,                            __________________QWERTY_R2________________, _______, 
    _______, __________________QWERTY_L3_SFTZ___________, TO_BASE,          _______, __________________QWERTY_R3________________, _______, 
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______ 
),
[_SORIZAVA_3BEOL] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------| 
    TO_BASE, __________________NUMROW_L_________________,                            __________________NUMROW_R_________________, _______, 
    _______, __________________QWERTY_L1________________,                            __________________QWERTY_R1________________, _______, 
    _______, __________________QWERTY_L2_SFTA___________,                            __________________QWERTY_R2________________, KC_SPC, 
    _______, __________________QWERTY_L3________________, KC_BSPC,          KC_COMM, __________________QWERTY_R3________________, KC_ENT, 
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, _______, KC_F13,    KC_F14,    KC_F15,             KC_F16,    KC_F17,    KC_F18, _______, _______ 
),

[_IPC] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------| 
    _______, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,                              A(KC_1), A(KC_2), A(KC_3), A(KC_4), A(KC_5), KC_UNDS,
    _______, HAEN_B,  HAEN_C,  HAEN_E,  HAEN_D,  HAEN_F,                          C(KC_LBRC), _________NUM_789_________, _______, KC_PLUS, 
    _______, _IPC_A,  _IPC_S,  _IPC_MIN,_IPC_F,  HAEN_G,                          C(KC_RBRC), _________NUM_456_________, CLN_SPC, KC_DQUO,
    _______, _IPC_Z,  BRKT,    KC_UNDS, KC_EQL,  BOLDFACE, KC_DOT,          KC_LPRN, KC_RPRN, _________NUM_123_________, _______, KC_PIPE,                   
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, KC_TRNS, _______, _______, _______,          A(KC_1), LT_NAV_0, _______, _______, _______
),
 
[_NAV] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------| 
    _______, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F6,                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F12,
    PDF_HL,  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_F7,                              KC_INS,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_ENT,
    _______, _IPC_Z,  C(KC_X), C(KC_C), C(KC_V), C(KC_B), XXXXXXX,          XXXXXXX, KC_APP,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_DEL,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, _______, _______, KC_BSPC, KC_DEL,           _______, KC_TRNS, _______, _______, _______
),

[_MOUSE] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  RESET,
    KC_U,    XXXXXXX, KC_WH_D, KC_MS_U, KC_WH_U, XXXXXXX,                            XXXXXXX, KC_ACL1, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    
    KC_P,    XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,                            KC_INS,  KC_ACL0, KC_BTN1, KC_BTN2, KC_BTN3,  KC_ENT,  
    KC_X,    UNDO,    CUT,     COPY,    PASTE,   BOLDFACE,XXXXXXX,          KC_PWR,  KC_APP,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,   KC_DEL,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, _______, _______, _______, _______,          KC_TRNS, _______, _______, _______, _______    
),

[_FUNC] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
    XXXXXXX, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,                              _____________FUNC_2789____________, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_F6,                              _____________FUNC_1456____________, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_F7,   XXXXXXX,          XXXXXXX, _____________FUNC_0123____________, XXXXXXX, XXXXXXX,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, _______, _______, _______, _______,          _______, _______, KC_TRNS, _______, _______ 
),

[_ONEHAND] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    TO_BASE, CTRL_F1, KC_F2,   KC_ENT,   ALT_F4, KC_F5,                              _______, _______, _______, _______, _______, _______,
    GUI_RGHT,KC_LGUI, KC_BTN2, KC_UP,   KC_BTN1, SCRNSHOT,                           BRKT,    KC_WH_D, KC_MS_U, KC_WH_U, _______, _______,
    KC_LALT, KC_LCTL, KC_LEFT, KC_DOWN, KC_RGHT, PDF_HL,                             PRNS,    KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,
    KC_LSFT, UNDO,    CUT,     COPY,    PASTE,   BOLDFACE, KC_ENT,          XXXXXXX, _______, _______, _______, KC_LCTL, _______, _______,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      KC_BSPC, KC_LALT, KC_SPC,  KC_BTN3, _______,          _______, _______, _______, _______, _______
),

[_SETTINGS] = LAYOUT(
//|-------------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
   RESET,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
//|             |----------------USER MACRO------------------|   
   XXXXXXX,/*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
   XXXXXXX,/*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
   RGB_TOG,/*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                     _______, _______, _______, _______, KC_TRNS,          _______, _______, _______, _______, _______ 
)

};


//clang-format on

// COMBOS
enum combos {
    COMBO_ONEHAND,
    //ZB_STENO, 
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM onehand_combo[] = {KC_Q, KC_W, COMBO_END};
//const uint16_t PROGMEM STENO_combo[] = {SFTT_Z, KC_B, COMBO_END};
combo_t key_combos[] = {
    [COMBO_ONEHAND]   = COMBO(onehand_combo, TO(_ONEHAND)),
//    [ZB_STENO]   = COMBO(STENO_combo, TO(_SORIZAVA_3BEOL)),
};

// Tapping term
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case THUMB_L2:
            return TAPPING_TERM - 100;
        case SFTT_F:
            return TAPPING_TERM + 100;
        case SFTT_A:
        case SFTT_Z:
            return TAPPING_TERM + 100;
        case SFTT_J:
        case GUIT_A:
        case GUIT_SCL:   
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}
//Get hold on other key press
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case THUMB_L2:
            return true;
        case SFTT_Z:    
            if (KEY_ROW==1 && KEY_COL>2){return true;} else {return false;} // KEY_ROW, KEY_COL: look for oco9oco.h
        default:
            return false;
    }
}
// Ignore mod tap interrupt
bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFTT_Z:
        case SFTT_A:
           if (KEY_ROW==1){return false;} else {return true;}
        case SFTT_F:
        case SFTT_J:
        case ALTT_S:
        case CTLT_D:
        case GUIT_SCL:
        case ALTT_L:
        case CTLT_K:
        case GUIT_A:
        case LT(_NAV, KC_SPC):
        case LT(_NAV, KC_0):
            return true;
        default:
            return false;
    }
}

// Key overrides

// const key_override_t tilde_esc_override = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, S(KC_GRAVE));   // Shift + esc = ~
// const key_override_t grave_esc_override = ko_make_basic(MOD_MASK_CTRL, KC_ESC, KC_GRAVE);       // GUI + esc = `
// const key_override_t **key_overrides = (const key_override_t *[]){                              // This globally defines all key overrides to be used
//     &tilde_esc_override, &grave_esc_override,
//     NULL                                                                                        // Null terminate the array of overrides!
// };

