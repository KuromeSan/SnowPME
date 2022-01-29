#include "Font.hpp"

namespace Sce::PlayStation::Core::Imaging {
	int Font::NewFromFilenameSizeStyle(string, int, Sce::PlayStation::Core::Imaging::FontStyle, int *){
		cout << "Sce::PlayStation::Core::Imaging::NewFromFilenameSizeStyle(string, int, Sce::PlayStation::Core::Imaging::FontStyle, int *) Unimplemented." << endl;
		return 0;
	}
	int Font::NewFromAliasSizeStyle(Sce::PlayStation::Core::Imaging::FontAlias, int, Sce::PlayStation::Core::Imaging::FontStyle, int *){
		cout << "Sce::PlayStation::Core::Imaging::NewFromAliasSizeStyle(Sce::PlayStation::Core::Imaging::FontAlias, int, Sce::PlayStation::Core::Imaging::FontStyle, int *) Unimplemented." << endl;
		return 0;
	}
	int Font::AddRefNative(int){
		cout << "Sce::PlayStation::Core::Imaging::AddRefNative(int) Unimplemented." << endl;
		return 0;
	}
	int Font::ReleaseNative(int){
		cout << "Sce::PlayStation::Core::Imaging::ReleaseNative(int) Unimplemented." << endl;
		return 0;
	}
	int Font::GetName(int, string *){
		cout << "Sce::PlayStation::Core::Imaging::GetName(int, string *) Unimplemented." << endl;
		return 0;
	}
	int Font::GetSize(int, int *){
		cout << "Sce::PlayStation::Core::Imaging::GetSize(int, int *) Unimplemented." << endl;
		return 0;
	}
	int Font::GetStyle(int, Sce::PlayStation::Core::Imaging::FontStyle *){
		cout << "Sce::PlayStation::Core::Imaging::GetStyle(int, Sce::PlayStation::Core::Imaging::FontStyle *) Unimplemented." << endl;
		return 0;
	}
	int Font::GetMetrics(int, Sce::PlayStation::Core::Imaging::FontMetrics *){
		cout << "Sce::PlayStation::Core::Imaging::GetMetrics(int, Sce::PlayStation::Core::Imaging::FontMetrics *) Unimplemented." << endl;
		return 0;
	}
	int Font::GetTextWidthNative(int, string, int, int, int *){
		cout << "Sce::PlayStation::Core::Imaging::GetTextWidthNative(int, string, int, int, int *) Unimplemented." << endl;
		return 0;
	}
	int Font::GetTextMetricsNative(int, string, int, int, Sce::PlayStation::Core::Imaging::CharMetrics*){
		cout << "Sce::PlayStation::Core::Imaging::GetTextMetricsNative(int, string, int, int, Sce::PlayStation::Core::Imaging::CharMetrics*) Unimplemented." << endl;
		return 0;
	}
}
