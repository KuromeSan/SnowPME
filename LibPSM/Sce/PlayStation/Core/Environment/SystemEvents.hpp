#ifndef LIB_PSM_SYSTEMEVENTS_H
#define LIB_PSM_SYSTEMEVENTS_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Environment {
	class SystemEvents {
	public:
		static int CheckEventsNative(Sce::PlayStation::Core::Environment::SystemEvents/InternalData *);
	};
}
#endif
