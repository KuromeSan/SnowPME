#ifndef LIB_PSM_PSMPIXELBUFFER_H
#define LIB_PSM_PSMPIXELBUFFER_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Graphics {
	class PsmPixelBuffer {
	public:
		static int Create(Sce::PlayStation::Core::Graphics::PixelBufferType, int, int, bool, Sce::PlayStation::Core::Graphics::PixelFormat, Sce::PlayStation::Core::Graphics::PixelBufferOption, Sce::PlayStation::Core::Graphics::InternalOption, int *);
		static int Delete(int);
		static int AddRef(int);
		static int GetInfo(int, Sce::PlayStation::Core::Graphics::PixelBufferType *, int *, int *, int *, Sce::PlayStation::Core::Graphics::PixelFormat *, Sce::PlayStation::Core::Graphics::PixelBufferOption *);
	};
}
#endif
