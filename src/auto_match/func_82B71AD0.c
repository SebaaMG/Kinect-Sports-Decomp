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
extern int fn_82B6EA60();


uint * fn_82B71AD0(undefined8 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  uint *puVar10;
  uint *puVar11;
  
  uVar9 = fn_82B6EA60();
  *(undefined2 *)((int)param_3 + 2) = 0x3c;
  *param_3 = *param_3 & 0xe000ffff;
  *(undefined2 *)((int)param_3 + 6) = uVar9;
  puVar10 = param_3 + 2;
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)*(undefined4 *)(param_2 + 0x10);
  uVar1 = *puVar10;
  uVar2 = *(uint *)(param_2 + 0x10) & 0x3f0000;
  *puVar10 = uVar1 & 0xffc0ffff | uVar2;
  *puVar10 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar10 = param_3 + 3;
  uVar1 = *puVar10;
  uVar3 = *(uint *)(param_2 + 0x1c) >> 0xc & 7;
  *puVar10 = uVar3 | uVar1 & 0xfffffff8;
  uVar4 = *(uint *)(param_2 + 0x1c) >> 8 & 0x70;
  *puVar10 = uVar4 | uVar3 | uVar1 & 0xffffff88;
  uVar5 = *(uint *)(param_2 + 0x1c) >> 4 & 0x700;
  *puVar10 = uVar5 | uVar4 | uVar3 | uVar1 & 0xfffff888;
  uVar2 = *(uint *)(param_2 + 0x1c) & 0x7000;
  *puVar10 = uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8888 | uVar2;
  uVar6 = *(uint *)(param_2 + 0x1c) >> 0xc & 8;
  *puVar10 = uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8880 | uVar2;
  uVar7 = *(uint *)(param_2 + 0x1c) >> 8 & 0x80;
  *puVar10 = uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8800 | uVar2;
  uVar8 = *(uint *)(param_2 + 0x1c) >> 4 & 0x800;
  *puVar10 = uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8000 | uVar2;
  *puVar10 = *(uint *)(param_2 + 0x1c) & 0x8000 |
             uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff0000 | uVar2 | 0x100000;
  puVar10 = param_3 + 4;
  if ((*(uint *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar10 = *(uint *)(param_2 + 0x28);
    puVar10 = param_3 + 5;
  }
  *(undefined2 *)((int)puVar10 + 2) = 0x30;
  *puVar10 = *puVar10 & 0xe000ffff;
  puVar11 = puVar10 + 1;
  *(short *)((int)puVar10 + 6) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar11 = uVar2 | uVar1 & 0xffc0ffff;
  *puVar11 = *(uint *)(param_2 + 4) & 0x800000 | uVar2 | uVar1 & 0xff40ffff | 0x400000;
  puVar10[2] = 0;
  puVar10[2] = *(uint *)(param_2 + 8) & 3;
  puVar11 = puVar10 + 3;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar11 = *(uint *)(param_2 + 0xc);
    puVar11 = puVar10 + 4;
  }
  *(undefined2 *)((int)puVar11 + 2) = uVar9;
  *puVar11 = *puVar11 & 0xff00ffff | 0x440000;
  puVar11[1] = puVar11[1] & 0xffffbbbb | 0x3333;
  *(undefined2 *)((int)puVar11 + 10) = 0x41;
  puVar11[2] = puVar11[2] & 0xe000ffff;
  puVar10 = puVar11 + 3;
  *(short *)((int)puVar11 + 0xe) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar10;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar10 = uVar2 | uVar1 & 0xffc0ffff;
  *puVar10 = *(uint *)(param_2 + 4) & 0x800000 | uVar2 | uVar1 & 0xff40ffff | 0x400000;
  puVar11[4] = 0;
  puVar11[4] = *(uint *)(param_2 + 8) & 0x30;
  puVar10 = puVar11 + 5;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar10 = *(uint *)(param_2 + 0xc);
    puVar10 = puVar11 + 6;
  }
  *(undefined2 *)((int)puVar10 + 2) = uVar9;
  *puVar10 = *puVar10 & 0xff00ffff | 0x440000;
  puVar10[1] = puVar10[1] & 0xffffbbbb | 0x3333;
  *(undefined2 *)((int)puVar10 + 10) = uVar9;
  puVar10[2] = puVar10[2] & 0xff00ffff | 0x440000;
  puVar10[3] = puVar10[3] & 0xffffbbbb | 0x3333;
  *(undefined2 *)((int)puVar10 + 0x12) = 0x31;
  puVar10[4] = puVar10[4] & 0xe000ffff;
  *(undefined2 *)((int)puVar10 + 0x16) = uVar9;
  puVar10[5] = puVar10[5] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)puVar10 + 0x1a) = uVar9;
  puVar10[6] = puVar10[6] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)puVar10 + 0x1e) = 0x2d;
  puVar10[7] = puVar10[7] & 0xe000ffff;
  puVar11 = puVar10 + 8;
  *(short *)((int)puVar10 + 0x22) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar11 = uVar2 | uVar1 & 0xffc0ffff;
  *puVar11 = *(uint *)(param_2 + 4) & 0x800000 | uVar2 | uVar1 & 0xff40ffff | 0x400000;
  puVar10[9] = 0;
  puVar10[9] = *(uint *)(param_2 + 8) & 0xc;
  puVar11 = puVar10 + 10;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar11 = *(uint *)(param_2 + 0xc);
    puVar11 = puVar10 + 0xb;
  }
  *(undefined2 *)((int)puVar11 + 2) = uVar9;
  *puVar11 = *puVar11 & 0xff00ffff | 0x440000;
  puVar11[1] = puVar11[1] & 0xffffbbbb | 0x3333;
  *(undefined2 *)((int)puVar11 + 10) = 0x41;
  puVar11[2] = puVar11[2] & 0xe000ffff;
  puVar10 = puVar11 + 3;
  *(short *)((int)puVar11 + 0xe) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar10;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar10 = uVar2 | uVar1 & 0xffc0ffff;
  *puVar10 = *(uint *)(param_2 + 4) & 0x800000 | uVar2 | uVar1 & 0xff40ffff | 0x400000;
  puVar11[4] = 0;
  puVar11[4] = *(uint *)(param_2 + 8) & 0xc0;
  puVar10 = puVar11 + 5;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar10 = *(uint *)(param_2 + 0xc);
    puVar10 = puVar11 + 6;
  }
  *(undefined2 *)((int)puVar10 + 2) = 0;
  *puVar10 = *puVar10 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar10 = 1;
  puVar10[1] = puVar10[1] & 0xffff9999 | 0x1111;
  puVar11 = puVar10 + 2;
  *(undefined2 *)((int)puVar10 + 10) = 0;
  *puVar11 = *puVar11 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar11 = 1;
  puVar10[3] = puVar10[3] & 0xffff9999 | 0x1111;
  return puVar10 + 4;
}

