Lights1 mushroom_1up_stem_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mushroom_1up_top_sides_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mushroom_1up_mushroom_top_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mushroom_1up_eyes_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx mushroom_1up_spots_side_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mushroom_1up_spots_side_rgba16[] = "actors/mushroom_1up/spots_side.rgba16";

Gfx mushroom_1up_top_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mushroom_1up_top_rgba16[] = "actors/mushroom_1up/top.rgba16";

Gfx mushroom_1up_eyes_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mushroom_1up_eyes_rgba16[] = "actors/mushroom_1up/eyes.rgba16";

Vtx mushroom_1up_000_displaylist_mesh_layer_1_vtx_0[37] = {
	{{{0, -27, -27},0, {1008, 496},{0x0, 0xDA, 0x87, 0xFF}}},
	{{{0, -3, -25},0, {1008, -16},{0x0, 0xA, 0x81, 0xFF}}},
	{{{22, -3, -12},0, {837, -16},{0x6E, 0xA, 0xC1, 0xFF}}},
	{{{23, -27, -13},0, {837, 496},{0x69, 0xDA, 0xC3, 0xFF}}},
	{{{22, -3, 12},0, {667, -16},{0x6E, 0xA, 0x3F, 0xFF}}},
	{{{23, -27, 13},0, {667, 496},{0x69, 0xDA, 0x3D, 0xFF}}},
	{{{0, -3, 25},0, {496, -16},{0x0, 0xA, 0x7F, 0xFF}}},
	{{{0, -27, 27},0, {496, 496},{0x0, 0xDA, 0x79, 0xFF}}},
	{{{-22, -3, 12},0, {325, -16},{0x92, 0xA, 0x3F, 0xFF}}},
	{{{-23, -27, 13},0, {325, 496},{0x97, 0xDA, 0x3D, 0xFF}}},
	{{{-22, -3, -12},0, {155, -16},{0x92, 0xA, 0xC1, 0xFF}}},
	{{{-23, -27, -13},0, {155, 496},{0x97, 0xDA, 0xC3, 0xFF}}},
	{{{0, -3, -25},0, {-16, -16},{0x0, 0xA, 0x81, 0xFF}}},
	{{{0, -27, -27},0, {-16, 496},{0x0, 0xDA, 0x87, 0xFF}}},
	{{{0, -34, -20},0, {-16, 496},{0x0, 0x95, 0xBC, 0xFF}}},
	{{{-18, -34, -10},0, {155, 496},{0xC5, 0x95, 0xDE, 0xFF}}},
	{{{-18, -34, -10},0, {155, 496},{0xC5, 0x95, 0xDE, 0xFF}}},
	{{{0, -34, -20},0, {-16, 496},{0x0, 0x95, 0xBC, 0xFF}}},
	{{{0, -37, 0},0, {155, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-23, -27, 13},0, {325, 496},{0x97, 0xDA, 0x3D, 0xFF}}},
	{{{-23, -27, -13},0, {155, 496},{0x97, 0xDA, 0xC3, 0xFF}}},
	{{{-18, -34, 10},0, {325, 496},{0xC5, 0x95, 0x22, 0xFF}}},
	{{{0, -37, 0},0, {325, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, -27, 27},0, {496, 496},{0x0, 0xDA, 0x79, 0xFF}}},
	{{{0, -34, 20},0, {496, 496},{0x0, 0x95, 0x44, 0xFF}}},
	{{{0, -37, 0},0, {496, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{23, -27, 13},0, {667, 496},{0x69, 0xDA, 0x3D, 0xFF}}},
	{{{18, -34, 10},0, {667, 496},{0x3B, 0x95, 0x22, 0xFF}}},
	{{{0, -37, 0},0, {667, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{23, -27, -13},0, {837, 496},{0x69, 0xDA, 0xC3, 0xFF}}},
	{{{18, -34, -10},0, {837, 496},{0x3B, 0x95, 0xDE, 0xFF}}},
	{{{0, -37, 0},0, {837, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, -27, -27},0, {1008, 496},{0x0, 0xDA, 0x87, 0xFF}}},
	{{{23, -27, -13},0, {837, 496},{0x69, 0xDA, 0xC3, 0xFF}}},
	{{{18, -34, -10},0, {837, 496},{0x3B, 0x95, 0xDE, 0xFF}}},
	{{{0, -34, -20},0, {1008, 496},{0x0, 0x95, 0xBC, 0xFF}}},
	{{{0, -37, 0},0, {1008, 496},{0x0, 0x81, 0x0, 0xFF}}},
};

Gfx mushroom_1up_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(mushroom_1up_000_displaylist_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSP1Triangle(11, 14, 15, 0),
	gsSPVertex(mushroom_1up_000_displaylist_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 0, 0),
	gsSP1Triangle(3, 0, 5, 0),
	gsSP1Triangle(5, 0, 6, 0),
	gsSP1Triangle(7, 3, 5, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(8, 5, 9, 0),
	gsSP1Triangle(10, 7, 8, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(11, 8, 12, 0),
	gsSP1Triangle(13, 10, 11, 0),
	gsSP1Triangle(13, 11, 14, 0),
	gsSP1Triangle(14, 11, 15, 0),
	gsSPVertex(mushroom_1up_000_displaylist_mesh_layer_1_vtx_0 + 32, 5, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mushroom_1up_000_displaylist_mesh_layer_1_vtx_1[35] = {
	{{{0, 25, -39},0, {1239, 351},{0x0, 0x2B, 0x88, 0xFF}}},
	{{{0, -8, -39},0, {1239, -19},{0x0, 0xB2, 0x9B, 0xFF}}},
	{{{-33, -8, -19},0, {993, -19},{0xA9, 0xB2, 0xCE, 0xFF}}},
	{{{-33, 25, -19},0, {993, 351},{0x98, 0x2B, 0xC4, 0xFF}}},
	{{{-33, -8, 19},0, {746, -19},{0xA9, 0xB2, 0x32, 0xFF}}},
	{{{-33, 25, 19},0, {746, 351},{0x98, 0x2B, 0x3C, 0xFF}}},
	{{{0, -8, 39},0, {500, -19},{0x0, 0xB2, 0x65, 0xFF}}},
	{{{0, 25, 39},0, {500, 351},{0x0, 0x2B, 0x78, 0xFF}}},
	{{{33, -8, 19},0, {254, -19},{0x57, 0xB2, 0x32, 0xFF}}},
	{{{33, 25, 19},0, {254, 351},{0x68, 0x2B, 0x3C, 0xFF}}},
	{{{33, -8, -19},0, {7, -19},{0x57, 0xB2, 0xCE, 0xFF}}},
	{{{33, 25, -19},0, {7, 351},{0x68, 0x2B, 0xC4, 0xFF}}},
	{{{0, -8, -39},0, {-239, -19},{0x0, 0xB2, 0x9B, 0xFF}}},
	{{{0, 25, -39},0, {-239, 351},{0x0, 0x2B, 0x88, 0xFF}}},
	{{{0, 35, -29},0, {-239, 351},{0x0, 0x6B, 0xBC, 0xFF}}},
	{{{25, 35, -15},0, {7, 351},{0x3B, 0x6B, 0xDE, 0xFF}}},
	{{{33, 25, 19},0, {254, 351},{0x68, 0x2B, 0x3C, 0xFF}}},
	{{{25, 35, -15},0, {7, 351},{0x3B, 0x6B, 0xDE, 0xFF}}},
	{{{25, 35, 15},0, {254, 351},{0x3B, 0x6B, 0x22, 0xFF}}},
	{{{0, 25, 39},0, {500, 351},{0x0, 0x2B, 0x78, 0xFF}}},
	{{{0, 35, 29},0, {500, 351},{0x0, 0x6B, 0x44, 0xFF}}},
	{{{-33, 25, 19},0, {746, 351},{0x98, 0x2B, 0x3C, 0xFF}}},
	{{{-25, 35, 15},0, {746, 351},{0xC5, 0x6B, 0x22, 0xFF}}},
	{{{-33, 25, -19},0, {993, 351},{0x98, 0x2B, 0xC4, 0xFF}}},
	{{{-25, 35, -15},0, {993, 351},{0xC5, 0x6B, 0xDE, 0xFF}}},
	{{{0, 25, -39},0, {1239, 351},{0x0, 0x2B, 0x88, 0xFF}}},
	{{{0, 35, -29},0, {1239, 351},{0x0, 0x6B, 0xBC, 0xFF}}},
	{{{-33, -8, 19},0, {1054, 439},{0xA9, 0xB2, 0x32, 0xFF}}},
	{{{-33, -8, -19},0, {1054, 102},{0xA9, 0xB2, 0xCE, 0xFF}}},
	{{{0, -8, -39},0, {469, -67},{0x0, 0xB2, 0x9B, 0xFF}}},
	{{{33, -8, 19},0, {-115, 439},{0x57, 0xB2, 0x32, 0xFF}}},
	{{{33, -8, -19},0, {-115, 102},{0x57, 0xB2, 0xCE, 0xFF}}},
	{{{33, -8, 19},0, {-115, 439},{0x57, 0xB2, 0x32, 0xFF}}},
	{{{0, -8, 39},0, {469, 608},{0x0, 0xB2, 0x65, 0xFF}}},
	{{{-33, -8, 19},0, {1054, 439},{0xA9, 0xB2, 0x32, 0xFF}}},
};

Gfx mushroom_1up_000_displaylist_mesh_layer_1_tri_1[] = {
	gsSPVertex(mushroom_1up_000_displaylist_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSP1Triangle(11, 14, 15, 0),
	gsSP1Triangle(9, 11, 15, 0),
	gsSPVertex(mushroom_1up_000_displaylist_mesh_layer_1_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(13, 14, 11, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(mushroom_1up_000_displaylist_mesh_layer_1_vtx_1 + 32, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mushroom_1up_000_displaylist_mesh_layer_1_vtx_2[29] = {
	{{{0, 35, -29},0, {113, 48},{0x0, 0x6B, 0xBC, 0xFF}}},
	{{{-25, 35, -15},0, {91, 48},{0xC5, 0x6B, 0xDE, 0xFF}}},
	{{{0, 39, 0},0, {113, 48},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{25, 35, -15},0, {5, 48},{0x3B, 0x6B, 0xDE, 0xFF}}},
	{{{0, 35, -29},0, {-17, 48},{0x0, 0x6B, 0xBC, 0xFF}}},
	{{{0, 39, 0},0, {5, 48},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-25, 35, 15},0, {70, 48},{0xC5, 0x6B, 0x22, 0xFF}}},
	{{{0, 39, 0},0, {91, 48},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 35, 29},0, {48, 48},{0x0, 0x6B, 0x44, 0xFF}}},
	{{{0, 39, 0},0, {70, 48},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{25, 35, 15},0, {26, 48},{0x3B, 0x6B, 0x22, 0xFF}}},
	{{{0, 39, 0},0, {48, 48},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 39, 0},0, {26, 48},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, -8, -39},0, {308, -32},{0x0, 0x82, 0xEF, 0xFF}}},
	{{{23, -10, -13},0, {250, -32},{0xF, 0x82, 0xF8, 0xFF}}},
	{{{0, -10, -27},0, {308, -32},{0x0, 0x82, 0xEF, 0xFF}}},
	{{{0, -8, -39},0, {308, -32},{0x0, 0x82, 0xEF, 0xFF}}},
	{{{33, -8, -19},0, {250, -32},{0xF, 0x82, 0xF8, 0xFF}}},
	{{{23, -10, -13},0, {250, -32},{0xF, 0x82, 0xF8, 0xFF}}},
	{{{23, -10, 13},0, {191, -32},{0xF, 0x82, 0x8, 0xFF}}},
	{{{33, -8, 19},0, {191, -32},{0xF, 0x82, 0x8, 0xFF}}},
	{{{0, -10, 27},0, {132, -32},{0x0, 0x82, 0x11, 0xFF}}},
	{{{0, -8, 39},0, {132, -32},{0x0, 0x82, 0x11, 0xFF}}},
	{{{-23, -10, 13},0, {74, -32},{0xF1, 0x82, 0x8, 0xFF}}},
	{{{-33, -8, 19},0, {74, -32},{0xF1, 0x82, 0x8, 0xFF}}},
	{{{-23, -10, -13},0, {15, -32},{0xF1, 0x82, 0xF8, 0xFF}}},
	{{{-33, -8, -19},0, {15, -32},{0xF1, 0x82, 0xF8, 0xFF}}},
	{{{0, -10, -27},0, {-43, -32},{0x0, 0x82, 0xEF, 0xFF}}},
	{{{0, -8, -39},0, {-43, -32},{0x0, 0x82, 0xEF, 0xFF}}},
};

Gfx mushroom_1up_000_displaylist_mesh_layer_1_tri_2[] = {
	gsSPVertex(mushroom_1up_000_displaylist_mesh_layer_1_vtx_2 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(1, 6, 7, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(10, 3, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(mushroom_1up_000_displaylist_mesh_layer_1_vtx_2 + 16, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSPEndDisplayList(),
};

Vtx mushroom_1up_000_displaylist_mesh_layer_4_vtx_0[4] = {
	{{{-17, -29, 27},0, {-16, 496},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{17, -29, 27},0, {1008, 496},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{17, -10, 27},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-17, -10, 27},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx mushroom_1up_000_displaylist_mesh_layer_4_tri_0[] = {
	gsSPVertex(mushroom_1up_000_displaylist_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_mushroom_1up_stem[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(mushroom_1up_stem_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mushroom_1up_top_sides[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, mushroom_1up_spots_side_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 60),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 60),
	gsSPSetLights1(mushroom_1up_top_sides_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mushroom_1up_mushroom_top[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, mushroom_1up_top_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 2, 0, G_TX_WRAP | G_TX_NOMIRROR, 2, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 12, 12),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 2, 0, G_TX_WRAP | G_TX_NOMIRROR, 2, 0),
	gsDPSetTileSize(0, 0, 0, 12, 12),
	gsSPSetLights1(mushroom_1up_mushroom_top_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mushroom_1up_eyes[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, mushroom_1up_eyes_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 60),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 60),
	gsSPSetLights1(mushroom_1up_eyes_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mushroom_1up_eyes[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mushroom_1up_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_mushroom_1up_stem),
	gsSPDisplayList(mushroom_1up_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mushroom_1up_top_sides),
	gsSPDisplayList(mushroom_1up_000_displaylist_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mushroom_1up_mushroom_top),
	gsSPDisplayList(mushroom_1up_000_displaylist_mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx mushroom_1up_000_displaylist_mesh_layer_4[] = {
	gsSPDisplayList(mat_mushroom_1up_eyes),
	gsSPDisplayList(mushroom_1up_000_displaylist_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mushroom_1up_eyes),
	gsSPEndDisplayList(),
};

Gfx mushroom_1up_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

