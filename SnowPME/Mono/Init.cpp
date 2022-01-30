#include "Init.hpp"
#include "Security.hpp"
#include "../LibPSM.hpp"
#include "../Config.hpp"
namespace SnowPME::Mono
{
	/*
	*	This function initalizes mono with a given executable path
	*/
	int Init::InitMono(string executablePath) {
		MonoDomain* domain;
		cout << "C# Assembly Loading [ " << executablePath << " ]";

		Init::executableFile = executablePath;

		// Lockdown mono if security is enabled
		if (!Config::SecurityCritical) {
			mono_security_enable_core_clr();
			mono_security_set_core_clr_platform_callback(Security::IsSecurityCriticalExempt);
		}
				
		// Tell mono there is no config file
		mono_config_parse(NULL);

		// Set runtime install location
		mono_set_dirs(Config::RuntimeLibPath.c_str(), Config::RuntimeConfigPath.c_str());

		// Create a domain in which this application will run under.
		domain = mono_jit_init_version(executablePath.c_str(), "mobile");

		Init::addFunctions();
		return 0;
	}

	void Init::addFunctions() {
		mono_add_internal_call("GetExceptionInfoNative(string&,string&)", Sce::PlayStation::Core::Error::GetExceptionInfoNative);
		mono_add_internal_call("WriteNative(string)", Sce::PlayStation::Core::Environment::Log::WriteNative);
		mono_add_internal_call("GetNeedsRedirection()", Sce::PlayStation::Core::Environment::Log::GetNeedsRedirection);
		mono_add_internal_call("CheckEventsNative(Sce.PlayStation.Core.Environment.SystemEvents/InternalData&)", Sce::PlayStation::Core::Environment::SystemEvents::CheckEventsNative);
		mono_add_internal_call("GetInt(Sce.PlayStation.Core.Environment.SystemParameters/ParameterKey,int&)", Sce::PlayStation::Core::Environment::SystemParameters::GetInt);
		mono_add_internal_call("GetFloat(Sce.PlayStation.Core.Environment.SystemParameters/ParameterKey,single&)", Sce::PlayStation::Core::Environment::SystemParameters::GetFloat);
		mono_add_internal_call("GetString(Sce.PlayStation.Core.Environment.SystemParameters/ParameterKey,string&)", Sce::PlayStation::Core::Environment::SystemParameters::GetString);
		mono_add_internal_call("GetMemoryUsage(bool)", Sce::PlayStation::Core::Environment::SystemMemory::GetMemoryUsage);
		mono_add_internal_call("WriteNative(byte[])", Sce::PlayStation::Core::Environment::PersistentMemory::WriteNative);
		mono_add_internal_call("ReadNative(byte[])", Sce::PlayStation::Core::Environment::PersistentMemory::ReadNative);
		mono_add_internal_call("ExecuteNative(Sce.PlayStation.Core.Environment.Shell/Action&)", Sce::PlayStation::Core::Environment::Shell::ExecuteNative);
		mono_add_internal_call("NewNative(Sce.PlayStation.Core.Environment.CommonDialogType,int&)", Sce::PlayStation::Core::Environment::TextInputDialog::NewNative);
		mono_add_internal_call("ReleaseNative(Sce.PlayStation.Core.Environment.CommonDialogType,int)", Sce::PlayStation::Core::Environment::TextInputDialog::ReleaseNative);
		mono_add_internal_call("OpenNative(Sce.PlayStation.Core.Environment.CommonDialogType,int,Sce.PlayStation.Core.Environment.TextInputDialog/Arguments&)", Sce::PlayStation::Core::Environment::TextInputDialog::OpenNative);
		mono_add_internal_call("AbortNative(Sce.PlayStation.Core.Environment.CommonDialogType,int)", Sce::PlayStation::Core::Environment::TextInputDialog::AbortNative);
		mono_add_internal_call("GetState(Sce.PlayStation.Core.Environment.CommonDialogType,int,Sce.PlayStation.Core.Environment.CommonDialogState&)", Sce::PlayStation::Core::Environment::TextInputDialog::GetState);
		mono_add_internal_call("GetResult(Sce.PlayStation.Core.Environment.CommonDialogType,int,Sce.PlayStation.Core.Environment.CommonDialogResult&,Sce.PlayStation.Core.Environment.TextInputDialog/Results&)", Sce::PlayStation::Core::Environment::TextInputDialog::GetResult);
		mono_add_internal_call("GetUniqueID(byte[])", Sce::PlayStation::Core::Services::AccountInformation::GetUniqueID);
		mono_add_internal_call("NewNative(int,int&)", Sce::PlayStation::Core::Services::InAppPurchaseDialog::NewNative);
		mono_add_internal_call("ReleaseNative(int,int)", Sce::PlayStation::Core::Services::InAppPurchaseDialog::ReleaseNative);
		mono_add_internal_call("OpenNative(int,int,Sce.PlayStation.Core.Services.InAppPurchaseDialog/CommandArguments&)", Sce::PlayStation::Core::Services::InAppPurchaseDialog::OpenNative);
		mono_add_internal_call("AbortNative(int,int)", Sce::PlayStation::Core::Services::InAppPurchaseDialog::AbortNative);
		mono_add_internal_call("GetState(int,int,Sce.PlayStation.Core.Environment.CommonDialogState&)", Sce::PlayStation::Core::Services::InAppPurchaseDialog::GetState);
		mono_add_internal_call("GetResult(int,int,Sce.PlayStation.Core.Environment.CommonDialogResult&,Sce.PlayStation.Core.Services.InAppPurchaseDialog/CommandResults&)", Sce::PlayStation::Core::Services::InAppPurchaseDialog::GetResult);
		mono_add_internal_call("SetTextNative(string)", Sce::PlayStation::Core::Environment::Clipboard::SetTextNative);
		mono_add_internal_call("GetTextNative(string&)", Sce::PlayStation::Core::Environment::Clipboard::GetTextNative);
		mono_add_internal_call("GetNetworkInterfaceTypeNative()", Sce::PlayStation::Core::Environment::NetworkInformation::GetNetworkInterfaceTypeNative);
		mono_add_internal_call("NewNative(int,int&)", Sce::PlayStation::Core::Device::CameraImportDialog::NewNative);
		mono_add_internal_call("ReleaseNative(int,int)", Sce::PlayStation::Core::Device::CameraImportDialog::ReleaseNative);
		mono_add_internal_call("OpenNative(int,int,Sce.PlayStation.Core.Device.CameraImportDialog/DialogArguments&)", Sce::PlayStation::Core::Device::CameraImportDialog::OpenNative);
		mono_add_internal_call("AbortNative(int,int)", Sce::PlayStation::Core::Device::CameraImportDialog::AbortNative);
		mono_add_internal_call("GetState(int,int,Sce.PlayStation.Core.Environment.CommonDialogState&)", Sce::PlayStation::Core::Device::CameraImportDialog::GetState);
		mono_add_internal_call("GetResult(int,int,Sce.PlayStation.Core.Environment.CommonDialogResult&,Sce.PlayStation.Core.Device.CameraImportDialog/DialogResults&)", Sce::PlayStation::Core::Device::CameraImportDialog::GetResult);
		mono_add_internal_call("NewNative(int,int&)", Sce::PlayStation::Core::Device::PhotoImportDialog::NewNative);
		mono_add_internal_call("ReleaseNative(int,int)", Sce::PlayStation::Core::Device::PhotoImportDialog::ReleaseNative);
		mono_add_internal_call("OpenNative(int,int,Sce.PlayStation.Core.Device.PhotoImportDialog/DialogArguments&)", Sce::PlayStation::Core::Device::PhotoImportDialog::OpenNative);
		mono_add_internal_call("AbortNative(int,int)", Sce::PlayStation::Core::Device::PhotoImportDialog::AbortNative);
		mono_add_internal_call("GetState(int,int,Sce.PlayStation.Core.Environment.CommonDialogState&)", Sce::PlayStation::Core::Device::PhotoImportDialog::GetState);
		mono_add_internal_call("GetResult(int,int,Sce.PlayStation.Core.Environment.CommonDialogResult&,Sce.PlayStation.Core.Device.PhotoImportDialog/DialogResults&)", Sce::PlayStation::Core::Device::PhotoImportDialog::GetResult);
		mono_add_internal_call("Create(int,int,Sce.PlayStation.Core.Graphics.PixelFormat,Sce.PlayStation.Core.Graphics.PixelFormat,Sce.PlayStation.Core.Graphics.MultiSampleMode,int&)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::Create);
		mono_add_internal_call("Delete(int)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::Delete);
		mono_add_internal_call("Update(int,Sce.PlayStation.Core.Graphics.GraphicsUpdate,Sce.PlayStation.Core.Graphics.GraphicsState&,int[])", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::Update);
		mono_add_internal_call("SwapBuffers(int)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::SwapBuffers);
		mono_add_internal_call("Clear(int,Sce.PlayStation.Core.Graphics.ClearMask)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::Clear);
		mono_add_internal_call("DrawArrays(int,Sce.PlayStation.Core.Graphics.DrawMode,int,int,int)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::DrawArrays);
		mono_add_internal_call("DrawArrays2(int,Sce.PlayStation.Core.Graphics.Primitive[],int,int)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::DrawArrays2);
		mono_add_internal_call("DrawArraysInstanced(int,Sce.PlayStation.Core.Graphics.DrawMode,int,int,int,int)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::DrawArraysInstanced);
		mono_add_internal_call("ReadPixels(int,byte[],Sce.PlayStation.Core.Graphics.PixelFormat,int,int,int,int)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::ReadPixels);
		mono_add_internal_call("ReadPixels2(int,int,int,Sce.PlayStation.Core.Graphics.TextureCubeFace,int,int,int,int,int,int)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::ReadPixels2);
		mono_add_internal_call("GetMaxScreenSize(int&,int&)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::GetMaxScreenSize);
		mono_add_internal_call("GetScreenSizes(Sce.PlayStation.Core.Imaging.ImageSize[],int&)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::GetScreenSizes);
		mono_add_internal_call("GetScreenInfo(int,int&,int&,Sce.PlayStation.Core.Graphics.PixelFormat&,Sce.PlayStation.Core.Graphics.PixelFormat&,Sce.PlayStation.Core.Graphics.MultiSampleMode&)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::GetScreenInfo);
		mono_add_internal_call("GetCaps(int,Sce.PlayStation.Core.Graphics.GraphicsCapsState&)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::GetCaps);
		mono_add_internal_call("SetActiveScreen(int,int,int,int,int)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::SetActiveScreen);
		mono_add_internal_call("SetVirtualScreen(int,int,int,int,int)", Sce::PlayStation::Core::Graphics::PsmGraphicsContext::SetVirtualScreen);
		mono_add_internal_call("FromFile(string,string,string[],int[],int&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::FromFile);
		mono_add_internal_call("FromImage(byte[],byte[],string[],int[],int&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::FromImage);
		mono_add_internal_call("Delete(int)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::Delete);
		mono_add_internal_call("AddRef(int)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::AddRef);
		mono_add_internal_call("GetUniformCount(int,int&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::GetUniformCount);
		mono_add_internal_call("GetAttributeCount(int,int&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::GetAttributeCount);
		mono_add_internal_call("FindUniform(int,string,int&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::FindUniform);
		mono_add_internal_call("FindAttribute(int,string,int&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::FindAttribute);
		mono_add_internal_call("GetUniformBinding(int,int,string&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::GetUniformBinding);
		mono_add_internal_call("SetUniformBinding(int,int,string)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformBinding);
		mono_add_internal_call("GetAttributeBinding(int,int,string&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::GetAttributeBinding);
		mono_add_internal_call("SetAttributeBinding(int,int,string)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetAttributeBinding);
		mono_add_internal_call("GetUniformType(int,int,Sce.PlayStation.Core.Graphics.ShaderUniformType&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::GetUniformType);
		mono_add_internal_call("GetAttributeType(int,int,Sce.PlayStation.Core.Graphics.ShaderAttributeType&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::GetAttributeType);
		mono_add_internal_call("GetUniformName(int,int,string&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::GetUniformName);
		mono_add_internal_call("GetAttributeName(int,int,string&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::GetAttributeName);
		mono_add_internal_call("GetUniformSize(int,int,int&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::GetUniformSize);
		mono_add_internal_call("GetAttributeSize(int,int,int&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::GetAttributeSize);
		mono_add_internal_call("SetUniformValue(int,int,int,Sce.PlayStation.Core.Matrix4&,Sce.PlayStation.Core.Graphics.ShaderUniformType)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformValueMatrix4);
		mono_add_internal_call("SetUniformValue(int,int,int,Sce.PlayStation.Core.Vector4&,Sce.PlayStation.Core.Graphics.ShaderUniformType)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformValueVector4);
		mono_add_internal_call("SetUniformValue(int,int,int,Sce.PlayStation.Core.Vector3&,Sce.PlayStation.Core.Graphics.ShaderUniformType)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformValueVector3);
		mono_add_internal_call("SetUniformValue(int,int,int,Sce.PlayStation.Core.Vector2&,Sce.PlayStation.Core.Graphics.ShaderUniformType)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformValueVector2);
		mono_add_internal_call("SetUniformValue(int,int,int,single&,Sce.PlayStation.Core.Graphics.ShaderUniformType)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformValueSingle);
		mono_add_internal_call("SetUniformValue(int,int,int,int&,Sce.PlayStation.Core.Graphics.ShaderUniformType)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformValueInt);
		mono_add_internal_call("SetUniformValue2(int,int,Sce.PlayStation.Core.Matrix4[],Sce.PlayStation.Core.Graphics.ShaderUniformType,int,int,int)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformValue2Matrix4);
		mono_add_internal_call("SetUniformValue2(int,int,Sce.PlayStation.Core.Vector4[],Sce.PlayStation.Core.Graphics.ShaderUniformType,int,int,int)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformValue2Vector4);
		mono_add_internal_call("SetUniformValue2(int,int,Sce.PlayStation.Core.Vector3[],Sce.PlayStation.Core.Graphics.ShaderUniformType,int,int,int)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformValue2Vector3);
		mono_add_internal_call("SetUniformValue2(int,int,Sce.PlayStation.Core.Vector2[],Sce.PlayStation.Core.Graphics.ShaderUniformType,int,int,int)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformValue2Vector2);
		mono_add_internal_call("SetUniformValue2(int,int,single[],Sce.PlayStation.Core.Graphics.ShaderUniformType,int,int,int)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformValue2Single);
		mono_add_internal_call("SetUniformValue2(int,int,int[],Sce.PlayStation.Core.Graphics.ShaderUniformType,int,int,int)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetUniformValue2Int);
		mono_add_internal_call("SetAttributeValue2(int,int,single[])", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetAttributeValue2);
		mono_add_internal_call("GetUniformTexture(int,int,int&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::GetUniformTexture);
		mono_add_internal_call("GetAttributeStream(int,int,int&)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::GetAttributeStream);
		mono_add_internal_call("SetAttributeStream(int,int,int)", Sce::PlayStation::Core::Graphics::PsmShaderProgram::SetAttributeStream);
		mono_add_internal_call("Create(int,int,int,int,Sce.PlayStation.Core.Graphics.VertexFormat[],int&)", Sce::PlayStation::Core::Graphics::PsmVertexBuffer::Create);
		mono_add_internal_call("Delete(int)", Sce::PlayStation::Core::Graphics::PsmVertexBuffer::Delete);
		mono_add_internal_call("AddRef(int)", Sce::PlayStation::Core::Graphics::PsmVertexBuffer::AddRef);
		mono_add_internal_call("SetVertices(int,System.Array,int,int,int)", Sce::PlayStation::Core::Graphics::PsmVertexBuffer::SetVertices);
		mono_add_internal_call("SetVertices2(int,int,System.Array,Sce.PlayStation.Core.Graphics.VertexFormat,Sce.PlayStation.Core.Vector4&,Sce.PlayStation.Core.Vector4&,int,int,int,int,int)", Sce::PlayStation::Core::Graphics::PsmVertexBuffer::SetVertices2);
		mono_add_internal_call("SetIndices(int,uint16[],int,int,int)", Sce::PlayStation::Core::Graphics::PsmVertexBuffer::SetIndices);
		mono_add_internal_call("Create(Sce.PlayStation.Core.Graphics.PixelBufferType,int,int,bool,Sce.PlayStation.Core.Graphics.PixelFormat,Sce.PlayStation.Core.Graphics.PixelBufferOption,Sce.PlayStation.Core.Graphics.InternalOption,int&)", Sce::PlayStation::Core::Graphics::PsmPixelBuffer::Create);
		mono_add_internal_call("Delete(int)", Sce::PlayStation::Core::Graphics::PsmPixelBuffer::Delete);
		mono_add_internal_call("AddRef(int)", Sce::PlayStation::Core::Graphics::PsmPixelBuffer::AddRef);
		mono_add_internal_call("GetInfo(int,Sce.PlayStation.Core.Graphics.PixelBufferType&,int&,int&,int&,Sce.PlayStation.Core.Graphics.PixelFormat&,Sce.PlayStation.Core.Graphics.PixelBufferOption&)", Sce::PlayStation::Core::Graphics::PsmPixelBuffer::GetInfo);
		mono_add_internal_call("FromFile(Sce.PlayStation.Core.Graphics.PixelBufferType,string,bool,Sce.PlayStation.Core.Graphics.PixelFormat,int&)", Sce::PlayStation::Core::Graphics::PsmTexture::FromFile);
		mono_add_internal_call("FromImage(Sce.PlayStation.Core.Graphics.PixelBufferType,byte[],bool,Sce.PlayStation.Core.Graphics.PixelFormat,int&)", Sce::PlayStation::Core::Graphics::PsmTexture::FromImage);
		mono_add_internal_call("SetFilter(int,Sce.PlayStation.Core.Graphics.TextureFilter&)", Sce::PlayStation::Core::Graphics::PsmTexture::SetFilter);
		mono_add_internal_call("SetWrap(int,Sce.PlayStation.Core.Graphics.TextureWrap&)", Sce::PlayStation::Core::Graphics::PsmTexture::SetWrap);
		mono_add_internal_call("SetMaxAnisotropy(int,single)", Sce::PlayStation::Core::Graphics::PsmTexture::SetMaxAnisotropy);
		mono_add_internal_call("SetPixels(int,int,Sce.PlayStation.Core.Graphics.TextureCubeFace,System.Array,Sce.PlayStation.Core.Graphics.PixelFormat,int,int,int,int,int,int)", Sce::PlayStation::Core::Graphics::PsmTexture::SetPixels);
		mono_add_internal_call("GenerateMipmap(int)", Sce::PlayStation::Core::Graphics::PsmTexture::GenerateMipmap);
		mono_add_internal_call("Create(int&)", Sce::PlayStation::Core::Graphics::PsmFrameBuffer::Create);
		mono_add_internal_call("Delete(int)", Sce::PlayStation::Core::Graphics::PsmFrameBuffer::Delete);
		mono_add_internal_call("AddRef(int)", Sce::PlayStation::Core::Graphics::PsmFrameBuffer::AddRef);
		mono_add_internal_call("SetColorTarget(int,int,int,Sce.PlayStation.Core.Graphics.TextureCubeFace,int&)", Sce::PlayStation::Core::Graphics::PsmFrameBuffer::SetColorTarget);
		mono_add_internal_call("SetDepthTarget(int,int,int,Sce.PlayStation.Core.Graphics.TextureCubeFace,int&)", Sce::PlayStation::Core::Graphics::PsmFrameBuffer::SetDepthTarget);
		mono_add_internal_call("NewFromFilename(string,int&)", Sce::PlayStation::Core::Audio::Sound::NewFromFilename);
		mono_add_internal_call("NewFromFileImage(byte[],int&)", Sce::PlayStation::Core::Audio::Sound::NewFromFileImage);
		mono_add_internal_call("ReleaseNative(int)", Sce::PlayStation::Core::Audio::Sound::ReleaseNative);
		mono_add_internal_call("CreatePlayerNative(int,int&)", Sce::PlayStation::Core::Audio::Sound::CreatePlayerNative);
		mono_add_internal_call("ReleaseNative(int)", Sce::PlayStation::Core::Audio::SoundPlayer::ReleaseNative);
		mono_add_internal_call("PlayNative(int)", Sce::PlayStation::Core::Audio::SoundPlayer::PlayNative);
		mono_add_internal_call("StopNative(int)", Sce::PlayStation::Core::Audio::SoundPlayer::StopNative);
		mono_add_internal_call("GetStatusNative(int,Sce.PlayStation.Core.Audio.SoundStatus&)", Sce::PlayStation::Core::Audio::SoundPlayer::GetStatusNative);
		mono_add_internal_call("GetVolumeNative(int,single&)", Sce::PlayStation::Core::Audio::SoundPlayer::GetVolumeNative);
		mono_add_internal_call("SetVolumeNative(int,single)", Sce::PlayStation::Core::Audio::SoundPlayer::SetVolumeNative);
		mono_add_internal_call("GetPanNative(int,single&)", Sce::PlayStation::Core::Audio::SoundPlayer::GetPanNative);
		mono_add_internal_call("SetPanNative(int,single)", Sce::PlayStation::Core::Audio::SoundPlayer::SetPanNative);
		mono_add_internal_call("GetLoopNative(int,bool&)", Sce::PlayStation::Core::Audio::SoundPlayer::GetLoopNative);
		mono_add_internal_call("SetLoopNative(int,bool)", Sce::PlayStation::Core::Audio::SoundPlayer::SetLoopNative);
		mono_add_internal_call("GetPlaybackRateNative(int,single&)", Sce::PlayStation::Core::Audio::SoundPlayer::GetPlaybackRateNative);
		mono_add_internal_call("SetPlaybackRateNative(int,single)", Sce::PlayStation::Core::Audio::SoundPlayer::SetPlaybackRateNative);
		mono_add_internal_call("GetPosition(int,ulong&)", Sce::PlayStation::Core::Audio::SoundPlayer::GetPosition);
		mono_add_internal_call("SetPosition(int,ulong)", Sce::PlayStation::Core::Audio::SoundPlayer::SetPosition);
		mono_add_internal_call("GetLength(int,ulong&)", Sce::PlayStation::Core::Audio::SoundPlayer::GetLength);
		mono_add_internal_call("NewFromFilename(string,int&)", Sce::PlayStation::Core::Audio::Bgm::NewFromFilename);
		mono_add_internal_call("NewFromFileImage(byte[],int&)", Sce::PlayStation::Core::Audio::Bgm::NewFromFileImage);
		mono_add_internal_call("ReleaseNative(int)", Sce::PlayStation::Core::Audio::Bgm::ReleaseNative);
		mono_add_internal_call("CreatePlayerNative(int,int&)", Sce::PlayStation::Core::Audio::Bgm::CreatePlayerNative);
		mono_add_internal_call("ReleaseNative(int)", Sce::PlayStation::Core::Audio::BgmPlayer::ReleaseNative);
		mono_add_internal_call("PlayNative(int)", Sce::PlayStation::Core::Audio::BgmPlayer::PlayNative);
		mono_add_internal_call("StopNative(int)", Sce::PlayStation::Core::Audio::BgmPlayer::StopNative);
		mono_add_internal_call("GetStatusNative(int,Sce.PlayStation.Core.Audio.BgmStatus&)", Sce::PlayStation::Core::Audio::BgmPlayer::GetStatusNative);
		mono_add_internal_call("PauseNative(int)", Sce::PlayStation::Core::Audio::BgmPlayer::PauseNative);
		mono_add_internal_call("ResumeNative(int)", Sce::PlayStation::Core::Audio::BgmPlayer::ResumeNative);
		mono_add_internal_call("SetVolumeNative(int,single)", Sce::PlayStation::Core::Audio::BgmPlayer::SetVolumeNative);
		mono_add_internal_call("GetVolumeNative(int,single&)", Sce::PlayStation::Core::Audio::BgmPlayer::GetVolumeNative);
		mono_add_internal_call("GetLoopNative(int,bool&)", Sce::PlayStation::Core::Audio::BgmPlayer::GetLoopNative);
		mono_add_internal_call("SetLoopNative(int,bool)", Sce::PlayStation::Core::Audio::BgmPlayer::SetLoopNative);
		mono_add_internal_call("GetPlaybackRateNative(int,single&)", Sce::PlayStation::Core::Audio::BgmPlayer::GetPlaybackRateNative);
		mono_add_internal_call("SetPlaybackRateNative(int,single)", Sce::PlayStation::Core::Audio::BgmPlayer::SetPlaybackRateNative);
		mono_add_internal_call("GetPosition(int,ulong&)", Sce::PlayStation::Core::Audio::BgmPlayer::GetPosition);
		mono_add_internal_call("SetPosition(int,ulong)", Sce::PlayStation::Core::Audio::BgmPlayer::SetPosition);
		mono_add_internal_call("GetLength(int,ulong&)", Sce::PlayStation::Core::Audio::BgmPlayer::GetLength);
		mono_add_internal_call("GetLoopPosition(int,ulong&,ulong&)", Sce::PlayStation::Core::Audio::BgmPlayer::GetLoopPosition);
		mono_add_internal_call("SetLoopPosition(int,ulong,ulong)", Sce::PlayStation::Core::Audio::BgmPlayer::SetLoopPosition);
		mono_add_internal_call("GetDataNative(int,Sce.PlayStation.Core.Input.TouchData[],int,int&)", Sce::PlayStation::Core::Input::Touch::GetDataNative);
		mono_add_internal_call("GetRearTouchDataNative(int,Sce.PlayStation.Core.Input.TouchData[],int,int&)", Sce::PlayStation::Core::Input::Touch::GetRearTouchDataNative);
		mono_add_internal_call("GetDataNative(int,Sce.PlayStation.Core.Input.GamePadData&)", Sce::PlayStation::Core::Input::GamePad::GetDataNative);
		mono_add_internal_call("GetDataNative(int,Sce.PlayStation.Core.Input.MotionData&)", Sce::PlayStation::Core::Input::Motion::GetDataNative);
		mono_add_internal_call("NewFromFilename(string,int&)", Sce::PlayStation::Core::Imaging::Image::NewFromFilename);
		mono_add_internal_call("NewFromFileImage(byte[],int&)", Sce::PlayStation::Core::Imaging::Image::NewFromFileImage);
		mono_add_internal_call("NewFromModeSizeColor(Sce.PlayStation.Core.Imaging.ImageMode,Sce.PlayStation.Core.Imaging.ImageSize&,Sce.PlayStation.Core.Imaging.ImageColor&,int&)", Sce::PlayStation::Core::Imaging::Image::NewFromModeSizeColor);
		mono_add_internal_call("NewFromModeSizeBuffer(Sce.PlayStation.Core.Imaging.ImageMode,Sce.PlayStation.Core.Imaging.ImageSize&,byte[],int&)", Sce::PlayStation::Core::Imaging::Image::NewFromModeSizeBuffer);
		mono_add_internal_call("AddRefNative(int)", Sce::PlayStation::Core::Imaging::Image::AddRefNative);
		mono_add_internal_call("ReleaseNative(int)", Sce::PlayStation::Core::Imaging::Image::ReleaseNative);
		mono_add_internal_call("GetSize(int,Sce.PlayStation.Core.Imaging.ImageSize&)", Sce::PlayStation::Core::Imaging::Image::GetSize);
		mono_add_internal_call("SetDecodeSize(int,Sce.PlayStation.Core.Imaging.ImageSize&)", Sce::PlayStation::Core::Imaging::Image::SetDecodeSize);
		mono_add_internal_call("DecodeNative(int)", Sce::PlayStation::Core::Imaging::Image::DecodeNative);
		mono_add_internal_call("GetPixelData(int,byte[],uint)", Sce::PlayStation::Core::Imaging::Image::GetPixelData);
		mono_add_internal_call("GetPixelDataSize(int,uint&)", Sce::PlayStation::Core::Imaging::Image::GetPixelDataSize);
		mono_add_internal_call("ResizeNative(int,Sce.PlayStation.Core.Imaging.ImageSize&,int&)", Sce::PlayStation::Core::Imaging::Image::ResizeNative);
		mono_add_internal_call("CropNative(int,Sce.PlayStation.Core.Imaging.ImageRect&,int&)", Sce::PlayStation::Core::Imaging::Image::CropNative);
		mono_add_internal_call("DrawImageNative(int,int,Sce.PlayStation.Core.Imaging.ImagePosition&)", Sce::PlayStation::Core::Imaging::Image::DrawImageNative);
		mono_add_internal_call("DrawRectangleNative(int,Sce.PlayStation.Core.Imaging.ImageColor&,Sce.PlayStation.Core.Imaging.ImageRect&)", Sce::PlayStation::Core::Imaging::Image::DrawRectangleNative);
		mono_add_internal_call("DrawTextNative(int,string,int,int,Sce.PlayStation.Core.Imaging.ImageColor&,int,Sce.PlayStation.Core.Imaging.ImagePosition&)", Sce::PlayStation::Core::Imaging::Image::DrawTextNative);
		mono_add_internal_call("ExportNative(int,string,string)", Sce::PlayStation::Core::Imaging::Image::ExportNative);
		mono_add_internal_call("SaveAsNative(int,string)", Sce::PlayStation::Core::Imaging::Image::SaveAsNative);
		mono_add_internal_call("NewFromFilenameSizeStyle(string,int,Sce.PlayStation.Core.Imaging.FontStyle,int&)", Sce::PlayStation::Core::Imaging::Font::NewFromFilenameSizeStyle);
		mono_add_internal_call("NewFromAliasSizeStyle(Sce.PlayStation.Core.Imaging.FontAlias,int,Sce.PlayStation.Core.Imaging.FontStyle,int&)", Sce::PlayStation::Core::Imaging::Font::NewFromAliasSizeStyle);
		mono_add_internal_call("AddRefNative(int)", Sce::PlayStation::Core::Imaging::Font::AddRefNative);
		mono_add_internal_call("ReleaseNative(int)", Sce::PlayStation::Core::Imaging::Font::ReleaseNative);
		mono_add_internal_call("GetName(int,string&)", Sce::PlayStation::Core::Imaging::Font::GetName);
		mono_add_internal_call("GetSize(int,int&)", Sce::PlayStation::Core::Imaging::Font::GetSize);
		mono_add_internal_call("GetStyle(int,Sce.PlayStation.Core.Imaging.FontStyle&)", Sce::PlayStation::Core::Imaging::Font::GetStyle);
		mono_add_internal_call("GetMetrics(int,Sce.PlayStation.Core.Imaging.FontMetrics&)", Sce::PlayStation::Core::Imaging::Font::GetMetrics);
		mono_add_internal_call("GetTextWidthNative(int,string,int,int,int&)", Sce::PlayStation::Core::Imaging::Font::GetTextWidthNative);
		mono_add_internal_call("GetTextMetricsNative(int,string,int,int,Sce.PlayStation.Core.Imaging.CharMetrics[])", Sce::PlayStation::Core::Imaging::Font::GetTextMetricsNative);
		mono_add_internal_call("StartNative()", Sce::PlayStation::Core::Device::Location::StartNative);
		mono_add_internal_call("StopNative()", Sce::PlayStation::Core::Device::Location::StopNative);
		mono_add_internal_call("GetDataNative(Sce.PlayStation.Core.Device.LocationData&)", Sce::PlayStation::Core::Device::Location::GetDataNative);
		mono_add_internal_call("GetEnableDevicesNative()", Sce::PlayStation::Core::Device::Location::GetEnableDevicesNative);
		mono_add_internal_call("GetNumberOfCamerasNative()", Sce::PlayStation::Core::Device::Camera::GetNumberOfCamerasNative);
		mono_add_internal_call("GetCameraFacingNative(int,Sce.PlayStation.Core.Device.CameraFacing&)", Sce::PlayStation::Core::Device::Camera::GetCameraFacingNative);
		mono_add_internal_call("GetSupportedPreviewSizeCountNative(int)", Sce::PlayStation::Core::Device::Camera::GetSupportedPreviewSizeCountNative);
		mono_add_internal_call("GetSupportedPreviewSizeNative(int,int,Sce.PlayStation.Core.Device.CameraSize&)", Sce::PlayStation::Core::Device::Camera::GetSupportedPreviewSizeNative);
		mono_add_internal_call("GetSupportedPictureSizeCountNative(int)", Sce::PlayStation::Core::Device::Camera::GetSupportedPictureSizeCountNative);
		mono_add_internal_call("GetSupportedPictureSizeNative(int,int,Sce.PlayStation.Core.Device.CameraSize&)", Sce::PlayStation::Core::Device::Camera::GetSupportedPictureSizeNative);
		mono_add_internal_call("NewFromIndex(int,int&)", Sce::PlayStation::Core::Device::Camera::NewFromIndex);
		mono_add_internal_call("ReleaseNative(int)", Sce::PlayStation::Core::Device::Camera::ReleaseNative);
		mono_add_internal_call("GetCameraStateNative(int,Sce.PlayStation.Core.Device.CameraState&)", Sce::PlayStation::Core::Device::Camera::GetCameraStateNative);
		mono_add_internal_call("HasTakenPictureNative(int,Sce.PlayStation.Core.Device.PictureState&)", Sce::PlayStation::Core::Device::Camera::HasTakenPictureNative);
		mono_add_internal_call("OpenNative(int,Sce.PlayStation.Core.Device.CameraSize)", Sce::PlayStation::Core::Device::Camera::OpenNative);
		mono_add_internal_call("CloseNative(int)", Sce::PlayStation::Core::Device::Camera::CloseNative);
		mono_add_internal_call("GetPreviewSizeNative(int,Sce.PlayStation.Core.Device.CameraSize&)", Sce::PlayStation::Core::Device::Camera::GetPreviewSizeNative);
		mono_add_internal_call("GetPreviewImageFormatNative(int,Sce.PlayStation.Core.Device.CameraImageFormat&)", Sce::PlayStation::Core::Device::Camera::GetPreviewImageFormatNative);
		mono_add_internal_call("StartNative(int)", Sce::PlayStation::Core::Device::Camera::StartNative);
		mono_add_internal_call("StopNative(int)", Sce::PlayStation::Core::Device::Camera::StopNative);
		mono_add_internal_call("ReadNative(int,byte[],int,long&)", Sce::PlayStation::Core::Device::Camera::ReadNative);
		mono_add_internal_call("TakePictureNative(int,Sce.PlayStation.Core.Device.CameraSize)", Sce::PlayStation::Core::Device::Camera::TakePictureNative);
		mono_add_internal_call("GetPictureFilenameNative(int,string&)", Sce::PlayStation::Core::Device::Camera::GetPictureFilenameNative);
		mono_add_internal_call("CreateRequestNative(int,string,string,int&)", Sce::PlayStation::Core::Services::NetworkRequest::CreateRequestNative);
		mono_add_internal_call("QueueRequestNative(int,string,string,int&)", Sce::PlayStation::Core::Services::NetworkRequest::QueueRequestNative);
		mono_add_internal_call("DestroyRequestNative(int)", Sce::PlayStation::Core::Services::NetworkRequest::DestroyRequestNative);
		mono_add_internal_call("GetResponseNative(int,string&)", Sce::PlayStation::Core::Services::NetworkRequest::GetResponseNative);
		mono_add_internal_call("RegisterThreadNative()", Sce::PlayStation::Core::Services::NetworkRequest::RegisterThreadNative);
		mono_add_internal_call("UnregisterThreadNative()", Sce::PlayStation::Core::Services::NetworkRequest::UnregisterThreadNative);
		mono_add_internal_call("CheckStateNative(uint&)", Sce::PlayStation::Core::Services::Network::CheckStateNative);
		mono_add_internal_call("GetOnlineIdNative(string&)", Sce::PlayStation::Core::Services::Network::GetOnlineIdNative);
		mono_add_internal_call("GetAccountIdNative(ulong&)", Sce::PlayStation::Core::Services::Network::GetAccountIdNative);
		mono_add_internal_call("SetWebRequestDelegate(intptr)", Sce::PlayStation::Core::Services::Network::SetWebRequestDelegate);
		mono_add_internal_call("SetAuthServer(bool)", Sce::PlayStation::Core::Services::Network::SetAuthServer);
		mono_add_internal_call("GetAuthTicketDataNative(string&)", Sce::PlayStation::Core::Services::Network::GetAuthTicketDataNative);
		mono_add_internal_call("ResetAuthTicketNative()", Sce::PlayStation::Core::Services::Network::ResetAuthTicketNative);
		mono_add_internal_call("SetAppIdNative(string)", Sce::PlayStation::Core::Services::Network::SetAppIdNative);

	}
		

}