#ifndef LIB_PSM_COMMONDIALOGSTATE_H
#define LIB_PSM_COMMONDIALOGSTATE_H

namespace Sce::PlayStation::Core::Environment {
	enum CommonDialogResult : unsigned int {
		OK = 0,
		Canceled = 1,
		Aborted = 2,
		Error = 3
	};
}

#endif