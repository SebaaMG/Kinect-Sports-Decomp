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
extern unsigned int *auStack_c0;
extern unsigned int fStack_a0;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_822315A0();
extern int fn_823B0278();
extern int fn_823B08C0();
extern int fn_823B1198();
extern int fn_823B2E60();
extern int fn_823B30D0();
extern int fn_82539560();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C9D0C;
extern unsigned int lbl_831C9D10;
extern unsigned int lbl_831CA084;
extern unsigned int lbl_831CA08C;
extern unsigned int lbl_831CA090;
extern unsigned int lbl_831CA118;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;


void fn_823B0CE8(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  double param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  undefined8 param_9)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  undefined8 in_r0;
  undefined8 uVar11;
  float *pfVar12;
  int *piVar13;
  double dVar14;
  double extraout_f1;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int in_stack_00000054;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined4 in_stack_0000008c;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c0 [16];
  int iStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  
  uVar11 = fn_82F6A540();
  iVar6 = (int)param_8;
  iVar3 = *(int *)(iVar6 + 0xc0);
  pfVar12 = (float *)0x831ca134;
  if (iVar3 == 0) {
    pfVar12 = (float *)&lbl_831CA118;
  }
  *(float *)(iVar6 + 0x26c) = (float)extraout_f1;
  *(float *)(iVar6 + 0x270) = (float)param_3;
  puVar7 = (undefined4 *)(iVar6 + 0x10U & 0xfffffff0);
  uVar19 = *puVar7;
  uVar20 = puVar7[1];
  uVar21 = puVar7[2];
  uVar23 = puVar7[3];
  *(undefined4 *)(iVar6 + 0x194) = 0;
  fVar2 = lbl_821CC160;
  dVar18 = (double)lbl_821CC160;
  *(int *)(iVar6 + 0x16c) = *(int *)(iVar6 + 0x16c) + 1;
  *(float *)(iVar6 + 0x140) = fVar2;
  *(undefined4 *)(iVar6 + 0x118) = 0;
  *(undefined4 *)(iVar6 + 0x264) = *(undefined4 *)(iVar6 + 0x14c);
  puVar7 = (undefined4 *)(iVar6 + 0x290U & 0xfffffff0);
  *puVar7 = uVar19;
  puVar7[1] = uVar20;
  puVar7[2] = uVar21;
  puVar7[3] = uVar23;
  *(undefined4 *)(iVar6 + 0x120) = 0;
  *(undefined4 *)(iVar6 + 0x128) = 0;
  *(undefined4 *)(iVar6 + 0x1a4) = 0;
  *(undefined4 *)(iVar6 + 0x2a4) = 0;
  if (in_stack_00000054 != 0) {
    *(undefined4 *)(iVar6 + 0x198) = 0;
  }
  fVar2 = lbl_831CA090;
  iVar4 = *(int *)(iVar6 + 0x184);
  dVar14 = (double)lbl_831CA08C;
  if ((iVar4 == 0) || (extraout_f1 <= dVar14)) {
LAB_823b0ddc:
    bVar10 = false;
  }
  else {
    fVar1 = *(float *)(iVar6 + 0x54) + lbl_831CA090;
    bVar10 = true;
    puVar7 = (undefined4 *)((int)&fStack_d0 + (int)in_r0 & 0xfffffff0);
    *puVar7 = uVar19;
    puVar7[1] = uVar20;
    puVar7[2] = uVar21;
    puVar7[3] = uVar23;
    if (fStack_cc <= fVar1) goto LAB_823b0ddc;
  }
  if ((iVar4 == 0) || (extraout_f1 <= dVar14)) {
LAB_823b0e10:
    bVar9 = false;
  }
  else {
    fVar1 = *(float *)(iVar6 + 0x54);
    bVar9 = true;
    puVar7 = (undefined4 *)((int)&fStack_d0 + (int)in_r0 & 0xfffffff0);
    *puVar7 = uVar19;
    puVar7[1] = uVar20;
    puVar7[2] = uVar21;
    puVar7[3] = uVar23;
    if (fStack_cc <= fVar1 + fVar2) goto LAB_823b0e10;
  }
  if ((bVar9) || (bVar9 = true, param_5 <= (double)lbl_831CA084)) {
    bVar9 = false;
  }
  if (iVar3 != 0) {
    bVar10 = false;
    bVar9 = false;
    param_5 = dVar18;
  }
  if (((bVar9) || (bVar10)) && (param_2 = dVar18, bVar10)) {
    *(int *)(iVar6 + 0x170) = *(int *)(iVar6 + 0x170) + 1;
  }
  else if ((*(int *)(iVar6 + 0x188) == 0) || (!bVar9)) {
    *(undefined4 *)(iVar6 + 0x170) = 0;
  }
  if (in_stack_00000054 != 0) {
    *(float *)(iVar6 + 0x178) = (float)extraout_f1;
    goto LAB_823b0fd4;
  }
  if (*(int *)(iVar6 + 0x17c) != 0) {
    *(float *)(iVar6 + 0x178) = pfVar12[4] * *(float *)(iVar6 + 0x178);
  }
  if (bVar10) {
    dVar14 = (double)pfVar12[5];
  }
  else if (bVar9) {
    dVar14 = -(double)pfVar12[1];
  }
  else {
    dVar14 = (double)lbl_8218E8E8;
    if (extraout_f1 <= dVar14) {
      dVar16 = -(double)pfVar12[1];
      dVar17 = dVar18;
      dVar15 = dVar18;
    }
    else {
      dVar17 = dVar14;
      dVar14 = (double)lbl_821CA460;
      dVar16 = dVar18;
      dVar15 = (double)*pfVar12;
    }
    dVar14 = (double)fn_82539560(extraout_f1,dVar17,dVar14,dVar16,dVar15);
    if (param_2 <= dVar18) {
      if (dVar18 <= param_2) goto LAB_823b0f78;
      fVar2 = pfVar12[3];
    }
    else {
      fVar2 = pfVar12[2];
    }
    dVar14 = (double)(float)((double)fVar2 * param_2 + dVar14);
  }
