#include "PsmFrameBuffer.hpp"

namespace Sce::PlayStation::Core::Graphics {
	int PsmFrameBuffer::Create(int *){
		cout << "Sce::PlayStation::Core::Graphics::Create(int *) Unimplemented." << endl;
		return 0;
	}
	int PsmFrameBuffer::Delete(int){
		cout << "Sce::PlayStation::Core::Graphics::Delete(int) Unimplemented." << endl;
		return 0;
	}
	int PsmFrameBuffer::AddRef(int){
		cout << "Sce::PlayStation::Core::Graphics::AddRef(int) Unimplemented." << endl;
		return 0;
	}
	int PsmFrameBuffer::SetColorTarget(int, int, int, Sce::PlayStation::Core::Graphics::TextureCubeFace, int *){
		cout << "Sce::PlayStation::Core::Graphics::SetColorTarget(int, int, int, Sce::PlayStation::Core::Graphics::TextureCubeFace, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmFrameBuffer::SetDepthTarget(int, int, int, Sce::PlayStation::Core::Graphics::TextureCubeFace, int *){
		cout << "Sce::PlayStation::Core::Graphics::SetDepthTarget(int, int, int, Sce::PlayStation::Core::Graphics::TextureCubeFace, int *) Unimplemented." << endl;
		return 0;
	}
}
