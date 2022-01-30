#ifndef LIB_PSM_PSMTEXTURE_H
#define LIB_PSM_PSMTEXTURE_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "PixelBufferType.hpp"
#include "TextureCubeFace.hpp"
#include "PixelFormat.hpp"
using namespace std;

namespace Sce::PlayStation::Core::Graphics {
	class PsmTexture {
	public:
		static int FromFile(Sce::PlayStation::Core::Graphics::PixelBufferType, string, bool, Sce::PlayStation::Core::Graphics::PixelFormat, int *);
		static int FromImage(Sce::PlayStation::Core::Graphics::PixelBufferType, byte*, bool, Sce::PlayStation::Core::Graphics::PixelFormat, int *);
		static int SetFilter(int, Sce::PlayStation::Core::Graphics::TextureFilter *);
		static int SetWrap(int, Sce::PlayStation::Core::Graphics::TextureWrap *);
		static int SetMaxAnisotropy(int, float);
		static int SetPixels(int, int, Sce::PlayStation::Core::Graphics::TextureCubeFace, void*, Sce::PlayStation::Core::Graphics::PixelFormat, int, int, int, int, int, int);
		static int GenerateMipmap(int);
	};
}
#endif
