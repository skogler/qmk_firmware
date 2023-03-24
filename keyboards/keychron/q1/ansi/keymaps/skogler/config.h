#pragma once

#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX, UNICODE_MODE_WINCOMPOSE

#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_NONE
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define CAPS_LOCK_INDICATOR_COLOR RGB_RED
#define CAPS_LOCK_INDICATOR_LIGHT_ALPHAS
#define FN_LAYER_TRANSPARENT_KEYS_OFF
#endif
