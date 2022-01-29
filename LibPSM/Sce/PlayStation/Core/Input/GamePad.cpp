#include "GamePad.hpp"

namespace Sce::PlayStation::Core::Input {
	int GamePad::GetDataNative(int, Sce::PlayStation::Core::Input::GamePadData *){
		cout << "Sce::PlayStation::Core::Input::GetDataNative(int, Sce::PlayStation::Core::Input::GamePadData *) Unimplemented." << endl;
		return 0;
	}
}
