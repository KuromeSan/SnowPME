#ifndef LIB_PSM_DRAWMODE_H
#define LIB_PSM_DRAWMODE_H

namespace Sce::PlayStation::Core::Graphics {
	enum DrawMode : unsigned short {
		DrawMode_Points = 0,
		DrawMode_Lines = 1,
		DrawMode_LineStrip = 2,
		DrawMode_Triangles = 3,
		DrawMode_TriangleStrip = 4,
		DrawMode_TriangleFan = 5
	};
}

#endif