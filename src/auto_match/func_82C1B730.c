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
extern int fn_82C1AFD0();
extern int fn_82C2EB00();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_821AAD20;


undefined8
fn_82C1B730(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4,int *param_5,
             int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar8;
  longlong lVar7;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar18;
  longlong lVar17;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  short sStack_90;
  short asStack_8e [71];
  
  sStack_90 = -1;
  asStack_8e[0] = -1;
  uVar16 = 1;
  if ((((((param_5 == (int *)0x0) || (iVar6 = (int)param_1, 0x20 < iVar6)) || (iVar6 < 1)) ||
       ((iVar8 = (int)param_3, 0x20 < iVar8 || (iVar8 < 1)))) ||
      (((param_2 & 0xffffffff) == 0 ||
       (((param_4 & 0xffffffff) == 0 || ((param_2 & 0xfffff800) != 0)))))) ||
     ((param_4 & 0xfffff800) != 0)) {
    return 0xffffffff80040000;
  }
  iVar10 = 0;
  iVar18 = 0;
  iVar12 = 0;
  iVar11 = 0;
  lVar22 = 8;
  iVar15 = 0;
  iVar19 = 0;
  iVar14 = 0;
  iVar21 = 0;
  do {
    uVar20 = uVar16 << 3;
    iVar21 = (uint)((uVar16 & param_2) != 0) + iVar21;
    iVar10 = (uint)((uVar16 & param_4) != 0) + iVar10;
    iVar18 = (uint)((uVar20 & param_4) != 0) + iVar18;
    iVar14 = (uint)((uVar16 << 1 & param_2) != 0) + iVar14;
    iVar11 = (uint)((uVar16 << 1 & param_4) != 0) + iVar11;
    iVar19 = (uint)((uVar16 << 2 & param_2) != 0) + iVar19;
    iVar12 = (uint)((uVar16 << 2 & param_4) != 0) + iVar12;
    iVar15 = (uint)((uVar20 & param_2) != 0) + iVar15;
    uVar16 = (uVar20 & 0x7fffffff) << 1;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  if ((iVar14 + iVar19 + iVar15 + iVar21 != iVar6) || (iVar11 + iVar12 + iVar18 + iVar10 != iVar8))
  {
    return 0xffffffff80070057;
  }
  lVar22 = param_1;
  uVar16 = param_2;
  if ((param_2 & 8) != 0) {
    uVar16 = param_2 << 0x20 | param_2 & 0xfffffff7;
    lVar22 = param_1 + -1;
  }
  lVar7 = param_3;
  uVar20 = param_4;
  if ((param_4 & 8) != 0) {
    uVar20 = param_4 << 0x20 | param_4 & 0xfffffff7;
    lVar7 = param_3 + -1;
  }
  if ((int)lVar22 < 1) {
    return 0xffffffff80040000;
  }
  if ((int)lVar7 < 1) {
    return 0xffffffff80040000;
  }
  uVar5 = fn_82C1AFD0(lVar22,uVar16,lVar7,uVar20,param_6);
  uVar4 = lbl_821AAD20;
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  lVar22 = param_3;
  piVar9 = param_5;
  if (0 < iVar8) {
    do {
      uVar16 = 0;
      if (3 < iVar6) {
        iVar21 = *piVar9;
        iVar18 = 0;
        do {
          iVar12 = iVar18 + 0xc;
          *(undefined4 *)(iVar21 + iVar18) = uVar4;
          iVar15 = iVar21 + iVar18;
          uVar16 = uVar16 + 4;
          iVar18 = iVar18 + 0x10;
          *(undefined4 *)(iVar15 + 4) = uVar4;
          *(undefined4 *)(iVar21 + iVar12 + -4) = uVar4;
          *(undefined4 *)(iVar21 + iVar12) = uVar4;
        } while ((int)uVar16 < iVar6 + -3);
      }
      if ((int)uVar16 < iVar6) {
        lVar7 = param_1 - uVar16;
        iVar21 = *piVar9;
        lVar17 = (uVar16 & 0x3fffffff) << 2;
        do {
          *(undefined4 *)(iVar21 + (int)lVar17) = uVar4;
          lVar17 = lVar17 + 4;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar22 = lVar22 + -1;
      piVar9 = piVar9 + 1;
    } while (lVar22 != 0);
  }
  fn_82C2EB00(param_2,8,&sStack_90);
  fn_82C2EB00(param_4,8,asStack_8e);
  if (sStack_90 == -1) {
LAB_82c1bc20:
    if (asStack_8e[0] != -1) {
      iVar21 = 0;
      if (0 < asStack_8e[0]) {
        iVar18 = 0;
        do {
          uVar16 = 0;
          if (3 < iVar6) {
            iVar15 = *(int *)(iVar18 + (int)param_5);
            iVar12 = 0;
            do {
              iVar19 = *(int *)(iVar18 + param_6);
              iVar14 = iVar15 + iVar12;
              iVar13 = iVar12 + 0xc;
              iVar11 = iVar12 + iVar19;
              iVar10 = iVar12 + 8;
              uVar16 = uVar16 + 4;
              *(undefined4 *)(iVar15 + iVar12) = *(undefined4 *)(iVar12 + iVar19);
              iVar12 = iVar12 + 0x10;
              *(undefined4 *)(iVar14 + 4) = *(undefined4 *)(iVar11 + 4);
              *(undefined4 *)(iVar15 + iVar10) = *(undefined4 *)(iVar10 + iVar19);
              *(undefined4 *)(iVar15 + iVar13) = *(undefined4 *)(iVar13 + iVar19);
            } while ((int)uVar16 < iVar6 + -3);
          }
          if ((int)uVar16 < iVar6) {
            lVar22 = param_1 - uVar16;
            iVar15 = *(int *)(iVar18 + (int)param_5);
            lVar7 = (uVar16 & 0x3fffffff) << 2;
            do {
              *(undefined4 *)(iVar15 + (int)lVar7) =
                   *(undefined4 *)(*(int *)(iVar18 + param_6) + (int)lVar7);
              lVar7 = lVar7 + 4;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          iVar21 = iVar21 + 1;
          iVar18 = iVar18 + 4;
        } while (iVar21 < asStack_8e[0]);
      }
      uVar16 = (longlong)asStack_8e[0] + 1;
      if ((int)uVar16 < iVar8) {
        lVar22 = (uVar16 & 0x3fffffff) << 2;
        param_3 = param_3 - uVar16;
        do {
          uVar16 = 0;
          iVar8 = (int)lVar22;
          if (3 < iVar6) {
            iVar21 = *(int *)(iVar8 + (int)param_5);
            iVar18 = 0;
            do {
              iVar15 = *(int *)(iVar8 + param_6 + -4);
              iVar19 = iVar18 + iVar21;
              iVar14 = iVar18 + 0xc;
              iVar12 = iVar18 + iVar15;
              iVar11 = iVar18 + 8;
              uVar16 = uVar16 + 4;
              *(undefined4 *)(iVar18 + iVar21) = *(undefined4 *)(iVar18 + iVar15);
              iVar18 = iVar18 + 0x10;
              *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(iVar12 + 4);
              *(undefined4 *)(iVar21 + iVar11) = *(undefined4 *)(iVar15 + iVar11);
              *(undefined4 *)(iVar21 + iVar14) = *(undefined4 *)(iVar15 + iVar14);
            } while ((int)uVar16 < iVar6 + -3);
          }
          if ((int)uVar16 < iVar6) {
            lVar7 = param_1 - uVar16;
            iVar21 = *(int *)(iVar8 + (int)param_5);
            lVar17 = (uVar16 & 0x3fffffff) << 2;
            do {
              *(undefined4 *)(iVar21 + (int)lVar17) =
                   *(undefined4 *)(*(int *)(iVar8 + param_6 + -4) + (int)lVar17);
              lVar17 = lVar17 + 4;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          param_3 = param_3 + -1;
          lVar22 = lVar22 + 4;
        } while (param_3 != 0);
        return uVar5;
      }
      return uVar5;
    }
    if (sStack_90 == -1) goto LAB_82c1bf10;
  }
  else {
    if (asStack_8e[0] != -1) {
      iVar21 = 0;
      *(undefined4 *)(param_5[asStack_8e[0]] + sStack_90 * 4) = lbl_82002AE0;
      if (0 < asStack_8e[0]) {
        iVar18 = 0;
        do {
          iVar15 = 0;
          if (0 < sStack_90) {
            iVar12 = *(int *)(iVar18 + (int)param_5);
            iVar19 = 0;
            do {
              iVar15 = iVar15 + 1;
              *(undefined4 *)(iVar12 + iVar19) =
                   *(undefined4 *)(*(int *)(iVar18 + param_6) + iVar19);
              iVar19 = iVar19 + 4;
            } while (iVar15 < sStack_90);
          }
          uVar16 = (longlong)sStack_90 + 1;
          if ((int)uVar16 < iVar6) {
            if (3 < iVar6 - (int)uVar16) {
              iVar15 = *(int *)(iVar18 + (int)param_5);
              lVar22 = (uVar16 & 0x3fffffff) << 2;
              do {
                iVar12 = *(int *)(iVar18 + param_6);
                iVar19 = (int)lVar22;
                iVar11 = iVar19 + 8;
                uVar16 = uVar16 + 4;
                *(undefined4 *)(iVar15 + iVar19) = *(undefined4 *)(iVar12 + iVar19 + -4);
                lVar22 = lVar22 + 0x10;
                *(undefined4 *)(iVar15 + iVar19 + 4) = *(undefined4 *)(iVar12 + iVar19);
                *(undefined4 *)(iVar15 + iVar11) = *(undefined4 *)(iVar12 + iVar19 + 4);
                *(undefined4 *)(iVar15 + iVar11 + 4) = *(undefined4 *)(iVar11 + iVar12);
              } while ((int)uVar16 < iVar6 + -3);
            }
            if ((int)uVar16 < iVar6) {
              lVar22 = param_1 - uVar16;
              iVar15 = *(int *)(iVar18 + (int)param_5);
              lVar7 = (uVar16 & 0x3fffffff) << 2;
              do {
                *(undefined4 *)(iVar15 + (int)lVar7) =
                     *(undefined4 *)(*(int *)(iVar18 + param_6) + (int)lVar7 + -4);
                lVar7 = lVar7 + 4;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
            }
          }
          iVar21 = iVar21 + 1;
          iVar18 = iVar18 + 4;
        } while (iVar21 < asStack_8e[0]);
      }
      uVar16 = (longlong)asStack_8e[0] + 1;
      if ((int)uVar16 < iVar8) {
        lVar22 = (uVar16 & 0x3fffffff) << 2;
        param_3 = param_3 - uVar16;
        do {
          iVar21 = 0;
          iVar8 = (int)lVar22;
          if (0 < sStack_90) {
            iVar18 = *(int *)(iVar8 + (int)param_5);
            iVar15 = 0;
            do {
              iVar21 = iVar21 + 1;
              *(undefined4 *)(iVar18 + iVar15) =
                   *(undefined4 *)(*(int *)(iVar8 + param_6 + -4) + iVar15);
              iVar15 = iVar15 + 4;
            } while (iVar21 < sStack_90);
          }
          uVar16 = (longlong)sStack_90 + 1;
          if ((int)uVar16 < iVar6) {
            if (3 < iVar6 - (int)uVar16) {
              iVar21 = *(int *)(iVar8 + (int)param_5);
              lVar7 = (uVar16 & 0x3fffffff) << 2;
              do {
                iVar18 = *(int *)(iVar8 + param_6 + -4);
                iVar15 = (int)lVar7;
                iVar12 = iVar15 + 8;
                uVar16 = uVar16 + 4;
                *(undefined4 *)(iVar21 + iVar15) = *(undefined4 *)(iVar15 + iVar18 + -4);
                lVar7 = lVar7 + 0x10;
                *(undefined4 *)(iVar21 + iVar15 + 4) = *(undefined4 *)(iVar15 + iVar18);
                *(undefined4 *)(iVar21 + iVar12) = *(undefined4 *)(iVar15 + iVar18 + 4);
                *(undefined4 *)(iVar21 + iVar12 + 4) = *(undefined4 *)(iVar12 + iVar18);
              } while ((int)uVar16 < iVar6 + -3);
            }
            if ((int)uVar16 < iVar6) {
              lVar7 = param_1 - uVar16;
              iVar21 = *(int *)(iVar8 + (int)param_5);
              lVar17 = (uVar16 & 0x3fffffff) << 2;
              do {
                *(undefined4 *)(iVar21 + (int)lVar17) =
                     *(undefined4 *)(*(int *)(iVar8 + param_6 + -4) + (int)lVar17 + -4);
                lVar17 = lVar17 + 4;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
          }
          param_3 = param_3 + -1;
          lVar22 = lVar22 + 4;
        } while (param_3 != 0);
        return uVar5;
      }
      return uVar5;
    }
    if (sStack_90 == -1) goto LAB_82c1bc20;
  }
  if (asStack_8e[0] == -1) {
    if (0 < iVar8) {
      iVar21 = 0;
      fVar3 = (float)(longlong)iVar8;
      fVar1 = fVar3 + lbl_82002C2C;
      fVar2 = lbl_82002C2C / fVar1;
      do {
        iVar8 = 0;
        if (0 < sStack_90) {
          iVar18 = *(int *)(iVar21 + (int)param_5);
          iVar15 = 0;
          do {
            iVar8 = iVar8 + 1;
            *(float *)(iVar18 + iVar15) =
                 (*(float *)(*(int *)(iVar21 + param_6) + iVar15) * fVar3) / fVar1;
            iVar15 = iVar15 + 4;
          } while (iVar8 < sStack_90);
        }
        iVar8 = *(int *)(iVar21 + (int)param_5);
        *(float *)(sStack_90 * 4 + iVar8) = fVar2;
        uVar16 = (longlong)sStack_90 + 1;
        if ((int)uVar16 < iVar6) {
          if (3 < iVar6 - (int)uVar16) {
            lVar22 = (uVar16 & 0x3fffffff) << 2;
            do {
              iVar18 = *(int *)(iVar21 + param_6);
              iVar15 = (int)lVar22;
              iVar12 = iVar15 + 8;
              uVar16 = uVar16 + 4;
              *(float *)(iVar8 + iVar15) = (*(float *)(iVar18 + iVar15 + -4) * fVar3) / fVar1;
              lVar22 = lVar22 + 0x10;
              *(float *)(iVar8 + iVar15 + 4) = (fVar3 * *(float *)(iVar18 + iVar15)) / fVar1;
              *(float *)(iVar8 + iVar12) = (*(float *)(iVar18 + iVar15 + 4) * fVar3) / fVar1;
              *(float *)(iVar8 + iVar12 + 4) = (*(float *)(iVar18 + iVar12) * fVar3) / fVar1;
            } while ((int)uVar16 < iVar6 + -3);
          }
          if ((int)uVar16 < iVar6) {
            lVar22 = param_1 - uVar16;
            lVar7 = (uVar16 & 0x3fffffff) << 2;
            do {
              *(float *)(iVar8 + (int)lVar7) =
                   (*(float *)(*(int *)(iVar21 + param_6) + (int)lVar7 + -4) * fVar3) / fVar1;
              lVar7 = lVar7 + 4;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
        }
        param_3 = param_3 + -1;
        iVar21 = iVar21 + 4;
      } while (param_3 != 0);
      return uVar5;
    }
    return uVar5;
  }
LAB_82c1bf10:
  if (0 < iVar8) {
    iVar8 = 0;
    do {
      uVar16 = 0;
      if (3 < iVar6) {
        iVar21 = *(int *)(iVar8 + (int)param_5);
        iVar18 = 0;
        do {
          iVar15 = *(int *)(iVar8 + param_6);
          iVar19 = iVar21 + iVar18;
          iVar14 = iVar18 + 0xc;
          iVar12 = iVar15 + iVar18;
          iVar11 = iVar18 + 8;
          uVar16 = uVar16 + 4;
          *(undefined4 *)(iVar21 + iVar18) = *(undefined4 *)(iVar15 + iVar18);
          iVar18 = iVar18 + 0x10;
          *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(iVar12 + 4);
          *(undefined4 *)(iVar21 + iVar11) = *(undefined4 *)(iVar15 + iVar11);
          *(undefined4 *)(iVar21 + iVar14) = *(undefined4 *)(iVar15 + iVar14);
        } while ((int)uVar16 < iVar6 + -3);
      }
      if ((int)uVar16 < iVar6) {
        lVar22 = param_1 - uVar16;
        iVar21 = *(int *)(iVar8 + (int)param_5);
        lVar7 = (uVar16 & 0x3fffffff) << 2;
        do {
          *(undefined4 *)(iVar21 + (int)lVar7) =
               *(undefined4 *)(*(int *)(iVar8 + param_6) + (int)lVar7);
          lVar7 = lVar7 + 4;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      param_3 = param_3 + -1;
      iVar8 = iVar8 + 4;
    } while (param_3 != 0);
    return uVar5;
  }
  return uVar5;
}

