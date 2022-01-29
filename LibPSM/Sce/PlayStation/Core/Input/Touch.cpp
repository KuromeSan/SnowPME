#include "Touch.hpp"

namespace Sce::PlayStation::Core::Input {
	int Touch::GetDataNative(int, Sce::PlayStation::Core::Input::TouchData*, int, int *){
		cout << "Sce::PlayStation::Core::Input::GetDataNative(int, Sce::PlayStation::Core::Input::TouchData*, int, int *) Unimplemented." << endl;
		return 0;
	}
	int Touch::GetRearTouchDataNative(int, Sce::PlayStation::Core::Input::TouchData*, int, int *){
		cout << "Sce::PlayStation::Core::Input::GetRearTouchDataNative(int, Sce::PlayStation::Core::Input::TouchData*, int, int *) Unimplemented." << endl;
		return 0;
	}
}
