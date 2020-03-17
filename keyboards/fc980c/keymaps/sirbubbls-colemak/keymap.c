/*
Copyright 2017 Balz Guenat

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
#include QMK_KEYBOARD_H

enum {
    BACKSLASH = 0,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [BACKSLASH] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_BSLS), // replace with your keyco.des
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( // default
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_INS, KC_PGUP, KC_PGDN,
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_LBRC, KC_RBRC, KC_BSPC, KC_P7, KC_P8, KC_P9, KC_PPLS,
        LT(6,KC_ESC), KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_ENT, KC_P4, KC_P5, KC_P6,
        KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, KC_UP, KC_P1, KC_P2, KC_P3, KC_PENT,
        LCTL_T(KC_LBRC), KC_LALT, KC_LGUI, KC_SPC, KC_RALT, MO(1), ALL_T(KC_RBRC), KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT),
    [1] = LAYOUT (
        KC_SLEP, TG(4), TG(7), _______, _______, _______, _______, _______, _______, _______, _______, _______, TG(5), KC_PWR, _______, KC_HOME, KC_END,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______, _______, _______, _______, _______,
        KC_ESC, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, _______, _______, _______,
        _______, TG(3), _______, _______, _______, KC_APP, _______, KC_HOME, KC_PGDN, KC_END, _______, _______),
    [2] = LAYOUT( // Colemak Base Layout
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_LBRC, KC_RBRC, _______, _______, _______, _______, _______,
        _______, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, _______, _______, _______, _______,
        KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),
    [3] = LAYOUT( // Windows Mods
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_LCTL, KC_LGUI, KC_LALT, _______, KC_RALT, _______, KC_HYPR, _______, _______, _______, _______, _______),
    [4] = LAYOUT( // QWERTY Layout
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, _______, _______, _______, _______, _______,
        _______, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, _______, _______, _______, _______,
        _______, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),
    [5] = LAYOUT( // Default Layout
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, _______, KC_DEL, KC_INS, KC_PGUP, KC_PGDN,
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_P7, KC_P8, KC_P9, KC_PPLS,
        KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H  , KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_P4, KC_P5, KC_P6,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_P1, KC_P2, KC_P3, KC_PENT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT),
    [6] = LAYOUT(  // Hold Escape Modifier Layer
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, _______, _______, _______, _______,
        _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSLS, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_ENT, _______, _______, _______, _______, _______, _______, _______, _______),
    [7] = LAYOUT( // Gaming Mode
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______,_______ , _______, _______, _______, _______, _______, _______, _______),
};
