#ifndef LIB_PSM_VERTEXFORMAT_H
#define LIB_PSM_VERTEXFORMAT_H 1
namespace Sce::PlayStation::Core::Graphics {
	enum VertexFormat : unsigned int {
		VertexFormat_None = 0,
		VertexFormat_Float = 0x100,
		VertexFormat_Float2 = 257,
		VertexFormat_Float3 = 258,
		VertexFormat_Float4 = 259,
		VertexFormat_Half = 0x200,
		VertexFormat_Half2 = 513,
		VertexFormat_Half3 = 514,
		VertexFormat_Half4 = 515,
		VertexFormat_Short = 1536,
		VertexFormat_Short2 = 1537,
		VertexFormat_Short3 = 1538,
		VertexFormat_Short4 = 1539,
		VertexFormat_UShort = 1792,
		VertexFormat_UShort2 = 1793,
		VertexFormat_UShort3 = 1794,
		VertexFormat_UShort4 = 1795,
		VertexFormat_Byte = 0x800,
		VertexFormat_Byte2 = 2049,
		VertexFormat_Byte3 = 2050,
		VertexFormat_Byte4 = 2051,
		VertexFormat_UByte = 2304,
		VertexFormat_UByte2 = 2305,
		VertexFormat_UByte3 = 2306,
		VertexFormat_UByte4 = 2307,
		VertexFormat_ShortN = 5632,
		VertexFormat_Short2N = 5633,
		VertexFormat_Short3N = 5634,
		VertexFormat_Short4N = 5635,
		VertexFormat_UShortN = 5888,
		VertexFormat_UShort2N = 5889,
		VertexFormat_UShort3N = 5890,
		VertexFormat_UShort4N = 5891,
		VertexFormat_ByteN = 6144,
		VertexFormat_Byte2N = 6145,
		VertexFormat_Byte3N = 6146,
		VertexFormat_Byte4N = 6147,
		VertexFormat_UByteN = 6400,
		VertexFormat_UByte2N = 6401,
		VertexFormat_UByte3N = 6402,
		VertexFormat_UByte4N = 6403
	};
}

#endif