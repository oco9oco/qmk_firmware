/* Copyright 2022 oco9oco <oco9oco@gmail.com>
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

#include "oco9oco.h" //look for users/oco9oco/

// Keyboard Layers
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//clang-format off
 [_BASE] = LAYOUT_ID75_wrapper( /* QWERTY */
    KC_ESC,    __________________NUMROW_L_________________,      KC_INS,  KC_HOME, KC_PGUP,       __________________NUMROW_R_________________,  KC_BSPC,
    KC_TAB,    __________________QWERTY_L1________________,      XXXXXXX, XXXXXXX, XXXXXXX,       __________________QWERTY_R1________________,  KC_QUOT,
    KC_CAPS,   __________________QWERTY_SACS_L2___________,      XXXXXXX, XXXXXXX, XXXXXXX,       __________________QWERTY_R2________________,  KC_ENT,
    KC_LSFT,   __________________QWERTY_L3_SFTZ___________,      XXXXXXX, XXXXXXX, KC_B,          __________________QWERTY_R3________________,  KC_RSFT,
    KC_LCTL,   KC_LGUI, KC_LALT, KC_LGUI, THUMB_L1,THUMB_L2,     THUMB_L3,KC_0,   THUMB_R3,       THUMB_R2,THUMB_R1,KC_LEFT, KC_DOWN, KC_UP,    KC_RGHT
 ),

 [_IPC] = LAYOUT_ID75_wrapper( /* QWERTY */
    KC_ESC,    CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,        KC_F6,   KC_F7,   KC_F8,         A(KC_1), A(KC_2), A(KC_3), A(KC_4), A(KC_5),  KC_UNDS,
    KC_TAB,    HAEN_B,  HAEN_C,  HAEN_E,  HAEN_D,  HAEN_F,       XXXXXXX, XXXXXXX, KC_LBRC,       KC_RBRC, _________NUM_789_________, XXXXXXX,  KC_PLUS,
    KC_CAPS,   _IPC_A,  _IPC_S,  _IPC_MIN,_IPC_F, KC_SLSH,       XXXXXXX, XXXXXXX, KC_LT,         KC_GT,   _________NUM_456_________, CLN_SPC,  KC_DQUO,
    KC_LSFT,   _IPC_Z,  BRKT,    KC_EQL,  KC_DOT,  BOLDFACE,     XXXXXXX, XXXXXXX, KC_LPRN,       KC_RPRN, _________NUM_123_________, _______,  KC_PIPE,
    KC_LCTL,   KC_LGUI, KC_LALT, _______, _______, _______,      _______, _______, _______,       LT_NAV_0,_______, _______, _______, _______,  _______ 
 ),
 
[_NAV] = LAYOUT_ID75_wrapper(
    _______,   CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,        XXXXXXX, XXXXXXX, XXXXXXX,       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,
    _______,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F6,        XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_F12,
    PDF_HL,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_F7,        XXXXXXX, XXXXXXX, XXXXXXX,       KC_INS,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,  KC_ENT,
    _______,   _IPC_Z,  C(KC_X), C(KC_C), C(KC_V), C(KC_B),      XXXXXXX, XXXXXXX, XXXXXXX,       KC_APP,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,   KC_DEL,
    XXXXXXX,   _______, _______, _______, KC_DEL,  KC_BSPC,      _______, _______, _______,       _______, KC_TRNS, _______, _______, _______,  _______
),

[_MOUSE] = LAYOUT_ID75_wrapper(
    _______,   CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,        XXXXXXX, XXXXXXX, XXXXXXX,       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   RESET,
    KC_U,      XXXXXXX, KC_WH_D, KC_MS_U, KC_WH_U, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, KC_ACL2, KC_ACL1, XXXXXXX, XXXXXXX,  XXXXXXX,    
    KC_P,      XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,       KC_INS,  KC_ACL0, KC_BTN1, KC_BTN2, KC_BTN3,   KC_ENT,  
    KC_X,      UNDO,    CUT,     COPY,    PASTE,   BOLDFACE,     XXXXXXX, XXXXXXX, XXXXXXX,       KC_APP,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,    KC_DEL,
    _______,   _______, _______, _______, _______, _______,      _______, _______, _______,       _______, _______, _______, _______, _______,  _______                   
),

[_FUNC] = LAYOUT_ID75_wrapper(
    _______,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, 
    XXXXXXX,   CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,        XXXXXXX, XXXXXXX, XXXXXXX,       _____________FUNC_2789____________, XXXXXXX,  XXXXXXX,
    XXXXXXX,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_F6,        XXXXXXX, XXXXXXX, XXXXXXX,       _____________FUNC_1456____________, XXXXXXX,  XXXXXXX,
    XXXXXXX,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_F7,        XXXXXXX, XXXXXXX, XXXXXXX,       _____________FUNC_0123____________, XXXXXXX,  XXXXXXX,
    _______,   _______, _______, _______, _______, _______,      _______, _______, _______,       _______, _______, _______, _______, _______,  _______                   
),

[_ONEHAND] = LAYOUT_ID75_wrapper(
    TO_BASE,   CTRL_F1, KC_F2,   KC_ENT,   ALT_F4, KC_F5,        XXXXXXX, XXXXXXX, XXXXXXX,       _______, _______, _______, _______, _______,  _______,
    GUI_RGHT,  KC_LGUI, KC_BTN2, KC_UP,   KC_BTN1, SCRNSHOT,     XXXXXXX, XXXXXXX, XXXXXXX,       BRKT,    KC_WH_D, KC_MS_U, KC_WH_U, _______,  _______,
    KC_LALT,   KC_LCTL, KC_LEFT, KC_DOWN, KC_RGHT, PDF_HL,       XXXXXXX, XXXXXXX, XXXXXXX,       PRNS,    KC_MS_L, KC_MS_D, KC_MS_R, _______,  _______,
    KC_LSFT,   UNDO,    CUT,     COPY,    PASTE,   BOLDFACE,     XXXXXXX, XXXXXXX, XXXXXXX,       _______, _______, _______, KC_LCTL, _______,  _______,
    XXXXXXX,   KC_BSPC, KC_LALT, KC_SPC,  KC_BTN3, KC_ENT,       _______, _______, _______,       _______, _______, _______, _______, _______,  _______
),

[_SETTINGS] = LAYOUT_ID75_wrapper(
   RESET,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, 
   XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, 
   XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, 
   RGB_TOG,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,       RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,  XXXXXXX,
   XXXXXXX,    _______, _______, _______, _______, KC_TRNS,      _______, _______, _______,       _______, _______, _______, _______, _______,  _______ 
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
        //case SFTT_A:
        //case SFTT_Z:    
        case SFTT_Z:    
            if (record->event.key.row == 1 && record->event.key.col >= 2) return true;// KEY_ROW, KEY_COL: look for oco9oco.h 
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
