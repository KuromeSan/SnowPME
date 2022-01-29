#ifndef LIB_PSM_SYSTEMPARAMETERS_H
#define LIB_PSM_SYSTEMPARAMETERS_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Environment {
	class SystemParameters {
	public:
		static int GetInt(Sce::PlayStation::Core::Environment::SystemParameters/ParameterKey, int *);
		static int GetFloat(Sce::PlayStation::Core::Environment::SystemParameters/ParameterKey, float *);
		static int GetString(Sce::PlayStation::Core::Environment::SystemParameters/ParameterKey, string *);
	};
}
#endif
