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
extern int fn_82A70570();
extern int fn_82A705D8();
extern int fn_82C374B0();
extern unsigned int lbl_8208EE38;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82C37620(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  uVar8 = 0;
  sVar1 = *(short *)(**(short **)(param_1 + 0x248) * 0x6f0 + *(int *)(param_1 + 0x140) + 0x76);
  uVar15 = (ulonglong)sVar1;
  if (*(int *)(param_1 + 0x1cc) == 0) {
    iVar2 = *(int *)(param_3 + 0x38);
    uVar3 = *(uint *)(param_3 + 0x90);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x148);
    uVar3 = *(uint *)(param_1 + 0x148);
  }
  uVar14 = (ulonglong)uVar3;
  if (*(int *)(param_1 + 0xcc) == 0) {
    if (((*(int *)(param_1 + 0x8c) == 1) && (*(int *)(param_1 + 0x94) != 1)) &&
       (*(int *)(param_1 + 0x9c) != 1)) {
      if (*(int *)(param_2 + 0x14) != 0) {
        uVar8 = fn_82C374B0(param_2,param_3,iVar2,iVar2,uVar15);
LAB_82c37720:
        if ((int)uVar8 < 0) {
          return uVar8;
        }
        uVar9 = 0;
        if (3 < sVar1) {
          piVar11 = (int *)(iVar2 + -4);
          lVar12 = uVar14 + 4;
          do {
            uVar9 = uVar9 + 4;
            pfVar4 = (float *)lVar12;
            pfVar4[-1] = (float)(longlong)piVar11[1];
            *pfVar4 = (float)(longlong)*(int *)((iVar2 - uVar3) + (int)pfVar4);
            pfVar4[1] = (float)(longlong)piVar11[3];
            piVar11 = piVar11 + 4;
            pfVar4[2] = (float)(longlong)*piVar11;
            lVar12 = lVar12 + 0x10;
          } while ((int)uVar9 < sVar1 + -3);
        }
        if ((int)uVar9 < (int)sVar1) {
          lVar12 = uVar15 - uVar9;
          lVar13 = (uVar9 & 0x3fffffff) * 4 + uVar14;
          do {
            *(float *)lVar13 = (float)(longlong)*(int *)((int)(float *)lVar13 + (iVar2 - uVar3));
            lVar13 = lVar13 + 4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        goto LAB_82c37804;
      }
    }
    else if (*(int *)(param_1 + 0xc0) != 0) {
      if (*(int *)(param_1 + 0x78) == 1) {
        uVar8 = fn_82A70570();
      }
      else {
        uVar8 = fn_82A705D8(param_1,param_3,iVar2,iVar2,uVar15);
      }
      goto LAB_82c37720;
    }
    uVar8 = 0xffffffff80040002;
  }
  else {
LAB_82c37804:
    fVar7 = lbl_8208EE38;
    if ((*(int *)(param_1 + 0x1c0) == 1) && (uVar9 = uVar15 - 1, -1 < (int)uVar9)) {
      if (3 < sVar1) {
        uVar16 = (uVar15 & 0xffffffff) >> 2;
        lVar13 = (uVar9 & 0x1fffffff) * 8 + uVar14 + 0xc;
        lVar12 = (uVar15 & 0x3fffffff) * 4 + uVar14;
        uVar9 = uVar9 - (uVar15 & 0xfffffffc);
        do {
          iVar2 = (int)lVar12;
          fVar5 = *(float *)(iVar2 + -4) * fVar7;
          iVar6 = (int)lVar13;
          *(float *)(iVar6 + -8) = fVar5;
          *(float *)(iVar6 + -0xc) = fVar5;
          fVar5 = *(float *)(iVar2 + -8) * fVar7;
          *(float *)(iVar6 + -0x10) = fVar5;
          *(float *)(iVar6 + -0x14) = fVar5;
          fVar5 = *(float *)(iVar2 + -0xc) * fVar7;
          *(float *)(iVar6 + -0x1c) = fVar5;
          *(float *)(iVar6 + -0x18) = fVar5;
          lVar12 = lVar12 + -0x10;
          fVar5 = *(float *)lVar12 * fVar7;
          *(float *)(iVar6 + -0x24) = fVar5;
          lVar13 = lVar13 + -0x20;
          *(float *)lVar13 = fVar5;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if (-1 < (int)uVar9) {
        lVar10 = uVar9 + 1;
        lVar13 = (uVar9 & 0x1fffffff) * 8 + uVar14 + 0xc;
        lVar12 = (uVar9 + 1 & 0x3fffffff) * 4 + uVar14;
        do {
          lVar12 = lVar12 + -4;
          fVar5 = *(float *)lVar12 * fVar7;
          *(float *)((int)lVar13 + -0xc) = fVar5;
          lVar13 = lVar13 + -8;
          *(float *)lVar13 = fVar5;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  return uVar8;
}

