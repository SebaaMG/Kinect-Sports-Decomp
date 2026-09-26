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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_83082E08();
extern int fn_8308B0C0();
extern int fn_83090A18();
extern int fn_83090D80();
extern int fn_83095A68();
extern int fn_83095B60();
extern int fn_83095C40();
extern unsigned int iStack_dc;
extern unsigned int uStack00000024;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d4;
extern unsigned int uStack_e0;


void fn_83094F10(int param_1,int *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  short sVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  ushort *puVar18;
  ushort *puVar19;
  int iVar20;
  ushort *puVar22;
  undefined4 *puVar23;
  longlong lVar21;
  ulonglong uVar24;
  undefined4 *puVar25;
  uint uVar26;
  uint uVar27;
  int *piVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined2 *puVar31;
  int iVar32;
  int iVar33;
  ulonglong uVar34;
  uint uStack00000024;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined4 *puStack_d8;
  uint uStack_d4;
  int *apiStack_d0 [4];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  uint uStack_ac;
  uint uStack_a8;
  
  uVar24 = 0;
  uVar1 = param_2[1];
  uVar29 = (ulonglong)uVar1;
  uVar2 = *(uint *)(param_1 + 0xa4);
  uStack_e0 = 0;
  uStack00000024 = (uint)param_3;
  piVar6 = (int *)fn_82CE5410();
  puVar25 = (undefined4 *)*piVar6;
  piVar28 = (int *)(param_1 + 0xa0);
  *piVar6 = (uVar1 * 0x10 + 0x8f & 0xffffff80) + (int)puVar25;
  iVar16 = **(int **)*param_2 * 0x10 + *(int *)(param_1 + 0xa0);
  uStack_c0 = *(uint *)(**(int **)*param_2 * 0x10 + *(int *)(param_1 + 0xa0));
  uStack_bc = *(uint *)(iVar16 + 4);
  uStack_b8 = *(uint *)(iVar16 + 8);
  uStack_b4 = *(undefined4 *)(iVar16 + 0xc);
  puStack_d8 = puVar25;
  piVar7 = (int *)fn_82CE5410();
  puVar19 = (ushort *)*piVar7;
  uVar26 = uStack_b8 & 0xffff;
  uVar27 = uStack_b8 >> 0x10;
  piVar6 = (int *)(uStack_bc >> 0x10);
  uVar4 = uVar1 * 4 + 0x8f & 0xffffff80;
  *piVar7 = uVar4 + (int)puVar19;
  if (0 < (int)uVar1) {
    iVar16 = 0;
    uVar34 = uVar29;
    puVar18 = puVar19;
    do {
      puVar22 = (ushort *)(**(int **)(*param_2 + iVar16) * 0x10 + *piVar28);
      puVar18[1] = (ushort)**(int **)(*param_2 + iVar16);
      *puVar18 = puVar22[4];
      if (puVar22[4] <= uVar27) {
        uVar27 = (uint)puVar22[4];
      }
      if (*puVar22 <= (((U64)(uStack_c0) >> 0) & 0xFFFF)) {
        uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFF) << 0))) | ((((U64)(*puVar22)) & ((U64)0xFFFF)) << 0));
      }
      if (puVar22[1] <= (((U64)(uStack_c0) >> 16) & 0xFFFF)) {
        uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFF) << 16))) | ((((U64)(puVar22[1])) & ((U64)0xFFFF)) << 16));
      }
      if (uVar26 <= puVar22[5]) {
        uVar26 = (uint)puVar22[5];
      }
      piVar7 = (int *)(uint)puVar22[2];
      if (piVar6 <= piVar7) {
        piVar6 = piVar7;
      }
      if ((((U64)(uStack_bc) >> 16) & 0xFFFF) <= puVar22[3]) {
        uStack_bc = ((((U64)(uStack_bc)) & (~(((U64)0xFFFF) << 16))) | ((((U64)(puVar22[3])) & ((U64)0xFFFF)) << 16));
      }
      iVar16 = iVar16 + 4;
      puVar18 = puVar18 + 2;
      uVar34 = uVar34 - 1;
    } while (uVar34 != 0);
    uStack_bc = CONCAT22((short)piVar6,(((U64)(uStack_bc) >> 16) & 0xFFFF));
  }
  piVar7 = (int *)fn_82CE5410(piVar7);
  iVar16 = *piVar7;
  *piVar7 = uVar4 + iVar16;
  puVar19[uVar1 * 2] = 0xffff;
  puVar19[uVar1 * 2 + 2] = 0xffff;
  *(undefined2 *)((int)((uVar29 + 2 & 0xffffffff) << 2) + (int)puVar19) = 0xffff;
  fn_83082E08(puVar19,uVar29 + 3 & 0xfffffffc,iVar16);
  if (0 < (int)uVar1) {
    puVar18 = puVar19 + -1;
    uVar34 = uVar29;
    puVar8 = puVar25;
    do {
      puVar18 = puVar18 + 2;
      uVar34 = uVar34 - 1;
      puVar23 = (undefined4 *)((uint)*puVar18 * 0x10 + *piVar28);
      *puVar8 = *puVar23;
      puVar8[1] = puVar23[1];
      puVar8[2] = puVar23[2];
      puVar8[3] = puVar23[3];
      puVar8 = puVar8 + 4;
      *(undefined4 *)puVar23[3] = 0;
      puVar23[3] = &uStack_e0;
    } while (uVar34 != 0);
  }
  *(undefined2 *)(puVar25 + uVar1 * 4 + 2) = 0xffff;
  piVar7 = (int *)fn_82CE5410();
  *piVar7 = iVar16;
  puVar8 = (undefined4 *)fn_82CE5410();
  *puVar8 = puVar19;
  uVar34 = *(uint *)(param_1 + 0xd0) + uVar29;
  uStack_ac = 0;
  piVar7 = (int *)fn_82CE5410();
  iVar16 = *piVar7;
  uStack_a8 = (uint)uVar34 | 0x80000000;
  *piVar7 = ((int)((uVar34 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + iVar16;
  iStack_dc = iVar16;
  piVar9 = (int *)fn_82CE5410();
  piVar7 = (int *)*piVar9;
  uVar30 = 0;
  *piVar9 = (uVar2 * 4 + 0x7f & 0xffffff80) + (int)piVar7;
  apiStack_d0[0] = piVar7;
  piVar9 = (int *)fn_82CE5410();
  iVar13 = *piVar9;
  uVar34 = (ulonglong)uVar2 - 1;
  iVar11 = 1;
  *piVar9 = ((int)((uVar2 - uVar29 & 0xffffffff) << 2) + 0x8fU & 0xffffff80) + iVar13;
  *piVar7 = 0;
  if (0 < (int)uVar34) {
    lVar15 = (uVar34 & 0xfffffff) << 4;
    iVar32 = 0x10;
    puVar31 = (undefined2 *)(iVar13 + -2);
    piVar10 = (int *)(iVar16 + -4);
    piVar9 = piVar7 + uVar2;
    piVar3 = piVar7;
    do {
      piVar14 = piVar3 + 1;
      puVar8 = (undefined4 *)(*piVar28 + (int)lVar15);
      if ((undefined4 *)puVar8[3] == &uStack_e0) {
        piVar9[-1] = -1;
        uVar34 = uVar34 - 1;
        lVar15 = lVar15 + -0x10;
        piVar9 = piVar9 + -1;
        iVar11 = iVar11 + -1;
        iVar32 = iVar32 + -0x10;
        piVar14 = piVar3;
      }
      else {
        puVar19 = (ushort *)(*piVar28 + iVar32);
        if (*(undefined4 **)(puVar19 + 6) == &uStack_e0) {
          uVar34 = uVar34 - 1;
          lVar15 = lVar15 + -0x10;
          uStack_ac = uStack_ac + 1;
          *(undefined4 *)puVar19 = *puVar8;
          *(undefined4 *)(puVar19 + 2) = puVar8[1];
          *(undefined4 *)(puVar19 + 4) = puVar8[2];
          *(undefined4 *)(puVar19 + 6) = puVar8[3];
          piVar9 = piVar9 + -1;
          *piVar9 = iVar11;
          *piVar14 = -1;
          piVar10 = piVar10 + 1;
          *piVar10 = iVar11;
          piVar3 = *(int **)(puVar19 + 6);
          if (((uint)piVar3 & 1) != 0) {
            *(short *)(((uint)piVar3 & 0xfffffffe) + *(int *)(param_1 + 0xd8)) = (short)iVar11;
            goto LAB_8309536c;
          }
          *piVar3 = iVar11;
        }
        else {
          *piVar14 = iVar11;
        }
        if (((*(int *)(puVar19 + 2) - uStack_c0 | uStack_bc - *(int *)puVar19) & 0x80008000) == 0) {
          uStack_d4 = uStack_c0 >> 0x10;
          puVar25 = puStack_d8;
          iVar16 = iStack_dc;
          if (((puVar19[5] - uVar27 | puVar19[2] - uStack_d4 | (int)piVar6 - (uint)*puVar19 |
               uVar26 - puVar19[4]) & 0x8000) == 0) {
            puVar31[1] = puVar19[4];
            uVar30 = uVar30 + 1;
            puVar31 = puVar31 + 2;
            *puVar31 = (short)iVar11;
          }
        }
      }
LAB_8309536c:
      iVar11 = iVar11 + 1;
      iVar32 = iVar32 + 0x10;
      piVar3 = piVar14;
    } while (iVar11 <= (int)uVar34);
    uVar24 = (ulonglong)uStack_ac;
    param_3 = (ulonglong)uStack00000024;
  }
  iVar11 = fn_82CE5410();
  iVar32 = (int)(uVar34 + 1);
  if ((int)(*(uint *)(param_1 + 0xa8) & 0x3fffffff) < iVar32) {
    lVar15 = ((ulonglong)*(uint *)(param_1 + 0xa8) & 0x3fffffff) << 1;
    if ((int)lVar15 <= iVar32) {
      lVar15 = uVar34 + 1;
    }
    fn_82CE6310(*(undefined4 *)(iVar11 + 0x10),piVar28,lVar15,0x10);
  }
  *(int *)(param_1 + 0xa4) = iVar32;
  piVar6 = (int *)fn_82CE5410();
  puVar8 = (undefined4 *)*piVar6;
  iVar32 = (int)((uVar30 & 0xfffffff) << 4);
  *piVar6 = (iVar32 + 0x8fU & 0xffffff80) + (int)puVar8;
  piVar6 = (int *)fn_82CE5410();
  iVar11 = *piVar6;
  iVar12 = (int)((uVar30 & 0x3fffffff) << 2);
  *piVar6 = (iVar12 + 0x8fU & 0xffffff80) + iVar11;
  *(undefined2 *)(iVar12 + iVar13) = 0xffff;
  *(undefined2 *)(iVar12 + iVar13 + 4) = 0xffff;
  *(undefined2 *)((int)((uVar30 + 2 & 0xffffffff) << 2) + iVar13) = 0xffff;
  fn_83082E08(iVar13,uVar30 + 3 & 0xfffffffc,iVar11);
  if (0 < (int)uVar30) {
    puVar19 = (ushort *)(iVar13 + -2);
    uVar34 = uVar30;
    puVar23 = puVar8;
    do {
      puVar19 = puVar19 + 2;
      uVar34 = uVar34 - 1;
      iVar12 = (uint)*puVar19 * 0x10 + *piVar28;
      *puVar23 = *(undefined4 *)((uint)*puVar19 * 0x10 + *piVar28);
      puVar23[1] = *(undefined4 *)(iVar12 + 4);
      puVar23[2] = *(undefined4 *)(iVar12 + 8);
      puVar23[3] = *(undefined4 *)(iVar12 + 0xc);
      puVar23 = puVar23 + 4;
    } while (uVar34 != 0);
  }
  *(undefined2 *)((int)puVar8 + iVar32 + 8) = 0xffff;
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = iVar11;
  fn_83090D80(param_1,puVar25,uVar29,param_3);
  fn_83090A18(param_1,puVar25,uVar29,puVar8,uVar30,1,param_3);
  fn_83095A68(param_1 + 0xac,*piVar28,apiStack_d0);
  fn_83095B60(param_1 + 0xb8,*piVar28,apiStack_d0);
  fn_83095C40(param_1 + 0xc4,*piVar28,apiStack_d0);
  if (*(int *)(param_1 + 0xd0) != 0) {
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0xd0)) {
      iVar32 = 0;
      do {
        iVar20 = iVar32 + *(int *)(param_1 + 0xd8);
        lVar15 = 0;
        iVar12 = 0;
        iVar33 = (uint)*(ushort *)(iVar32 + *(int *)(param_1 + 0xd8)) * 0x10 + *piVar28;
        sVar5 = (short)((uVar1 & 0x7fff) << 1);
        *(short *)(iVar33 + 4) = *(short *)(iVar33 + 4) - sVar5;
        *(short *)(iVar33 + 6) = *(short *)(iVar33 + 6) - sVar5;
        if (0 < *(int *)(iVar20 + 8)) {
          iVar33 = 0;
          iVar17 = 0;
          do {
            if (-1 < piVar7[*(ushort *)(*(int *)(iVar20 + 4) + iVar17)]) {
              *(short *)(*(int *)(iVar20 + 4) + iVar33) =
                   (short)piVar7[*(ushort *)(*(int *)(iVar20 + 4) + iVar17)];
              lVar15 = lVar15 + 1;
              iVar33 = iVar33 + 2;
            }
            iVar12 = iVar12 + 1;
            iVar17 = iVar17 + 2;
          } while (iVar12 < *(int *)(iVar20 + 8));
        }
        iVar12 = fn_82CE5410();
        iVar33 = (int)lVar15;
        if ((int)(*(uint *)(iVar20 + 0xc) & 0x3fffffff) < iVar33) {
          lVar21 = ((ulonglong)*(uint *)(iVar20 + 0xc) & 0x3fffffff) << 1;
          if ((int)lVar21 <= iVar33) {
            lVar21 = lVar15;
          }
          fn_82CE6310(*(undefined4 *)(iVar12 + 0x10),iVar20 + 4,lVar21,2);
        }
        iVar11 = iVar11 + 1;
        *(int *)(iVar20 + 8) = iVar33;
        iVar32 = iVar32 + 0x10;
      } while (iVar11 < *(int *)(param_1 + 0xd0));
    }
  }
  if (0 < (int)uVar24) {
    puVar23 = (undefined4 *)(iVar16 + -4);
    do {
      puVar23 = puVar23 + 1;
      fn_8308B0C0(param_1,*puVar23);
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = (int)puVar8;
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = iVar13;
  puVar8 = (undefined4 *)fn_82CE5410();
  *puVar8 = piVar7;
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = iVar16;
  iVar13 = fn_82CE5410();
  if ((uStack_a8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar13 + 0x10) + 0x10))
              (*(int **)(iVar13 + 0x10),iVar16,uStack_a8 & 0x3fffffff,4);
  }
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = (int)puVar25;
  return;
}

