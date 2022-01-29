#include "Camera.hpp"

namespace Sce::PlayStation::Core::Device {
	int Camera::GetNumberOfCamerasNative(){
		cout << "Sce::PlayStation::Core::Device::GetNumberOfCamerasNative() Unimplemented.";
		return 0;
	}
	int Camera::GetCameraFacingNative(int, Sce::PlayStation::Core::Device::CameraFacing *){
		cout << "Sce::PlayStation::Core::Device::GetCameraFacingNative(int, Sce::PlayStation::Core::Device::CameraFacing *) Unimplemented.";
		return 0;
	}
	int Camera::GetSupportedPreviewSizeCountNative(int){
		cout << "Sce::PlayStation::Core::Device::GetSupportedPreviewSizeCountNative(int) Unimplemented.";
		return 0;
	}
	int Camera::GetSupportedPreviewSizeNative(int, int, Sce::PlayStation::Core::Device::CameraSize *){
		cout << "Sce::PlayStation::Core::Device::GetSupportedPreviewSizeNative(int, int, Sce::PlayStation::Core::Device::CameraSize *) Unimplemented.";
		return 0;
	}
	int Camera::GetSupportedPictureSizeCountNative(int){
		cout << "Sce::PlayStation::Core::Device::GetSupportedPictureSizeCountNative(int) Unimplemented.";
		return 0;
	}
	int Camera::GetSupportedPictureSizeNative(int, int, Sce::PlayStation::Core::Device::CameraSize *){
		cout << "Sce::PlayStation::Core::Device::GetSupportedPictureSizeNative(int, int, Sce::PlayStation::Core::Device::CameraSize *) Unimplemented.";
		return 0;
	}
	int Camera::NewFromIndex(int, int *){
		cout << "Sce::PlayStation::Core::Device::NewFromIndex(int, int *) Unimplemented.";
		return 0;
	}
	int Camera::ReleaseNative(int){
		cout << "Sce::PlayStation::Core::Device::ReleaseNative(int) Unimplemented.";
		return 0;
	}
	int Camera::GetCameraStateNative(int, Sce::PlayStation::Core::Device::CameraState *){
		cout << "Sce::PlayStation::Core::Device::GetCameraStateNative(int, Sce::PlayStation::Core::Device::CameraState *) Unimplemented.";
		return 0;
	}
	int Camera::HasTakenPictureNative(int, Sce::PlayStation::Core::Device::PictureState *){
		cout << "Sce::PlayStation::Core::Device::HasTakenPictureNative(int, Sce::PlayStation::Core::Device::PictureState *) Unimplemented.";
		return 0;
	}
	int Camera::OpenNative(int, Sce::PlayStation::Core::Device::CameraSize){
		cout << "Sce::PlayStation::Core::Device::OpenNative(int, Sce::PlayStation::Core::Device::CameraSize) Unimplemented.";
		return 0;
	}
	int Camera::CloseNative(int){
		cout << "Sce::PlayStation::Core::Device::CloseNative(int) Unimplemented.";
		return 0;
	}
	int Camera::GetPreviewSizeNative(int, Sce::PlayStation::Core::Device::CameraSize *){
		cout << "Sce::PlayStation::Core::Device::GetPreviewSizeNative(int, Sce::PlayStation::Core::Device::CameraSize *) Unimplemented.";
		return 0;
	}
	int Camera::GetPreviewImageFormatNative(int, Sce::PlayStation::Core::Device::CameraImageFormat *){
		cout << "Sce::PlayStation::Core::Device::GetPreviewImageFormatNative(int, Sce::PlayStation::Core::Device::CameraImageFormat *) Unimplemented.";
		return 0;
	}
	int Camera::StartNative(int){
		cout << "Sce::PlayStation::Core::Device::StartNative(int) Unimplemented.";
		return 0;
	}
	int Camera::StopNative(int){
		cout << "Sce::PlayStation::Core::Device::StopNative(int) Unimplemented.";
		return 0;
	}
	int Camera::ReadNative(int, byte*, int, long *){
		cout << "Sce::PlayStation::Core::Device::ReadNative(int, byte*, int, long *) Unimplemented.";
		return 0;
	}
	int Camera::TakePictureNative(int, Sce::PlayStation::Core::Device::CameraSize){
		cout << "Sce::PlayStation::Core::Device::TakePictureNative(int, Sce::PlayStation::Core::Device::CameraSize) Unimplemented.";
		return 0;
	}
	int Camera::GetPictureFilenameNative(int, string *){
		cout << "Sce::PlayStation::Core::Device::GetPictureFilenameNative(int, string *) Unimplemented.";
		return 0;
	}
}
