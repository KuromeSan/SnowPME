#ifndef LIB_PSM_ENABLEMODE_H
#define LIB_PSM_ENABLEMODE_H

namespace Sce::PlayStation::Core::Graphics {
	enum EnableMode : unsigned int {
		EnableMode_None = 0,
		EnableMode_ScissorTest = 1,
		EnableMode_CullFace = 2,
		EnableMode_Blend = 4,
		EnableMode_DepthTest = 8,
		EnableMode_PolygonOffsetFill = 16,
		EnableMode_StencilTest = 32,
		EnableMode_Dither = 64,
		EnableMode_All = 127
	};
}

#endif