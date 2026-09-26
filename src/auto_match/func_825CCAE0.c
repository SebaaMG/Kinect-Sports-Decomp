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
#define NAN(x) ((x) != (x))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_110;
extern unsigned int *auStack_118;
extern unsigned int fStack_100;
extern unsigned int fStack_d8;
extern unsigned int fStack_e0;
extern unsigned int fStack_e8;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_82577EE0();
extern int fn_825CB770();
extern int fn_825CBB38();
extern int fn_825CBE38();
extern int fn_825CC028();
extern int fn_825CC250();
extern int fn_825CC3A8();
extern int fn_825CC518();
extern int fn_825CC628();
extern int fn_825CC878();
extern int fn_825CCA30();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_8263CBB0();
extern int fn_82F68918();
extern int fn_82F6A520();
extern int fn_82F6A56C();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195690;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F8B8;
extern unsigned int lbl_8327FA10;
extern unsigned int lbl_8327FA14;
extern unsigned int lbl_83297890;
extern unsigned int uStack_d4;
extern unsigned int uStack_dc;
extern V16 vectorSubtractFloatingPoint();


void fn_825CCAE0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  int in_r0;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  double extraout_f1;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float afStack_130 [2];
  longlong lStack_128;
  longlong lStack_120;
  undefined4 auStack_118 [2];
  undefined1 auStack_110 [16];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float afStack_f0 [2];
  float fStack_e8;
  float fStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  
  pfVar6 = (float *)fn_82F6A520();
  puVar3 = (undefined4 *)(in_r0 + (int)pfVar6 & 0xfffffff0);
  uVar27 = *puVar3;
  uVar28 = puVar3[1];
  uVar29 = puVar3[2];
  uVar30 = puVar3[3];
  fVar2 = pfVar6[0x15];
  puVar3 = (undefined4 *)(in_r0 + param_6 & 0xfffffff0);
  uVar35 = *puVar3;
  uVar36 = puVar3[1];
  uVar37 = puVar3[2];
  uVar38 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(pfVar6 + 4) & 0xfffffff0);
  uVar31 = *puVar3;
  uVar32 = puVar3[1];
  uVar33 = puVar3[2];
  uVar34 = puVar3[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  vectorSubtractFloatingPoint(in_vs44,in_vs32);
  dVar18 = (double)*(float *)((int)fVar2 + 0x54);
  dVar26 = (double)lbl_821CC160;
  dVar16 = (double)*(float *)((int)fVar2 + 0x4c);
  dVar15 = (double)*(float *)((int)fVar2 + 0x50);
  iVar9 = 0;
  dVar14 = (double)*(float *)((int)fVar2 + 0x5c);
  iVar10 = 0;
  dVar13 = (double)*(float *)((int)fVar2 + 0x60);
  bVar5 = true;
  dVar25 = (double)lbl_821CA460;
  dVar22 = (double)(*(float *)((int)fVar2 + 0x58) + lbl_82191FC8);
  puVar3 = (undefined4 *)((int)&fStack_100 + in_r0 & 0xfffffff0);
  *puVar3 = uVar35;
  puVar3[1] = uVar36;
  puVar3[2] = uVar37;
  puVar3[3] = uVar38;
  puVar3 = (undefined4 *)((int)&fStack_e0 + in_r0 & 0xfffffff0);
  *puVar3 = uVar31;
  puVar3[1] = uVar32;
  puVar3[2] = uVar33;
  puVar3[3] = uVar34;
  puVar3 = (undefined4 *)((int)afStack_f0 + in_r0 & 0xfffffff0);
  *puVar3 = uVar27;
  puVar3[1] = uVar28;
  puVar3[2] = uVar29;
  puVar3[3] = uVar30;
  dVar17 = extraout_f1;
  dVar19 = dVar18;
  if (dVar18 <= dVar26) {
LAB_825ccc48:
    bVar5 = false;
  }
  else {
    afStack_130[0] = lbl_82195690;
    iVar7 = fn_82577EE0(fVar2,&fStack_100,afStack_130,0);
    dVar12 = ABS((double)(afStack_130[0] - fStack_fc));
    dVar19 = dVar26;
    if ((iVar7 == 0) || (param_2 < dVar12)) goto LAB_825ccc48;
    pfVar6[0x2a] = (float)dVar26;
    dVar19 = (double)(float)((double)(float)((double)SQRT((float)(param_2 * param_2 -
                                                                 (double)(float)(dVar12 * dVar12)))
                                            * (double)(float)(dVar25 / param_2)) * dVar18);
    if ((dVar26 < dVar19) && (afStack_130[0] < fStack_fc)) {
      lStack_128 = CONCAT44((float)dVar25,(((U64)(lStack_128) >> 32) & 0xFFFFFFFF));
      pfVar8 = afStack_130;
      dVar18 = -(double)(float)((double)(fStack_fc - afStack_130[0]) *
                                (double)(float)(dVar25 / param_2) - dVar22);
      afStack_130[0] = (float)dVar18;
      if (dVar25 <= dVar18) {
        pfVar8 = (float *)&lStack_128;
      }
      if ((double)*pfVar8 <= dVar26) {
        pfVar8 = (float *)&lStack_120;
      }
      dVar19 = (double)(float)((double)*pfVar8 * dVar19);
    }
  }
  lStack_120 = (longlong)(int)pfVar6[0x30];
  dVar20 = (double)(afStack_f0[0] + fStack_e0);
  dVar18 = (double)*(float *)((int)pfVar6[0x15] + 0x48);
  dVar12 = (double)(fStack_e8 + fStack_d8);
  pfVar6[0x2f] = *(float *)((int)pfVar6[0x15] + 0x48);
  dVar24 = (double)((float)(dVar20 * dVar18) / (float)lStack_120);
  dVar23 = (double)(float)(dVar25 / dVar24);
  dVar22 = (double)((float)(dVar12 * dVar18) / (float)lStack_120);
  dVar18 = (double)fn_82F68918((double)(float)((double)(fStack_100 - *pfVar6) * dVar23));
  dVar21 = (double)(float)(dVar25 / dVar22);
  dVar24 = (double)(float)((double)(float)dVar18 * dVar24 + (double)*pfVar6);
  dVar18 = (double)fn_82F68918((double)(float)((double)(fStack_f8 - pfVar6[2]) * dVar21));
  fVar1 = pfVar6[2];
  fVar2 = (float)((double)(float)dVar18 * dVar22 + (double)fVar1);
  dVar18 = (double)fVar2;
  if (pfVar6[0x32] == 0.0) {
    if ((dVar24 == (double)pfVar6[0x2b]) && (dVar18 == (double)pfVar6[0x2c])) goto LAB_825ccd60;
    iVar9 = (int)((double)(float)((double)pfVar6[0x2b] - dVar24) * dVar23);
    lStack_120 = (longlong)iVar9;
    iVar10 = (int)((double)(float)((double)pfVar6[0x2c] - dVar18) * dVar21);
    lStack_128 = (longlong)iVar10;
    if (lbl_83297890 != 0) {
      iVar10 = 0;
      iVar9 = 0;
    }
  }
  else {
    puVar3 = (undefined4 *)((uint)(pfVar6 + 0x10) & 0xfffffff0);
    *puVar3 = uVar35;
    puVar3[1] = uVar36;
    puVar3[2] = uVar37;
    puVar3[3] = uVar38;
    pfVar6[0x32] = 0.0;
  }
  pfVar6[0x2c] = fVar2;
  pfVar6[0x2b] = (float)dVar24;
LAB_825ccd60:
  dVar23 = (double)pfVar6[0x2f];
  dVar21 = (double)lbl_8218E8E8;
  dVar22 = -(double)(float)(dVar23 * dVar21 -
                           (double)(float)((double)(float)(dVar18 - (double)fVar1) / dVar12));
  pfVar6[0x2e] = (float)dVar22;
  dVar18 = -(double)(float)(dVar23 * dVar21 -
                           (double)(float)((double)(float)(dVar24 - (double)*pfVar6) / dVar20));
  pfVar6[0x2d] = (float)dVar18;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar18 < dVar26) << 2) | (uint)(NAN(dVar18) || NAN(dVar26)) << 2)) <
      0.0) {
    dVar18 = dVar26;
  }
  dVar12 = (double)(float)(dVar18 - (double)(float)(dVar25 - dVar23));
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar22 < dVar26) << 2) | (uint)(NAN(dVar22) || NAN(dVar26)) << 2)) <
      0.0) {
    dVar22 = dVar26;
  }
  dVar20 = (double)(float)(dVar25 - dVar23);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar12 < dVar26) << 2) | (uint)(NAN(dVar12) || NAN(dVar26)) << 2)) <
      0.0) {
    dVar20 = dVar18;
  }
  pfVar6[0x2d] = (float)dVar20;
  dVar12 = (double)(float)(dVar22 - (double)(float)(dVar25 - dVar23));
  dVar18 = (double)(float)(dVar25 - dVar23);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar12 < dVar26) << 2) | (uint)(NAN(dVar12) || NAN(dVar26)) << 2)) <
      0.0) {
    dVar18 = dVar22;
  }
  pfVar6[0x2e] = (float)dVar18;
  if (pfVar6[0x2a] < *(float *)((int)pfVar6[0x15] + 0x6c) + *(float *)((int)pfVar6[0x15] + 0x68)) {
    fn_825CC878(pfVar6,param_4,auStack_110,auStack_118);
    if ((!bVar5) &&
       (fVar2 = pfVar6[0x2a], pfVar6[0x2a] = (float)((double)fVar2 + dVar17),
       *(float *)((int)pfVar6[0x15] + 0x6c) + *(float *)((int)pfVar6[0x15] + 0x68) <=
       (float)((double)fVar2 + dVar17))) {
      fn_825CC628(pfVar6,param_4);
    }
    fn_825CBB38(dVar19,dVar14,dVar13,pfVar6,param_4,&fStack_100,&fStack_e0,afStack_f0,iVar9,
                      iVar10);
    fn_825CB770(pfVar6,param_4);
    lVar11 = (ulonglong)(uint)pfVar6[0x30] - 2;
    fn_825CC028(dVar16,dVar17,pfVar6,param_4,lVar11,1);
    fn_825CC028(dVar16,dVar17,pfVar6,param_4,lVar11,2);
    fn_825CC3A8(dVar17,pfVar6,param_4,lVar11);
    fVar2 = pfVar6[0x30];
    fn_825CBE38(dVar15,dVar17,pfVar6,param_4,(ulonglong)(uint)fVar2 - 2);
    fn_825CC250(dVar17,pfVar6,param_4,(ulonglong)(uint)fVar2 - 2);
    fn_82631920(param_4,lbl_8327F8B8);
    fn_82631578(param_4,lbl_8327FA14);
    fn_8263CBB0(param_4,1,pfVar6[0x16],0x40000000);
    fn_825CC518(pfVar6,param_4,pfVar6[0x17],pfVar6[0x16]);
    puVar3 = (undefined4 *)((int)&fStack_100 + in_r0 & 0xfffffff0);
    uVar27 = puVar3[1];
    uVar28 = puVar3[2];
    uVar29 = puVar3[3];
    puVar4 = (undefined4 *)((uint)(pfVar6 + 0x10) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar27;
    puVar4[2] = uVar28;
    puVar4[3] = uVar29;
    fn_82631920(param_4,lbl_8327F8B8);
    fn_82631578(param_4,lbl_8327FA10);
    iVar9 = (int)param_4;
    *(undefined4 *)(iVar9 + 0x2760) = *(undefined4 *)((int)pfVar6[0x15] + 100);
    *(undefined4 *)(iVar9 + 0x2764) = uStack_dc;
    *(float *)(iVar9 + 0x2768) = fStack_d8;
    *(undefined4 *)(iVar9 + 0x276c) = uStack_d4;
    *(ulonglong *)(iVar9 + 8) = *(ulonglong *)(iVar9 + 8) | 1;
    fn_825CC518(pfVar6,param_4,pfVar6[0x16],pfVar6[0x18]);
    fn_825CCA30(param_4,auStack_110,auStack_118[0]);
  }
  fn_82F6A56C();
  return;
}

