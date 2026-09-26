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
extern int fn_82AB15D0();


uint * fn_82B75830(uint *param_1,uint *param_2,uint *param_3,undefined2 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  
  uVar6 = *param_2;
  *(undefined2 *)((int)param_5 + 2) = 0x51;
  *param_5 = *param_5 & 0xe000ffff | 0x20000;
  *(undefined2 *)((int)param_5 + 6) = param_4;
  uVar4 = uVar6 >> 0x15 & 7;
  puVar8 = param_5 + 2;
  param_5[1] = param_5[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_5 + 10) = (short)*param_1;
  uVar6 = *puVar8;
  uVar1 = *param_1;
  *puVar8 = uVar6 & 0xffc0ffff | uVar1 & 0x3f0000;
  *puVar8 = uVar6 & 0xff40ffff | uVar1 & 0x3f0000 | *param_1 & 0x800000 | 0x400000;
  if (uVar4 == 1) {
    uVar7 = 1;
  }
  else if (uVar4 == 2) {
    uVar7 = 2;
  }
  else {
    if (uVar4 != 3) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x2985);
    }
    uVar7 = 3;
  }
  param_5[3] = (uint)(uVar7 << 0xc) |
               (uint)((uVar7 << 4 | uVar7) << 4) | param_5[3] & 0xffff8888 | (uint)uVar7;
  *(undefined2 *)((int)param_5 + 0x12) = 0x49;
  param_5[4] = param_5[4] & 0xe000ffff;
  *(undefined2 *)((int)param_5 + 0x16) = param_4;
  param_5[5] = param_5[5] & 0xff00ffff | 0x440000;
  puVar8 = param_5 + 6;
  *puVar8 = 0;
  if (uVar4 == 1) {
LAB_82b759a0:
    uVar6 = *puVar8 & 0xfffffff0 | 5;
  }
  else {
    if (uVar4 == 2) {
LAB_82b75994:
      *puVar8 = *puVar8 & 0xffffffcf | 0x10;
      goto LAB_82b759a0;
    }
    if (uVar4 == 3) {
      *puVar8 = 0x40;
      goto LAB_82b75994;
    }
    uVar6 = 0x55;
  }
  *puVar8 = uVar6;
  puVar8 = param_5 + 7;
  *(short *)((int)param_5 + 0x1e) = (short)*param_1;
  uVar6 = *param_1;
  uVar1 = *puVar8;
  *puVar8 = uVar1 & 0xffc0ffff | uVar6 & 0x3f0000;
  *puVar8 = uVar1 & 0xff40ffff | uVar6 & 0x3f0000 | *param_1 & 0x800000 | 0x400000;
  puVar8 = param_5 + 8;
  uVar1 = *puVar8;
  uVar2 = *param_2 & 7;
  *puVar8 = uVar1 & 0xfffffff8 | uVar2;
  uVar3 = *param_2 & 0x70;
  *puVar8 = uVar1 & 0xffffff88 | uVar2 | uVar3;
  uVar6 = *param_2;
  *puVar8 = uVar1 & 0xfffff888 | uVar2 | uVar3 | uVar6 & 0x700;
  *puVar8 = uVar1 & 0xffff8888 | uVar2 | uVar3 | uVar6 & 0x700 | *param_2 & 0x7000;
  puVar8 = param_5 + 9;
  if ((*param_1 & 0x800000) != 0) {
    *puVar8 = *param_3;
    puVar8 = param_5 + 10;
  }
  *(undefined2 *)((int)puVar8 + 2) = param_4;
  *puVar8 = *puVar8 & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)puVar8 + 6) = 0x41;
  puVar8[1] = puVar8[1] & 0xe000ffff;
  *(undefined2 *)((int)puVar8 + 10) = param_4;
  puVar8[2] = puVar8[2] & 0xff00ffff | 0x440000;
  puVar9 = puVar8 + 3;
  *puVar9 = 0;
  if (uVar4 == 1) {
    *puVar9 = 0x10;
  }
  else if (uVar4 != 2) goto LAB_82b75aa4;
  *puVar9 = *puVar9 & 0xffffff3f | 0x40;
LAB_82b75aa4:
  puVar9 = puVar8 + 4;
  *(short *)((int)puVar8 + 0x12) = (short)*param_1;
  uVar6 = *puVar9;
  uVar1 = *param_1;
  *puVar9 = uVar6 & 0xffc0ffff | uVar1 & 0x3f0000;
  *puVar9 = uVar6 & 0xff40ffff | uVar1 & 0x3f0000 | *param_1 & 0x800000 | 0x400000;
  puVar9 = puVar8 + 5;
  uVar1 = *puVar9;
  uVar4 = *param_2 & 7;
  *puVar9 = uVar1 & 0xfffffff8 | uVar4;
  uVar2 = *param_2 & 0x70;
  *puVar9 = uVar1 & 0xffffff88 | uVar4 | uVar2;
  uVar6 = *param_2;
  *puVar9 = uVar1 & 0xfffff888 | uVar4 | uVar2 | uVar6 & 0x700;
  *puVar9 = uVar1 & 0xffff8888 | uVar4 | uVar2 | uVar6 & 0x700 | *param_2 & 0x7000;
  puVar9 = puVar8 + 6;
  if ((*param_1 & 0x800000) != 0) {
    *puVar9 = *param_3;
    puVar9 = puVar8 + 7;
  }
  *(short *)((int)puVar9 + 2) = (short)*param_1;
  uVar6 = *puVar9;
  uVar1 = *param_1;
  *puVar9 = uVar6 & 0xffc0ffff | uVar1 & 0x3f0000;
  *puVar9 = uVar6 & 0xff40ffff | uVar1 & 0x3f0000 | *param_1 & 0x800000 | 0x400000;
  puVar8 = puVar9 + 1;
  uVar1 = *puVar8;
  puVar5 = puVar9 + 2;
  uVar4 = *param_2 & 7;
  *puVar8 = uVar1 & 0xfffffff8 | uVar4;
  uVar2 = *param_2 & 0x70;
  *puVar8 = uVar1 & 0xffffff88 | uVar4 | uVar2;
  uVar6 = *param_2;
  *puVar8 = uVar1 & 0xfffff888 | uVar4 | uVar2 | uVar6 & 0x700;
  *puVar8 = uVar1 & 0xffff8888 | uVar4 | uVar2 | uVar6 & 0x700 | *param_2 & 0x7000;
  if ((*param_1 & 0x800000) != 0) {
    *puVar5 = *param_3;
    puVar5 = puVar9 + 3;
  }
  return puVar5;
}

