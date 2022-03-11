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
    KC_ESC,  __________________FN_ROW_L_________________,                            __________________FN_ROW_R_________________, KC_MINS,
    KC_GRAVE,__________________QWERTY_L1________________,                            __________________QWERTY_R1________________, KC_EQL,
    KC_CAPS, __________________QWERTY_HOME_L2___________,                            __________________QWERTY_HOME_R2___________, KC_QUOT,
    KC_LSFT, __________________QWERTY_L3_SFTZ___________, TO(_BASE_NOMOD),  KC_B,    __________________QWERTY_R3________________, KC_BSLS,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
               MO(_SETTINGS),  KC_LALT, THUMB_L1,THUMB_L2,THUMB_L3,         THUMB_R3,THUMB_R2,THUMB_R1,KC_LANG2, MO(_SETTINGS)
),


[_BASE_NOMOD] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------| 
    _______, __________________FN_ROW_L_________________,                            __________________FN_ROW_R_________________, _______, 
    _______, __________________QWERTY_L1________________,                            __________________QWERTY_R1________________, _______, 
    KC_LANG1,__________________QWERTY_L2_SFTA___________,                            __________________QWERTY_R2________________, _______, 
    _______, __________________QWERTY_L3_SFTZ___________, TO_BASE,          _______, __________________QWERTY_R3________________, _______, 
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______ 
),
[_SORIZAVA_3BEOL] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------| 
    _______, __________________FN_ROW_L_________________,                            __________________FN_ROW_R_________________, KC_BSPC, 
    _______, __________________QWERTY_L1________________,                            __________________QWERTY_R1________________, KC_DEL, 
    _______, __________________QWERTY_L2_SFTA___________,                            __________________QWERTY_R2________________, KC_ENT, 
    _______, __________________QWERTY_L3________________, TO_BASE,          KC_COMM, __________________QWERTY_R3________________, KC_SPC, 
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, _______, KC_F13,  KC_F14,  KC_F15,           KC_F16,  KC_F17,  KC_F18,  KC_COMM, KC_DOT
),

[_IPC] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------| 
    _______, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,                              A(KC_1), A(KC_2), A(KC_3), A(KC_4), A(KC_5), KC_UNDS,
    _______, XXXXXXX, HAEN_C,  HAEN_E,  HAEN_D,  XXXXXXX,                            KC_LBRC, _________NUM_789_________, _______, KC_PLUS, 
    HAEN_B,  _IPC_A,  _IPC_S,  _IPC_MIN,_IPC_F,  KC_DOT,                             KC_RBRC, _________NUM_456_________, CLN_SPC, KC_DQUO,
    _______, _IPC_Z,  BRKT,    KC_UNDS, KC_EQL,  BOLDFACE,XXXXXXX,          KC_LPRN, KC_RPRN, _________NUM_123_________, _______, KC_PIPE,                   
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, KC_TRNS, _______, _______, _______,          _______, LT_NAV_0, _______, _______, _______
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
    KC_U,    XXXXXXX, KC_WH_D, KC_MS_U, KC_WH_U, XXXXXXX,                            XXXXXXX, KC_ACL2, KC_ACL1, XXXXXXX, XXXXXXX, XXXXXXX,    
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
   RGB_TOG,/*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, PDF_HL,           XXXXXXX, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,
//|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                     _______, _______, _______, _______, KC_TRNS,          _______, _______, _______, _______, KC_TRNS 
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
        case THUMB_R1:
        case THUMB_R2:
        case THUMB_R3:
            return true;
        case SFTT_A:
        //case SFTT_Z:    
        case SFTT_Z:    
            if (record->event.key.row == 1){return true;} else {return false;} // KEY_ROW, KEY_COL: look for oco9oco.h
        default:
            return false;
    }
}
// Ignore mod tap interrupt
bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case THUMB_L2:
        case THUMB_R1:
        case THUMB_R2:
        case THUMB_R3:
        case SFTT_A:
        case SFTT_Z:
        case SFTT_F:
        case SFTT_J:
        case ALTT_S:
        case CTLT_D:
        case GUIT_SCL:
        case ALTT_L:
        case CTLT_K:
        case GUIT_A:
        case LT(_NAV, KC_0):
            return true;
        default:
            return false;
    }
}

// Key overrides

// const key_override_t haen_hanja_override = ko_make_basic(MOD_MASK_SHIFT, KC_HAEN, KC_LANG2);   
// const key_override_t grave_esc_override = ko_make_basic(MOD_MASK_CTRL, KC_ESC, KC_GRAVE);       // GUI + esc = `
// const key_override_t **key_overrides = (const key_override_t *[]){                              // This globally defines all key overrides to be used
    // &haen_hanja_override,
    // NULL                                                                                        // Null terminate the array of overrides!
// };

// //RGBLIGHT LAYERS
// // Light LEDs 6 to 9 and 12 to 15 red when caps lock is active. Hard to ignore!
// const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {6, 4, HSV_RED},       // Light 4 LEDs, starting with LED 6
//     {12, 4, HSV_RED}       // Light 4 LEDs, starting with LED 12
// );
// // Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
// const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {9, 2, HSV_OFF}
// );
// // Light LEDs 11 & 12 in purple when keyboard layer 2 is active
// const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {11, 2, HSV_PURPLE}
// );
// // Light LEDs 13 & 14 in green when keyboard layer 3 is active
// const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {13, 2, HSV_GREEN}
// );
// // Now define the array of layers. Later layers take precedence
// const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
//     my_capslock_layer,
//     my_layer1_layer,    // Overrides caps lock layer
//     my_layer2_layer,    // Overrides other layers
//     my_layer3_layer     // Overrides other layers
// );

// void keyboard_post_init_user(void) {
//     // Enable the LED layers
//     rgblight_layers = my_rgb_layers;
// }


// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(0, led_state.caps_lock);
//     return true;
// }

// layer_state_t default_layer_state_set_user(layer_state_t state) {
//     rgblight_set_layer_state(1, layer_state_cmp(state, _BASE));
//     return state;
// }

// layer_state_t layer_state_set_user(layer_state_t state) {
//     rgblight_set_layer_state(2, layer_state_cmp(state, _BASE_NOMOD));
//     rgblight_set_layer_state(3, layer_state_cmp(state, _ONEHAND));
//     return state;