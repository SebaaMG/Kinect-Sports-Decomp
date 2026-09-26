typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;


double fn_82B453A0(double param_1)

{
  bool bVar1;
  
  if (ABS((float)param_1) != 0.0) {
    bVar1 = false;
    if (((uint)(float)param_1 & 0x7f800000) == 0) goto LAB_82b453c4;
  }
  bVar1 = true;
LAB_82b453c4:
  if (bVar1) {
    return param_1;
  }
  return (double)(float)((uint)(float)param_1 & 0x80000000);
}

