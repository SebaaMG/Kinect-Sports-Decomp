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
extern unsigned int *auStack_d0;
extern unsigned int fStack_100;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_827ECB80();
extern int fn_82809CB0();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820069B4;
extern unsigned int lbl_821AAD20;


void fn_827ED1F0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float afStack_f0 [4];
  float afStack_e0 [4];
  undefined4 auStack_d0 [4];
  float afStack_c0 [4];
  float afStack_b0 [4];
  float afStack_a0 [40];
  
  uVar3 = fn_82F6A530();
  auStack_d0[0] = (undefined4)uVar3;
  auStack_d0[1] = (undefined4)param_2;
  auStack_d0[2] = (undefined4)param_3;
  fn_82810328(param_5,param_4,afStack_b0);
  fn_82810328(param_6,param_4,afStack_a0);
  fn_82810240(afStack_b0,afStack_a0,&fStack_100);
  dVar9 = (double)fn_82810280(&fStack_100,param_4);
  dVar9 = -dVar9;
  dVar10 = (double)fn_82810280(&fStack_100,uVar3);
  afStack_c0[0] = (float)(dVar10 + dVar9);
  dVar20 = (double)afStack_c0[0];
  dVar10 = (double)fn_82810280(&fStack_100,param_2);
  afStack_c0[1] = (float)(dVar10 + dVar9);
  dVar18 = (double)afStack_c0[1];
  dVar10 = (double)fn_82810280(&fStack_100,param_3);
  afStack_c0[2] = (float)(dVar10 + dVar9);
  dVar10 = (double)afStack_c0[2];
  dVar9 = (double)fn_82810308(&fStack_100);
  if ((float)(dVar20 * dVar20 + (double)(float)(dVar10 * dVar10 + (double)(float)(dVar18 * dVar18)))
      < (float)(dVar9 * (double)lbl_820069B4)) {
    uVar3 = fn_827ECB80(uVar3,param_2,param_3,param_4,afStack_b0,afStack_a0,&fStack_100);
    goto LAB_827ed63c;
  }
  dVar9 = (double)lbl_821AAD20;
  if ((((dVar9 < dVar20) && (dVar9 < dVar18)) && (dVar9 < dVar10)) ||
     (((dVar20 < dVar9 && (dVar18 < dVar9)) && (dVar10 < dVar9)))) goto LAB_827ed638;
  if ((double)(float)(dVar18 * dVar20) <= dVar9) {
    iVar6 = 2;
    if ((double)(float)(dVar10 * dVar20) <= dVar9) {
      iVar8 = 0;
      iVar7 = 1;
    }
    else {
      iVar8 = 1;
      iVar7 = 0;
    }
  }
  else {
    iVar8 = 2;
    iVar7 = 0;
    iVar6 = 1;
  }
  dVar10 = (double)fn_82809CB0((double)fStack_100);
  dVar18 = (double)fn_82809CB0((double)fStack_fc);
  if (dVar10 <= dVar18) {
    dVar10 = (double)fn_82809CB0((double)fStack_f8);
    dVar18 = (double)fn_82809CB0((double)fStack_fc);
    iVar4 = 1;
    if (dVar10 <= dVar18) {
      iVar4 = 2;
    }
LAB_827ed3d0:
    iVar5 = 0;
  }
  else {
    dVar10 = (double)fn_82809CB0((double)fStack_f8);
    dVar18 = (double)fn_82809CB0((double)fStack_100);
    if (dVar18 < dVar10) {
      iVar4 = 1;
      goto LAB_827ed3d0;
    }
    iVar5 = 1;
    iVar4 = 2;
  }
  uVar2 = auStack_d0[iVar8];
  dVar16 = (double)afStack_b0[iVar5];
  dVar15 = (double)afStack_b0[iVar4];
  dVar20 = (double)afStack_a0[iVar5];
  dVar18 = (double)afStack_a0[iVar4];
  fn_82810328(auStack_d0[iVar7],uVar2,afStack_f0);
  dVar19 = (double)afStack_c0[iVar8];
  fn_82810558((double)(float)(dVar19 / (double)(float)(dVar19 - (double)afStack_c0[iVar7])),
               afStack_f0,uVar2);
  fn_82810328(afStack_f0,param_4,afStack_f0);
  dVar10 = (double)(float)(dVar18 * dVar16 - (double)(float)(dVar20 * dVar15));
  fVar1 = lbl_82002AE0;
  if (dVar10 < 0.0) {
    fVar1 = lbl_8200133C;
  }
  dVar21 = (double)fVar1;
  dVar13 = (double)(float)(dVar21 * dVar10);
  dVar10 = (double)(float)((double)(float)((double)afStack_f0[iVar5] * dVar18 -
                                          (double)(float)((double)afStack_f0[iVar4] * dVar20)) *
                          dVar21);
  dVar14 = (double)(float)((double)(float)((double)afStack_f0[iVar4] * dVar16 -
                                          (double)(float)((double)afStack_f0[iVar5] * dVar15)) *
                          dVar21);
  if (((dVar13 < (double)(float)(dVar10 + dVar14)) || (dVar14 < dVar9)) || (dVar10 < dVar9)) {
    fn_82810328(auStack_d0[iVar6],uVar2,afStack_e0);
    fn_82810558((double)(float)(dVar19 / (double)(float)(dVar19 - (double)afStack_c0[iVar6])),
                 afStack_e0,uVar2);
    fn_82810328(afStack_e0,param_4,afStack_e0);
    dVar18 = (double)(float)((double)(float)((double)afStack_e0[iVar5] * dVar18 -
                                            (double)(float)((double)afStack_e0[iVar4] * dVar20)) *
                            dVar21);
    dVar20 = (double)(float)((double)(float)((double)afStack_e0[iVar4] * dVar16 -
                                            (double)(float)((double)afStack_e0[iVar5] * dVar15)) *
                            dVar21);
    if (((dVar13 < (double)(float)(dVar18 + dVar20)) || (dVar20 < dVar9)) || (dVar18 < dVar9)) {
      dVar21 = (double)(float)(dVar10 - dVar18);
      dVar17 = (double)(float)(dVar14 - dVar20);
      dVar11 = (double)fn_82809CB0(dVar21);
      dVar12 = (double)fn_82809CB0(dVar17);
      dVar15 = dVar14;
      dVar16 = dVar20;
      dVar19 = dVar17;
      if (dVar11 < dVar12) {
        dVar15 = dVar10;
        dVar10 = dVar14;
        dVar16 = dVar18;
        dVar19 = dVar21;
        dVar18 = dVar20;
        dVar21 = dVar17;
      }
      dVar20 = (double)(float)(dVar21 * dVar15 - (double)(float)(dVar19 * dVar10));
      if (dVar21 <= dVar9) {
        if ((dVar20 <= dVar9) && ((double)(float)(dVar21 * dVar13) <= dVar20)) goto LAB_827ed5bc;
      }
      else if ((dVar9 <= dVar20) && (dVar20 <= (double)(float)(dVar21 * dVar13))) {
LAB_827ed5bc:
        if ((double)(float)(dVar18 * dVar10) <= dVar9) goto LAB_827ed4bc;
      }
      if (dVar19 <= dVar9) {
        if (((dVar9 <= dVar20) && ((double)(float)(dVar19 * dVar13) <= -dVar20)) &&
           (uVar3 = 1, (double)(float)(dVar16 * dVar15) <= dVar9)) goto LAB_827ed63c;
      }
      else if (((dVar20 <= dVar9) && (-dVar20 <= (double)(float)(dVar19 * dVar13))) &&
              ((double)(float)(dVar16 * dVar15) <= dVar9)) goto LAB_827ed4bc;
LAB_827ed638:
      uVar3 = 0;
      goto LAB_827ed63c;
    }
  }
LAB_827ed4bc:
  uVar3 = 1;
LAB_827ed63c:
  fn_82F6A57C(uVar3);
  return;
}

