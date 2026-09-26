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


ulonglong fn_82F68700(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1 & 3;
  uVar2 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar2 = 0x300;
    }
    else if (uVar1 == 2) {
      uVar2 = 0x200;
    }
    else if (uVar1 == 3) {
      uVar2 = 0x100;
    }
  }
  if ((param_1 & 8) != 0) {
    uVar2 = uVar2 | 1;
  }
  if ((param_1 & 0x20) != 0) {
    uVar2 = uVar2 | 2;
  }
  if ((param_1 & 0x40) != 0) {
    uVar2 = uVar2 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar2 = uVar2 | 8;
  }
  if ((param_1 & 0x80) != 0) {
    uVar2 = uVar2 | 0x10;
  }
  return uVar2 | 0x80000;
}

