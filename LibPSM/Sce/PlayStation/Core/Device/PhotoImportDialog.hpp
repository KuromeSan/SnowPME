#ifndef LIB_PSM_PHOTOIMPORTDIALOG_H
#define LIB_PSM_PHOTOIMPORTDIALOG_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

namespace Sce::PlayStation::Core::Device {
	typedef struct DialogArguments { } DialogArguments;
	
	typedef struct DialogResults {
		char* Filename;
	} DialogResults;

	class PhotoImportDialog {
	public:
		static int NewNative(int, int *);
		static int ReleaseNative(int, int);
		static int OpenNative(int, int, DialogArguments *);
		static int AbortNative(int, int);
		static int GetState(int, int, Sce::PlayStation::Core::Environment::CommonDialogState *);
		static int GetResult(int, int, Sce::PlayStation::Core::Environment::CommonDialogResult *, Sce::PlayStation::Core::Device::PhotoImportDialog/DialogResults *);
	};
}
#endif
