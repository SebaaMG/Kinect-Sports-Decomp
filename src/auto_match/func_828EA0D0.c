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
extern int fn_828E9FF8();


ulonglong fn_828EA0D0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (0x20 < (int)param_2) {
    lVar1 = fn_828E9FF8(param_1,param_2 + -0x20);
    uVar3 = lVar1 << 0x20;
    param_2 = 0x20;
  }
  uVar2 = fn_828E9FF8(param_1,param_2);
  return uVar2 & 0xffffffff | uVar3;
}

