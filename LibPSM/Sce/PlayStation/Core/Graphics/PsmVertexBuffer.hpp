#ifndef LIB_PSM_PSMVERTEXBUFFER_H
#define LIB_PSM_PSMVERTEXBUFFER_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Graphics {
	class PsmVertexBuffer {
	public:
		static int Create(int, int, int, int, Sce::PlayStation::Core::Graphics::VertexFormat*, int *);
		static int Delete(int);
		static int AddRef(int);
		static int SetVertices(int, System::Array, int, int, int);
		static int SetVertices2(int, int, System::Array, Sce::PlayStation::Core::Graphics::VertexFormat, Sce::PlayStation::Core::Vector4 *, Sce::PlayStation::Core::Vector4 *, int, int, int, int, int);
		static int SetIndices(int, uint32_t16*, int, int, int);
	};
}
#endif
