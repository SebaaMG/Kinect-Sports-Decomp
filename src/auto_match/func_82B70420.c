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


uint * fn_82B70420(undefined8 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  uint *puVar7;
  uint *puVar8;
  
  uVar6 = fn_82B6EA60();
  *(undefined2 *)((int)param_3 + 2) = 0x49;
  *param_3 = *param_3 & 0xe000ffff;
  *(undefined2 *)((int)param_3 + 6) = uVar6;
  puVar7 = param_3 + 2;
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)*(undefined4 *)(param_2 + 0x10);
  uVar1 = *puVar7;
  uVar2 = *(uint *)(param_2 + 0x10) & 0x3f0000;
  *puVar7 = uVar1 & 0xffc0ffff | uVar2;
  *puVar7 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar7 = param_3 + 3;
  uVar1 = *puVar7;
  *puVar7 = uVar1 & 0xffffb98a | 0x3102;
  uVar3 = *(uint *)(param_2 + 0x1c) >> 8 & 8;
  *puVar7 = uVar3 | uVar1 & 0xffffb982 | 0x3102;
  uVar4 = (*(uint *)(param_2 + 0x1c) & 8) << 4;
  *puVar7 = uVar4 | uVar3 | uVar1 & 0xffffb902 | 0x3102;
  uVar5 = (*(uint *)(param_2 + 0x1c) & 0x80) << 4;
  *puVar7 = uVar5 | uVar4 | uVar3 | uVar1 & 0xffffb102 | 0x3102;
  uVar2 = *(uint *)(param_2 + 0x1c) & 0x8000;
  *puVar7 = uVar5 | uVar4 | uVar3 | uVar1 & 0xffff3102 | 0x3102 | uVar2;
  *puVar7 = uVar5 | uVar4 | uVar3 | uVar1 & 0xffef3102 | 0x3102 | uVar2 |
            *(uint *)(param_2 + 0x1c) & 0x100000;
  puVar7 = param_3 + 4;
  if ((*(uint *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar7 = *(uint *)(param_2 + 0x28);
    puVar7 = param_3 + 5;
  }
  *(short *)((int)puVar7 + 2) = (short)*(undefined4 *)(param_2 + 0x14);
  uVar1 = *puVar7;
  uVar2 = *(uint *)(param_2 + 0x14) & 0x3f0000;
  *puVar7 = uVar1 & 0xffc0ffff | uVar2;
  *puVar7 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 0x14) & 0x800000 | 0x400000;
  puVar8 = puVar7 + 1;
  uVar1 = *puVar8;
  *puVar8 = uVar1 & 0xffffb8a9 | 0x3021;
  uVar4 = *(uint *)(param_2 + 0x20) >> 4 & 8;
  *puVar8 = uVar4 | uVar1 & 0xffffb8a1 | 0x3021;
  uVar5 = *(uint *)(param_2 + 0x20) >> 4 & 0x80;
  *puVar8 = uVar5 | uVar4 | uVar1 & 0xffffb821 | 0x3021;
  uVar3 = (*(uint *)(param_2 + 0x20) & 8) << 8;
  *puVar8 = uVar3 | uVar5 | uVar4 | uVar1 & 0xffffb021 | 0x3021;
  uVar2 = *(uint *)(param_2 + 0x20) & 0x8000;
  *puVar8 = uVar2 | uVar3 | uVar5 | uVar4 | uVar1 & 0xffff3021 | 0x3021;
  *puVar8 = *(uint *)(param_2 + 0x20) & 0x100000 |
            uVar2 | uVar3 | uVar5 | uVar4 | uVar1 & 0xffef3021 | 0x3021;
  puVar8 = puVar7 + 2;
  if ((*(uint *)(param_2 + 0x14) & 0x800000) != 0) {
    *puVar8 = *(uint *)(param_2 + 0x2c);
    puVar8 = puVar7 + 3;
  }
  *(undefined2 *)((int)puVar8 + 2) = 0x40;
  *puVar8 = *puVar8 & 0xe000ffff;
  puVar7 = puVar8 + 1;
  *(short *)((int)puVar8 + 6) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar7;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar7 = uVar1 & 0xffc0ffff | uVar2;
  *puVar7 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar7 = puVar8 + 2;
  *puVar7 = 0;
  uVar2 = *(uint *)(param_2 + 8) & 3;
  *puVar7 = uVar2;
  uVar1 = *(uint *)(param_2 + 8) & 0xc;
  *puVar7 = uVar2 | uVar1;
  *puVar7 = uVar2 | uVar1 | *(uint *)(param_2 + 8) & 0x30;
  puVar7 = puVar8 + 3;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar7 = *(uint *)(param_2 + 0xc);
    puVar7 = puVar8 + 4;
  }
  *(short *)((int)puVar7 + 2) = (short)*(undefined4 *)(param_2 + 0x10);
  uVar1 = *puVar7;
  uVar2 = *(uint *)(param_2 + 0x10) & 0x3f0000;
  *puVar7 = uVar1 & 0xffc0ffff | uVar2;
  *puVar7 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar8 = puVar7 + 1;
  uVar1 = *puVar8;
  *puVar8 = uVar1 & 0xffffb8a9 | 0x3021;
  uVar3 = *(uint *)(param_2 + 0x1c) >> 8 & 8;
  *puVar8 = uVar3 | uVar1 & 0xffffb8a1 | 0x3021;
  uVar2 = (*(uint *)(param_2 + 0x1c) & 8) << 4;
  *puVar8 = uVar2 | uVar3 | uVar1 & 0xffffb821 | 0x3021;
  *puVar8 = (*(uint *)(param_2 + 0x1c) & 0x80) << 4 | uVar2 | uVar3 | uVar1 & 0xffffb021 | 0x3021;
  uVar1 = *puVar8;
  uVar2 = *(uint *)(param_2 + 0x1c) & 0x8000;
  *puVar8 = uVar1 & 0xffff7fff | uVar2;
  *puVar8 = uVar1 & 0xffef7fff | uVar2 | *(uint *)(param_2 + 0x1c) & 0x100000;
  puVar8 = puVar7 + 2;
  if ((*(uint *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar8 = *(uint *)(param_2 + 0x28);
    puVar8 = puVar7 + 3;
  }
  *(short *)((int)puVar8 + 2) = (short)*(undefined4 *)(param_2 + 0x14);
  uVar1 = *puVar8;
  uVar2 = *(uint *)(param_2 + 0x14) & 0x3f0000;
  *puVar8 = uVar1 & 0xffc0ffff | uVar2;
  *puVar8 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 0x14) & 0x800000 | 0x400000;
  puVar7 = puVar8 + 1;
  uVar1 = *puVar7;
  *puVar7 = uVar1 & 0xffffb98a | 0x3102;
  uVar4 = *(uint *)(param_2 + 0x20) >> 4 & 8;
  *puVar7 = uVar4 | uVar1 & 0xffffb982 | 0x3102;
  uVar5 = *(uint *)(param_2 + 0x20) >> 4 & 0x80;
  *puVar7 = uVar5 | uVar4 | uVar1 & 0xffffb902 | 0x3102;
  uVar3 = (*(uint *)(param_2 + 0x20) & 8) << 8;
  *puVar7 = uVar3 | uVar5 | uVar4 | uVar1 & 0xffffb102 | 0x3102;
  uVar2 = *(uint *)(param_2 + 0x20) & 0x8000;
  *puVar7 = uVar2 | uVar3 | uVar5 | uVar4 | uVar1 & 0xffff3102 | 0x3102;
  *puVar7 = *(uint *)(param_2 + 0x20) & 0x100000 |
            uVar2 | uVar3 | uVar5 | uVar4 | uVar1 & 0xffef3102 | 0x3102;
  puVar7 = puVar8 + 2;
  if ((*(uint *)(param_2 + 0x14) & 0x800000) != 0) {
    *puVar7 = *(uint *)(param_2 + 0x2c);
    puVar7 = puVar8 + 3;
  }
  *(undefined2 *)((int)puVar7 + 2) = uVar6;
  *puVar7 = *puVar7 & 0xff00ffff | 0x440000;
  puVar7[1] = puVar7[1] & 0xffff0000 | 0xba98;
  return puVar7 + 2;
}