LAB_823b0f78:
  dVar14 = (double)(float)((double)*(float *)(iVar6 + 0x178) + dVar14);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar14 < dVar18) << 2) | (uint)(NAN(dVar14) || NAN(dVar18)) << 2)) <
      0.0) {
    dVar14 = dVar18;
  }
  dVar16 = (double)(float)(dVar14 - (double)pfVar12[6]);
  dVar17 = (double)pfVar12[6];
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar16 < dVar18) << 2) | (uint)(NAN(dVar16) || NAN(dVar18)) << 2)) <
      0.0) {
    dVar17 = dVar14;
  }
  *(float *)(iVar6 + 0x178) = (float)dVar17;
LAB_823b0fd4:
  *(float *)(iVar6 + 0x14c) = (float)param_2;
  *(int *)(iVar6 + 0x17c) = in_stack_00000054;
  fn_823B0278((double)*(float *)(iVar6 + 0x178),param_8,param_8 + 0x1ec);
  fn_823B2E60(param_6,param_5,param_8,param_9);
  fn_823B1198(param_3,param_4,auStack_c0,param_8);
  uVar20 = lbl_821CA1A8;
  uVar19 = lbl_821CA1A4;
  dVar14 = (double)(float)((double)lbl_831C9D0C * param_2);
  dVar17 = (double)lbl_831C9D10;
  if (((dVar18 <= dVar14) && (dVar16 = dVar17, dVar14 < dVar17)) ||
     ((dVar14 <= dVar18 && (dVar16 = -dVar17, -dVar17 < dVar14)))) {
    dVar14 = dVar16;
  }
  puVar7 = (undefined4 *)(iVar6 + 0x20U & 0xfffffff0);
  uVar21 = *puVar7;
  uVar23 = puVar7[1];
  uVar22 = puVar7[2];
  uVar24 = puVar7[3];
  *(undefined4 *)(iVar6 + 0x268) = *(undefined4 *)(iVar6 + 0x14c);
  *(undefined4 *)(iVar6 + 0x274) = *(undefined4 *)(iVar6 + 0x168);
  fStack_d0 = (float)dVar14;
  *(undefined4 *)(iVar6 + 0x2a0) = *(undefined4 *)(iVar6 + 0x178);
  puVar7 = (undefined4 *)(iVar6 + 0x280U & 0xfffffff0);
  *puVar7 = uVar21;
  puVar7[1] = uVar23;
  puVar7[2] = uVar22;
  puVar7[3] = uVar24;
  *(float *)(iVar6 + 0x90) = fStack_d0;
  *(undefined4 *)(iVar6 + 0x94) = uVar19;
  *(undefined4 *)(iVar6 + 0x98) = uVar20;
  fn_823B08C0(param_8);
  if (*(int *)(iVar6 + 0x2b0) != 0) {
    iVar3 = *(int *)(iVar6 + 0x2b8);
    *(undefined4 *)(iVar6 + 0x2b8) = 0;
    *(undefined4 *)(iVar6 + 0x2b4) = 0;
    if (iVar3 != 0) {
      fn_822315A0();
    }
    *(float *)(iVar6 + 0x2c8) = (float)dVar18;
    *(float *)(iVar6 + 0x2cc) = (float)dVar18;
    *(undefined4 *)(iVar6 + 700) = 0;
    if (*(int *)(iVar6 + 0x2b0) != 0) {
      fn_823B30D0(param_8,in_stack_0000008c);
    }
  }
  fStack_a0 = (float)dVar18;
  iStack_ac = in_stack_00000054;
  uStack_a8 = in_stack_0000007c;
  uStack_a4 = in_stack_00000084;
  piVar5 = *(int **)(*(int *)(iVar6 + 0x2a8) + 0xc);
  iStack_b0 = iVar6;
  for (piVar13 = *(int **)(*(int *)(iVar6 + 0x2a8) + 8); piVar13 != piVar5; piVar13 = piVar13 + 1) {
    (**(code **)((*(uint *)(*piVar13 + 8) & 0xfffffffe) + 4))(*piVar13 + 0x10,&iStack_b0);
  }
  puVar7 = (undefined4 *)((uint)(auStack_c0 + (int)in_r0) & 0xfffffff0);
  uVar19 = puVar7[1];
  uVar20 = puVar7[2];
  uVar21 = puVar7[3];
  puVar8 = (undefined4 *)((int)in_r0 + (int)uVar11 & 0xfffffff0);
  *puVar8 = *puVar7;
  puVar8[1] = uVar19;
  puVar8[2] = uVar20;
  puVar8[3] = uVar21;
  fn_82F6A58C(uVar11);
  return;
}

