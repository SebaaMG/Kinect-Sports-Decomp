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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int fStack_58;
extern unsigned int fStack_68;
extern int fn_825C89B0();
extern int fn_825CADE0();
extern int fn_825CAF68();
extern int fn_825CB068();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_82192604;
extern unsigned int lbl_821954D4;
extern unsigned int lbl_82195690;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_70;
extern V16 vectorSubtractFloatingPoint();


void fn_825C86C0(undefined8 param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  int in_r0;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  double extraout_f1;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uStack_70;
  float fStack_68;
  float afStack_60 [2];
  float fStack_58;
  
  iVar7 = fn_82F6A540();
  fVar1 = lbl_8218EC10;
  iVar8 = *(int *)(iVar7 + 0x54);
  puVar4 = (undefined4 *)(iVar8 + 0x30U & 0xfffffff0);
  uVar17 = puVar4[1];
  uVar18 = puVar4[2];
  uVar19 = puVar4[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  puVar5 = (undefined4 *)(iVar8 + 0x50U & 0xfffffff0);
  uVar20 = *puVar5;
  uVar21 = puVar5[1];
  uVar22 = puVar5[2];
  uVar23 = puVar5[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs44);
  dVar14 = (double)lbl_821CC160;
  puVar5 = (undefined4 *)((int)&uStack_70 + in_r0 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar17;
  puVar5[2] = uVar18;
  puVar5[3] = uVar19;
  puVar4 = (undefined4 *)((int)afStack_60 + in_r0 & 0xfffffff0);
  *puVar4 = uVar20;
  puVar4[1] = uVar21;
  puVar4[2] = uVar22;
  puVar4[3] = uVar23;
  fVar6 = fStack_58 * (((U64)(uStack_70) >> 0) & 0xFFFFFFFF) - fStack_68 * afStack_60[0];
  dVar12 = dVar14;
  dVar15 = dVar14;
  if (fVar1 < ABS(fVar6)) {
    fVar1 = (float)(extraout_f1 - (double)*(float *)(iVar8 + 0x30));
    fVar2 = (float)(param_3 - (double)*(float *)(iVar8 + 0x38));
    dVar12 = (double)((fVar2 * (((U64)(uStack_70) >> 0) & 0xFFFFFFFF) - fVar1 * fStack_68) / fVar6);
    dVar15 = (double)((fVar1 * fStack_58 - fVar2 * afStack_60[0]) / fVar6);
  }
  if ((((dVar14 <= dVar15) && (dVar15 <= (double)lbl_821CA460)) && (dVar14 <= dVar12)) &&
     (dVar12 <= (double)lbl_821CA460)) {
    iVar8 = *(int *)(iVar7 + 0x54);
    dVar14 = extraout_f1;
    if ((*(int *)(iVar8 + 0x14c) != 0) && (*(int *)(iVar7 + 8) != 0)) {
      iVar3 = *(int *)(iVar8 + 0x138);
      iVar9 = (int)((float)(extraout_f1 - (double)*(float *)(iVar3 + 0x60)) /
                   *(float *)(iVar3 + 0x80));
      iVar3 = (int)((float)(param_3 - (double)*(float *)(iVar3 + 0x68)) / *(float *)(iVar3 + 0x88));
      uStack_70 = (longlong)iVar3;
      if ((((-1 < iVar9) && ((iVar9 < *(int *)(*(int *)(iVar8 + 0x138) + 0x90) && (-1 < iVar3)))) &&
          (iVar3 < *(int *)(*(int *)(iVar8 + 0x138) + 0x94))) &&
         (iVar8 = *(int *)(*(int *)(iVar7 + 0x54) + 0x138),
         iVar9 = *(int *)(iVar8 + 0x94) * iVar3 + iVar9,
         *(int *)(*(int *)(iVar8 + 0x98) + iVar9 * 8) != 0)) {
        uStack_70 = CONCAT44((float)param_2,iVar3);
        iVar8 = fn_825C89B0(extraout_f1,param_3,dVar15,dVar12,iVar7,iVar9,&uStack_70);
        if (iVar8 != 0) {
          dVar12 = (double)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
          goto LAB_825c8990;
        }
      }
    }
    if (((*(int *)(*(int *)(iVar7 + 0x54) + 0x134) != 0) && (*(int *)(iVar7 + 4) != 0)) &&
       (iVar8 = fn_825CAF68(dVar15,dVar12,iVar7), iVar8 == 0)) {
      dVar16 = (double)*(float *)(*(int *)(iVar7 + 0x54) + 0x34);
      if (*(int *)(iVar7 + 0x2c) != 0) {
        dVar13 = (double)fn_825CADE0(dVar14,param_3,iVar7);
        dVar16 = (double)(float)(dVar13 + dVar16);
      }
      pfVar10 = (float *)(*(int *)(iVar7 + 0x54) + 0x15c);
      pfVar11 = (float *)(*(int *)(iVar7 + 0x54) + 0x158);
      if (*pfVar11 < *pfVar10) {
        pfVar11 = pfVar10;
      }
      if (((*(int *)(*(int *)(iVar7 + 0x54) + 0x10) != 0) &&
          ((float)(param_2 - dVar16) <= *pfVar11 + lbl_82192604)) &&
         (lbl_821954D4 < (float)(param_2 - dVar16))) {
        dVar12 = (double)fn_825CB068(dVar14,param_3,dVar15,dVar12,iVar7);
        dVar16 = (double)(float)(dVar12 + dVar16);
      }
      dVar12 = (double)(float)((double)*(float *)(iVar7 + 0x14) + dVar16);
      goto LAB_825c8990;
    }
  }
  dVar12 = (double)lbl_82195690;
LAB_825c8990:
  fn_82F6A58C(dVar12);
  return;
}

