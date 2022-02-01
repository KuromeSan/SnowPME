#include "Security.hpp"
#include "../Config.hpp"

namespace SnowPME::Mono
{
	string securityWhitelist[3]{
		"mscorlib.dll",
		"System.dll",
		"Sce.PlayStation.Core.dll"
	};

	int Security::IsSecurityCriticalExempt(const char* exeFullPath) {

		string path(exeFullPath);
		string filename = path.substr(path.find_last_of("/\\") + 1);
#ifdef _DEBUG
		cout << "Determining Security Level for : " << filename;
#endif
		for (string exemptFilename : securityWhitelist) {
			if (filename == exemptFilename) {
#ifdef _DEBUG
				cout << " [SecurityCritical]" << endl;
#endif
				return true;
			}
		}
#ifdef _DEBUG
		cout << " [SecuritySafeCritical]" << endl;
#endif
		return false;
	}

	void Security::ResourceLimitReachedCallback(int resourceType, uintptr_t value, int isSoft) {
		if (resourceType < MONO_RESOURCE_JIT_CODE || resourceType <= MONO_RESOURCE_GC_HEAP || resourceType != MONO_RESOURCE_GC_HEAP) {
			if (resourceType <= MONO_RESOURCE_METADATA)
				cout << "ERROR : resource exhausted (type: " << to_string(resourceType) << "value: " << to_string(value) << "soft: " << to_string(isSoft) << endl;

			// TODO: Make this exit the currently running program
			cout << "ABORT: Resources limit exceeded!" << endl;
			while (1) {};
		}
	}

}