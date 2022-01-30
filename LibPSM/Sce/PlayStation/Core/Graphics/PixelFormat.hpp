#ifndef LIB_PSM_PIXELFORMAT_H
#define LIB_PSM_PIXELFORMAT_H 1

namespace Sce::PlayStation::Core::Graphics {
	enum PixelFormat : unsigned int {
		PixelFormat_None = 0,
		PixelFormat_Rgba = 1,
		PixelFormat_RgbaH = 2,
		PixelFormat_Rgba4444 = 3,
		PixelFormat_Rgba5551 = 4,
		PixelFormat_Rgb565 = 5,
		PixelFormat_LuminanceAlpha = 6,
		PixelFormat_LuminanceAlphaH = 7,
		PixelFormat_Luminance = 8,
		PixelFormat_LuminanceH = 9,
		PixelFormat_Alpha = 10,
		PixelFormat_AlphaH = 11,
		PixelFormat_Depth16 = 12,
		PixelFormat_Depth24 = 13,
		PixelFormat_Depth16Stencil8 = 14,
		PixelFormat_Depth24Stencil8 = 15,
		PixelFormat_Dxt1 = 16,
		PixelFormat_Dxt2 = 17,
		PixelFormat_Dxt3 = 18,
		PixelFormat_Dxt4 = 19,
		PixelFormat_Dxt5 = 20
	};
}

#endif