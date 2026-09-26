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
extern unsigned int *auStack_80;
extern unsigned int fStack_90;
extern unsigned int fStack_a0;
extern unsigned int fStack_b0;
extern unsigned int fStack_c0;
extern int fn_82687270();
extern int fn_8268CC00();
extern int fn_8268CD40();
extern int fn_8268CEC0();
extern int fn_8268CF60();
extern int fn_82693410();
extern int fn_826D7C00();
extern int fn_82759580();
extern int fn_8275ADD0();
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201467C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_8c;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_ac;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


undefined8
fn_8275B490(double param_1,byte *param_2,undefined4 *param_3,int *param_4,undefined8 param_5,
             ulonglong param_6)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  int iVar9;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  undefined4 uVar14;
  int *piVar15;
  float *pfVar16;
  double dVar17;
  double dVar18;
  int iStack_f0;
  int iStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_80 [128];
  
  uVar10 = *(undefined4 *)(*param_4 + 0xc);
  fn_8268CC00(&uStack_e0);
  pbVar13 = param_2 + 8;
  if (*(int *)(param_2 + 8) == 0) {
    iVar9 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar9 = 0;
  }
  if (iVar9 == 0) {
    fn_826D7C00(pbVar13,param_4[8]);
  }
  if ((*param_2 & 0x10) != 0) {
    iVar9 = fn_826D7C00(pbVar13,param_4[8]);
    if (iVar9 == 0) {
      if (*(int *)pbVar13 == 1) {
        return 0;
      }
      iVar3 = param_4[0x12];
      lVar7 = fn_82693410();
      iVar9 = fn_8275ADD0(*(undefined4 *)(param_2 + 4),param_4[7],param_4[2],param_4[3],
                                *param_4,param_4[5],0);
      if (iVar9 != 0) {
        fn_82759580(pbVar13,iVar9);
        fn_82687270(iVar9);
      }
      lVar8 = fn_82693410();
      *(longlong *)(iVar3 + 0x10) = *(longlong *)(iVar3 + 0x10) + (lVar8 - lVar7);
      if (iVar9 == 0) {
        return 0;
      }
    }
    piVar15 = *(int **)(iVar9 + 0xc);
    if (piVar15 == (int *)0x0) {
      return 0;
    }
    uVar10 = (**(code **)(*piVar15 + 0xc))(piVar15,uVar10);
    *param_3 = uVar10;
    pfVar16 = (float *)(param_3 + 1);
    param_3[7] = 1;
    param_3[8] = 1;
    fn_8268CC00(pfVar16);
    fVar5 = lbl_8201467C;
    bVar2 = *param_2;
    fVar1 = (float)param_3[3] * lbl_8201467C;
    param_3[3] = fVar1;
    if (bVar2 == 0x10) {
      param_3[2] = (float)param_3[2] * fVar5;
      fVar6 = lbl_82002C5C;
      *pfVar16 = *pfVar16 * fVar5;
      param_3[4] = (float)param_3[4] * fVar5;
      param_3[6] = (float)param_3[6] * fVar5;
      param_3[5] = (float)param_3[5] * fVar5;
      param_3[3] = fVar1 + fVar6;
    }
    else {
      *pfVar16 = *pfVar16 * fVar5;
      param_3[2] = (float)param_3[2] * fVar5;
      param_3[4] = (float)param_3[4] * fVar5;
      param_3[5] = (float)param_3[5] * fVar5;
      fVar5 = (float)param_3[6] * fVar5;
      param_3[6] = fVar5;
      fVar1 = lbl_82002C5C;
      param_3[3] = (float)param_3[3] + lbl_82002C5C;
      param_3[6] = fVar5 + fVar1;
    }
    uStack_e0 = *(undefined4 *)(param_2 + 0x10);
    uStack_dc = *(undefined4 *)(param_2 + 0x14);
    uStack_d8 = *(undefined4 *)(param_2 + 0x18);
    uStack_d4 = *(undefined4 *)(param_2 + 0x1c);
    uStack_d0 = *(undefined4 *)(param_2 + 0x20);
    uStack_cc = *(undefined4 *)(param_2 + 0x24);
    if ((param_6 & 0xffffffff) != 0) {
      fn_8268CF60(&uStack_e0,param_6);
    }
    fn_8268CC00(auStack_80);
    fn_8268CD40(auStack_80,&uStack_e0);
    fn_8268CEC0(pfVar16,auStack_80);
    fStack_c0 = (float)param_1;
    fStack_b0 = (float)param_1;
    uStack_bc = lbl_821AAD20;
    uStack_b8 = lbl_821AAD20;
    uStack_b4 = lbl_821AAD20;
    uStack_ac = lbl_821AAD20;
    fn_8268CEC0(pfVar16,&fStack_c0);
    return 1;
  }
  if ((*param_2 & 0x40) == 0) {
    return 0;
  }
  iVar9 = fn_826D7C00(pbVar13,param_4[8]);
  if (iVar9 == 0) {
    piVar15 = (int *)0x0;
  }
  else {
    piVar15 = *(int **)(iVar9 + 0xc);
  }
  if (piVar15 == (int *)0x0) {
    return 0;
  }
  lVar7 = (**(code **)(*piVar15 + 0xc))(piVar15,uVar10);
  if (lVar7 == 0) {
    return 0;
  }
  bVar2 = *param_2;
  uVar12 = 1;
  uVar14 = 0;
  uVar10 = 1;
  if (bVar2 != 0x40) {
    if (bVar2 == 0x41) {
      uVar14 = 1;
      goto LAB_8275b7a4;
    }
    if (bVar2 != 0x42) {
      if (bVar2 == 0x43) {
        uVar14 = 1;
        uVar12 = 0;
      }
      goto LAB_8275b7a4;
    }
    uVar10 = 0;
  }
  uVar12 = uVar10;
  uVar14 = 0;
