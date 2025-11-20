#include QMK_KEYBOARD_H

enum layers { MAC, WIN, FN };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌──────────────┬──────┬──────┬────┬────┬────┬────┬────┬────┬────┬────────┬────────┬────────┬────────┬──────┬────────┐
//    │     esc      │  f1  │  f2  │ f3 │ f4 │ f5 │ f6 │ f7 │ f8 │ f9 │  f10   │  f11   │  f12   │ MO(FN) │ del  │  pgup  │
//    ├──────────────┼──────┼──────┼────┼────┼────┼────┼────┼────┼────┼────────┼────────┼────────┼────────┴──────┼────────┤
//    │      `       │  1   │  2   │ 3  │ 4  │ 5  │ 6  │ 7  │ 8  │ 9  │   0    │   -    │   =    │     bspc      │  pgdn  │
//    ├──────────────┼──────┼──────┼────┼────┼────┼────┼────┼────┼────┼────────┼────────┼────────┼───────────────┼────────┤
//    │     tab      │  q   │  w   │ e  │ r  │ t  │ y  │ u  │ i  │ o  │   p    │   [    │   ]    │       \       │  home  │
//    ├──────────────┼──────┼──────┼────┼────┼────┼────┼────┼────┼────┼────────┼────────┼────────┴───────────────┼────────┤
//    │ LT(FN, caps) │  a   │  s   │ d  │ f  │ g  │ h  │ j  │ k  │ l  │   ;    │   '    │          ent           │  end   │
//    ├──────────────┴──────┼──────┼────┼────┼────┼────┼────┼────┼────┼────────┼────────┼─────────────────┬──────┼────────┤
//    │        lsft         │  z   │ x  │ c  │ v  │ b  │ n  │ m  │ ,  │   .    │   /    │      rsft       │  up  │ MO(FN) │
//    ├──────────────┬──────┼──────┼────┴────┴────┴────┴────┴────┴────┼────────┼────────┼────────┬────────┼──────┼────────┤
//    │     lctl     │ lalt │ lgui │               spc                │ MO(FN) │ MO(FN) │ MO(FN) │  left  │ down │  rght  │
//    └──────────────┴──────┴──────┴──────────────────────────────────┴────────┴────────┴────────┴────────┴──────┴────────┘
[MAC] = LAYOUT_75_ansi(
  KC_ESC          , KC_F1   , KC_F2   , KC_F3 , KC_F4 , KC_F5 , KC_F6 , KC_F7 , KC_F8 , KC_F9   , KC_F10  , KC_F11  , KC_F12  , MO(FN)  , KC_DEL  , KC_PGUP,
  KC_GRV          , KC_1    , KC_2    , KC_3  , KC_4  , KC_5  , KC_6  , KC_7  , KC_8  , KC_9    , KC_0    , KC_MINS , KC_EQL  ,      KC_BSPC      , KC_PGDN,
  KC_TAB          , KC_Q    , KC_W    , KC_E  , KC_R  , KC_T  , KC_Y  , KC_U  , KC_I  , KC_O    , KC_P    , KC_LBRC , KC_RBRC ,      KC_BSLS      , KC_HOME,
  LT(FN, KC_CAPS) , KC_A    , KC_S    , KC_D  , KC_F  , KC_G  , KC_H  , KC_J  , KC_K  , KC_L    , KC_SCLN , KC_QUOT ,           KC_ENT            , KC_END ,
           KC_LSFT          , KC_Z    , KC_X  , KC_C  , KC_V  , KC_B  , KC_N  , KC_M  , KC_COMM , KC_DOT  , KC_SLSH ,      KC_RSFT      , KC_UP   , MO(FN) ,
  KC_LCTL         , KC_LALT , KC_LGUI ,                         KC_SPC                          , MO(FN)  , MO(FN)  , MO(FN)  , KC_LEFT , KC_DOWN , KC_RGHT
),

