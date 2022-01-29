#include "TextInputDialog.hpp"

namespace Sce::PlayStation::Core::Environment {
	int TextInputDialog::NewNative(Sce::PlayStation::Core::Environment::CommonDialogType, int *){
		cout << "Sce::PlayStation::Core::Environment::NewNative(Sce::PlayStation::Core::Environment::CommonDialogType, int *) Unimplemented." << endl;
		return 0;
	}
	int TextInputDialog::ReleaseNative(Sce::PlayStation::Core::Environment::CommonDialogType, int){
		cout << "Sce::PlayStation::Core::Environment::ReleaseNative(Sce::PlayStation::Core::Environment::CommonDialogType, int) Unimplemented." << endl;
		return 0;
	}
	int TextInputDialog::OpenNative(Sce::PlayStation::Core::Environment::CommonDialogType, int, Sce::PlayStation::Core::Environment::TextInputDialog/Arguments *){
		cout << "Sce::PlayStation::Core::Environment::OpenNative(Sce::PlayStation::Core::Environment::CommonDialogType, int, Sce::PlayStation::Core::Environment::TextInputDialog/Arguments *) Unimplemented." << endl;
		return 0;
	}
	int TextInputDialog::AbortNative(Sce::PlayStation::Core::Environment::CommonDialogType, int){
		cout << "Sce::PlayStation::Core::Environment::AbortNative(Sce::PlayStation::Core::Environment::CommonDialogType, int) Unimplemented." << endl;
		return 0;
	}
	int TextInputDialog::GetState(Sce::PlayStation::Core::Environment::CommonDialogType, int, Sce::PlayStation::Core::Environment::CommonDialogState *){
		cout << "Sce::PlayStation::Core::Environment::GetState(Sce::PlayStation::Core::Environment::CommonDialogType, int, Sce::PlayStation::Core::Environment::CommonDialogState *) Unimplemented." << endl;
		return 0;
	}
	int TextInputDialog::GetResult(Sce::PlayStation::Core::Environment::CommonDialogType, int, Sce::PlayStation::Core::Environment::CommonDialogResult *, Sce::PlayStation::Core::Environment::TextInputDialog/Results *){
		cout << "Sce::PlayStation::Core::Environment::GetResult(Sce::PlayStation::Core::Environment::CommonDialogType, int, Sce::PlayStation::Core::Environment::CommonDialogResult *, Sce::PlayStation::Core::Environment::TextInputDialog/Results *) Unimplemented." << endl;
		return 0;
	}
}
