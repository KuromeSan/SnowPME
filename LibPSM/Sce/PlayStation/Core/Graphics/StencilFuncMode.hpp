#ifndef LIB_PSM_STENCILFUNCMODE_H
#define LIB_PSM_STENCILFUNCMODE_H 1
#include <string>
namespace Sce::PlayStation::Core::Graphics {
	enum StencilFuncMode : uint8_t {
		StencilFuncMode_Always = 0,
		StencilFuncMode_Never = 1,
		StencilFuncMode_Equal = 2,
		StencilFuncMode_NotEqual = 3,
		StencilFuncMode_Less = 4,
		StencilFuncMode_Greater = 5,
		StencilFuncMode_LEqual = 6,
		StencilFuncMode_GEqual = 7,
		StencilFuncMode_NotEequal = 3
	};
}

#endif