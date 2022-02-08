Lights1 boo_key_coin_luigi_right_v4_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 boo_key_coin_luigi_left_v4_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx boo_key_coin_luigi_right_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 boo_key_coin_luigi_right_rgba32[] = {
	#include "actors/boo_key/coin_luigi_right.rgba32.inc.c"
};

Gfx boo_key_coin_luigi_left_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 boo_key_coin_luigi_left_rgba32[] = {
	#include "actors/boo_key/coin_luigi_left.rgba32.inc.c"
};

Vtx boo_key_skinned_001_mesh_layer_1_vtx_0[10] = {
	{{{-47, 35, -5},0, {-31, 1008},{0x9D, 0x0, 0xB0, 0xFF}}},
	{{{-33, 68, -5},0, {-322, 295},{0xBA, 0x46, 0xB0, 0xFF}}},
	{{{0, 82, -5},0, {-1025, -1},{0x0, 0x63, 0xB0, 0xFF}}},
	{{{-33, 2, -5},0, {-322, 1721},{0xBA, 0xBA, 0xB0, 0xFF}}},
	{{{0, -12, -5},0, {-1025, 2017},{0x0, 0x9D, 0xB0, 0xFF}}},
	{{{47, 35, 5},0, {-31, 1008},{0x63, 0x0, 0x50, 0xFF}}},
	{{{33, 68, 5},0, {-322, 295},{0x46, 0x46, 0x50, 0xFF}}},
	{{{0, 82, 5},0, {-1025, -1},{0x0, 0x63, 0x50, 0xFF}}},
	{{{33, 2, 5},0, {-322, 1721},{0x46, 0xBA, 0x50, 0xFF}}},
	{{{0, -12, 5},0, {-1025, 2017},{0x0, 0x9D, 0x50, 0xFF}}},
};

Gfx boo_key_skinned_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(boo_key_skinned_001_mesh_layer_1_vtx_0 + 0, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSPEndDisplayList(),
};

