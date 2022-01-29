
#include <iostream>
#include "Config.hpp"
namespace SnowPME {
	class Program {
		int main()
		{
			Config::ReadConfig("psm.config");
		}
	};
}

