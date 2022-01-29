#include "Image.hpp"

namespace Sce::PlayStation::Core::Imaging {
	int Image::NewFromFilename(string, int *){
		cout << "Sce::PlayStation::Core::Imaging::NewFromFilename(string, int *) Unimplemented." << endl;
		return 0;
	}
	int Image::NewFromFileImage(byte*, int *){
		cout << "Sce::PlayStation::Core::Imaging::NewFromFileImage(byte*, int *) Unimplemented." << endl;
		return 0;
	}
	int Image::NewFromModeSizeColor(Sce::PlayStation::Core::Imaging::ImageMode, Sce::PlayStation::Core::Imaging::ImageSize *, Sce::PlayStation::Core::Imaging::ImageColor *, int *){
		cout << "Sce::PlayStation::Core::Imaging::NewFromModeSizeColor(Sce::PlayStation::Core::Imaging::ImageMode, Sce::PlayStation::Core::Imaging::ImageSize *, Sce::PlayStation::Core::Imaging::ImageColor *, int *) Unimplemented." << endl;
		return 0;
	}
	int Image::NewFromModeSizeBuffer(Sce::PlayStation::Core::Imaging::ImageMode, Sce::PlayStation::Core::Imaging::ImageSize *, byte*, int *){
		cout << "Sce::PlayStation::Core::Imaging::NewFromModeSizeBuffer(Sce::PlayStation::Core::Imaging::ImageMode, Sce::PlayStation::Core::Imaging::ImageSize *, byte*, int *) Unimplemented." << endl;
		return 0;
	}
	int Image::AddRefNative(int){
		cout << "Sce::PlayStation::Core::Imaging::AddRefNative(int) Unimplemented." << endl;
		return 0;
	}
	int Image::ReleaseNative(int){
		cout << "Sce::PlayStation::Core::Imaging::ReleaseNative(int) Unimplemented." << endl;
		return 0;
	}
	int Image::GetSize(int, Sce::PlayStation::Core::Imaging::ImageSize *){
		cout << "Sce::PlayStation::Core::Imaging::GetSize(int, Sce::PlayStation::Core::Imaging::ImageSize *) Unimplemented." << endl;
		return 0;
	}
	int Image::SetDecodeSize(int, Sce::PlayStation::Core::Imaging::ImageSize *){
		cout << "Sce::PlayStation::Core::Imaging::SetDecodeSize(int, Sce::PlayStation::Core::Imaging::ImageSize *) Unimplemented." << endl;
		return 0;
	}
	int Image::DecodeNative(int){
		cout << "Sce::PlayStation::Core::Imaging::DecodeNative(int) Unimplemented." << endl;
		return 0;
	}
	int Image::GetPixelData(int, byte*, uint32_t){
		cout << "Sce::PlayStation::Core::Imaging::GetPixelData(int, byte*, uint32_t) Unimplemented." << endl;
		return 0;
	}
	int Image::GetPixelDataSize(int, uint32_t *){
		cout << "Sce::PlayStation::Core::Imaging::GetPixelDataSize(int, uint32_t *) Unimplemented." << endl;
		return 0;
	}
	int Image::ResizeNative(int, Sce::PlayStation::Core::Imaging::ImageSize *, int *){
		cout << "Sce::PlayStation::Core::Imaging::ResizeNative(int, Sce::PlayStation::Core::Imaging::ImageSize *, int *) Unimplemented." << endl;
		return 0;
	}
	int Image::CropNative(int, Sce::PlayStation::Core::Imaging::ImageRect *, int *){
		cout << "Sce::PlayStation::Core::Imaging::CropNative(int, Sce::PlayStation::Core::Imaging::ImageRect *, int *) Unimplemented." << endl;
		return 0;
	}
	int Image::DrawImageNative(int, int, Sce::PlayStation::Core::Imaging::ImagePosition *){
		cout << "Sce::PlayStation::Core::Imaging::DrawImageNative(int, int, Sce::PlayStation::Core::Imaging::ImagePosition *) Unimplemented." << endl;
		return 0;
	}
	int Image::DrawRectangleNative(int, Sce::PlayStation::Core::Imaging::ImageColor *, Sce::PlayStation::Core::Imaging::ImageRect *){
		cout << "Sce::PlayStation::Core::Imaging::DrawRectangleNative(int, Sce::PlayStation::Core::Imaging::ImageColor *, Sce::PlayStation::Core::Imaging::ImageRect *) Unimplemented." << endl;
		return 0;
	}
	int Image::DrawTextNative(int, string, int, int, Sce::PlayStation::Core::Imaging::ImageColor *, int, Sce::PlayStation::Core::Imaging::ImagePosition *){
		cout << "Sce::PlayStation::Core::Imaging::DrawTextNative(int, string, int, int, Sce::PlayStation::Core::Imaging::ImageColor *, int, Sce::PlayStation::Core::Imaging::ImagePosition *) Unimplemented." << endl;
		return 0;
	}
	int Image::ExportNative(int, string, string){
		cout << "Sce::PlayStation::Core::Imaging::ExportNative(int, string, string) Unimplemented." << endl;
		return 0;
	}
	int Image::SaveAsNative(int, string){
		cout << "Sce::PlayStation::Core::Imaging::SaveAsNative(int, string) Unimplemented." << endl;
		return 0;
	}
}
