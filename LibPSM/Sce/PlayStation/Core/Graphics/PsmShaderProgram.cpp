#include "PsmShaderProgram.hpp"

namespace Sce::PlayStation::Core::Graphics {
	int PsmShaderProgram::FromFile(string, string, string*, int*, int *){
		cout << "Sce::PlayStation::Core::Graphics::FromFile(string, string, string*, int*, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::FromImage(byte*, byte*, string*, int*, int *){
		cout << "Sce::PlayStation::Core::Graphics::FromImage(byte*, byte*, string*, int*, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::Delete(int){
		cout << "Sce::PlayStation::Core::Graphics::Delete(int) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::AddRef(int){
		cout << "Sce::PlayStation::Core::Graphics::AddRef(int) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::GetUniformCount(int, int *){
		cout << "Sce::PlayStation::Core::Graphics::GetUniformCount(int, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::GetAttributeCount(int, int *){
		cout << "Sce::PlayStation::Core::Graphics::GetAttributeCount(int, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::FindUniform(int, string, int *){
		cout << "Sce::PlayStation::Core::Graphics::FindUniform(int, string, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::FindAttribute(int, string, int *){
		cout << "Sce::PlayStation::Core::Graphics::FindAttribute(int, string, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::GetUniformBinding(int, int, string *){
		cout << "Sce::PlayStation::Core::Graphics::GetUniformBinding(int, int, string *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformBinding(int, int, string){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformBinding(int, int, string) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::GetAttributeBinding(int, int, string *){
		cout << "Sce::PlayStation::Core::Graphics::GetAttributeBinding(int, int, string *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetAttributeBinding(int, int, string){
		cout << "Sce::PlayStation::Core::Graphics::SetAttributeBinding(int, int, string) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::GetUniformType(int, int, Sce::PlayStation::Core::Graphics::ShaderUniformType *){
		cout << "Sce::PlayStation::Core::Graphics::GetUniformType(int, int, Sce::PlayStation::Core::Graphics::ShaderUniformType *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::GetAttributeType(int, int, Sce::PlayStation::Core::Graphics::ShaderAttributeType *){
		cout << "Sce::PlayStation::Core::Graphics::GetAttributeType(int, int, Sce::PlayStation::Core::Graphics::ShaderAttributeType *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::GetUniformName(int, int, string *){
		cout << "Sce::PlayStation::Core::Graphics::GetUniformName(int, int, string *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::GetAttributeName(int, int, string *){
		cout << "Sce::PlayStation::Core::Graphics::GetAttributeName(int, int, string *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::GetUniformSize(int, int, int *){
		cout << "Sce::PlayStation::Core::Graphics::GetUniformSize(int, int, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::GetAttributeSize(int, int, int *){
		cout << "Sce::PlayStation::Core::Graphics::GetAttributeSize(int, int, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformValueMatrix4(int, int, int, Sce::PlayStation::Core::Matrix4 *, Sce::PlayStation::Core::Graphics::ShaderUniformType){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformValue(int, int, int, Sce::PlayStation::Core::Matrix4 *, Sce::PlayStation::Core::Graphics::ShaderUniformType) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformValueVector4(int, int, int, Sce::PlayStation::Core::Vector4 *, Sce::PlayStation::Core::Graphics::ShaderUniformType){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformValue(int, int, int, Sce::PlayStation::Core::Vector4 *, Sce::PlayStation::Core::Graphics::ShaderUniformType) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformValueVector3(int, int, int, Sce::PlayStation::Core::Vector3 *, Sce::PlayStation::Core::Graphics::ShaderUniformType){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformValue(int, int, int, Sce::PlayStation::Core::Vector3 *, Sce::PlayStation::Core::Graphics::ShaderUniformType) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformValueVector2(int, int, int, Sce::PlayStation::Core::Vector2 *, Sce::PlayStation::Core::Graphics::ShaderUniformType){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformValue(int, int, int, Sce::PlayStation::Core::Vector2 *, Sce::PlayStation::Core::Graphics::ShaderUniformType) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformValueFloat(int, int, int, float *, Sce::PlayStation::Core::Graphics::ShaderUniformType){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformValue(int, int, int, float *, Sce::PlayStation::Core::Graphics::ShaderUniformType) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformValueInt(int, int, int, int *, Sce::PlayStation::Core::Graphics::ShaderUniformType){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformValue(int, int, int, int *, Sce::PlayStation::Core::Graphics::ShaderUniformType) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformValue2Matrix4(int, int, Sce::PlayStation::Core::Matrix4*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformValue2(int, int, Sce::PlayStation::Core::Matrix4*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformValue2Vector4(int, int, Sce::PlayStation::Core::Vector4*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformValue2(int, int, Sce::PlayStation::Core::Vector4*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformValue2Vector3(int, int, Sce::PlayStation::Core::Vector3*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformValue2(int, int, Sce::PlayStation::Core::Vector3*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformValue2Vector2(int, int, Sce::PlayStation::Core::Vector2*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformValue2(int, int, Sce::PlayStation::Core::Vector2*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformValue2Float(int, int, float*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformValue2(int, int, float*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetUniformValue2Int(int, int, int*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetUniformValue2(int, int, int*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetAttributeValue2(int, int, float*){
		cout << "Sce::PlayStation::Core::Graphics::SetAttributeValue2(int, int, float*) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::GetUniformTexture(int, int, int *){
		cout << "Sce::PlayStation::Core::Graphics::GetUniformTexture(int, int, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::GetAttributeStream(int, int, int *){
		cout << "Sce::PlayStation::Core::Graphics::GetAttributeStream(int, int, int *) Unimplemented." << endl;
		return 0;
	}
	int PsmShaderProgram::SetAttributeStream(int, int, int){
		cout << "Sce::PlayStation::Core::Graphics::SetAttributeStream(int, int, int) Unimplemented." << endl;
		return 0;
	}
}
