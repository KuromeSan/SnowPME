#ifndef LIB_PSM_IMAGE_H
#define LIB_PSM_IMAGE_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Imaging {
	class Image {
	public:
		static int NewFromFilename(string, int *);
		static int NewFromFileImage(byte*, int *);
		static int NewFromModeSizeColor(Sce::PlayStation::Core::Imaging::ImageMode, Sce::PlayStation::Core::Imaging::ImageSize *, Sce::PlayStation::Core::Imaging::ImageColor *, int *);
		static int NewFromModeSizeBuffer(Sce::PlayStation::Core::Imaging::ImageMode, Sce::PlayStation::Core::Imaging::ImageSize *, byte*, int *);
		static int AddRefNative(int);
		static int ReleaseNative(int);
		static int GetSize(int, Sce::PlayStation::Core::Imaging::ImageSize *);
		static int SetDecodeSize(int, Sce::PlayStation::Core::Imaging::ImageSize *);
		static int DecodeNative(int);
		static int GetPixelData(int, byte*, uint32_t);
		static int GetPixelDataSize(int, uint32_t *);
		static int ResizeNative(int, Sce::PlayStation::Core::Imaging::ImageSize *, int *);
		static int CropNative(int, Sce::PlayStation::Core::Imaging::ImageRect *, int *);
		static int DrawImageNative(int, int, Sce::PlayStation::Core::Imaging::ImagePosition *);
		static int DrawRectangleNative(int, Sce::PlayStation::Core::Imaging::ImageColor *, Sce::PlayStation::Core::Imaging::ImageRect *);
		static int DrawTextNative(int, string, int, int, Sce::PlayStation::Core::Imaging::ImageColor *, int, Sce::PlayStation::Core::Imaging::ImagePosition *);
		static int ExportNative(int, string, string);
		static int SaveAsNative(int, string);
	};
}
#endif
