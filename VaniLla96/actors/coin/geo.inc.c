#include "src/game/envfx_snow.h"

const GeoLayout yellow_coin_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 50),
		GEO_OPEN_NODE(),
            GEO_ASM(0, geo_rotate_coin),
            GEO_ROTATION_NODE(0x00, 0, 0, 0),
            GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_000_displaylist_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout yellow_coin_no_shadow_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_OPEN_NODE(),
            GEO_ASM(0, geo_rotate_coin),
            GEO_ROTATION_NODE(0x00, 0, 0, 0),
            GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_000_displaylist_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout blue_coin_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 50),
		GEO_OPEN_NODE(),
            GEO_ASM(0, geo_rotate_coin),
            GEO_ROTATION_NODE(0x00, 0, 0, 0),
            GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_000_displaylist_blue_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout blue_coin_no_shadow_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_OPEN_NODE(),
            GEO_ASM(0, geo_rotate_coin),
            GEO_ROTATION_NODE(0x00, 0, 0, 0),
            GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_000_displaylist_blue_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout red_coin_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 50),
		GEO_OPEN_NODE(),
            GEO_ASM(0, geo_rotate_coin),
            GEO_ROTATION_NODE(0x00, 0, 0, 0),
            GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_000_displaylist_red_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout red_coin_no_shadow_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_OPEN_NODE(),
            GEO_ASM(0, geo_rotate_coin),
            GEO_ROTATION_NODE(0x00, 0, 0, 0),
            GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_000_displaylist_red_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, coin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
