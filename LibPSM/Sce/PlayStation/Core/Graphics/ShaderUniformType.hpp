#ifndef LIB_PSM_SHADERUNIFORMTYPE_H
#define LIB_PSM_SHADERUNIFORMTYPE_H 1

namespace Sce::PlayStation::Core::Graphics {
	enum ShaderUniformType : unsigned int {
		ShaderUniformType_None = 0,
		ShaderUniformType_Float = 0x100,
		ShaderUniformType_Float2 = 257,
		ShaderUniformType_Float3 = 258,
		ShaderUniformType_Float4 = 259,
		ShaderUniformType_Float2x2 = 273,
		ShaderUniformType_Float3x3 = 290,
		ShaderUniformType_Float4x4 = 307,
		ShaderUniformType_Int = 0x400,
		ShaderUniformType_Int2 = 1025,
		ShaderUniformType_Int3 = 1026,
		ShaderUniformType_Int4 = 1027,
		ShaderUniformType_Bool = 768,
		ShaderUniformType_Bool2 = 769,
		ShaderUniformType_Bool3 = 770,
		ShaderUniformType_Bool4 = 771,
		ShaderUniformType_Sampler2D = 32769,
		ShaderUniformType_SamplerCube = 32770
	};
}

#endif