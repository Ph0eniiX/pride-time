#include <pebble.h>
#include "cfg.h"
#include "../main.h"

extern ClaySettings settings;

static void set_defaults() {
    settings.bgColor = GColorBlack;
    settings.mainColor = GColorLightGray;
    settings.accColor = GColorBlack;
    settings.BottomShadow = true;
    settings.flag_number = 2;
    settings.spacing = 2;
    settings.timeFant = fonts_get_system_font(FONT_KEY_LECO_42_NUMBERS);
}

void load_settings() {
    set_defaults();
    persist_read_data(SETTINGS_KEY, &settings, sizeof(settings));
}

void save_settings() {
    persist_write_data(SETTINGS_KEY, &settings, sizeof(settings));
}