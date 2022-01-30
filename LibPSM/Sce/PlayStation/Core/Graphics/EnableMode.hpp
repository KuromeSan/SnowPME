#ifndef LIB_PSM_ENABLEMODE_H
#define LIB_PSM_ENABLEMODE_H

namespace Sce::PlayStation::Core::Graphics {
	enum EnableMode : unsigned int {
		eNone = 0,
		eScissorTest = 1,
		eCullFace = 2,
		eBlend = 4,
		eDepthTest = 8,
		ePolygonOffsetFill = 16,
		eStencilTest = 32,
		eDither = 64,
		eAll = 127
	};
}

#endif