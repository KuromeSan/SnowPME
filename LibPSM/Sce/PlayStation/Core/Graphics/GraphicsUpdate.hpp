#ifndef LIB_PSM_GRAPHICSUPDATE_H
#define LIB_PSM_GRAPHICSUPDATE_H

namespace Sce::PlayStation::Core::Graphics {
	enum GraphicsUpdate : unsigned int {
		eNone = 0,
		eEnable = 1,
		eScissor = 2,
		eViewport = 4,
		eDepthRange = 8,
		eClearColor = 16,
		eClearDepth = 32,
		eClearStencil = 64,
		eCullFace = 128,
		eBlendFunc = 256,
		eDepthFunc = 512,
		ePolygonOffset = 1024,
		eStencilFunc = 2048,
		eStencilOp = 4096,
		eColorMask = 8192,
		eLineWidth = 16384,
		eShaderProgram = 16777216,
		eFrameBuffer = 33554432,
		eVertexBuffer = 805306368,
		eTexture = 3221225472,
		eVertexBuffer0 = 268435456,
		eVertexBufferN = 536870912,
		eTexture0 = 1073741824,
		eTextureN = 2147483648
	};
}

#endif