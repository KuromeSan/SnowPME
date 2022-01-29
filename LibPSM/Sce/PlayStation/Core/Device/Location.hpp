#ifndef LIB_PSM_LOCATION_H
#define LIB_PSM_LOCATION_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Device {
	class Location {
	public:
		static int StartNative();
		static int StopNative();
		static int GetDataNative(Sce::PlayStation::Core::Device::LocationData *);
		static int GetEnableDevicesNative();
	};
}
#endif
