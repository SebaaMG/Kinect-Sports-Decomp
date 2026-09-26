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


undefined8 fn_82963860(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 & 0xfff00000;
  if (uVar1 < 0x60800001) {
    if (uVar1 == 0x60800000) {
      return 1;
    }
    if (uVar1 == 0x10d00000) {
      return 1;
    }
    if (uVar1 == 0x10e00000) {
      return 1;
    }
    if (uVar1 == 0x60000000) {
      return 1;
    }
    if (uVar1 == 0x60200000) {
      return 1;
    }
    if (uVar1 == 0x60300000) {
      return 1;
    }
    if (uVar1 == 0x60500000) {
      return 1;
    }
    uVar2 = 0x60700000;
  }
  else {
    if (uVar1 == 0x60a00000) {
      return 1;
    }
    if (uVar1 == 0x60c00000) {
      return 1;
    }
    if (uVar1 == 0x60d00000) {
      return 1;
    }
    if (uVar1 == 0x60f00000) {
      return 1;
    }
    if (uVar1 == 0x61100000) {
      return 1;
    }
    uVar2 = 0x61200000;
  }
  if (uVar1 == uVar2) {
    return 1;
  }
  return 0;
}

