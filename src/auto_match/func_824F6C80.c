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
extern unsigned int lbl_821956C0;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C3124;
extern unsigned int lbl_831C3128;
extern unsigned int lbl_831C312C;
extern unsigned int lbl_831C3130;
extern unsigned int lbl_831C3134;
extern unsigned int lbl_831C3138;
extern unsigned int lbl_831C313C;


void fn_824F6C80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  int in_r0;
  int iVar10;
  undefined8 uVar8;
  int iVar11;
  int iVar12;
  ulonglong uVar9;
  ulonglong uVar13;
  ulonglong uVar14;
  float *pfVar15;
  ulonglong uVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
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
  
  iVar10 = fn_82F6A548();
  uVar8 = fn_82F4EBC0(0);
  fn_82F50108(uVar8,0xb,2,auStack_80,auStack_120,auStack_a0,0);
  fn_82F50108(uVar8,0x10,2,auStack_e0,auStack_140,auStack_100,0);
  iVar11 = fn_82F50108(uVar8,10,2,&stack_pair_190.first,auStack_c0,auStack_60,0);
  dVar20 = (double)(longlong)iVar11;
  iVar11 = fn_82F50108(uVar8,0xf,2,&fStack_180,auStack_110,auStack_130,0);
  dVar22 = (double)(longlong)iVar11;
  iVar11 = fn_82F50108(uVar8,9,2,auStack_150,auStack_d0,auStack_f0,0);
  dVar19 = (double)(longlong)iVar11;
  iVar11 = fn_82F50108(uVar8,0xe,2,auStack_160,auStack_90,auStack_b0,0);
  dVar21 = (double)(longlong)iVar11;
  iVar12 = fn_82F50108(uVar8,2,2,afStack_170,auStack_50,auStack_70,0);
  iVar11 = *(int *)(iVar10 + 0x2b0);
  dVar18 = (double)lbl_831C3130;
  if (iVar11 == -1) {
    iVar11 = iVar10 + 0x270;
    lVar17 = 4;
    do {
      puVar1 = (undefined4 *)((int)&stack_pair_190.first + in_r0 & 0xfffffff0);
      uVar23 = puVar1[1];
      uVar24 = puVar1[2];
      uVar25 = puVar1[3];
      puVar2 = (undefined4 *)((int)&fStack_180 + in_r0 & 0xfffffff0);
      uVar26 = *puVar2;
      uVar27 = puVar2[1];
      uVar28 = puVar2[2];
      uVar29 = puVar2[3];
      puVar2 = (undefined4 *)(in_r0 + iVar11 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar23;
      puVar2[2] = uVar24;
      puVar2[3] = uVar25;
      puVar1 = (undefined4 *)(iVar11 - 0x40U & 0xfffffff0);
      *puVar1 = uVar26;
      puVar1[1] = uVar27;
      puVar1[2] = uVar28;
      puVar1[3] = uVar29;
      iVar11 = iVar11 + 0x10;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    *(undefined4 *)(iVar10 + 0x2b0) = 0;
LAB_824f6eb4:
    *(undefined4 *)(iVar10 + 0x2b4) = 0;
  }
  else {
    if (dVar18 < dVar22) {
      *(int *)(iVar10 + 0x2b0) = iVar11 + 1;
      puVar1 = (undefined4 *)((int)&fStack_180 + in_r0 & 0xfffffff0);
      uVar23 = puVar1[1];
      uVar24 = puVar1[2];
      uVar25 = puVar1[3];
      puVar2 = (undefined4 *)((iVar11 + 0x23) * 0x10 + iVar10 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar23;
      puVar2[2] = uVar24;
      puVar2[3] = uVar25;
    }
    if (*(int *)(iVar10 + 0x2b0) == 4) {
      *(undefined4 *)(iVar10 + 0x2b0) = 0;
    }
    if (dVar18 < dVar20) {
      iVar11 = *(int *)(iVar10 + 0x2b4);
      puVar1 = (undefined4 *)((int)&stack_pair_190.first + in_r0 & 0xfffffff0);
      uVar23 = *puVar1;
      uVar24 = puVar1[1];
      uVar25 = puVar1[2];
      uVar26 = puVar1[3];
      *(int *)(iVar10 + 0x2b4) = iVar11 + 1;
      puVar1 = (undefined4 *)(in_r0 + (iVar11 + 0x27) * 0x10 + iVar10 & 0xfffffff0);
      *puVar1 = uVar23;
      puVar1[1] = uVar24;
      puVar1[2] = uVar25;
      puVar1[3] = uVar26;
    }
    if (*(int *)(iVar10 + 0x2b4) == 4) goto LAB_824f6eb4;
  }
  fVar7 = lbl_821CC160;
  uVar16 = (ulonglong)*(uint *)(iVar10 + 0x2b0);
  lVar17 = 3;
  uVar14 = (ulonglong)*(uint *)(iVar10 + 0x2b4);
  fVar3 = lbl_821CC160;
  fVar4 = lbl_821CC160;
  do {
    uVar9 = uVar16 + 0x23;
    uVar13 = -(ulonglong)(uVar14 != 3) & uVar14 + 1;
    uVar16 = -(ulonglong)(uVar16 != 3) & uVar16 + 1;
    fVar4 = (*(float *)((int)((uVar16 + 0x23 & 0xffffffff) << 4) + iVar10) -
            *(float *)((int)((uVar9 & 0xffffffff) << 4) + iVar10)) + fVar4;
    fVar3 = (*(float *)((int)((uVar13 + 0x27 & 0xffffffff) << 4) + iVar10) -
            *(float *)((int)((uVar14 + 0x27 & 0xffffffff) << 4) + iVar10)) + fVar3;
    lVar17 = lVar17 + -1;
    uVar14 = uVar13;
  } while (lVar17 != 0);
  bVar5 = false;
  bVar6 = false;
  fVar4 = fVar4 * lbl_8218EC08;
  if (((((dVar18 < dVar22) && (dVar18 < dVar21)) && (dVar18 < (double)(longlong)iVar12)) &&
      ((afStack_170[0] < fStack_180 && (-lbl_831C3128 < fStack_17c - fStack_15c)))) &&
     (fStack_17c - fStack_15c < lbl_831C3128)) {
    bVar5 = true;
  }
  if (((dVar18 < dVar20) && (dVar18 < dVar19)) &&
     ((dVar18 < (double)(longlong)iVar12 &&
      (((stack_pair_190.first < afStack_170[0] && (-lbl_831C3128 < stack_pair_190.second - fStack_14c)) &&
       (stack_pair_190.second - fStack_14c < lbl_831C3128)))))) {
    bVar6 = true;
  }
  if (bVar5) {
    if (bVar6) {
      *(float *)(iVar10 + 0x220) = lbl_821CC160;
    }
    else if (fVar4 < -lbl_831C3134) goto LAB_824f704c;
  }
  else if ((bVar6) && (fVar4 = fVar3 * lbl_8218EC08, lbl_831C3134 < fVar3 * lbl_8218EC08)) {
LAB_824f704c:
    *(float *)(iVar10 + 0x220) = -(fVar4 * lbl_831C3124);
  }
  fVar3 = lbl_831C312C;
  if ((lbl_831C312C < *(float *)(iVar10 + 0x220)) ||
     (fVar3 = -lbl_831C312C, *(float *)(iVar10 + 0x220) < fVar3)) {
    *(float *)(iVar10 + 0x220) = fVar3;
  }
  fVar3 = *(float *)(iVar10 + 0x220) * lbl_821914B0;
  *(float *)(iVar10 + 0x220) = fVar3;
  fVar4 = lbl_82193E50;
  fVar3 = fVar3 + *(float *)(iVar10 + 0x218);
  *(float *)(iVar10 + 0x218) = fVar3;
  if (fVar3 <= fVar4) {
    if (lbl_821956BC <= fVar3) goto LAB_824f70c8;
    fVar3 = fVar3 + lbl_82193E2C;
  }
  else {
    fVar3 = fVar3 - lbl_82193E2C;
  }
  *(float *)(iVar10 + 0x218) = fVar3;
LAB_824f70c8:
  pfVar15 = (float *)(iVar10 + 0x2b8);
  lVar17 = 2;
  fVar3 = lbl_821956C0;
  do {
    fVar4 = *(float *)(iVar10 + 0x218) - *pfVar15;
    if (fVar4 < fVar7) {
      fVar4 = -fVar4;
    }
    if (fVar4 < fVar3) {
      fVar3 = fVar4;
    }
    pfVar15 = pfVar15 + 4;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (lbl_831C3138 != 0) {
    *(undefined4 *)(iVar10 + 0x218) = lbl_831C313C;
  }
  fn_82F6A594();
  return;
}

