
# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
MOUSEKEY_ENABLE =  yes      # Mouse keys(+4700)
TAP_DANCE_ENABLE = no

RGBLIGHT_ENABLE = yes       # LED underglow (Enable WS2812 RGB underlight.)
LED_ANIMATIONS = yes        # LED animations

IOS_DEVICE_ENABLE = no      # connect to IOS device (iPad,iPhone)

ifeq ($(strip $(LED_ANIMATIONS)), yes)
    # OPT_DEFS += -DRGBLIGHT_ANIMATIONS
    OPT_DEFS += -DLED_ANIMATIONS
endif

ifeq ($(strip $(IOS_DEVICE_ENABLE)), yes)
    OPT_DEFS += -DIOS_DEVICE_ENABLE
endif

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend

VIA_ENABLE = yes
