/* Copyright 2024 Shantanu Mahajan
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
  // SOFLE RGB
#include <stdio.h>

#include QMK_KEYBOARD_H

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

#define U_RDO SCMD(KC_Z)
#define U_PST LCMD(KC_V)
#define U_CPY LCMD(KC_C)
#define U_CUT LCMD(KC_X)
#define U_UND LCMD(KC_Z)


enum sofle_layers {
    _DEFAULTS = 0,
    _QWERTY = 0,
    _RAISE,
    _CLMK,
    U_BUTTON,
    U_NAV,
    U_MOUSE,
    U_MEDIA,
    U_NUM,
    U_SYM,
    U_FUN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  [   |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  ]   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  \   |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------| MUTE  |    |RGB_TOG|------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | Bspc | WIN  | ESC  | Space| /  Tab  /       \Enter \  | Bspc | Del  | RCTR | RAlt |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_QWERTY] = LAYOUT(
  //,------------------------------------------------.                    ,---------------------------------------------------.
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
 KC_LBRC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_RBRC,
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  KC_BSLS,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_MUTE,    RGB_TOG,KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
              MO(_RAISE), KC_LGUI, KC_ESC,  KC_SPC,   KC_TAB,     KC_ENT,  KC_BSPC,  KC_DEL,  KC_RCTL,  KC_RALT
  //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),
/*
 * RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F11 |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |   =  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      | LEFT | DOWN |  UP  |RIGHT |      |
 * |------+------+------+------+------+------| MUTE  |    |RGB_TOG|------+------+------+------+------+------|
 * |LShift|      |      |      |      |      |-------|    |-------|      |      |      |      |      |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      | WIN  | ESC  | Space| /  Tab  /       \Enter \  | Bspc | Del  | RCTR | RAlt |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_RAISE] = LAYOUT(
  //,------------------------------------------------.                    ,---------------------------------------------------.
    KC_F11, KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F12,
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
     KC_NO, KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
 DF(_CLMK), KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_LEFT,KC_DOWN, KC_UP,   KC_RGHT, KC_NO,
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  KC_LSFT,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_MUTE,    RGB_TOG,KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_RSFT,
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                 KC_TRNS, KC_LGUI, KC_ESC,  KC_SPC,   KC_TAB,     KC_ENT,  KC_BSPC,  KC_DEL,  KC_RCTL,  KC_RALT
  //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),
  [_CLMK] = LAYOUT(
    KC_NO,  KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,                 KC_NO,
    KC_NO,  KC_Q,              KC_W,              KC_F,              KC_P,              KC_G,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,               KC_NO,
DF(_QWERTY),LCTL_T(KC_A),      LALT_T(KC_R),      LGUI_T(KC_S),      LSFT_T(KC_T),      KC_D,              KC_H,              LSFT_T(KC_N),      LGUI_T(KC_E),      LALT_T(KC_I),      LCTL_T(KC_O),          KC_NO,
    KC_NO,  LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B, KC_NO,KC_NO, KC_K,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),  KC_NO,
            KC_NO,             KC_NO,             LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_BSPC), LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_SPC),  LT(U_FUN,KC_DEL),  KC_NO,              KC_NO
  ),
  [U_NAV] = LAYOUT(
    KC_NO,  KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,                 KC_NO,
    KC_NO,  KC_NO,             KC_NO,             KC_NO,             KC_NO,             U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,                 KC_NO,
    KC_NO,  KC_LCTL,           KC_LALT,           KC_LGUI,           KC_LSFT,           U_NA,              CW_TOGG,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,               KC_NO,
    KC_NO,  U_NA,              KC_ALGR,           KC_NO,             KC_NO,             U_NA, KC_NO,KC_NO, KC_INS,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,                KC_NO,
            U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_SPC,            KC_DEL,            U_NP,              U_NP
  ),
  [U_MOUSE] = LAYOUT(
    KC_NO,  KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,                 KC_NO,
    KC_NO,  KC_NO,             KC_NO,             KC_NO,             KC_NO,             U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,                 KC_NO,
    KC_NO,  KC_LCTL,           KC_LALT,           KC_LGUI,           KC_LSFT,           U_NA,              U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,               KC_NO,
    KC_NO,  U_NA,              KC_ALGR,           KC_NO,             KC_NO,             U_NA, KC_NO,KC_NO, U_NU,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,               KC_NO,
            U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP
  ),
  [U_MEDIA] = LAYOUT(
    KC_NO,  KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,                 KC_NO,
    KC_NO,  KC_NO,             KC_NO,             KC_NO,             KC_NO,             U_NA,              RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,               KC_NO,
    KC_NO,  KC_LCTL,           KC_LALT,           KC_LGUI,           KC_LSFT,           U_NA,              U_NU,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,               KC_NO,
    KC_NO,  U_NA,              KC_ALGR,           KC_NO,             KC_NO,             U_NA, KC_NO,KC_NO, OU_AUTO,           U_NU,              U_NU,              U_NU,              U_NU,                  KC_NO,
            U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP
  ),
  [U_NUM] = LAYOUT(
    KC_NO,  KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,                 KC_NO,
    KC_NO,  KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_RBRC,           U_NA,              KC_NO,             KC_NO,             KC_NO,             KC_NO,                 KC_NO,
    KC_NO,  KC_SCLN,           KC_4,              KC_5,              KC_6,              KC_EQL,            U_NA,              KC_LSFT,           KC_LGUI,           KC_LALT,           KC_LCTL,               KC_NO,
    KC_NO,  KC_GRV,            KC_1,              KC_2,              KC_3,              KC_BSLS,U_NA,KC_NO,U_NA,              KC_NO,             KC_NO,             KC_ALGR,           U_NA,                  KC_NO,
            U_NP,              U_NP,              KC_DOT,            KC_0,              KC_MINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP
  ),
  [U_SYM] = LAYOUT(
    KC_NO,  KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,                 KC_NO,
    KC_NO,  KC_LCBR,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RCBR,           U_NA,              KC_NO,             KC_NO,             KC_NO,             KC_NO,                 KC_NO,
    KC_NO,  KC_COLN,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_PLUS,           U_NA,              KC_LSFT,           KC_LGUI,           KC_LALT,           KC_LCTL,               KC_NO,
    KC_NO,  KC_TILD,           KC_EXLM,           KC_AT,             KC_HASH,           KC_PIPE,U_NA,KC_NO,U_NA,              KC_NO,             KC_NO,             KC_ALGR,           U_NA,                  KC_NO,
            U_NP,              U_NP,              KC_LPRN,           KC_RPRN,           KC_UNDS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP
  ),
  [U_FUN] = LAYOUT(
    KC_NO,  KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,                 KC_NO,
    KC_NO,  KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,           U_NA,              KC_NO,             KC_NO,             KC_NO,             KC_NO,                 KC_NO,
    KC_NO,  KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,           U_NA,              KC_LSFT,           KC_LGUI,           KC_LALT,           KC_LCTL,               KC_NO,
    KC_NO,  KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,U_NA,KC_NO,U_NA,              KC_NO,             KC_NO,             KC_ALGR,           U_NA,                  KC_NO,
            U_NP,              U_NP,              KC_APP,            KC_BSPC,           KC_TAB,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP
  ),
  [U_BUTTON] = LAYOUT(
    KC_NO,  KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,             KC_NO,                 KC_NO,
    KC_NO,  U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,                 KC_NO,
    KC_NO,  KC_LCTL,           KC_LALT,           KC_LGUI,           KC_LSFT,           U_NU,              U_NU,              KC_LSFT,           KC_LGUI,           KC_LALT,           KC_LCTL,               KC_NO,
    KC_NO,  U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO, U_NA,KC_NO, U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,                 KC_NO,
            U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP
  )
};

#ifdef ENCODER_ENABLE
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QWERTY]       = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(RGB_MOD, RGB_RMOD) },
    [_RAISE]        = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(RGB_MOD, RGB_RMOD) },
    [_CLMK]         = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(RGB_MOD, RGB_RMOD) },
    [U_BUTTON]      = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(U_UND,   U_RDO   ) },
    [U_NAV]         = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(LCTL(KC_LEFT),LCTL(KC_RGHT)) },
    [U_MOUSE]       = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(KC_MS_L, KC_MS_R ) },
    [U_MEDIA]       = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(KC_MPRV, KC_MNXT ) },
    [U_NUM]         = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(KC_NO,   KC_NO   ) },
    [U_SYM]         = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(KC_NO,   KC_NO   ) },
    [U_FUN]         = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(KC_NO,   KC_NO   ) }
};
#endif
#endif


#ifdef OLED_ENABLE
#include "ocean_dream.c"
#include "my_logo.c"
// #include "luna.c"
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
        // return rotation;
    } else {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_timed_out = false;
uint32_t anim_sleep = 0;

bool oled_task_user(void) {
    if (timer_elapsed32(anim_sleep) > OLED_TIMEOUT && !oled_timed_out) {
        // oled will be turned on on a keypress
        // the timer will also be reset on a keypress
        oled_timed_out = true;
        oled_off();
    }

    if (oled_timed_out && is_oled_on()) {
        // this is needed because keypress logis is missing on peripheral
        // but the on/off state of the oled is synced between the 2 halves
        // the oleds were switched on after timeout
        oled_timed_out = false;
        anim_sleep = timer_read32();
    }

    if (is_oled_on()) {
        if (is_keyboard_left()) {
            // print_status_narrow();
            // print_status_wide();
            // render_luna(0, 13);
            render_my_logo();
        } else {
            // render_logo();
            render_stars();
        }
    }
    return false;
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef OLED_ENABLE
    oled_on();
    anim_sleep = timer_read32();
#endif
  return true;
}
