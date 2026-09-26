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
extern unsigned int *auStack_90;
extern unsigned int fStack_78;
extern unsigned int fStack_8c;
extern int fn_82539560();
extern int fn_8255A0D0();
extern int fn_82577EE0();
extern int fn_8261F100();
extern int fn_82621500();
extern int fn_82621548();
extern int fn_82809400();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82191FC0;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82192330;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821955B4;
extern unsigned int lbl_821959DC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern V16 vectorSubtractFloatingPoint();


void fn_825E0B50(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  int in_r0;
  int *piVar7;
  undefined8 uVar6;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 extraout_f1;
  double extraout_f1_00;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float afStack_a0 [4];
  undefined1 auStack_90 [4];
  float fStack_8c;
  float afStack_80 [2];
  float fStack_78;
  
  piVar7 = (int *)fn_82F6A540();
  dVar20 = (double)lbl_821CC160;
  if ((double)*(float *)(piVar7[8] + 0xd0) == dVar20) {
    *(undefined4 *)(piVar7[0xd] + 0x2ec) = 0;
    *(undefined4 *)(piVar7[0xd] + 0x2c0) = 0;
  }
  else {
    uVar10 = (ulonglong)(uint)piVar7[0xd];
    fVar21 = *(float *)(*piVar7 + 0xa4);
    uVar1 = *(uint *)(piVar7[0xd] + 0x2c0);
    dVar14 = (double)lbl_82192330;
    pfVar2 = (float *)(piVar7[1] + 0x20U & 0xfffffff0);
    fVar24 = *pfVar2;
    fVar25 = pfVar2[1];
    fVar26 = pfVar2[2];
    fVar27 = pfVar2[3];
    pfVar2 = (float *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
    *pfVar2 = fVar24;
    pfVar2[1] = fVar25;
    pfVar2[2] = fVar26;
    pfVar2[3] = fVar27;
    dVar18 = (double)lbl_821CA460;
    dVar19 = (double)fStack_8c;
    afStack_a0[0] = fStack_8c;
    uVar17 = extraout_f1;
    uVar6 = fn_82539560((double)fVar21,(double)lbl_821922D4,dVar14,dVar20,dVar18,param_2);
    iVar11 = uVar1 * 0x30;
    lVar12 = ((ulonglong)uVar1 + 3) * 0x30;
    dVar14 = extraout_f1_00;
    uVar8 = fn_8261F100((double)*(float *)((int)uVar10 + iVar11 + 0xa0),uVar6,
                          lVar12 + (uVar10 & 0xffffffff));
    *(undefined4 *)(piVar7[0xd] + iVar11 + 0x80) = uVar8;
    if ((ulonglong)uVar1 < 3) {
      dVar16 = (double)(*(float *)(piVar7[1] + 0x24) - *(float *)(*piVar7 + 0x8c));
      dVar15 = (double)(float)((double)afStack_a0[0] - dVar16);
      dVar13 = (double)afStack_a0[0];
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar15 < dVar20) << 2) | (uint)(NAN(dVar15) || NAN(dVar20)) << 2)
                    ) < 0.0) {
        dVar13 = dVar16;
      }
    }
    else {
      dVar13 = (double)afStack_a0[0];
    }
    if (lbl_82191FC0 <
        (float)(dVar13 - (double)*(float *)(piVar7[0xd] + 0x2f4)) / *(float *)(piVar7[0xd] + 0x2f8))
    {
      dVar13 = dVar19;
    }
    afStack_a0[0] = (float)dVar20;
    if ((*(int *)(*piVar7 + 0x118) != 0) &&
       (iVar9 = *(int *)(*(int *)(*piVar7 + 0x118) + 0x4c), iVar9 != 0)) {
      iVar9 = *(int *)(iVar9 + 0x8c4);
      if ((iVar9 != 0) &&
         (((iVar9 = fn_82577EE0(iVar9,(ulonglong)(uint)piVar7[0xd] + lVar12,afStack_a0,0),
           iVar9 != 0 && (dVar15 = (double)afStack_a0[0], dVar13 < dVar15)) &&
          (dVar15 < (double)(float)(dVar19 + (double)lbl_821916FC))))) {
        dVar13 = dVar15;
      }
    }
    fVar5 = lbl_821917D4;
    *(float *)(piVar7[0xd] + iVar11 + 0x84) = (float)dVar13;
    pfVar2 = (float *)(piVar7[0xd] + (int)lVar12 & 0xfffffff0);
    fVar21 = pfVar2[1];
    fVar22 = pfVar2[2];
    fVar23 = pfVar2[3];
    pfVar3 = (float *)((int)afStack_80 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar24 - *pfVar2;
    pfVar3[1] = fVar25 - fVar21;
    pfVar3[2] = fVar26 - fVar22;
    pfVar3[3] = fVar27 - fVar23;
    fVar21 = SQRT(fStack_78 * fStack_78 + afStack_80[0] * afStack_80[0]);
    if (fVar21 <= fVar5) {
      *(float *)(piVar7[0xd] + iVar11 + 0x88) = (float)dVar20;
    }
    else {
      dVar13 = (double)fn_82809400((double)((float)(dVar13 - dVar19) / fVar21));
      *(float *)(piVar7[0xd] + iVar11 + 0x88) = (float)dVar13;
    }
    if (*(int *)(piVar7[0xd] + 0x2c0) == 0xb) {
      *(undefined4 *)(piVar7[0xd] + 0x2ec) = 1;
    }
    *(int *)(piVar7[0xd] + 0x2c0) = *(int *)(piVar7[0xd] + 0x2c0) + 1;
    *(uint *)(piVar7[0xd] + 0x2c0) = *(uint *)(piVar7[0xd] + 0x2c0) % 0xc;
    fVar21 = *(float *)(piVar7[0xd] + 0x2f0);
    *(float *)(piVar7[0xd] + 0x2f0) = (float)dVar19;
    if (*(int *)(piVar7[0xd] + 0x2ec) != 0) {
      iVar11 = piVar7[0xd];
      iVar9 = 0;
      lVar12 = 0xc;
      dVar13 = dVar20;
      do {
        *(float *)(iVar9 + iVar11 + 0x84) =
             *(float *)(iVar9 + iVar11 + 0x84) + (float)(dVar19 - (double)fVar21);
        iVar11 = piVar7[0xd];
        iVar4 = iVar9 + iVar11;
        iVar9 = iVar9 + 0x30;
        dVar13 = (double)(float)((double)*(float *)(iVar4 + 0x84) + dVar13);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      afStack_a0[0] = (float)dVar20;
      *(float *)(iVar11 + 0x304) = (float)(dVar13 * (double)lbl_821959DC);
      fStack_8c = *(float *)(piVar7[0xd] + 0xb4);
      vectorSubtractFloatingPoint(in_vs45,in_vs32);
      fn_8255A0D0(afStack_a0);
      dVar19 = (double)afStack_a0[0];
      dVar20 = (double)fn_82539560(dVar19,dVar20,(double)lbl_821955B4,dVar20,
                                    (double)*(float *)(piVar7[3] + 8));
      fn_82621500((double)((float)(dVar18 - dVar14) * (float)(dVar19 - dVar20) +
                           (float)((double)*(float *)(*piVar7 + 0x94) * dVar14)),
                   (ulonglong)(uint)piVar7[0xd] + 0x2c4);
      fn_82621548(uVar17);
    }
  }
  fn_82F6A58C();
  return;
}

