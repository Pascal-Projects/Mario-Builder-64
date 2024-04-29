#ifndef MENU_HEADER_H
#define MENU_HEADER_H

#include "types.h"
#include "src/game/game_init.h"

// geo
// extern const GeoLayout geo_menu_mario_save_button[];
// extern const GeoLayout geo_menu_mario_save_button_fade[];
// extern const GeoLayout geo_menu_mario_new_button[];
// extern const GeoLayout geo_menu_mario_new_button_fade[];
// extern const GeoLayout geo_menu_erase_button[];
// extern const GeoLayout geo_menu_copy_button[];
// extern const GeoLayout geo_menu_file_button[];
// extern const GeoLayout geo_menu_score_button[];
// extern const GeoLayout geo_menu_sound_button[];
// extern const GeoLayout geo_menu_generic_button[];
extern const GeoLayout geo_menu_file_select_strings_and_menu_cursor[];
// extern const GeoLayout geo_menu_act_selector_strings[];

// leveldata
extern const Gfx dl_menu_mario_save_button_base[];
extern const Gfx dl_menu_mario_new_button_base[];
extern const Gfx dl_menu_save_button_back[];
extern const Gfx dl_menu_save_button_fade_back[];
extern const Gfx dl_menu_erase_button[];
extern const Gfx dl_menu_copy_button[];
extern const Gfx dl_menu_file_button[];
extern const Gfx dl_menu_score_button[];
extern const Gfx dl_menu_sound_button[];
extern const Gfx dl_menu_generic_button[];
extern const Gfx dl_menu_idle_hand[];
extern const Gfx dl_menu_grabbing_hand[];
extern const Texture *const menu_hud_lut[];
extern const Texture *const menu_font_lut[];
extern const Gfx dl_menu_ia8_text_begin[];
extern const Gfx dl_menu_ia8_text_end[];
extern const Gfx dl_menu_rgba16_wood_course[];
extern const Gfx dl_menu_texture_course_upper[];
extern const Gfx dl_menu_texture_niveau_upper[];
extern const Gfx dl_menu_texture_kurs_upper[];
extern const Collision main_menu_seg7_collision[];
#ifdef VERSION_EU
extern const u8 eu_course_strings_en_table[];
extern const u8 eu_course_strings_fr_table[];
extern const u8 eu_course_strings_de_table[];
#endif

// script
extern const LevelScript level_main_menu_entry_file_select[];
extern const LevelScript level_main_menu_entry_act_select[];

#include "levels/menu/replaced/geo_header.h"

#include "levels/menu/mm_btn2/header.h"

#include "levels/menu/mm_btn_sm/header.h"

#include "levels/menu/mbg/geo_header.h"

#include "levels/menu/mm_btn_lg/header.h"

#include "levels/menu/mptng/header.h"

#include "levels/menu/pl_scard/header.h"
#include "levels/menu/rovert_logo/header.h"

#include "levels/menu/bigpainting/header.h"

extern FILINFO cmm_level_entries[MAX_FILES];
extern u16 cmm_level_entry_piktcher[MAX_FILES][64][64];


#endif
