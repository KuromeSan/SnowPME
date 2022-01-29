#ifndef LIB_PSM_TEXTINPUTDIALOG_H
#define LIB_PSM_TEXTINPUTDIALOG_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Environment {
	class TextInputDialog {
	public:
		static int NewNative(Sce::PlayStation::Core::Environment::CommonDialogType, int *);
		static int ReleaseNative(Sce::PlayStation::Core::Environment::CommonDialogType, int);
		static int OpenNative(Sce::PlayStation::Core::Environment::CommonDialogType, int, Sce::PlayStation::Core::Environment::TextInputDialog/Arguments *);
		static int AbortNative(Sce::PlayStation::Core::Environment::CommonDialogType, int);
		static int GetState(Sce::PlayStation::Core::Environment::CommonDialogType, int, Sce::PlayStation::Core::Environment::CommonDialogState *);
		static int GetResult(Sce::PlayStation::Core::Environment::CommonDialogType, int, Sce::PlayStation::Core::Environment::CommonDialogResult *, Sce::PlayStation::Core::Environment::TextInputDialog/Results *);
	};
}
#endif
