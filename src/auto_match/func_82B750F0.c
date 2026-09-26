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


void fn_82B750F0(uint *param_1,uint *param_2,uint *param_3,undefined2 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  
  *(undefined2 *)((int)param_5 + 2) = 0x41;
  *param_5 = *param_5 & 0xe000ffff;
  *(undefined2 *)((int)param_5 + 6) = param_4;
  param_5[1] = param_5[1] & 0xff00ffff | 0x440000;
  puVar3 = param_5 + 2;
  uVar2 = *puVar3;
  *puVar3 = uVar2 & 0xffffe0ff;
  if (((*param_2 & 7) != 4) && ((*param_2 & 7) != 5)) {
    *puVar3 = uVar2 & 0xffffe0fc | 1;
  }
  uVar2 = *param_2 >> 4 & 7;
  if ((uVar2 != 4) && (uVar2 != 5)) {
    *puVar3 = *puVar3 & 0xfffffff3 | 4;
  }
  uVar2 = *param_2 >> 8 & 7;
  if ((uVar2 != 4) && (uVar2 != 5)) {
    *puVar3 = *puVar3 & 0xffffffcf | 0x10;
  }
  uVar2 = *param_2 >> 0xc & 7;
  if ((uVar2 != 4) && (uVar2 != 5)) {
    *puVar3 = *puVar3 & 0xffffff3f | 0x40;
  }
  param_5 = param_5 + 3;
  lVar5 = 2;
  do {
    *(short *)((int)param_5 + 2) = (short)*param_1;
    uVar2 = *param_5;
    uVar1 = *param_1;
    *param_5 = uVar2 & 0xffc0ffff | uVar1 & 0x3f0000;
    *param_5 = uVar2 & 0xff40ffff | uVar1 & 0x3f0000 | *param_1 & 0x800000 | 0x400000;
    puVar3 = param_5 + 1;
    uVar2 = *param_2 & 7;
    if ((uVar2 == 4) || (uVar2 == 5)) {
      uVar2 = *puVar3 & 0xfffffff8;
    }
    else {
      uVar2 = *puVar3 & 0xfffffff8 | uVar2;
    }
    *puVar3 = uVar2;
    uVar2 = *param_2 >> 4 & 7;
    if ((uVar2 == 4) || (uVar2 == 5)) {
      uVar2 = *puVar3 & 0xffffff8f;
    }
    else {
      uVar2 = *puVar3 & 0xffffff8f | *param_2 & 0x70;
    }
    *puVar3 = uVar2;
    uVar2 = *param_2 >> 8 & 7;
    if ((uVar2 == 4) || (uVar2 == 5)) {
      uVar2 = *puVar3 & 0xfffff8ff;
    }
    else {
      uVar2 = *puVar3 & 0xfffff8ff | *param_2 & 0x700;
    }
    *puVar3 = uVar2;
    uVar2 = *param_2 >> 0xc & 7;
    if ((uVar2 == 4) || (uVar2 == 5)) {
      uVar2 = *puVar3 & 0xffff8fff;
    }
    else {
      uVar2 = *puVar3 & 0xffff8fff | *param_2 & 0x7000;
    }
    *puVar3 = uVar2;
    puVar3 = param_5 + 2;
    if ((*param_1 & 0x800000) != 0) {
      param_5[2] = *param_3;
      puVar3 = param_5 + 3;
    }
    param_5 = puVar3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined2 *)((int)param_5 + 2) = 0x41;
  *param_5 = *param_5 & 0xe000ffff;
  *(undefined2 *)((int)param_5 + 6) = param_4;
  param_5[1] = param_5[1] & 0xff00ffff | 0x440000;
  param_5 = param_5 + 2;
  uVar2 = *param_5;
  *param_5 = uVar2 & 0xffffe0ff;
  if (((*param_2 & 7) == 4) || ((*param_2 & 7) == 5)) {
    *param_5 = uVar2 & 0xffffe0fc | 1;
  }
  uVar2 = *param_2 >> 4 & 7;
  if ((uVar2 == 4) || (uVar2 == 5)) {
    *param_5 = *param_5 & 0xfffffff3 | 4;
  }
  uVar2 = *param_2 >> 8 & 7;
  if ((uVar2 == 4) || (uVar2 == 5)) {
    *param_5 = *param_5 & 0xffffffcf | 0x10;
  }
  uVar2 = *param_2 >> 0xc & 7;
  if ((uVar2 == 4) || (uVar2 == 5)) {
    *param_5 = *param_5 & 0xffffff3f | 0x40;
  }
  lVar5 = 2;
  do {
    puVar3 = param_5 + 1;
    puVar4 = param_5 + 2;
    *(undefined2 *)((int)param_5 + 6) = 0;
    *puVar3 = *puVar3 & 0xff00ffff | 0x410000;
    *(undefined1 *)puVar3 = 1;
    if ((*param_2 & 7) == 4) {
      uVar2 = *puVar4 & 0xfffffff8;
    }
    else {
      uVar2 = *puVar4 & 0xfffffff8 | 1;
    }
    *puVar4 = uVar2;
    if ((*param_2 & 0x70) == 0x40) {
      uVar2 = *puVar4 & 0xffffff8f;
    }
    else {
      uVar2 = *puVar4 & 0xffffff8f | 0x10;
    }
    *puVar4 = uVar2;
    if ((*param_2 & 0x700) == 0x400) {
      uVar2 = *puVar4 & 0xfffff8ff;
    }
    else {
      uVar2 = *puVar4 & 0xfffff8ff | 0x100;
    }
    *puVar4 = uVar2;
    if ((*param_2 & 0x7000) == 0x4000) {
      uVar2 = *puVar4 & 0xffff8fff;
    }
    else {
      uVar2 = *puVar4 & 0xffff8fff | 0x1000;
    }
    *puVar4 = uVar2;
    lVar5 = lVar5 + -1;
    param_5 = puVar4;
  } while (lVar5 != 0);
  return;
}

