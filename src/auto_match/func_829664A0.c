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
extern int fn_82964628();
extern int fn_829646C8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


undefined8 fn_829664A0(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined8 uVar26;
  uint uStack_b0;
  uint uStack_ac;
  
  uVar23 = *param_2;
  uVar24 = (ulonglong)uVar23;
  uVar22 = uVar24 & 0xfffff;
  uStack_b0 = 0;
  uStack_ac = (uint)uVar22;
  uVar15 = uVar22;
  uVar26 = lbl_82005710;
  if ((uVar23 & 0xfffff) != 0) {
    do {
      iVar6 = 0;
      iVar7 = 0;
      iVar21 = 0;
      iVar20 = 0;
      iVar19 = 0;
      iVar18 = 0;
      iVar17 = 0;
      iVar16 = 0;
      uVar9 = uVar15;
      if ((4 < (uVar15 & 0xffffffff)) && (uVar9 = 0, (uVar23 & 0xfffff) != 0)) {
        iVar4 = 4;
        lVar25 = (uVar24 & 0xfffff) << 2;
        uVar8 = 1;
        do {
          if (*(int *)((param_2[2] - 4) + iVar4) != -1) {
            uVar10 = 1;
            iVar13 = *(int *)(*(int *)(param_2[2] + (int)lVar25) * 4 + *(int *)(param_1 + 0x14));
            iVar14 = *(int *)(*(int *)(param_2[2] + iVar4 + -4) * 4 + *(int *)(param_1 + 0x14));
            lVar12 = lVar25;
            iVar11 = iVar4;
            for (uVar3 = uVar8; (uVar3 & 0xffffffff) < uVar22; uVar3 = uVar3 + 1) {
              lVar12 = lVar12 + 4;
              if (*(int *)(param_2[2] + (int)lVar12) != -1) {
                iVar1 = *(int *)(*(int *)(param_2[2] + iVar11) * 4 + *(int *)(param_1 + 0x14));
                iVar2 = *(int *)(*(int *)(param_2[2] + (int)lVar12) * 4 + *(int *)(param_1 + 0x14));
                if ((((((*(int *)(iVar14 + 4) == *(int *)(iVar1 + 4)) &&
                       (*(int *)(iVar14 + 8) == *(int *)(iVar1 + 8))) &&
                      (*(int *)(iVar14 + 0xc) == *(int *)(iVar1 + 0xc))) &&
                     ((*(int *)(iVar14 + 0x48) == *(int *)(iVar1 + 0x48) &&
                      (*(int *)(iVar13 + 4) == *(int *)(iVar2 + 4))))) &&
                    ((*(int *)(iVar13 + 8) == *(int *)(iVar2 + 8) &&
                     ((*(int *)(iVar13 + 0xc) == *(int *)(iVar2 + 0xc) &&
                      (*(int *)(iVar13 + 0x48) == *(int *)(iVar2 + 0x48))))))) &&
                   (uVar10 = uVar10 + 1, (uVar10 & 0xffffffff) == 4)) {
                  uVar15 = (ulonglong)uStack_ac;
                  break;
                }
                uVar15 = (ulonglong)uStack_ac;
              }
              iVar11 = iVar11 + 4;
            }
            if ((uVar9 & 0xffffffff) < (uVar10 & 0xffffffff)) {
              iVar6 = *(int *)(iVar14 + 4);
              iVar7 = *(int *)(iVar13 + 4);
              iVar21 = *(int *)(iVar14 + 8);
              iVar20 = *(int *)(iVar13 + 8);
              iVar19 = *(int *)(iVar14 + 0xc);
              iVar18 = *(int *)(iVar13 + 0xc);
              iVar17 = *(int *)(iVar14 + 0x48);
              iVar16 = *(int *)(iVar13 + 0x48);
              uVar9 = uVar10;
            }
            if ((uVar9 & 0xffffffff) == 4) break;
          }
          lVar25 = lVar25 + 4;
          iVar4 = iVar4 + 4;
          uVar10 = uVar8 & 0xffffffff;
          uVar8 = uVar8 + 1;
        } while (uVar10 < uVar22);
      }
      iVar4 = fn_829646C8(param_1,uVar9 & 0xffffffff000fffff | 0x50000000,0xffffffffffffffff,
                            0xffffffffffffffff);
      if (iVar4 == -1) {
        return 0xffffffff8007000e;
      }
      iVar4 = *(int *)(iVar4 * 4 + *(int *)(param_1 + 0x18));
      fn_829632F0(iVar4,param_2);
      uVar10 = 0;
      uVar8 = 0;
      if ((uVar23 & 0xfffff) != 0) {
        iVar14 = 0;
        iVar13 = 0;
        lVar25 = (uVar24 & 0xfffff) << 2;
        lVar12 = (uVar9 & 0x3fffffff) << 2;
        do {
          if ((uVar9 & 0xffffffff) <= (uVar10 & 0xffffffff)) break;
          if (*(int *)(param_2[2] + iVar14) != -1) {
            iVar2 = (int)lVar25;
            iVar11 = *(int *)(*(int *)(param_2[2] + iVar14) * 4 + *(int *)(param_1 + 0x14));
            iVar1 = *(int *)(*(int *)(param_2[2] + iVar2) * 4 + *(int *)(param_1 + 0x14));
            if (((uVar15 & 0xffffffff) < 5) ||
               ((((iVar6 == *(int *)(iVar11 + 4) && (iVar21 == *(int *)(iVar11 + 8))) &&
                 (iVar19 == *(int *)(iVar11 + 0xc))) &&
                (((iVar17 == *(int *)(iVar11 + 0x48) && (iVar7 == *(int *)(iVar1 + 4))) &&
                 ((iVar20 == *(int *)(iVar1 + 8) &&
                  ((iVar18 == *(int *)(iVar1 + 0xc) && (iVar16 == *(int *)(iVar1 + 0x48))))))))))) {
              uVar10 = uVar10 + 1;
              *(undefined4 *)(*(int *)(iVar4 + 8) + iVar13) = *(undefined4 *)(param_2[2] + iVar14);
              iVar13 = iVar13 + 4;
              *(undefined4 *)(*(int *)(iVar4 + 8) + (int)lVar12) =
                   *(undefined4 *)(param_2[2] + iVar2);
              lVar12 = lVar12 + 4;
              *(undefined4 *)(param_2[2] + iVar14) = 0xffffffff;
              *(undefined4 *)(param_2[2] + iVar2) = 0xffffffff;
            }
          }
          uVar8 = uVar8 + 1;
          iVar14 = iVar14 + 4;
          lVar25 = lVar25 + 4;
        } while ((uVar8 & 0xffffffff) < uVar22);
      }
      if (uVar22 < 5) {
        **(undefined4 **)(iVar4 + 0x10) = *(undefined4 *)param_2[4];
      }
      else {
        uVar5 = fn_82964628(uVar26,param_1,*(undefined4 *)(param_1 + 0x88),0xffffffffffffffff,
                              0xffffffffffffffff);
        **(undefined4 **)(iVar4 + 0x10) = uVar5;
        if (**(int **)(iVar4 + 0x10) == -1) {
          return 0xffffffff8007000e;
        }
        *(undefined4 *)(*(int *)(**(int **)(iVar4 + 0x10) * 4 + *(int *)(param_1 + 0x14)) + 0x14) =
             *(undefined4 *)(*(int *)(*(int *)param_2[4] * 4 + *(int *)(param_1 + 0x14)) + 0x14);
        *(undefined4 *)(*(int *)(**(int **)(iVar4 + 0x10) * 4 + *(int *)(param_1 + 0x14)) + 0x18) =
             *(undefined4 *)(*(int *)(*(int *)param_2[4] * 4 + *(int *)(param_1 + 0x14)) + 0x18);
      }
      uVar15 = uVar15 - uVar9;
      uStack_b0 = uStack_b0 + 1;
      uStack_ac = (uint)uVar15;
    } while (uVar15 != 0);
    uVar22 = (ulonglong)uStack_b0;
    if (1 < uVar22) {
      iVar6 = fn_82964628(lbl_82005758,param_1,*(undefined4 *)(param_1 + 0x78),0xffffffffffffffff,
                            0);
      if (iVar6 == -1) {
        return 0xffffffff8007000e;
      }
      do {
        uVar23 = 0;
        uVar24 = *(uint *)(param_1 + 0xc) - uVar22;
        if (uVar22 != 0) {
          uVar15 = 0;
          uVar23 = 0;
          do {
            uVar15 = uVar22 - uVar15;
            if (4 < (uVar15 & 0xffffffff)) {
              uVar15 = 4;
            }
            if ((uVar15 & 0xffffffff) == 1) {
              uVar9 = 0x10000000;
LAB_8296692c:
              uVar9 = uVar9 | 1;
            }
            else {
              if ((uVar15 & 0xffffffff) == 2) {
                uVar9 = 0x20400000;
                goto LAB_8296692c;
              }
              uVar9 = uVar15 & 0xffffffff000fffff | 0x50000000;
            }
            iVar7 = fn_829646C8(param_1,uVar9,0xffffffffffffffff,0xffffffffffffffff);
            if (iVar7 == -1) {
              return 0xffffffff8007000e;
            }
            iVar7 = *(int *)(iVar7 * 4 + *(int *)(param_1 + 0x18));
            fn_829632F0(iVar7,param_2);
            if ((uVar15 & 0xffffffff) != 0) {
              iVar21 = 0;
              lVar25 = (uVar15 & 0x3fffffff) << 2;
              lVar12 = (uVar24 & 0x3fffffff) << 2;
              uVar9 = uVar15;
              do {
                *(undefined4 *)(iVar21 + *(int *)(iVar7 + 8)) =
                     **(undefined4 **)(*(int *)((int)lVar12 + *(int *)(param_1 + 0x18)) + 0x10);
                if (2 < (uVar15 & 0xffffffff)) {
                  *(int *)((int)lVar25 + *(int *)(iVar7 + 8)) = iVar6;
                }
                iVar21 = iVar21 + 4;
                lVar12 = lVar12 + 4;
                lVar25 = lVar25 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            if (uVar22 < 5) {
              **(undefined4 **)(iVar7 + 0x10) = *(undefined4 *)param_2[4];
            }
            else {
              uVar5 = fn_82964628(uVar26,param_1,*(undefined4 *)(param_1 + 0x88),
                                    0xffffffffffffffff,0xffffffffffffffff);
              **(undefined4 **)(iVar7 + 0x10) = uVar5;
              if (**(int **)(iVar7 + 0x10) == -1) {
                return 0xffffffff8007000e;
              }
              *(undefined4 *)
               (*(int *)(**(int **)(iVar7 + 0x10) * 4 + *(int *)(param_1 + 0x14)) + 0x14) =
                   *(undefined4 *)
                    (*(int *)(*(int *)param_2[4] * 4 + *(int *)(param_1 + 0x14)) + 0x14);
              *(undefined4 *)
               (*(int *)(**(int **)(iVar7 + 0x10) * 4 + *(int *)(param_1 + 0x14)) + 0x18) =
                   *(undefined4 *)
                    (*(int *)(*(int *)param_2[4] * 4 + *(int *)(param_1 + 0x14)) + 0x18);
            }
            uVar23 = uVar23 + 1;
            uVar24 = uVar15 + uVar24;
            uVar15 = ((ulonglong)uVar23 & 0x3fffffff) << 2;
          } while (uVar15 < uVar22);
        }
        if (uVar23 < 2) {
          return 0;
        }
        uVar22 = (ulonglong)uVar23;
      } while( true );
    }
  }
  return 0;
}

