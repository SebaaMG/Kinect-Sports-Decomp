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


ulonglong fn_827D4648(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = param_3 + (longlong)(int)((param_3 & 0xffffffff) / 0xfff1) * -0xfff1;
  uVar2 = (longlong)(int)(param_1 & 0xffff) * (longlong)(int)lVar1;
  lVar3 = (param_2 & 0xffff) + (param_1 & 0xffff);
  lVar1 = ((((param_1 & 0xffffffff) >> 0x10) + ((param_2 & 0xffffffff) >> 0x10)) - lVar1) +
          uVar2 + (longlong)(int)((uVar2 & 0xffffffff) / 0xfff1) * -0xfff1;
  uVar4 = lVar3 + 0xfff0;
  uVar2 = lVar1 + 0xfff1;
  if ((0xfff1 < uVar4) && (uVar4 = lVar3 - 1, 0xfff1 < (uVar4 & 0xffffffff))) {
    uVar4 = lVar3 - 0xfff2;
  }
  if (0x1ffe2 < (uVar2 & 0xffffffff)) {
    uVar2 = lVar1 - 0xfff1;
  }
  if (0xfff1 < (uVar2 & 0xffffffff)) {
    uVar2 = uVar2 - 0xfff1;
  }
  return (uVar2 & 0xffff) << 0x10 | uVar4;
}

