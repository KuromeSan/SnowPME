#include "Network.hpp"

namespace Sce::PlayStation::Core::Services {
	int Network::CheckStateNative(uint32_t *){
		cout << "Sce::PlayStation::Core::Services::CheckStateNative(uint32_t *) Unimplemented." << endl;
		return 0;
	}
	int Network::GetOnlineIdNative(string *){
		cout << "Sce::PlayStation::Core::Services::GetOnlineIdNative(string *) Unimplemented." << endl;
		return 0;
	}
	int Network::GetAccountIdNative(unsigned long *){
		cout << "Sce::PlayStation::Core::Services::GetAccountIdNative(unsigned long *) Unimplemented." << endl;
		return 0;
	}
	int Network::SetWebRequestDelegate(intptr){
		cout << "Sce::PlayStation::Core::Services::SetWebRequestDelegate(intptr) Unimplemented." << endl;
		return 0;
	}
	int Network::SetAuthServer(bool){
		cout << "Sce::PlayStation::Core::Services::SetAuthServer(bool) Unimplemented." << endl;
		return 0;
	}
	int Network::GetAuthTicketDataNative(string *){
		cout << "Sce::PlayStation::Core::Services::GetAuthTicketDataNative(string *) Unimplemented." << endl;
		return 0;
	}
	int Network::ResetAuthTicketNative(){
		cout << "Sce::PlayStation::Core::Services::ResetAuthTicketNative() Unimplemented." << endl;
		return 0;
	}
	int Network::SetAppIdNative(string)){
		cout << "Sce::PlayStation::Core::Services::SetAppIdNative(string)) Unimplemented." << endl;
		return 0;
	}
}
