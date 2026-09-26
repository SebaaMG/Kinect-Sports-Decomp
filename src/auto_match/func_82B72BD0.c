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


uint * fn_82B72BD0(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  uint *puVar11;
  uint *puVar12;
  
  uVar10 = fn_82B6EA60();
  *(undefined2 *)((int)param_3 + 2) = 0x22;
  *param_3 = *param_3 & 0xe000ffff;
  *(undefined2 *)((int)param_3 + 6) = uVar10;
  puVar11 = param_3 + 2;
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)param_2[4];
  uVar1 = *puVar11;
  uVar2 = param_2[4];
  *puVar11 = uVar1 & 0xffc0ffff | uVar2 & 0x3f0000;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 & 0x3f0000 | param_2[4] & 0x800000 | 0x400000;
  puVar11 = param_3 + 3;
  uVar2 = *puVar11;
  uVar4 = param_2[7] & 7;
  *puVar11 = uVar4 | uVar2 & 0xfffffff8;
  uVar5 = param_2[7] & 0x70;
  *puVar11 = uVar5 | uVar4 | uVar2 & 0xffffff88;
  uVar6 = param_2[7] & 0x700;
  *puVar11 = uVar6 | uVar5 | uVar4 | uVar2 & 0xfffff888;
  uVar3 = param_2[7] & 0x7000;
  *puVar11 = uVar6 | uVar5 | uVar4 | uVar2 & 0xffff8888 | uVar3;
  uVar7 = param_2[7] & 8;
  *puVar11 = uVar7 | uVar6 | uVar5 | uVar4 | uVar2 & 0xffff8880 | uVar3;
  uVar8 = param_2[7] & 0x80;
  *puVar11 = uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar2 & 0xffff8800 | uVar3;
  uVar9 = param_2[7] & 0x800;
  *puVar11 = uVar9 | uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar2 & 0xffff8000 | uVar3;
  uVar1 = param_2[7];
  *puVar11 = uVar1 & 0x8000 |
             uVar9 | uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar2 & 0xffff0000 | uVar3;
  *puVar11 = param_2[7] & 0x100000 |
             uVar1 & 0x8000 |
             uVar9 | uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar2 & 0xffef0000 | uVar3;
  puVar11 = param_3 + 4;
  if ((param_2[4] & 0x800000) != 0) {
    *puVar11 = param_2[10];
    puVar11 = param_3 + 5;
  }
  *(short *)((int)puVar11 + 2) = (short)param_2[4];
  uVar1 = *puVar11;
  uVar2 = param_2[4];
  *puVar11 = uVar1 & 0xffc0ffff | uVar2 & 0x3f0000;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 & 0x3f0000 | param_2[4] & 0x800000 | 0x400000;
  puVar12 = puVar11 + 1;
  uVar2 = *puVar12;
  uVar4 = param_2[7] & 7;
  *puVar12 = uVar4 | uVar2 & 0xfffffff8;
  uVar5 = param_2[7] & 0x70;
  *puVar12 = uVar5 | uVar4 | uVar2 & 0xffffff88;
  uVar6 = param_2[7] & 0x700;
  *puVar12 = uVar6 | uVar5 | uVar4 | uVar2 & 0xfffff888;
  uVar3 = param_2[7] & 0x7000;
  *puVar12 = uVar6 | uVar5 | uVar4 | uVar2 & 0xffff8888 | uVar3;
  uVar7 = param_2[7] & 8;
  *puVar12 = uVar7 | uVar6 | uVar5 | uVar4 | uVar2 & 0xffff8880 | uVar3;
  uVar8 = param_2[7] & 0x80;
  *puVar12 = uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar2 & 0xffff8800 | uVar3;
  uVar9 = param_2[7] & 0x800;
  *puVar12 = uVar9 | uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar2 & 0xffff8000 | uVar3;
  uVar1 = param_2[7];
  *puVar12 = uVar1 & 0x8000 |
             uVar9 | uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar2 & 0xffff0000 | uVar3;
  *puVar12 = param_2[7] & 0x100000 |
             uVar1 & 0x8000 |
             uVar9 | uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar2 & 0xffef0000 | uVar3;
  puVar12 = puVar11 + 2;
  if ((param_2[4] & 0x800000) != 0) {
    *puVar12 = param_2[10];
    puVar12 = puVar11 + 3;
  }
  *(undefined2 *)((int)puVar12 + 2) = 0x55;
  *puVar12 = *puVar12 & 0xe000ffff | *param_2 & 0x1fff0000;
  *(undefined2 *)((int)puVar12 + 6) = uVar10;
  puVar12[1] = puVar12[1] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)puVar12 + 10) = uVar10;
  puVar12[2] = puVar12[2] & 0xff00ffff | 0x440000;
  puVar12[3] = puVar12[3] & 0xffff8888;
  *(undefined2 *)((int)puVar12 + 0x12) = 0x49;
  puVar12[4] = puVar12[4] & 0xe000ffff;
  puVar11 = puVar12 + 5;
  *(short *)((int)puVar12 + 0x16) = (short)param_2[1];
  *puVar11 = *puVar11 & 0xffc0ffff | param_2[1] & 0x3f0000;
  uVar1 = *puVar11;
  uVar2 = param_2[1];
  *puVar11 = uVar1 & 0xff7fffff | uVar2 & 0x800000;
  *puVar11 = uVar1 & 0xff3fffff | uVar2 & 0x800000 | param_2[1] & 0x400000;
  puVar11 = puVar12 + 6;
  if ((param_2[1] & 0x400000) != 0) {
    *puVar11 = param_2[2];
    puVar11 = puVar12 + 7;
  }
  if ((param_2[1] & 0x800000) != 0) {
    *puVar11 = param_2[3];
    puVar11 = puVar11 + 1;
  }
  *(short *)((int)puVar11 + 2) = (short)param_2[4];
  uVar1 = *puVar11;
  uVar2 = param_2[4];
  *puVar11 = uVar1 & 0xffc0ffff | uVar2 & 0x3f0000;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 & 0x3f0000 | param_2[4] & 0x800000 | 0x400000;
  puVar12 = puVar11 + 1;
  uVar2 = *puVar12;
  uVar1 = param_2[7];
  *puVar12 = uVar1 & 7 | uVar2 & 0xfffffff8;
  *puVar12 = param_2[7] & 0x70 | uVar1 & 7 | uVar2 & 0xffffff88;
  uVar1 = *puVar12;
  uVar4 = param_2[7] & 0x700;
  *puVar12 = uVar4 | uVar1 & 0xfffff8ff;
  uVar3 = param_2[7] & 0x7000;
  *puVar12 = uVar4 | uVar1 & 0xffff88ff | uVar3;
  uVar2 = param_2[7];
  *puVar12 = uVar2 & 8 | uVar4 | uVar1 & 0xffff88f7 | uVar3;
  *puVar12 = param_2[7] & 0x80 | uVar2 & 8 | uVar4 | uVar1 & 0xffff8877 | uVar3;
  uVar1 = param_2[7];
  uVar2 = *puVar12;
  *puVar12 = uVar1 & 0x800 | uVar2 & 0xfffff7ff;
  *puVar12 = param_2[7] & 0x8000 | uVar1 & 0x800 | uVar2 & 0xffff77ff;
  *puVar12 = param_2[7] & 0x100000 | *puVar12 & 0xffefffff;
  puVar12 = puVar11 + 2;
  if ((param_2[4] & 0x800000) != 0) {
    *puVar12 = param_2[10];
    puVar12 = puVar11 + 3;
  }
  *(undefined2 *)((int)puVar12 + 2) = uVar10;
  *puVar12 = *puVar12 & 0xff00ffff | 0x440000;
  puVar12[1] = puVar12[1] & 0xffff8888;
  return puVar12 + 2;
}

