#include "nyquist.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
};

#define KC_ KC_TRNS
#define _______ KC_TRNS

#define KC_LOWR MO(_LOWER)
#define KC_RASE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = KC_KEYMAP(
  //,----+----+----+----+----+----.    ,----+----+----+----+----+----.
     ESC , 1  , 2  , 3  , 4  , 5  ,      6  , 7  , 8  , 9  , 0  ,BSPC,
  //|----+----+----+----+----+----|    |----+----+----+----+----+----|
     TAB , Q  , W  , E  , R  , T  ,      Y  , U  , I  , O  , P  ,BSLS,
  //|----+----+----+----+----+----|    |----+----+----+----+----+----|
     LCTL, A  , S  , D  , F  , G  ,      H  , J  , K  , L  ,SCLN,ENT ,
  //|----+----+----+----+----+----|    |----+----+----+----+----+----|
     LSFT, Z  , X  , C  , V  , B  ,      N  , M  ,COMM,DOT ,SLSH,RSFT,
  //|----+----+----+----+----+----|    |----+----+----+----+----+----|
     LGUI,LALT,GRV ,QUOT,LOWR,SPC ,     SPC ,RASE,MINS,EQL ,RALT,APP 
  //`----+----+----+----+----+----'    `----+----+----+----+----+----'
  ),

  [_LOWER] = KC_KEYMAP(
  //,----+----+----+----+----+----.    ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,         ,    ,    ,    ,INS ,DEL ,
  //|----+----+----+----+----+----|    |----+----+----+----+----+----|
     CAPS,    ,    ,    ,    ,    ,     PSCR,SLCK,PAUS,LBRC,RBRC,PIPE,
  //|----+----+----+----+----+----|    |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,     LEFT,DOWN, UP ,RGHT,    ,    ,
  //|----+----+----+----+----+----|    |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,     HOME,PGDN,PGUP,END ,    ,    ,
  //|----+----+----+----+----+----|    |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,         ,    ,    ,    ,    ,RGUI
  //`----+----+----+----+----+----'    `----+----+----+----+----+----'
  ),

  [_RAISE] = KC_KEYMAP(
  //,----+----+----+----+----+----.    ,----+----+----+----+----+----.
     DEL , F1 , F2 , F3 , F4 , F5 ,      F6 , F7 , F8 , F9 ,F10 ,    ,
  //|----+----+----+----+----+----|    |----+----+----+----+----+----|
     INS ,    ,    ,    ,    ,    ,         ,    ,    ,F11 ,F12 ,    ,
  //|----+----+----+----+----+----|    |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,         ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|    |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,         ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|    |----+----+----+----+----+----|
     APP ,    ,    ,    ,    ,    ,         ,    ,    ,    ,    ,    
  //`----+----+----+----+----+----'    `----+----+----+----+----+----'
  )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
