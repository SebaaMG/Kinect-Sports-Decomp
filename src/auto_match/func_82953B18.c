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


ulonglong fn_82953B18(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1 & 0xf000000;
  uVar2 = 0;
  if (uVar1 < 0x5000001) {
    if (uVar1 == 0x5000000) {
      uVar2 = 0x4000000;
    }
    else if (uVar1 == 0) {
      uVar2 = 0x1000000;
    }
    else if (uVar1 == 0x1000000) {
      uVar2 = 0;
    }
    else if (uVar1 == 0x2000000) {
      uVar2 = 0x3000000;
    }
    else if (uVar1 == 0x3000000) {
      uVar2 = 0x2000000;
    }
    else if (uVar1 == 0x4000000) {
      uVar2 = 0x5000000;
    }
  }
  else if (uVar1 == 0x7000000) {
    uVar2 = 0x8000000;
  }
  else if (uVar1 == 0x8000000) {
    uVar2 = 0x7000000;
  }
  else if (uVar1 == 0xb000000) {
    uVar2 = 0xc000000;
  }
  else if (uVar1 == 0xc000000) {
    uVar2 = 0xb000000;
  }
  return param_1 << 0x20 | param_1 & 0xf0ffffff | uVar2;
}

