#ifndef LIB_PSM_DEPTHFUNCMODE_H
#define LIB_PSM_DEPTHFUNCMODE_H
#include <string>

namespace Sce::PlayStation::Core::Graphics {
	enum DepthFuncMode : uint8_t {
		DepthFuncMode_Always = 0,
		DepthFuncMode_Never = 1,
		DepthFuncMode_Equal = 2,
		DepthFuncMode_NotEqual = 3,
		DepthFuncMode_Less = 4,
		DepthFuncMode_Greater = 5,
		DepthFuncMode_LEqual = 6,
		DepthFuncMode_GEqual = 7,
		DepthFuncMode_NotEequal = 3
	};
}

#endif