LAB_8275b7a4:
  uStack_e0 = *(undefined4 *)(param_2 + 0x10);
  uStack_dc = *(undefined4 *)(param_2 + 0x14);
  uStack_d8 = *(undefined4 *)(param_2 + 0x18);
  uStack_d4 = *(undefined4 *)(param_2 + 0x1c);
  uStack_d0 = *(undefined4 *)(param_2 + 0x20);
  uStack_cc = *(undefined4 *)(param_2 + 0x24);
  if ((param_6 & 0xffffffff) != 0) {
    fn_8268CF60(&uStack_e0,param_6);
  }
  (**(code **)(*piVar15 + 0x14))(&iStack_f0,piVar15);
  *param_3 = (int)lVar7;
  fn_8268CD40(param_3 + 1,&uStack_e0);
  fStack_a0 = (float)param_1;
  fStack_90 = (float)param_1;
  uStack_9c = lbl_821AAD20;
  uStack_98 = lbl_821AAD20;
  uStack_94 = lbl_821AAD20;
  uStack_8c = lbl_821AAD20;
  fn_8268CEC0(param_3 + 1,&fStack_a0);
  pcVar4 = *(code **)(*piVar15 + 8);
  param_3[3] = (float)(longlong)iStack_f0 + (float)param_3[3];
  param_3[6] = (float)(longlong)iStack_ec + (float)param_3[6];
  uVar11 = (*pcVar4)(piVar15);
  dVar18 = (double)lbl_82002AE0;
  dVar17 = (double)(float)(dVar18 / (double)uVar11);
  uVar11 = (**(code **)(*piVar15 + 4))(piVar15);
  param_3[6] = (float)(dVar17 * (double)(float)param_3[6]);
  param_3[4] = (float)(dVar17 * (double)(float)param_3[4]);
  param_3[5] = (float)(dVar17 * (double)(float)param_3[5]);
  fVar1 = (float)(dVar18 / (double)uVar11);
  param_3[1] = (float)param_3[1] * fVar1;
  param_3[2] = fVar1 * (float)param_3[2];
  param_3[3] = fVar1 * (float)param_3[3];
  param_3[7] = uVar14;
  param_3[8] = uVar12;
  return 1;
}

