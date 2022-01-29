#include "NetworkRequest.hpp"

namespace Sce::PlayStation::Core::Services {
	int NetworkRequest::CreateRequestNative(int, string, string, int *){
		cout << "Sce::PlayStation::Core::Services::CreateRequestNative(int, string, string, int *) Unimplemented." << endl;
		return 0;
	}
	int NetworkRequest::QueueRequestNative(int, string, string, int *){
		cout << "Sce::PlayStation::Core::Services::QueueRequestNative(int, string, string, int *) Unimplemented." << endl;
		return 0;
	}
	int NetworkRequest::DestroyRequestNative(int){
		cout << "Sce::PlayStation::Core::Services::DestroyRequestNative(int) Unimplemented." << endl;
		return 0;
	}
	int NetworkRequest::GetResponseNative(int, string *){
		cout << "Sce::PlayStation::Core::Services::GetResponseNative(int, string *) Unimplemented." << endl;
		return 0;
	}
	int NetworkRequest::RegisterThreadNative(){
		cout << "Sce::PlayStation::Core::Services::RegisterThreadNative() Unimplemented." << endl;
		return 0;
	}
	int NetworkRequest::UnregisterThreadNative(){
		cout << "Sce::PlayStation::Core::Services::UnregisterThreadNative() Unimplemented." << endl;
		return 0;
	}
}
