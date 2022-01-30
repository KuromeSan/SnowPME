#ifndef LIB_PSM_ERROR_H
#define LIB_PSM_ERROR_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core {
	class Error {
	public:
		static int GetExceptionInfoNative(string *message, string *param);
	};
}
#endif
