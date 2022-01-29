#ifndef LIB_PSM_SHADERATTRIBUTETYPE_H
#define LIB_PSM_SHADERATTRIBUTETYPE_H 1

namespace Sce::PlayStation::Core::Graphics {
	enum ShaderAttributeType : unsigned int {
		None,
		Float = 256U,
		Float2,
		Float3,
		Float4
	};
}

#endif