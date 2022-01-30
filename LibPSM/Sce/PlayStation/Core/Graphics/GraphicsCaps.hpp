#ifndef LIB_PSM_GRAPHICSCAPS_H
#define LIB_PSM_GRAPHICSCAPS_H
#include <string>
#include "GraphicsCapsState.hpp"

namespace Sce::PlayStation::Core::Graphics {
	typedef struct GraphicsCaps {
		GraphicsCapsState state;
	} GraphicsCaps;
}

#endif