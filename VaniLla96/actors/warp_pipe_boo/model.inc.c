Lights1 warp_pipe_boo_side_002_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 warp_pipe_boo_black_003_lights = gdSPDefLights1(
	0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 warp_pipe_boo_top_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

u8 warp_pipe_boo_warp_pipe_boo_side_rgba32[] = {
	"actors/warp_pipe_boo/warp_pipe_boo_side.rgba32"
};
u8 warp_pipe_boo_warp_pipe_boo_top_rgba32[] = {
	"actors/warp_pipe_boo/warp_pipe_boo_top.rgba32"
};


Vtx warp_pipe_boo_000_displaylist_mesh_vtx_0[64] = {
	{{{-104, -108, 0},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-73, 206, 75},0, {-16, -16},{0x5A, 0x0, 0xA7, 0xFF}}},
	{{{-73, -108, 75},0, {-16, 4008},{0x5A, 0x0, 0xA7, 0xFF}}},
	{{{-104, 206, 0},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-73, -108, -73},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-104, 206, 0},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-104, -108, 0},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-73, 206, -73},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{75, -108, 75},0, {974, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{75, 206, 75},0, {974, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{106, 206, 0},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{106, -108, 0},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{0, -108, 106},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{75, 206, 75},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{75, -108, 75},0, {-16, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{0, 206, 106},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-73, -108, 75},0, {974, 4008},{0x5A, 0x0, 0xA7, 0xFF}}},
	{{{-73, 206, 75},0, {974, -16},{0x5A, 0x0, 0xA7, 0xFF}}},
	{{{0, 206, 106},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -108, 106},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{75, -108, -73},0, {974, 4008},{0xA7, 0x0, 0x5A, 0xFF}}},
	{{{0, 206, -104},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -108, -104},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{75, 206, -73},0, {974, -16},{0xA7, 0x0, 0x5A, 0xFF}}},
	{{{0, -108, -104},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-73, 206, -73},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-73, -108, -73},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{0, 206, -104},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{106, -108, 0},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{75, 206, -73},0, {-16, -16},{0xA7, 0x0, 0x5A, 0xFF}}},
	{{{75, -108, -73},0, {-16, 4008},{0xA7, 0x0, 0x5A, 0xFF}}},
	{{{106, 206, 0},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{160, -108, 0},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{160, 206, 0},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{113, 206, 113},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{113, -108, 113},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{113, -108, 113},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{113, 206, 113},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{0, 206, 160},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -108, 160},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -108, 160},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 206, 160},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-111, 206, 113},0, {-16, -16},{0xA6, 0x0, 0x59, 0xFF}}},
	{{{-111, -108, 113},0, {-16, 4008},{0xA6, 0x0, 0x59, 0xFF}}},
	{{{-111, -108, -111},0, {974, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{0, 206, -158},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -108, -158},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-111, 206, -111},0, {974, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{0, -108, -158},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 206, -158},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{113, 206, -111},0, {-16, -16},{0x59, 0x0, 0xA6, 0xFF}}},
	{{{113, -108, -111},0, {-16, 4008},{0x59, 0x0, 0xA6, 0xFF}}},
	{{{-111, -108, 113},0, {974, 4008},{0xA6, 0x0, 0x59, 0xFF}}},
	{{{-111, 206, 113},0, {974, -16},{0xA6, 0x0, 0x59, 0xFF}}},
	{{{-158, 206, 0},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-158, -108, 0},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-158, -108, 0},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-158, 206, 0},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-111, 206, -111},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-111, -108, -111},0, {-16, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{113, -108, -111},0, {974, 4008},{0x59, 0x0, 0xA6, 0xFF}}},
	{{{113, 206, -111},0, {974, -16},{0x59, 0x0, 0xA6, 0xFF}}},
	{{{160, 206, 0},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{160, -108, 0},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_000_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_000_displaylist_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_000_displaylist_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_000_displaylist_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_000_displaylist_mesh_vtx_0 + 48, 16, 0),
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

Vtx warp_pipe_boo_001_displaylist_mesh_vtx_0[4] = {
	{{{-104, -98, 106},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{106, -98, 106},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{106, -98, -104},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-104, -98, -104},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_001_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_001_displaylist_mesh_vtx_1[16] = {
	{{{160, 206, 0},0, {842, -46},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{106, 206, 0},0, {730, 116},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{75, 206, 75},0, {904, 400},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{75, 206, -73},0, {426, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{113, 206, -111},0, {384, -190},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 206, -104},0, {168, 170},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 206, -158},0, {-2, 36},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-73, 206, -73},0, {108, 478},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-111, 206, -111},0, {-88, 498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-104, 206, 0},0, {282, 764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-158, 206, 0},0, {170, 926},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-73, 206, 75},0, {588, 860},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-111, 206, 113},0, {628, 1066},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 206, 106},0, {846, 708},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 206, 160},0, {1016, 844},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{113, 206, 113},0, {1104, 382},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_001_displaylist_mesh_tri_1[] = {
	gsSPVertex(warp_pipe_boo_001_displaylist_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSP1Triangle(15, 2, 13, 0),
	gsSP1Triangle(0, 2, 15, 0),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_side_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_warp_pipe_boo_side_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(warp_pipe_boo_side_002_lights),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_black_003[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, SHADE, 0, 0, 0, PRIMITIVE, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
	gsSPSetLights1(warp_pipe_boo_black_003_lights),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_top[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_warp_pipe_boo_top_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_boo_top_lights),
	gsSPEndDisplayList(),
};


Gfx warp_pipe_boo_000_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_boo_side_002),
	gsSPDisplayList(warp_pipe_boo_000_displaylist_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_boo_001_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_boo_black_003),
	gsSPDisplayList(warp_pipe_boo_001_displaylist_mesh_tri_0),
	gsSPDisplayList(mat_warp_pipe_boo_top),
	gsSPDisplayList(warp_pipe_boo_001_displaylist_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_boo_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Lights1 warp_pipe_boo_green_locked_side_005_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 warp_pipe_boo_green_locked_top_005_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 warp_pipe_boo_green_locked_key_003_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

u8 warp_pipe_boo_green_locked_warp_pipe_green_side_chain_rgba32[] = {
	 "actors/warp_pipe_boo/warp_pipe_green_side_chain.rgba32"
};
u8 warp_pipe_boo_green_locked_warp_pipe_green_top_rgba32[] = {
	 "actors/warp_pipe_boo/warp_pipe_green_top.rgba32"
};
u8 warp_pipe_boo_green_locked_lock_rgba32[] = {
	 "actors/warp_pipe_boo/lock.rgba32"
};
Vtx warp_pipe_boo_green_locked_000_displaylist_mesh_vtx_0[64] = {
	{{{-1, -114, -104},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-77, 209, -72},0, {-16, -16},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-77, -114, -72},0, {-16, 4008},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-1, 209, -104},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{75, -114, -72},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-1, 209, -104},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1, -114, -104},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{75, 209, -72},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-77, -114, 80},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-77, 209, 80},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-1, 209, 112},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, -114, 112},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-109, -114, 3},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-77, 209, 80},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-77, -114, 80},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-109, 209, 3},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-77, -114, -72},0, {974, 4008},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-77, 209, -72},0, {974, -16},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-109, 209, 3},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-109, -114, 3},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{75, -114, 80},0, {974, 4008},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{107, 209, 3},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{107, -114, 3},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{75, 209, 80},0, {974, -16},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{107, -114, 3},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{75, 209, -72},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{75, -114, -72},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{107, 209, 3},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-1, -114, 112},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{75, 209, 80},0, {-16, -16},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{75, -114, 80},0, {-16, 4008},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{-1, 209, 112},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, -114, 167},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1, 209, 167},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-117, 209, 119},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-117, -114, 119},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-117, -114, 119},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-117, 209, 119},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-165, 209, 3},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-165, -114, 3},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-165, -114, 3},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-165, 209, 3},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-117, 209, -112},0, {-16, -16},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{-117, -114, -112},0, {-16, 4008},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{114, -114, -112},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{162, 209, 3},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{162, -114, 3},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{114, 209, -112},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{162, -114, 3},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{162, 209, 3},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{114, 209, 119},0, {-16, -16},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{114, -114, 119},0, {-16, 4008},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{-117, -114, -112},0, {974, 4008},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{-117, 209, -112},0, {974, -16},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{-1, 209, -160},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, -114, -160},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, -114, -160},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, 209, -160},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{114, 209, -112},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{114, -114, -112},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{114, -114, 119},0, {974, 4008},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{114, 209, 119},0, {974, -16},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{-1, 209, 167},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1, -114, 167},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx warp_pipe_boo_green_locked_000_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_green_locked_000_displaylist_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_green_locked_000_displaylist_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_green_locked_000_displaylist_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_green_locked_000_displaylist_mesh_vtx_0 + 48, 16, 0),
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

