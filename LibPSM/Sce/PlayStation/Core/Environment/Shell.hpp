#ifndef LIB_PSM_SHELL_H
#define LIB_PSM_SHELL_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Environment {
	class Shell {
	public:
		static int ExecuteNative(Sce::PlayStation::Core::Environment::Shell/Action *);
	};
}
#endif
