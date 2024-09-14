// Copyright 2024 Santosh Kumar (@santosh)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VIAL_KEYBOARD_UID {0xA5, 0xDC, 0x6E, 0x80, 0x28, 0xE6, 0xF3, 0xB4}

#define DYNAMIC_KEYMAP_LAYER_COUNT 10

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

// #define IOS_DEVICE_ENABLE


#ifndef IOS_DEVICE_ENABLE
  // USB_MAX_POWER_CONSUMPTION value for this keyboard
  #define USB_MAX_POWER_CONSUMPTION 400
#else
  // fix iPhone and iPad power adapter issue
  // iOS device need lessthan 100
  #define USB_MAX_POWER_CONSUMPTION 100
#endif


#define QUICK_TAP_TERM 0
#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif
#define PERMISSIVE_HOLD


#define RGBLIGHT_SLEEP
//
#define RGBLIGHT_LAYERS

/* ws2812 RGB LED */
#define WS2812_DI_PIN D3


#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM

	#define RGBLIGHT_EFFECT_BREATHING
	#define RGBLIGHT_EFFECT_RAINBOW_MOOD
	#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
	#define RGBLIGHT_EFFECT_SNAKE
	#define RGBLIGHT_EFFECT_KNIGHT
	#define RGBLIGHT_EFFECT_CHRISTMAS
	#define RGBLIGHT_EFFECT_STATIC_GRADIENT
	//#define RGBLIGHT_EFFECT_RGB_TEST
	#define RGBLIGHT_EFFECT_ALTERNATING
	#define RGBLIGHT_EFFECT_TWINKLE

    #define RGBLED_NUM 72
	//#define RGBLED_SPLIT
	#define RGBLED_SPLIT { 36, 36 } // haven't figured out how to use this yet

	//#define RGBLED_NUM 30
  #ifndef IOS_DEVICE_ENABLE
    #define RGBLIGHT_LIMIT_VAL 200
    #define RGBLIGHT_VAL_STEP 17
  #else
    #define RGBLIGHT_LIMIT_VAL 35
    #define RGBLIGHT_VAL_STEP 4
  #endif
  #ifndef RGBLIGHT_HUE_STEP
    #define RGBLIGHT_HUE_STEP 10
  #endif
  #ifndef RGBLIGHT_SAT_STEP
    #define RGBLIGHT_SAT_STEP 17
  #endif
#endif

#ifdef RGB_MATRIX_ENABLE

// #   define RGB_MATRIX_LED_COUNT 72
// #   undef  RGB_MATRIX_SPLIT
// #   define RGB_MATRIX_SPLIT {36,36}
#   define SPLIT_TRANSPORT_MIRROR

#   define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
#   define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
#   define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #   define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)

#ifndef IOS_DEVICE_ENABLE
#   define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#   define RGB_MATRIX_VAL_STEP 8
#else
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 20
#    define RGB_MATRIX_VAL_STEP 4
#endif

// #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_GRADIENT_LEFT_RIGHT

#   define RGB_MATRIX_HUE_STEP 8
#   define RGB_MATRIX_SAT_STEP 8
#   define RGB_MATRIX_SPD_STEP 10

#   define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
 #   define ENABLE_RGB_MATRIX_ALPHAS_MODS
 #   define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
 #   define ENABLE_RGB_MATRIX_BREATHING
 #   define ENABLE_RGB_MATRIX_CYCLE_ALL
 #   define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
 #   define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
 #   define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
 #   define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
 #   define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
 #   define ENABLE_RGB_MATRIX_DUAL_BEACON
 #   define ENABLE_RGB_MATRIX_RAINBOW_BEACON
 #   define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
 #   define ENABLE_RGB_MATRIX_RAINDROPS
 #   define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
 #   define ENABLE_RGB_MATRIX_TYPING_HEATMAP
 #   define ENABLE_RGB_MATRIX_DIGITAL_RAIN
 #   define ENABLE_RGB_MATRIX_SOLID_REACTIVE
 #   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
 #   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
 #   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
 #   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
 #   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
 #   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
 #   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
 #   define ENABLE_RGB_MATRIX_SPLASH
 #   define ENABLE_RGB_MATRIX_MULTISPLASH
 #   define ENABLE_RGB_MATRIX_SOLID_SPLASH
 #   define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif  // RGB_MATRIX_ENABLE

#ifdef ENCODER_RESOLUTION
  #undef ENCODER_RESOLUTION
  #define ENCODER_RESOLUTION 4
#endif // ENCODER_RESOLUTION


#ifdef OLED_ENABLE
  #define SPLIT_WPM_ENABLE
  #define SPLIT_OLED_ENABLE
#endif

// auto shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
// #define AUTO_SHIFT_NO_SETUP
