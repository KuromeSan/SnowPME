#include "PsmPixelBuffer.hpp"

namespace Sce::PlayStation::Core::Graphics {
	int PsmPixelBuffer::Create(Sce::PlayStation::Core::Graphics::PixelBufferType, int, int, bool, Sce::PlayStation::Core::Graphics::PixelFormat, Sce::PlayStation::Core::Graphics::PixelBufferOption, Sce::PlayStation::Core::Graphics::InternalOption, int *){
		cout << "Sce::PlayStation::Core::Graphics::Create(Sce::PlayStation::Core::Graphics::PixelBufferType, int, int, bool, Sce::PlayStation::Core::Graphics::PixelFormat, Sce::PlayStation::Core::Graphics::PixelBufferOption, Sce::PlayStation::Core::Graphics::InternalOption, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmPixelBuffer::Delete(int){
		cout << "Sce::PlayStation::Core::Graphics::Delete(int) Unimplemented." << endl;
		return 0;
	}
	int PsmPixelBuffer::AddRef(int){
		cout << "Sce::PlayStation::Core::Graphics::AddRef(int) Unimplemented." << endl;
		return 0;
	}
	int PsmPixelBuffer::GetInfo(int, Sce::PlayStation::Core::Graphics::PixelBufferType *, int *, int *, int *, Sce::PlayStation::Core::Graphics::PixelFormat *, Sce::PlayStation::Core::Graphics::PixelBufferOption *){
		cout << "Sce::PlayStation::Core::Graphics::GetInfo(int, Sce::PlayStation::Core::Graphics::PixelBufferType *, int *, int *, int *, Sce::PlayStation::Core::Graphics::PixelFormat *, Sce::PlayStation::Core::Graphics::PixelBufferOption *) Unimplemented." << endl;
		return 0;
	}
}
