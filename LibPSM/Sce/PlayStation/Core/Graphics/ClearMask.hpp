#ifndef LIB_PSM_CLEARMASK_H
#define LIB_PSM_CLEARMASK_H
#include <string>

namespace Sce::PlayStation::Core::Graphics {
	enum ClearMask : unsigned int {
		ClearMask_None = 0,
		ClearMask_Color = 1,
		ClearMask_Depth = 2,
		ClearMask_Stencil = 4,
		ClearMask_All = 7
	};
}

#endif