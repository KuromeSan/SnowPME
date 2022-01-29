#ifndef LIB_PSM_INAPPPURCHASEDIALOG_H
#define LIB_PSM_INAPPPURCHASEDIALOG_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Services {
	class InAppPurchaseDialog {
	public:
		static int NewNative(int, int *);
		static int ReleaseNative(int, int);
		static int OpenNative(int, int, Sce::PlayStation::Core::Services::InAppPurchaseDialog/CommandArguments *);
		static int AbortNative(int, int);
		static int GetState(int, int, Sce::PlayStation::Core::Environment::CommonDialogState *);
		static int GetResult(int, int, Sce::PlayStation::Core::Environment::CommonDialogResult *, Sce::PlayStation::Core::Services::InAppPurchaseDialog/CommandResults *);
	};
}
#endif
