#ifndef LIB_PSM_BLENDFUNCFACTOR_H
#define LIB_PSM_BLENDFUNCFACTOR_H
#include <string>

namespace Sce::PlayStation::Core::Graphics {
	enum BlendFuncFactor : uint8_t {
		BlendFuncFactor_Zero = 0,
		BlendFuncFactor_One = 1,
		BlendFuncFactor_SrcColor = 2,
		BlendFuncFactor_OneMinusSrcColor = 3,
		BlendFuncFactor_SrcAlpha = 4,
		BlendFuncFactor_OneMinusSrcAlpha = 5,
		BlendFuncFactor_DstColor = 6,
		BlendFuncFactor_OneMinusDstColor = 7,
		BlendFuncFactor_DstAlpha = 8,
		BlendFuncFactor_OneMinusDstAlpha = 9,
		BlendFuncFactor_SrcAlphaSaturate = 10
	};
}

#endif