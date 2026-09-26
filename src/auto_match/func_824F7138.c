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
extern unsigned int *auStack_170;
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
extern unsigned int fStack_15c;
extern unsigned int fStack_16c;
extern unsigned int fStack_18c;
extern unsigned int fStack_190;
extern unsigned int fStack_19c;
extern unsigned int fStack_1a0;
extern int fn_824FA0F8();
extern int fn_824FA188();
extern int fn_8255A780();
extern int fn_82F4EBC0();
extern int fn_82F50108();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218EC08;
extern unsigned int lbl_82193E2C;
extern unsigned int lbl_821956BC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C3124;
extern unsigned int lbl_831C3128;
extern unsigned int lbl_831C312C;
extern unsigned int lbl_831C3130;
extern unsigned int lbl_831C3134;
extern unsigned int lbl_831C3138;
extern unsigned int lbl_831C313C;
extern unsigned int lbl_831C3140;
extern unsigned int lbl_831C3144;


void fn_824F7138(void)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  int in_r0;
  int iVar9;
  undefined8 uVar8;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  float *pfVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  double dVar18;
  double extraout_f1;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fStack_1a0;
  float fStack_19c;
  float fStack_190;
  float fStack_18c;
  float afStack_180 [4];
  undefined1 auStack_170 [4];
  float fStack_16c;
  undefined1 auStack_160 [4];
  float fStack_15c;
  undefined1 auStack_150 [16];
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
  undefined1 auStack_60 [96];
  
  iVar9 = fn_82F6A548();
  uVar8 = fn_82F4EBC0(0);
  fn_82F50108(uVar8,0xb,2,auStack_90,auStack_130,auStack_b0,0);
  fn_82F50108(uVar8,0x10,2,auStack_f0,auStack_150,auStack_110,0);
  iVar10 = fn_82F50108(uVar8,10,2,&fStack_1a0,auStack_d0,auStack_70,0);
  dVar26 = (double)(longlong)iVar10;
  iVar10 = fn_82F50108(uVar8,0xf,2,&fStack_190,auStack_120,auStack_140,0);
  dVar28 = (double)(longlong)iVar10;
  iVar10 = fn_82F50108(uVar8,9,2,auStack_160,auStack_e0,auStack_100,0);
  dVar25 = (double)(longlong)iVar10;
  iVar10 = fn_82F50108(uVar8,0xe,2,auStack_170,auStack_a0,auStack_c0,0);
  dVar27 = (double)(longlong)iVar10;
  iVar11 = fn_82F50108(uVar8,2,2,afStack_180,auStack_60,auStack_80,0);
  iVar10 = *(int *)(iVar9 + 0x2b0);
  dVar20 = (double)lbl_831C3130;
  if (iVar10 == -1) {
    iVar10 = iVar9 + 0x270;
    lVar17 = 4;
    do {
      puVar3 = (undefined4 *)((int)&fStack_1a0 + in_r0 & 0xfffffff0);
      uVar29 = puVar3[1];
      uVar30 = puVar3[2];
      uVar31 = puVar3[3];
      puVar4 = (undefined4 *)((int)&fStack_190 + in_r0 & 0xfffffff0);
      uVar32 = *puVar4;
      uVar33 = puVar4[1];
      uVar34 = puVar4[2];
      uVar35 = puVar4[3];
      puVar4 = (undefined4 *)(in_r0 + iVar10 & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar29;
      puVar4[2] = uVar30;
      puVar4[3] = uVar31;
      puVar3 = (undefined4 *)(iVar10 - 0x40U & 0xfffffff0);
      *puVar3 = uVar32;
      puVar3[1] = uVar33;
      puVar3[2] = uVar34;
      puVar3[3] = uVar35;
      iVar10 = iVar10 + 0x10;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    *(undefined4 *)(iVar9 + 0x2b0) = 0;
LAB_824f7364:
    *(undefined4 *)(iVar9 + 0x2b4) = 0;
  }
  else {
    if (dVar20 < dVar28) {
      *(int *)(iVar9 + 0x2b0) = iVar10 + 1;
      puVar3 = (undefined4 *)((int)&fStack_190 + in_r0 & 0xfffffff0);
      uVar29 = puVar3[1];
      uVar30 = puVar3[2];
      uVar31 = puVar3[3];
      puVar4 = (undefined4 *)((iVar10 + 0x23) * 0x10 + iVar9 & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar29;
      puVar4[2] = uVar30;
      puVar4[3] = uVar31;
    }
    if (*(int *)(iVar9 + 0x2b0) == 4) {
      *(undefined4 *)(iVar9 + 0x2b0) = 0;
    }
    if (dVar20 < dVar26) {
      iVar10 = *(int *)(iVar9 + 0x2b4);
      puVar3 = (undefined4 *)((int)&fStack_1a0 + in_r0 & 0xfffffff0);
      uVar29 = *puVar3;
      uVar30 = puVar3[1];
      uVar31 = puVar3[2];
      uVar32 = puVar3[3];
      *(int *)(iVar9 + 0x2b4) = iVar10 + 1;
      puVar3 = (undefined4 *)(in_r0 + (iVar10 + 0x27) * 0x10 + iVar9 & 0xfffffff0);
      *puVar3 = uVar29;
      puVar3[1] = uVar30;
      puVar3[2] = uVar31;
      puVar3[3] = uVar32;
    }
    if (*(int *)(iVar9 + 0x2b4) == 4) goto LAB_824f7364;
  }
  dVar19 = (double)lbl_821CC160;
  lVar17 = 3;
  uVar15 = (ulonglong)*(uint *)(iVar9 + 0x2b4);
  uVar16 = (ulonglong)*(uint *)(iVar9 + 0x2b0);
  dVar21 = dVar19;
  dVar22 = dVar19;
  dVar23 = dVar19;
  dVar24 = dVar19;
  do {
    uVar14 = -(ulonglong)(uVar15 != 3) & uVar15 + 1;
    uVar12 = -(ulonglong)(uVar16 != 3) & uVar16 + 1;
    dVar24 = (double)(float)((double)(*(float *)((int)((uVar12 + 0x23 & 0xffffffff) << 4) + iVar9) -
                                     *(float *)((int)((uVar16 + 0x23 & 0xffffffff) << 4) + iVar9)) +
                            dVar24);
    dVar23 = (double)(float)((double)(*(float *)((int)((uVar14 + 0x27 & 0xffffffff) << 4) + iVar9) -
                                     *(float *)((int)((uVar15 + 0x27 & 0xffffffff) << 4) + iVar9)) +
                            dVar23);
    dVar22 = (double)(float)((double)(*(float *)((int)((uVar12 & 0xffffffff) << 4) + iVar9 + 0x234)
                                     - *(float *)((int)((uVar16 & 0xffffffff) << 4) + iVar9 + 0x234)
                                     ) + dVar22);
    dVar21 = (double)(float)((double)(*(float *)((int)((uVar14 & 0xffffffff) << 4) + iVar9 + 0x274)
                                     - *(float *)((int)((uVar15 & 0xffffffff) << 4) + iVar9 + 0x274)
                                     ) + dVar21);
    lVar17 = lVar17 + -1;
    uVar15 = uVar14;
    uVar16 = uVar12;
  } while (lVar17 != 0);
  bVar6 = false;
  pfVar13 = (float *)&lbl_82193E2C;
  bVar7 = false;
  dVar18 = (double)lbl_8218EC08;
  fVar1 = (float)(dVar24 * dVar18);
  fVar2 = (float)(dVar23 * dVar18);
  if (((((dVar20 < dVar28) && (dVar20 < dVar27)) && (dVar20 < (double)(longlong)iVar11)) &&
      ((afStack_180[0] < fStack_190 && (-lbl_831C3128 < fStack_18c - fStack_16c)))) &&
     (fStack_18c - fStack_16c < lbl_831C3128)) {
    bVar6 = true;
  }
  if (((dVar20 < dVar26) && (dVar20 < dVar25)) &&
     ((dVar20 < (double)(longlong)iVar11 &&
      (((fStack_1a0 < afStack_180[0] && (-lbl_831C3128 < fStack_19c - fStack_15c)) &&
       (fStack_19c - fStack_15c < lbl_831C3128)))))) {
    bVar7 = true;
  }
  if ((!bVar6) || (!bVar7)) {
    dVar20 = (double)(fVar1 / (float)(dVar22 * dVar18));
    *(float *)(iVar9 + 0x2e0) = lbl_821CC160;
    if (dVar20 < dVar19) {
      dVar20 = -dVar20;
    }
    dVar25 = (double)(fVar2 / (float)(dVar21 * dVar18));
    if (dVar25 < dVar19) {
      dVar25 = -dVar25;
    }
    if ((((bVar6) && (fVar1 < -lbl_831C3134)) && ((double)lbl_821CA460 < dVar20)) ||
       (((bVar7 && (lbl_831C3134 < fVar2)) && (fVar1 = fVar2, (double)lbl_821CA460 < dVar25)))) {
      *(float *)(iVar9 + 0x220) = -(fVar1 * lbl_831C3124);
      pfVar13 = (float *)&lbl_82193E2C;
      fn_824FA188(iVar9,2);
    }
  }
  fVar2 = lbl_831C312C;
  if ((lbl_831C312C < *(float *)(iVar9 + 0x220)) ||
     (fVar2 = -lbl_831C312C, *(float *)(iVar9 + 0x220) < fVar2)) {
    *(float *)(iVar9 + 0x220) = fVar2;
  }
  if (*(int *)(iVar9 + 0x70) == 2) {
    fVar1 = *(float *)(iVar9 + 0x220) * pfVar13[-0xa5f];
    fVar2 = pfVar13[9];
    *(float *)(iVar9 + 0x220) = fVar1;
    fVar5 = fVar1 + *(float *)(iVar9 + 0x218);
    *(float *)(iVar9 + 0x218) = fVar5;
    if (fVar5 <= fVar2) {
      if (fVar5 < lbl_821956BC) {
        fVar5 = fVar5 + *pfVar13;
        goto LAB_824f76bc;
      }
    }
    else {
      fVar5 = fVar5 - *pfVar13;
LAB_824f76bc:
      *(float *)(iVar9 + 0x218) = fVar5;
    }
    if ((fVar1 < -lbl_831C3140) || (lbl_831C3140 <= fVar1)) goto LAB_824f76e4;
    uVar8 = 3;
  }
  else {
    if (*(int *)(iVar9 + 0x70) != 3) goto LAB_824f76e4;
    dVar20 = (double)*(float *)(iVar9 + 0x220);
    fVar2 = (float)(dVar20 + (double)*(float *)(iVar9 + 0x218));
    *(float *)(iVar9 + 0x218) = fVar2;
    iVar10 = *(int *)(iVar9 + 0x2d8) * 0x10 + iVar9;
    if (((dVar19 < dVar20) && (*(float *)(iVar10 + 0x2b8) < fVar2)) ||
       ((dVar20 < dVar19 && (*(float *)(iVar9 + 0x218) < *(float *)(iVar10 + 0x2b8))))) {
      *(undefined4 *)(iVar9 + 0x218) = *(undefined4 *)(iVar10 + 0x2b8);
      *(float *)(iVar9 + 0x220) = (float)dVar19;
    }
    iVar10 = fn_8255A780((double)*(float *)(iVar9 + 0x21c),(double)*(float *)(iVar10 + 700),
                          (double)(lbl_831C3144 + pfVar13[-0x996]));
    if (iVar10 == 0) {
      *(float *)(iVar9 + 0x21c) = (float)((double)*(float *)(iVar9 + 0x2dc) + extraout_f1);
      goto LAB_824f76e4;
    }
    if ((double)*(float *)(iVar9 + 0x220) != dVar19) goto LAB_824f76e4;
    uVar8 = 1;
  }
  fn_824FA188(iVar9,uVar8);
LAB_824f76e4:
  dVar20 = (double)fn_824FA0F8(iVar9);
  iVar10 = lbl_831C3138;
  *(float *)(iVar9 + 0x21c) = (float)dVar20;
  if (iVar10 != 0) {
    *(undefined4 *)(iVar9 + 0x218) = lbl_831C313C;
  }
  fn_82F6A594();
  return;
}