//    ┌──────────────┬──────┬──────┬────┬────┬────┬────┬────┬────┬────┬────────┬────────┬────────┬────────┬──────┬────────┐
//    │     esc      │  f1  │  f2  │ f3 │ f4 │ f5 │ f6 │ f7 │ f8 │ f9 │  f10   │  f11   │  f12   │ MO(FN) │ del  │  pgup  │
//    ├──────────────┼──────┼──────┼────┼────┼────┼────┼────┼────┼────┼────────┼────────┼────────┼────────┴──────┼────────┤
//    │      `       │  1   │  2   │ 3  │ 4  │ 5  │ 6  │ 7  │ 8  │ 9  │   0    │   -    │   =    │     bspc      │  pgdn  │
//    ├──────────────┼──────┼──────┼────┼────┼────┼────┼────┼────┼────┼────────┼────────┼────────┼───────────────┼────────┤
//    │     tab      │  q   │  w   │ e  │ r  │ t  │ y  │ u  │ i  │ o  │   p    │   [    │   ]    │       \       │  home  │
//    ├──────────────┼──────┼──────┼────┼────┼────┼────┼────┼────┼────┼────────┼────────┼────────┴───────────────┼────────┤
//    │ LT(FN, caps) │  a   │  s   │ d  │ f  │ g  │ h  │ j  │ k  │ l  │   ;    │   '    │          ent           │  end   │
//    ├──────────────┴──────┼──────┼────┼────┼────┼────┼────┼────┼────┼────────┼────────┼─────────────────┬──────┼────────┤
//    │        lsft         │  z   │ x  │ c  │ v  │ b  │ n  │ m  │ ,  │   .    │   /    │      rsft       │  up  │ MO(FN) │
//    ├──────────────┬──────┼──────┼────┴────┴────┴────┴────┴────┴────┼────────┼────────┼────────┬────────┼──────┼────────┤
//    │     lctl     │ lgui │ lalt │               spc                │ MO(FN) │ MO(FN) │ MO(FN) │  left  │ down │  rght  │
//    └──────────────┴──────┴──────┴──────────────────────────────────┴────────┴────────┴────────┴────────┴──────┴────────┘
[WIN] = LAYOUT_75_ansi(
  KC_ESC          , KC_F1   , KC_F2   , KC_F3 , KC_F4 , KC_F5 , KC_F6 , KC_F7 , KC_F8 , KC_F9   , KC_F10  , KC_F11  , KC_F12  , MO(FN)  , KC_DEL  , KC_PGUP,
  KC_GRV          , KC_1    , KC_2    , KC_3  , KC_4  , KC_5  , KC_6  , KC_7  , KC_8  , KC_9    , KC_0    , KC_MINS , KC_EQL  ,      KC_BSPC      , KC_PGDN,
  KC_TAB          , KC_Q    , KC_W    , KC_E  , KC_R  , KC_T  , KC_Y  , KC_U  , KC_I  , KC_O    , KC_P    , KC_LBRC , KC_RBRC ,      KC_BSLS      , KC_HOME,
  LT(FN, KC_CAPS) , KC_A    , KC_S    , KC_D  , KC_F  , KC_G  , KC_H  , KC_J  , KC_K  , KC_L    , KC_SCLN , KC_QUOT ,           KC_ENT            , KC_END ,
           KC_LSFT          , KC_Z    , KC_X  , KC_C  , KC_V  , KC_B  , KC_N  , KC_M  , KC_COMM , KC_DOT  , KC_SLSH ,      KC_RSFT      , KC_UP   , MO(FN) ,
  KC_LCTL         , KC_LGUI , KC_LALT ,                         KC_SPC                          , MO(FN)  , MO(FN)  , MO(FN)  , KC_LEFT , KC_DOWN , KC_RGHT
),

//    ┌─────┬─────────┬─────────┬─────────┬─────┬─────┬──────┬─────────┬─────┬──────┬─────┬──────┬──────┬──────┬──────┬──────┐
//    │     │ DF(MAC) │ DF(WIN) │         │     │     │      │ QK_BOOT │     │      │     │ bRID │ bRIU │      │      │      │
//    ├─────┼─────────┼─────────┼─────────┼─────┼─────┼──────┼─────────┼─────┼──────┼─────┼──────┼──────┼──────┴──────┼──────┤
//    │     │         │         │         │     │     │      │         │     │      │     │ vold │ volu │             │      │
//    ├─────┼─────────┼─────────┼─────────┼─────┼─────┼──────┼─────────┼─────┼──────┼─────┼──────┼──────┼─────────────┼──────┤
//    │     │ MS_BTN1 │  MS_UP  │ MS_BTN2 │     │     │      │         │     │      │     │      │      │             │ f17  │
//    ├─────┼─────────┼─────────┼─────────┼─────┼─────┼──────┼─────────┼─────┼──────┼─────┼──────┼──────┴─────────────┼──────┤
//    │     │ MS_LEFT │ MS_DOWN │ MS_RGHT │     │     │ left │  down   │ up  │ rght │     │      │                    │      │
//    ├─────┴─────────┼─────────┼─────────┼─────┼─────┼──────┼─────────┼─────┼──────┼─────┼──────┼─────────────┬──────┼──────┤
//    │               │         │         │     │     │      │         │     │      │     │      │             │      │      │
//    ├─────┬─────────┼─────────┼─────────┴─────┴─────┴──────┴─────────┴─────┴──────┼─────┼──────┼──────┬──────┼──────┼──────┤
//    │     │         │         │                                                   │     │      │      │ mprv │ mply │ mnxt │
//    └─────┴─────────┴─────────┴───────────────────────────────────────────────────┴─────┴──────┴──────┴──────┴──────┴──────┘
[FN] = LAYOUT_75_ansi(
  _______ , DF(MAC) , DF(WIN) , _______ , _______ , _______ , _______ , QK_BOOT , _______ , _______ , _______ , KC_BRID , KC_BRIU , _______ , _______ , _______,
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , KC_VOLD , KC_VOLU ,      _______      , _______,
  _______ , MS_BTN1 , MS_UP   , MS_BTN2 , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,      _______      , KC_F17 ,
  _______ , MS_LEFT , MS_DOWN , MS_RGHT , _______ , _______ , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , _______ , _______ ,           _______           , _______,
       _______      , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,      _______      , _______ , _______,
  _______ , _______ , _______ ,                               _______                               , _______ , _______ , _______ , KC_MPRV , KC_MPLY , KC_MNXT
)
};

