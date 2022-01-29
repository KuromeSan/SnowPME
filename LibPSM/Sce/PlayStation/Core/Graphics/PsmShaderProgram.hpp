#ifndef LIB_PSM_PSMSHADERPROGRAM_H
#define LIB_PSM_PSMSHADERPROGRAM_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

namespace Sce::PlayStation::Core::Graphics {
	class PsmShaderProgram {
	public:
		static int FromFile(string, string, string*, int*, int *);
		static int FromImage(byte*, byte*, string*, int*, int *);
		static int Delete(int);
		static int AddRef(int);
		static int GetUniformCount(int, int *);
		static int GetAttributeCount(int, int *);
		static int FindUniform(int, string, int *);
		static int FindAttribute(int, string, int *);
		static int GetUniformBinding(int, int, string *);
		static int SetUniformBinding(int, int, string);
		static int GetAttributeBinding(int, int, string *);
		static int SetAttributeBinding(int, int, string);
		static int GetUniformType(int, int, Sce::PlayStation::Core::Graphics::ShaderUniformType *);
		static int GetAttributeType(int, int, Sce::PlayStation::Core::Graphics::ShaderAttributeType *);
		static int GetUniformName(int, int, string *);
		static int GetAttributeName(int, int, string *);
		static int GetUniformSize(int, int, int *);
		static int GetAttributeSize(int, int, int *);
		static int SetUniformValue(int, int, int, Sce::PlayStation::Core::Matrix4 *, Sce::PlayStation::Core::Graphics::ShaderUniformType);
		static int SetUniformValue(int, int, int, Sce::PlayStation::Core::Vector4 *, Sce::PlayStation::Core::Graphics::ShaderUniformType);
		static int SetUniformValue(int, int, int, Sce::PlayStation::Core::Vector3 *, Sce::PlayStation::Core::Graphics::ShaderUniformType);
		static int SetUniformValue(int, int, int, Sce::PlayStation::Core::Vector2 *, Sce::PlayStation::Core::Graphics::ShaderUniformType);
		static int SetUniformValue(int, int, int, float *, Sce::PlayStation::Core::Graphics::ShaderUniformType);
		static int SetUniformValue(int, int, int, int *, Sce::PlayStation::Core::Graphics::ShaderUniformType);
		static int SetUniformValue2(int, int, Sce::PlayStation::Core::Matrix4*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int);
		static int SetUniformValue2(int, int, Sce::PlayStation::Core::Vector4*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int);
		static int SetUniformValue2(int, int, Sce::PlayStation::Core::Vector3*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int);
		static int SetUniformValue2(int, int, Sce::PlayStation::Core::Vector2*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int);
		static int SetUniformValue2(int, int, float*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int);
		static int SetUniformValue2(int, int, int*, Sce::PlayStation::Core::Graphics::ShaderUniformType, int, int, int);
		static int SetAttributeValue2(int, int, float*);
		static int GetUniformTexture(int, int, int *);
		static int GetAttributeStream(int, int, int *);
		static int SetAttributeStream(int, int, int);
	};
}
#endif
