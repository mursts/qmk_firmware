/* Copyright 2022 mursts
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

#include QMK_KEYBOARD_H

#define LT_CTAB  LCTL_T(KC_TAB)
#define LT_1SPC  LT(1, KC_SPC)
#define LT_2V    LT(2, KC_V)
#define LT_3N    LT(3, KC_N)
#define LT_4ENT  LT(4, KC_ENT)
#define ALTX     LALT_T(KC_X)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_Q,   KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        LT_CTAB, KC_A,   KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    LT_4ENT,
        KC_LSFT, KC_Z,   ALTX,     KC_C,    LT_2V,   KC_B,    LT_3N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_LGUI, LT_1SPC,KC_LCTL
        ),

    [1] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______
        ),

    [2] = LAYOUT(
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        _______, KC_LCBR, KC_RCBR, _______, KC_PIPE, _______, KC_UNDS, KC_PLUS, KC_COLN, KC_DQUO, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______
        ),

    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, KC_INS,  _______, KC_PSCR, _______,
        _______, KC_LBRC, KC_RBRC, _______, KC_BSLS, _______, KC_MINS, KC_EQL,  KC_SCLN, KC_QUOT, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______
        ),

    [4] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_DEL,
        _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, _______, _______, _______, _______,
        _______, KC_F11,  KC_F12,  _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______
        ),
};
