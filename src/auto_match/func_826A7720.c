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


byte fn_826A7720(int param_1)

{
  ushort uVar1;
  byte bVar2;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if (uVar1 < 0x25) {
    if (uVar1 == 0x24) {
      return 3;
    }
    if (uVar1 == 8) {
      return 8;
    }
    if (uVar1 == 9) {
      return 0x12;
    }
    if (uVar1 == 0xd) {
      return 0xd;
    }
    if (uVar1 == 0x1b) {
      return 0x13;
    }
    if (uVar1 == 0x21) {
      return 0x10;
    }
    if (uVar1 == 0x22) {
      return 0x11;
    }
    if (uVar1 == 0x23) {
      return 4;
    }
  }
  else {
    if (uVar1 == 0x25) {
      return 1;
    }
    if (uVar1 == 0x26) {
      return 0xe;
    }
    if (uVar1 == 0x27) {
      return 2;
    }
    if (uVar1 == 0x28) {
      return 0xf;
    }
    if (uVar1 == 0x2d) {
      return 5;
    }
    if (uVar1 == 0x2e) {
      return 6;
    }
  }
  bVar2 = 0;
  if (0x1f < *(byte *)(param_1 + 10)) {
    bVar2 = *(byte *)(param_1 + 10);
  }
  return bVar2;
}

