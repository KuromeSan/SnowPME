#ifndef LIB_PSM_LOG_H
#define LIB_PSM_LOG_H 1
#include <mono/metadata/object.h>
#include <mono/utils/mono-publib.h>

#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Environment {
	class Log {
	public:
		static int WriteNative(MonoString* text);
		static int GetNeedsRedirection();
	};
}
#endif
