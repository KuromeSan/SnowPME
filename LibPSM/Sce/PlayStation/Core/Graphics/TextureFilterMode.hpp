#ifndef LIB_PSM_TEXTUREFILTERMODE_H
#define LIB_PSM_TEXTUREFILTERMODE_H 1
#include <string>
namespace Sce::PlayStation::Core::Graphics {
	enum TextureFilterMode : uint8_t {
		TextureFilterMode_Nearest = 0,
		TextureFilterMode_Linear = 1,
		TextureFilterMode_Disabled = 2
	};
}

#endif