#include "PsmGraphicsContext.hpp"

namespace Sce::PlayStation::Core::Graphics {
	int PsmGraphicsContext::Create(int, int, Sce::PlayStation::Core::Graphics::PixelFormat, Sce::PlayStation::Core::Graphics::PixelFormat, Sce::PlayStation::Core::Graphics::MultiSampleMode, int *){
		cout << "Sce::PlayStation::Core::Graphics::Create(int, int, Sce::PlayStation::Core::Graphics::PixelFormat, Sce::PlayStation::Core::Graphics::PixelFormat, Sce::PlayStation::Core::Graphics::MultiSampleMode, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::Delete(int){
		cout << "Sce::PlayStation::Core::Graphics::Delete(int) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::Update(int, Sce::PlayStation::Core::Graphics::GraphicsUpdate, Sce::PlayStation::Core::Graphics::GraphicsState *, int*){
		cout << "Sce::PlayStation::Core::Graphics::Update(int, Sce::PlayStation::Core::Graphics::GraphicsUpdate, Sce::PlayStation::Core::Graphics::GraphicsState *, int*) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::SwapBuffers(int){
		cout << "Sce::PlayStation::Core::Graphics::SwapBuffers(int) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::Clear(int, Sce::PlayStation::Core::Graphics::ClearMask){
		cout << "Sce::PlayStation::Core::Graphics::Clear(int, Sce::PlayStation::Core::Graphics::ClearMask) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::DrawArrays(int, Sce::PlayStation::Core::Graphics::DrawMode, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::DrawArrays(int, Sce::PlayStation::Core::Graphics::DrawMode, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::DrawArrays2(int, Sce::PlayStation::Core::Graphics::Primitive*, int, int){
		cout << "Sce::PlayStation::Core::Graphics::DrawArrays2(int, Sce::PlayStation::Core::Graphics::Primitive*, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::DrawArraysInstanced(int, Sce::PlayStation::Core::Graphics::DrawMode, int, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::DrawArraysInstanced(int, Sce::PlayStation::Core::Graphics::DrawMode, int, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::ReadPixels(int, byte*, Sce::PlayStation::Core::Graphics::PixelFormat, int, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::ReadPixels(int, byte*, Sce::PlayStation::Core::Graphics::PixelFormat, int, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::ReadPixels2(int, int, int, Sce::PlayStation::Core::Graphics::TextureCubeFace, int, int, int, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::ReadPixels2(int, int, int, Sce::PlayStation::Core::Graphics::TextureCubeFace, int, int, int, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::GetMaxScreenSize(int *, int *){
		cout << "Sce::PlayStation::Core::Graphics::GetMaxScreenSize(int *, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::GetScreenSizes(Sce::PlayStation::Core::Imaging::ImageSize*, int *){
		cout << "Sce::PlayStation::Core::Graphics::GetScreenSizes(Sce::PlayStation::Core::Imaging::ImageSize*, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::GetScreenInfo(int, int *, int *, Sce::PlayStation::Core::Graphics::PixelFormat *, Sce::PlayStation::Core::Graphics::PixelFormat *, Sce::PlayStation::Core::Graphics::MultiSampleMode *){
		cout << "Sce::PlayStation::Core::Graphics::GetScreenInfo(int, int *, int *, Sce::PlayStation::Core::Graphics::PixelFormat *, Sce::PlayStation::Core::Graphics::PixelFormat *, Sce::PlayStation::Core::Graphics::MultiSampleMode *) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::GetCaps(int, Sce::PlayStation::Core::Graphics::GraphicsCapsState *){
		cout << "Sce::PlayStation::Core::Graphics::GetCaps(int, Sce::PlayStation::Core::Graphics::GraphicsCapsState *) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::SetActiveScreen(int, int, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetActiveScreen(int, int, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmGraphicsContext::SetVirtualScreen(int, int, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetVirtualScreen(int, int, int, int, int) Unimplemented." << endl;
		return 0;
	}
}
