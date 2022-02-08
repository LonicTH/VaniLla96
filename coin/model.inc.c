Lights1 coin_yellow_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx coin_yellow_face_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 coin_yellow_face_rgba16[] = {
	#include "actors/coin/yellow_face.rgba16.inc.c"
};

Gfx coin_red_face_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 coin_red_face_rgba16[] = {
	#include "actors/coin/red_face.rgba16.inc.c"
};

Gfx coin_blue_face_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 coin_blue_face_rgba16[] = {
	#include "actors/coin/blue_face.rgba16.inc.c"
};

Vtx coin_000_displaylist_mesh_layer_1_vtx_0[48] = {
	{{{0, 62, -4},0, {1969, -6},{0x30, 0x76, 0x0, 0xFF}}},
	{{{0, 62, 4},0, {1969, -995},{0x30, 0x76, 0x0, 0xFF}}},
	{{{22, 53, 4},0, {1722, -995},{0x30, 0x76, 0x0, 0xFF}}},
	{{{22, 53, -4},0, {1722, -6},{0x30, 0x76, 0x0, 0xFF}}},
	{{{-22, 53, -4},0, {238, -6},{0xD0, 0x76, 0x0, 0xFF}}},
	{{{0, 62, 4},0, {-10, -995},{0xD0, 0x76, 0x0, 0xFF}}},
	{{{0, 62, -4},0, {-10, -6},{0xD0, 0x76, 0x0, 0xFF}}},
	{{{-22, 53, 4},0, {238, -995},{0xD0, 0x76, 0x0, 0xFF}}},
	{{{-22, 53, -4},0, {155, 153},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 62, -4},0, {491, 14},{0x0, 0x0, 0x81, 0xFF}}},
	{{{22, 53, -4},0, {826, 153},{0x0, 0x0, 0x81, 0xFF}}},
	{{{22, 8, -4},0, {826, 825},{0x0, 0x0, 0x81, 0xFF}}},
	{{{32, 31, -4},0, {965, 489},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-22, 8, -4},0, {155, 825},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -1, -4},0, {491, 964},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-32, 31, -4},0, {16, 489},{0x0, 0x0, 0x81, 0xFF}}},
	{{{32, 31, 4},0, {960, 489},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{22, 53, 4},0, {821, 153},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 62, 4},0, {485, 14},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-32, 31, 4},0, {10, 489},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-22, 53, 4},0, {149, 153},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -1, 4},0, {485, 964},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-22, 8, 4},0, {149, 825},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{22, 8, 4},0, {821, 825},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{22, 53, -4},0, {1722, -6},{0x76, 0x30, 0x0, 0xFF}}},
	{{{22, 53, 4},0, {1722, -995},{0x76, 0x30, 0x0, 0xFF}}},
	{{{32, 31, 4},0, {1475, -995},{0x76, 0x30, 0x0, 0xFF}}},
	{{{32, 31, -4},0, {1475, -6},{0x76, 0x30, 0x0, 0xFF}}},
	{{{32, 31, -4},0, {1475, -6},{0x76, 0xD0, 0x0, 0xFF}}},
	{{{32, 31, 4},0, {1475, -995},{0x76, 0xD0, 0x0, 0xFF}}},
	{{{22, 8, 4},0, {1227, -995},{0x76, 0xD0, 0x0, 0xFF}}},
	{{{22, 8, -4},0, {1227, -6},{0x76, 0xD0, 0x0, 0xFF}}},
	{{{22, 8, -4},0, {1227, -6},{0x30, 0x8A, 0x0, 0xFF}}},
	{{{22, 8, 4},0, {1227, -995},{0x30, 0x8A, 0x0, 0xFF}}},
	{{{0, -1, 4},0, {980, -995},{0x30, 0x8A, 0x0, 0xFF}}},
	{{{0, -1, -4},0, {980, -6},{0x30, 0x8A, 0x0, 0xFF}}},
	{{{0, -1, -4},0, {980, -6},{0xD0, 0x8A, 0x0, 0xFF}}},
	{{{0, -1, 4},0, {980, -995},{0xD0, 0x8A, 0x0, 0xFF}}},
	{{{-22, 8, 4},0, {732, -995},{0xD0, 0x8A, 0x0, 0xFF}}},
	{{{-22, 8, -4},0, {732, -6},{0xD0, 0x8A, 0x0, 0xFF}}},
	{{{-22, 8, -4},0, {732, -6},{0x8A, 0xD0, 0x0, 0xFF}}},
	{{{-22, 8, 4},0, {732, -995},{0x8A, 0xD0, 0x0, 0xFF}}},
	{{{-32, 31, 4},0, {485, -995},{0x8A, 0xD0, 0x0, 0xFF}}},
	{{{-32, 31, -4},0, {485, -6},{0x8A, 0xD0, 0x0, 0xFF}}},
	{{{-32, 31, -4},0, {485, -6},{0x8A, 0x30, 0x0, 0xFF}}},
	{{{-32, 31, 4},0, {485, -995},{0x8A, 0x30, 0x0, 0xFF}}},
	{{{-22, 53, 4},0, {238, -995},{0x8A, 0x30, 0x0, 0xFF}}},
	{{{-22, 53, -4},0, {238, -6},{0x8A, 0x30, 0x0, 0xFF}}},
};

Gfx coin_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(coin_000_displaylist_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(11, 13, 8, 0),
	gsSP1Triangle(11, 14, 13, 0),
	gsSP1Triangle(13, 15, 8, 0),
	gsSPVertex(coin_000_displaylist_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(5, 7, 0, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(coin_000_displaylist_mesh_layer_1_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};


Gfx mat_coin_yellow[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, coin_yellow_face_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(coin_yellow_lights),
	gsSPEndDisplayList(),
};

Gfx mat_coin_red[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, coin_red_face_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(coin_yellow_lights),
	gsSPEndDisplayList(),
};

Gfx mat_coin_blue[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, coin_blue_face_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(coin_yellow_lights),
	gsSPEndDisplayList(),
};

Gfx coin_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_coin_yellow),
	gsSPDisplayList(coin_000_displaylist_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx coin_000_displaylist_blue_mesh[] = {
	gsSPDisplayList(mat_coin_blue),
	gsSPDisplayList(coin_000_displaylist_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx coin_000_displaylist_red_mesh[] = {
	gsSPDisplayList(mat_coin_red),
	gsSPDisplayList(coin_000_displaylist_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx coin_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

