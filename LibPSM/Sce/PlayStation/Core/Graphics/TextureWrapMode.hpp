#ifndef LIB_PSM_TEXTUREWRAPMODE_H
#define LIB_PSM_TEXTUREWRAPMODE_H 1
#include <string>
namespace Sce::PlayStation::Core::Graphics {
	enum TextureWrapMode : uint8_t {
		TextureWrapMode_ClampToEdge = 0,
		TextureWrapMode_Repeat = 1
	};
}

#endif