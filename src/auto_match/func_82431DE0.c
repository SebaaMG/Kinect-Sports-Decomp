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
#define NAN(x) ((x) != (x))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int *fStack_78;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_82359558();
extern int fn_82430F70();
extern int fn_82F65018();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821929B0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C7AF0;
extern unsigned int lbl_831C7AF4;
extern unsigned int lbl_831D3500;
extern unsigned int lbl_831D3504;
extern unsigned int lbl_831D3508;
extern unsigned int lbl_831E4D50;
extern V16 vectorSubtractFloatingPoint();


void fn_82431DE0(undefined8 param_1,float *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 uVar5;
  int in_r0;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 in_register_000104d0;
  undefined4 uVar27;
  undefined4 in_register_000104d4;
  undefined4 uVar28;
  undefined4 in_register_000104d8;
  undefined4 uVar29;
  undefined4 in_vr77;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fStack_a0;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_80 [2];
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  
  iVar6 = fn_82F6A548();
  fStack_a0 = lbl_821CA1A0;
  uVar23 = *(undefined4 *)(iVar6 + 0x10);
  uVar24 = *(undefined4 *)(iVar6 + 0x240);
  puVar2 = (undefined4 *)((int)&fStack_90 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  uVar5 = lbl_821CA1A8;
  fVar16 = lbl_821CA1A4;
  fStack_9c = lbl_821CA1A4;
  uVar30 = in_vr77;
  uVar29 = in_register_000104d8;
  uVar28 = in_register_000104d4;
  uVar27 = in_register_000104d0;
  iVar7 = fn_82359558(uVar24,uVar23);
  iVar8 = *(int *)(iVar6 + 0x244);
  uVar9 = 0;
  puVar2 = (undefined4 *)(*(int *)(iVar7 + 0x14) + 0x50U & 0xfffffff0);
  uVar23 = *puVar2;
  uVar24 = puVar2[1];
  uVar25 = puVar2[2];
  uVar26 = puVar2[3];
  dVar11 = (double)lbl_821CA460;
  if ((*(int *)(iVar8 + 0x38) != 0) &&
     (iVar7 = **(int **)(*(int *)(iVar8 + 0x38) + 4), in_vr77 = uVar30,
     in_register_000104d8 = uVar29, in_register_000104d4 = uVar28, in_register_000104d0 = uVar27,
     iVar7 != 0)) {
    puVar2 = (undefined4 *)(iVar7 + 0x50U & 0xfffffff0);
    in_vr77 = puVar2[3];
    in_register_000104d8 = puVar2[2];
    in_register_000104d4 = puVar2[1];
    in_register_000104d0 = *puVar2;
  }
  if (param_2[0x15] != 0.0) {
    puVar2 = (undefined4 *)(iVar8 + 0xb0U & 0xfffffff0);
    uVar30 = puVar2[1];
    uVar29 = puVar2[2];
    uVar28 = puVar2[3];
    puVar3 = (undefined4 *)((int)&fStack_90 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar30;
    puVar3[2] = uVar29;
    puVar3[3] = uVar28;
  }
  if (param_2[0x12] != 0.0) {
    puVar2 = (undefined4 *)((int)&fStack_90 + in_r0 & 0xfffffff0);
    *puVar2 = uVar23;
    puVar2[1] = uVar24;
    puVar2[2] = uVar25;
    puVar2[3] = uVar26;
  }
  if (param_2[0x13] != 0.0) {
    if ((*(int *)(iVar6 + 0x234) < 0) && (param_2[0x14] != 0.0)) {
      puVar2 = (undefined4 *)(iVar8 + 0xc0U & 0xfffffff0);
      in_register_000104d0 = *puVar2;
      in_register_000104d4 = puVar2[1];
      in_register_000104d8 = puVar2[2];
      in_vr77 = puVar2[3];
    }
    puVar2 = (undefined4 *)((int)&fStack_90 + in_r0 & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
  }
  if (param_2[0x18] != 0.0) {
    *(undefined4 *)(iVar8 + 4) = 1;
  }
  fVar32 = lbl_831C7AF4;
  fVar31 = lbl_821CC160;
  if (param_2[0xe] == 0.0) {
    fStack_90 = *param_2 + fStack_90;
  }
  else {
    fStack_90 = *param_2;
  }
  dVar10 = dVar11;
  if (param_2[0xf] == 0.0) {
    dVar13 = (double)(param_2[1] + fStack_8c);
  }
  else if (param_2[0x13] == 0.0) {
    dVar13 = (double)param_2[1];
  }
  else {
    fVar33 = *(float *)(*(int *)(iVar6 + 0x244) + 0xd4);
    fVar34 = fVar33 - lbl_831D3500;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar34 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar34) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar33 = lbl_831D3500;
    }
    dVar13 = (double)((float)((double)(fVar33 - lbl_831D3500) * (double)lbl_831D3508 +
                             (double)param_2[1]) + fVar33);
    dVar10 = (double)(float)((double)(fVar33 - lbl_831D3500) * (double)lbl_831D3504 + dVar11);
  }
  fStack_8c = (float)dVar13;
  if (param_2[0x10] == 0.0) {
    fStack_88 = param_2[2] + fStack_88;
  }
  else {
    fStack_88 = param_2[2];
  }
  if (param_2[0x19] != 0.0) {
    puVar2 = (undefined4 *)(*(int *)(iVar6 + 0x244) + 0xc0U & 0xfffffff0);
    uVar27 = *puVar2;
    uVar20 = puVar2[1];
    uVar21 = puVar2[2];
    uVar22 = puVar2[3];
    puVar2 = (undefined4 *)((uint)(&lbl_831E4D50 + in_r0) & 0xfffffff0);
    uVar30 = puVar2[1];
    uVar29 = puVar2[2];
    uVar28 = puVar2[3];
    vectorSubtractFloatingPoint(in_vs44,in_vs32);
    vectorSubtractFloatingPoint(in_vs44,in_vs43);
    dVar12 = (double)lbl_831C7AF0;
    puVar3 = (undefined4 *)((int)afStack_80 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar30;
    puVar3[2] = uVar29;
    puVar3[3] = uVar28;
    puVar2 = (undefined4 *)((int)&fStack_70 + in_r0 & 0xfffffff0);
    *puVar2 = uVar27;
    puVar2[1] = uVar20;
    puVar2[2] = uVar21;
    puVar2[3] = uVar22;
    dVar10 = (double)(-((fStack_70 / afStack_80[0]) * fStack_78) + fVar32);
    fStack_88 = (float)(dVar10 + (double)fStack_88);
    dVar10 = (double)(float)(ABS(dVar10) * dVar12 + dVar11);
  }
  piVar1 = *(int **)(iVar6 + 0x244);
  if (*piVar1 == 0) {
    if (param_2[0x11] != 0.0) {
      puVar2 = (undefined4 *)(iVar6 + 0x1b0U & 0xfffffff0);
      uVar30 = puVar2[1];
      uVar29 = puVar2[2];
      uVar28 = puVar2[3];
      puVar3 = (undefined4 *)((int)&fStack_70 + in_r0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar30;
      puVar3[2] = uVar29;
      puVar3[3] = uVar28;
      fVar32 = (float)(dVar13 - (double)fStack_6c);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar32 < fVar31) << 2) | (uint)(NAN(fVar32) || NAN(fVar31)) << 2)
                    ) < 0.0) {
        dVar13 = (double)fStack_6c;
      }
      fStack_8c = (float)dVar13;
    }
    if ((float)piVar1[5] <= param_2[7]) {
      if (param_2[6] < (float)piVar1[5]) {
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 2;
    }
  }
  pfVar4 = (float *)((int)&fStack_90 + in_r0 & 0xfffffff0);
  fVar31 = *pfVar4;
  fVar32 = pfVar4[1];
  fVar33 = pfVar4[2];
  fVar34 = pfVar4[3];
  if ((param_2[0x16] == 0.0) && (param_2[0x17] == 0.0)) {
    dVar15 = (double)fVar16;
  }
  else {
    if ((*(int *)(iVar6 + 0x234) < 0) && (param_2[0x14] != 0.0)) {
      pfVar4 = (float *)((uint)(piVar1 + 0x30) & 0xfffffff0);
      fVar16 = *pfVar4;
      fVar17 = pfVar4[1];
      fVar18 = pfVar4[2];
      fVar19 = pfVar4[3];
    }
    else if ((param_2[0x16] == 0.0) && (-1 < *(int *)(iVar6 + 0x234))) {
      iVar8 = fn_82430F70((double)lbl_821929B0,&fStack_70,iVar6);
      pfVar4 = (float *)(in_r0 + iVar8 & 0xfffffff0);
      fVar16 = *pfVar4;
      fVar17 = pfVar4[1];
      fVar18 = pfVar4[2];
      fVar19 = pfVar4[3];
    }
    else {
      puVar2 = (undefined4 *)((int)&fStack_90 + in_r0 & 0xfffffff0);
      *puVar2 = uVar23;
      puVar2[1] = uVar24;
      puVar2[2] = uVar25;
      puVar2[3] = uVar26;
      fStack_8c = (float)((double)fStack_8c + dVar11);
      pfVar4 = (float *)((int)&fStack_90 + in_r0 & 0xfffffff0);
      fVar16 = *pfVar4;
      fVar17 = pfVar4[1];
      fVar18 = pfVar4[2];
      fVar19 = pfVar4[3];
    }
    pfVar4 = (float *)((int)&fStack_90 + in_r0 & 0xfffffff0);
    *pfVar4 = fVar16 - fVar31;
    pfVar4[1] = fVar17 - fVar32;
    pfVar4[2] = fVar18 - fVar33;
    pfVar4[3] = fVar19 - fVar34;
    dVar12 = (double)fStack_88;
    dVar14 = (double)fStack_90;
    dVar11 = (double)fn_82F65018(-dVar14,-dVar12);
    fStack_9c = (float)dVar11;
    dVar15 = (double)fStack_9c;
    dVar11 = (double)fn_82F65018((double)fStack_8c,
                                  (double)SQRT((float)(dVar12 * dVar12 +
                                                      (double)(float)(dVar14 * dVar14))));
    fStack_a0 = (float)dVar11;
  }
  dVar11 = (double)param_2[3];
  if (uVar9 == 0) {
    fVar17 = param_2[8];
    fVar16 = param_2[9];
  }
  else {
    if (uVar9 == 1) {
      fVar17 = param_2[10];
      fVar16 = param_2[0xb];
      fVar18 = param_2[4];
    }
    else {
      if (2 < uVar9) goto LAB_82432214;
      fVar17 = param_2[0xc];
      fVar16 = param_2[0xd];
      fVar18 = param_2[5];
    }
    dVar11 = (double)fVar18;
  }
  fStack_9c = (float)((double)fVar17 + dVar15);
  fStack_a0 = fVar16 + fStack_a0;
LAB_82432214:
  dVar12 = (double)param_2[0x23];
  if (param_2[0x11] != 0.0) {
    dVar12 = (double)(float)(dVar13 - dVar12);
  }
  *(float *)(*(int *)(*(int *)(iVar6 + 0x244) + 0x70) + 0x420) = (float)dVar12;
  *(float *)(iVar6 + 0x228) = (float)(dVar11 * dVar10);
  *(undefined4 *)(iVar6 + 0x21c) = uVar5;
  *(float *)(iVar6 + 0x214) = fStack_a0;
  pfVar4 = (float *)(iVar6 + 0x1a0U & 0xfffffff0);
  *pfVar4 = fVar31;
  pfVar4[1] = fVar32;
  pfVar4[2] = fVar33;
  pfVar4[3] = fVar34;
  *(float *)(iVar6 + 0x218) = fStack_9c;
  fn_82F6A594();
  return;
}

