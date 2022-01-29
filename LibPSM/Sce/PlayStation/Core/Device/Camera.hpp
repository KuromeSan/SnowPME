#ifndef LIB_PSM_CAMERA_H
#define LIB_PSM_CAMERA_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>

#include "CameraFacing.hpp"
#include "CameraImageFormat.hpp"
#include "CameraState.hpp"
#include "CameraSize.hpp"
#include "CameraInfo.hpp"
#include "PictureState.hpp"

using namespace std;

namespace Sce::PlayStation::Core::Device {
	class Camera {
	public:
		static int GetNumberOfCamerasNative();
		static int GetCameraFacingNative(int, CameraFacing *);
		static int GetSupportedPreviewSizeCountNative(int);
		static int GetSupportedPreviewSizeNative(int, int, CameraSize *);
		static int GetSupportedPictureSizeCountNative(int);
		static int GetSupportedPictureSizeNative(int, int, CameraSize *);
		static int NewFromIndex(int, int *);
		static int ReleaseNative(int);
		static int GetCameraStateNative(int, CameraState *);
		static int HasTakenPictureNative(int, PictureState *);
		static int OpenNative(int, CameraSize);
		static int CloseNative(int);
		static int GetPreviewSizeNative(int, CameraSize *);
		static int GetPreviewImageFormatNative(int, CameraImageFormat *);
		static int StartNative(int);
		static int StopNative(int);
		static int ReadNative(int, byte*, int, long *);
		static int TakePictureNative(int, CameraSize);
		static int GetPictureFilenameNative(int, string *);
	};
}
#endif
