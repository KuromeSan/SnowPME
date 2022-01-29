#include "PsmVertexBuffer.hpp"

namespace Sce::PlayStation::Core::Graphics {
	int PsmVertexBuffer::Create(int, int, int, int, Sce::PlayStation::Core::Graphics::VertexFormat*, int *){
		cout << "Sce::PlayStation::Core::Graphics::Create(int, int, int, int, Sce::PlayStation::Core::Graphics::VertexFormat*, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmVertexBuffer::Delete(int){
		cout << "Sce::PlayStation::Core::Graphics::Delete(int) Unimplemented." << endl;
		return 0;
	}
	int PsmVertexBuffer::AddRef(int){
		cout << "Sce::PlayStation::Core::Graphics::AddRef(int) Unimplemented." << endl;
		return 0;
	}
	int PsmVertexBuffer::SetVertices(int, System::Array, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetVertices(int, System::Array, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmVertexBuffer::SetVertices2(int, int, System::Array, Sce::PlayStation::Core::Graphics::VertexFormat, Sce::PlayStation::Core::Vector4 *, Sce::PlayStation::Core::Vector4 *, int, int, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetVertices2(int, int, System::Array, Sce::PlayStation::Core::Graphics::VertexFormat, Sce::PlayStation::Core::Vector4 *, Sce::PlayStation::Core::Vector4 *, int, int, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmVertexBuffer::SetIndices(int, uint32_t16*, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetIndices(int, uint32_t16*, int, int, int) Unimplemented." << endl;
		return 0;
	}
}
