#ifndef LIB_PSM_STENCILOPMODE_H
#define LIB_PSM_STENCILOPMODE_H 1
#include <string>
namespace Sce::PlayStation::Core::Graphics {
	enum StencilOpMode : uint8_t {
		StencilOpMode_Keep = 0,
		StencilOpMode_Zero = 1,
		StencilOpMode_Replace = 2,
		StencilOpMode_Invert = 3,
		StencilOpMode_Incr = 4,
		StencilOpMode_Decr = 5,
		StencilOpMode_IncrWrap = 6,
		StencilOpMode_DecrWrap = 7
	};
}

#endif