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
	{{{-102, -106, 0},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-72, 206, 70},0, {-16, -16},{0x59, 0x0, 0xA5, 0xFF}}},
	{{{-72, -106, 70},0, {-16, 4008},{0x59, 0x0, 0xA5, 0xFF}}},
	{{{-102, 206, 0},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-72, -106, -69},0, {974, 4008},{0x59, 0x0, 0x5B, 0xFF}}},
	{{{-102, 206, 0},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-102, -106, 0},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-72, 206, -69},0, {974, -16},{0x59, 0x0, 0x5B, 0xFF}}},
	{{{73, -106, 70},0, {974, 4008},{0xA7, 0x0, 0xA5, 0xFF}}},
	{{{73, 206, 70},0, {974, -16},{0xA7, 0x0, 0xA5, 0xFF}}},
	{{{104, 206, 0},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{104, -106, 0},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{0, -106, 100},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{73, 206, 70},0, {-16, -16},{0xA7, 0x0, 0xA5, 0xFF}}},
	{{{73, -106, 70},0, {-16, 4008},{0xA7, 0x0, 0xA5, 0xFF}}},
	{{{0, 206, 100},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-72, -106, 70},0, {974, 4008},{0x59, 0x0, 0xA5, 0xFF}}},
	{{{-72, 206, 70},0, {974, -16},{0x59, 0x0, 0xA5, 0xFF}}},
	{{{0, 206, 100},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -106, 100},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{73, -106, -69},0, {974, 4008},{0xA8, 0x0, 0x5C, 0xFF}}},
	{{{0, 206, -98},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -106, -98},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{73, 206, -69},0, {974, -16},{0xA8, 0x0, 0x5C, 0xFF}}},
	{{{0, -106, -98},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-72, 206, -69},0, {-16, -16},{0x59, 0x0, 0x5B, 0xFF}}},
	{{{-72, -106, -69},0, {-16, 4008},{0x59, 0x0, 0x5B, 0xFF}}},
	{{{0, 206, -98},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{104, -106, 0},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{73, 206, -69},0, {-16, -16},{0xA8, 0x0, 0x5C, 0xFF}}},
	{{{73, -106, -69},0, {-16, 4008},{0xA8, 0x0, 0x5C, 0xFF}}},
	{{{104, 206, 0},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{157, -106, 0},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{157, 206, 0},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{111, 206, 106},0, {-16, -16},{0x59, 0x0, 0x5B, 0xFF}}},
	{{{111, -106, 106},0, {-16, 4008},{0x59, 0x0, 0x5B, 0xFF}}},
	{{{111, -106, 106},0, {974, 4008},{0x59, 0x0, 0x5B, 0xFF}}},
	{{{111, 206, 106},0, {974, -16},{0x59, 0x0, 0x5B, 0xFF}}},
	{{{0, 206, 150},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -106, 150},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -106, 150},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 206, 150},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-109, 206, 106},0, {-16, -16},{0xA7, 0x0, 0x5B, 0xFF}}},
	{{{-109, -106, 106},0, {-16, 4008},{0xA7, 0x0, 0x5B, 0xFF}}},
	{{{-109, -106, -105},0, {974, 4008},{0xA7, 0x0, 0xA5, 0xFF}}},
	{{{0, 206, -148},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -106, -148},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-109, 206, -105},0, {974, -16},{0xA7, 0x0, 0xA5, 0xFF}}},
	{{{0, -106, -148},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 206, -148},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{111, 206, -105},0, {-16, -16},{0x58, 0x0, 0xA4, 0xFF}}},
	{{{111, -106, -105},0, {-16, 4008},{0x58, 0x0, 0xA4, 0xFF}}},
	{{{-109, -106, 106},0, {974, 4008},{0xA7, 0x0, 0x5B, 0xFF}}},
	{{{-109, 206, 106},0, {974, -16},{0xA7, 0x0, 0x5B, 0xFF}}},
	{{{-155, 206, 0},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-155, -106, 0},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-155, -106, 0},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-155, 206, 0},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-109, 206, -105},0, {-16, -16},{0xA7, 0x0, 0xA5, 0xFF}}},
	{{{-109, -106, -105},0, {-16, 4008},{0xA7, 0x0, 0xA5, 0xFF}}},
	{{{111, -106, -105},0, {974, 4008},{0x58, 0x0, 0xA4, 0xFF}}},
	{{{111, 206, -105},0, {974, -16},{0x58, 0x0, 0xA4, 0xFF}}},
	{{{157, 206, 0},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{157, -106, 0},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
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
	{{{-102, 66, 100},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{104, 66, 100},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{104, 66, -98},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-102, 66, -98},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_001_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_001_displaylist_mesh_vtx_1[16] = {
	{{{157, 206, 0},0, {842, -46},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{104, 206, 0},0, {730, 116},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{73, 206, 70},0, {904, 400},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{73, 206, -69},0, {426, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{111, 206, -105},0, {384, -190},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 206, -98},0, {168, 170},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 206, -148},0, {-2, 36},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-72, 206, -69},0, {108, 478},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-109, 206, -105},0, {-88, 498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-102, 206, 0},0, {282, 764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-155, 206, 0},0, {170, 926},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-72, 206, 70},0, {588, 860},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-109, 206, 106},0, {628, 1066},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 206, 100},0, {846, 708},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 206, 150},0, {1016, 844},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{111, 206, 106},0, {1104, 382},{0x0, 0x7F, 0x0, 0xFF}}},
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_warp_pipe_boo_side_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 2047, 128),
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_warp_pipe_boo_top_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 1023, 128),
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
	{{{-1, -106, -98},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-73, 206, -68},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-73, -106, -68},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-1, 206, -98},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{70, -106, -68},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-1, 206, -98},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1, -106, -98},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{70, 206, -68},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-73, -106, 75},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-73, 206, 75},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-1, 206, 105},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, -106, 105},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-103, -106, 3},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-73, 206, 75},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-73, -106, 75},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-103, 206, 3},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-73, -106, -68},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-73, 206, -68},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-103, 206, 3},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-103, -106, 3},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{70, -106, 75},0, {974, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{100, 206, 3},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{100, -106, 3},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{70, 206, 75},0, {974, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{100, -106, 3},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{70, 206, -68},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{70, -106, -68},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{100, 206, 3},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-1, -106, 105},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{70, 206, 75},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{70, -106, 75},0, {-16, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-1, 206, 105},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, -106, 157},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1, 206, 157},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-110, 206, 112},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-110, -106, 112},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-110, -106, 112},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-110, 206, 112},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-155, 206, 3},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-155, -106, 3},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-155, -106, 3},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-155, 206, 3},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-110, 206, -105},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-110, -106, -105},0, {-16, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{107, -106, -105},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{152, 206, 3},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{152, -106, 3},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{107, 206, -105},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{152, -106, 3},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{152, 206, 3},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{107, 206, 112},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{107, -106, 112},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-110, -106, -105},0, {974, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-110, 206, -105},0, {974, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-1, 206, -150},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, -106, -150},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, -106, -150},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, 206, -150},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{107, 206, -105},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{107, -106, -105},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{107, -106, 112},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{107, 206, 112},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-1, 206, 157},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1, -106, 157},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
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
	{{{-103, 57, -98},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-103, 57, 105},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{100, 57, 105},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{100, 57, -98},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_green_locked_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_green_locked_001_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_green_locked_001_displaylist_mesh_vtx_1[16] = {
	{{{-1, 206, 157},0, {842, -46},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1, 206, 105},0, {730, 116},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-73, 206, 75},0, {904, 400},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{70, 206, 75},0, {426, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{107, 206, 112},0, {384, -190},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{100, 206, 3},0, {168, 170},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{152, 206, 3},0, {-2, 36},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{70, 206, -68},0, {108, 478},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{107, 206, -105},0, {-88, 498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1, 206, -98},0, {282, 764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1, 206, -150},0, {170, 926},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-73, 206, -68},0, {588, 860},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-110, 206, -105},0, {628, 1066},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-103, 206, 3},0, {846, 708},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-155, 206, 3},0, {1016, 844},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-110, 206, 112},0, {1104, 382},{0x0, 0x7F, 0x0, 0xFF}}},
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
	{{{55, 219, 166},0, {517, 389},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{55, 219, 107},0, {560, 389},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-64, 219, 107},0, {560, 347},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-64, 219, 166},0, {517, 347},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{55, 129, 166},0, {1003, 700},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{55, 219, 166},0, {1003, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-64, 219, 166},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-64, 129, 166},0, {-16, 700},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-24, 90, 166},0, {321, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{16, 90, 166},0, {666, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{55, 129, 107},0, {475, 432},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{55, 219, 107},0, {517, 432},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{55, 219, 166},0, {517, 389},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{55, 129, 166},0, {475, 389},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{55, 129, 107},0, {475, 432},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{55, 129, 166},0, {475, 389},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{16, 90, 166},0, {475, 389},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{16, 90, 107},0, {475, 432},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{-64, 129, 166},0, {475, 347},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-64, 219, 166},0, {517, 347},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-64, 219, 107},0, {517, 304},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-64, 129, 107},0, {475, 304},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-64, 129, 166},0, {475, 347},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-64, 129, 107},0, {475, 304},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-25, 90, 107},0, {475, 304},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-24, 90, 166},0, {475, 347},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-64, 129, 107},0, {1005, 702},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-64, 219, 107},0, {1005, -13},{0x0, 0x0, 0x81, 0xFF}}},
	{{{55, 219, 107},0, {-13, -13},{0x0, 0x0, 0x81, 0xFF}}},
	{{{55, 129, 107},0, {-13, 702},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-64, 129, 107},0, {1005, 702},{0x0, 0x0, 0x81, 0xFF}}},
	{{{55, 129, 107},0, {-13, 702},{0x0, 0x0, 0x81, 0xFF}}},
	{{{16, 90, 107},0, {323, 1010},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-25, 90, 107},0, {669, 1010},{0x0, 0x0, 0x81, 0xFF}}},
	{{{16, 90, 107},0, {432, 389},{0x0, 0x81, 0x0, 0xFF}}},
	{{{16, 90, 166},0, {475, 389},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-24, 90, 166},0, {475, 347},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-25, 90, 107},0, {432, 347},{0x0, 0x81, 0x0, 0xFF}}},
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_green_locked_warp_pipe_green_side_chain_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 2047, 128),
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_green_locked_warp_pipe_green_top_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 1023, 128),
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_green_locked_lock_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 1023, 128),
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
	{{{2, -106, -106},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-70, 206, -76},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-70, -106, -76},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{2, 206, -106},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{73, -106, -76},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{2, 206, -106},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{2, -106, -106},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{73, 206, -76},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-70, -106, 67},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-70, 206, 67},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{2, 206, 97},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{2, -106, 97},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-100, -106, -5},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-70, 206, 67},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-70, -106, 67},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-100, 206, -5},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-70, -106, -76},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-70, 206, -76},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-100, 206, -5},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-100, -106, -5},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{73, -106, 67},0, {974, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{103, 206, -5},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{103, -106, -5},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{73, 206, 67},0, {974, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{103, -106, -5},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{73, 206, -76},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{73, -106, -76},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{103, 206, -5},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{2, -106, 97},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{73, 206, 67},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{73, -106, 67},0, {-16, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{2, 206, 97},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{2, -106, 149},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{2, 206, 149},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-107, 206, 104},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-107, -106, 104},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-107, -106, 104},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-107, 206, 104},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-152, 206, -5},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-152, -106, -5},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-152, -106, -5},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-152, 206, -5},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-107, 206, -113},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-107, -106, -113},0, {-16, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{110, -106, -113},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{155, 206, -5},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{155, -106, -5},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{110, 206, -113},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{155, -106, -5},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{155, 206, -5},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{110, 206, 104},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{110, -106, 104},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-107, -106, -113},0, {974, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-107, 206, -113},0, {974, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{2, 206, -158},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{2, -106, -158},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{2, -106, -158},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{2, 206, -158},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{110, 206, -113},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{110, -106, -113},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{110, -106, 104},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{110, 206, 104},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{2, 206, 149},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{2, -106, 149},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
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
	{{{-100, 57, -106},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-100, 57, 97},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{103, 57, 97},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{103, 57, -106},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_green_unlocked_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_green_unlocked_001_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_green_unlocked_001_displaylist_mesh_vtx_1[16] = {
	{{{2, 206, 149},0, {842, -46},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{2, 206, 97},0, {730, 116},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-70, 206, 67},0, {904, 400},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{73, 206, 67},0, {426, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{110, 206, 104},0, {384, -190},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{103, 206, -5},0, {168, 170},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{155, 206, -5},0, {-2, 36},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{73, 206, -76},0, {108, 478},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{110, 206, -113},0, {-88, 498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{2, 206, -106},0, {282, 764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{2, 206, -158},0, {170, 926},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-70, 206, -76},0, {588, 860},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-107, 206, -113},0, {628, 1066},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-100, 206, -5},0, {846, 708},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-152, 206, -5},0, {1016, 844},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-107, 206, 104},0, {1104, 382},{0x0, 0x7F, 0x0, 0xFF}}},
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
	{{{36, 70, 137},0, {517, 389},{0xCC, 0x2C, 0x95, 0xFF}}},
	{{{50, 18, 109},0, {560, 389},{0xCC, 0x2C, 0x95, 0xFF}}},
	{{{-55, -28, 140},0, {560, 347},{0xCC, 0x2C, 0x95, 0xFF}}},
	{{{-69, 23, 168},0, {517, 347},{0xCC, 0x2C, 0x95, 0xFF}}},
	{{{72, 38, 211},0, {1003, 700},{0xE2, 0x6B, 0x3D, 0xFF}}},
	{{{36, 70, 137},0, {1003, -16},{0xE2, 0x6B, 0x3D, 0xFF}}},
	{{{-69, 23, 168},0, {-16, -16},{0xE2, 0x6B, 0x3D, 0xFF}}},
	{{{-33, -9, 242},0, {-16, 700},{0xE2, 0x6B, 0x3D, 0xFF}}},
	{{{17, -7, 263},0, {321, 1008},{0xE2, 0x6B, 0x3D, 0xFF}}},
	{{{52, 9, 253},0, {666, 1008},{0xE2, 0x6B, 0x3D, 0xFF}}},
	{{{85, -14, 183},0, {475, 432},{0x71, 0x2F, 0xDF, 0xFF}}},
	{{{50, 18, 109},0, {517, 432},{0x71, 0x2F, 0xDF, 0xFF}}},
	{{{36, 70, 137},0, {517, 389},{0x71, 0x2F, 0xDF, 0xFF}}},
	{{{72, 38, 211},0, {475, 389},{0x71, 0x2F, 0xDF, 0xFF}}},
	{{{85, -14, 183},0, {475, 432},{0x73, 0x1, 0x36, 0xFF}}},
	{{{72, 38, 211},0, {475, 389},{0x73, 0x1, 0x36, 0xFF}}},
	{{{52, 9, 253},0, {475, 389},{0x73, 0x1, 0x36, 0xFF}}},
	{{{66, -43, 225},0, {475, 432},{0x73, 0x1, 0x36, 0xFF}}},
	{{{-33, -9, 242},0, {475, 347},{0x8F, 0xD1, 0x21, 0xFF}}},
	{{{-69, 23, 168},0, {517, 347},{0x8F, 0xD1, 0x21, 0xFF}}},
	{{{-55, -28, 140},0, {517, 304},{0x8F, 0xD1, 0x21, 0xFF}}},
	{{{-20, -61, 214},0, {475, 304},{0x8F, 0xD1, 0x21, 0xFF}}},
	{{{-33, -9, 242},0, {475, 347},{0xD7, 0xBF, 0x65, 0xFF}}},
	{{{-20, -61, 214},0, {475, 304},{0xD7, 0xBF, 0x65, 0xFF}}},
	{{{30, -59, 236},0, {475, 304},{0xD7, 0xBF, 0x65, 0xFF}}},
	{{{17, -7, 263},0, {475, 347},{0xD7, 0xBF, 0x65, 0xFF}}},
	{{{-20, -61, 214},0, {1005, 702},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{-55, -28, 140},0, {1005, -13},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{50, 18, 109},0, {-13, -13},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{85, -14, 183},0, {-13, 702},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{-20, -61, 214},0, {1005, 702},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{85, -14, 183},0, {-13, 702},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{66, -43, 225},0, {323, 1010},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{30, -59, 236},0, {669, 1010},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{66, -43, 225},0, {432, 389},{0x34, 0xD4, 0x6B, 0xFF}}},
	{{{52, 9, 253},0, {475, 389},{0x34, 0xD4, 0x6B, 0xFF}}},
	{{{17, -7, 263},0, {475, 347},{0x34, 0xD4, 0x6B, 0xFF}}},
	{{{30, -59, 236},0, {432, 347},{0x34, 0xD4, 0x6B, 0xFF}}},
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_green_unlocked_warp_pipe_green_side_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 2047, 128),
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_green_unlocked_warp_pipe_green_top_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 1023, 128),
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_green_unlocked_lock_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 1023, 128),
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
	{{{-102, -112, 0},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-71, 201, 72},0, {-16, -16},{0x59, 0x0, 0xA5, 0xFF}}},
	{{{-71, -112, 72},0, {-16, 4008},{0x59, 0x0, 0xA5, 0xFF}}},
	{{{-102, 201, 0},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-71, -112, -71},0, {974, 4008},{0x59, 0x0, 0x5B, 0xFF}}},
	{{{-102, 201, 0},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-102, -112, 0},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-71, 201, -71},0, {974, -16},{0x59, 0x0, 0x5B, 0xFF}}},
	{{{73, -112, 72},0, {974, 4008},{0xA5, 0x0, 0xA7, 0xFF}}},
	{{{73, 201, 72},0, {974, -16},{0xA5, 0x0, 0xA7, 0xFF}}},
	{{{103, 201, 0},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{103, -112, 0},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3, -112, 102},0, {974, 4008},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{73, 201, 72},0, {-16, -16},{0xA5, 0x0, 0xA7, 0xFF}}},
	{{{73, -112, 72},0, {-16, 4008},{0xA5, 0x0, 0xA7, 0xFF}}},
	{{{3, 201, 102},0, {974, -16},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{-71, -112, 72},0, {974, 4008},{0x59, 0x0, 0xA5, 0xFF}}},
	{{{-71, 201, 72},0, {974, -16},{0x59, 0x0, 0xA5, 0xFF}}},
	{{{3, 201, 102},0, {-16, -16},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{3, -112, 102},0, {-16, 4008},{0xFF, 0x0, 0x81, 0xFF}}},
	{{{73, -112, -71},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{3, 201, -101},0, {-16, -16},{0xFF, 0x0, 0x7F, 0xFF}}},
	{{{3, -112, -101},0, {-16, 4008},{0xFF, 0x0, 0x7F, 0xFF}}},
	{{{73, 201, -71},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{3, -112, -101},0, {974, 4008},{0xFF, 0x0, 0x7F, 0xFF}}},
	{{{-71, 201, -71},0, {-16, -16},{0x59, 0x0, 0x5B, 0xFF}}},
	{{{-71, -112, -71},0, {-16, 4008},{0x59, 0x0, 0x5B, 0xFF}}},
	{{{3, 201, -101},0, {974, -16},{0xFF, 0x0, 0x7F, 0xFF}}},
	{{{103, -112, 0},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{73, 201, -71},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{73, -112, -71},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{103, 201, 0},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{155, -112, 0},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{155, 201, 0},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{110, 201, 109},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{110, -112, 109},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{110, -112, 109},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{110, 201, 109},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{3, 201, 154},0, {-16, -16},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{3, -112, 154},0, {-16, 4008},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{3, -112, 154},0, {974, 4008},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{3, 201, 154},0, {974, -16},{0x1, 0x0, 0x7F, 0xFF}}},
	{{{-109, 201, 109},0, {-16, -16},{0xA7, 0x0, 0x5B, 0xFF}}},
	{{{-109, -112, 109},0, {-16, 4008},{0xA7, 0x0, 0x5B, 0xFF}}},
	{{{-109, -112, -108},0, {974, 4008},{0xA7, 0x0, 0xA5, 0xFF}}},
	{{{3, 201, -153},0, {-16, -16},{0x1, 0x0, 0x81, 0xFF}}},
	{{{3, -112, -153},0, {-16, 4008},{0x1, 0x0, 0x81, 0xFF}}},
	{{{-109, 201, -108},0, {974, -16},{0xA7, 0x0, 0xA5, 0xFF}}},
	{{{3, -112, -153},0, {974, 4008},{0x1, 0x0, 0x81, 0xFF}}},
	{{{3, 201, -153},0, {974, -16},{0x1, 0x0, 0x81, 0xFF}}},
	{{{110, 201, -108},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{110, -112, -108},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-109, -112, 109},0, {974, 4008},{0xA7, 0x0, 0x5B, 0xFF}}},
	{{{-109, 201, 109},0, {974, -16},{0xA7, 0x0, 0x5B, 0xFF}}},
	{{{-156, 201, 0},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-156, -112, 0},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-156, -112, 0},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-156, 201, 0},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-109, 201, -108},0, {-16, -16},{0xA7, 0x0, 0xA5, 0xFF}}},
	{{{-109, -112, -108},0, {-16, 4008},{0xA7, 0x0, 0xA5, 0xFF}}},
	{{{110, -112, -108},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{110, 201, -108},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{155, 201, 0},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{155, -112, 0},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
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
	{{{-102, 52, 102},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{103, 52, 102},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{103, 52, -101},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-102, 52, -101},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_red_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_red_001_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_red_001_displaylist_mesh_vtx_1[16] = {
	{{{155, 201, 0},0, {842, -46},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{103, 201, 0},0, {730, 116},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{73, 201, 72},0, {904, 400},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{73, 201, -71},0, {426, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{110, 201, -108},0, {384, -190},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3, 201, -101},0, {168, 170},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3, 201, -153},0, {-2, 36},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-71, 201, -71},0, {108, 478},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-109, 201, -108},0, {-88, 498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-102, 201, 0},0, {282, 764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-156, 201, 0},0, {170, 926},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-71, 201, 72},0, {588, 860},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-109, 201, 109},0, {628, 1066},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3, 201, 102},0, {846, 708},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3, 201, 154},0, {1016, 844},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{110, 201, 109},0, {1104, 382},{0x0, 0x7F, 0x0, 0xFF}}},
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_red_warp_pipe_red_side_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 2047, 128),
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_red_warp_pipe_red_top_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 1023, 128),
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
	{{{-2, -106, -98},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-74, 206, -68},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-74, -106, -68},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-2, 206, -98},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{69, -106, -68},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-2, 206, -98},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-2, -106, -98},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{69, 206, -68},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-74, -106, 75},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-74, 206, 75},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-2, 206, 105},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-2, -106, 105},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-104, -106, 3},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-74, 206, 75},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-74, -106, 75},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-104, 206, 3},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-74, -106, -68},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-74, 206, -68},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-104, 206, 3},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-104, -106, 3},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{69, -106, 75},0, {974, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{99, 206, 3},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{99, -106, 3},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{69, 206, 75},0, {974, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{99, -106, 3},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{69, 206, -68},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{69, -106, -68},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{99, 206, 3},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-2, -106, 105},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{69, 206, 75},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{69, -106, 75},0, {-16, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-2, 206, 105},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-2, -106, 157},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-2, 206, 157},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-111, 206, 112},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-111, -106, 112},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-111, -106, 112},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-111, 206, 112},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-156, 206, 3},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-156, -106, 3},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-156, -106, 3},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-156, 206, 3},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-111, 206, -105},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-111, -106, -105},0, {-16, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{106, -106, -105},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{151, 206, 3},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{151, -106, 3},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{106, 206, -105},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{151, -106, 3},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{151, 206, 3},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{106, 206, 112},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{106, -106, 112},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-111, -106, -105},0, {974, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-111, 206, -105},0, {974, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-2, 206, -150},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-2, -106, -150},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-2, -106, -150},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-2, 206, -150},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{106, 206, -105},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{106, -106, -105},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{106, -106, 112},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{106, 206, 112},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-2, 206, 157},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-2, -106, 157},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
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
	{{{-104, 57, -98},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-104, 57, 105},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{99, 57, 105},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{99, 57, -98},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_yellow_locked_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_yellow_locked_001_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_yellow_locked_001_displaylist_mesh_vtx_1[16] = {
	{{{-2, 206, 157},0, {842, -46},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2, 206, 105},0, {730, 116},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-74, 206, 75},0, {904, 400},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{69, 206, 75},0, {426, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{106, 206, 112},0, {384, -190},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{99, 206, 3},0, {168, 170},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{151, 206, 3},0, {-2, 36},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{69, 206, -68},0, {108, 478},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{106, 206, -105},0, {-88, 498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2, 206, -98},0, {282, 764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2, 206, -150},0, {170, 926},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-74, 206, -68},0, {588, 860},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-111, 206, -105},0, {628, 1066},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-104, 206, 3},0, {846, 708},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-156, 206, 3},0, {1016, 844},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-111, 206, 112},0, {1104, 382},{0x0, 0x7F, 0x0, 0xFF}}},
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
	{{{53, 219, 166},0, {517, 389},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{53, 219, 107},0, {560, 389},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-65, 219, 107},0, {560, 347},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-65, 219, 166},0, {517, 347},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{53, 129, 166},0, {1003, 700},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{53, 219, 166},0, {1003, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-65, 219, 166},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-65, 129, 166},0, {-16, 700},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-26, 90, 166},0, {321, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{14, 90, 166},0, {666, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{53, 129, 107},0, {475, 432},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{53, 219, 107},0, {517, 432},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{53, 219, 166},0, {517, 389},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{53, 129, 166},0, {475, 389},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{53, 129, 107},0, {475, 432},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{53, 129, 166},0, {475, 389},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{14, 90, 166},0, {475, 389},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{14, 90, 107},0, {475, 432},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{-65, 129, 166},0, {475, 347},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-65, 219, 166},0, {517, 347},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-65, 219, 107},0, {517, 304},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-65, 129, 107},0, {475, 304},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-65, 129, 166},0, {475, 347},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-65, 129, 107},0, {475, 304},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-26, 90, 107},0, {475, 304},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-26, 90, 166},0, {475, 347},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-65, 129, 107},0, {1005, 702},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-65, 219, 107},0, {1005, -13},{0x0, 0x0, 0x81, 0xFF}}},
	{{{53, 219, 107},0, {-13, -13},{0x0, 0x0, 0x81, 0xFF}}},
	{{{53, 129, 107},0, {-13, 702},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-65, 129, 107},0, {1005, 702},{0x0, 0x0, 0x81, 0xFF}}},
	{{{53, 129, 107},0, {-13, 702},{0x0, 0x0, 0x81, 0xFF}}},
	{{{14, 90, 107},0, {323, 1010},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-26, 90, 107},0, {669, 1010},{0x0, 0x0, 0x81, 0xFF}}},
	{{{14, 90, 107},0, {432, 389},{0x0, 0x81, 0x0, 0xFF}}},
	{{{14, 90, 166},0, {475, 389},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-26, 90, 166},0, {475, 347},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-26, 90, 107},0, {432, 347},{0x0, 0x81, 0x0, 0xFF}}},
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_yellow_locked_warp_pipe_yellow_side_chain_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 2047, 128),
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_yellow_locked_warp_pipe_yellow_top_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 1023, 128),
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_yellow_locked_lock_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 1023, 128),
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
	{{{0, -106, -104},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-72, 206, -74},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-72, -106, -74},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{0, 206, -104},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{71, -106, -74},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{0, 206, -104},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -106, -104},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{71, 206, -74},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-72, -106, 69},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-72, 206, 69},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{0, 206, 99},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -106, 99},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-102, -106, -3},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-72, 206, 69},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-72, -106, 69},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-102, 206, -3},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-72, -106, -74},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-72, 206, -74},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-102, 206, -3},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-102, -106, -3},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{71, -106, 69},0, {974, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{101, 206, -3},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{101, -106, -3},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{71, 206, 69},0, {974, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{101, -106, -3},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{71, 206, -74},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{71, -106, -74},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{101, 206, -3},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{0, -106, 99},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{71, 206, 69},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{71, -106, 69},0, {-16, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{0, 206, 99},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -106, 151},0, {974, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 206, 151},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-109, 206, 106},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-109, -106, 106},0, {-16, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-109, -106, 106},0, {974, 4008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-109, 206, 106},0, {974, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-154, 206, -3},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-154, -106, -3},0, {-16, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-154, -106, -3},0, {974, 4008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-154, 206, -3},0, {974, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-109, 206, -111},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-109, -106, -111},0, {-16, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{108, -106, -111},0, {974, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{153, 206, -3},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{153, -106, -3},0, {-16, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{108, 206, -111},0, {974, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{153, -106, -3},0, {974, 4008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{153, 206, -3},0, {974, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{108, 206, 106},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{108, -106, 106},0, {-16, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-109, -106, -111},0, {974, 4008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-109, 206, -111},0, {974, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{0, 206, -156},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -106, -156},0, {-16, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -106, -156},0, {974, 4008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 206, -156},0, {974, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{108, 206, -111},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{108, -106, -111},0, {-16, 4008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{108, -106, 106},0, {974, 4008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{108, 206, 106},0, {974, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{0, 206, 151},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -106, 151},0, {-16, 4008},{0x0, 0x0, 0x7F, 0xFF}}},
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
	{{{-102, 57, -104},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-102, 57, 99},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{101, 57, 99},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{101, 57, -104},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx warp_pipe_boo_yellow_unlocked_001_displaylist_mesh_vtx_1[16] = {
	{{{0, 206, 151},0, {842, -46},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 206, 99},0, {730, 116},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-72, 206, 69},0, {904, 400},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{71, 206, 69},0, {426, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{108, 206, 106},0, {384, -190},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{101, 206, -3},0, {168, 170},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{153, 206, -3},0, {-2, 36},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{71, 206, -74},0, {108, 478},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{108, 206, -111},0, {-88, 498},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 206, -104},0, {282, 764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 206, -156},0, {170, 926},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-72, 206, -74},0, {588, 860},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-109, 206, -111},0, {628, 1066},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-102, 206, -3},0, {846, 708},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-154, 206, -3},0, {1016, 844},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-109, 206, 106},0, {1104, 382},{0x0, 0x7F, 0x0, 0xFF}}},
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
	{{{35, 70, 139},0, {517, 389},{0xCC, 0x2C, 0x95, 0xFF}}},
	{{{48, 18, 111},0, {560, 389},{0xCC, 0x2C, 0x95, 0xFF}}},
	{{{-57, -28, 142},0, {560, 347},{0xCC, 0x2C, 0x95, 0xFF}}},
	{{{-70, 23, 170},0, {517, 347},{0xCC, 0x2C, 0x95, 0xFF}}},
	{{{70, 38, 212},0, {1003, 700},{0xE2, 0x6B, 0x3D, 0xFF}}},
	{{{35, 70, 139},0, {1003, -16},{0xE2, 0x6B, 0x3D, 0xFF}}},
	{{{-70, 23, 170},0, {-16, -16},{0xE2, 0x6B, 0x3D, 0xFF}}},
	{{{-35, -9, 244},0, {-16, 700},{0xE2, 0x6B, 0x3D, 0xFF}}},
	{{{15, -7, 265},0, {321, 1008},{0xE2, 0x6B, 0x3D, 0xFF}}},
	{{{51, 9, 255},0, {666, 1008},{0xE2, 0x6B, 0x3D, 0xFF}}},
	{{{84, -14, 185},0, {475, 432},{0x71, 0x2F, 0xDF, 0xFF}}},
	{{{48, 18, 111},0, {517, 432},{0x71, 0x2F, 0xDF, 0xFF}}},
	{{{35, 70, 139},0, {517, 389},{0x71, 0x2F, 0xDF, 0xFF}}},
	{{{70, 38, 212},0, {475, 389},{0x71, 0x2F, 0xDF, 0xFF}}},
	{{{84, -14, 185},0, {475, 432},{0x73, 0x1, 0x36, 0xFF}}},
	{{{70, 38, 212},0, {475, 389},{0x73, 0x1, 0x36, 0xFF}}},
	{{{51, 9, 255},0, {475, 389},{0x73, 0x1, 0x36, 0xFF}}},
	{{{64, -43, 227},0, {475, 432},{0x73, 0x1, 0x36, 0xFF}}},
	{{{-35, -9, 244},0, {475, 347},{0x8F, 0xD1, 0x21, 0xFF}}},
	{{{-70, 23, 170},0, {517, 347},{0x8F, 0xD1, 0x21, 0xFF}}},
	{{{-57, -28, 142},0, {517, 304},{0x8F, 0xD1, 0x21, 0xFF}}},
	{{{-21, -61, 216},0, {475, 304},{0x8F, 0xD1, 0x21, 0xFF}}},
	{{{-35, -9, 244},0, {475, 347},{0xD7, 0xBF, 0x65, 0xFF}}},
	{{{-21, -61, 216},0, {475, 304},{0xD7, 0xBF, 0x65, 0xFF}}},
	{{{29, -59, 237},0, {475, 304},{0xD7, 0xBF, 0x65, 0xFF}}},
	{{{15, -7, 265},0, {475, 347},{0xD7, 0xBF, 0x65, 0xFF}}},
	{{{-21, -61, 216},0, {1005, 702},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{-57, -28, 142},0, {1005, -13},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{48, 18, 111},0, {-13, -13},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{84, -14, 185},0, {-13, 702},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{-21, -61, 216},0, {1005, 702},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{84, -14, 185},0, {-13, 702},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{64, -43, 227},0, {323, 1010},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{29, -59, 237},0, {669, 1010},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{64, -43, 227},0, {432, 389},{0x34, 0xD4, 0x6B, 0xFF}}},
	{{{51, 9, 255},0, {475, 389},{0x34, 0xD4, 0x6B, 0xFF}}},
	{{{15, -7, 265},0, {475, 347},{0x34, 0xD4, 0x6B, 0xFF}}},
	{{{29, -59, 237},0, {432, 347},{0x34, 0xD4, 0x6B, 0xFF}}},
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_yellow_unlocked_warp_pipe_yellow_side_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 2047, 128),
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_yellow_unlocked_warp_pipe_yellow_top_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 1023, 128),
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
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, warp_pipe_boo_yellow_unlocked_lock_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 1023, 128),
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
