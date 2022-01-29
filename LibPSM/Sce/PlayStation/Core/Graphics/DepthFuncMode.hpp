#ifndef LIB_PSM_DEPTHFUNCMODE_H
#define LIB_PSM_DEPTHFUNCMODE_H
#include <string>

namespace Sce::PlayStation::Core::Graphics {
	enum DepthFuncMode : uint8_t {
		Always = 1,
		Never = 2,
		Equal = 3,
		NotEqual = 4,
		Less = 5,
		Greater = 6,
		LEqual = 7,
		GEqual = 8,
		NotEequal = 3
	};
}

#endif