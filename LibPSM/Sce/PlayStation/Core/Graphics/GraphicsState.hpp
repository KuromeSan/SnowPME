#ifndef LIB_PSM_GRAPHICSSTATE_H
#define LIB_PSM_GRAPHICSSTATE_H
#include <string>
#include "DepthFunc.hpp"
#include "BlendFunc.hpp"
#include "ColorMask.hpp"

namespace Sce::PlayStation::Core::Graphics {
	typedef struct GraphicsState {
		EnableMode Enable;
		ImageRect Scissor;
		ImageRect Viewport;
		Vector2 DepthRange;
		Vector4 ClearColor;
		float ClearDepth;/// <summary>/
		int ClearStencil;
		CullFace CullFace;
		BlendFunc BlendFuncRgb;
		BlendFunc BlendFuncAlpha;
		DepthFunc DepthFunc;
		PolygonOffset PolygonOffset;
		StencilFunc StencilFuncFront;
		StencilOp StencilOpFront;
		StencilFunc StencilFuncBack;
		StencilOp StencilOpBack;
		ColorMask ColorMask;
		float LineWidth;
	} GraphicsState;
}

#endif