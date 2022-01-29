#ifndef LIB_PSM_GAMEPAD_H
#define LIB_PSM_GAMEPAD_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Input {
	class GamePad {
	public:
		static int GetDataNative(int, Sce::PlayStation::Core::Input::GamePadData *);
	};
}
#endif
