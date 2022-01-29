#include "Security.hpp"
#include "../Config.hpp"

namespace SnowPME::Mono
{
	string securityWhitelist[3]{
		"mscorlib.dll",
		"System.dll",
		"Sce.PlayStation.Core.dll"
	};

	mono_bool Security::IsSecurityCriticalExempt(const char* exeFullPath) {
		string path(exeFullPath);
		string filename = path.substr(path.find_last_of("/\\") + 1);

		for (string exemptFilename : securityWhitelist) {
			if (filename == exemptFilename) {
				return true;
			}
		}
		return false;
	}

}