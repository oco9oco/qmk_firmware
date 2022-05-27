/*
Copyright 2022 oco9oco <oco9oco@gmail.com>
wrap
:

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
    SFT_CAPS,__________________QWERTY_SACS_L2___________,                            __________________QWERTY_HOME_R2___________, KC_QUOT,
    KC_LSFT, __________________QWERTY_L3________________, KC_LGUI,           KC_B,    __________________QWERTY_R3________________, KC_BSLS,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
               KC_LGUI,LALT_T(KC_HAEN),THUMB_L1,THUMB_L2,THUMB_L3,         THUMB_R3,THUMB_R2,THUMB_R1,KC_LBRC, KC_RBRC
),

[_BASE_NOMOD] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    KC_ESC,  __________________NUMROW_L_________________,                            __________________NUMROW_R_________________, KC_MINS, 
    KC_TAB,  __________________QWERTY_L1________________,                            __________________QWERTY_R1________________, KC_EQL,
    SFT_CAPS,__________________QWERTY_L2________________,                           __________________QWERTY_R2________________, KC_QUOT,
    KC_LSFT, __________________QWERTY_L3________________, KC_LGUI,          TO_BASE, __________________QWERTY_R3________________, KC_BSLS,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      KC_LGUI, _______, _______, LT(_NUM, KC_BSPC), LSFT_T(KC_DEL),  _______, _______, _______, _______, _______
),

[_IPC] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, A62B18,  E05C,    E05B,    KC_SLSH, XXXXXXX,                              KC_LT,   KC_LPRN, KC_GRV,  KC_RPRN, KC_GT, KC_UNDS,
    _______, HAEN_B,  HAEN_C,  HAEN_E,  HAEN_D,  KC_SLSH,                              KC_LBRC, _________NUM_789_________, KC_RBRC, KC_PLUS,
    _______, IPC(A),  IPC(S),  IPC_MIN, IPC(F),  KC_DOT,                             KC_GRV,  _________NUM_456_________, KC_COLN, KC_DQUO,
    _______, SCRNSHOT, BRKT,    IPC(C),  KC_EQL,  KC_COLN, TG(_IPC),          TO_BASE, XXXXXXX, _________NUM_123_________, _______, KC_PIPE,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, _______, _______, _______, _______,          _______, LT(_NAV, KC_0), _______, KC_LPRN, KC_RPRN
),
[_NUM] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, 
    _______, XXXXXXX, KC_LT,   KC_EQL,  KC_GT,   XXXXXXX,                            XXXXXXX, _________NUM_789_________, XXXXXXX, KC_PLUS,
    _______, XXXXXXX, KC_LPRN, KC_MINS, KC_RPRN, KC_COMM,                            KC_GRV,  _________NUM_456_________, KC_COLN, KC_DQUO,
    _______, KC_LSFT, KC_LBRC, KC_UNDS, KC_RBRC, KC_DOT, TG(_NUM),           TO_BASE, XXXXXXX, _________NUM_123_________,   KC_QUES, KC_PIPE,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      KC_TRNS, KC_TRNS, _______, _______, _______,          _______, LT(_NAV, KC_0), _______, KC_LPRN, KC_RPRN
),

[_NAV] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    _______, XXXXXXX, KC_X,    KC_P,    PDF_HL,  KC_F6,                              C(KC_B), C(KC_U), C(KC_I), XXXXXXX, XXXXXXX, KC_F12,
    _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_F7,                              KC_INS,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_ENT,
    _______, IPC(Z),  C(KC_X), C(KC_C), C(KC_V), C(KC_B), TO_BASE,          TG(_NAV),KC_APP,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, _______, JOINTBL, KC_BSPC, KC_DEL,           _______, KC_TRNS, _______, _______, _______
),

[_MOUSE] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  RESET,
    KC_U,    XXXXXXX, KC_WH_D, KC_MS_U, KC_WH_U, XXXXXXX,                            XXXXXXX, KC_ACL2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_P,    KC_LSFT, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,                            KC_INS,  KC_ACL0, KC_BTN1, KC_BTN2, KC_BTN3, KC_ENT,
    KC_X,    UNDO,    CUT,     COPY,    PASTE,   BOLDFACE,TO_BASE,        TG(_MOUSE),KC_APP,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, _______, KC_LCTL, KC_SPC,  KC_ENT,           KC_TRNS, _______, _______, _______, _______
),

[_FUNC] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,
    XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                            XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   XXXXXXX,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      _______, _______, _______, _______, _______,          _______, _______, KC_TRNS, KC_GT, KC_LT
),

[_ONEHAND] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    KC_ESC,  A(KC_1), A(KC_2), A(KC_3), A(KC_4), A(KC_5),                            _______, _______, _______, _______, _______, _______,
    KC_TAB,  C(KC_WH_U), KC_BTN2, KC_UP,   KC_BTN1, SCRNSHOT,                           BRKT,    KC_WH_D, KC_MS_U, KC_WH_U, _______, _______,
    A(KC_6), C(KC_WH_D), KC_LEFT, KC_DOWN, KC_RGHT, PDF_HL,                             PRNS,    KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,
    KC_LSFT, UNDO,    A(KC_7), A(KC_8), PASTE,   KC_ENT,  TO_BASE,          XXXXXXX, _______, _______, _______, KC_LCTL, _______, _______,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                      KC_BSPC, KC_LALT, KC_LCTL, KC_BTN3, THUMB_L3,          _______, _______, _______, _______, _______
),

[_SETTINGS] = LAYOUT(
//|-------------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
   _______,      XXXXXXX, XXXXXXX, A(KC_0), A(KC_F4),KC_ENT,                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,
   XXXXXXX,/*|*/ XXXXXXX, A(KC_7), A(KC_8), A(KC_9), PDF_HL,                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
   XXXXXXX,/*|*/ SCRNSHOT,A(KC_4), A(KC_5), A(KC_6), KC_P,                               RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
   XXXXXXX,/*|*/ XXXXXXX, A(KC_1), A(KC_2), A(KC_3), KC_X, TG(_SETTINGS),  TO_BASE, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_LSFT, XXXXXXX,