// Change default layer according to detected OS
bool process_detected_host_os_kb(os_variant_t detected_os) {
    if (!process_detected_host_os_user(detected_os)) {
        return false;
    }

    switch (detected_os) {
        case OS_WINDOWS:
        case OS_LINUX:
            set_single_default_layer(WIN);
            break;
        default:
            set_single_default_layer(MAC);
    }

    return true;
}

// Hotkeys

// ALT/GUI + B = Previous track
const key_override_t prev_track_override_alt = ko_make_with_layers(MOD_BIT(KC_LALT), KC_B, KC_MPRV, 1 << WIN);
const key_override_t prev_track_override_gui = ko_make_with_layers(MOD_BIT(KC_LGUI), KC_B, KC_MPRV, 1 << MAC);
// ALT/GUI + N = Next track
const key_override_t next_track_override_alt = ko_make_with_layers(MOD_BIT(KC_LALT), KC_N, KC_MNXT, 1 << WIN);
const key_override_t next_track_override_gui = ko_make_with_layers(MOD_BIT(KC_LGUI), KC_N, KC_MNXT, 1 << MAC);
// ALT/GUI + M = Play/Pause
const key_override_t play_pause_override_alt = ko_make_with_layers(MOD_BIT(KC_LALT), KC_M, KC_MPLY, 1 << WIN);
const key_override_t play_pause_override_gui = ko_make_with_layers(MOD_BIT(KC_LGUI), KC_M, KC_MPLY, 1 << MAC);
// ALT/GUI + H = Home
const key_override_t home_override_alt = ko_make_with_layers(MOD_BIT(KC_LALT), KC_H, KC_HOME, 1 << WIN);
const key_override_t home_override_gui = ko_make_with_layers(MOD_BIT(KC_LGUI), KC_H, KC_HOME, 1 << MAC);
// ALT/GUI + J = Page down
const key_override_t pgdown_override_alt = ko_make_with_layers(MOD_BIT(KC_LALT), KC_J, KC_PGDN, 1 << WIN);
const key_override_t pgdown_override_gui = ko_make_with_layers(MOD_BIT(KC_LGUI), KC_J, KC_PGDN, 1 << MAC);
// ALT/GUI + K = Page up
const key_override_t pgup_override_alt = ko_make_with_layers(MOD_BIT(KC_LALT), KC_K, KC_PGUP, 1 << WIN);
const key_override_t pgup_override_gui = ko_make_with_layers(MOD_BIT(KC_LGUI), KC_K, KC_PGUP, 1 << MAC);
// ALT/GUI + L = End
const key_override_t end_override_alt = ko_make_with_layers(MOD_BIT(KC_LALT), KC_L, KC_END, 1 << WIN);
const key_override_t end_override_gui = ko_make_with_layers(MOD_BIT(KC_LGUI), KC_L, KC_END, 1 << MAC);

const key_override_t *key_overrides[] = {
    &prev_track_override_alt,
    &prev_track_override_gui,
    &next_track_override_alt,
    &next_track_override_gui,
    &play_pause_override_alt,
    &play_pause_override_gui,
    &home_override_alt,
    &home_override_gui,
    &pgdown_override_alt,
    &pgdown_override_gui,
    &pgup_override_alt,
    &pgup_override_gui,
    &end_override_alt,
    &end_override_gui
};

