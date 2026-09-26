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


uint * fn_82B72678(undefined8 param_1,uint *param_2,uint *param_3)

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
  *(undefined2 *)((int)param_3 + 2) = 0x51;
  *param_3 = *param_3 & 0xe000ffff | *param_2 & 0x1fff0000;
  *(undefined2 *)((int)param_3 + 6) = uVar6;
  param_3[1] = param_3[1] & 0xff00ffff | 0x440000;
  param_3[2] = 1;
  puVar7 = param_3 + 3;
  *(short *)((int)param_3 + 0xe) = (short)param_2[5];
  uVar1 = *puVar7;
  uVar2 = param_2[5];
  *puVar7 = uVar1 & 0xffc0ffff | uVar2 & 0x3f0000;
  *puVar7 = uVar1 & 0xff40ffff | uVar2 & 0x3f0000 | param_2[5] & 0x800000 | 0x400000;
  puVar7 = param_3 + 4;
  uVar1 = *puVar7;
  *puVar7 = uVar1 & 0xffff8888;
  uVar2 = param_2[8] & 8;
  *puVar7 = uVar1 & 0xffff8880 | uVar2;
  uVar3 = (param_2[8] & 8) << 4;
  *puVar7 = uVar3 | uVar1 & 0xffff8800 | uVar2;
  uVar4 = (param_2[8] & 8) << 8;
  *puVar7 = uVar4 | uVar3 | uVar1 & 0xffff8000 | uVar2;
  uVar5 = (param_2[8] & 8) << 0xc;
  *puVar7 = uVar5 | uVar4 | uVar3 | uVar1 & 0xffff0000 | uVar2;
  *puVar7 = uVar5 | uVar4 | uVar3 | uVar1 & 0xffef0000 | uVar2 | param_2[8] & 0x100000;
  puVar7 = param_3 + 5;
  if ((param_2[5] & 0x800000) != 0) {
    *puVar7 = param_2[0xb];
    puVar7 = param_3 + 6;
  }
  *(undefined2 *)((int)puVar7 + 2) = 0x51;
  *puVar7 = *puVar7 & 0xe000ffff | *param_2 & 0x1fff0000;
  *(undefined2 *)((int)puVar7 + 6) = uVar6;
  puVar7[1] = puVar7[1] & 0xff00ffff | 0x440000;
  puVar7[2] = 4;
  puVar8 = puVar7 + 3;
  *(short *)((int)puVar7 + 0xe) = (short)param_2[5];
  uVar1 = *puVar8;
  uVar2 = param_2[5];
  *puVar8 = uVar1 & 0xffc0ffff | uVar2 & 0x3f0000;
  *puVar8 = uVar1 & 0xff40ffff | uVar2 & 0x3f0000 | param_2[5] & 0x800000 | 0x400000;
  puVar8 = puVar7 + 4;
  uVar1 = *puVar8;
  *puVar8 = uVar1 & 0xffff9999 | 0x1111;
  uVar5 = param_2[8] >> 4 & 8;
  *puVar8 = uVar5 | uVar1 & 0xffff9991 | 0x1111;
  uVar2 = param_2[8] & 0x80;
  *puVar8 = uVar5 | uVar1 & 0xffff9911 | 0x1111 | uVar2;
  uVar3 = (param_2[8] & 0x80) << 4;
  *puVar8 = uVar3 | uVar5 | uVar1 & 0xffff9111 | 0x1111 | uVar2;
  uVar4 = (param_2[8] & 0x80) << 8;
  *puVar8 = uVar4 | uVar3 | uVar5 | uVar1 & 0xffff1111 | 0x1111 | uVar2;
  *puVar8 = uVar4 | uVar3 | uVar5 | uVar1 & 0xffef1111 | 0x1111 | uVar2 | param_2[8] & 0x100000;
  puVar8 = puVar7 + 5;
  if ((param_2[5] & 0x800000) != 0) {
    *puVar8 = param_2[0xb];
    puVar8 = puVar7 + 6;
  }
  *(undefined2 *)((int)puVar8 + 2) = 0x51;
  *puVar8 = *puVar8 & 0xe000ffff | *param_2 & 0x1fff0000;
  *(undefined2 *)((int)puVar8 + 6) = uVar6;
  puVar8[1] = puVar8[1] & 0xff00ffff | 0x440000;
  puVar8[2] = 0x10;
  puVar7 = puVar8 + 3;
  *(short *)((int)puVar8 + 0xe) = (short)param_2[5];
  uVar1 = param_2[5];
  uVar2 = *puVar7;
  *puVar7 = uVar2 & 0xffc0ffff | uVar1 & 0x3f0000;
  *puVar7 = uVar2 & 0xff40ffff | uVar1 & 0x3f0000 | param_2[5] & 0x800000 | 0x400000;
  puVar7 = puVar8 + 4;
  uVar1 = *puVar7;
  *puVar7 = uVar1 & 0xffffaaaa | 0x2222;
  uVar4 = param_2[8] >> 8 & 8;
  *puVar7 = uVar4 | uVar1 & 0xffffaaa2 | 0x2222;
  uVar5 = param_2[8] >> 4 & 0x80;
  *puVar7 = uVar5 | uVar4 | uVar1 & 0xffffaa22 | 0x2222;
  uVar2 = param_2[8] & 0x800;
  *puVar7 = uVar5 | uVar4 | uVar1 & 0xffffa222 | 0x2222 | uVar2;
  uVar3 = (param_2[8] & 0x800) << 4;
  *puVar7 = uVar3 | uVar5 | uVar4 | uVar1 & 0xffff2222 | 0x2222 | uVar2;
  *puVar7 = uVar3 | uVar5 | uVar4 | uVar1 & 0xffef2222 | 0x2222 | uVar2 | param_2[8] & 0x100000;
  puVar7 = puVar8 + 5;
  if ((param_2[5] & 0x800000) != 0) {
    *puVar7 = param_2[0xb];
    puVar7 = puVar8 + 6;
  }
  *(undefined2 *)((int)puVar7 + 2) = 0x51;
  *puVar7 = *puVar7 & 0xe000ffff | *param_2 & 0x1fff0000;
  *(undefined2 *)((int)puVar7 + 6) = uVar6;
  puVar7[1] = puVar7[1] & 0xff00ffff | 0x440000;
  puVar7[2] = 0x40;
  puVar8 = puVar7 + 3;
  *(short *)((int)puVar7 + 0xe) = (short)param_2[5];
  uVar1 = param_2[5];
  uVar2 = *puVar8;
  *puVar8 = uVar2 & 0xffc0ffff | uVar1 & 0x3f0000;
  *puVar8 = uVar2 & 0xff40ffff | uVar1 & 0x3f0000 | param_2[5] & 0x800000 | 0x400000;
  puVar8 = puVar7 + 4;
  uVar2 = *puVar8;
  *puVar8 = uVar2 & 0xffffbbbb | 0x3333;
  uVar3 = param_2[8] >> 0xc & 8;
  *puVar8 = uVar3 | uVar2 & 0xffffbbb3 | 0x3333;
  uVar4 = param_2[8] >> 8 & 0x80;
  *puVar8 = uVar4 | uVar3 | uVar2 & 0xffffbb33 | 0x3333;
  uVar5 = param_2[8] >> 4 & 0x800;
  *puVar8 = uVar5 | uVar4 | uVar3 | uVar2 & 0xffffb333 | 0x3333;
  uVar1 = param_2[8];
  *puVar8 = uVar5 | uVar4 | uVar3 | uVar2 & 0xffff3333 | 0x3333 | uVar1 & 0x8000;
  *puVar8 = uVar5 | uVar4 | uVar3 | uVar2 & 0xffef3333 | 0x3333 | uVar1 & 0x8000 |
            param_2[8] & 0x100000;
  puVar8 = puVar7 + 5;
  if ((param_2[5] & 0x800000) != 0) {
    *puVar8 = param_2[0xb];
    puVar8 = puVar7 + 6;
  }
  *(undefined2 *)((int)puVar8 + 2) = 0x49;
  *puVar8 = *puVar8 & 0xe000ffff;
  *(undefined2 *)((int)puVar8 + 6) = uVar6;
  puVar8[1] = puVar8[1] & 0xff00ffff | 0x40000;
  puVar8[2] = param_2[4];
  puVar7 = puVar8 + 3;
  if ((param_2[4] & 0x400000) != 0) {
    *puVar7 = param_2[7];
    puVar7 = puVar8 + 4;
  }
  if ((param_2[4] & 0x800000) != 0) {
    *puVar7 = param_2[10];
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)((int)puVar7 + 2) = uVar6;
  *puVar7 = *puVar7 & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)puVar7 + 6) = 99;
  puVar7[1] = puVar7[1] & 0xe000ffff;
  *(undefined2 *)((int)puVar7 + 10) = uVar6;
  puVar7[2] = puVar7[2] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)puVar7 + 0xe) = uVar6;
  puVar7[3] = puVar7[3] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)puVar7 + 0x12) = 0x49;
  puVar7[4] = puVar7[4] & 0xe000ffff;
  *(undefined2 *)((int)puVar7 + 0x16) = uVar6;
  puVar7[5] = puVar7[5] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)puVar7 + 0x1a) = uVar6;
  puVar7[6] = puVar7[6] & 0xff00ffff | 0x40000;
  puVar7[7] = param_2[5];
  puVar8 = puVar7 + 8;
  if ((param_2[5] & 0x400000) != 0) {
    *puVar8 = param_2[8];
    puVar8 = puVar7 + 9;
  }
  if ((param_2[5] & 0x800000) != 0) {
    *puVar8 = param_2[0xb];
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)((int)puVar8 + 2) = 0x49;
  *puVar8 = *puVar8 & 0xe000ffff;
  *(undefined2 *)((int)puVar8 + 6) = uVar6;
  puVar8[1] = puVar8[1] & 0xff00ffff | 0x40000;
  puVar8[2] = param_2[4];
  puVar7 = puVar8 + 3;
  if ((param_2[4] & 0x400000) != 0) {
    *puVar7 = param_2[7];
    puVar7 = puVar8 + 4;
  }
  if ((param_2[4] & 0x800000) != 0) {
    *puVar7 = param_2[10];
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)((int)puVar7 + 2) = uVar6;
  *puVar7 = *puVar7 & 0xff00ffff | 0x40000;
  return puVar7 + 1;
}

