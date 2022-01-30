#ifndef LIB_PSM_PIXELBUFFERTYPE_H
#define LIB_PSM_PIXELBUFFERTYPE_H

namespace Sce::PlayStation::Core::Graphics {
	enum PixelBufferType : unsigned int {
		PixelBufferType_None = 0,
		PixelBufferType_Texture2D = 1,
		PixelBufferType_TextureCube = 2,
		PixelBufferType_ColorBuffer = 3,
		PixelBufferType_DepthBuffer = 4
	};
}

#endif