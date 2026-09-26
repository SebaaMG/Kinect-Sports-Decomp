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
extern int fn_829632F0();
extern int fn_829633B8();
extern int fn_829636A8();
extern int fn_829646C8();
extern int fn_82966400();
extern int fn_8296BCB0();


undefined8 fn_8296BD78(int param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  
  uVar15 = (ulonglong)param_2[3];
  uVar14 = param_2[1] / uVar15;
  trapWord(6,uVar15,0);
  iVar6 = fn_829633B8(param_2);
  if (iVar6 == 0) {
    uVar22 = 0;
    uVar19 = uVar15;
    if (uVar15 != 0) {
      lVar17 = 0;
      do {
        uVar16 = param_2[4];
        iVar6 = *(int *)(uVar16 + (int)lVar17);
        if ((iVar6 != -1) &&
           ((*(uint *)(*(int *)(*(int *)(*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14)) + 4) * 4 +
                               *(int *)(param_1 + 0x10)) + 4) & 0x40) != 0)) {
          uVar21 = 0;
          if ((uVar22 & 0xffffffff) < uVar15) {
            lVar10 = uVar15 - uVar22;
            lVar11 = lVar17;
            do {
              if ((*(int *)(uVar16 + (int)lVar11) != -1) &&
                 (iVar6 = fn_82966400(param_1,*(undefined4 *)(param_2[4] + (int)lVar17),
                                        *(undefined4 *)(param_2[4] + (int)lVar11)), iVar6 != 0)) {
                uVar21 = uVar21 + 1;
              }
              lVar10 = lVar10 + -1;
              lVar11 = lVar11 + 4;
            } while (lVar10 != 0);
          }
          iVar6 = fn_829646C8(param_1,uVar21 & 0xfffff | *param_2 & 0xfff00000,0xffffffffffffffff,
                                0xffffffffffffffff);
          if (iVar6 == -1) {
            return 0xffffffff8007000e;
          }
          iVar6 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x18));
          fn_829632F0(iVar6,param_2);
          lVar11 = 0;
          if ((uVar22 & 0xffffffff) < uVar15) {
            iVar7 = 0;
            lVar10 = lVar17;
            uVar20 = uVar22;
            do {
              if ((*(int *)(param_2[4] + (int)lVar10) != -1) &&
                 (iVar8 = fn_82966400(param_1), iVar8 != 0)) {
                iVar8 = 0;
                for (uVar23 = uVar14; uVar23 != 0; uVar23 = uVar23 - 1) {
                  lVar1 = (longlong)iVar8;
                  lVar2 = (longlong)iVar8;
                  iVar8 = iVar8 + 1;
                  *(undefined4 *)
                   ((int)((lVar2 * *(int *)(iVar6 + 0xc) + lVar11 & 0xffffffffU) << 2) +
                   *(int *)(iVar6 + 8)) =
                       *(undefined4 *)
                        ((int)((lVar1 * (int)param_2[3] + uVar20 & 0xffffffff) << 2) + param_2[2]);
                }
                uVar19 = uVar19 - 1;
                lVar11 = lVar11 + 1;
                *(undefined4 *)(*(int *)(iVar6 + 0x10) + iVar7) =
                     *(undefined4 *)(param_2[4] + (int)lVar10);
                iVar7 = iVar7 + 4;
                *(undefined4 *)(param_2[4] + (int)lVar10) = 0xffffffff;
              }
              uVar20 = uVar20 + 1;
              lVar10 = lVar10 + 4;
            } while ((uVar20 & 0xffffffff) < uVar15);
          }
        }
        uVar22 = uVar22 + 1;
        lVar17 = lVar17 + 4;
      } while ((uVar22 & 0xffffffff) < uVar15);
    }
    lVar17 = fn_829636A8(param_2);
    bVar4 = true;
    bVar5 = true;
    if ((lVar17 == 0) && (uVar22 = 0, uVar15 != 0)) {
      iVar6 = 0;
      do {
        if ((*(int *)(param_2[4] + iVar6) != -1) &&
           ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2[4] + iVar6) * 4 +
                                                 *(int *)(param_1 + 0x14)) + 4) * 4 +
                               *(int *)(param_1 + 0x10)) + 4) & 0x1000) != 0)) {
          lVar17 = 1;
          break;
        }
        uVar22 = uVar22 + 1;
        iVar6 = iVar6 + 4;
      } while ((uVar22 & 0xffffffff) < uVar15);
    }
