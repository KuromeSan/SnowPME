#ifndef LIB_PSM_NETWORK_H
#define LIB_PSM_NETWORK_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Services {
	class Network {
	public:
		static int CheckStateNative(uint32_t *);
		static int GetOnlineIdNative(string *);
		static int GetAccountIdNative(unsigned long *);
		static int SetWebRequestDelegate(intptr);
		static int SetAuthServer(bool);
		static int GetAuthTicketDataNative(string *);
		static int ResetAuthTicketNative();
		static int SetAppIdNative(string));
	};
}
#endif
