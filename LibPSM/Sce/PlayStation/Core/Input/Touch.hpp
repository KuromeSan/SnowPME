#ifndef LIB_PSM_TOUCH_H
#define LIB_PSM_TOUCH_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Input {
	class Touch {
	public:
		static int GetDataNative(int, Sce::PlayStation::Core::Input::TouchData*, int, int *);
		static int GetRearTouchDataNative(int, Sce::PlayStation::Core::Input::TouchData*, int, int *);
	};
}
#endif
