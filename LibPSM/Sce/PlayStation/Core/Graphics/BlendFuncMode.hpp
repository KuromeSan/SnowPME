#ifndef LIB_PSM_BLENDFUNCMODE_H
#define LIB_PSM_BLENDFUNCMODE_H
#include <string>

namespace Sce::PlayStation::Core::Graphics {
	enum BlendFuncMode : uint8_t {
		BlendFuncMode_Add = 0,
		BlendFuncMode_Subtract = 1,
		BlendFuncMode_ReverseSubtract = 2
	};
}

#endif