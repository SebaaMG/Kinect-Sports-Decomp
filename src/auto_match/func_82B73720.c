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


uint * fn_82B73720(undefined8 param_1,int param_2,uint *param_3)

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
  *(undefined2 *)((int)param_3 + 2) = 0x49;
  *param_3 = *param_3 & 0xe000ffff;
  *(undefined2 *)((int)param_3 + 6) = uVar10;
  param_3[1] = param_3[1] & 0xff00ffff | 0x440000;
  param_3[2] = 0x10;
  puVar11 = param_3 + 3;
  *(short *)((int)param_3 + 0xe) = (short)*(undefined4 *)(param_2 + 0x10);
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 0x10) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar11 = param_3 + 4;
  uVar1 = *puVar11;
  uVar7 = *(uint *)(param_2 + 0x1c) >> 0xc & 7;
  *puVar11 = uVar7 | uVar1 & 0xfffffff8;
  uVar8 = *(uint *)(param_2 + 0x1c) >> 8 & 0x70;
  *puVar11 = uVar8 | uVar7 | uVar1 & 0xffffff88;
  uVar9 = *(uint *)(param_2 + 0x1c) >> 4 & 0x700;
  *puVar11 = uVar9 | uVar8 | uVar7 | uVar1 & 0xfffff888;
  uVar2 = *(uint *)(param_2 + 0x1c) & 0x7000;
  *puVar11 = uVar9 | uVar8 | uVar7 | uVar1 & 0xffff8888 | uVar2;
  uVar3 = *(uint *)(param_2 + 0x1c) & 8;
  *puVar11 = uVar3 | uVar9 | uVar8 | uVar7 | uVar1 & 0xffff8880 | uVar2;
  uVar4 = *(uint *)(param_2 + 0x1c) & 0x80;
  *puVar11 = uVar4 | uVar3 | uVar9 | uVar8 | uVar7 | uVar1 & 0xffff8800 | uVar2;
  uVar5 = *(uint *)(param_2 + 0x1c) & 0x800;
  *puVar11 = uVar5 | uVar4 | uVar3 | uVar9 | uVar8 | uVar7 | uVar1 & 0xffff8000 | uVar2;
  uVar6 = *(uint *)(param_2 + 0x1c) & 0x8000;
  *puVar11 = uVar6 | uVar5 | uVar4 | uVar3 | uVar9 | uVar8 | uVar7 | uVar1 & 0xffff0000 | uVar2;
  *puVar11 = *(uint *)(param_2 + 0x1c) & 0x100000 |
             uVar6 | uVar5 | uVar4 | uVar3 | uVar9 | uVar8 | uVar7 | uVar1 & 0xffef0000 | uVar2;
  puVar11 = param_3 + 5;
  if ((*(uint *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar11 = *(uint *)(param_2 + 0x28);
    puVar11 = param_3 + 6;
  }
  *(short *)((int)puVar11 + 2) = (short)*(undefined4 *)(param_2 + 0x10);
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 0x10) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar12 = puVar11 + 1;
  uVar1 = *puVar12;
  uVar2 = *(uint *)(param_2 + 0x1c) >> 0xc & 7;
  *puVar12 = uVar2 | uVar1 & 0xfffffff8;
  uVar3 = *(uint *)(param_2 + 0x1c) >> 8 & 0x70;
  *puVar12 = uVar3 | uVar2 | uVar1 & 0xffffff88;
  *puVar12 = *(uint *)(param_2 + 0x1c) >> 4 & 0x700 | uVar3 | uVar2 | uVar1 & 0xfffff888;
  uVar1 = *puVar12;
  uVar2 = *(uint *)(param_2 + 0x1c) & 0x7000;
  *puVar12 = uVar1 & 0xffff8fff | uVar2;
  uVar3 = *(uint *)(param_2 + 0x1c) & 8;
  *puVar12 = uVar3 | uVar1 & 0xffff8ff7 | uVar2;
  uVar4 = *(uint *)(param_2 + 0x1c) & 0x80;
  *puVar12 = uVar4 | uVar3 | uVar1 & 0xffff8f77 | uVar2;
  uVar5 = *(uint *)(param_2 + 0x1c) & 0x800;
  *puVar12 = uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8777 | uVar2;
  uVar6 = *(uint *)(param_2 + 0x1c) & 0x8000;
  *puVar12 = uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff0777 | uVar2;
  *puVar12 = *(uint *)(param_2 + 0x1c) & 0x100000 |
             uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffef0777 | uVar2;
  puVar12 = puVar11 + 2;
  if ((*(uint *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar12 = *(uint *)(param_2 + 0x28);
    puVar12 = puVar11 + 3;
  }
  *(undefined2 *)((int)puVar12 + 2) = 0x40;
  *puVar12 = *puVar12 & 0xe000ffff;
  puVar11 = puVar12 + 1;
  *(short *)((int)puVar12 + 6) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar12[2] = 5;
  puVar11 = puVar12 + 3;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar11 = *(uint *)(param_2 + 0xc);
    puVar11 = puVar12 + 4;
  }
  *(undefined2 *)((int)puVar11 + 2) = uVar10;
  *puVar11 = *puVar11 & 0xff00ffff | 0x440000;
  puVar11[1] = puVar11[1] & 0xffffaaaa | 0x2222;
  puVar12 = puVar11 + 2;
  *(undefined2 *)((int)puVar11 + 10) = 8;
  *puVar12 = *puVar12 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar12 = 1;
  puVar11[3] = puVar11[3] & 0xffff9998 | 0x1110;
  puVar12 = puVar11 + 4;
  *(undefined2 *)((int)puVar11 + 0x12) = 8;
  *puVar12 = *puVar12 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar12 = 1;
  puVar11[5] = puVar11[5] & 0xffffaaab | 0x2223;
  *(undefined2 *)((int)puVar11 + 0x1a) = 0x40;
  puVar11[6] = puVar11[6] & 0xe000ffff;
  puVar12 = puVar11 + 7;
  *(short *)((int)puVar11 + 0x1e) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar12;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar11[8] = 5;
  puVar12 = puVar11 + 9;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar12 = *(uint *)(param_2 + 0xc);
    puVar12 = puVar11 + 10;
  }
  *(short *)((int)puVar12 + 2) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar12;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar12[1] = puVar12[1] & 0xffff9998 | 0x1110;
  *(undefined2 *)((int)puVar12 + 10) = uVar10;
  puVar12[2] = puVar12[2] & 0xff00ffff | 0x440000;
  puVar12[3] = puVar12[3] & 0xffffaaaa | 0x2222;
  puVar11 = puVar12 + 4;
  *(undefined2 *)((int)puVar12 + 0x12) = 9;
  *puVar11 = *puVar11 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar11 = 1;
  puVar12[5] = puVar12[5] & 0xffff9998 | 0x1110;
  *(undefined2 *)((int)puVar12 + 0x1a) = 0x40;
  puVar12[6] = puVar12[6] & 0xe000ffff;
  puVar11 = puVar12 + 7;
  *(short *)((int)puVar12 + 0x1e) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar12[8] = 5;
  puVar11 = puVar12 + 9;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar11 = *(uint *)(param_2 + 0xc);
    puVar11 = puVar12 + 10;
  }
  *(short *)((int)puVar11 + 2) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar11[1] = puVar11[1] & 0xffff9998 | 0x1110;
  *(undefined2 *)((int)puVar11 + 10) = uVar10;
  puVar11[2] = puVar11[2] & 0xff00ffff | 0x440000;
  puVar11[3] = puVar11[3] & 0xffffaaaa | 0x2222;
  puVar12 = puVar11 + 4;
  *(undefined2 *)((int)puVar11 + 0x12) = 9;
  *puVar12 = *puVar12 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar12 = 1;
  puVar11[5] = puVar11[5] & 0xffffaaab | 0x2223;
  *(undefined2 *)((int)puVar11 + 0x1a) = 0x49;
  puVar11[6] = puVar11[6] & 0xe000ffff;
  puVar12 = puVar11 + 7;
  *(short *)((int)puVar11 + 0x1e) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar12;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar11[8] = 1;
  puVar12 = puVar11 + 9;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar12 = *(uint *)(param_2 + 0xc);
    puVar12 = puVar11 + 10;
  }
  *(short *)((int)puVar12 + 2) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar12;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar12[1] = puVar12[1] & 0xffff8888;
  puVar11 = puVar12 + 2;
  *(short *)((int)puVar12 + 10) = (short)*(undefined4 *)(param_2 + 0x10);
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 0x10) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar11 = puVar12 + 3;
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 0x1c) >> 0xc & 7;
  *puVar11 = uVar2 | uVar1 & 0xfffffff8;
  uVar3 = *(uint *)(param_2 + 0x1c) >> 8 & 0x70;
  *puVar11 = uVar3 | uVar2 | uVar1 & 0xffffff88;
  *puVar11 = *(uint *)(param_2 + 0x1c) >> 4 & 0x700 | uVar3 | uVar2 | uVar1 & 0xfffff888;
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 0x1c) & 0x7000;
  *puVar11 = uVar1 & 0xffff8fff | uVar2;
  uVar3 = *(uint *)(param_2 + 0x1c) & 8;
  *puVar11 = uVar3 | uVar1 & 0xffff8ff7 | uVar2;
  uVar4 = *(uint *)(param_2 + 0x1c) & 0x80;
  *puVar11 = uVar4 | uVar3 | uVar1 & 0xffff8f77 | uVar2;
  uVar5 = *(uint *)(param_2 + 0x1c) & 0x800;
  *puVar11 = uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8777 | uVar2;
  uVar6 = *(uint *)(param_2 + 0x1c) & 0x8000;
  *puVar11 = uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff0777 | uVar2;
  *puVar11 = *(uint *)(param_2 + 0x1c) & 0x100000 |
             uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffef0777 | uVar2;
  puVar11 = puVar12 + 4;
  if ((*(uint *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar11 = *(uint *)(param_2 + 0x28);
    puVar11 = puVar12 + 5;
  }
  *(undefined2 *)((int)puVar11 + 2) = 0x49;
  *puVar11 = *puVar11 & 0xe000ffff;
  puVar12 = puVar11 + 1;
  *(short *)((int)puVar11 + 6) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar12;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar11[2] = 5;
  puVar12 = puVar11 + 3;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar12 = *(uint *)(param_2 + 0xc);
    puVar12 = puVar11 + 4;
  }
  *(short *)((int)puVar12 + 2) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar12;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar12[1] = puVar12[1] & 0xffff9998 | 0x1110;
  puVar11 = puVar12 + 2;
  *(short *)((int)puVar12 + 10) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar12[3] = puVar12[3] & 0xffff8888;
  *(undefined2 *)((int)puVar12 + 0x12) = 3;
  puVar12[4] = puVar12[4] & 0xe000ffff;
  puVar11 = puVar12 + 5;
  *(short *)((int)puVar12 + 0x16) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar12[6] = 5;
  puVar11 = puVar12 + 7;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar11 = *(uint *)(param_2 + 0xc);
    puVar11 = puVar12 + 8;
  }
  *(short *)((int)puVar11 + 2) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar11;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar11[1] = puVar11[1] & 0xffff9998 | 0x1110;
  puVar12 = puVar11 + 2;
  *(short *)((int)puVar11 + 10) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar12;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar11[3] = puVar11[3] & 0xffff9998 | 0x1110;
  *(undefined2 *)((int)puVar11 + 0x12) = 3;
  puVar11[4] = puVar11[4] & 0xe000ffff;
  puVar12 = puVar11 + 5;
  *(short *)((int)puVar11 + 0x16) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar12;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar11[6] = 1;
  puVar12 = puVar11 + 7;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar12 = *(uint *)(param_2 + 0xc);
    puVar12 = puVar11 + 8;
  }
  *(short *)((int)puVar12 + 2) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar12;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar12[1] = puVar12[1] & 0xffff0000 | 0x9998;
  puVar11 = puVar12 + 2;
  *(undefined2 *)((int)puVar12 + 10) = 9;
  *puVar11 = *puVar11 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar11 = 1;
  puVar12[3] = puVar12[3] & 0xffffaaaa | 0x2222;
  return puVar12 + 4;
}

