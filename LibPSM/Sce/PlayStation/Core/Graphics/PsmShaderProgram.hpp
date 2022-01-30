#ifndef LIB_PSM_PSMSHADERPROGRAM_H
#define LIB_PSM_PSMSHADERPROGRAM_H 1
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "ShaderUniformType.hpp"
#include "ShaderAttributeType.hpp"
#include "../Vector2.hpp"
#include "../Vector3.hpp"
#include "../Vector4.hpp"
#include "../Matrix4.hpp"

using namespace Sce::PlayStation::Core;
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
		static int GetUniformType(int, int, ShaderUniformType *);
		static int GetAttributeType(int, int, ShaderAttributeType *);
		static int GetUniformName(int, int, string *);
		static int GetAttributeName(int, int, string *);
		static int GetUniformSize(int, int, int *);
		static int GetAttributeSize(int, int, int *);
		static int SetUniformValueMatrix4(int, int, int, Matrix4 *, ShaderUniformType);
		static int SetUniformValueVector4(int, int, int, Vector4 *, ShaderUniformType);
		static int SetUniformValueVector3(int, int, int, Vector3 *, ShaderUniformType);
		static int SetUniformValueVector2(int, int, int, Vector2 *, ShaderUniformType);
		static int SetUniformValueFloat(int, int, int, float *, ShaderUniformType);
		static int SetUniformValueInt(int, int, int, int *, ShaderUniformType);
		static int SetUniformValue2Matrix4(int, int, Matrix4*, ShaderUniformType, int, int, int);
		static int SetUniformValue2Vector4(int, int, Vector4*, ShaderUniformType, int, int, int);
		static int SetUniformValue2Vector3(int, int, Vector3*, ShaderUniformType, int, int, int);
		static int SetUniformValue2Vector2(int, int, Vector2*, ShaderUniformType, int, int, int);
		static int SetUniformValue2Float(int, int, float*, ShaderUniformType, int, int, int);
		static int SetUniformValue2Int(int, int, int*, ShaderUniformType, int, int, int);
		static int SetAttributeValue2(int, int, float*);
		static int GetUniformTexture(int, int, int *);
		static int GetAttributeStream(int, int, int *);
		static int SetAttributeStream(int, int, int);
	};
}
#endif
