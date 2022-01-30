#ifndef LIB_PSM_CULLFACEDIRECTION_H
#define LIB_PSM_CULLFACEDIRECTION_H
#include <string>

namespace Sce::PlayStation::Core::Graphics {
	enum CullFaceDirection : uint8_t {
		CullFaceDirection_Cw = 0,
		CullFaceDirection_Ccw = 1
	};
}

#endif