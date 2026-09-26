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


uint fn_82B6F2A0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = uVar1 >> 4 & 3;
  uVar3 = uVar1 & 3;
  if (uVar2 == 0) {
    uVar3 = uVar3 | 0xc;
  }
  else if (uVar2 != 1) {
    if (uVar2 < 3) {
      uVar3 = uVar3 | 4;
    }
    else if (uVar2 == 3) {
      uVar3 = uVar3 | 8;
    }
  }
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 == 0) {
    uVar3 = uVar3 | 0x20;
  }
  else if (uVar2 == 1) {
    uVar3 = uVar3 | 0x30;
  }
  else if (uVar2 == 3) {
    uVar3 = uVar3 | 0x10;
  }
  uVar1 = uVar1 >> 0xc & 3;
  if (uVar1 == 0) {
    return uVar3 | 0x40;
  }
  if (uVar1 == 1) {
    return uVar3 | 0x80;
  }
  if (2 < uVar1) {
    return uVar3;
  }
  return uVar3 | 0xc0;
}

