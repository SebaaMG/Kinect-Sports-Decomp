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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8297FBF0();
extern int fn_829803A8();
extern int fn_829860E0();
extern int fn_82F64318();
extern int fn_82F643F8();
extern int fn_82F64A40();
extern int fn_82F64F30();
extern int fn_82F65018();
extern int fn_82F655D8();
extern int fn_82F65D50();
extern int fn_82F65E18();
extern int fn_82F65E20();
extern int fn_82F67DE8();
extern int fn_82F68918();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6A7A0();
extern int fn_82F6B2A8();
extern int fn_82F6DFB0();
extern int fn_82F6DFD0();
extern int fn_82F6E018();
extern int fn_82F6EF10();
extern int fn_82F6F010();
extern int fn_82F6F278();
extern int iRam00000010;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_820105A0;
extern unsigned int lbl_82015618;
extern float lbl_8202DDF8;
extern unsigned int lbl_8202DE58;
extern unsigned int lbl_8202DE60;
extern unsigned int uRam00000014;
extern unsigned int uRam00000018;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;


/* WARNING: Removing unreachable block (ram,0x82982518) */
/* WARNING: Removing unreachable block (ram,0x8298252c) */
/* WARNING: Removing unreachable block (ram,0x82982548) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82981DF8(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  double *pdVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  double *pdVar15;
  uint uVar16;
  longlong lVar14;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int aiStack_a0 [8];

  uVar3 = fn_82F6A548();
  if ((param_2 & 0xffffffff) == 0) {
    if ((param_3 & 0xffffffff) == 0) {
      lVar4 = 0;
      goto LAB_8298336c;
    }
LAB_82983364:
    lVar4 = -0x7fffbffb;
    goto LAB_8298336c;
  }
  iVar6 = (int)param_2;
  if ((*(int *)(iVar6 + 4) != 0xe) ||
     (uVar19 = (longlong)*(int *)(iVar6 + 0x14) * (longlong)*(int *)(iVar6 + 0x18),
     *(int *)(iVar6 + 0x1c) != 0x20)) goto LAB_82983364;
  iVar1 = *(int *)(iVar6 + 0x24);
  iVar18 = *(int *)(iVar1 + 8);
  uStack_b0 = 0;
  aiStack_a0[2] = 0;
  aiStack_a0[3] = 0;
  aiStack_a0[6] = 0;
  aiStack_a0[7] = 0;
  uStack_a8 = 0;
  if (iVar18 != 0) {
    iVar7 = 0;
    do {
      iVar11 = *(int *)(iVar18 + 8);
      if ((iVar11 != 0) && (*(int *)(iVar11 + 4) == 0xe)) {
        uVar12 = (longlong)*(int *)(iVar11 + 0x18) * (longlong)*(int *)(iVar11 + 0x14);
        *(int *)((int)aiStack_a0 + iVar7) = iVar11;
        *(int *)((int)aiStack_a0 + iVar7 + 0x10) = (int)uVar12;
        lVar5 = fn_8265C940((uVar12 & 0xfffffff) << 4,0x24810000);
        *(int *)((int)&uStack_b0 + iVar7) = (int)lVar5;
        if (lVar5 == 0) {
          lVar4 = -0x7ff8fff2;
          goto LAB_8298333c;
        }
        lVar4 = fn_829860E0(uVar3,*(undefined4 *)((int)aiStack_a0 + iVar7),lVar5);
        if (lVar4 < 0) goto LAB_8298333c;
        uVar12 = 0;
        if (*(int *)((int)aiStack_a0 + iVar7 + 0x10) != 0) {
          lVar13 = 0;
          do {
            lVar9 = lVar5 + lVar13;
            lVar4 = fn_8297FBF0(uVar3,lVar9 + 8);
            if (lVar4 < 0) goto LAB_8298333c;
            uVar10 = *(uint *)((int)aiStack_a0 + iVar7 + 0x10);
            uVar12 = uVar12 + 1;
            *(undefined4 *)lVar9 = 3;
            lVar13 = lVar13 + 0x10;
          } while ((uVar12 & 0xffffffff) < (ulonglong)uVar10);
        }
      }
      iVar18 = *(int *)(iVar18 + 0xc);
      iVar7 = iVar7 + 4;
    } while (iVar18 != 0);
  }
  dVar27 = lbl_8202DE60;
  dVar28 = lbl_8202DE58;
  dVar24 = lbl_8202DDF8;
  dVar26 = lbl_820105A0;
  dVar35 = lbl_8200E890;
  dVar34 = lbl_82005758;
  dVar22 = lbl_82005710;
  dVar23 = lbl_82002C40;
  uVar10 = uRam00000018;
  iVar18 = (int)param_3;
  switch(*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x20) + 8) + 0x18)) {
  case 0:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        *(double *)lVar4 = ABS(*(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18) + (int)(double *)lVar4));
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 1:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      dVar23 = lbl_82005758;
      dVar22 = lbl_8200E890;
      do {
        if ((*pdVar15 < dVar22) || (dVar23 < *pdVar15)) goto switchD_82981f8c_caseD_5;
        uVar25 = fn_82F65E18();
        uVar12 = uVar12 + 1;
        *(undefined8 *)(iVar18 + (int)pdVar15) = uVar25;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 2:
    uVar12 = 0;
    *(double *)(iVar18 + 8) = lbl_82005758;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      do {
        dVar23 = lbl_82005710;
        if (*pdVar15 == lbl_82005710) goto LAB_829820b4;
        uVar12 = uVar12 + 1;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 3:
    uVar12 = 0;
    *(double *)(iVar18 + 8) = lbl_82005710;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      do {
        dVar23 = lbl_82005758;
        if (*pdVar15 != dVar22) goto LAB_829820b4;
        uVar12 = uVar12 + 1;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 4:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      dVar23 = lbl_82005758;
      dVar22 = lbl_8200E890;
      do {
        if ((*pdVar15 < dVar22) || (dVar23 < *pdVar15)) goto switchD_82981f8c_caseD_5;
        uVar25 = fn_82F65D50();
        uVar12 = uVar12 + 1;
        *(undefined8 *)((int)pdVar15 + iVar18) = uVar25;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  default:
    goto switchD_82981f8c_caseD_5;
  case 6:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F64F30(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 7:
    if ((uVar19 & 0xffffffff) != 0) {
      puVar21 = (undefined8 *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      iVar6 = (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F65018(*puVar21,*(undefined8 *)(iVar6 + (int)puVar21));
        *(undefined8 *)((int)puVar21 + iVar18) = uVar25;
        uVar12 = uVar12 - 1;
        puVar21 = puVar21 + 2;
      } while (uVar12 != 0);
    }
    break;
  case 8:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F6B2A8(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 9:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        dVar23 = *(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15);
        dVar22 = *(double *)(((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15);
        if ((dVar23 < dVar22) || (dVar22 = *pdVar15, dVar22 < dVar23)) {
          *(double *)((iVar18 - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15) = dVar22;
        }
        else {
          *(double *)((iVar18 - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15) = dVar23;
        }
        pdVar15 = pdVar15 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0xb:
    if ((uVar19 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F643F8(*(undefined8 *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8));
    }
    break;
  case 0xc:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F6F278(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0xd:
    *(double *)(iVar18 + 8) =
         *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18) * *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 0x28) -
         *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 0x18) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28);
    *(double *)(iVar18 + 0x18) =
         *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28) -
         *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) * *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 0x28);
    *(double *)(iVar18 + 0x28) =
         *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 0x18) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) -
         *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18);
    break;
  case 0x10:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 - 8;
      uVar12 = uVar19;
      do {
        lVar4 = lVar4 + 0x10;
        *(double *)lVar4 = dVar22;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x11:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 - 8;
      uVar12 = uVar19;
      do {
        lVar4 = lVar4 + 0x10;
        *(double *)lVar4 = dVar22;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x12:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        *(double *)lVar4 = *(double *)((int)(double *)lVar4 + ((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18)) * dVar27;
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x13:
    if (uRam00000014 == 1) {
      dVar23 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
    }
    else if (uRam00000014 == 2) {
      dVar23 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x38) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) -
               *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18);
    }
    else if (uRam00000014 == 3) {
      dVar23 = (*(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x38) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x78) -
               *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x68) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x48)) *
               *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28) +
               ((*(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x48) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x88) -
                *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x58) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x78)) *
                *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) -
               (*(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x38) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x88) -
               *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x68) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x58)) *
               *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18));
    }
    else {
      if (uRam00000014 != 4) goto switchD_82981f8c_caseD_5;
      dVar23 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0xb8);
      dVar33 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 200);
      dVar24 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0xa8);
      dVar30 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0xe8);
      dVar29 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0xd8);
      dVar26 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x98);
      dVar31 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0xf8);
      dVar28 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x88);
      dVar34 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x68);
      dVar37 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x58);
      dVar22 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x48);
      dVar36 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x78);
      dVar32 = dVar28 * dVar31 - dVar33 * dVar23;
      dVar35 = dVar28 * dVar30 - dVar33 * dVar24;
      dVar27 = dVar24 * dVar31 - dVar23 * dVar30;
      dVar23 = dVar26 * dVar31 - dVar29 * dVar23;
      dVar28 = dVar28 * dVar29 - dVar33 * dVar26;
      dVar26 = dVar26 * dVar30 - dVar29 * dVar24;
      dVar23 = -((dVar28 * dVar34 + (dVar22 * dVar26 - dVar35 * dVar37)) *
                 *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x38) -
                ((dVar28 * dVar36 + (dVar22 * dVar23 - dVar32 * dVar37)) *
                 *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28) +
                ((dVar36 * dVar26 + (dVar37 * dVar27 - dVar34 * dVar23)) *
                 *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) -
                (dVar35 * dVar36 + (dVar22 * dVar27 - dVar32 * dVar34)) *
                *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18))));
    }
    goto LAB_829820b4;
  case 0x15:
    dVar23 = lbl_82005710;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        pdVar2 = (double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15);
        dVar22 = *pdVar15;
        pdVar15 = pdVar15 + 2;
        dVar22 = *pdVar2 - dVar22;
        dVar23 = dVar22 * dVar22 + dVar23;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    dVar23 = SQRT(dVar23);
    goto LAB_829820b4;
  case 0x16:
    *(double *)(iVar18 + 8) = lbl_82005710;
    break;
  case 0x17:
    *(double *)(iVar18 + 8) = lbl_82005758;
    *(double *)(iVar18 + 0x18) =
         *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 0x18) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18);
    *(undefined8 *)(iVar18 + 0x28) = *(undefined8 *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28);
    dVar24 = *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 0x38);
    goto LAB_829832d0;
  case 0x18:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F64A40(*(undefined8 *)(iVar18 + (int)(undefined8 *)lVar4));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x19:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F655D8(dVar23,*(undefined8 *)(iVar18 + (int)(undefined8 *)lVar4));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x1a:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      dVar23 = lbl_82005710;
      do {
        pdVar2 = (double *)(((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15);
        dVar34 = *pdVar15;
        pdVar15 = pdVar15 + 2;
        dVar23 = *pdVar2 * dVar34 + dVar23;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if ((uVar19 & 0xffffffff) != 0) {
        pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
        uVar12 = uVar19;
        do {
          dVar34 = *pdVar15;
          if (dVar22 <= dVar23) {
            dVar34 = -dVar34;
          }
          *(double *)((iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF)) + (int)pdVar15) = dVar34;
          pdVar15 = pdVar15 + 2;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    break;
  case 0x1b:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F68918(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x1c:
    if ((uVar19 & 0xffffffff) != 0) {
      puVar21 = (undefined8 *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      iVar6 = (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F6A7A0(*puVar21,*(undefined8 *)(iVar6 + (int)puVar21));
        *(undefined8 *)((int)puVar21 + iVar18) = uVar25;
        uVar12 = uVar12 - 1;
        puVar21 = puVar21 + 2;
      } while (uVar12 != 0);
    }
    break;
  case 0x1d:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      uVar12 = uVar19;
      dVar23 = lbl_82005710;
      do {
        iVar6 = fn_82F6DFB0(*pdVar15);
        if (iVar6 == 0) {
          *(double *)((int)pdVar15 + iVar18) = dVar23;
        }
        else {
          dVar22 = (double)fn_82F68918(*pdVar15);
          *(double *)((int)pdVar15 + iVar18) = *pdVar15 - dVar22;
        }
        uVar12 = uVar12 - 1;
        pdVar15 = pdVar15 + 2;
      } while (uVar12 != 0);
    }
    break;
  case 0x1f:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 - 8;
      uVar12 = uVar19;
      do {
        lVar4 = lVar4 + 0x10;
        *(double *)lVar4 = dVar22;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x20:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      dVar23 = lbl_82005710;
      dVar22 = lbl_82005758;
      do {
        iVar6 = fn_82F6DFB0(*(undefined8 *)((int)(double *)lVar4 + iVar18));
        dVar34 = dVar23;
        if (iVar6 != 0) {
          dVar34 = dVar22;
        }
        *(double *)lVar4 = dVar34;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x21:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      dVar23 = lbl_82005710;
      dVar22 = lbl_82005758;
      do {
        iVar6 = fn_82F6DFB0(*(undefined8 *)((int)(double *)lVar4 + iVar18));
        dVar34 = dVar22;
        if (iVar6 != 0) {
          dVar34 = dVar23;
        }
        *(double *)lVar4 = dVar34;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x22:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      dVar23 = lbl_82005710;
      dVar22 = lbl_82005758;
      do {
        iVar6 = fn_82F6DFD0(*(undefined8 *)((int)(double *)lVar4 + iVar18));
        dVar34 = dVar23;
        if (iVar6 != 0) {
          dVar34 = dVar22;
        }
        *(double *)lVar4 = dVar34;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x23:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      iVar6 = (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      uVar12 = uVar19;
      do {
        dVar22 = (double)fn_82F655D8(dVar23,*(undefined8 *)((int)pdVar15 + iVar6));
        *(double *)((int)pdVar15 + iVar18) = dVar22 * *pdVar15;
        uVar12 = uVar12 - 1;
        pdVar15 = pdVar15 + 2;
      } while (uVar12 != 0);
    }
    break;
  case 0x24:
    dVar23 = lbl_82005710;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + -8);
      uVar12 = uVar19;
      do {
        pdVar15 = pdVar15 + 2;
        dVar23 = *pdVar15 * *pdVar15 + dVar23;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    dVar23 = SQRT(dVar23);
LAB_829820b4:
    *(double *)(iVar18 + 8) = dVar23;
    break;
  case 0x25:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        *(double *)((int)pdVar15 + (iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF))) =
             (*(double *)
               ((int)pdVar15 +
               ((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + ((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF))) - *pdVar15
             ) * *(double *)(((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF)) + (int)pdVar15) + *pdVar15;
        pdVar15 = pdVar15 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x26:
    *(double *)(iVar18 + 8) = lbl_82005758;
    *(double *)(iVar18 + 0x28) = dVar22;
    *(double *)(iVar18 + 0x38) = dVar34;
    *(double *)(iVar18 + 0x18) = dVar22;
    if (dVar22 < *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8)) {
      *(double *)(iVar18 + 0x18) = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      if (dVar22 < *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8)) {
        uVar25 = fn_82F655D8(*(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8),
                                   *(undefined8 *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8));
        *(undefined8 *)(iVar18 + 0x28) = uVar25;
      }
    }
    break;
  case 0x28:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      dVar23 = lbl_82005710;
      do {
        if (*pdVar15 <= dVar23) goto switchD_82981f8c_caseD_5;
        uVar25 = fn_82F65E20();
        uVar12 = uVar12 + 1;
        *(undefined8 *)((int)pdVar15 + iVar18) = uVar25;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 0x29:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      uVar25 = lbl_82015618;
      dVar23 = lbl_82005710;
      do {
        if (*pdVar15 <= dVar23) goto switchD_82981f8c_caseD_5;
        dVar22 = (double)fn_82F65E20();
        dVar34 = (double)fn_82F65E20(uVar25);
        uVar12 = uVar12 + 1;
        *(double *)((int)pdVar15 + iVar18) = dVar22 / dVar34;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 0x2a:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      do {
        if (*pdVar15 <= dVar22) goto switchD_82981f8c_caseD_5;
        dVar34 = (double)fn_82F65E20();
        dVar35 = (double)fn_82F65E20(dVar23);
        uVar12 = uVar12 + 1;
        *(double *)(iVar18 + (int)pdVar15) = dVar34 / dVar35;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 0x2b:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        dVar23 = *(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15);
        if (dVar23 <= *pdVar15) {
          dVar23 = *pdVar15;
        }
        *(double *)((iVar18 - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15) = dVar23;
        pdVar15 = pdVar15 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x2c:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        dVar23 = *(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15);
        if (*pdVar15 <= dVar23) {
          dVar23 = *pdVar15;
        }
        *(double *)((int)pdVar15 + (iVar18 - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF))) = dVar23;
        pdVar15 = pdVar15 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x2e:
  case 0x2f:
  case 0x30:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        *(double *)lVar4 =
             *(double *)(((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - iVar18) + (int)(double *)lVar4) *
             *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x31:
  case 0x34:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        *(double *)lVar4 =
             *(double *)((int)(double *)lVar4 + ((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18)) *
             *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x32:
  case 0x33:
  case 0x35:
  case 0x36:
    uVar12 = (ulonglong)uRam00000014;
    uVar16 = uRam00000014;
    uVar17 = uRam00000018;
    if (*(int *)(iRam00000010 + 0x10) == 1) {
      uVar16 = uRam00000018;
      uVar17 = uRam00000014;
    }
    if ((uRam00000018 == uVar16) &&
       (((longlong)(int)uVar17 * (longlong)(int)uRam00000014 & 0xffffffffU) == (uVar19 & 0xffffffff)
       )) {
      if (uRam00000014 != 0) {
        lVar5 = ((ulonglong)uVar17 & 0xfffffff) * 0x10;
        iVar6 = 0;
        lVar4 = param_3 + 8;
        do {
          if (uVar17 != 0) {
            lVar13 = lVar4 + -0x10;
            lVar9 = (uStack_b0 & 0xffffffff) + 8;
            uVar8 = (ulonglong)uVar17;
            do {
              iVar18 = 0;
              dVar23 = dVar22;
              if (uVar10 != 0) {
                lVar14 = lVar9 + ((ulonglong)uVar17 & 0xfffffff) * -0x10;
                uVar16 = uVar10;
                do {
                  iVar7 = iVar18 + iVar6;
                  lVar14 = lVar14 + lVar5;
                  iVar18 = iVar18 + 1;
                  dVar23 = *(double *)(iVar7 * 0x10 + (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) * *(double *)lVar14 +
                           dVar23;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              lVar13 = lVar13 + 0x10;
              *(double *)lVar13 = dVar23;
              uVar8 = uVar8 - 1;
              lVar9 = lVar9 + 0x10;
            } while (uVar8 != 0);
          }
          uVar12 = uVar12 - 1;
          lVar4 = lVar4 + lVar5;
          iVar6 = uVar10 + iVar6;
        } while (uVar12 != 0);
      }
      break;
    }
    goto switchD_82981f8c_caseD_5;
  case 0x38:
    dVar23 = lbl_82005710;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + -8);
      uVar12 = uVar19;
      do {
        pdVar15 = pdVar15 + 2;
        dVar22 = *pdVar15 * *pdVar15 + dVar22;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (dVar22 != lbl_82005710) {
        dVar23 = lbl_82005758 / SQRT(dVar22);
      }
    }
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        *(double *)lVar4 = *(double *)((int)(double *)lVar4 + ((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18)) * dVar23;
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x39:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      puVar21 = (undefined8 *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      iVar6 = (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      do {
        uVar25 = fn_82F655D8(*puVar21,*(undefined8 *)((int)puVar21 + iVar6));
        *(undefined8 *)((int)puVar21 + iVar18) = uVar25;
        iVar7 = fn_82F6E018();
        if ((0 < iVar7) && (iVar7 < 3)) goto switchD_82981f8c_caseD_5;
        uVar12 = uVar12 + 1;
        puVar21 = puVar21 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 0x3a:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        *(double *)lVar4 = *(double *)((int)(double *)lVar4 + ((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18)) * dVar28;
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x3e:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        pdVar2 = (double *)((int)pdVar15 + ((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF)));
        dVar34 = *pdVar15;
        pdVar15 = pdVar15 + 2;
        dVar22 = *pdVar2 * dVar34 + dVar22;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if ((uVar19 & 0xffffffff) != 0) {
        pdVar15 = (double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
        uVar12 = uVar19;
        do {
          *(double *)((int)pdVar15 + (iVar18 - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF))) =
               -(dVar22 * *pdVar15 * dVar23 -
                *(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15));
          pdVar15 = pdVar15 + 2;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    break;
  case 0x3f:
    dVar34 = *(double *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
    dVar23 = lbl_82005710;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        pdVar2 = (double *)((int)pdVar15 + ((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF)));
        dVar35 = *pdVar15;
        pdVar15 = pdVar15 + 2;
        dVar23 = *pdVar2 * dVar35 + dVar23;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    dVar35 = -(-(dVar23 * dVar23 - lbl_82005758) * dVar34 * dVar34 - lbl_82005758);
    if (lbl_82005710 <= dVar35) {
      if ((uVar19 & 0xffffffff) != 0) {
        pdVar15 = (double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
        uVar12 = uVar19;
        do {
          *(double *)((iVar18 - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15) =
               *(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15) * dVar34 -
               (dVar23 * dVar34 + SQRT(dVar35)) * *pdVar15;
          pdVar15 = pdVar15 + 2;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    else if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 - 8;
      uVar12 = uVar19;
      do {
        lVar4 = lVar4 + 0x10;
        *(double *)lVar4 = dVar22;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x40:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      dVar23 = lbl_82005730;
      do {
        uVar25 = fn_82F68918(*(double *)(iVar18 + (int)(undefined8 *)lVar4) + dVar23);
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x41:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      do {
        dVar23 = *pdVar15;
        if ((dVar23 < dVar22) || (dVar23 == dVar22)) goto switchD_82981f8c_caseD_5;
        uVar12 = uVar12 + 1;
        *(double *)((iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF)) + (int)pdVar15) = dVar34 / SQRT(dVar23);
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 0x42:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        pdVar15 = (double *)lVar4;
        dVar23 = *(double *)((int)pdVar15 + ((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18));
        if (dVar22 <= dVar23) {
          if (dVar23 <= dVar34) {
            *pdVar15 = dVar23;
          }
          else {
            *pdVar15 = dVar34;
          }
        }
        else {
          *pdVar15 = dVar22;
        }
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x43:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        pdVar15 = (double *)lVar4;
        dVar23 = *(double *)((int)pdVar15 + ((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18));
        if (dVar22 <= dVar23) {
          if (dVar23 <= dVar22) {
            *pdVar15 = dVar22;
          }
          else {
            *pdVar15 = dVar34;
          }
        }
        else {
          *pdVar15 = dVar35;
        }
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x44:
    if ((uVar19 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F64318(*(undefined8 *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8));
    }
    break;
  case 0x46:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F6F010(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x47:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF);
      uVar12 = uVar19;
      do {
        dVar35 = *pdVar15;
        if (*(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15) <= dVar35) {
          dVar24 = *(double *)(((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15);
          if (dVar35 < dVar24) {
            dVar28 = *(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15);
            dVar35 = (dVar35 - dVar28) / (dVar24 - dVar28);
            *(double *)(iVar18 + (int)pdVar15) =
                 dVar35 * dVar35 * dVar26 - dVar35 * dVar35 * dVar35 * dVar23;
          }
          else {
            *(double *)(iVar18 + (int)pdVar15) = dVar34;
          }
        }
        else {
          *(double *)(iVar18 + (int)pdVar15) = dVar22;
        }
        pdVar15 = pdVar15 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x48:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      do {
        if (*pdVar15 < dVar22) goto switchD_82981f8c_caseD_5;
        uVar12 = uVar12 + 1;
        *(double *)((int)pdVar15 + (iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF))) = SQRT(*pdVar15);
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 0x49:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        dVar23 = dVar22;
        if (*pdVar15 <= *(double *)((int)pdVar15 + ((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF)))) {
          dVar23 = dVar34;
        }
        *(double *)((int)pdVar15 + (iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF))) = dVar23;
        pdVar15 = pdVar15 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x4a:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F67DE8(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x4b:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F6EF10(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x87:
    uVar17 = 0;
    uVar10 = uRam00000014;
    if (uRam00000018 != 0) {
      do {
        uVar16 = 0;
        if (uVar10 != 0) {
          do {
            iVar11 = uRam00000018 * uVar16;
            iVar7 = uVar17 * *(int *)(iVar6 + 0x18) + uVar16;
            uVar16 = uVar16 + 1;
            *(undefined8 *)(iVar7 * 0x10 + iVar18 + 8) =
                 *(undefined8 *)((iVar11 + uVar17) * 0x10 + (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
            uVar10 = uRam00000014;
          } while (uVar16 < uRam00000014);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uRam00000018);
    }
    break;
  case 0x89:
    *(double *)(iVar18 + 8) = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28) * lbl_8202DDF8;
    *(double *)(iVar18 + 0x18) = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18) * dVar24;
    *(double *)(iVar18 + 0x28) = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) * dVar24;
    dVar24 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x38) * dVar24;
LAB_829832d0:
    *(double *)(iVar18 + 0x38) = dVar24;
  }
  for (iVar6 = *(int *)(iVar1 + 0xc); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
    if (*(int *)(iVar6 + 8) != 0) goto switchD_82981f8c_caseD_5;
  }
  uVar12 = 0;
  if ((uVar19 & 0xffffffff) != 0) {
    do {
      lVar4 = fn_829803A8(*(undefined8 *)((int)param_3 + 8),uVar3);
      if (lVar4 < 0) goto LAB_8298333c;
      uVar12 = uVar12 + 1;
      param_3 = param_3 + 0x10;
    } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
  }
  lVar4 = 0;
LAB_8298333c:
  lVar5 = 4;
  puVar20 = &uStack_b4;
  do {
    puVar20 = puVar20 + 1;
    fn_8265C990(*puVar20,0x24810000);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
LAB_8298336c:
  fn_82F6A594(lVar4);
  return;
switchD_82981f8c_caseD_5:
  lVar4 = -0x7fffbffb;
  goto LAB_8298333c;
}
