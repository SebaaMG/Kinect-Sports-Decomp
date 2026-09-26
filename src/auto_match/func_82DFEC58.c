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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82DFEA50();
extern int fn_82DFEB38();
extern int fn_82F68CC0();


int fn_82DFEC58(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 auStack_50 [20];
  
  fn_82DFEB38();
  puVar15 = (uint *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  iVar4 = fn_82CE5410();
  uVar6 = *(uint *)(param_2 + 0x4c);
  uVar9 = (ulonglong)uVar6;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x4c);
  if ((int)uVar6 <= (int)*(uint *)(param_1 + 0x4c)) {
    uVar7 = uVar9;
  }
  if ((int)(*(uint *)(param_1 + 0x50) & 0x3fffffff) < (int)uVar6) {
    uVar13 = ((ulonglong)*(uint *)(param_1 + 0x50) & 0x3fffffff) << 1;
    if ((int)uVar13 <= (int)uVar6) {
      uVar13 = uVar9;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),puVar15,uVar13,0xe0);
  }
  uVar13 = (ulonglong)*puVar15;
  if (0 < (int)uVar7) {
    lVar10 = *(uint *)(param_2 + 0x48) - uVar13;
    uVar12 = uVar7;
    do {
      fn_82DFEA50(uVar13,lVar10 + uVar13);
      uVar12 = uVar12 - 1;
      uVar13 = uVar13 + 0xe0;
    } while (uVar12 != 0);
  }
  lVar10 = uVar9 - uVar7;
  uVar9 = uVar7 * 0xe0 + (ulonglong)*puVar15;
  if (0 < lVar10) {
    lVar11 = (uVar7 * 0xe0 + (ulonglong)*(uint *)(param_2 + 0x48)) - uVar9;
    do {
      if ((uVar9 & 0xffffffff) != 0) {
        fn_82F68CC0(uVar9,lVar11 + uVar9,0xe0);
      }
      lVar10 = lVar10 + -1;
      uVar9 = uVar9 + 0xe0;
    } while (lVar10 != 0);
  }
  *(uint *)(param_1 + 0x4c) = uVar6;
  fn_82F68CC0(param_1 + 0x54,param_2 + 0x54,0x48);
  puVar14 = (undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  iVar4 = fn_82CE5410();
  uVar6 = *(uint *)(param_1 + 0xa8) & 0x3fffffff;
  piVar1 = *(int **)(iVar4 + 0x10);
  if ((int)uVar6 < *(int *)(param_2 + 0xa4)) {
    if ((*(uint *)(param_1 + 0xa8) & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*puVar14,uVar6,1);
    }
    auStack_50[0] = *(undefined4 *)(param_2 + 0xa4);
    uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,auStack_50,1);
    *puVar14 = uVar5;
    *(undefined4 *)(param_1 + 0xa8) = auStack_50[0];
  }
  uVar6 = *(uint *)(param_2 + 0xa4);
  uVar7 = (ulonglong)uVar6;
  puVar8 = (undefined1 *)*puVar14;
  *(uint *)(param_1 + 0xa4) = uVar6;
  if (0 < (int)uVar6) {
    iVar4 = *(int *)(param_2 + 0xa0) - (int)puVar8;
    do {
      *puVar8 = puVar8[iVar4];
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  puVar15 = (uint *)(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  iVar4 = fn_82CE5410();
  uVar6 = *(uint *)(param_1 + 200) & 0x3fffffff;
  piVar1 = *(int **)(iVar4 + 0x10);
  if ((int)uVar6 < *(int *)(param_2 + 0xc4)) {
    if ((*(uint *)(param_1 + 200) & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*puVar15,uVar6,4);
    }
    auStack_50[0] = *(undefined4 *)(param_2 + 0xc4);
    uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,auStack_50,4);
    *puVar15 = uVar6;
    *(undefined4 *)(param_1 + 200) = auStack_50[0];
  }
  uVar6 = *(uint *)(param_2 + 0xc4);
  uVar7 = 0;
  uVar2 = *puVar15;
  *(uint *)(param_1 + 0xc4) = uVar6;
  iVar4 = *(int *)(param_2 + 0xc0);
  if (3 < (int)uVar6) {
    puVar14 = (undefined4 *)(iVar4 + -4);
    lVar11 = (ulonglong)uVar2 + 4;
    lVar10 = (((ulonglong)uVar6 - 4 & 0xffffffff) >> 2) + 1;
    uVar7 = lVar10 * 4 & 0xfffffffc;
    do {
      puVar3 = (undefined4 *)lVar11;
      puVar3[-1] = puVar14[1];
      *puVar3 = *(undefined4 *)((iVar4 - uVar2) + (int)puVar3);
      puVar3[1] = puVar14[3];
      puVar14 = puVar14 + 4;
      puVar3[2] = *puVar14;
      lVar11 = lVar11 + 0x10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((int)uVar7 < (int)uVar6) {
    lVar10 = uVar6 - uVar7;
    lVar11 = (uVar7 & 0x3fffffff) * 4 + (ulonglong)uVar2;
    do {
      *(undefined4 *)lVar11 = *(undefined4 *)((int)(undefined4 *)lVar11 + (iVar4 - uVar2));
      lVar11 = lVar11 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
  *(undefined1 *)(param_1 + 0xcd) = *(undefined1 *)(param_2 + 0xcd);
  *(undefined1 *)(param_1 + 0xce) = *(undefined1 *)(param_2 + 0xce);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  return param_1;
}

