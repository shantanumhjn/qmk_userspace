// Copyright 2023 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#undef OLED_DISPLAY_128X64
#define OLED_DISPLAY_128X128
#define OLED_BRIGHTNESS 200

#define CHARYBDIS_MINIMUM_DEFAULT_DPI     1200
#define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 200
#define CHARYBDIS_MINIMUM_SNIPING_DPI     400
#define CHARYBDIS_SNIPING_DPI_CONFIG_STEP 200

#define BOOTMAGIC_LITE_EEPROM_ROW          1
#define BOOTMAGIC_LITE_EEPROM_COLUMN       0
#define BOOTMAGIC_LITE_EEPROM_ROW_RIGHT    7
#define BOOTMAGIC_LITE_EEPROM_COLUMN_RIGHT 5

#define DRV2605L_FB_ERM_LRA   0
#define DRV2605L_GREETING     DRV2605L_EFFECT_750_MS_ALERT_100
#define DRV2605L_DEFAULT_MODE DRV2605L_EFFECT_BUZZ_1_100

#define DEBOUNCE 30

#undef EXTERNAL_EEPROM_SPI_CLOCK_DIVISOR
#define EXTERNAL_EEPROM_SPI_CLOCK_DIVISOR 8

#undef PMW33XX_SPI_DIVISOR
#define PMW33XX_SPI_DIVISOR 8