Vtx boo_key_skinned_001_mesh_layer_1_vtx_1[40] = {
	{{{47, 35, -5},0, {-1, 1008},{0x63, 0x0, 0xB0, 0xFF}}},
	{{{33, 2, -5},0, {290, 1721},{0x46, 0xBA, 0xB0, 0xFF}}},
	{{{0, -12, -5},0, {993, 2017},{0x0, 0x9D, 0xB0, 0xFF}}},
	{{{33, 68, -5},0, {290, 295},{0x46, 0x46, 0xB0, 0xFF}}},
	{{{0, 82, -5},0, {993, -1},{0x0, 0x63, 0xB0, 0xFF}}},
	{{{-47, 35, 5},0, {-1, 1008},{0x9D, 0x0, 0x50, 0xFF}}},
	{{{-33, 2, 5},0, {290, 1721},{0xBA, 0xBA, 0x50, 0xFF}}},
	{{{0, -12, 5},0, {993, 2017},{0x0, 0x9D, 0x50, 0xFF}}},
	{{{-33, 68, 5},0, {290, 295},{0xBA, 0x46, 0x50, 0xFF}}},
	{{{0, 82, 5},0, {993, -1},{0x0, 0x63, 0x50, 0xFF}}},
	{{{47, 35, 5},0, {-16, 2032},{0x63, 0x0, 0x50, 0xFF}}},
	{{{33, 2, 5},0, {-16, 2032},{0x46, 0xBA, 0x50, 0xFF}}},
	{{{33, 2, -5},0, {-16, 2032},{0x46, 0xBA, 0xB0, 0xFF}}},
	{{{47, 35, -5},0, {-16, 2032},{0x63, 0x0, 0xB0, 0xFF}}},
	{{{33, 2, 5},0, {-16, 2032},{0x46, 0xBA, 0x50, 0xFF}}},
	{{{0, -12, 5},0, {-16, 2032},{0x0, 0x9D, 0x50, 0xFF}}},
	{{{0, -12, -5},0, {-16, 2032},{0x0, 0x9D, 0xB0, 0xFF}}},
	{{{33, 2, -5},0, {-16, 2032},{0x46, 0xBA, 0xB0, 0xFF}}},
	{{{33, 68, 5},0, {-16, 2032},{0x46, 0x46, 0x50, 0xFF}}},
	{{{47, 35, 5},0, {-16, 2032},{0x63, 0x0, 0x50, 0xFF}}},
	{{{47, 35, -5},0, {-16, 2032},{0x63, 0x0, 0xB0, 0xFF}}},
	{{{33, 68, -5},0, {-16, 2032},{0x46, 0x46, 0xB0, 0xFF}}},
	{{{-33, 2, 5},0, {-16, 2032},{0xBA, 0xBA, 0x50, 0xFF}}},
	{{{-33, 2, -5},0, {-16, 2032},{0xBA, 0xBA, 0xB0, 0xFF}}},
	{{{0, -12, -5},0, {-16, 2032},{0x0, 0x9D, 0xB0, 0xFF}}},
	{{{0, 82, 5},0, {-16, 2032},{0x0, 0x63, 0x50, 0xFF}}},
	{{{33, 68, -5},0, {-16, 2032},{0x46, 0x46, 0xB0, 0xFF}}},
	{{{0, 82, -5},0, {-16, 2032},{0x0, 0x63, 0xB0, 0xFF}}},
	{{{-47, 35, 5},0, {-16, 2032},{0x9D, 0x0, 0x50, 0xFF}}},
	{{{-47, 35, -5},0, {-16, 2032},{0x9D, 0x0, 0xB0, 0xFF}}},
	{{{-33, 2, 5},0, {-16, 2032},{0xBA, 0xBA, 0x50, 0xFF}}},
	{{{-47, 35, -5},0, {-16, 2032},{0x9D, 0x0, 0xB0, 0xFF}}},
	{{{-33, 2, -5},0, {-16, 2032},{0xBA, 0xBA, 0xB0, 0xFF}}},
	{{{-33, 68, 5},0, {-16, 2032},{0xBA, 0x46, 0x50, 0xFF}}},
	{{{0, 82, 5},0, {-16, 2032},{0x0, 0x63, 0x50, 0xFF}}},
	{{{0, 82, -5},0, {-16, 2032},{0x0, 0x63, 0xB0, 0xFF}}},
	{{{-33, 68, -5},0, {-16, 2032},{0xBA, 0x46, 0xB0, 0xFF}}},
	{{{-47, 35, 5},0, {-16, 2032},{0x9D, 0x0, 0x50, 0xFF}}},
	{{{-33, 68, -5},0, {-16, 2032},{0xBA, 0x46, 0xB0, 0xFF}}},
	{{{-47, 35, -5},0, {-16, 2032},{0x9D, 0x0, 0xB0, 0xFF}}},
};

Gfx boo_key_skinned_001_mesh_layer_1_tri_1[] = {
	gsSPVertex(boo_key_skinned_001_mesh_layer_1_vtx_1 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(boo_key_skinned_001_mesh_layer_1_vtx_1 + 14, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(1, 8, 9, 0),
	gsSP1Triangle(1, 9, 10, 0),
	gsSP1Triangle(11, 4, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(8, 14, 15, 0),
	gsSPVertex(boo_key_skinned_001_mesh_layer_1_vtx_1 + 30, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 3, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSPEndDisplayList(),
};


Gfx mat_boo_key_coin_luigi_right_v4[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 1, boo_key_coin_luigi_right_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(boo_key_coin_luigi_right_v4_lights),
	gsSPEndDisplayList(),
};

Gfx mat_boo_key_coin_luigi_left_v4[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 1, boo_key_coin_luigi_left_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(boo_key_coin_luigi_left_v4_lights),
	gsSPEndDisplayList(),
};

Gfx boo_key_skinned_001_mesh_layer_1[] = {
	gsSPDisplayList(mat_boo_key_coin_luigi_right_v4),
	gsSPDisplayList(boo_key_skinned_001_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_boo_key_coin_luigi_left_v4),
	gsSPDisplayList(boo_key_skinned_001_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx boo_key_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

