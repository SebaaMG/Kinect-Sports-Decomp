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
extern unsigned int iStack00000014;


undefined8 fn_82F6DFD0(ulonglong param_1)

{
  ulonglong uVar1;
  int iStack00000014;
  
  uVar1 = param_1 >> 0x30 & 0x7ff8;
  if (((uVar1 != 0x7ff0) ||
      (((param_1 & 0x7ffff00000000) == 0 && (iStack00000014 = (int)param_1, iStack00000014 == 0))))
     && (uVar1 != 0x7ff8)) {
    return 0;
  }
  return 1;
}

