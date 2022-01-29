#include "PsmTexture.hpp"

namespace Sce::PlayStation::Core::Graphics {
	int PsmTexture::FromFile(Sce::PlayStation::Core::Graphics::PixelBufferType, string, bool, Sce::PlayStation::Core::Graphics::PixelFormat, int *){
		cout << "Sce::PlayStation::Core::Graphics::FromFile(Sce::PlayStation::Core::Graphics::PixelBufferType, string, bool, Sce::PlayStation::Core::Graphics::PixelFormat, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmTexture::FromImage(Sce::PlayStation::Core::Graphics::PixelBufferType, byte*, bool, Sce::PlayStation::Core::Graphics::PixelFormat, int *){
		cout << "Sce::PlayStation::Core::Graphics::FromImage(Sce::PlayStation::Core::Graphics::PixelBufferType, byte*, bool, Sce::PlayStation::Core::Graphics::PixelFormat, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmTexture::SetFilter(int, Sce::PlayStation::Core::Graphics::TextureFilter *){
		cout << "Sce::PlayStation::Core::Graphics::SetFilter(int, Sce::PlayStation::Core::Graphics::TextureFilter *) Unimplemented." << endl;
		return 0;
	}
	int PsmTexture::SetWrap(int, Sce::PlayStation::Core::Graphics::TextureWrap *){
		cout << "Sce::PlayStation::Core::Graphics::SetWrap(int, Sce::PlayStation::Core::Graphics::TextureWrap *) Unimplemented." << endl;
		return 0;
	}
	int PsmTexture::SetMaxAnisotropy(int, float){
		cout << "Sce::PlayStation::Core::Graphics::SetMaxAnisotropy(int, float) Unimplemented." << endl;
		return 0;
	}
	int PsmTexture::SetPixels(int, int, Sce::PlayStation::Core::Graphics::TextureCubeFace, System::Array, Sce::PlayStation::Core::Graphics::PixelFormat, int, int, int, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetPixels(int, int, Sce::PlayStation::Core::Graphics::TextureCubeFace, System::Array, Sce::PlayStation::Core::Graphics::PixelFormat, int, int, int, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmTexture::GenerateMipmap(int){
		cout << "Sce::PlayStation::Core::Graphics::GenerateMipmap(int) Unimplemented." << endl;
		return 0;
	}
}
