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
extern int fn_82902280();
extern int fn_82902360();
extern int fn_829025C0();
extern int fn_82F64318();
extern int fn_82F643F8();
extern int fn_82F64F30();
extern int fn_82F65018();
extern int fn_82F655D8();
extern int fn_82F65D50();
extern int fn_82F65E18();
extern int fn_82F65E20();
extern int fn_82F68918();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern int fn_82F6DFB0();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82005F78;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_820288D0;
extern unsigned int lbl_8202DAB8;
extern unsigned int lbl_8202DAC0;
extern unsigned int lbl_8202DAC8;
extern unsigned int uStack_b0;
extern unsigned int uStack_c0;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82902688(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  
  iVar5 = fn_82F6A53C();
  iVar6 = *(int *)(iVar5 + 8);
  puVar2 = *(uint **)(*(int *)(iVar6 + 0x14) + (int)((param_2 & 0xffffffff) << 2));
  puVar10 = (undefined8 *)param_3;
  if ((*puVar2 & 0x100) == 0) {
    if ((*puVar2 & 0x80) == 0) {
      dVar20 = *(double *)(iVar5 + 0xb0);
      dVar22 = *(double *)(iVar5 + 0xa8);
      dVar17 = lbl_8200E890;
      dVar18 = lbl_82005758;
      dVar19 = lbl_82005710;
      dVar21 = dVar20;
      dStack_a8 = dVar22;
      if (puVar2[2] == 0xffffffff) {
        if (((*(uint *)(*(int *)(puVar2[1] * 4 + *(int *)(iVar6 + 0x10)) + 4) & 2) == 0) ||
           (puVar2[0x12] == 0xffffffff)) goto LAB_829031fc;
        uVar12 = puVar2[4];
        uVar9 = (ulonglong)uVar12;
        puVar3 = *(uint **)(puVar2[0x12] * 4 + *(int *)(iVar6 + 0x18));
        uVar1 = *puVar3;
        if ((uVar1 & 0xf0000000) == 0x10000000) {
          uVar1 = uVar1 & 0xfff00000;
          if (((((uVar1 != 0x10f00000) && (uVar1 != 0x11000000)) && (uVar1 != 0x11100000)) &&
              ((uVar1 != 0x11200000 && (uVar1 != 0x11300000)))) &&
             ((uVar1 != 0x11400000 && (uVar1 != 0x11500000)))) {
            iVar6 = fn_82902360(iVar5,*(undefined4 *)(uVar12 * 4 + puVar3[2]),&uStack_c0);
            if (iVar6 < 0) goto LAB_82903194;
            uVar12 = *puVar3 & 0xfff00000;
            dVar21 = dVar20;
            if (uVar12 < 0x10700001) {
              if (uVar12 == 0x10700000) {
                if (uStack_c0 < dVar19) goto LAB_829031fc;
                dVar15 = dVar18 / SQRT(dStack_b8);
                dVar16 = dVar18 / SQRT(uStack_c0);
              }
              else {
                dVar15 = uStack_c0;
                dVar16 = dStack_b8;
                if (uVar12 != 0x10000000) {
                  if (uVar12 == 0x10100000) {
                    dVar15 = -dStack_b8;
                    dVar16 = -uStack_c0;
                  }
                  else if (uVar12 == 0x10200000) {
                    if (dVar19 <= uStack_c0) {
                      dVar15 = dVar19;
                      if (uStack_c0 != dVar19) {
                        dVar15 = *(double *)(iVar5 + 0xb8) + uStack_c0;
                      }
                    }
                    else {
                      dVar15 = uStack_c0 - *(double *)(iVar5 + 0xb8);
                    }
                    if (dVar19 <= dStack_b8) {
                      if (dStack_b8 == dVar19) goto LAB_82902a5c;
                      dVar16 = *(double *)(iVar5 + 0xb8) + dStack_b8;
                    }
                    else {
                      dVar16 = dStack_b8 - *(double *)(iVar5 + 0xb8);
                    }
                  }
                  else if (uVar12 == 0x10300000) {
                    if ((uStack_c0 <= dVar19) && (dVar19 <= dStack_b8)) goto LAB_829031fc;
                    dVar15 = dVar18 / dStack_b8;
                    dVar16 = dVar18 / uStack_c0;
                  }
                  else if (uVar12 == 0x10400000) {
                    if (uStack_c0 != dStack_b8) goto LAB_829029dc;
                    dVar21 = uStack_c0;
                    iVar6 = fn_82F6DFB0(uStack_c0);
                    dVar15 = dVar19;
                    dVar16 = dVar19;
                    if (iVar6 != 0) {
                      dVar22 = (double)fn_82F68918(dStack_b8);
                      dVar15 = dVar21 - dVar22;
                      dVar16 = dVar21 - dVar22;
                    }
                  }
                  else if (uVar12 == 0x10500000) {
                    dVar21 = lbl_82002C40;
                    dVar15 = (double)fn_82F655D8(lbl_82002C40,uStack_c0);
                    dStack_98 = dStack_b8;
                    dStack_88 = dVar21;
LAB_82902998:
                    dVar16 = (double)fn_82F655D8(dStack_88,dStack_98);
                  }
                  else {
                    if (uVar12 != 0x10600000) goto LAB_829031fc;
                    dVar21 = lbl_82002C40;
                    if (uStack_c0 <= dVar19) {
                      dVar15 = *(double *)(iVar5 + 0xb0);
                    }
                    else {
                      dVar15 = (double)fn_82F65E20();
                      dVar22 = (double)fn_82F65E20(dVar21);
                      dVar15 = dVar15 / dVar22;
                    }
                    if (dStack_b8 <= dVar19) {
                      dVar16 = *(double *)(iVar5 + 0xb0);
                    }
                    else {
                      dVar22 = (double)fn_82F65E20();
                      dVar21 = (double)fn_82F65E20(dVar21);
                      dVar16 = dVar22 / dVar21;
                    }
                  }
                }
              }
            }
            else {
              dVar15 = dVar17;
              dStack_90 = uStack_c0;
              dVar16 = dVar18;
              if (uVar12 == 0x10800000) {
                if ((uStack_c0 == dStack_b8) &&
                   (iVar6 = fn_82F6DFB0(uStack_c0), dVar15 = dVar17, dVar16 = dVar18, iVar6 != 0))
                {
LAB_82902c34:
                    /* WARNING: Subroutine does not return */
                  fn_82F64318(dStack_90);
                }
              }
              else if (uVar12 == 0x10900000) {
                if ((uStack_c0 == dStack_b8) &&
                   (iVar6 = fn_82F6DFB0(uStack_c0), dVar15 = dVar17, dVar16 = dVar18, iVar6 != 0))
                {
LAB_82902c08:
                    /* WARNING: Subroutine does not return */
                  fn_82F643F8(dStack_90);
                }
              }
              else if (uVar12 == 0x10a00000) {
                dVar15 = lbl_8202DAC8;
                dVar16 = lbl_8202DAC0;
                if ((dVar17 <= uStack_c0) &&
                   (dVar15 = lbl_8202DAC8, dVar16 = lbl_8202DAC0, dStack_b8 <= dVar18)) {
                  dVar15 = (double)fn_82F65D50();
                  dVar16 = (double)fn_82F65D50(dStack_b8);
                }
              }
              else if (uVar12 == 0x10b00000) {
                dVar15 = dVar19;
                dVar16 = lbl_820288D0;
                if ((dVar17 <= uStack_c0) && (dVar16 = lbl_820288D0, dStack_b8 <= dVar18)) {
                  dVar21 = uStack_c0;
                  dVar15 = (double)fn_82F65E18();
                  dVar16 = (double)fn_82F65E18(dVar21);
                }
              }
              else if (uVar12 == 0x10c00000) {
                dVar15 = lbl_8202DAC8;
                dVar16 = lbl_8202DAC0;
                if ((uStack_c0 == dStack_b8) &&
                   (dVar21 = uStack_c0, iVar6 = fn_82F6DFB0(uStack_c0), dVar15 = lbl_8202DAC8,
                   dVar16 = lbl_8202DAC0, iVar6 != 0)) {
                  dVar15 = (double)fn_82F64F30(dVar21);
                  dVar16 = dVar15;
                }
              }
              else if ((((uVar12 != 0x10d00000) && (uVar12 != 0x10e00000)) ||
                       (uStack_c0 != dStack_b8)) ||
                      (iVar6 = fn_82F6DFB0(), dVar15 = dVar19, dVar21 = dVar20, dVar16 = dVar19,
                      iVar6 == 0)) goto LAB_829031fc;
            }
            goto LAB_829031f8;
          }
          goto LAB_829031fc;
        }
        if ((uVar1 & 0xf0000000) == 0x20000000) {
          if ((uVar1 & 0xfff00000) != 0x20900000) {
            iVar6 = fn_82902360(iVar5,*(undefined4 *)(uVar12 * 4 + puVar3[2]),&dStack_a0);
            if ((iVar6 < 0) ||
               (iVar6 = fn_82902360(iVar5,*(undefined4 *)
                                             ((int)((puVar3[3] + uVar9 & 0xffffffff) << 2) +
                                             puVar3[2]),&uStack_c0), iVar6 < 0)) goto LAB_82903194;
            uVar12 = *puVar3 & 0xfff00000;
            dVar15 = uStack_c0;
            dVar16 = dStack_b8;
            if (uVar12 < 0x20400001) {
              if (uVar12 == 0x20400000) {
                dVar15 = uStack_c0 + dStack_a0;
                dVar16 = dStack_b8 + dStack_98;
              }
              else if (uVar12 == 0x20000000) {
                if (dStack_a0 < uStack_c0) {
                  dVar15 = dStack_a0;
                }
                if (dStack_98 < dStack_b8) {
LAB_82902d58:
                  dVar16 = dStack_98;
                }
              }
              else if (uVar12 == 0x20100000) {
                if (uStack_c0 < dStack_a0) {
LAB_82902d40:
                  dVar15 = dStack_a0;
                }
LAB_82902d44:
                if (dStack_b8 < dStack_98) goto LAB_82902d58;
              }
              else {
                dVar15 = dVar19;
                dVar16 = dVar19;
                if (uVar12 == 0x20200000) {
                  if ((dStack_a0 < dStack_b8) &&
                     (dVar15 = dVar18, dVar16 = dVar18, uStack_c0 <= dStack_98)) {
LAB_829029dc:
                    dVar15 = dVar19;
                    dVar16 = dVar18;
                  }
                }
                else {
                  if (uVar12 != 0x20300000) goto LAB_829031fc;
                  if ((uStack_c0 <= dStack_98) &&
                     (dVar15 = dVar18, dVar16 = dVar18, dStack_a0 < dStack_b8)) goto LAB_829029dc;
                }
              }
              goto LAB_829031f8;
            }
            if (uVar12 == 0x20500000) {
              fn_82902280(iVar5,&uStack_b0,&dStack_a0,&uStack_c0,*puVar2);
              dVar21 = dVar20;
              dVar22 = dStack_a8;
            }
            else {
              if (uVar12 == 0x20600000) {
                dVar15 = lbl_8202DAB8;
                dVar16 = lbl_820288D0;
                if ((((dStack_a0 == dStack_98) &&
                     (iVar6 = fn_82F6DFB0(dStack_a0), dVar15 = lbl_8202DAB8, dVar16 = lbl_820288D0,
                     iVar6 != 0)) &&
                    (dVar15 = lbl_8202DAB8, dVar16 = lbl_820288D0, uStack_c0 == dStack_b8)) &&
                   (dVar21 = uStack_c0, iVar6 = fn_82F6DFB0(uStack_c0), dVar15 = lbl_8202DAB8,
                   dVar16 = lbl_820288D0, iVar6 != 0)) {
                  dVar15 = (double)fn_82F65018(dStack_a0,dVar21);
                  dVar16 = dVar15;
                }
                goto LAB_829031f8;
              }
              if ((uVar12 == 0x20700000) || (uVar12 == 0x20800000)) {
                if (dStack_a0 < uStack_c0) goto LAB_82902d40;
                goto LAB_82902d44;
              }
            }
          }
          goto LAB_829031fc;
        }
        uVar4 = uVar1 & 0xfff00000;
        if (uVar4 == 0x50000000) {
          uVar1 = uVar1 & 0xfffff;
          dStack_a8 = lbl_82005710;
          uVar12 = 0;
          dVar21 = lbl_82005710;
          dVar22 = lbl_82005710;
          if (uVar1 != 0) {
            iVar13 = 0;
            iVar6 = uVar1 << 2;
            do {
              dStack_a8 = dVar22;
              iVar7 = fn_82902360(iVar5,*(undefined4 *)(puVar3[2] + iVar13),&uStack_c0);
              if ((iVar7 < 0) ||
                 (iVar7 = fn_82902360(iVar5,*(undefined4 *)(puVar3[2] + iVar6),&dStack_90),
                 iVar7 < 0)) goto LAB_82903194;
              fn_82902280(iVar5,&dStack_a0,&uStack_c0,&dStack_90,*puVar2);
              uVar12 = uVar12 + 1;
              dVar21 = dStack_a0 + dVar21;
              dVar22 = dStack_98 + dVar22;
              iVar13 = iVar13 + 4;
              iVar6 = iVar6 + 4;
              dStack_a8 = dVar22;
            } while (uVar12 < uVar1);
          }
          goto LAB_829031fc;
        }
        if (uVar4 == 0x30000000) {
          uVar1 = puVar3[2];
          iVar6 = *(int *)(uVar12 * 4 + uVar1);
          iVar13 = *(int *)((int)((puVar3[3] + uVar9 & 0xffffffff) << 2) + uVar1);
          iVar7 = *(int *)((int)((((ulonglong)puVar3[3] & 0x7fffffff) * 2 + uVar9 & 0xffffffff) << 2
                                ) + uVar1);
          iVar8 = fn_82902360(iVar5,iVar6,&dStack_90);
          if (((iVar8 < 0) || (iVar8 = fn_82902360(iVar5,iVar13,&dStack_a0), iVar8 < 0)) ||
             (iVar8 = fn_82902360(iVar5,iVar7,&uStack_c0), iVar8 < 0)) goto LAB_82903194;
          dVar21 = dVar20;
          if ((*puVar3 & 0xfff00000) == 0x30000000) {
            if (iVar6 == iVar13) {
              if (dStack_a0 < dVar19) {
                dStack_a0 = dVar19;
              }
              if (dStack_98 < dVar19) {
                dStack_98 = dVar19;
              }
            }
            dVar21 = uStack_c0;
            if (iVar6 == iVar7) {
              if (dVar19 < uStack_c0) {
                dVar21 = dVar19;
              }
              if (dVar19 < dStack_b8) {
                dStack_b8 = dVar19;
              }
            }
            dVar15 = dStack_a0;
            dVar16 = dStack_98;
            if ((dStack_90 < dVar19) && (dVar15 = dVar21, dVar16 = dStack_b8, dVar19 <= dStack_88))
            {
              if (dVar21 <= dStack_a0) {
                dStack_a0 = dVar21;
              }
              dVar15 = dStack_a0;
              dVar16 = dStack_98;
              if (dStack_98 <= dStack_b8) {
                dVar16 = dStack_b8;
              }
            }
            goto LAB_829031f8;
          }
          goto LAB_829031fc;
        }
        if (uVar4 != 0x50100000) {
          if (uVar4 == 0x50300000) {
            iVar6 = fn_82902360(iVar5,*(undefined4 *)puVar3[2],&dStack_90);
            if (iVar6 < 0) goto LAB_82903194;
            dVar15 = dVar17;
            dVar16 = dVar18;
            if ((dStack_90 != dStack_88) ||
               (iVar6 = fn_82F6DFB0(dStack_90), dVar15 = dVar17, dVar16 = dVar18, iVar6 == 0))
            goto LAB_829031f8;
            if (uVar9 == 0) goto LAB_82902c08;
            dVar21 = dVar20;
            if (uVar9 == 1) goto LAB_82902c34;
          }
          goto LAB_829031fc;
        }
        dVar15 = lbl_82005758;
        dVar16 = lbl_82005758;
        if (uVar9 == 0) {
LAB_829031f8:
          dVar21 = dVar15;
          dVar22 = dVar16;
          dStack_a8 = dVar16;
          goto LAB_829031fc;
        }
        if (uVar9 == 1) {
          iVar6 = fn_82902360(iVar5,*(undefined4 *)puVar3[2],&dStack_a0);
          if (iVar6 < 0) goto LAB_82903194;
          dVar15 = dStack_a0;
          dVar16 = dStack_98;
          if ((dStack_a0 <= dVar19) && (dVar15 = dVar19, dVar16 = dStack_98, dStack_98 <= dVar19)) {
LAB_82902a5c:
            dVar16 = dVar19;
          }
          goto LAB_829031f8;
        }
        if (2 < uVar9) {
          dVar15 = lbl_82005758;
          dVar16 = lbl_82005758;
          if (uVar9 != 3) goto LAB_829031fc;
          goto LAB_829031f8;
        }
        iVar6 = fn_82902360(iVar5,*(undefined4 *)puVar3[2],&dStack_a0);
        if (-1 < iVar6) {
          dVar15 = dVar19;
          dVar16 = dVar19;
          if (dStack_98 <= dVar19) goto LAB_829031f8;
          iVar6 = fn_82902360(iVar5,*(undefined4 *)(puVar3[2] + 4),&dStack_90);
          if (-1 < iVar6) {
            dVar15 = dVar19;
            dVar16 = dVar19;
            if (dStack_88 <= dVar19) goto LAB_829031f8;
            iVar6 = fn_82902360(iVar5,*(undefined4 *)(puVar3[2] + 0xc),&dStack_a0);
            if (-1 < iVar6) {
              dVar21 = dStack_a0;
              if (dStack_90 < dVar18) {
                dVar21 = dStack_98;
              }
              dVar15 = (double)fn_82F655D8(dStack_90,dVar21);
              if (dStack_88 < dVar18) {
                dStack_98 = dStack_a0;
              }
              goto LAB_82902998;
            }
          }
        }
LAB_82903194:
        dVar21 = *(double *)(iVar5 + 0xb0);
        dVar22 = *(double *)(iVar5 + 0xa8);
        uVar14 = 0xffffffff80004005;
        dStack_a8 = dVar22;
      }
      else {
        iVar6 = fn_829025C0(iVar5,puVar2[2],&uStack_c0);
        if (-1 < iVar6) {
          uStack_c0 = (double)(longlong)uStack_c0;
          uVar9 = 0;
          uVar11 = (ulonglong)*(uint *)(*(int *)(iVar5 + 8) + 8);
          if (uVar11 != 0) {
            iVar6 = 0;
            do {
              iVar13 = *(int *)(*(int *)(*(int *)(iVar5 + 8) + 0x14) + iVar6);
              if ((((*(uint *)(iVar13 + 4) == puVar2[1]) && (*(int *)(iVar13 + 8) == -1)) &&
                  (*(int *)(iVar13 + 0xc) == puVar2[3] + (((U64)(uStack_c0) >> 32) & 0xFFFFFFFF))) &&
                 (*(uint *)(iVar13 + 0x10) == puVar2[4])) {
                iVar6 = fn_82902360(iVar5,uVar9,&uStack_b0);
                dVar21 = dVar20;
                dVar22 = dStack_a8;
                if (iVar6 < 0) goto LAB_82903194;
                break;
              }
              uVar9 = uVar9 + 1;
              iVar6 = iVar6 + 4;
            } while ((uVar9 & 0xffffffff) < uVar11);
          }
        }
LAB_829031fc:
        uVar14 = 0;
      }
      if ((*puVar2 & 4) == 0) {
        if (dVar19 <= dVar21) {
          *puVar2 = *puVar2 | 4;
        }
      }
      else {
        if (dVar21 <= dVar19) {
          dVar21 = dVar19;
        }
        if (dVar22 <= dVar19) {
          dVar22 = dVar19;
          dStack_a8 = dVar19;
        }
      }
      dVar20 = dVar21;
      dVar15 = dVar22;
      if ((*puVar2 & 8) == 0) {
        if (dVar22 <= dVar19) {
          *puVar2 = *puVar2 | 8;
        }
      }
      else {
        dVar20 = dVar19;
        if (dVar21 < 0.0) {
          dVar20 = dVar21;
        }
        dVar15 = dVar19;
        dStack_a8 = dVar19;
        if (dVar22 < 0.0) {
          dVar15 = dVar22;
          dStack_a8 = dVar22;
        }
      }
      if ((*puVar2 & 0x10) == 0) {
        if ((dVar17 <= dVar20) && (dVar15 <= dVar18)) {
          *puVar2 = *puVar2 | 0x10;
        }
      }
      else {
        if (dVar20 <= dVar17) {
          dVar20 = dVar17;
        }
        if (dVar15 <= dVar17) {
          dVar15 = dVar17;
          dStack_a8 = dVar17;
        }
        if (dVar18 <= dVar20) {
          dVar20 = dVar18;
        }
        if (dVar18 <= dVar15) {
          dVar15 = dVar18;
          dStack_a8 = dVar18;
        }
      }
      if ((dVar20 == dVar15) && (iVar6 = fn_82F6DFB0(dVar20), iVar6 != 0)) {
        uVar12 = *puVar2;
        *puVar2 = uVar12 | 0x80;
        if ((dVar20 == dVar19) || (dVar20 == dVar18)) {
          *puVar2 = uVar12 | 0x81;
        }
        uStack_c0 = (double)(longlong)(int)dVar20;
        if (ABS(dVar20 - (double)(longlong)uStack_c0) < lbl_82005F78) {
          *puVar2 = *puVar2 | 2;
        }
      }
      *(double *)(puVar2 + 8) = dVar20;
      *(double *)(puVar2 + 10) = dVar15;
      *puVar2 = *puVar2 | 0x100;
      if ((param_3 & 0xffffffff) != 0) {
        *puVar10 = uStack_b0;
        puVar10[1] = dStack_a8;
      }
      goto LAB_8290337c;
    }
    if ((param_3 & 0xffffffff) != 0) {
      *puVar10 = *(undefined8 *)(puVar2 + 8);
      uVar14 = *(undefined8 *)(puVar2 + 8);
      goto LAB_829026d4;
    }
  }
  else if ((param_3 & 0xffffffff) != 0) {
    *puVar10 = *(undefined8 *)(puVar2 + 8);
    uVar14 = *(undefined8 *)(puVar2 + 10);
LAB_829026d4:
    puVar10[1] = uVar14;
  }
  uVar14 = 0;
LAB_8290337c:
  fn_82F6A588(uVar14);
  return;
}