LAB_8296c2c4:
    if ((uVar19 & 0xffffffff) != 0) {
      if (((uVar19 & 0xffffffff) < 5) && ((int)lVar17 == 0)) {
        bVar4 = false;
        bVar5 = false;
      }
      uVar16 = 0;
      uVar22 = 0;
      uVar20 = 0;
      if (uVar15 == 0) {
        return 0;
      }
      uVar21 = param_2[4];
      iVar6 = 0;
      do {
        if (*(int *)(uVar21 + iVar6) != -1) {
          uVar18 = 0;
          uVar23 = 0;
          iVar7 = 0;
          do {
            if (3 < uVar18) break;
            if (*(int *)(uVar21 + iVar7) != -1) {
              if (bVar4) {
                iVar8 = *(int *)(param_2[4] + iVar7);
                iVar12 = *(int *)(param_2[4] + iVar6);
                if ((iVar12 != iVar8) &&
                   ((*(uint *)(*(int *)(iVar12 * 4 + *(int *)(param_1 + 0x14)) + 0x40) &
                    *(uint *)(*(int *)(iVar8 * 4 + *(int *)(param_1 + 0x14)) + 0x40)) == 0))
                goto LAB_8296c14c;
              }
              if ((!bVar5) || (iVar8 = fn_8296BCB0(param_1,param_2,uVar20,uVar23), iVar8 == 0)) {
                uVar18 = uVar18 + 1;
              }
            }
LAB_8296c14c:
            uVar23 = uVar23 + 1;
            iVar7 = iVar7 + 4;
          } while ((uVar23 & 0xffffffff) < uVar15);
          if (uVar16 < uVar18) {
            uVar22 = uVar20;
            uVar16 = uVar18;
          }
        }
        uVar20 = uVar20 + 1;
        iVar6 = iVar6 + 4;
      } while ((uVar20 & 0xffffffff) < uVar15);
      if (uVar16 == 0) {
        return 0;
      }
      iVar6 = fn_829646C8(param_1,uVar16 & 0xfffff | *param_2 & 0xfff00000,0xffffffffffffffff,
                            0xffffffffffffffff);
      if (iVar6 == -1) {
        return 0xffffffff8007000e;
      }
      iVar6 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x18));
      fn_829632F0(iVar6,param_2);
      iVar8 = 0;
      uVar20 = 0;
      iVar12 = 0;
      uVar16 = 0;
      iVar7 = *(int *)((int)((uVar22 & 0xffffffff) << 2) + param_2[4]);
      do {
        if (0xf < uVar16) break;
        iVar9 = *(int *)(param_2[4] + iVar12);
        if (((iVar9 != -1) &&
            (((!bVar4 || (iVar7 == iVar9)) ||
             ((*(uint *)(*(int *)(iVar9 * 4 + *(int *)(param_1 + 0x14)) + 0x40) &
              *(uint *)(*(int *)(iVar7 * 4 + *(int *)(param_1 + 0x14)) + 0x40)) != 0)))) &&
           ((!bVar5 || (iVar9 = fn_8296BCB0(param_1,param_2,uVar22,uVar20), iVar9 == 0)))) {
          iVar9 = 0;
          for (uVar23 = uVar14; uVar23 != 0; uVar23 = uVar23 - 1) {
            lVar11 = (longlong)iVar9;
            iVar13 = *(int *)(iVar6 + 0xc) * iVar9;
            iVar9 = iVar9 + 1;
            *(undefined4 *)((iVar13 + iVar8) * 4 + *(int *)(iVar6 + 8)) =
                 *(undefined4 *)
                  ((int)((lVar11 * (int)param_2[3] + uVar20 & 0xffffffff) << 2) + param_2[2]);
          }
          uVar19 = uVar19 - 1;
          iVar8 = iVar8 + 1;
          *(undefined4 *)(*(int *)(iVar6 + 0x10) + uVar16) = *(undefined4 *)(param_2[4] + iVar12);
          uVar16 = uVar16 + 4;
          *(undefined4 *)(param_2[4] + iVar12) = 0xffffffff;
        }
        uVar20 = uVar20 + 1;
        iVar12 = iVar12 + 4;
      } while ((uVar20 & 0xffffffff) < uVar15);
      goto LAB_8296c2c4;
    }
  }
  else {
    uVar19 = 0;
    if (uVar15 != 0) {
      iVar6 = 0;
      do {
        iVar7 = fn_829646C8(param_1,*param_2 & 0xfff00000 | 1,0xffffffffffffffff,
                              0xffffffffffffffff);
        if (iVar7 == -1) {
          return 0xffffffff8007000e;
        }
        iVar7 = *(int *)(iVar7 * 4 + *(int *)(param_1 + 0x18));
        fn_829632F0(iVar7,param_2);
        iVar8 = 0;
        if (uVar14 != 0) {
          iVar12 = 0;
          uVar22 = uVar14;
          do {
            lVar17 = (longlong)iVar8;
            iVar8 = iVar8 + 1;
            *(undefined4 *)(iVar12 + *(int *)(iVar7 + 8)) =
                 *(undefined4 *)
                  ((int)((lVar17 * (int)param_2[3] + uVar19 & 0xffffffff) << 2) + param_2[2]);
            iVar12 = iVar12 + 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        uVar19 = uVar19 + 1;
        puVar3 = (undefined4 *)(param_2[4] + iVar6);
        iVar6 = iVar6 + 4;
        **(undefined4 **)(iVar7 + 0x10) = *puVar3;
      } while ((uVar19 & 0xffffffff) < uVar15);
    }
  }
  return 0;
}

