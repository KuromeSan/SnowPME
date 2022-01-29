#ifndef LIB_PSM_PSMFRAMEBUFFER_H
#define LIB_PSM_PSMFRAMEBUFFER_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Graphics {
	class PsmFrameBuffer {
	public:
		static int Create(int *);
		static int Delete(int);
		static int AddRef(int);
		static int SetColorTarget(int, int, int, Sce::PlayStation::Core::Graphics::TextureCubeFace, int *);
		static int SetDepthTarget(int, int, int, Sce::PlayStation::Core::Graphics::TextureCubeFace, int *);
	};
}
#endif
