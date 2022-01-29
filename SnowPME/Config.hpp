#ifndef SNOW_PME_CONFIG_H
#define SNOW_PME_CONFIG_H 1
#include <string>

#ifdef _WIN32
#define RUNTIME_LIB_PATH "Runtime\\lib"
#define RUNTIME_CONFIG_PATH "Runtime\\etc"
#else
#define RUNTIME_LIB_PATH "Runtime/lib"
#define RUNTIME_CONFIG_PATH "Runtime/etc"
#endif


using namespace std;
namespace SnowPME
{
	class Config {
	public:
		static bool SecurityCritical; // If mono is allowed full access to native functions.
		static string RuntimeLibPath; // Path to mono/lib folder.
		static string RuntimeConfigPath; // Path to mono/config folder.
		static int ReadConfig(string configFile);
	};
}
#endif