#ifndef LIB_PSM_SHADERUNIFORMTYPE_H
#define LIB_PSM_SHADERUNIFORMTYPE_H 1

namespace Sce::PlayStation::Core::Graphics {
	enum ShaderUniformType : unsigned int {
		None,
		Float = 256,
		Float2,
		Float3,
		Float4,
		Float2x2 = 273,
		Float3x3 = 290,
		Float4x4 = 307,
		Int = 1024,
		Int2,
		Int3,
		Int4,
		Bool = 768,
		Bool2,
		Bool3,
		Bool4,
		Sampler2D = 32769,
		SamplerCube
	};
}

#endif