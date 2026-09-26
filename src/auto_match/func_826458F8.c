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
extern unsigned int *auStack_e4;
extern int fn_82644450();
extern int fn_82645110();
extern int fn_82645688();
extern int fn_8264D6C0();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1E108();
extern int fn_831425CC();
extern int fn_831425EC();
extern int fn_8314261C();
extern int fn_8314262C();
extern unsigned int lbl_821CC3F4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_be;
extern unsigned int uStack_c0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


undefined8 fn_826458F8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 auStack_e4 [9];
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  if ((*(int *)(param_1 + 0x2a9c) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    fn_82645688();
    while (*(int *)(param_1 + 0x2af0) != *(int *)(param_1 + 0x2aec)) {
      fn_82A1E108(1);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x3b0c);
  if (uVar5 != 0) {
    fn_8264D6C0(((ulonglong)(uVar5 >> 0x14) + 0x200 & 0x1000) + ((ulonglong)uVar5 & 0x1fffffff) +
                 -0x40000000,
                 ((ulonglong)(*(uint *)(param_1 + 0x3b10) >> 0x14) + 0x200 & 0x1000) +
                 ((ulonglong)*(uint *)(param_1 + 0x3b10) & 0x1fffffff) + -0x40000000,0);
  }
  fn_8265C990(*(undefined4 *)(param_1 + 0x3ac8),0xffffffffb1800000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x3acc),0xffffffffb1800000);
  *(undefined4 *)(param_1 + 0x3ac8) = 0;
  *(undefined4 *)(param_1 + 0x3acc) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  fn_831425CC(0);
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar11 = (ulonglong)*(uint *)(param_2 + 4);
    uVar12 = (ulonglong)*(uint *)(param_2 + 8);
    uVar13 = (ulonglong)*(uint *)(param_2 + 0xc);
    iVar4 = *(int *)(param_2 + 0x10);
    uVar9 = (ulonglong)*(uint *)(param_2 + 0x14);
    if (uVar11 == 0) {
      uVar11 = 0x8000;
    }
    if (uVar13 == 0) {
      uVar13 = 0x200000;
    }
    if (uVar9 == 0) {
      uVar9 = 0x20;
    }
    trapWord(6,uVar9,0);
    if (uVar12 == 0) {
      uVar12 = fn_8265C940(uVar11,0xffffffffb5800000);
      *(int *)(param_1 + 0x3ac8) = (int)uVar12;
    }
    if (iVar4 == 0) {
      iVar4 = fn_8265C940(uVar13,(-(ulonglong)(uVar13 < 0x80000) & 3) << 0x1c |
                                       0xffffffff87800000);
      *(int *)(param_1 + 0x3acc) = iVar4;
    }
    if (((uVar12 & 0xffffffff) == 0) || (iVar4 == 0)) {
      uVar3 = 0xffffffff8007000e;
    }
    else {
      uVar3 = MmGetPhysicalAddress(uVar12);
      fn_8314262C(uVar3,0x1c - LZCOUNT((uint)uVar11));
      uVar7 = 0x1f - LZCOUNT((uint)uVar11 >> 9);
      if (0x13 < (uVar7 & 0xffffffff)) {
        uVar7 = 0x13;
      }
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x2a90) + 0x3c;
      fn_8314261C((((uVar10 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar10 & 0x1fffffff),
                      uVar7);
      iVar1 = ((uint)uVar13 & 0xfffffffc) + iVar4;
      uVar5 = (uint)(uVar13 / uVar9);
      *(undefined4 *)(iVar1 + -4) = 0xbadf00d;
      iVar2 = (uVar5 & 0xfffffffc) + iVar4;
      *(int *)(param_1 + 0x3b10) = iVar1 + -4;
      *(uint *)(param_1 + 0x3b2c) = (uint)uVar13 >> 2;
      *(int *)(param_1 + 0x3b04) = (int)uVar12;
      *(int *)(param_1 + 0x3b0c) = iVar4;
      *(int *)(param_1 + 0x3b20) = iVar4;
      *(int *)(param_1 + 0x3b24) = iVar4;
      *(uint *)(param_1 + 0x3b14) = uVar5;
      *(int *)(param_1 + 0x3b08) = (int)(uVar11 >> 2) + -1;
      *(undefined4 *)(*(int *)(param_1 + 0x2a90) + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x2acc) = 0;
      *(int *)(param_1 + 0x30) = iVar4 + -4;
      *(int *)(param_1 + 0x34) = iVar2;
      *(int *)(param_1 + 0x38) = iVar2 + -0xa0;
      *(undefined4 *)(param_1 + 0x3b18) = 0;
      if (*(int *)(param_1 + 0x2a9c) == 0) {
        *(undefined4 *)(param_1 + 0x2a9c) = 3;
      }
      **(int **)(param_1 + 0x2a90) = *(int *)(param_1 + 0x2a9c) + -2;
      *(uint *)(*(int *)(param_1 + 0x2a90) + 4) =
           *(uint *)(param_1 + 0x3b1c) & 3 | *(uint *)(param_1 + 0x30);
      fn_831425CC((ulonglong)*(uint *)(param_1 + 0x2a90) + 8);
      uStack_e8 = 0;
      lVar14 = 8;
      puVar8 = auStack_e4;
      uStack_f0 = 0xc0114800;
      uStack_ec = 0x3ff;
      puVar6 = (undefined4 *)&lbl_821CC3F4;
      auStack_e4[0] = 0;
      do {
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = *puVar6;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      uStack_b8 = 0;
      uStack_b4 = 0;
      *(undefined2 *)(param_1 + 0x2aac) = 1;
      *(undefined2 *)(param_1 + 0x2aae) = 0x800;
      uStack_be = 0x800;
      uStack_c0 = 1;
      uStack_bc = 7;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      fn_831425EC(&uStack_f0,0x13);
      fn_82644450(param_1,&uStack_f0,0x13);
      uVar5 = *(uint *)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x38) < uVar5) {
        uVar5 = fn_82645110(param_1);
      }
      *(undefined4 *)(uVar5 + 4) = 0xd02;
      *(undefined4 *)(uVar5 + 8) = 0x10800;
      *(undefined4 *)(uVar5 + 0xc) = 0x30a02;
      *(undefined4 *)(uVar5 + 0x10) = 0xc0100000;
      *(undefined4 *)(uVar5 + 0x14) = 0x7f00000;
      *(undefined4 *)(uVar5 + 0x18) = 0xc0000000;
      *(undefined4 *)(uVar5 + 0x1c) = 0x100000;
      *(undefined4 *)(uVar5 + 0x20) = 0x1dd;
      *(uint *)(uVar5 + 0x24) =
           ((*(uint *)(param_1 + 0x2a94) >> 0x14) + 0x200 & 0x1000) +
           (*(uint *)(param_1 + 0x2a94) & 0x1fffffff);
      *(undefined4 *)(uVar5 + 0x28) = 0x1dc;
      puVar6 = (undefined4 *)(uVar5 + 0x2c);
      *puVar6 = 0x20037;
      *(undefined4 **)(param_1 + 0x30) = puVar6;
      if (*(undefined4 **)(param_1 + 0x38) < puVar6) {
        puVar6 = (undefined4 *)fn_82645110(param_1);
      }
      puVar6[1] = 0x5c8;
      uVar3 = 0;
      puVar6[2] = 0x20000;
      puVar6[3] = 0xd04;
      puVar6[4] = 0;
      *(undefined4 **)(param_1 + 0x30) = puVar6 + 4;
    }
  }
  return uVar3;
}

