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
//clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_crkbd_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    KC_ESC,  __________________QWERTY_L1________________,                            __________________QWERTY_R1________________, KC_EQL,
    KC_CAPS, __________________QWERTY_SACS_L2___________,                            __________________QWERTY_HOME_R2___________, KC_QUOT,
    KC_LSFT, __________________QWERTY_GUIZ_L3___________,                            __________________QWERTY_R3________________, KC_BSLS,
                                        THUMB_L1, THUMB_L2, KC_DEL,       THUMB_R3, THUMB_R2, THUMB_R1
    ),
  [_BASE_NOMOD] = LAYOUT_crkbd_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    KC_ESC,  __________________QWERTY_L1________________,                            __________________QWERTY_R1________________, KC_EQL,
    KC_CAPS, __________________QWERTY_L2_SFTA___________,                            __________________QWERTY_R2________________, KC_QUOT,
    KC_LSFT, __________________QWERTY_GUIZ_L3___________,                            __________________QWERTY_R3________________, KC_BSLS,
                                        THUMB_L1, THUMB_L2, KC_DEL,        THUMB_R3, THUMB_R2, THUMB_R1
    ),
  [_IPC] = LAYOUT_split_3x6_3(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    PDF_HL,  HAEN_B,  HAEN_C,  HAEN_E,  HAEN_D,  KC_SLSH,                            KC_LBRC, KC_7,    KC_8,    KC_9,    KC_0,    KC_PLUS,
    MT_CAPS, IPC(A),  IPC(S),  IPC_MIN, IPC(F),  KC_DOT,                             KC_RBRC, KC_4,    KC_5,    KC_6,    KC_COLN, KC_DQUO,
    KC_LANG1,IPC(Z),  BRKT,    IPC(C),  KC_EQL,  CLN_SPC,                            KC_LT,   KC_1,    KC_2,    KC_3,    KC_DOT,  KC_PIPE,
                                        _______, _______, _______,          A(KC_2), LT(_NAV,KC_0), _______
    ),
  [_NUM] = LAYOUT_crkbd_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
    _______, KC_LGUI, KC_LALT, _NUM_MIN,KC_LSFT, XXXXXXX,                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_COLN, KC_DQUO,
    _______, KC_SPC,  BULLET_U,KC_COMM, BULLET_D,KC_DOT,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PIPE,
                                        _______, _______, _______,          A(KC_1), LT(_NAV,KC_0),KC_SPC
    ),
  [_NAV] = LAYOUT_split_3x6_3(          //Navigations
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, C(KC_F1), KC_F2,  TO(_MOUSE),   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  A(KC_F4),
    _______, KC_LSFT, KC_LALT, KC_LCTL, KC_LSFT, KC_F6,                              KC_INS, KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, KC_F11,
    _______, NAV(Z),  C(KC_X), C(KC_C), C(KC_V), C(KC_B),                            KC_APP, KC_HOME, KC_PGDN, KC_PGUP,  KC_END,  KC_F12,
                                        _______, KC_BSPC, KC_DEL,          _______, _______, _______
    ),
  [_FUNC] = LAYOUT_crkbd_wrapper(       //Functions
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    XXXXXXX, C(KC_F1),KC_F2,   KC_F3,   A(KC_F4),KC_F5,                              _____________FUNC_2789____________, XXXXXXX, KC_BSPC,
    XXXXXXX, KC_LSFT, KC_LALT, KC_LCTL, KC_LSFT, KC_F6,                              _____________FUNC_1456____________, XXXXXXX, KC_DEL,
    XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            _____________FUNC_0123____________, XXXXXXX, XXXXXXX,
                                        _______, _______, _______,          _______, _______, _______
    ),
  [_MOUSE] = LAYOUT_split_3x6_3(       //Mouse keys
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    KC_U, C(KC_F1), KC_WH_D, KC_MS_U, KC_WH_U, XXXXXXX,                              XXXXXXX,KC_ACL2, XXXXXXX, XXXXXXX, XXXXXXX,  RESET,
    KC_P, KC_H,     KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,                              KC_INS, KC_ACL0, KC_BTN1, KC_BTN2, KC_BTN3,  KC_ENT,
    KC_X, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B),                               KC_APP, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,  KC_DEL,
                                        _______, _______, _______,          _______, _______, TO_BASE
    ),
  [_ONEHAND] = LAYOUT_split_3x6_3( //Trackball Manipulation
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    TO(_BASE),A(KC_F4),KC_BTN2,KC_UP,   KC_BTN1, LSG(KC_S),                          BRKT,    KC_7,    KC_8,    KC_9,    _______, _______,
    KC_LALT, KC_LCTL, KC_LEFT, KC_DOWN, KC_RGHT, G(KC_RGHT),                         PRNS,    KC_4,    KC_5,    KC_6,    KC_LGUI, KC_LSFT,
    KC_LSFT, IPC(Z),  C(KC_X), C(KC_C), C(KC_V), C(KC_B),                            _______, KC_1,    KC_2,    KC_3,    KC_LCTL, KC_LALT,
                                        KC_DEL,  KC_SPC, KC_BTN3,           _______, LT(_NAV,KC_0), _______
    )
};
//clang-format on

// COMBOS
enum combos {
    COMBO_ONEHAND,
    COMBO_VIM,
    COMBO_HOME,
    //ZB_STENO,
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM hl_combo[] = {KC_H, KC_SCLN, COMBO_END};
const uint16_t PROGMEM ee_combo[] = {KC_ESC, KC_EQL, COMBO_END};

combo_t key_combos[] = {
    [COMBO_ONEHAND]   = COMBO(qw_combo, TO(_ONEHAND)),
    [COMBO_VIM]	      = COMBO(hl_combo, TO(_BASE_NOMOD)),
    [COMBO_HOME]      = COMBO(ee_combo, TO(_BASE))
};

// Key overrides

const key_override_t tilde_esc_override = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, S(KC_GRAVE));   // Shift + esc = ~
const key_override_t grave_esc_override = ko_make_basic(MOD_MASK_CTRL, KC_ESC, KC_GRAVE);       // GUI + esc = `

const key_override_t DEL_override = ko_make_basic(MOD_MASK_SHIFT, KC_DEL, KC_BSPC);   // Shift + esc = ~
const key_override_t OS_override = ko_make_basic(MOD_MASK_SHIFT, KC_CAPS, CG_TOGG);

const key_override_t **key_overrides = (const key_override_t *[]){                              // This globally defines all key overrides to be used
    &tilde_esc_override, &grave_esc_override,
    &DEL_override, &OS_override,
    NULL                                                                                        // Null terminate the array of overrides!
};

