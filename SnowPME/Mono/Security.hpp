#ifndef SNOW_PME_MONO_SECURITY_H
#define SNOW_PME_MONO_SECURITY_H 1
#include <mono/utils/mono-publib.h>
#include <string>
using namespace std;
namespace SnowPME::Mono
{
	class Security {
	public:
		static mono_bool IsSecurityCriticalExempt(const char* exeFullPath);
	};

}

#endif