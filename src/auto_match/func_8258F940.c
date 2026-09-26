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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))


void fn_8258F940(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  
  puVar2 = (uint *)(param_1 + 0x34);
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = puVar2;
  do {
    uVar1 = 1 << (uVar4 & 0x3f);
    if ((uVar1 & 0xfffffffe) != 0) {
      *puVar3 = *puVar3 & 1;
    }
    if ((uVar1 & 0xfffffffe) != 0) {
      *puVar3 = *puVar3 & 1;
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = puVar2;
  do {
    uVar1 = 1 << (uVar4 & 0x3f);
    if ((uVar1 & 1) != 0) {
      *puVar3 = *puVar3 | 0xffefffff;
    }
    if ((CONCAT44(uVar1,uVar1) & 0xffffffffffefffff) != 0) {
      *puVar3 = *puVar3 | 1;
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = puVar2;
  do {
    uVar1 = 1 << (uVar4 & 0x3f);
    if ((CONCAT44(uVar1,uVar1) & 0xffffffffffefffff) != 0) {
      *puVar3 = *puVar3 | 1;
    }
    if ((uVar1 & 1) != 0) {
      *puVar3 = *puVar3 | 0xffefffff;
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = puVar2;
  do {
    uVar1 = 1 << (uVar4 & 0x3f);
    if ((uVar1 & 0x100000) != 0) {
      *puVar3 = *puVar3 & 1;
    }
    if ((uVar1 & 0xfffffffe) != 0) {
      *puVar3 = *puVar3 & 0xffefffff;
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 2;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffcfff | 0x8c32;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x400;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x182e;
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x101e;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xffffdfff | 0x102e;
  *puVar2 = *puVar2 & 0xfffbffff;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfff9ceff | 0x210e3e;
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfff9cceb | 0x2a;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x40d34;
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfff9cbe8 | 0x88828;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffbdfff | 0x2b9e3e;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffbffff | 0x2b3b8c;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffffdf | 0x2ebf0c;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffbdfff | 0xb9d1c;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x2d3e3e;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x2c9d3e;
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffbffff | 0xa997c;
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x60c3e;
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffbcfff | 0x80436;
  return;
}

