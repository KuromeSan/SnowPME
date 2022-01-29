#ifndef SNOW_PME_MONO_INIT_H
#define SNOW_PME_MONO_INIT_H 1
#include <mono/jit/jit.h>
#include <mono/metadata/mono-config.h>
#include <mono/metadata/assembly.h>
#include <iostream>
#include <string>

using namespace std;
namespace SnowPME::Mono
{
	class Init {
	private:
		static string executableFile;
		static void addFunctions();
	public:
		static int InitMono(string executablePath);
	};
}

#endif