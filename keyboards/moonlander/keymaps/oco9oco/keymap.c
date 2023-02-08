/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
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


#include "oco9oco.h"
#include "version.h"

// clang-format off
/* EMPTY
_______,  _______, _______, _______, _______, _______,   _______,         _______,  _______, _______, _______, _______, _______,   _______,
_______,  _______, _______, _______, _______, _______,   _______,         _______,  _______, _______, _______, _______, _______,   _______,
_______,  _______, _______, _______, _______, _______,   _______,         _______,  _______, _______, _______, _______, _______,   _______,
_______,  _______, _______, _______, _______, _______,                              _______, _______, _______, _______, _______,   _______,
_______,  _______, _______, _______, _______,            _______,         _______,           _______, _______, _______, _______,   _______,
                                     _______, _______,   _______,         _______,  _______, _______

*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT_moonlander_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    KC_ESC,  __________________NUMROW_L_________________, KC_F5,                     KC_LBRC, __________________NUMROW_R_________________, KC_MINS,
    KC_GRAVE,__________________QWERTY_L1________________, KC_F6,                     KC_RBRC,  __________________QWERTY_R1________________, KC_EQL,
    KC_CAPS, __________________QWERTY_SACS_L2___________, KC_F7,                     KC_B,    __________________QWERTY_HOME_R2___________, KC_QUOT,
    KC_LSFT, __________________QWERTY_GUIZ_L3___________,                                     __________________QWERTY_R3________________, KC_BSLS,
    KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, LCTL_T(KC_TAB),  TG(_BASE_NOMOD),           TG(_ONEHAND),       THUMB_R2, THUMB_R1, KC_LNG2, KC_LEFT, KC_RGHT,
                                      THUMB_L2, KC_DEL, KC_BSPC,                   XXXXXXX, XXXXXXX, THUMB_R3
),

[_BASE_NOMOD] = LAYOUT_moonlander_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    KC_ESC,   __________________NUMROW_L_________________,  _______,            _______,  __________________NUMROW_R_________________,  KC_DEL,
    KC_TAB,   __________________QWERTY_L1________________,  _______,            _______,  __________________QWERTY_R1________________,  KC_BSPC,
    KC_CAPS,  __________________QWERTY_L2________________,  _______,            _______,  __________________QWERTY_R2________________,  KC_QUOT,
    KC_LSFT,  __________________QWERTY_L3________________,                                __________________QWERTY_R3________________,  KC_BSLS,
    KC_LGUI, XXXXXXX, XXXXXXX, KC_LALT, _______,           _______,            _______,           _______, _______, _______, _______,  _______,
                                         _______, _______,  _______,            KC_GRAVE, _______, _______

),

[_IPC] = LAYOUT_moonlander_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, PDF_HL,  KC_P,    KC_X,    XXXXXXX, XXXXXXX, XXXXXXX,            XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS,
    _______, HAEN_B,  HAEN_C,  CLASS_E, CLASS_A, AT_IPC,  XXXXXXX,            KC_LBRC,  KC_RBRC, _________NUM_789_________, XXXXXXX, KC_EQL,
    _______, IPC(A),  IPC(S),  IPC_MIN, IPC(F),  KC_BSPC,  KC_DOT,            KC_LPRN,  KC_RPRN, _________NUM_456_________, KC_COLN, KC_DQUO,
    _______, IPC(Z),  HWP_CITE, IPC(C),  KC_EQL, KC_DEL,                             XXXXXXX, _________NUM_123_________, _______, KC_PIPE,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, _______, _______, _______, _______,          TO(_ONEHAND),     _______,          LT(_NAV, KC_0), _______, _______, KC_LPRN, KC_RPRN,
                                        _______, _______, _______,          _______, _______, _______
),

[_NAV] = LAYOUT_moonlander_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,   KC_F5,  XXXXXXX,          XXXXXXX, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    _______,LCA(KC_H),LCA(KC_J),LCA(KC_K),LCA(KC_L),KC_F6,XXXXXXX,          XXXXXXX, XXXXXXX, A(KC_4), A(KC_7), A(KC_6), XXXXXXX, KC_F12,
    _______, KC_LSFT, KC_LALT, KC_LCTL, KC_LSFT,  KC_F7,  XXXXXXX,          XXXXXXX, KC_INS,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_ENT,
    _______, NAV(Z),  C(KC_X), C(KC_C), C(KC_V), C(KC_B),                            KC_APP,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, _______, _______, BRKT, _______,             _______,          _______,         KC_TRNS, _______, _______, _______, _______,
                                        _______, _______, _______,          _______, _______, _______
),

[_MOUSE] = LAYOUT_moonlander_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,   XXXXXXX,          XXXXXXX, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  QK_BOOT,
    KC_U,    XXXXXXX, KC_WH_D, KC_MS_U, KC_WH_U, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_MAKE,
    KC_P,    KC_LSFT, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX,          XXXXXXX, KC_ACL2,  KC_ACL0, KC_BTN1, KC_BTN2, KC_BTN3, KC_ENT,
    KC_X,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, BOLDFACE,                           KC_APP,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
    _______, _______, _______, _______, _______,          TO_BASE,          _______,          _______, _______, _______, _______, _______,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                                        KC_ENT, KC_SPC,  KC_LCTL,           KC_TRNS, _______, _______
),

[_FUNC] = LAYOUT_moonlander_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, KC_F12, KC_F7,   KC_F8,  KC_F9,    XXXXXXX,  XXXXXXX,
    XXXXXXX, KC_LSFT, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, XXXXXXX,          XXXXXXX, KC_F11, KC_F4,   KC_F5,   KC_F6,   XXXXXXX,   XXXXXXX,
    XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            KC_F10, KC_F1,   KC_F2,   KC_F3,   XXXXXXX,   XXXXXXX,
    _______, _______, _______, BRKT, _______,             _______,          _______,         KC_TRNS, _______, _______, _______, _______,
                                        _______, _______, _______,          _______, _______, _______

),

[_ONEHAND] = LAYOUT_moonlander_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    KC_ESC,  C(KC_F1), XXXXXXX, XXXXXXX, A(KC_F4), XXXXXXX,   XXXXXXX,      XXXXXXX, _______, _______, _______, _______, _______, _______,
    KC_TAB,  C(KC_WH_U), KC_BTN2, KC_UP,   KC_BTN1, SCRNSHOT, XXXXXXX,      XXXXXXX, BRKT,    KC_WH_D, KC_MS_U, KC_WH_U, _______, _______,
    A(KC_6), C(KC_WH_D), KC_LEFT, KC_DOWN, KC_RGHT, PDF_HL,   XXXXXXX,      XXXXXXX, PRNS,    KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,
    KC_LSFT, UNDO,    A(KC_7), A(KC_8), PASTE,   KC_ENT,                             _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,              TO_BASE,      _______,          _______, _______, _______, KC_LCTL, _______,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                                            KC_LCTL, KC_BSPC, KC_DEL,       _______, _______, _______
),

};

enum combos {
    COMBO_ONEHAND,
    COMBO_VIM,
    COMBO_HOME,
    COMBO_OS,
    COMBO_ONEHAND_HOME,
    //ZB_STENO,
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM qw_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM hl_combo[] = {KC_H, KC_SCLN, COMBO_END};
const uint16_t PROGMEM ee_combo[] = {KC_ESC, KC_EQL, COMBO_END};
const uint16_t PROGMEM os_combo[]= {KC_BSLS, KC_SLSH, COMBO_END};
const uint16_t PROGMEM oh_combo[]= {KC_BTN2, KC_UP, COMBO_END};

combo_t key_combos[] = {
    [COMBO_ONEHAND]   = COMBO(qw_combo, TO(_ONEHAND)),
    [COMBO_VIM]	      = COMBO(hl_combo, TO(_BASE_NOMOD)),
    [COMBO_HOME]      = COMBO(ee_combo, TO(_BASE)),
    [COMBO_OS]      = COMBO(os_combo, CG_TOGG),
    [COMBO_ONEHAND_HOME] = COMBO(oh_combo, TO(_BASE)),
};

// Key overrides

const key_override_t tilde_esc_override = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, S(KC_GRAVE));   // Shift + esc = ~
const key_override_t grave_esc_override = ko_make_basic(MOD_MASK_CTRL, KC_ESC, KC_GRAVE);       // GUI + esc = `

const key_override_t DEL_override = ko_make_basic(MOD_MASK_SHIFT, KC_DEL, KC_BSPC);   // Shift + del = bspc
//   // shift + caps lock = toggle control - gui

const key_override_t **key_overrides = (const key_override_t *[]){                              // This globally defines all key overrides to be used
    &tilde_esc_override, &grave_esc_override,
    &DEL_override, //&OS_override,
    NULL                                                                                        // Null terminate the array of overrides!
};