//|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                     _______, _______, _______, _______, KC_TRNS,          _______, _______, _______, KC_GT, KC_LT
)

};


//clang-format on
//keyboard-specific process
// COMBOS
enum combos {
    COMBO_ONEHAND,
    COMBO_ONEHAND_END,
    COMBO_NOMOD,
    COMBO_NOMOD_END,
    COMBO_HAEN,
    // SHIFT_T,
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM onehand_combo[] = {KC_ESC, KC_1, COMBO_END};
const uint16_t PROGMEM onehand_end_combo[] = {KC_LEFT, KC_RGHT, COMBO_END};
const uint16_t PROGMEM nomod_combo[] = {KC_ESC, KC_GRV, COMBO_END};
const uint16_t PROGMEM nomod_end_combo[] = {KC_ESC, KC_TAB, COMBO_END};
const uint16_t PROGMEM haen_combo[] = {KC_CAPS, KC_LSFT, COMBO_END};
// const uint16_t PROGMEM shift_T[] = {KC_A, KC_T, COMBO_END};

combo_t key_combos[] = {
    [COMBO_ONEHAND]   = COMBO(onehand_combo, TO(_ONEHAND)),
    [COMBO_ONEHAND_END]   = COMBO(onehand_end_combo,TO(_BASE)),
    [COMBO_NOMOD]   = COMBO(nomod_combo,TO(_BASE_NOMOD)),
    [COMBO_NOMOD_END]   = COMBO(nomod_end_combo,TO(_BASE)),
    [COMBO_HAEN]   = COMBO(haen_combo,KC_LANG1),
    // [SHIFT_T]   = COMBO(shift_T,S(KC_T)),
};
// COMBO_TERM

// uint16_t get_combo_term(uint16_t index, combo_t *combo) {
// 	switch (index){
// 		case SHIFT_Q:
// 		case SHIFT_W:
// 		case SHIFT_E:
// 		case SHIFT_R:
// 		case SHIFT_T:
// 			return 200;
// 	}
// 	return COMBO_TERM;
// }

// Tapping term
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFTT_Z:
            return TAPPING_TERM-150;
        case THUMB_L2:
        case SFTT_A:
            return TAPPING_TERM-100;
        case SFTT_F:
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
            case THUMB_L3:
            case THUMB_R2:
            case THUMB_R3:
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
        case THUMB_L3:
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
        case SFT_CAPS:
            return true;
        default:
            return false;
    }
}

// Key overrides

const key_override_t DLR_0_override = ko_make_basic(MOD_MASK_SHIFT, KC_DLR, KC_0);
// const key_override_t grave_esc_override = ko_make_basic(MOD_MASK_CTRL, KC_ESC, KC_GRAVE);       // GUI + esc = `
const key_override_t **key_overrides = (const key_override_t *[]){                              // This globally defines all key overrides to be used
    &DLR_0_override,
    NULL                                                                                        // Null terminate the array of overrides!
 };

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
