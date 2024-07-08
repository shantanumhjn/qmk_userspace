// Copyright 2024 Shantanu Mahajan

#pragma once

#define XXX KC_NO

#define LAYOUT_miryoku(\
K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34, K35, K36, K37, N38, N39 \
) \
LAYOUT_ortho_4x10( \
K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
XXX, XXX, K32, K33, K34, K35, K36, K37, XXX, XXX \
)

#define MASTER_RIGHT

#ifdef RGB_MATRIX_ENABLE
  #define RGB_MATRIX_SPLIT { 20, 20 }
  #define SPLIT_TRANSPORT_MIRROR
  #define SPLIT_ACTIVITY_ENABLE
  #define RGB_MATRIX_KEYPRESSES
  #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
  #define RGB_DISABLE_WHEN_USB_SUSPENDED
  #undef RGB_MATRIX_MAXIMUM_BRIGHTNESS
  #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255
  #define RGB_MATRIX_LED_FLUSH_LIMIT 16
  #define RGB_MATRIX_HUE_STEP 8
  #define RGB_MATRIX_SAT_STEP 8
//   #define RGB_MATRIX_VAL_STEP 5
  #define RGB_MATRIX_SPD_STEP 10
  #define RGB_MATRIX_TIMEOUT 300000                     // https://docs.qmk.fm/#/feature_rgb_matrix?id=additional-configh-options
  // #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_BREATHING  // do not know what this does

  // Effects
  #define ENABLE_RGB_MATRIX_ALPHAS_MODS	                          // Enables RGB_MATRIX_ALPHAS_MODS
  #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN	                    // Enables RGB_MATRIX_GRADIENT_UP_DOWN
  #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT	                  // Enables RGB_MATRIX_GRADIENT_LEFT_RIGHT
  #define ENABLE_RGB_MATRIX_BREATHING	                            // Enables RGB_MATRIX_BREATHING
  #define ENABLE_RGB_MATRIX_BAND_SAT	                            // Enables RGB_MATRIX_BAND_SAT
  #define ENABLE_RGB_MATRIX_BAND_VAL	                            // Enables RGB_MATRIX_BAND_VAL
  #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT	                    // Enables RGB_MATRIX_BAND_PINWHEEL_SAT
  #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL	                    // Enables RGB_MATRIX_BAND_PINWHEEL_VAL
  #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT	                      // Enables RGB_MATRIX_BAND_SPIRAL_SAT
  #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL	                      // Enables RGB_MATRIX_BAND_SPIRAL_VAL
  #define ENABLE_RGB_MATRIX_CYCLE_ALL	                            // Enables RGB_MATRIX_CYCLE_ALL
  #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT	                    // Enables RGB_MATRIX_CYCLE_LEFT_RIGHT
  #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN	                        // Enables RGB_MATRIX_CYCLE_UP_DOWN
  #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON	              // Enables RGB_MATRIX_RAINBOW_MOVING_CHEVRON
  #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN                          // Enables RGB_MATRIX_CYCLE_OUT_IN
  #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL	                    // Enables RGB_MATRIX_CYCLE_OUT_IN_DUAL
  #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL	                      // Enables RGB_MATRIX_CYCLE_PINWHEEL
  #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL	                        // Enables RGB_MATRIX_CYCLE_SPIRAL
  #define ENABLE_RGB_MATRIX_DUAL_BEACON	                          // Enables RGB_MATRIX_DUAL_BEACON
  #define ENABLE_RGB_MATRIX_RAINBOW_BEACON	                      // Enables RGB_MATRIX_RAINBOW_BEACON
  #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS	                    // Enables RGB_MATRIX_RAINBOW_PINWHEELS
  #define ENABLE_RGB_MATRIX_RAINDROPS	                            // Enables RGB_MATRIX_RAINDROPS
  #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS                   // Enables RGB_MATRIX_JELLYBEAN_RAINDROPS
  #define ENABLE_RGB_MATRIX_HUE_BREATHING                         // Enables RGB_MATRIX_HUE_BREATHING
  #define ENABLE_RGB_MATRIX_HUE_PENDULUM	                        // Enables RGB_MATRIX_HUE_PENDULUM
  #define ENABLE_RGB_MATRIX_HUE_WAVE	                            // Enables RGB_MATRIX_HUE_WAVE 
  #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL	                        // Enables RGB_MATRIX_PIXEL_FRACTAL
  #define ENABLE_RGB_MATRIX_PIXEL_FLOW	                          // Enables RGB_MATRIX_PIXEL_FLOW
  #define ENABLE_RGB_MATRIX_PIXEL_RAIN	                          // Enables RGB_MATRIX_PIXEL_RAIN


  // These modes also require the RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES define to be available.
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE	                // Enables RGB_MATRIX_SOLID_REACTIVE_SIMPLE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE	                      // Enables RGB_MATRIX_SOLID_REACTIVE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE	                  // Enables RGB_MATRIX_SOLID_REACTIVE_WIDE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE	            // Enables RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS	                // Enables RGB_MATRIX_SOLID_REACTIVE_CROSS
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS	            // Enables RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS	                // Enables RGB_MATRIX_SOLID_REACTIVE_NEXUS
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS	            // Enables RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
  #define ENABLE_RGB_MATRIX_SPLASH	                              // Enables RGB_MATRIX_SPLASH
  #define ENABLE_RGB_MATRIX_MULTISPLASH	                          // Enables RGB_MATRIX_MULTISPLASH
  #define ENABLE_RGB_MATRIX_SOLID_SPLASH	                        // Enables RGB_MATRIX_SOLID_SPLASH
  #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH	                    // Enables RGB_MATRIX_SOLID_MULTISPLASH

  // These modes also require the RGB_MATRIX_FRAMEBUFFER_EFFECTS define to be available.
  #define ENABLE_RGB_MATRIX_TYPING_HEATMAP	                      // Enables RGB_MATRIX_TYPING_HEATMAP
  #define ENABLE_RGB_MATRIX_DIGITAL_RAIN	                        // Enables RGB_MATRIX_DIGITAL_RAIN

  #define ENABLE_RGB_MATRIX_EFFECT_MAX
#endif