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
extern int fn_82964628();
extern int fn_82975B00();
extern int fn_82F64318();
extern int fn_82F643F8();
extern int fn_82F64F30();
extern int fn_82F655D8();
extern int fn_82F65D50();
extern int fn_82F65E18();
extern int fn_82F65E20();
extern int fn_82F68918();
extern int fn_82F6DFB0();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200E890;


undefined8 fn_82978C60(int param_1,uint *param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  
  iVar4 = *(int *)(param_1 + 0x14);
  puVar1 = *(uint **)(param_3 * 4 + iVar4);
  uVar5 = *(uint *)(*(int *)(param_4 * 4 + iVar4) + 0x30);
  puVar2 = *(uint **)(uVar5 * 4 + iVar4);
  uVar9 = *(uint *)(*(int *)(puVar1[1] * 4 + *(int *)(param_1 + 0x10)) + 4);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  if ((uVar9 & 0x1000) != 0) {
    return 0;
  }
  uVar3 = *param_2 & 0xfff00000;
  uVar9 = *puVar2;
  uVar10 = *puVar1;
  if (uVar3 == 0x10000000) {
    puVar1[0xc] = uVar5;
    *puVar1 = uVar10 | uVar9 & 0x1f;
    return 0;
  }
  uVar13 = *puVar1;
  *puVar1 = uVar9 & 0x40 | uVar13;
  if (((uVar13 & 0xe000000) == 0) &&
     ((((uVar3 == 0x10100000 || (uVar3 == 0x10300000)) || (uVar3 == 0x10400000)) ||
      ((uVar3 == 0x10d00000 || (uVar3 == 0x10e00000)))))) {
    *puVar1 = *puVar2 & 0xe000000 | *puVar1;
  }
  if (uVar3 == 0x10100000) {
    uVar13 = (uVar9 & 0x1f) >> 1 & 4 | (uVar9 & 4) << 1 | uVar9 & 0x13 | *puVar1;
LAB_82978dcc:
    *puVar1 = uVar13;
  }
  else {
    if (uVar3 == 0x10300000) {
      if (((uVar9 & 4) != 0) && ((uVar9 & 8) != 0)) goto LAB_82978d84;
      uVar13 = uVar9 & 0xc | *puVar1;
      goto LAB_82978dcc;
    }
    if (((uVar3 == 0x10400000) || (uVar3 == 0x10500000)) || (uVar3 == 0x10700000)) {
LAB_82978d84:
      uVar13 = *puVar1 | 4;
      goto LAB_82978dcc;
    }
  }
  iVar4 = *(int *)(param_1 + 0x10);
  uVar13 = *(uint *)(*(int *)(puVar2[1] * 4 + iVar4) + 4);
  dVar17 = lbl_82005710;
  if (((uVar13 & 0x100) == 0) || (puVar2[2] != 0xffffffff)) {
    if ((((uVar9 & 1) != 0) && (uVar3 == 0x10400000)) ||
       (((uVar9 & 2) != 0 && (uVar3 == 0x10400000)))) goto LAB_82978fb8;
    if ((uVar9 & 8) != 0) {
      if (uVar3 == 0x10600000) {
        if ((uVar10 & 0x40) != 0) {
          return 0;
        }
        if ((uVar9 & 4) != 0) {
          return 0;
        }
        fn_82975B00(param_1,param_2[0xf],0xfa2,0xffffffff820389bc);
        return 0;
      }
      if (uVar3 == 0x10700000) {
        if ((uVar10 & 0x40) != 0) {
          return 0;
        }
        uVar6 = 0xfa3;
        uVar7 = 0xffffffff820389e8;
        goto LAB_82979024;
      }
    }
    if (((uVar13 & 0x200) == 0) || ((uVar3 != 0x10d00000 && (uVar3 != 0x10e00000)))) {
      if ((uVar10 & 0x40) != 0) {
        return 0;
      }
      if ((uVar13 & 2) == 0) {
        return 0;
      }
      if (((((uVar3 == 0x10100000) &&
            (puVar14 = *(uint **)(puVar2[0x12] * 4 + *(int *)(param_1 + 0x18)),
            (*puVar14 & 0xfff00000) == 0x10100000)) ||
           ((uVar3 == 0x10300000 &&
            (puVar14 = *(uint **)(puVar2[0x12] * 4 + *(int *)(param_1 + 0x18)),
            (*puVar14 & 0xfff00000) == 0x10300000)))) ||
          ((uVar3 == 0x10500000 &&
           (puVar14 = *(uint **)(puVar2[0x12] * 4 + *(int *)(param_1 + 0x18)),
           (*puVar14 & 0xfff00000) == 0x10600000)))) ||
         ((uVar3 == 0x10600000 &&
          (puVar14 = *(uint **)(puVar2[0x12] * 4 + *(int *)(param_1 + 0x18)),
          (*puVar14 & 0xfff00000) == 0x10500000)))) {
        uVar9 = puVar14[3];
        uVar10 = 0;
        if (uVar9 != 0) {
          iVar12 = 0;
          do {
            if (*(uint *)(iVar12 + puVar14[4]) == uVar5) break;
            uVar10 = uVar10 + 1;
            iVar12 = iVar12 + 4;
          } while (uVar10 < uVar9);
        }
        if (uVar10 < uVar9) {
          uVar5 = *(uint *)(*(int *)(*(int *)(uVar10 * 4 + puVar14[2]) * 4 +
                                    *(int *)(param_1 + 0x14)) + 0x30);
LAB_82979234:
          puVar1[0xc] = uVar5;
          return 0;
        }
      }
      if (uVar3 == 0x10300000) {
        puVar14 = *(uint **)(puVar2[0x12] * 4 + *(int *)(param_1 + 0x18));
        if ((*puVar14 & 0xfff00000) == 0x20500000) {
          uVar9 = 0;
          if (puVar14[3] != 0) {
            iVar12 = 0;
            do {
              if (*(uint *)(iVar12 + puVar14[4]) == uVar5) break;
              uVar9 = uVar9 + 1;
              iVar12 = iVar12 + 4;
            } while (uVar9 < puVar14[3]);
          }
          uVar10 = puVar14[3];
          uVar13 = 0;
          piVar8 = (int *)(uVar9 * 4 + puVar14[2]);
          piVar11 = (int *)((uVar10 + uVar9) * 4 + puVar14[2]);
          do {
            iVar12 = *(int *)(*piVar8 * 4 + *(int *)(param_1 + 0x14));
            if (((*(uint *)(*(int *)(*(int *)(iVar12 + 4) * 4 + iVar4) + 4) & 2) != 0) &&
               (puVar14 = *(uint **)(*(int *)(iVar12 + 0x48) * 4 + *(int *)(param_1 + 0x18)),
               (*puVar14 & 0xfff00000) == 0x10700000)) {
              uVar9 = 0;
              if (puVar14[3] != 0) {
                iVar15 = 0;
                do {
                  if (*(int *)(iVar15 + puVar14[4]) == *piVar8) break;
                  uVar9 = uVar9 + 1;
                  iVar15 = iVar15 + 4;
                } while (uVar9 < puVar14[3]);
              }
              if (*(int *)(uVar9 * 4 + puVar14[2]) == *piVar11) {
                uVar5 = *(uint *)(iVar12 + 0x30);
                goto LAB_82979234;
              }
            }
            uVar13 = uVar13 + 1;
            piVar8 = piVar8 + uVar10;
            piVar11 = piVar11 + -uVar10;
          } while (uVar13 < 2);
        }
      }
      if (uVar3 != 0x10500000) {
        return 0;
      }
      puVar2 = *(uint **)(puVar2[0x12] * 4 + *(int *)(param_1 + 0x18));
      if ((*puVar2 & 0xfff00000) != 0x20500000) {
        return 0;
      }
      uVar9 = puVar2[3];
      uVar10 = 0;
      if (uVar9 != 0) {
        iVar12 = 0;
        do {
          if (*(uint *)(iVar12 + puVar2[4]) == uVar5) break;
          uVar10 = uVar10 + 1;
          iVar12 = iVar12 + 4;
        } while (uVar10 < uVar9);
      }
      uVar5 = 0;
      piVar8 = (int *)(uVar10 * 4 + puVar2[2]);
      do {
        iVar12 = *(int *)(*piVar8 * 4 + *(int *)(param_1 + 0x14));
        if (((*(uint *)(*(int *)(*(int *)(iVar12 + 4) * 4 + iVar4) + 4) & 2) != 0) &&
           (puVar2 = *(uint **)(*(int *)(iVar12 + 0x48) * 4 + *(int *)(param_1 + 0x18)),
           (*puVar2 & 0xfff00000) == 0x10600000)) {
          uVar10 = 0;
          if (puVar2[3] != 0) {
            iVar12 = 0;
            do {
              if (*(int *)(iVar12 + puVar2[4]) == *piVar8) break;
              uVar10 = uVar10 + 1;
              iVar12 = iVar12 + 4;
            } while (uVar10 < puVar2[3]);
          }
          uVar10 = **(uint **)(*(int *)(uVar10 * 4 + puVar2[2]) * 4 + *(int *)(param_1 + 0x14));
          if (((uVar10 & 4) != 0) && ((uVar10 & 8) != 0)) break;
        }
        uVar5 = uVar5 + 1;
        piVar8 = piVar8 + uVar9;
        if (1 < uVar5) {
          return 0;
        }
      } while( true );
    }
    goto LAB_82978fb8;
  }
  if (0x10800000 < uVar3) {
    if (uVar3 == 0x10900000) {
                    /* WARNING: Subroutine does not return */
      fn_82F643F8(*(undefined8 *)(puVar2 + 8));
    }
    if (uVar3 == 0x10a00000) {
      if (((uVar10 & 0x40) != 0) ||
         ((lbl_8200E890 <= *(double *)(puVar2 + 8) && (*(double *)(puVar2 + 8) <= lbl_82005758)))) {
        dVar17 = (double)fn_82F65D50(*(undefined8 *)(puVar2 + 8));
        goto LAB_82978fb8;
      }
      uVar6 = 0xfa5;
      uVar7 = 0xffffffff82038990;
    }
    else {
      if (uVar3 != 0x10b00000) {
        if (uVar3 == 0x10c00000) {
          dVar17 = (double)fn_82F64F30(*(undefined8 *)(puVar2 + 8));
        }
        else if ((uVar3 != 0x10d00000) && (uVar3 != 0x10e00000)) {
          return 0;
        }
        goto LAB_82978fb8;
      }
      if (((uVar10 & 0x40) != 0) ||
         ((lbl_8200E890 <= *(double *)(puVar2 + 8) && (*(double *)(puVar2 + 8) <= lbl_82005758)))) {
        dVar17 = (double)fn_82F65E18(*(undefined8 *)(puVar2 + 8));
        goto LAB_82978fb8;
      }
      uVar6 = 0xfa6;
      uVar7 = 0xffffffff820389a4;
    }
LAB_82979024:
    fn_82975B00(param_1,param_2[0xf],uVar6,uVar7);
    dVar17 = lbl_82005710;
    goto LAB_82978fb8;
  }
  if (uVar3 == 0x10800000) {
                    /* WARNING: Subroutine does not return */
    fn_82F64318(*(undefined8 *)(puVar2 + 8));
  }
  if (uVar3 == 0x10100000) {
    dVar17 = -*(double *)(puVar2 + 8);
    goto LAB_82978fb8;
  }
  if (uVar3 == 0x10300000) {
    if (((uVar10 & 0x40) == 0) && (*(double *)(puVar2 + 8) == lbl_82005710)) goto LAB_82978fb8;
    dVar17 = *(double *)(puVar2 + 8);
LAB_82978f48:
    dVar17 = lbl_82005758 / dVar17;
  }
  else {
    if (uVar3 == 0x10400000) {
      iVar4 = fn_82F6DFB0(*(undefined8 *)(puVar2 + 8));
      dVar17 = lbl_82005710;
      if (iVar4 != 0) {
        dVar17 = (double)fn_82F68918(*(undefined8 *)(puVar2 + 8));
        dVar17 = *(double *)(puVar2 + 8) - dVar17;
      }
      goto LAB_82978fb8;
    }
    if (uVar3 == 0x10500000) {
      dVar17 = (double)fn_82F655D8(lbl_82002C40,*(undefined8 *)(puVar2 + 8));
      goto LAB_82978fb8;
    }
    if (uVar3 == 0x10600000) {
      if (((uVar10 & 0x40) == 0) && (*(double *)(puVar2 + 8) == lbl_82005710)) {
        return 0;
      }
      if (lbl_82005710 <= *(double *)(puVar2 + 8)) {
        dVar17 = (double)fn_82F65E20();
        dVar16 = (double)fn_82F65E20(lbl_82002C40);
        dVar17 = dVar17 / dVar16;
        goto LAB_82978fb8;
      }
      uVar6 = 0xfa2;
      uVar7 = 0xffffffff820389bc;
    }
    else {
      if (uVar3 != 0x10700000) {
        return 0;
      }
      if ((uVar10 & 0x40) != 0) {
LAB_82978e90:
        dVar17 = SQRT(*(double *)(puVar2 + 8));
        goto LAB_82978f48;
      }
      if (lbl_82005710 <= *(double *)(puVar2 + 8)) {
        if (*(double *)(puVar2 + 8) != lbl_82005710) goto LAB_82978e90;
        uVar6 = 0xfa1;
        uVar7 = 0xffffffff820389d4;
      }
      else {
        uVar6 = 0xfa3;
        uVar7 = 0xffffffff820389e8;
      }
    }
    fn_82975B00(param_1,param_2[0xf],uVar6,uVar7);
  }
LAB_82978fb8:
  uVar5 = fn_82964628(dVar17,param_1,*(undefined4 *)(param_1 + 0x78),0,0);
  puVar1[0xc] = uVar5;
  return 0;
}

