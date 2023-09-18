#include QMK_KEYBOARD_H
#include "config.h"

enum UnicodeMapEntry {
    ua,
    uA,
    uo,
    uO,
    uu,
    uU,
    us,
    uS,
    arrowRightShort,
    arrowRightLong,
    arrowLeftShort,
    arrowLeftLong,
    arrowUpShort,
    arrowUpLong,
    arrowDownShort,
    arrowDownLong,
    multiplyDot,
    multiplyCross,
    gAlp,
    gBet,
    gGam,
    gDel,
    gEps,
    gEta,
    gDif,
    gOmg,
    gPhi,
    gPi,
    gRho,
    gXi,
    gKap,
    gLam,
    gMu,
    gSig,
    gThe,
    gZet,
};

const uint32_t unicode_map[] PROGMEM = {
    [ua]  = 0x00E4,
    [uA]  = 0x00C4,
    [uo]  = 0x00F6,
    [uO]  = 0x00D6,
    [uu]  = 0x00FC,
    [uU]  = 0x00DC,
    [us]  = 0x00DF,
    [uS]  = 0x1E9E,
    [arrowRightShort] = 0x2192,
    [arrowRightLong]  = 0x27F6,
    [arrowLeftShort]  = 0x2190,
    [arrowLeftLong]   = 0x27F5,
    [arrowUpShort]    = 0x2191,
    [arrowUpLong]     = 0x21E7,
    [arrowDownShort]  = 0x2193,
    [arrowDownLong]   = 0x21E9,
    [multiplyDot]     = 0x22C5,
    [multiplyCross]   = 0x2A2F,
    [gAlp] = 0x03B1,
    [gBet] = 0x03B2,
    [gGam] = 0x03B3,
    [gDel] = 0x03B4,
    [gEps] = 0x03B5,
    [gRho] = 0x03C1,
    [gPi] = 0x03C0,
    [gPhi] = 0x03C6,
    [gOmg] = 0x03C9,
    [gSig] = 0x03C3,
    [gEta] = 0x03B7,
    [gThe] = 0x03B8,
    [gKap] = 0x03BA,
    [gLam] = 0x03BB,
    [gMu] = 0x03BC,
    [gXi] = 0x03BE,
    [gZet] = 0x03C3,
    [gDif] = 0x2202,

};

#define KC_UA XP(ua, uA)
#define KC_UO XP(uo, uO)
#define KC_UU XP(uu, uU)
#define KC_US XP(us, uS)

#define KC_RARR XP(arrowRightShort, arrowRightLong)
#define KC_LARR XP(arrowLeftShort, arrowLeftLong)
#define KC_DARR XP(arrowDownShort, arrowDownLong)
#define KC_UARR XP(arrowUpShort, arrowUpLong)
#define KC_MULT XP(multiplyDot, multiplyCross)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ansi_82(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_HOME,   KC_END,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,             KC_DEL,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGUP,
          MO(1),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_PGDN,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,    KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 MO(1),    MO(2),      MO(3),  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [1] = LAYOUT_ansi_82(
        _______,            UC_LINX,  UC_WINC,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MULT,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,    KC_UU,  _______,    KC_UO,  _______,  _______,  _______,  _______,            _______,
        _______,    KC_UA,    KC_US,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  KC_UARR,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  KC_LARR,  KC_DARR,  KC_RARR),

    [2] = LAYOUT_ansi_82(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PSCR,            _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,            KC_SCRL,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  KC_VOLU,
        _______,  _______,  _______,                                KC_MPLY,                                _______,  _______,  _______,  KC_MPRV,  KC_VOLD,  KC_MNXT),

    [3] = LAYOUT_ansi_82(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  X(gRho),  X(gThe),  _______,  _______,  _______,  X(gOmg),   X(gPi),  _______,  _______,  _______,            _______,
        _______,  X(gAlp),  X(gSig),  _______,  X(gPhi),  _______,  X(gEta),  _______,  _______,  X(gLam),  _______,  _______,            _______,            _______,
        _______,            X(gZet),   X(gXi),  X(gKap),  _______,  X(gBet),  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______)
};