Vtx warp_pipe_boo_green_locked_001_displaylist_mesh_vtx_0[4] = {
	{{{-109, -103, -104},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-109, -103, 112},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{107, -103, 112},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{107, -103, -104},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_green_locked_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_green_locked_001_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_green_locked_001_displaylist_mesh_vtx_1[16] = {
	{{{-1, 209, 167},0, {842, -46},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1, 209, 112},0, {730, 116},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-77, 209, 80},0, {904, 400},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{75, 209, 80},0, {426, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{114, 209, 119},0, {384, -190},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{107, 209, 3},0, {168, 170},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{162, 209, 3},0, {-2, 36},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{75, 209, -72},0, {108, 478},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{114, 209, -112},0, {-88, 498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1, 209, -104},0, {282, 764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1, 209, -160},0, {170, 926},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-77, 209, -72},0, {588, 860},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-117, 209, -112},0, {628, 1066},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-109, 209, 3},0, {846, 708},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-165, 209, 3},0, {1016, 844},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-117, 209, 119},0, {1104, 382},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_green_locked_001_displaylist_mesh_tri_1[] = {
	gsSPVertex(warp_pipe_boo_green_locked_001_displaylist_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSP1Triangle(15, 2, 13, 0),
	gsSP1Triangle(0, 2, 15, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_green_locked_001_displaylist_mesh_vtx_2[38] = {
	{{{58, 222, 176},0, {517, 389},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{58, 222, 113},0, {560, 389},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-68, 222, 114},0, {560, 347},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-68, 222, 177},0, {517, 347},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{58, 129, 176},0, {1003, 700},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{58, 222, 176},0, {1003, -16},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{-68, 222, 177},0, {-16, -16},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{-68, 129, 177},0, {-16, 700},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{-26, 88, 177},0, {321, 1008},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{17, 88, 177},0, {666, 1008},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{58, 129, 113},0, {475, 432},{0x7F, 0x0, 0xFF, 0xFF}}},
	{{{58, 222, 113},0, {517, 432},{0x7F, 0x0, 0xFF, 0xFF}}},
	{{{58, 222, 176},0, {517, 389},{0x7F, 0x0, 0xFF, 0xFF}}},
	{{{58, 129, 176},0, {475, 389},{0x7F, 0x0, 0xFF, 0xFF}}},
	{{{58, 129, 113},0, {475, 432},{0x58, 0xA5, 0x0, 0xFF}}},
	{{{58, 129, 176},0, {475, 389},{0x58, 0xA5, 0x0, 0xFF}}},
	{{{17, 88, 177},0, {475, 389},{0x58, 0xA5, 0x0, 0xFF}}},
	{{{16, 88, 114},0, {475, 432},{0x58, 0xA5, 0x0, 0xFF}}},
	{{{-68, 129, 177},0, {475, 347},{0x81, 0x0, 0x1, 0xFF}}},
	{{{-68, 222, 177},0, {517, 347},{0x81, 0x0, 0x1, 0xFF}}},
	{{{-68, 222, 114},0, {517, 304},{0x81, 0x0, 0x1, 0xFF}}},
	{{{-68, 129, 114},0, {475, 304},{0x81, 0x0, 0x1, 0xFF}}},
	{{{-68, 129, 177},0, {475, 347},{0xA8, 0xA5, 0x0, 0xFF}}},
	{{{-68, 129, 114},0, {475, 304},{0xA8, 0xA5, 0x0, 0xFF}}},
	{{{-26, 88, 114},0, {475, 304},{0xA8, 0xA5, 0x0, 0xFF}}},
	{{{-26, 88, 177},0, {475, 347},{0xA8, 0xA5, 0x0, 0xFF}}},
	{{{-68, 129, 114},0, {1005, 702},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{-68, 222, 114},0, {1005, -13},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{58, 222, 113},0, {-13, -13},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{58, 129, 113},0, {-13, 702},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{-68, 129, 114},0, {1005, 702},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{58, 129, 113},0, {-13, 702},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{16, 88, 114},0, {323, 1010},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{-26, 88, 114},0, {669, 1010},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{16, 88, 114},0, {432, 389},{0x0, 0x81, 0x0, 0xFF}}},
	{{{17, 88, 177},0, {475, 389},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-26, 88, 177},0, {475, 347},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-26, 88, 114},0, {432, 347},{0x0, 0x81, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_green_locked_001_displaylist_mesh_tri_2[] = {
	gsSPVertex(warp_pipe_boo_green_locked_001_displaylist_mesh_vtx_2 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(4, 7, 8, 0),
	gsSP1Triangle(4, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(warp_pipe_boo_green_locked_001_displaylist_mesh_vtx_2 + 14, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(warp_pipe_boo_green_locked_001_displaylist_mesh_vtx_2 + 30, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_green_locked_side_005[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_green_locked_warp_pipe_green_side_chain_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(warp_pipe_boo_green_locked_side_005_lights),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_green_locked_black_004[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_green_locked_top_005[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_green_locked_warp_pipe_green_top_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_boo_green_locked_top_005_lights),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_green_locked_key_003[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_green_locked_lock_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_boo_green_locked_key_003_lights),
	gsSPEndDisplayList(),
};


Gfx warp_pipe_boo_green_locked_000_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_boo_green_locked_side_005),
	gsSPDisplayList(warp_pipe_boo_green_locked_000_displaylist_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_boo_green_locked_001_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_boo_green_locked_black_004),
	gsSPDisplayList(warp_pipe_boo_green_locked_001_displaylist_mesh_tri_0),
	gsSPDisplayList(mat_warp_pipe_boo_green_locked_top_005),
	gsSPDisplayList(warp_pipe_boo_green_locked_001_displaylist_mesh_tri_1),
	gsSPDisplayList(mat_warp_pipe_boo_green_locked_key_003),
	gsSPDisplayList(warp_pipe_boo_green_locked_001_displaylist_mesh_tri_2),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_boo_green_locked_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Lights1 warp_pipe_boo_green_unlocked_sm64_material_029_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 warp_pipe_boo_green_unlocked_sm64_material_028_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 warp_pipe_boo_green_unlocked_sm64_material_027_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

u8 warp_pipe_boo_green_unlocked_warp_pipe_green_side_rgba32[] = {
	 "actors/warp_pipe_boo/warp_pipe_green_side.rgba32"
};
u8 warp_pipe_boo_green_unlocked_warp_pipe_green_top_rgba32[] = {
	 "actors/warp_pipe_boo/warp_pipe_green_top.rgba32"
};
u8 warp_pipe_boo_green_unlocked_lock_rgba32[] = {
	 "actors/warp_pipe_boo/lock.rgba32"
};
Vtx warp_pipe_boo_green_unlocked_000_displaylist_mesh_vtx_0[64] = {
	{{{2, -112, -113},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-75, 211, -81},0, {-16, -16},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-75, -112, -81},0, {-16, 4008},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{2, 211, -113},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{77, -112, -81},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{2, 211, -113},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{2, -112, -113},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{77, 211, -81},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-75, -112, 71},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-75, 211, 71},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{2, 211, 103},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{2, -112, 103},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-107, -112, -5},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-75, 211, 71},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-75, -112, 71},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-107, 211, -5},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-75, -112, -81},0, {974, 4008},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-75, 211, -81},0, {974, -16},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-107, 211, -5},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-107, -112, -5},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{77, -112, 71},0, {974, 4008},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{109, 211, -5},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{109, -112, -5},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{77, 211, 71},0, {974, -16},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{109, -112, -5},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{77, 211, -81},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{77, -112, -81},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{109, 211, -5},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{2, -112, 103},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{77, 211, 71},0, {-16, -16},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{77, -112, 71},0, {-16, 4008},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{2, 211, 103},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{2, -112, 158},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{2, 211, 158},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-114, 211, 111},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-114, -112, 111},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-114, -112, 111},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-114, 211, 111},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-162, 211, -5},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-162, -112, -5},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-162, -112, -5},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-162, 211, -5},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-114, 211, -120},0, {-16, -16},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{-114, -112, -120},0, {-16, 4008},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{117, -112, -120},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{165, 211, -5},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{165, -112, -5},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{117, 211, -120},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{165, -112, -5},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{165, 211, -5},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{117, 211, 111},0, {-16, -16},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{117, -112, 111},0, {-16, 4008},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{-114, -112, -120},0, {974, 4008},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{-114, 211, -120},0, {974, -16},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{2, 211, -168},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{2, -112, -168},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{2, -112, -168},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{2, 211, -168},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{117, 211, -120},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{117, -112, -120},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{117, -112, 111},0, {974, 4008},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{117, 211, 111},0, {974, -16},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{2, 211, 158},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{2, -112, 158},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx warp_pipe_boo_green_unlocked_000_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_green_unlocked_000_displaylist_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_green_unlocked_000_displaylist_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_green_unlocked_000_displaylist_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_green_unlocked_000_displaylist_mesh_vtx_0 + 48, 16, 0),
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

