#ifndef LIB_PSM_PSMGRAPHICSCONTEXT_H
#define LIB_PSM_PSMGRAPHICSCONTEXT_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>

#include "DrawMode.hpp"
#include "PixelFormat.hpp"
#include "GraphicsUpdate .hpp"
#include "ClearMask.hpp"
#include "TextureCubeFace.hpp"

using namespace std;

namespace Sce::PlayStation::Core::Graphics {
	class PsmGraphicsContext {
	public:
		static int Create(int, int, Sce::PlayStation::Core::Graphics::PixelFormat, Sce::PlayStation::Core::Graphics::PixelFormat, Sce::PlayStation::Core::Graphics::MultiSampleMode, int *);
		static int Delete(int);
		static int Update(int, Sce::PlayStation::Core::Graphics::GraphicsUpdate, Sce::PlayStation::Core::Graphics::GraphicsState *, int*);
		static int SwapBuffers(int);
		static int Clear(int, Sce::PlayStation::Core::Graphics::ClearMask);
		static int DrawArrays(int, Sce::PlayStation::Core::Graphics::DrawMode, int, int, int);
		static int DrawArrays2(int, Sce::PlayStation::Core::Graphics::Primitive*, int, int);
		static int DrawArraysInstanced(int, Sce::PlayStation::Core::Graphics::DrawMode, int, int, int, int);
		static int ReadPixels(int, byte*, Sce::PlayStation::Core::Graphics::PixelFormat, int, int, int, int);
		static int ReadPixels2(int, int, int, Sce::PlayStation::Core::Graphics::TextureCubeFace, int, int, int, int, int, int);
		static int GetMaxScreenSize(int *, int *);
		static int GetScreenSizes(Sce::PlayStation::Core::Imaging::ImageSize*, int *);
		static int GetScreenInfo(int, int *, int *, Sce::PlayStation::Core::Graphics::PixelFormat *, Sce::PlayStation::Core::Graphics::PixelFormat *, Sce::PlayStation::Core::Graphics::MultiSampleMode *);
		static int GetCaps(int, Sce::PlayStation::Core::Graphics::GraphicsCapsState *);
		static int SetActiveScreen(int, int, int, int, int);
		static int SetVirtualScreen(int, int, int, int, int);
	};
}
#endif
