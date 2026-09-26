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
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int *auStack_170;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_13c;
extern unsigned int fStack_14c;
extern unsigned int fStack_15c;
extern unsigned int fStack_16c;
extern unsigned int fStack_174;
extern unsigned int fStack_178;
extern unsigned int fStack_17c;
extern unsigned int fStack_180;
extern int fn_82F593E8();
extern int fn_82F6A520();
extern int fn_82F6A56C();
extern int fn_8306D698();
extern int fn_8306D6D0();
extern int fn_8306E7D8();
extern int fn_8306E7E8();
extern int fn_8306E7F8();
extern int fn_8306E818();
extern int fn_8306E850();
extern int fn_8306E890();
extern int fn_8306ECD8();
extern int fn_8306ED98();
extern int fn_8306EDB0();
extern int fn_8306EE38();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005718;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_8201DCC0;
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_8201FBC0;
extern unsigned int lbl_82021538;
extern unsigned int lbl_820288E4;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;


void fn_83077AA8(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int in_r0;
  int iVar5;
  longlong lVar4;
  undefined4 uVar6;
  int iVar7;
  undefined8 extraout_f1;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined1 auStack_170 [4];
  float fStack_16c;
  undefined1 auStack_160 [4];
  float fStack_15c;
  undefined1 auStack_150 [4];
  float fStack_14c;
  undefined1 auStack_140 [4];
  float fStack_13c;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [152];
  
  iVar5 = fn_82F6A520();
  if (*(int *)(iVar5 + 0x84) < 1) {
    dVar22 = (double)fn_8306E890((double)lbl_8201DCC0,extraout_f1);
  }
  else {
    dVar22 = (double)lbl_820288E4;
  }
  lVar4 = (ulonglong)*(uint *)(iVar5 + 0x84) - 1;
  *(int *)(iVar5 + 0x84) = (int)lVar4;
  uVar6 = fn_82F593E8(lVar4,0);
  *(undefined4 *)(iVar5 + 0x84) = uVar6;
  fn_8306D698(auStack_110,*(undefined4 *)(iVar5 + 0x10),4);
  fn_8306D698(auStack_120,*(undefined4 *)(iVar5 + 0x10),5);
  fn_8306D698(auStack_c0,*(undefined4 *)(iVar5 + 0x10),6);
  fn_8306D698(auStack_f0,*(undefined4 *)(iVar5 + 0x10),8);
  fn_8306D698(auStack_100,*(undefined4 *)(iVar5 + 0x10),9);
  fn_8306D698(auStack_b0,*(undefined4 *)(iVar5 + 0x10),10);
  dVar8 = (double)fn_8306D6D0(*(undefined4 *)(iVar5 + 0x10),4);
  if (dVar8 <= (double)lbl_8201DFF4) {
    iVar7 = 3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x50) + -1;
  }
  *(int *)(iVar5 + 0x50) = iVar7;
  dVar8 = (double)fn_8306D6D0(*(undefined4 *)(iVar5 + 0x10),5);
  if (dVar8 <= (double)lbl_8201DFF4) {
    iVar7 = 3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x54) + -1;
  }
  *(int *)(iVar5 + 0x54) = iVar7;
  dVar8 = (double)fn_8306D6D0(*(undefined4 *)(iVar5 + 0x10),6);
  if (dVar8 <= (double)lbl_8201DFF4) {
    iVar7 = 3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x58) + -1;
  }
  *(int *)(iVar5 + 0x58) = iVar7;
  dVar8 = (double)fn_8306D6D0(*(undefined4 *)(iVar5 + 0x10),8);
  if (dVar8 <= (double)lbl_8201DFF4) {
    iVar7 = 3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x5c) + -1;
  }
  *(int *)(iVar5 + 0x5c) = iVar7;
  dVar8 = (double)fn_8306D6D0(*(undefined4 *)(iVar5 + 0x10),9);
  if (dVar8 <= (double)lbl_8201DFF4) {
    iVar7 = 3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x60) + -1;
  }
  *(int *)(iVar5 + 0x60) = iVar7;
  dVar8 = (double)fn_8306D6D0(*(undefined4 *)(iVar5 + 0x10),10);
  if (dVar8 <= (double)lbl_8201DFF4) {
    iVar7 = 3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 100) + -1;
  }
  *(int *)(iVar5 + 100) = iVar7;
  if ((*(int *)(iVar5 + 0x54) < 1) && (*(int *)(iVar5 + 0x50) < 1)) {
    altv207_13(in_vs32,in_vs43);
    altv207_13(in_vs32,in_vs42);
    dVar8 = (double)fn_8306EE38();
  }
  else {
    dVar8 = (double)*(float *)(iVar5 + 0x68);
  }
  if ((*(int *)(iVar5 + 0x54) < 1) && (*(int *)(iVar5 + 0x58) < 1)) {
    altv207_13(in_vs32,in_vs43);
    altv207_13(in_vs32,in_vs42);
    dVar9 = (double)fn_8306EE38();
  }
  else {
    dVar9 = (double)*(float *)(iVar5 + 0x6c);
  }
  if ((*(int *)(iVar5 + 0x60) < 1) && (*(int *)(iVar5 + 0x5c) < 1)) {
    altv207_13(in_vs32,in_vs43);
    altv207_13(in_vs32,in_vs42);
    dVar10 = (double)fn_8306EE38();
  }
  else {
    dVar10 = (double)*(float *)(iVar5 + 0x68);
  }
  if ((*(int *)(iVar5 + 0x60) < 1) && (*(int *)(iVar5 + 100) < 1)) {
    altv207_13(in_vs32,in_vs43);
    altv207_13(in_vs32,in_vs42);
    dVar11 = (double)fn_8306EE38();
  }
  else {
    dVar11 = (double)*(float *)(iVar5 + 0x6c);
  }
  fn_8306D698(auStack_d0,*(undefined4 *)(iVar5 + 0x10),0xc);
  fn_8306D698(auStack_150,*(undefined4 *)(iVar5 + 0x10),0xd);
  fn_8306D698(auStack_160,*(undefined4 *)(iVar5 + 0x10),0xe);
  fn_8306D698(auStack_e0,*(undefined4 *)(iVar5 + 0x10),0x10);
  fn_8306D698(auStack_140,*(undefined4 *)(iVar5 + 0x10),0x11);
  fn_8306D698(auStack_170,*(undefined4 *)(iVar5 + 0x10),0x12);
  dVar12 = (double)fn_8306D6D0(*(undefined4 *)(iVar5 + 0x10),0xc);
  if (dVar12 <= (double)lbl_8201DFF4) {
    iVar7 = 3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x38) + -1;
  }
  *(int *)(iVar5 + 0x38) = iVar7;
  dVar12 = (double)fn_8306D6D0(*(undefined4 *)(iVar5 + 0x10),0xd);
  if (dVar12 <= (double)lbl_8201DFF4) {
    iVar7 = 3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x3c) + -1;
  }
  *(int *)(iVar5 + 0x3c) = iVar7;
  dVar12 = (double)fn_8306D6D0(*(undefined4 *)(iVar5 + 0x10),0xe);
  if (dVar12 <= (double)lbl_8201DFF4) {
    iVar7 = 3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x40) + -1;
  }
  *(int *)(iVar5 + 0x40) = iVar7;
  dVar12 = (double)fn_8306D6D0(*(undefined4 *)(iVar5 + 0x10),0x10);
  if (dVar12 <= (double)lbl_8201DFF4) {
    iVar7 = 3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x44) + -1;
  }
  *(int *)(iVar5 + 0x44) = iVar7;
  dVar12 = (double)fn_8306D6D0(*(undefined4 *)(iVar5 + 0x10),0x11);
  if (dVar12 <= (double)lbl_8201DFF4) {
    iVar7 = 3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x48) + -1;
  }
  *(int *)(iVar5 + 0x48) = iVar7;
  dVar12 = (double)fn_8306D6D0(*(undefined4 *)(iVar5 + 0x10),0x12);
  if (dVar12 <= (double)lbl_8201DFF4) {
    iVar7 = 3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x4c) + -1;
  }
  *(int *)(iVar5 + 0x4c) = iVar7;
  if ((*(int *)(iVar5 + 0x3c) < 1) && (*(int *)(iVar5 + 0x38) < 1)) {
    altv207_13(in_vs32,in_vs43);
    altv207_13(in_vs32,in_vs42);
    dVar12 = (double)fn_8306EE38();
  }
  else {
    dVar12 = (double)*(float *)(iVar5 + 0x70);
  }
  if ((*(int *)(iVar5 + 0x48) < 1) && (*(int *)(iVar5 + 0x44) < 1)) {
    altv207_13(in_vs32,in_vs43);
    altv207_13(in_vs32,in_vs42);
    dVar13 = (double)fn_8306EE38();
  }
  else {
    dVar13 = (double)*(float *)(iVar5 + 0x74);
  }
  fn_8306ECD8();
  altv207_13(in_vs32,in_vs43);
  altv207_13(in_vs32,in_vs42);
  fn_8306EDB0();
  dVar14 = (double)fn_8306ED98();
  fn_8306ECD8();
  altv207_13(in_vs32,in_vs43);
  altv207_13(in_vs32,in_vs42);
  fn_8306EDB0();
  dVar15 = (double)fn_8306ED98();
  iVar7 = fn_8306D698(&fStack_130,*(undefined4 *)(iVar5 + 0x10),0);
  dVar19 = (double)lbl_82005718;
  dVar21 = (double)(float)((double)*(float *)(iVar7 + 4) * dVar19);
  dVar16 = (double)fn_8306E7D8((double)fStack_15c,(double)fStack_16c);
  dVar20 = (double)lbl_821AAD20;
  uVar17 = fn_8306E7E8((double)(float)(dVar16 - dVar21),dVar20);
  dVar16 = (double)lbl_82021538;
  if (dVar16 < dVar14) {
    dVar18 = (double)fn_8306E7F8((double)(float)((double)fStack_15c - dVar21),dVar20,uVar17);
    dVar14 = (double)(fStack_14c - fStack_15c);
    if ((double)lbl_82196080 < dVar14) {
      iVar7 = *(int *)(iVar5 + 0x3c);
      altv207_13(in_vs32,in_vs43);
      pfVar1 = (float *)((uint)(auStack_150 + in_r0) & 0xfffffff0);
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar25 = pfVar1[3];
      fStack_180 = (float)((double)(float)(dVar14 + dVar18) / dVar14);
      pfVar2 = (float *)((int)&fStack_180 + in_r0 & 0xfffffff0);
      fVar26 = pfVar2[1];
      fVar27 = pfVar2[2];
      fVar28 = pfVar2[3];
      pfVar3 = (float *)((uint)(auStack_160 + in_r0) & 0xfffffff0);
      *pfVar3 = (in_register_000103f0 - *pfVar1) * *pfVar2 + *pfVar1;
      pfVar3[1] = (in_register_000103f4 - fVar23) * fVar26 + fVar23;
      pfVar3[2] = (in_register_000103f8 - fVar24) * fVar27 + fVar24;
      pfVar3[3] = (in_vr63 - fVar25) * fVar28 + fVar25;
      fStack_17c = fStack_180;
      fStack_178 = fStack_180;
      fStack_174 = fStack_180;
      if (iVar7 < 1) {
        uVar6 = fn_8306E850(0,*(undefined4 *)(iVar5 + 0x40));
        *(undefined4 *)(iVar5 + 0x40) = uVar6;
      }
    }
  }
  if (dVar16 < dVar15) {
    dVar15 = (double)fn_8306E7F8((double)(float)((double)fStack_16c - dVar21),dVar20,uVar17);
    dVar14 = (double)(fStack_13c - fStack_16c);
    if ((double)lbl_82196080 < dVar14) {
      iVar7 = *(int *)(iVar5 + 0x48);
      altv207_13(in_vs32,in_vs42);
      pfVar1 = (float *)((uint)(auStack_140 + in_r0) & 0xfffffff0);
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar25 = pfVar1[3];
      fStack_180 = (float)((double)(float)(dVar14 + dVar15) / dVar14);
      pfVar2 = (float *)((int)&fStack_180 + in_r0 & 0xfffffff0);
      fVar26 = pfVar2[1];
      fVar27 = pfVar2[2];
      fVar28 = pfVar2[3];
      pfVar3 = (float *)((uint)(auStack_170 + in_r0) & 0xfffffff0);
      *pfVar3 = (in_register_000103f0 - *pfVar1) * *pfVar2 + *pfVar1;
      pfVar3[1] = (in_register_000103f4 - fVar23) * fVar26 + fVar23;
      pfVar3[2] = (in_register_000103f8 - fVar24) * fVar27 + fVar24;
      pfVar3[3] = (in_vr63 - fVar25) * fVar28 + fVar25;
      fStack_17c = fStack_180;
      fStack_178 = fStack_180;
      fStack_174 = fStack_180;
      if (iVar7 < 1) {
        uVar6 = fn_8306E850(0,*(undefined4 *)(iVar5 + 0x4c));
        *(undefined4 *)(iVar5 + 0x4c) = uVar6;
      }
    }
  }
  dVar14 = (double)lbl_820162A0;
  if ((*(int *)(iVar5 + 0x3c) < 1) && (*(int *)(iVar5 + 0x40) < 1)) {
    altv207_13(in_vs32,in_vs43);
    altv207_13(in_vs32,in_vs42);
    dVar15 = (double)fn_8306EE38();
    dVar15 = -(double)(float)((double)*(float *)(iVar5 + 0x30) * dVar14 - dVar15);
  }
  else {
    dVar15 = (double)*(float *)(iVar5 + 0x78);
  }
  if ((*(int *)(iVar5 + 0x48) < 1) && (*(int *)(iVar5 + 0x4c) < 1)) {
    altv207_13(in_vs32,in_vs43);
    altv207_13(in_vs32,in_vs42);
    dVar16 = (double)fn_8306EE38();
    dVar14 = -(double)(float)((double)*(float *)(iVar5 + 0x30) * dVar14 - dVar16);
  }
  else {
    dVar14 = (double)*(float *)(iVar5 + 0x7c);
  }
  dVar16 = (double)lbl_82002C5C;
  fStack_124 = lbl_82002C5C;
  fStack_128 = lbl_82002C5C;
  fStack_12c = lbl_82002C5C;
  fStack_130 = lbl_82002C5C;
  fStack_174 = lbl_82002C5C;
  fStack_178 = lbl_82002C5C;
  fStack_17c = lbl_82002C5C;
  fStack_180 = lbl_82002C5C;
  if ((((*(int *)(iVar5 + 0x50) < 1) && (*(int *)(iVar5 + 0x5c) < 1)) &&
      (*(int *)(iVar5 + 0x38) < 1)) && (*(int *)(iVar5 + 0x44) < 1)) {
    altv207_13(in_vs32,in_vs43);
    altv207_13(in_vs32,in_vs42);
    altv207_13(in_vs32,in_vs41);
    altv207_13(in_vs32,in_vs40);
    altv207_13(in_vs32,in_vs39);
    altv207_13(in_vs32,in_vs43);
    dVar20 = (double)fn_8306EE38();
  }
  else {
    dVar20 = (double)*(float *)(iVar5 + 0x80);
  }
  if (((((dVar19 < dVar8) && (dVar19 < dVar9)) &&
       ((dVar19 < dVar12 && ((dVar19 < dVar15 && (dVar19 < dVar10)))))) && (dVar19 < dVar11)) &&
     (((dVar19 < dVar13 && (dVar19 < dVar14)) && (dVar19 < dVar20)))) {
    dVar8 = (double)fn_8306E818((double)*(float *)(iVar5 + 0x68),
                                 (double)(float)((double)(float)(dVar10 + dVar8) * dVar16),dVar22);
    *(float *)(iVar5 + 0x68) = (float)dVar8;
    dVar8 = (double)fn_8306E818((double)*(float *)(iVar5 + 0x6c),
                                 (double)(float)((double)(float)(dVar11 + dVar9) * dVar16),dVar22);
    *(float *)(iVar5 + 0x6c) = (float)dVar8;
    dVar8 = (double)fn_8306E818((double)*(float *)(iVar5 + 0x70),dVar12,dVar22);
    *(float *)(iVar5 + 0x70) = (float)dVar8;
    dVar8 = (double)fn_8306E818((double)*(float *)(iVar5 + 0x74),dVar13,dVar22);
    *(float *)(iVar5 + 0x74) = (float)dVar8;
    dVar8 = (double)fn_8306E818((double)*(float *)(iVar5 + 0x78),dVar15,dVar22);
    *(float *)(iVar5 + 0x78) = (float)dVar8;
    dVar8 = (double)fn_8306E818((double)*(float *)(iVar5 + 0x7c),dVar14,dVar22);
    *(float *)(iVar5 + 0x7c) = (float)dVar8;
    dVar22 = (double)fn_8306E818((double)*(float *)(iVar5 + 0x80),dVar20,dVar22);
    *(float *)(iVar5 + 0x80) = (float)dVar22;
    dVar8 = (double)lbl_8201FBC0;
    dVar9 = (double)lbl_82186E6C;
    dVar22 = (double)fn_8306E7F8((double)*(float *)(iVar5 + 0x68),dVar9,dVar8);
    *(float *)(iVar5 + 0x68) = (float)dVar22;
    dVar22 = (double)fn_8306E7F8((double)*(float *)(iVar5 + 0x6c),dVar9,dVar8);
    *(float *)(iVar5 + 0x6c) = (float)dVar22;
    dVar8 = (double)lbl_82057B54;
    dVar22 = (double)fn_8306E7F8((double)*(float *)(iVar5 + 0x70),dVar9,dVar8);
    *(float *)(iVar5 + 0x70) = (float)dVar22;
    dVar22 = (double)fn_8306E7F8((double)*(float *)(iVar5 + 0x74),dVar9,dVar8);
    *(float *)(iVar5 + 0x74) = (float)dVar22;
    dVar22 = (double)fn_8306E7F8((double)*(float *)(iVar5 + 0x78),dVar9,dVar8);
    *(float *)(iVar5 + 0x78) = (float)dVar22;
    dVar22 = (double)fn_8306E7F8((double)*(float *)(iVar5 + 0x7c),dVar9,dVar8);
    *(float *)(iVar5 + 0x7c) = (float)dVar22;
  }
  fn_82F6A56C();
  return;
}

