#include "src/game/envfx_snow.h"

const GeoLayout spiky_tree_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, tree_spiky_displaylist_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, tree_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout snow_tree_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, tree_snow_displaylist_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, tree_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout palm_tree_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, tree_palm_displaylist_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, tree_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout bubbly_tree_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, tree_bubbly_displaylist_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, tree_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