Vtx warp_pipe_boo_green_unlocked_001_displaylist_mesh_vtx_0[4] = {
	{{{-107, -101, -113},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-107, -101, 103},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{109, -101, 103},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{109, -101, -113},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_green_unlocked_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_green_unlocked_001_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_green_unlocked_001_displaylist_mesh_vtx_1[16] = {
	{{{2, 211, 158},0, {842, -46},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{2, 211, 103},0, {730, 116},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-75, 211, 71},0, {904, 400},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{77, 211, 71},0, {426, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{117, 211, 111},0, {384, -190},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{109, 211, -5},0, {168, 170},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{165, 211, -5},0, {-2, 36},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{77, 211, -81},0, {108, 478},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{117, 211, -120},0, {-88, 498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{2, 211, -113},0, {282, 764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{2, 211, -168},0, {170, 926},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-75, 211, -81},0, {588, 860},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-114, 211, -120},0, {628, 1066},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-107, 211, -5},0, {846, 708},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-162, 211, -5},0, {1016, 844},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-114, 211, 111},0, {1104, 382},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_green_unlocked_001_displaylist_mesh_tri_1[] = {
	gsSPVertex(warp_pipe_boo_green_unlocked_001_displaylist_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSP1Triangle(15, 2, 13, 0),
	gsSP1Triangle(0, 2, 15, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_green_unlocked_001_displaylist_mesh_vtx_2[38] = {
	{{{39, 71, 146},0, {517, 389},{0xCD, 0x2E, 0x95, 0xFF}}},
	{{{53, 17, 116},0, {560, 389},{0xCD, 0x2E, 0x95, 0xFF}}},
	{{{-59, -31, 149},0, {560, 347},{0xCD, 0x2E, 0x95, 0xFF}}},
	{{{-73, 22, 179},0, {517, 347},{0xCD, 0x2E, 0x95, 0xFF}}},
	{{{76, 37, 224},0, {1003, 700},{0xE3, 0x6C, 0x3C, 0xFF}}},
	{{{39, 71, 146},0, {1003, -16},{0xE3, 0x6C, 0x3C, 0xFF}}},
	{{{-73, 22, 179},0, {-16, -16},{0xE3, 0x6C, 0x3C, 0xFF}}},
	{{{-35, -11, 257},0, {-16, 700},{0xE3, 0x6C, 0x3C, 0xFF}}},
	{{{18, -10, 280},0, {321, 1008},{0xE3, 0x6C, 0x3C, 0xFF}}},
	{{{56, 7, 269},0, {666, 1008},{0xE3, 0x6C, 0x3C, 0xFF}}},
	{{{91, -16, 195},0, {475, 432},{0x70, 0x31, 0xDE, 0xFF}}},
	{{{53, 17, 116},0, {517, 432},{0x70, 0x31, 0xDE, 0xFF}}},
	{{{39, 71, 146},0, {517, 389},{0x70, 0x31, 0xDE, 0xFF}}},
	{{{76, 37, 224},0, {475, 389},{0x70, 0x31, 0xDE, 0xFF}}},
	{{{91, -16, 195},0, {475, 432},{0x73, 0x1, 0x36, 0xFF}}},
	{{{76, 37, 224},0, {475, 389},{0x73, 0x1, 0x36, 0xFF}}},
	{{{56, 7, 269},0, {475, 389},{0x73, 0x1, 0x36, 0xFF}}},
	{{{70, -47, 239},0, {475, 432},{0x73, 0x1, 0x36, 0xFF}}},
	{{{-35, -11, 257},0, {475, 347},{0x90, 0xCF, 0x22, 0xFF}}},
	{{{-73, 22, 179},0, {517, 347},{0x90, 0xCF, 0x22, 0xFF}}},
	{{{-59, -31, 149},0, {517, 304},{0x90, 0xCF, 0x22, 0xFF}}},
	{{{-21, -65, 228},0, {475, 304},{0x90, 0xCF, 0x22, 0xFF}}},
	{{{-35, -11, 257},0, {475, 347},{0xD7, 0xBD, 0x64, 0xFF}}},
	{{{-21, -65, 228},0, {475, 304},{0xD7, 0xBD, 0x64, 0xFF}}},
	{{{32, -63, 251},0, {475, 304},{0xD7, 0xBD, 0x64, 0xFF}}},
	{{{18, -10, 280},0, {475, 347},{0xD7, 0xBD, 0x64, 0xFF}}},
	{{{-21, -65, 228},0, {1005, 702},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{-59, -31, 149},0, {1005, -13},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{53, 17, 116},0, {-13, -13},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{91, -16, 195},0, {-13, 702},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{-21, -65, 228},0, {1005, 702},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{91, -16, 195},0, {-13, 702},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{70, -47, 239},0, {323, 1010},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{32, -63, 251},0, {669, 1010},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{70, -47, 239},0, {432, 389},{0x33, 0xD2, 0x6B, 0xFF}}},
	{{{56, 7, 269},0, {475, 389},{0x33, 0xD2, 0x6B, 0xFF}}},
	{{{18, -10, 280},0, {475, 347},{0x33, 0xD2, 0x6B, 0xFF}}},
	{{{32, -63, 251},0, {432, 347},{0x33, 0xD2, 0x6B, 0xFF}}},
};

Gfx warp_pipe_boo_green_unlocked_001_displaylist_mesh_tri_2[] = {
	gsSPVertex(warp_pipe_boo_green_unlocked_001_displaylist_mesh_vtx_2 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(4, 7, 8, 0),
	gsSP1Triangle(4, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(warp_pipe_boo_green_unlocked_001_displaylist_mesh_vtx_2 + 14, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(warp_pipe_boo_green_unlocked_001_displaylist_mesh_vtx_2 + 30, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_green_unlocked_sm64_material_029[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_green_unlocked_warp_pipe_green_side_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(warp_pipe_boo_green_unlocked_sm64_material_029_lights),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_green_unlocked_sm64_material_011[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_green_unlocked_sm64_material_028[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_green_unlocked_warp_pipe_green_top_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_boo_green_unlocked_sm64_material_028_lights),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_green_unlocked_sm64_material_027[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_green_unlocked_lock_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_boo_green_unlocked_sm64_material_027_lights),
	gsSPEndDisplayList(),
};


Gfx warp_pipe_boo_green_unlocked_000_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_boo_green_unlocked_sm64_material_029),
	gsSPDisplayList(warp_pipe_boo_green_unlocked_000_displaylist_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_boo_green_unlocked_001_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_boo_green_unlocked_sm64_material_011),
	gsSPDisplayList(warp_pipe_boo_green_unlocked_001_displaylist_mesh_tri_0),
	gsSPDisplayList(mat_warp_pipe_boo_green_unlocked_sm64_material_028),
	gsSPDisplayList(warp_pipe_boo_green_unlocked_001_displaylist_mesh_tri_1),
	gsSPDisplayList(mat_warp_pipe_boo_green_unlocked_sm64_material_027),
	gsSPDisplayList(warp_pipe_boo_green_unlocked_001_displaylist_mesh_tri_2),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_boo_green_unlocked_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Lights1 warp_pipe_boo_red_side_003_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 warp_pipe_boo_red_black_002_lights = gdSPDefLights1(
	0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 warp_pipe_boo_red_top_003_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

u8 warp_pipe_boo_red_warp_pipe_red_side_rgba32[] = {
	 "actors/warp_pipe_boo/warp_pipe_red_side.rgba32"
};
u8 warp_pipe_boo_red_warp_pipe_red_top_rgba32[] = {
	 "actors/warp_pipe_boo/warp_pipe_red_top.rgba32"
};
Vtx warp_pipe_boo_red_000_displaylist_mesh_vtx_0[64] = {
	{{{-107, -119, 0},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-75, 204, 77},0, {-16, -16},{0x5A, 0x0, 0xA7, 0xFF}}},
	{{{-75, -119, 77},0, {-16, 4008},{0x5A, 0x0, 0xA7, 0xFF}}},
	{{{-107, 204, 0},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-75, -119, -75},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-107, 204, 0},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-107, -119, 0},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-75, 204, -75},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{77, -119, 77},0, {974, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{77, 204, 77},0, {974, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{109, 204, 0},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{109, -119, 0},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{0, -119, 109},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{77, 204, 77},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{77, -119, 77},0, {-16, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{0, 204, 109},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-75, -119, 77},0, {974, 4008},{0x5A, 0x0, 0xA7, 0xFF}}},
	{{{-75, 204, 77},0, {974, -16},{0x5A, 0x0, 0xA7, 0xFF}}},
	{{{0, 204, 109},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -119, 109},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{77, -119, -75},0, {974, 4008},{0xA7, 0x0, 0x5A, 0xFF}}},
	{{{0, 204, -107},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -119, -107},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{77, 204, -75},0, {974, -16},{0xA7, 0x0, 0x5A, 0xFF}}},
	{{{0, -119, -107},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-75, 204, -75},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-75, -119, -75},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{0, 204, -107},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{109, -119, 0},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{77, 204, -75},0, {-16, -16},{0xA7, 0x0, 0x5A, 0xFF}}},
	{{{77, -119, -75},0, {-16, 4008},{0xA7, 0x0, 0x5A, 0xFF}}},
	{{{109, 204, 0},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{164, -119, 0},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{164, 204, 0},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{116, 204, 116},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{116, -119, 116},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{116, -119, 116},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{116, 204, 116},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{0, 204, 164},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -119, 164},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -119, 164},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 204, 164},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-114, 204, 116},0, {-16, -16},{0xA6, 0x0, 0x59, 0xFF}}},
	{{{-114, -119, 116},0, {-16, 4008},{0xA6, 0x0, 0x59, 0xFF}}},
	{{{-114, -119, -114},0, {974, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{0, 204, -162},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -119, -162},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-114, 204, -114},0, {974, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{0, -119, -162},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 204, -162},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{116, 204, -114},0, {-16, -16},{0x59, 0x0, 0xA6, 0xFF}}},
	{{{116, -119, -114},0, {-16, 4008},{0x59, 0x0, 0xA6, 0xFF}}},
	{{{-114, -119, 116},0, {974, 4008},{0xA6, 0x0, 0x59, 0xFF}}},
	{{{-114, 204, 116},0, {974, -16},{0xA6, 0x0, 0x59, 0xFF}}},
	{{{-162, 204, 0},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-162, -119, 0},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-162, -119, 0},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-162, 204, 0},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-114, 204, -114},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-114, -119, -114},0, {-16, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{116, -119, -114},0, {974, 4008},{0x59, 0x0, 0xA6, 0xFF}}},
	{{{116, 204, -114},0, {974, -16},{0x59, 0x0, 0xA6, 0xFF}}},
	{{{164, 204, 0},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{164, -119, 0},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_red_000_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_red_000_displaylist_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_red_000_displaylist_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_red_000_displaylist_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_red_000_displaylist_mesh_vtx_0 + 48, 16, 0),
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

Vtx warp_pipe_boo_red_001_displaylist_mesh_vtx_0[4] = {
	{{{-107, -108, 109},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{109, -108, 109},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{109, -108, -107},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-107, -108, -107},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_red_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_red_001_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_red_001_displaylist_mesh_vtx_1[16] = {
	{{{164, 204, 0},0, {842, -46},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{109, 204, 0},0, {730, 116},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{77, 204, 77},0, {904, 400},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{77, 204, -75},0, {426, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{116, 204, -114},0, {384, -190},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 204, -107},0, {168, 170},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 204, -162},0, {-2, 36},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-75, 204, -75},0, {108, 478},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-114, 204, -114},0, {-88, 498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-107, 204, 0},0, {282, 764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-162, 204, 0},0, {170, 926},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-75, 204, 77},0, {588, 860},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-114, 204, 116},0, {628, 1066},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 204, 109},0, {846, 708},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 204, 164},0, {1016, 844},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{116, 204, 116},0, {1104, 382},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_red_001_displaylist_mesh_tri_1[] = {
	gsSPVertex(warp_pipe_boo_red_001_displaylist_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSP1Triangle(15, 2, 13, 0),
	gsSP1Triangle(0, 2, 15, 0),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_red_side_003[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_red_warp_pipe_red_side_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(warp_pipe_boo_red_side_003_lights),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_red_black_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, SHADE, 0, 0, 0, PRIMITIVE, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
	gsSPSetLights1(warp_pipe_boo_red_black_002_lights),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_red_top_003[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_red_warp_pipe_red_top_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_boo_red_top_003_lights),
	gsSPEndDisplayList(),
};


Gfx warp_pipe_boo_red_000_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_boo_red_side_003),
	gsSPDisplayList(warp_pipe_boo_red_000_displaylist_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_boo_red_001_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_boo_red_black_002),
	gsSPDisplayList(warp_pipe_boo_red_001_displaylist_mesh_tri_0),
	gsSPDisplayList(mat_warp_pipe_boo_red_top_003),
	gsSPDisplayList(warp_pipe_boo_red_001_displaylist_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_boo_red_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Lights1 warp_pipe_boo_yellow_locked_side_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 warp_pipe_boo_yellow_locked_top_004_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 warp_pipe_boo_yellow_locked_key_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

u8 warp_pipe_boo_yellow_locked_warp_pipe_yellow_side_chain_rgba32[] = {
	 "actors/warp_pipe_boo/warp_pipe_yellow_side_chain.rgba32"
};
u8 warp_pipe_boo_yellow_locked_warp_pipe_yellow_top_rgba32[] = {
	 "actors/warp_pipe_boo/warp_pipe_yellow_top.rgba32"
};
u8 warp_pipe_boo_yellow_locked_lock_rgba32[] = {
	 "actors/warp_pipe_boo/lock.rgba32"
};
Vtx warp_pipe_boo_yellow_locked_000_displaylist_mesh_vtx_0[64] = {
	{{{-3, -112, -104},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-79, 211, -72},0, {-16, -16},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-79, -112, -72},0, {-16, 4008},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-3, 211, -104},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{73, -112, -72},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-3, 211, -104},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-3, -112, -104},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{73, 211, -72},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-79, -112, 80},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-79, 211, 80},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-3, 211, 112},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-3, -112, 112},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-111, -112, 3},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-79, 211, 80},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-79, -112, 80},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-111, 211, 3},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-79, -112, -72},0, {974, 4008},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-79, 211, -72},0, {974, -16},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-111, 211, 3},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-111, -112, 3},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{73, -112, 80},0, {974, 4008},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{105, 211, 3},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{105, -112, 3},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{73, 211, 80},0, {974, -16},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{105, -112, 3},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{73, 211, -72},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{73, -112, -72},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{105, 211, 3},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-3, -112, 112},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{73, 211, 80},0, {-16, -16},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{73, -112, 80},0, {-16, 4008},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{-3, 211, 112},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-3, -112, 167},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-3, 211, 167},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-119, 211, 119},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-119, -112, 119},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-119, -112, 119},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-119, 211, 119},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-166, 211, 3},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-166, -112, 3},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-166, -112, 3},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-166, 211, 3},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-119, 211, -112},0, {-16, -16},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{-119, -112, -112},0, {-16, 4008},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{112, -112, -112},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{160, 211, 3},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{160, -112, 3},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{112, 211, -112},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{160, -112, 3},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{160, 211, 3},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{112, 211, 119},0, {-16, -16},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{112, -112, 119},0, {-16, 4008},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{-119, -112, -112},0, {974, 4008},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{-119, 211, -112},0, {974, -16},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{-3, 211, -160},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-3, -112, -160},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-3, -112, -160},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-3, 211, -160},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{112, 211, -112},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{112, -112, -112},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{112, -112, 119},0, {974, 4008},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{112, 211, 119},0, {974, -16},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{-3, 211, 167},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-3, -112, 167},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx warp_pipe_boo_yellow_locked_000_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_yellow_locked_000_displaylist_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_yellow_locked_000_displaylist_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_yellow_locked_000_displaylist_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_yellow_locked_000_displaylist_mesh_vtx_0 + 48, 16, 0),
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

