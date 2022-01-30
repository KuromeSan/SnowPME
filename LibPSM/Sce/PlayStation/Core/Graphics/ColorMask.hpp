#ifndef LIB_PSM_COLORMASK_H
#define LIB_PSM_COLORMASK_H
#include <string>

namespace Sce::PlayStation::Core::Graphics {
	enum ColorMask : uint8_t {
		ColorMask_None = 0,
		ColorMask_R = 1,
		ColorMask_G = 2,
		ColorMask_B = 4,
		ColorMask_A = 8,
		ColorMask_Rgb = 7,
		ColorMask_Rgba = 15
	};
}

#endif