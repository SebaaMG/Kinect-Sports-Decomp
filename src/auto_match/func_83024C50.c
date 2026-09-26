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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82A1EFC0();
extern int fn_82FA5060();
extern int fn_830224F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC770;
extern unsigned int uStack_64;


undefined8 fn_83024C50(int param_1,uint param_2,ushort param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_r0;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 in_vs32 [16];
  undefined1 in_vs37 [16];
  undefined4 in_register_000103f0;
  undefined4 uStack_64;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [80];
  
  uVar4 = fn_830224F0(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x70) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0x3f;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar3 = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0x3f;
  uVar2 = lbl_82002AE0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  puVar7 = &uStack_64;
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0x3f;
  lVar10 = 6;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  puVar6 = (undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0x3f;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0x3f;
  *(undefined4 *)(param_1 + 0x74) = 4;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  altv300_21(in_vs32,in_vs37);
  puVar1 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f0;
  puVar1[2] = in_register_000103f0;
  puVar1[3] = in_register_000103f0;
  puVar1 = (undefined4 *)((int)auStack_60 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f0;
  puVar1[2] = in_register_000103f0;
  puVar1[3] = in_register_000103f0;
  do {
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = *puVar7;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar8 = 0;
  for (uVar9 = param_2; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
    iVar8 = iVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(uint *)(param_1 + 0x168) = (uint)param_3 * iVar8 * 4;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined2 *)(param_1 + 0x10e) = 0;
  *(undefined2 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0x2b;
  *(undefined4 *)(param_1 + 0x108) = 0x11;
  uVar5 = fn_82FA5060(lbl_831BC770,*(undefined4 *)(param_1 + 0x168));
  if ((uVar5 & 0xffffffff) == 0) {
    uVar4 = 0x34;
  }
  else {
    fn_82A1EFC0(uVar5,0,*(undefined4 *)(param_1 + 0x168));
    *(int *)(param_1 + 0x100) = (int)uVar5;
    *(ushort *)(param_1 + 0x10c) = param_3;
    *(undefined2 *)(param_1 + 0x10e) = 0;
    *(uint *)(param_1 + 0x104) = param_2;
    fn_82A1EFC0(param_1 + 0x110,0,0x40);
  }
  return uVar4;
}

