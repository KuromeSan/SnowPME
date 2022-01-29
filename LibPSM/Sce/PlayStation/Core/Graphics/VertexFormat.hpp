#ifndef LIB_PSM_VERTEXFORMAT_H
#define LIB_PSM_VERTEXFORMAT_H 1
namespace Sce::PlayStation::Core::Graphics {
	enum VertexFormat : unsigned int {
		None,
		Float = 256U,
		Float2,
		Float3,
		Float4,
		Half = 512U,
		Half2,
		Half3,
		Half4,
		Short = 1536U,
		Short2,
		Short3,
		Short4,
		UShort = 1792U,
		UShort2,
		UShort3,
		UShort4,
		Byte = 2048U,
		Byte2,
		Byte3,
		Byte4,
		UByte = 2304U,
		UByte2,
		UByte3,
		UByte4,
		ShortN = 5632U,
		Short2N,
		Short3N,
		Short4N,
		UShortN = 5888U,
		UShort2N,
		UShort3N,
		UShort4N,
		ByteN = 6144U,
		Byte2N,
		Byte3N,
		Byte4N,
		UByteN = 6400,
		UByte2N,
		UByte3N,
		UByte4N
	};
}

#endif