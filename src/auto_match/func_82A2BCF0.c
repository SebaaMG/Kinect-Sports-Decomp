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


longlong fn_82A2BCF0(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (0x4bda84 < (param_1 & 0xffffffff)) {
    return 0x4af768;
  }
  if ((param_1 & 0xffffffff) < 0x723a) {
    if ((0xab < (param_1 & 0xffffffff)) &&
       (uVar2 = param_1 & 0xffffffff, param_1 = param_1 - 2, uVar2 < 0xb1)) {
      param_1 = 0xac;
    }
  }
  else {
    uVar2 = param_1 - 2;
    if ((param_1 & 0xffffffff) < 0x7241) {
      uVar2 = 0x723a;
    }
    uVar1 = uVar2 + ((uVar2 & 0xffffffff) / 0x723a) * -0x723a;
    if ((uVar1 & 0xffffffff) < 5) {
      uVar2 = uVar2 - uVar1;
    }
    param_1 = uVar2 + ((uVar2 + 0x7239 & 0xffffffff) / 0x723a) * -2;
  }
  uVar2 = param_1 + ((param_1 & 0xffffffff) / 0xac) * -0xac;
  if ((uVar2 & 0xffffffff) < 3) {
    param_1 = param_1 - uVar2;
  }
  return param_1 + ((param_1 + 0xab & 0xffffffff) / 0xac) * -2;
}

