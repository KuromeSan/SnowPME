#include "Config.hpp"
namespace SnowPME
{
	
	int Config::ReadConfig(string configFile) {
		// TODO Actually read the file
		Config::RuntimeLibPath = RUNTIME_LIB_PATH;
		Config::RuntimeConfigPath = RUNTIME_CONFIG_PATH;
		Config::SecurityCritical = false;
		return 0;
	}
}