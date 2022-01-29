#ifndef LIB_PSM_CLIPBOARD_H
#define LIB_PSM_CLIPBOARD_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Environment {
	class Clipboard {
	public:
		static int SetTextNative(string);
		static int GetTextNative(string *);
	};
}
#endif
