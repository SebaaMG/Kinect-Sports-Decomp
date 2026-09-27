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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_14c;
extern unsigned int fStack_15c;
extern unsigned int fStack_17c;
extern unsigned int fStack_180;
extern unsigned int fStack_18c;
extern unsigned int fStack_190;
extern int fn_82F4EBC0();
extern int fn_82F50108();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218EC08;
extern unsigned int lbl_821914B0;
extern unsigned int lbl_82193E2C;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821956BC;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C3124;
extern unsigned int lbl_831C3128;
extern unsigned int lbl_831C312C;
extern unsigned int lbl_831C3130;
extern unsigned int lbl_831C3134;


void fn_824F6818(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int in_r0;
  int iVar8;
  undefined8 uVar6;
  int iVar9;
  int iVar10;
  ulonglong uVar7;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  struct { float first; float second; } stack_pair_190;

  float fStack_180;
  float fStack_17c;
  float afStack_170 [4];
  undefined1 auStack_160 [4];
  float fStack_15c;
  undefined1 auStack_150 [4];
  float fStack_14c;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [24];
  
  iVar8 = fn_82F6A548();
  uVar6 = fn_82F4EBC0(0);
  fn_82F50108(uVar6,0xb,2,auStack_80,auStack_120,auStack_a0,0);
  fn_82F50108(uVar6,0x10,2,auStack_e0,auStack_140,auStack_100,0);
  iVar9 = fn_82F50108(uVar6,10,2,&stack_pair_190.first,auStack_c0,auStack_60,0);
  dVar18 = (double)(longlong)iVar9;
  iVar9 = fn_82F50108(uVar6,0xf,2,&fStack_180,auStack_110,auStack_130,0);
  dVar20 = (double)(longlong)iVar9;
  iVar9 = fn_82F50108(uVar6,9,2,auStack_150,auStack_d0,auStack_f0,0);
  dVar17 = (double)(longlong)iVar9;
  iVar9 = fn_82F50108(uVar6,0xe,2,auStack_160,auStack_90,auStack_b0,0);
  dVar19 = (double)(longlong)iVar9;
  iVar10 = fn_82F50108(uVar6,2,2,afStack_170,auStack_50,auStack_70,0);
  iVar9 = *(int *)(iVar8 + 0x2b0);
  dVar16 = (double)lbl_831C3130;
  if (iVar9 == -1) {
    iVar9 = iVar8 + 0x270;
    lVar15 = 4;
    do {
      puVar1 = (undefined4 *)((int)&stack_pair_190.first + in_r0 & 0xfffffff0);
      uVar21 = puVar1[1];
      uVar22 = puVar1[2];
      uVar23 = puVar1[3];
      puVar2 = (undefined4 *)((int)&fStack_180 + in_r0 & 0xfffffff0);
      uVar24 = *puVar2;
      uVar25 = puVar2[1];
      uVar26 = puVar2[2];
      uVar27 = puVar2[3];
      puVar2 = (undefined4 *)(in_r0 + iVar9 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar21;
      puVar2[2] = uVar22;
      puVar2[3] = uVar23;
      puVar1 = (undefined4 *)(iVar9 - 0x40U & 0xfffffff0);
      *puVar1 = uVar24;
      puVar1[1] = uVar25;
      puVar1[2] = uVar26;
      puVar1[3] = uVar27;
      iVar9 = iVar9 + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    *(undefined4 *)(iVar8 + 0x2b0) = 0;
LAB_824f6a4c:
    *(undefined4 *)(iVar8 + 0x2b4) = 0;
  }
  else {
    if (dVar16 < dVar20) {
      *(int *)(iVar8 + 0x2b0) = iVar9 + 1;
      puVar1 = (undefined4 *)((int)&fStack_180 + in_r0 & 0xfffffff0);
      uVar21 = puVar1[1];
      uVar22 = puVar1[2];
      uVar23 = puVar1[3];
      puVar2 = (undefined4 *)((iVar9 + 0x23) * 0x10 + iVar8 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar21;
      puVar2[2] = uVar22;
      puVar2[3] = uVar23;
    }
    if (*(int *)(iVar8 + 0x2b0) == 4) {
      *(undefined4 *)(iVar8 + 0x2b0) = 0;
    }
    if (dVar16 < dVar18) {
      iVar9 = *(int *)(iVar8 + 0x2b4);
      puVar1 = (undefined4 *)((int)&stack_pair_190.first + in_r0 & 0xfffffff0);
      uVar21 = *puVar1;
      uVar22 = puVar1[1];
      uVar23 = puVar1[2];
      uVar24 = puVar1[3];
      *(int *)(iVar8 + 0x2b4) = iVar9 + 1;
      puVar1 = (undefined4 *)(in_r0 + (iVar9 + 0x27) * 0x10 + iVar8 & 0xfffffff0);
      *puVar1 = uVar21;
      puVar1[1] = uVar22;
      puVar1[2] = uVar23;
      puVar1[3] = uVar24;
    }
    if (*(int *)(iVar8 + 0x2b4) == 4) goto LAB_824f6a4c;
  }
  uVar14 = (ulonglong)*(uint *)(iVar8 + 0x2b0);
  lVar15 = 3;
  uVar12 = (ulonglong)*(uint *)(iVar8 + 0x2b4);
  fVar3 = lbl_821CC160;
  fVar4 = lbl_821CC160;
  do {
    uVar7 = uVar14 + 0x23;
    uVar11 = -(ulonglong)(uVar12 != 3) & uVar12 + 1;
    uVar14 = -(ulonglong)(uVar14 != 3) & uVar14 + 1;
    fVar4 = (*(float *)((int)((uVar14 + 0x23 & 0xffffffff) << 4) + iVar8) -
            *(float *)((int)((uVar7 & 0xffffffff) << 4) + iVar8)) + fVar4;
    fVar3 = (*(float *)((int)((uVar11 + 0x27 & 0xffffffff) << 4) + iVar8) -
            *(float *)((int)((uVar12 + 0x27 & 0xffffffff) << 4) + iVar8)) + fVar3;
    lVar15 = lVar15 + -1;
    uVar12 = uVar11;
  } while (lVar15 != 0);
  bVar13 = false;
  bVar5 = false;
  fVar4 = fVar4 * lbl_8218EC08;
  if (((((dVar16 < dVar20) && (dVar16 < dVar19)) && (dVar16 < (double)(longlong)iVar10)) &&
      ((afStack_170[0] < fStack_180 && (-lbl_831C3128 < fStack_17c - fStack_15c)))) &&
     (fStack_17c - fStack_15c < lbl_831C3128)) {
    bVar13 = true;
  }
  if (((dVar16 < dVar18) && (dVar16 < dVar17)) &&
     ((dVar16 < (double)(longlong)iVar10 &&
      (((stack_pair_190.first < afStack_170[0] && (-lbl_831C3128 < stack_pair_190.second - fStack_14c)) &&
       (stack_pair_190.second - fStack_14c < lbl_831C3128)))))) {
    bVar5 = true;
  }
  if (bVar13) {
    if (bVar5) {
      *(float *)(iVar8 + 0x220) = lbl_821CC160;
    }
    else if (fVar4 < -lbl_831C3134) goto LAB_824f6be4;
  }
  else if ((bVar5) && (fVar4 = fVar3 * lbl_8218EC08, lbl_831C3134 < fVar3 * lbl_8218EC08)) {
LAB_824f6be4:
    *(float *)(iVar8 + 0x220) = -(fVar4 * lbl_831C3124);
  }
  fVar3 = lbl_831C312C;
  if ((lbl_831C312C < *(float *)(iVar8 + 0x220)) ||
     (fVar3 = -lbl_831C312C, *(float *)(iVar8 + 0x220) < fVar3)) {
    *(float *)(iVar8 + 0x220) = fVar3;
  }
  fVar3 = *(float *)(iVar8 + 0x220) * lbl_821914B0;
  *(float *)(iVar8 + 0x220) = fVar3;
  fVar4 = lbl_82193E50;
  fVar3 = *(float *)(iVar8 + 0x218) + fVar3;
  *(float *)(iVar8 + 0x218) = fVar3;
  if (fVar3 <= fVar4) {
    if (lbl_821956BC <= fVar3) goto LAB_824f6c60;
    fVar3 = fVar3 + lbl_82193E2C;
  }
  else {
    fVar3 = fVar3 - lbl_82193E2C;
  }
  *(float *)(iVar8 + 0x218) = fVar3;
LAB_824f6c60:
  fn_82F6A594();
  return;
}

