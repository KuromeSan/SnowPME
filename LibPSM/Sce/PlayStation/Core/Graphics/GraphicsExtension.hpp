#ifndef LIB_PSM_GRAPHICSEXTENSION_H
#define LIB_PSM_GRAPHICSEXTENSION_H

namespace Sce::PlayStation::Core::Graphics {
	enum GraphicsExtension : unsigned int {
		GraphicsExtension_None = 0,
		GraphicsExtension_DepthTexture = 1,
		GraphicsExtension_Texture3D = 2,
		GraphicsExtension_TextureNpot = 4,
		GraphicsExtension_TextureFilterAnisotropic = 8,
		GraphicsExtension_Rgb8Rgba8 = 16,
		GraphicsExtension_Depth24 = 32,
		GraphicsExtension_Depth32 = 64,
		GraphicsExtension_PackedDepthStencil = 128,
		GraphicsExtension_VertexHalfFloat = 256,
		GraphicsExtension_Vertex1010102 = 512,
		GraphicsExtension_TextureFloat = 1024,
		GraphicsExtension_TextureHalfFloat = 2048,
		GraphicsExtension_TextureFloatLinear = 4096,
		GraphicsExtension_TextureHalfFloatLinear = 8192,
		GraphicsExtension_Texture2101010Rev = 16384
	};
}

#endif