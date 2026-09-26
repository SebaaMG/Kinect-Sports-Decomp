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
extern unsigned int fStack_100;
extern unsigned int fStack_108;
extern unsigned int fStack_114;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_a0;
extern unsigned int fStack_a8;
extern unsigned int fStack_d0;
extern unsigned int fStack_d8;
extern int fn_8268CC00();
extern int fn_8268CD40();
extern int fn_8270D7A0();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_104;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d4;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_8270E5E8(undefined8 param_1,longlong param_2,float *param_3,undefined8 param_4,
                  float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  double dVar16;
  double extraout_f1;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  lVar8 = fn_82F6A540();
  pfVar6 = (float *)lVar8;
  pfVar6[0x53] = param_5;
  pfVar14 = &fStack_114;
  pfVar6[0x54] = 0.0;
  lVar15 = 9;
  dVar16 = (double)lbl_82002AE0;
  *pfVar6 = (float)(dVar16 / extraout_f1);
  fVar1 = lbl_821AAD20;
  dVar21 = (double)lbl_821AAD20;
  do {
    pfVar14[1] = fVar1;
    pfVar14[2] = fVar1;
    pfVar14[3] = fVar1;
    pfVar14 = pfVar14 + 4;
    *pfVar14 = fVar1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  iVar11 = (int)param_2;
  fStack_108 = *(float *)(iVar11 + 0x60);
  uStack_104 = *(undefined4 *)(iVar11 + 100);
  uStack_f8 = *(undefined4 *)(iVar11 + 0x68);
  uStack_d4 = *(undefined4 *)(iVar11 + 0x6c);
  uStack_10c = *(undefined4 *)(iVar11 + 0x50);
  uStack_110 = *(undefined4 *)(iVar11 + 0x4c);
  uStack_e8 = *(undefined4 *)(iVar11 + 0x54);
  uStack_a4 = *(undefined4 *)(iVar11 + 0x58);
  pfVar6[0x52] = 0.0;
  dVar25 = (double)*param_3;
  dVar24 = (double)param_3[1];
  dVar23 = (double)(float)(dVar16 / (double)(float)((double)param_3[2] - dVar25));
  dVar22 = (double)(float)(dVar16 / (double)(float)((double)param_3[3] - dVar24));
  dVar16 = extraout_f1;
  fStack_100 = fStack_108;
  uStack_fc = uStack_10c;
  uStack_f4 = uStack_104;
  uStack_f0 = uStack_f8;
  uStack_ec = uStack_10c;
  uStack_e4 = uStack_104;
  uStack_e0 = uStack_110;
  uStack_dc = uStack_104;
  fStack_d8 = fStack_108;
  fStack_d0 = fStack_108;
  uStack_cc = uStack_104;
  uStack_c8 = uStack_f8;
  uStack_c4 = uStack_d4;
  uStack_c0 = uStack_f8;
  uStack_bc = uStack_104;
  uStack_b8 = uStack_e8;
  uStack_b4 = uStack_d4;
  uStack_b0 = uStack_110;
  uStack_ac = uStack_d4;
  fStack_a8 = fStack_108;
  fStack_a0 = fStack_108;
  uStack_9c = uStack_d4;
  uStack_98 = uStack_f8;
  uStack_94 = uStack_a4;
  uStack_90 = uStack_f8;
  uStack_8c = uStack_d4;
  uStack_88 = uStack_e8;
  uStack_84 = uStack_a4;
  fn_8268CC00(&fStack_130);
  fn_8268CD40(&fStack_130,param_2 + 0x30);
  pfVar14 = &fStack_108;
  lVar15 = 9;
  do {
    fVar1 = pfVar14[-2];
    fVar2 = param_3[1];
    fVar3 = *param_3;
    fVar4 = param_3[2];
    fVar5 = param_3[3];
    pfVar14[-2] = fStack_12c * pfVar14[-1] + fStack_130 * fVar1 + fStack_128;
    pfVar14[-1] = fStack_120 * pfVar14[-1] + fStack_124 * fVar1 + fStack_11c;
    fVar1 = fStack_120 * pfVar14[1] + fStack_124 * *pfVar14 + fStack_11c;
    *pfVar14 = fStack_12c * pfVar14[1] + *pfVar14 * fStack_130 + fStack_128;
    pfVar14[1] = fVar1;
    if ((((fVar1 < fVar2) || (fVar5 < pfVar14[-1])) || (fVar4 < pfVar14[-2])) ||
       (bVar7 = true, *pfVar14 < fVar3)) {
      bVar7 = false;
    }
    if (bVar7) {
      if (fVar3 < pfVar14[-2]) {
        fVar3 = pfVar14[-2];
      }
      pfVar14[-2] = fVar3;
      if (*pfVar14 <= fVar4) {
        fVar4 = *pfVar14;
      }
      *pfVar14 = fVar4;
      fVar3 = pfVar14[-1];
      if (pfVar14[-1] <= fVar2) {
        fVar3 = fVar2;
      }
      pfVar14[-1] = fVar3;
      if (fVar5 < fVar1) {
        fVar1 = fVar5;
      }
      pfVar14[1] = fVar1;
    }
    else {
      pfVar14[-2] = (float)dVar21;
      pfVar14[-1] = (float)dVar21;
      *pfVar14 = (float)dVar21;
      pfVar14[1] = (float)dVar21;
    }
    dVar20 = (double)pfVar14[-2];
    fVar1 = *pfVar14;
    dVar19 = (double)fVar1;
    if ((dVar19 <= dVar20) || (bVar7 = false, pfVar14[1] <= pfVar14[-1])) {
      bVar7 = true;
    }
    if (!bVar7) {
      fVar2 = pfVar14[-1];
      dVar18 = (double)fVar2;
      fVar3 = pfVar14[1];
      dVar17 = (double)fVar3;
      lVar10 = (ulonglong)(uint)pfVar6[0x52] * 0x24 + lVar8;
      iVar11 = (int)lVar10;
      *(float *)(iVar11 + 4) = pfVar14[-2];
      lVar13 = lVar10 + 0xc;
      *(float *)(iVar11 + 8) = fVar2;
      lVar12 = lVar10 + 0x10;
      *(float *)(iVar11 + 0xc) = fVar1;
      *(float *)(iVar11 + 0x10) = fVar3;
      uVar9 = fn_8270D7A0(param_2,lVar10 + 4,lVar10 + 8);
      iVar11 = (int)lVar10;
      fn_8270D7A0(uVar9,lVar13,lVar12);
      *(float *)(iVar11 + 0x14) = (float)((double)(float)(dVar20 - dVar25) * dVar23);
      *(float *)(iVar11 + 0x18) = (float)((double)(float)(dVar18 - dVar24) * dVar22);
      *(float *)(iVar11 + 0x1c) = (float)((double)(float)(dVar19 - dVar25) * dVar23);
      *(float *)(iVar11 + 0x20) = (float)((double)(float)(dVar17 - dVar24) * dVar22);
      *(float *)(iVar11 + 4) = (float)((double)*(float *)(iVar11 + 4) * dVar16);
      *(float *)(iVar11 + 8) = (float)(dVar16 * (double)*(float *)(iVar11 + 8));
      *(float *)(iVar11 + 0xc) = (float)((double)*(float *)(iVar11 + 0xc) * dVar16);
      *(float *)(iVar11 + 0x10) = (float)((double)*(float *)(iVar11 + 0x10) * dVar16);
      *(undefined4 *)(iVar11 + 0x24) = 0xffffffff;
      pfVar6[0x52] = (float)((int)pfVar6[0x52] + 1);
    }
    lVar15 = lVar15 + -1;
    pfVar14 = pfVar14 + 4;
  } while (lVar15 != 0);
  fn_82F6A58C();
  return;
}

