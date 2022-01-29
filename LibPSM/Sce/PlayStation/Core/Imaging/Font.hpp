#ifndef LIB_PSM_FONT_H
#define LIB_PSM_FONT_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>

#include "FontAlias.hpp"
#include "FontStyle.hpp"
#include "FontMetrics.hpp"
#include "CharMetrics.hpp"

using namespace std;

namespace Sce::PlayStation::Core::Imaging {
	class Font {
	public:
		static int NewFromFilenameSizeStyle(string, int, FontStyle, int *);
		static int NewFromAliasSizeStyle(FontAlias, int, FontStyle, int *);
		static int AddRefNative(int);
		static int ReleaseNative(int);
		static int GetName(int, string *);
		static int GetSize(int, int *);
		static int GetStyle(int, FontStyle *);
		static int GetMetrics(int, FontMetrics *);
		static int GetTextWidthNative(int, string, int, int, int *);
		static int GetTextMetricsNative(int, string, int, int, CharMetrics*);
	};
}
#endif
