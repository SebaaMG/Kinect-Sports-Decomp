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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82D7D9D8();
extern int fn_82D80B88();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D903E0();
extern int fn_82DAF6C8();
extern int fn_82DAF730();


void fn_82D8FC48(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  undefined4 *puVar18;
  
  puVar18 = param_2;
  if (((int)param_2[0x13] <= (int)param_3[0x13]) &&
     (((int)param_2[0x13] < (int)param_3[0x13] ||
      (*(ushort *)(param_3 + 8) < *(ushort *)(param_2 + 8))))) {
    puVar18 = param_3;
    param_3 = param_2;
  }
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  bVar1 = *(byte *)((int)puVar18 + 0x26);
  if ((bVar1 >> 6 != 0) || (bVar6 = false, (*(byte *)((int)param_3 + 0x26) & 0xc0) != 0)) {
    bVar6 = true;
  }
  if ((bVar1 & 0x30) == 0) {
    cVar7 = '\0';
    if ((*(byte *)((int)param_3 + 0x26) & 0x30) != 0) goto LAB_82d8fce8;
  }
  else {
LAB_82d8fce8:
    cVar7 = '\x01';
  }
  if (bVar6) {
    if (bVar1 >> 6 == 0) {
      *(byte *)((int)puVar18 + 0x26) = bVar1 & 0xcf | 0x10;
      puVar9 = puVar18;
    }
    else {
      if ((*(byte *)((int)param_3 + 0x26) & 0xc0) != 0) goto LAB_82d8fd50;
      *(byte *)((int)param_3 + 0x26) = *(byte *)((int)param_3 + 0x26) & 0xcf | 0x10;
      puVar9 = param_3;
    }
    fn_82D903E0(param_1,puVar9,0);
  }
LAB_82d8fd50:
  *(byte *)((int)puVar18 + 0x25) =
       *(byte *)((int)param_3 + 0x25) & 0x30 | *(byte *)((int)puVar18 + 0x25);
  fn_82DAF6C8(puVar18);
  fn_82DAF6C8(param_3);
  fn_82DAF6C8(*(undefined4 *)(param_1 + 0x20));
  fn_82D7D9D8(puVar18 + 0x16,param_3 + 0x16);
  uVar3 = puVar18[0x13];
  lVar16 = (ulonglong)(uint)param_3[0x13] + (ulonglong)uVar3;
  iVar8 = fn_82CE5410();
  iVar17 = (int)lVar16;
  if ((int)(puVar18[0x14] & 0x3fffffff) < iVar17) {
    lVar12 = ((ulonglong)(uint)puVar18[0x14] & 0x3fffffff) << 1;
    if ((int)lVar12 <= iVar17) {
      lVar12 = lVar16;
    }
    fn_82CE6310(*(undefined4 *)(iVar8 + 0x10),puVar18 + 0x12,lVar12,4);
  }
  puVar18[0x13] = iVar17;
  iVar8 = 0;
  if (0 < (int)param_3[0x13]) {
    iVar17 = 0;
    do {
      iVar8 = iVar8 + 1;
      *(undefined4 *)((uVar3 & 0xffff) * 4 + puVar18[0x12]) =
           *(undefined4 *)(iVar17 + param_3[0x12]);
      *(undefined4 **)(*(int *)(iVar17 + param_3[0x12]) + 0xcc) = puVar18;
      piVar15 = (int *)(iVar17 + param_3[0x12]);
      iVar17 = iVar17 + 4;
      *(short *)(*piVar15 + 0xa8) = (short)uVar3;
      uVar3 = (uVar3 & 0xffff) + 1;
    } while (iVar8 < (int)param_3[0x13]);
  }
  uVar3 = puVar18[0xf];
  uVar13 = (ulonglong)uVar3;
  piVar15 = puVar18 + 0xe;
  uVar4 = param_3[0xf];
  iVar8 = fn_82CE5410();
  iVar17 = (int)(uVar13 + uVar4);
  if ((int)(puVar18[0x10] & 0x3fffffff) < iVar17) {
    lVar16 = ((ulonglong)(uint)puVar18[0x10] & 0x3fffffff) << 1;
    if ((int)lVar16 <= iVar17) {
      lVar16 = uVar13 + uVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar8 + 0x10),piVar15,lVar16,4);
  }
  puVar18[0xf] = iVar17;
  iVar8 = 0;
  if (0 < (int)param_3[0xf]) {
    iVar17 = uVar3 << 2;
    iVar10 = 0;
    do {
      if (*(int *)(iVar10 + param_3[0xe]) != 0) {
        uVar13 = uVar13 + 1;
        *(undefined4 *)(iVar17 + *piVar15) = *(undefined4 *)(iVar10 + param_3[0xe]);
        piVar5 = (int *)(iVar17 + *piVar15);
        iVar17 = iVar17 + 4;
        *(undefined4 **)(*piVar5 + 0xc) = puVar18;
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar8 < (int)param_3[0xf]);
  }
  iVar8 = fn_82CE5410();
  iVar17 = (int)uVar13;
  if ((int)(puVar18[0x10] & 0x3fffffff) < iVar17) {
    uVar14 = ((ulonglong)(uint)puVar18[0x10] & 0x3fffffff) << 1;
    if ((int)uVar14 <= iVar17) {
      uVar14 = uVar13;
    }
    fn_82CE6310(*(undefined4 *)(iVar8 + 0x10),piVar15,uVar14,4);
  }
  puVar18[0xf] = iVar17;
  iVar8 = 0;
  if (0 < (int)param_3[0x13]) {
    iVar17 = 0;
    do {
      uVar13 = (ulonglong)*(ushort *)(*(int *)(iVar17 + param_3[0x12]) + 0xb0);
      if (-1 < (longlong)(uVar13 - 1)) {
        piVar15 = (int *)(*(int *)(*(int *)(iVar17 + param_3[0x12]) + 0xac) + -0x30);
        do {
          piVar15 = piVar15 + 0xc;
          *(undefined4 **)(*piVar15 + 8) = puVar18;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      iVar8 = iVar8 + 1;
      iVar17 = iVar17 + 4;
    } while (iVar8 < (int)param_3[0x13]);
  }
  fn_82DAF730(puVar18,param_3);
  puVar18[7] = param_3[7] + puVar18[7];
  piVar15 = (int *)(param_1 + 0x28);
  param_3[7] = 0;
  uVar2 = *(ushort *)(param_3 + 8);
  if ((*(byte *)((int)param_3 + 0x26) & 0xc0) == 0) {
    piVar15 = (int *)(param_1 + 0x34);
  }
  if ((int)(uint)uVar2 < piVar15[1] + -1) {
    *(undefined4 *)((uint)uVar2 * 4 + *piVar15) = *(undefined4 *)(piVar15[1] * 4 + *piVar15 + -4);
    *(ushort *)(*(int *)(*piVar15 + (uint)uVar2 * 4) + 0x20) = uVar2;
  }
  piVar15[1] = piVar15[1] + -1;
  bVar1 = *(byte *)((int)puVar18 + 0x25);
  if (((bVar1 & 0xc0) != 0) || (cVar11 = '\0', (*(byte *)((int)param_3 + 0x25) & 0xc0) != 0)) {
    cVar11 = '\x01';
  }
  *(byte *)((int)puVar18 + 0x25) = cVar11 << 6 | bVar1 & 0x3f;
  if (((bVar1 & 0xc) != 0) || (cVar11 = '\0', (*(byte *)((int)param_3 + 0x25) & 0xc) != 0)) {
    cVar11 = '\x01';
  }
  *(byte *)((int)puVar18 + 0x25) = cVar11 << 2 | *(byte *)((int)puVar18 + 0x25) & 0xf3;
  *(byte *)((int)puVar18 + 0x26) = cVar7 << 4 | *(byte *)((int)puVar18 + 0x26) & 0xcf;
  if ((*(short *)((int)param_3 + 0x22) != -1) && (*(short *)((int)puVar18 + 0x22) == -1)) {
    *(short *)((int)puVar18 + 0x22) = (short)*(undefined4 *)(param_1 + 0x44);
    iVar8 = fn_82CE5410();
    if (*(uint *)(param_1 + 0x44) == (*(uint *)(param_1 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),(int *)(param_1 + 0x40),4);
    }
    *(undefined4 **)(*(int *)(param_1 + 0x44) * 4 + *(int *)(param_1 + 0x40)) = puVar18;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  if (*(ushort *)((int)param_3 + 0x22) != 0xffff) {
    *(undefined4 *)((uint)*(ushort *)((int)param_3 + 0x22) * 4 + *(int *)(param_1 + 0x40)) = 0;
    *(undefined2 *)((int)param_3 + 0x22) = 0xffff;
  }
  (**(code **)*param_3)(param_3,1);
  if ((*(byte *)((int)puVar18 + 0x26) & 0xc0) != 0) {
    uVar2 = *(ushort *)(puVar18 + 8);
    if (uVar2 != 0) {
      iVar8 = **(int **)(param_1 + 0x28);
      if (*(int *)(iVar8 + 0x4c) < (int)puVar18[0x13]) {
        *(undefined2 *)(puVar18 + 8) = 0;
        *(ushort *)(iVar8 + 0x20) = uVar2;
        **(undefined4 **)(param_1 + 0x28) = puVar18;
        *(int *)((uint)uVar2 * 4 + *(int *)(param_1 + 0x28)) = iVar8;
      }
    }
  }
  fn_82D80B88(param_1,puVar18);
  lVar16 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
  *(int *)(param_1 + 0x94) = (int)lVar16;
  if ((lVar16 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      fn_82D80C18(param_1);
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
      fn_82D80C30(param_1);
    }
  }
  return;
}

