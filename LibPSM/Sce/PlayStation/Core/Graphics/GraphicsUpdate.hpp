#ifndef LIB_PSM_GRAPHICSUPDATE_H
#define LIB_PSM_GRAPHICSUPDATE_H

namespace Sce::PlayStation::Core::Graphics {
	enum GraphicsUpdate : unsigned int {
		GraphicsUpdate_None = 0,
		GraphicsUpdate_Enable = 1,
		GraphicsUpdate_Scissor = 2,
		GraphicsUpdate_Viewport = 4,
		GraphicsUpdate_DepthRange = 8,
		GraphicsUpdate_ClearColor = 16,
		GraphicsUpdate_ClearDepth = 32,
		GraphicsUpdate_ClearStencil = 64,
		GraphicsUpdate_CullFace = 128,
		GraphicsUpdate_BlendFunc = 256,
		GraphicsUpdate_DepthFunc = 512,
		GraphicsUpdate_PolygonOffset = 1024,
		GraphicsUpdate_StencilFunc = 2048,
		GraphicsUpdate_StencilOp = 4096,
		GraphicsUpdate_ColorMask = 8192,
		GraphicsUpdate_LineWidth = 16384,
		GraphicsUpdate_ShaderProgram = 16777216,
		GraphicsUpdate_FrameBuffer = 33554432,
		GraphicsUpdate_VertexBuffer = 805306368,
		GraphicsUpdate_Texture = 3221225472,
		GraphicsUpdate_VertexBuffer0 = 268435456,
		GraphicsUpdate_VertexBufferN = 536870912,
		GraphicsUpdate_Texture0 = 1073741824,
		GraphicsUpdate_TextureN = 2147483648
	};
}

#endif