 /* This file is generated by gen_types.py */

#ifndef COMPYTE_TYPES
#define COMPYTE_TYPES
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif
#ifdef CONFUSE_EMACS
}
#endif

typedef struct _compyte_type {
  const char *cl_name;
  const char *cuda_name;
  size_t size;
  size_t align;
  int typecode;
} compyte_type;

enum COMPYTE_TYPES {
  GA_BOOL = 0,
  GA_BYTE = 1,
  GA_UBYTE = 2,
  GA_SHORT = 3,
  GA_USHORT = 4,
  GA_INT = 5,
  GA_UINT = 6,
  GA_LONG = 7,
  GA_ULONG = 8,
  GA_LONGLONG = 9,
  GA_ULONGLONG = 10,
  GA_FLOAT = 11,
  GA_DOUBLE = 12,
  GA_LONGDOUBLE = 13,
  GA_CFLOAT = 14,
  GA_CDOUBLE = 15,
  GA_CLONGDOUBLE = 16,
  GA_HALF = 23,
  GA_NBASE = 24,

  GA_DELIM = 255, /* To be forward-compatible with numpy */

  GA_BYTE2,
  GA_UBYTE2,
  GA_BYTE3,
  GA_UBYTE3,
  GA_BYTE4,
  GA_UBYTE4,
  GA_BYTE8,
  GA_UBYTE8,
  GA_BYTE16,
  GA_UBYTE16,
  GA_SHORT2,
  GA_USHORT2,
  GA_SHORT3,
  GA_USHORT3,
  GA_SHORT4,
  GA_USHORT4,
  GA_SHORT8,
  GA_USHORT8,
  GA_SHORT16,
  GA_USHORT16,
  GA_INT2,
  GA_UINT2,
  GA_INT3,
  GA_UINT3,
  GA_INT4,
  GA_UINT4,
  GA_INT8,
  GA_UINT8,
  GA_INT16,
  GA_UINT16,
  GA_LONG2,
  GA_ULONG2,
  GA_LONG3,
  GA_ULONG3,
  GA_LONG4,
  GA_ULONG4,
  GA_LONG8,
  GA_ULONG8,
  GA_LONG16,
  GA_ULONG16,
  GA_FLOAT2,
  GA_FLOAT4,
  GA_FLOAT8,
  GA_FLOAT16,
  GA_DOUBLE2,
  GA_DOUBLE4,
  GA_DOUBLE8,
  GA_DOUBLE16,
  GA_HALF2,
  GA_HALF4,
  GA_HALF8,
  GA_HALF16,
};

extern compyte_type scalar_types[];
extern compyte_type vector_types[];

extern const char CL_HEAD[];
extern const char CUDA_HEAD[];

#ifdef __cplusplus
}
#endif

#endif /* COMPYTE_TYPES */
