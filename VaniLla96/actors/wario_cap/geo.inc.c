const GeoLayout warios_cap_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 75),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(10, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(1, warios_cap_000_displaylist_mesh),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, warios_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, warios_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, warios_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, warios_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, warios_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, warios_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, warios_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, warios_cap_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout warios_metal_cap_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 75),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(10, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(1, warios_metal_cap_000_displaylist_mesh),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, warios_metal_cap_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
				
const GeoLayout warios_wing_cap_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 75),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(10, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(4, warios_wing_cap_000_displaylist_mesh),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, warios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, warios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, warios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, warios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, warios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, warios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, warios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, warios_wing_cap_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

// 0x16000DA8
const GeoLayout warios_winged_metal_cap_geo[] = {
  	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 75),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(10, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(1, warios_metal_cap_000_displaylist_mesh),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, warios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, warios_metal_cap_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