Vtx warp_pipe_boo_yellow_locked_001_displaylist_mesh_vtx_0[4] = {
	{{{-111, -101, -104},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-111, -101, 112},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{105, -101, 112},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{105, -101, -104},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_yellow_locked_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_yellow_locked_001_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_yellow_locked_001_displaylist_mesh_vtx_1[16] = {
	{{{-3, 211, 167},0, {842, -46},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-3, 211, 112},0, {730, 116},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-79, 211, 80},0, {904, 400},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{73, 211, 80},0, {426, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{112, 211, 119},0, {384, -190},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{105, 211, 3},0, {168, 170},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{160, 211, 3},0, {-2, 36},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{73, 211, -72},0, {108, 478},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{112, 211, -112},0, {-88, 498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-3, 211, -104},0, {282, 764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-3, 211, -160},0, {170, 926},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-79, 211, -72},0, {588, 860},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-119, 211, -112},0, {628, 1066},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-111, 211, 3},0, {846, 708},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-166, 211, 3},0, {1016, 844},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-119, 211, 119},0, {1104, 382},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_yellow_locked_001_displaylist_mesh_tri_1[] = {
	gsSPVertex(warp_pipe_boo_yellow_locked_001_displaylist_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSP1Triangle(15, 2, 13, 0),
	gsSP1Triangle(0, 2, 15, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_yellow_locked_001_displaylist_mesh_vtx_2[38] = {
	{{{57, 224, 176},0, {517, 389},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{56, 224, 113},0, {560, 389},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-70, 224, 114},0, {560, 347},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-69, 224, 177},0, {517, 347},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{57, 131, 176},0, {1003, 700},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{57, 224, 176},0, {1003, -16},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{-69, 224, 177},0, {-16, -16},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{-69, 131, 177},0, {-16, 700},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{-28, 90, 177},0, {321, 1008},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{15, 90, 177},0, {666, 1008},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{56, 131, 113},0, {475, 432},{0x7F, 0x0, 0xFF, 0xFF}}},
	{{{56, 224, 113},0, {517, 432},{0x7F, 0x0, 0xFF, 0xFF}}},
	{{{57, 224, 176},0, {517, 389},{0x7F, 0x0, 0xFF, 0xFF}}},
	{{{57, 131, 176},0, {475, 389},{0x7F, 0x0, 0xFF, 0xFF}}},
	{{{56, 131, 113},0, {475, 432},{0x58, 0xA5, 0x0, 0xFF}}},
	{{{57, 131, 176},0, {475, 389},{0x58, 0xA5, 0x0, 0xFF}}},
	{{{15, 90, 177},0, {475, 389},{0x58, 0xA5, 0x0, 0xFF}}},
	{{{15, 90, 114},0, {475, 432},{0x58, 0xA5, 0x0, 0xFF}}},
	{{{-69, 131, 177},0, {475, 347},{0x81, 0x0, 0x1, 0xFF}}},
	{{{-69, 224, 177},0, {517, 347},{0x81, 0x0, 0x1, 0xFF}}},
	{{{-70, 224, 114},0, {517, 304},{0x81, 0x0, 0x1, 0xFF}}},
	{{{-70, 131, 114},0, {475, 304},{0x81, 0x0, 0x1, 0xFF}}},
	{{{-69, 131, 177},0, {475, 347},{0xA8, 0xA5, 0x0, 0xFF}}},
	{{{-70, 131, 114},0, {475, 304},{0xA8, 0xA5, 0x0, 0xFF}}},
	{{{-28, 90, 114},0, {475, 304},{0xA8, 0xA5, 0x0, 0xFF}}},
	{{{-28, 90, 177},0, {475, 347},{0xA8, 0xA5, 0x0, 0xFF}}},
	{{{-70, 131, 114},0, {1005, 702},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{-70, 224, 114},0, {1005, -13},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{56, 224, 113},0, {-13, -13},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{56, 131, 113},0, {-13, 702},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{-70, 131, 114},0, {1005, 702},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{56, 131, 113},0, {-13, 702},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{15, 90, 114},0, {323, 1010},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{-28, 90, 114},0, {669, 1010},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{15, 90, 114},0, {432, 389},{0x0, 0x81, 0x0, 0xFF}}},
	{{{15, 90, 177},0, {475, 389},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-28, 90, 177},0, {475, 347},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-28, 90, 114},0, {432, 347},{0x0, 0x81, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_yellow_locked_001_displaylist_mesh_tri_2[] = {
	gsSPVertex(warp_pipe_boo_yellow_locked_001_displaylist_mesh_vtx_2 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(4, 7, 8, 0),
	gsSP1Triangle(4, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(warp_pipe_boo_yellow_locked_001_displaylist_mesh_vtx_2 + 14, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(warp_pipe_boo_yellow_locked_001_displaylist_mesh_vtx_2 + 30, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_yellow_locked_side[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_yellow_locked_warp_pipe_yellow_side_chain_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(warp_pipe_boo_yellow_locked_side_lights),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_yellow_locked_black[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_yellow_locked_top_004[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_yellow_locked_warp_pipe_yellow_top_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_boo_yellow_locked_top_004_lights),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_yellow_locked_key[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_yellow_locked_lock_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_boo_yellow_locked_key_lights),
	gsSPEndDisplayList(),
};


Gfx warp_pipe_boo_yellow_locked_000_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_boo_yellow_locked_side),
	gsSPDisplayList(warp_pipe_boo_yellow_locked_000_displaylist_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_boo_yellow_locked_001_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_boo_yellow_locked_black),
	gsSPDisplayList(warp_pipe_boo_yellow_locked_001_displaylist_mesh_tri_0),
	gsSPDisplayList(mat_warp_pipe_boo_yellow_locked_top_004),
	gsSPDisplayList(warp_pipe_boo_yellow_locked_001_displaylist_mesh_tri_1),
	gsSPDisplayList(mat_warp_pipe_boo_yellow_locked_key),
	gsSPDisplayList(warp_pipe_boo_yellow_locked_001_displaylist_mesh_tri_2),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_boo_yellow_locked_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Lights1 warp_pipe_boo_yellow_unlocked_sm64_material_004_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 warp_pipe_boo_yellow_unlocked_sm64_material_005_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 warp_pipe_boo_yellow_unlocked_sm64_material_009_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

u8 warp_pipe_boo_yellow_unlocked_warp_pipe_yellow_side_rgba32[] = {
	 "actors/warp_pipe_boo/warp_pipe_yellow_side.rgba32"
};
u8 warp_pipe_boo_yellow_unlocked_warp_pipe_yellow_top_rgba32[] = {
	 "actors/warp_pipe_boo/warp_pipe_yellow_top.rgba32"
};
u8 warp_pipe_boo_yellow_unlocked_lock_rgba32[] = {
	 "actors/warp_pipe_boo/lock.rgba32"
};
Vtx warp_pipe_boo_yellow_unlocked_000_displaylist_mesh_vtx_0[64] = {
	{{{0, -115, -111},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-76, 208, -79},0, {-16, -16},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-76, -115, -79},0, {-16, 4008},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{0, 208, -111},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{76, -115, -79},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{0, 208, -111},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -115, -111},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{76, 208, -79},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-76, -115, 73},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-76, 208, 73},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{0, 208, 105},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -115, 105},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-108, -115, -4},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-76, 208, 73},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-76, -115, 73},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-108, 208, -4},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-76, -115, -79},0, {974, 4008},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-76, 208, -79},0, {974, -16},{0x59, 0x0, 0x5A, 0xFF}}},
	{{{-108, 208, -4},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-108, -115, -4},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{76, -115, 73},0, {974, 4008},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{108, 208, -4},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{108, -115, -4},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{76, 208, 73},0, {974, -16},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{108, -115, -4},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{76, 208, -79},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{76, -115, -79},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{108, 208, -4},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{0, -115, 105},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{76, 208, 73},0, {-16, -16},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{76, -115, 73},0, {-16, 4008},{0xA6, 0x0, 0xA7, 0xFF}}},
	{{{0, 208, 105},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -115, 160},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 208, 160},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-116, 208, 112},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-116, -115, 112},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-116, -115, 112},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-116, 208, 112},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-164, 208, -4},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-164, -115, -4},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-164, -115, -4},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-164, 208, -4},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-116, 208, -119},0, {-16, -16},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{-116, -115, -119},0, {-16, 4008},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{115, -115, -119},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{163, 208, -4},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{163, -115, -4},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{115, 208, -119},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{163, -115, -4},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{163, 208, -4},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{115, 208, 112},0, {-16, -16},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{115, -115, 112},0, {-16, 4008},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{-116, -115, -119},0, {974, 4008},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{-116, 208, -119},0, {974, -16},{0xA7, 0x0, 0xA6, 0xFF}}},
	{{{0, 208, -166},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -115, -166},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -115, -166},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 208, -166},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{115, 208, -119},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{115, -115, -119},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{115, -115, 112},0, {974, 4008},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{115, 208, 112},0, {974, -16},{0x5A, 0x0, 0x59, 0xFF}}},
	{{{0, 208, 160},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -115, 160},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx warp_pipe_boo_yellow_unlocked_000_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_yellow_unlocked_000_displaylist_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_yellow_unlocked_000_displaylist_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_yellow_unlocked_000_displaylist_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(warp_pipe_boo_yellow_unlocked_000_displaylist_mesh_vtx_0 + 48, 16, 0),
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

Vtx warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_vtx_0[4] = {
	{{{-108, -105, -111},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-108, -105, 105},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{108, -105, 105},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{108, -105, -111},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_vtx_1[16] = {
	{{{0, 208, 160},0, {842, -46},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 208, 105},0, {730, 116},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-76, 208, 73},0, {904, 400},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{76, 208, 73},0, {426, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{115, 208, 112},0, {384, -190},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{108, 208, -4},0, {168, 170},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, 208, -4},0, {-2, 36},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{76, 208, -79},0, {108, 478},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{115, 208, -119},0, {-88, 498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 208, -111},0, {282, 764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 208, -166},0, {170, 926},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-76, 208, -79},0, {588, 860},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-116, 208, -119},0, {628, 1066},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-108, 208, -4},0, {846, 708},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-164, 208, -4},0, {1016, 844},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-116, 208, 112},0, {1104, 382},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_tri_1[] = {
	gsSPVertex(warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSP1Triangle(15, 2, 13, 0),
	gsSP1Triangle(0, 2, 15, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_vtx_2[38] = {
	{{{37, 67, 148},0, {517, 389},{0xCD, 0x2E, 0x95, 0xFF}}},
	{{{51, 13, 118},0, {560, 389},{0xCD, 0x2E, 0x95, 0xFF}}},
	{{{-60, -35, 151},0, {560, 347},{0xCD, 0x2E, 0x95, 0xFF}}},
	{{{-75, 19, 181},0, {517, 347},{0xCD, 0x2E, 0x95, 0xFF}}},
	{{{75, 34, 226},0, {1003, 700},{0xE3, 0x6C, 0x3C, 0xFF}}},
	{{{37, 67, 148},0, {1003, -16},{0xE3, 0x6C, 0x3C, 0xFF}}},
	{{{-75, 19, 181},0, {-16, -16},{0xE3, 0x6C, 0x3C, 0xFF}}},
	{{{-37, -15, 259},0, {-16, 700},{0xE3, 0x6C, 0x3C, 0xFF}}},
	{{{16, -13, 282},0, {321, 1008},{0xE3, 0x6C, 0x3C, 0xFF}}},
	{{{54, 3, 271},0, {666, 1008},{0xE3, 0x6C, 0x3C, 0xFF}}},
	{{{89, -20, 196},0, {475, 432},{0x70, 0x31, 0xDE, 0xFF}}},
	{{{51, 13, 118},0, {517, 432},{0x70, 0x31, 0xDE, 0xFF}}},
	{{{37, 67, 148},0, {517, 389},{0x70, 0x31, 0xDE, 0xFF}}},
	{{{75, 34, 226},0, {475, 389},{0x70, 0x31, 0xDE, 0xFF}}},
	{{{89, -20, 196},0, {475, 432},{0x73, 0x1, 0x36, 0xFF}}},
	{{{75, 34, 226},0, {475, 389},{0x73, 0x1, 0x36, 0xFF}}},
	{{{54, 3, 271},0, {475, 389},{0x73, 0x1, 0x36, 0xFF}}},
	{{{68, -50, 241},0, {475, 432},{0x73, 0x1, 0x36, 0xFF}}},
	{{{-37, -15, 259},0, {475, 347},{0x90, 0xCF, 0x22, 0xFF}}},
	{{{-75, 19, 181},0, {517, 347},{0x90, 0xCF, 0x22, 0xFF}}},
	{{{-60, -35, 151},0, {517, 304},{0x90, 0xCF, 0x22, 0xFF}}},
	{{{-23, -68, 230},0, {475, 304},{0x90, 0xCF, 0x22, 0xFF}}},
	{{{-37, -15, 259},0, {475, 347},{0xD7, 0xBD, 0x64, 0xFF}}},
	{{{-23, -68, 230},0, {475, 304},{0xD7, 0xBD, 0x64, 0xFF}}},
	{{{31, -67, 252},0, {475, 304},{0xD7, 0xBD, 0x64, 0xFF}}},
	{{{16, -13, 282},0, {475, 347},{0xD7, 0xBD, 0x64, 0xFF}}},
	{{{-23, -68, 230},0, {1005, 702},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{-60, -35, 151},0, {1005, -13},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{51, 13, 118},0, {-13, -13},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{89, -20, 196},0, {-13, 702},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{-23, -68, 230},0, {1005, 702},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{89, -20, 196},0, {-13, 702},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{68, -50, 241},0, {323, 1010},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{31, -67, 252},0, {669, 1010},{0x1D, 0x94, 0xC4, 0xFF}}},
	{{{68, -50, 241},0, {432, 389},{0x33, 0xD2, 0x6B, 0xFF}}},
	{{{54, 3, 271},0, {475, 389},{0x33, 0xD2, 0x6B, 0xFF}}},
	{{{16, -13, 282},0, {475, 347},{0x33, 0xD2, 0x6B, 0xFF}}},
	{{{31, -67, 252},0, {432, 347},{0x33, 0xD2, 0x6B, 0xFF}}},
};

Gfx warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_tri_2[] = {
	gsSPVertex(warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_vtx_2 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(4, 7, 8, 0),
	gsSP1Triangle(4, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_vtx_2 + 14, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_vtx_2 + 30, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_yellow_unlocked_sm64_material_004[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_yellow_unlocked_warp_pipe_yellow_side_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(warp_pipe_boo_yellow_unlocked_sm64_material_004_lights),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_yellow_unlocked_sm64_material_010[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_yellow_unlocked_sm64_material_005[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_yellow_unlocked_warp_pipe_yellow_top_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_boo_yellow_unlocked_sm64_material_005_lights),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_boo_yellow_unlocked_sm64_material_009[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, warp_pipe_boo_yellow_unlocked_lock_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_boo_yellow_unlocked_sm64_material_009_lights),
	gsSPEndDisplayList(),
};


Gfx warp_pipe_boo_yellow_unlocked_000_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_boo_yellow_unlocked_sm64_material_004),
	gsSPDisplayList(warp_pipe_boo_yellow_unlocked_000_displaylist_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_boo_yellow_unlocked_001_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_boo_yellow_unlocked_sm64_material_010),
	gsSPDisplayList(warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_tri_0),
	gsSPDisplayList(mat_warp_pipe_boo_yellow_unlocked_sm64_material_005),
	gsSPDisplayList(warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_tri_1),
	gsSPDisplayList(mat_warp_pipe_boo_yellow_unlocked_sm64_material_009),
	gsSPDisplayList(warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_tri_2),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_boo_yellow_unlocked_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
