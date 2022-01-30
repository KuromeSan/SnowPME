#ifndef LIB_PSM_MULTISAMPLEMODE_H
#define LIB_PSM_MULTISAMPLEMODE_H

namespace Sce::PlayStation::Core::Graphics {
	enum MultiSampleMode : unsigned int {
		MultiSampleMode_None = 0,
		MultiSampleMode_Msaa2x = 1,
		MultiSampleMode_Msaa4x = 2
	};
}

#endif