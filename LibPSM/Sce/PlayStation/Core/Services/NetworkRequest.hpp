#ifndef LIB_PSM_NETWORKREQUEST_H
#define LIB_PSM_NETWORKREQUEST_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Services {
	class NetworkRequest {
	public:
		static int CreateRequestNative(int, string, string, int *);
		static int QueueRequestNative(int, string, string, int *);
		static int DestroyRequestNative(int);
		static int GetResponseNative(int, string *);
		static int RegisterThreadNative();
		static int UnregisterThreadNative();
	};
}
#endif
