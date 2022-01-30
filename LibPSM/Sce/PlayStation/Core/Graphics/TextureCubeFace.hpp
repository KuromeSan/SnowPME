#ifndef LIB_PSM_TEXTURECUBEFACE_H
#define LIB_PSM_TEXTURECUBEFACE_H 1
#include <string>
namespace Sce::PlayStation::Core::Graphics {
	enum TextureCubeFace : uint8_t {
		TextureCubeFace_PositiveX = 0,
		TextureCubeFace_NegativeX = 1,
		TextureCubeFace_PositiveY = 2,
		TextureCubeFace_NegativeY = 3,
		TextureCubeFace_PositiveZ = 4,
		TextureCubeFace_NegativeZ = 5
	};
}

#endif