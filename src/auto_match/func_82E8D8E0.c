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
extern unsigned int *auStack_a0;


void fn_82E8D8E0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar11;
  longlong lVar10;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int iVar17;
  longlong lVar16;
  ulonglong uVar18;
  uint auStack_a0 [40];
  
  iVar11 = *(int *)(param_1 + 0x1e54);
  auStack_a0[1] = 0;
  auStack_a0[0] = 1000;
  auStack_a0[2] = 0;
  if (*(int *)(param_1 + 0x6d8c) == 2) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x7b40) + 0x18);
    if ((int)(auStack_a0[*(byte *)*puVar1] + *(int *)puVar1[3]) < 0) {
      *(undefined4 *)(iVar11 + 0x94) = 0;
    }
    else {
      *(undefined4 *)(iVar11 + 0x94) = 1;
    }
  }
  else {
    *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
  }
  iVar11 = iVar11 + 0x114;
  uVar15 = 1;
  if (1 < *(int *)(param_1 + 0x2d0) - 1U) {
    iVar17 = 4;
    do {
      if (*(int *)(param_1 + 0x6d8c) == 2) {
        piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
        if ((int)(auStack_a0[*(byte *)(*piVar2 + uVar15)] + *(int *)(piVar2[3] + iVar17)) < 0) {
          piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
          if (((int)(auStack_a0[*(byte *)(*piVar2 + uVar15 + -1)] +
                    *(int *)(piVar2[3] + iVar17 + -4)) < 0) ||
             (piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18),
             (int)(auStack_a0[*(byte *)(*piVar2 + uVar15 + 1)] + *(int *)(piVar2[3] + iVar17 + 4)) <
             0)) {
            *(undefined4 *)(iVar11 + 0x94) = 0;
          }
          else {
            *(undefined4 *)(iVar11 + 0x94) = 1;
          }
        }
        else {
          *(undefined4 *)(iVar11 + 0x94) = 1;
        }
      }
      else {
        *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
      }
      uVar15 = uVar15 + 1;
      iVar11 = iVar11 + 0x114;
      iVar17 = iVar17 + 4;
    } while (uVar15 < *(int *)(param_1 + 0x2d0) - 1U);
  }
  if (*(int *)(param_1 + 0x6d8c) == 2) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
    if ((int)(*(int *)(*(int *)(param_1 + 0x2d0) * 4 + piVar2[3] + -4) +
             auStack_a0[*(byte *)(*(int *)(param_1 + 0x2d0) + *piVar2 + -1)]) < 0) {
      *(undefined4 *)(iVar11 + 0x94) = 0;
    }
    else {
      *(undefined4 *)(iVar11 + 0x94) = 1;
    }
  }
  else {
    *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
  }
  iVar11 = iVar11 + 0x114;
  uVar15 = 1;
  if (1 < *(int *)(param_1 + 0x2d4) - 1U) {
    do {
      if (*(int *)(param_1 + 0x6d8c) == 2) {
        iVar17 = uVar15 * *(int *)(param_1 + 0x2d0);
        piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
        if ((int)(*(int *)(iVar17 * 4 + piVar2[3]) + auStack_a0[*(byte *)(iVar17 + *piVar2)]) < 0) {
          *(undefined4 *)(iVar11 + 0x94) = 0;
        }
        else {
          *(undefined4 *)(iVar11 + 0x94) = 1;
        }
      }
      else {
        *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
      }
      iVar11 = iVar11 + 0x114;
      uVar18 = 1;
      if (1 < *(int *)(param_1 + 0x2d0) - 1U) {
        do {
          if (*(int *)(param_1 + 0x6d8c) == 2) {
            iVar17 = (int)uVar18;
            if ((*(int *)(param_1 + 0x6d54) == 0) || (*(int *)(param_1 + 0x7b38) == 0)) {
              lVar16 = (longlong)(int)uVar15 * (longlong)*(int *)(param_1 + 0x2d0);
              piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
              if ((int)(*(int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) + piVar2[3]) +
                       auStack_a0[*(byte *)(*piVar2 + (int)lVar16 + iVar17)]) < 0) {
                iVar7 = *(int *)(param_1 + 0x7b40);
                iVar8 = *(int *)(param_1 + 0x2d0);
                piVar2 = *(int **)(iVar7 + 0x18);
                lVar9 = (longlong)(int)(uVar15 - 1) * (longlong)iVar8;
                lVar16 = (longlong)(int)(uVar15 + 1) * (longlong)iVar8;
                if (1 < ((int)((~((ulonglong)
                                  *(uint *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) +
                                           (*(int **)(iVar7 + 0x18))[3]) +
                                  (ulonglong)
                                  auStack_a0
                                  [*(byte *)((int)lVar16 + iVar17 + **(int **)(iVar7 + 0x18))] ^
                                 0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                        ((int)((~((ulonglong)
                                  *(uint *)((int)(((longlong)(int)uVar15 * (longlong)iVar8 + uVar18
                                                  & 0xffffffff) << 2) + piVar2[3] + 4) +
                                  (ulonglong)
                                  auStack_a0
                                  [*(byte *)(*piVar2 + (int)((longlong)(int)uVar15 * (longlong)iVar8
                                                            ) + iVar17 + 1)] ^ 0xffffffffffffffff) &
                               0xffffffff) >> 0x1f) + 1U & 1) +
                        ((int)((~((ulonglong)
                                  *(uint *)((int)((lVar9 + uVar18 & 0xffffffff) << 2) + piVar2[3]) +
                                  (ulonglong)auStack_a0[*(byte *)(*piVar2 + (int)lVar9 + iVar17)] ^
                                 0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                        ((int)((~((ulonglong)
                                  *(uint *)((int)(((longlong)(int)uVar15 * (longlong)iVar8 + uVar18
                                                  & 0xffffffff) << 2) + (*(int **)(iVar7 + 0x18))[3]
                                           + -4) +
                                  (ulonglong)
                                  auStack_a0
                                  [*(byte *)((int)((longlong)(int)uVar15 * (longlong)iVar8) + iVar17
                                             + **(int **)(iVar7 + 0x18) + -1)] ^ 0xffffffffffffffff)
                               & 0xffffffff) >> 0x1f) + 1U & 1)) goto LAB_82e8e0b8;
LAB_82e8e0c0:
                *(undefined4 *)(iVar11 + 0x94) = 0;
              }
              else {
                *(undefined4 *)(iVar11 + 0x94) = 1;
              }
            }
            else {
              piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
              lVar16 = ((longlong)(int)uVar15 * (longlong)*(int *)(param_1 + 0x2d0) & 0x7fffffffU) *
                       2;
              if ((int)(*(int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) + piVar2[3]) +
                       auStack_a0[*(byte *)((int)lVar16 + *piVar2 + iVar17)]) < 0) {
                iVar7 = uVar15 * 2;
                iVar8 = iVar7 + 1;
                lVar16 = (longlong)iVar8 * (longlong)*(int *)(param_1 + 0x2d0);
                piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
                if ((int)(*(int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) + piVar2[3]) +
                         auStack_a0[*(byte *)((int)lVar16 + *piVar2 + iVar17)]) < 0) {
                  iVar3 = *(int *)(param_1 + 0x7b40);
                  iVar4 = *(int *)(param_1 + 0x2d0);
                  lVar12 = ((longlong)(int)uVar15 * (longlong)iVar4 & 0x7fffffffU) * 2;
                  lVar10 = (longlong)(iVar7 + -1) * (longlong)iVar4;
                  lVar16 = (longlong)(iVar7 + -2) * (longlong)iVar4;
                  iVar5 = *(int *)(param_1 + 0x7b40);
                  iVar6 = *(int *)(param_1 + 0x2d0);
                  lVar13 = ((longlong)(int)uVar15 * (longlong)iVar4 & 0x7fffffffU) * 2;
                  lVar9 = (longlong)(iVar7 + 2) * (longlong)iVar6;
                  piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
                  lVar14 = (longlong)(iVar7 + 3) * (longlong)iVar6;
                  if (((int)((~((ulonglong)
                                *(uint *)((int)((lVar14 + uVar18 & 0xffffffff) << 2) + piVar2[3]) +
                                (ulonglong)auStack_a0[*(byte *)((int)lVar14 + iVar17 + *piVar2)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((ulonglong)
                                *(uint *)((int)((lVar9 + uVar18 & 0xffffffff) << 2) +
                                         (*(int **)(iVar5 + 0x18))[3]) +
                                (ulonglong)
                                auStack_a0
                                [*(byte *)(**(int **)(iVar5 + 0x18) + (int)lVar9 + iVar17)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((ulonglong)
                                *(uint *)((int)(((longlong)iVar8 * (longlong)iVar6 + uVar18 &
                                                0xffffffff) << 2) + (*(int **)(iVar5 + 0x18))[3] + 4
                                         ) +
                                (ulonglong)
                                auStack_a0
                                [*(byte *)(**(int **)(iVar5 + 0x18) +
                                           (int)((longlong)iVar8 * (longlong)iVar6) + iVar17 + 1)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((ulonglong)
                                *(uint *)((int)((lVar13 + uVar18 & 0xffffffff) << 2) +
                                          (*(int **)(iVar5 + 0x18))[3] + 4) +
                                (ulonglong)
                                auStack_a0
                                [*(byte *)((int)lVar13 + **(int **)(iVar5 + 0x18) + iVar17 + 1)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((ulonglong)
                                *(uint *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) +
                                         (*(int **)(iVar3 + 0x18))[3]) +
                                (ulonglong)
                                auStack_a0
                                [*(byte *)((int)lVar16 + **(int **)(iVar3 + 0x18) + iVar17)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((ulonglong)
                                *(uint *)((int)((lVar10 + uVar18 & 0xffffffff) << 2) +
                                         (*(int **)(iVar3 + 0x18))[3]) +
                                (ulonglong)
                                auStack_a0
                                [*(byte *)((int)lVar10 + **(int **)(iVar3 + 0x18) + iVar17)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((ulonglong)
                                *(uint *)((int)(((longlong)iVar8 * (longlong)iVar4 + uVar18 &
                                                0xffffffff) << 2) + (*(int **)(iVar3 + 0x18))[3] +
                                         -4) +
                                (ulonglong)
                                auStack_a0
                                [*(byte *)((int)((longlong)iVar8 * (longlong)iVar4) +
                                           **(int **)(iVar3 + 0x18) + iVar17 + -1)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((ulonglong)
                                *(uint *)((int)((lVar12 + uVar18 & 0xffffffff) << 2) +
                                          (*(int **)(iVar3 + 0x18))[3] + -4) +
                                (ulonglong)
                                auStack_a0
                                [*(byte *)((int)lVar12 + iVar17 + **(int **)(iVar3 + 0x18) + -1)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) < 4)
                  goto LAB_82e8e0c0;
                  *(undefined4 *)(iVar11 + 0x94) = 1;
                  goto LAB_82e8e0cc;
                }
              }
LAB_82e8e0b8:
              *(undefined4 *)(iVar11 + 0x94) = 1;
            }
          }
          else {
            *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
          }
LAB_82e8e0cc:
          uVar18 = uVar18 + 1;
          iVar11 = iVar11 + 0x114;
        } while ((uVar18 & 0xffffffff) < (ulonglong)(*(int *)(param_1 + 0x2d0) - 1));
      }
      if (*(int *)(param_1 + 0x6d8c) == 2) {
        piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
        if ((int)(*(int *)((uVar15 + 1) * *(int *)(param_1 + 0x2d0) * 4 + piVar2[3] + -4) +
                 auStack_a0[*(byte *)((uVar15 + 1) * *(int *)(param_1 + 0x2d0) + *piVar2 + -1)]) < 0
           ) {
          *(undefined4 *)(iVar11 + 0x94) = 0;
        }
        else {
          *(undefined4 *)(iVar11 + 0x94) = 1;
        }
      }
      else {
        *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
      }
      uVar15 = uVar15 + 1;
      iVar11 = iVar11 + 0x114;
    } while (uVar15 < *(int *)(param_1 + 0x2d4) - 1U);
  }
  if (*(int *)(param_1 + 0x6d8c) == 2) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
    iVar17 = (*(int *)(param_1 + 0x2d4) + -1) * *(int *)(param_1 + 0x2d0);
    if ((int)(*(int *)(piVar2[3] + iVar17 * 4) + auStack_a0[*(byte *)(iVar17 + *piVar2)]) < 0) {
      *(undefined4 *)(iVar11 + 0x94) = 0;
    }
    else {
      *(undefined4 *)(iVar11 + 0x94) = 1;
    }
  }
  else {
    *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
  }
  iVar11 = iVar11 + 0x114;
  uVar18 = 1;
  if (1 < *(int *)(param_1 + 0x2d0) - 1U) {
    do {
      if (*(int *)(param_1 + 0x6d8c) == 2) {
        piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
        lVar16 = (longlong)(*(int *)(param_1 + 0x2d4) + -1) * (longlong)*(int *)(param_1 + 0x2d0);
        iVar17 = (int)uVar18;
        if ((int)(*(int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) + piVar2[3]) +
                 auStack_a0[*(byte *)(*piVar2 + (int)lVar16 + iVar17)]) < 0) {
          piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
          lVar16 = (longlong)(*(int *)(param_1 + 0x2d4) + -1) * (longlong)*(int *)(param_1 + 0x2d0);
          if (((int)(*(int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) + piVar2[3] + -4) +
                    auStack_a0[*(byte *)(*piVar2 + (int)lVar16 + iVar17 + -1)]) < 0) ||
             (piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18),
             lVar16 = (longlong)(*(int *)(param_1 + 0x2d4) + -1) *
                      (longlong)*(int *)(param_1 + 0x2d0),
             (int)(*(int *)((int)((lVar16 + uVar18 + 1 & 0xffffffff) << 2) + piVar2[3]) +
                  auStack_a0[*(byte *)((int)lVar16 + *piVar2 + iVar17 + 1)]) < 0)) {
            *(undefined4 *)(iVar11 + 0x94) = 0;
          }
          else {
            *(undefined4 *)(iVar11 + 0x94) = 1;
          }
        }
        else {
          *(undefined4 *)(iVar11 + 0x94) = 1;
        }
      }
      else {
        *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
      }
      uVar18 = uVar18 + 1;
      iVar11 = iVar11 + 0x114;
    } while ((uVar18 & 0xffffffff) < (ulonglong)(*(int *)(param_1 + 0x2d0) - 1));
  }
  if (*(int *)(param_1 + 0x6d8c) == 2) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
    if ((int)(*(int *)(*(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x2d4) * 4 + piVar2[3] + -4) +
             auStack_a0
             [*(byte *)(*(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x2d4) + *piVar2 + -1)]) < 0)
    {
      *(undefined4 *)(iVar11 + 0x94) = 0;
    }
    else {
      *(undefined4 *)(iVar11 + 0x94) = 1;
    }
  }
  else {
    *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
  }
  return;
}

