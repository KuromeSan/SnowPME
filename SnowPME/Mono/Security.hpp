#ifndef SNOW_PME_MONO_SECURITY_H
#define SNOW_PME_MONO_SECURITY_H 1
#include <mono/utils/mono-publib.h>
#include <mono/utils/mono-counters.h>
#include <mono/jit/jit.h>
#include <mono/metadata/mono-config.h>
#include <mono/utils/mono-counters.h>
#include <mono/metadata/assembly.h>
#include <string>
#include <iostream>

using namespace std;
namespace SnowPME::Mono
{
	class Security {
	public:
		static int IsSecurityCriticalExempt(const char* exeFullPath);
		static void ResourceLimitReachedCallback(int resourceType, uintptr_t value, int isSoft);
	};

}

#endif