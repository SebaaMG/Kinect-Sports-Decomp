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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82A6B4B0();
extern int fn_82A810C8();
extern int fn_82C2B580();
extern int fn_82C2B590();
extern int fn_82C449E8();
extern int fn_82F64318();
extern int fn_82F643F8();
extern int fn_82F64A40();
extern int fn_82F655D8();
extern int fn_82F6A52C();
extern int fn_82F6A578();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_82015610;
extern unsigned int lbl_82015618;
extern unsigned int lbl_820570B0;
extern unsigned int lbl_8208DE58;
extern unsigned int lbl_8208ED68;
extern float lbl_8208ED70;
extern float lbl_8208ED78;
extern unsigned int lbl_8208ED80;
extern unsigned int lbl_8208ED98;


void fn_82C2DB48(undefined8 param_1,ulonglong param_2,int param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  double *pdVar7;
  undefined8 uVar4;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  double *pdVar16;
  double dVar17;
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
  
  iVar5 = fn_82F6A52C();
  uVar10 = 0;
  dVar20 = extraout_f1;
  fn_82A6B4B0();
  if (((10000000 < (int)param_5) || (0x1fffffff < (int)param_2)) || (0x3fffffff < (int)param_2)) {
    fn_82F6A578(0xffffffff80070057);
    return;
  }
  lVar14 = (param_2 & 0x7fffffff) * 2;
  lVar12 = (param_2 & 0x3fffffff) * 4 + 1;
  lVar11 = lVar14 + 1;
  uVar15 = lVar12 * 8 & 0xfffffff8;
  iVar6 = fn_82C2B580(uVar15);
  if (iVar6 == 0) {
    fn_82F6A578(0xffffffff8007000e);
    return;
  }
  pdVar7 = (double *)fn_82C2B580(uVar15);
  if ((pdVar7 != (double *)0x0) &&
     (uVar10 = fn_82C2B580(lVar11 * 8 & 0xfffffff8), dVar19 = lbl_8208ED98, dVar28 = lbl_82005758,
     dVar23 = lbl_82005710, dVar18 = lbl_82002C40, (uVar10 & 0xffffffff) != 0)) {
    uVar15 = (-param_2 & 0x7fffffff) << 1;
    if (0 < (int)lVar12) {
      dVar27 = SQRT(lbl_82002C40);
      uVar13 = uVar15;
      pdVar16 = pdVar7;
      do {
        if ((int)uVar13 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F64318((double)(longlong)(int)((uVar13 & 0xffffffff) << 1) * dVar19);
        }
        *(double *)((iVar6 - (int)pdVar7) + (int)pdVar16) = dVar28 / dVar27;
        *pdVar16 = dVar23;
        lVar12 = lVar12 + -1;
        pdVar16 = pdVar16 + 1;
        uVar13 = uVar13 + 1;
      } while (lVar12 != 0);
    }
    dVar19 = lbl_8208DE58;
    lVar12 = -param_2;
    iVar8 = (int)lVar11;
    if (0 < iVar8) {
      pdVar16 = (double *)uVar10;
      *pdVar16 = dVar23;
      if ((int)uVar15 <= (int)-(lVar14 + param_2)) {
        uVar15 = -(lVar14 + param_2);
      }
      while( true ) {
        lVar11 = lVar14;
        if ((int)(lVar14 - param_2) <= (int)lVar14) {
          lVar11 = lVar14 - param_2;
        }
        if ((int)lVar11 <= (int)uVar15) break;
        lVar11 = lVar14 - uVar15;
        uVar10 = lVar14 + uVar15;
        uVar15 = uVar15 + 1;
        *pdVar16 = *(double *)((int)((lVar11 + lVar12 & 0xffffffffU) << 3) + (int)pdVar7) *
                   *(double *)((int)((uVar10 & 0xffffffff) << 3) + iVar6) + *pdVar16;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F643F8(((double)(longlong)(int)lVar12 / (double)(longlong)iVar8) * dVar19);
    }
    uVar4 = lbl_82015618;
    dVar19 = (double)fn_82F655D8(lbl_82015618,lbl_820570B0);
    dVar27 = (double)fn_82F655D8(uVar4,lbl_8208ED80);
    uVar15 = 0;
    dVar25 = dVar19 * dVar18 + dVar27 + dVar28;
    dVar23 = ((dVar23 * dVar18 + dVar28) * dVar19 + dVar28 + dVar27) * lbl_8208ED78;
    if (3 < iVar8) {
      dVar17 = dVar28 / dVar25;
      lVar9 = uVar10 - 8;
      do {
        iVar3 = (int)lVar9;
        uVar15 = uVar15 + 4;
        *(double *)(iVar3 + 8) = dVar17 * *(double *)(iVar3 + 8) * dVar19 * dVar18;
        *(double *)(iVar3 + 0x10) = dVar17 * *(double *)(iVar3 + 0x10) * dVar19 * dVar18;
        *(double *)(iVar3 + 0x18) = dVar17 * *(double *)(iVar3 + 0x18) * dVar19 * dVar18;
        lVar9 = lVar9 + 0x20;
        *(double *)lVar9 = dVar17 * *(double *)(iVar3 + 0x20) * dVar19 * dVar18;
      } while ((int)uVar15 < (int)lVar14 + -2);
    }
    if ((int)uVar15 < iVar8) {
      lVar11 = lVar11 - uVar15;
      lVar14 = (uVar15 & 0x1fffffff) * 8 + uVar10 + -8;
      do {
        iVar8 = (int)lVar14;
        lVar14 = lVar14 + 8;
        *(double *)lVar14 = (dVar28 / dVar25) * *(double *)(iVar8 + 8) * dVar19 * dVar18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    dVar26 = dVar28 / dVar25;
    *(float *)(iVar5 + 0x68) = (float)dVar20;
    dVar17 = (double)(float)(dVar25 / dVar25);
    *(float *)(iVar5 + 0x6c) = (float)(dVar25 / dVar25);
    dVar18 = dVar20;
    if (dVar20 <= (double)(float)(dVar20 * dVar26 * dVar23 + dVar28)) {
      dVar18 = (double)(float)(dVar20 * dVar26 * dVar23 + dVar28);
    }
    *(float *)(iVar5 + 0x8c) = (float)dVar18;
    dVar25 = (double)(longlong)param_3;
    fVar1 = (float)(dVar20 / dVar17) * lbl_8208ED70;
    dVar22 = (double)fVar1;
    dVar24 = (double)lbl_8200D898;
    *(float *)(iVar5 + 0x68) = (float)(dVar20 - dVar24);
    *(float *)(iVar5 + 0x84) = fVar1;
    dVar23 = lbl_8208ED68;
    dVar21 = dVar25 * lbl_82015610;
    fVar1 = (float)(dVar17 * dVar22);
    *(float *)(iVar5 + 0x88) = fVar1;
    fVar2 = (float)(dVar22 - dVar18);
    *(float *)(iVar5 + 0x90) = (fVar1 - (float)(dVar20 - dVar24)) / (fVar2 * fVar2);
    dVar20 = (double)fn_82F64A40(dVar23 / dVar21);
    dVar25 = dVar25 * lbl_82005730;
    *(float *)(iVar5 + 0x74) = (float)(dVar28 - dVar20);
    dVar20 = (double)fn_82F64A40(dVar23 / dVar25);
    *(undefined4 *)(iVar5 + 0x70) = *(undefined4 *)(iVar5 + 0x6c);
    fVar1 = lbl_82002AE0;
    *(float *)(iVar5 + 0x78) = lbl_82002AE0 - *(float *)(iVar5 + 0x74);
    *(float *)(iVar5 + 0x7c) = (float)(dVar28 - dVar20);
    *(float *)(iVar5 + 0x80) = fVar1 - (float)(dVar28 - dVar20);
    uVar4 = fn_82A810C8(iVar5,uVar10,lVar12,param_2);
    if ((((int)uVar4 < 0) || (uVar4 = fn_82C449E8(dVar26,iVar5 + 0x18), (int)uVar4 < 0)) ||
       ((uVar4 = fn_82C449E8(dVar26,iVar5 + 0x2c), (int)uVar4 < 0 ||
        ((uVar4 = fn_82C449E8(dVar26 * dVar19,iVar5 + 0x40), (int)uVar4 < 0 ||
         (uVar4 = fn_82C449E8(dVar26 * dVar27,iVar5 + 0x54), (int)uVar4 < 0))))))
    goto LAB_82c2e0a0;
    *(int *)(iVar5 + 0x98) = (int)param_5;
    iVar8 = fn_82C2B580(param_5 * 0x1c);
    *(int *)(iVar5 + 0x94) = iVar8;
    if (iVar8 != 0) goto LAB_82c2e0a0;
  }
  uVar4 = 0xffffffff8007000e;
LAB_82c2e0a0:
  fn_82C2B590(iVar6);
  if (pdVar7 != (double *)0x0) {
    fn_82C2B590(pdVar7);
  }
  if ((uVar10 & 0xffffffff) != 0) {
    fn_82C2B590(uVar10);
  }
  fn_82F6A578(uVar4);
  return;
}

