#ifndef LIB_PSM_SHADERATTRIBUTETYPE_H
#define LIB_PSM_SHADERATTRIBUTETYPE_H 1

namespace Sce::PlayStation::Core::Graphics {
	enum ShaderAttributeType : unsigned int {
		ShaderAttributeType_None = 0,
		ShaderAttributeType_Float = 0x100,
		ShaderAttributeType_Float2 = 257,
		ShaderAttributeType_Float3 = 258,
		ShaderAttributeType_Float4 = 259
	};
}

#endif