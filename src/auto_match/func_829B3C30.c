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
extern int fn_829B3A20();
extern int fn_829B3AC0();
extern int fn_82F68CC0();
extern unsigned int iStack_a4;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_c0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b8;


undefined8 fn_829B3C30(int param_1,ulonglong param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  int *piVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  int iStack_c0;
  uint uStack_b8;
  int iStack_b4;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_a4;
  
  iStack_b0 = 0;
  uVar12 = param_2 + 1;
  iVar21 = *(int *)((int)((param_2 & 0xffffffff) << 2) + *(int *)(param_1 + 0x3c));
  iVar6 = iVar21 * 4;
  if (*(int *)(*(int *)(param_1 + 0x34) + iVar6) != 0) {
    return 1;
  }
  uVar9 = *(uint *)(*(int *)(param_1 + 8) + iVar6);
  uVar13 = (ulonglong)uVar9;
  iVar17 = *(int *)(**(int **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + iVar6) + 0x10) * 4
                   + *(int *)(*(int *)(param_1 + 4) + 0x14));
  iVar1 = *(int *)(iVar17 + 0x14);
  iStack_b4 = *(int *)(iVar17 + 0x18);
  iStack_a4 = iVar21;
  fn_82F68CC0(*(undefined4 *)(param_1 + 0x14),
               ((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + iVar6) & 0x3fffffff) * 4 +
               (ulonglong)*(uint *)(param_1 + 0x10),uVar9 << 2);
LAB_829b3ccc:
  iVar6 = 0;
  iStack_c0 = 0;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  if ((param_2 & 0xffffffff) < (uVar12 & 0xffffffff)) {
    lVar10 = uVar12 - param_2;
    lVar5 = (param_2 & 0x3fffffff) << 2;
    do {
      uVar9 = 0;
      iVar3 = (int)lVar5;
      iVar17 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x3c)) * 4 +
                       *(int *)(*(int *)(param_1 + 4) + 0x18));
      if (*(int *)(iVar17 + 0x14) != 0) {
        iVar7 = 0;
        do {
          uVar9 = uVar9 + 1;
          piVar19 = (int *)(iVar7 + *(int *)(iVar17 + 0x18));
          iVar7 = iVar7 + 4;
          *(undefined4 *)(*(int *)(*piVar19 * 4 + *(int *)(*(int *)(param_1 + 4) + 0x18)) + 0x24) =
               *(undefined4 *)(param_1 + 0x48);
        } while (uVar9 < *(uint *)(iVar17 + 0x14));
      }
      uVar9 = 0;
      if (*(int *)(iVar17 + 0x1c) != 0) {
        iVar7 = 0;
        do {
          uVar9 = uVar9 + 1;
          piVar19 = (int *)(iVar7 + *(int *)(iVar17 + 0x20));
          iVar7 = iVar7 + 4;
          *(undefined4 *)(*(int *)(*piVar19 * 4 + *(int *)(*(int *)(param_1 + 4) + 0x18)) + 0x24) =
               *(undefined4 *)(param_1 + 0x48);
        } while (uVar9 < *(uint *)(iVar17 + 0x1c));
      }
      lVar5 = lVar5 + 4;
      iVar6 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x3c)) * 4 + *(int *)(param_1 + 0x28)) +
              iVar6;
      lVar10 = lVar10 + -1;
      iStack_c0 = iVar6;
    } while (lVar10 != 0);
  }
  if (uVar13 != 0) {
    iVar6 = 0;
    uVar22 = uVar13;
    do {
      iVar17 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + iVar6);
      iVar6 = iVar6 + 4;
      *(undefined4 *)(iVar17 + 0x30) = *(undefined4 *)(param_1 + 0x48);
      *(uint *)(iVar17 + 0x54) = (uint)LZCOUNT(*(int *)(iVar17 + 0x74) - iVar21) >> 5;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  do {
    if (iStack_c0 < 0) {
      uVar16 = 0xffffffffffffffff;
      uVar22 = param_2;
      uVar14 = param_2;
    }
    else {
      if (iStack_c0 < 1) goto LAB_829b43a0;
      uVar22 = uVar12 - 1;
      uVar16 = 1;
      uVar14 = uVar12;
    }
    uVar22 = uVar16 + uVar22;
    uVar18 = 0;
    iVar21 = 0;
    uStack_b8 = 0;
    bVar4 = false;
    uVar15 = uVar14;
    if ((uVar22 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x38)) {
      lVar5 = (uVar22 & 0x3fffffff) << 2;
      bVar4 = false;
      do {
        iVar17 = 0;
        iVar6 = *(int *)((int)lVar5 + *(int *)(param_1 + 0x3c));
        iVar3 = iVar6 * 4;
        if (*(int *)(*(int *)(param_1 + 0x34) + iVar3) == 0) {
          iVar7 = *(int *)(param_1 + 4);
          iVar17 = *(int *)(**(int **)(*(int *)(*(int *)(iVar7 + 0x18) + iVar3) + 0x10) * 4 +
                           *(int *)(iVar7 + 0x14));
          iVar8 = *(int *)(iVar17 + 0x18);
          for (iVar11 = *(int *)(iVar17 + 0x14); iVar11 != -1; iVar11 = *(int *)(iVar11 + 0x14)) {
            if (iVar1 == iVar11) goto LAB_829b3ed8;
            iVar11 = *(int *)(iVar11 * 4 + *(int *)(iVar7 + 0x14));
            iVar8 = *(int *)(iVar11 + 0x18);
          }
          if (iVar1 != -1) goto LAB_829b43a0;
LAB_829b3ed8:
          if (iStack_b4 != iVar8) goto LAB_829b43a0;
        }
        if ((uVar22 & 0xffffffff) < (uVar15 & 0xffffffff)) {
          uVar15 = uVar22;
        }
        if ((uVar14 & 0xffffffff) <= (uVar22 & 0xffffffff)) {
          uVar14 = uVar22 + 1;
        }
        uVar9 = *(uint *)(*(int *)(param_1 + 8) + iVar3);
        piVar19 = (int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar3) * 4 + *(int *)(param_1 + 0x10));
        fn_82F68CC0((uVar18 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0x18),piVar19,
                     uVar9 << 2);
        uVar18 = *(uint *)(*(int *)(param_1 + 8) + iVar3) + uVar18;
        iVar21 = *(int *)(*(int *)(param_1 + 0x28) + iVar3) + iVar21;
        uStack_b8 = (uint)uVar18;
        bVar4 = (bool)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + iVar3) + 0x24) ==
                       *(int *)(param_1 + 0x48) | bVar4);
        for (uVar20 = (ulonglong)uVar9; uVar20 != 0; uVar20 = uVar20 - 1) {
          iVar7 = *(int *)(*piVar19 * 4 + *(int *)(*(int *)(param_1 + 4) + 0x14));
          if ((*(int *)(iVar7 + 0x30) != *(int *)(param_1 + 0x48)) ||
             (iVar6 == *(int *)(iVar7 + 0x74))) {
            *(int *)(iVar7 + 0x30) = *(int *)(param_1 + 0x48);
            *(uint *)(iVar7 + 0x54) = -(uint)(*(int *)(iVar7 + 0x74) == iVar6);
          }
          piVar19 = piVar19 + 1;
        }
        if (((*(int *)(*(int *)(param_1 + 0x34) + iVar3) == 0) && (iVar1 == *(int *)(iVar17 + 0x14))
            ) && (iStack_b4 == *(int *)(iVar17 + 0x18))) break;
        uVar22 = uVar16 + uVar22;
        lVar5 = (uVar16 & 0x3fffffff) * 4 + lVar5;
      } while ((uVar22 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x38));
    }
    if ((uVar14 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
LAB_829b43a0:
      if (iStack_b0 == 0) {
        return 1;
      }
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                   *(int *)(param_1 + 0x38) << 2);
      fn_829B3AC0(param_1,0,0);
      return 1;
    }
    if ((uVar15 + 1 & 0xffffffff) < (uVar14 & 0xffffffff)) {
      fn_829B3A20(param_1,*(undefined4 *)(param_1 + 0x18),&uStack_b8);
      uVar18 = (ulonglong)uStack_b8;
    }
    if (!bVar4) {
      if (iStack_c0 < 0) {
        iVar6 = iVar21;
        if ((uVar18 & 0xffffffff) != 0) {
          iVar17 = 0;
          uVar22 = uVar18;
          do {
            if (*(int *)(*(int *)(*(int *)(iVar17 + *(int *)(param_1 + 0x18)) * 4 +
                                 *(int *)(*(int *)(param_1 + 4) + 0x14)) + 0x54) == 1) {
              iVar6 = iVar6 + -1;
            }
            iVar17 = iVar17 + 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        if (iVar6 < iStack_c0) {
LAB_829b40f0:
          bVar4 = true;
        }
      }
      else {
        iVar6 = iStack_c0;
        if (uVar13 != 0) {
          iVar17 = 0;
          uVar22 = uVar13;
          do {
            if (*(int *)(*(int *)(*(int *)(iVar17 + *(int *)(param_1 + 0x14)) * 4 +
                                 *(int *)(*(int *)(param_1 + 4) + 0x14)) + 0x54) == -1) {
              iVar6 = iVar6 + -1;
            }
            iVar17 = iVar17 + 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        if (iVar6 < iVar21) goto LAB_829b40f0;
      }
    }
    uVar22 = param_2;
    if ((uVar15 & 0xffffffff) <= (param_2 & 0xffffffff)) {
      uVar22 = uVar15;
    }
    uVar16 = uVar12;
    if ((uVar12 & 0xffffffff) <= (uVar14 & 0xffffffff)) {
      uVar16 = uVar14;
    }
    if (!bVar4) break;
    if ((uVar18 & 0xffffffff) != 0) {
      iVar6 = 0;
      uVar12 = uVar18;
      do {
        piVar19 = (int *)(iVar6 + *(int *)(param_1 + 0x18));
        iVar6 = iVar6 + 4;
        iVar17 = *(int *)(*piVar19 * 4 + *(int *)(*(int *)(param_1 + 4) + 0x14));
        *(uint *)(iVar17 + 0x54) = (uint)(*(int *)(iVar17 + 0x54) != 0);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    fn_82F68CC0((uVar13 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0x18),(uVar18 & 0x3fffffff) << 2);
    uStack_b8 = (int)uVar18 + (int)uVar13;
    iStack_c0 = iVar21 + iStack_c0;
    fn_829B3A20(param_1,*(undefined4 *)(param_1 + 0x14),&uStack_b8);
    lVar10 = uVar14 - uVar15;
    lVar5 = (uVar15 & 0x3fffffff) << 2;
    do {
      uVar9 = 0;
      iVar21 = *(int *)(*(int *)((int)lVar5 + *(int *)(param_1 + 0x3c)) * 4 +
                       *(int *)(*(int *)(param_1 + 4) + 0x18));
      if (*(int *)(iVar21 + 0x14) != 0) {
        iVar6 = 0;
        do {
          uVar9 = uVar9 + 1;
          piVar19 = (int *)(iVar6 + *(int *)(iVar21 + 0x18));
          iVar6 = iVar6 + 4;
          *(undefined4 *)(*(int *)(*piVar19 * 4 + *(int *)(*(int *)(param_1 + 4) + 0x18)) + 0x24) =
               *(undefined4 *)(param_1 + 0x48);
        } while (uVar9 < *(uint *)(iVar21 + 0x14));
      }
      uVar9 = 0;
      if (*(int *)(iVar21 + 0x1c) != 0) {
        iVar6 = 0;
        do {
          uVar9 = uVar9 + 1;
          piVar19 = (int *)(iVar6 + *(int *)(iVar21 + 0x20));
          iVar6 = iVar6 + 4;
          *(undefined4 *)(*(int *)(*piVar19 * 4 + *(int *)(*(int *)(param_1 + 4) + 0x18)) + 0x24) =
               *(undefined4 *)(param_1 + 0x48);
        } while (uVar9 < *(uint *)(iVar21 + 0x1c));
      }
      lVar5 = lVar5 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar13 = (ulonglong)uStack_b8;
    uVar12 = uVar16;
    param_2 = uVar22;
  } while( true );
  uVar18 = (uVar12 - param_2 & 0xffffffff) >> 1;
  if (uVar18 != 0) {
    lVar10 = (param_2 & 0x3fffffff) << 2;
    lVar5 = (uVar12 - 1 & 0x3fffffff) << 2;
    do {
      iVar21 = *(int *)(param_1 + 0x3c);
      uVar2 = *(undefined4 *)((int)lVar10 + iVar21);
      *(undefined4 *)((int)lVar10 + iVar21) = *(undefined4 *)((int)lVar5 + iVar21);
      lVar10 = lVar10 + 4;
      *(undefined4 *)((int)lVar5 + *(int *)(param_1 + 0x3c)) = uVar2;
      lVar5 = lVar5 + -4;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  uVar20 = uVar14 - uVar15;
  uVar18 = (uVar20 & 0xffffffff) >> 1;
  if (uVar18 != 0) {
    lVar10 = (uVar15 & 0x3fffffff) << 2;
    lVar5 = (uVar14 - 1 & 0x3fffffff) << 2;
    do {
      iVar21 = *(int *)(param_1 + 0x3c);
      uVar2 = *(undefined4 *)((int)lVar10 + iVar21);
      *(undefined4 *)((int)lVar10 + iVar21) = *(undefined4 *)((int)lVar5 + iVar21);
      lVar10 = lVar10 + 4;
      *(undefined4 *)(*(int *)(param_1 + 0x3c) + (int)lVar5) = uVar2;
      lVar5 = lVar5 + -4;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  uVar18 = (uVar16 - uVar22 & 0xffffffff) >> 1;
  if (uVar18 != 0) {
    lVar10 = (uVar22 & 0x3fffffff) << 2;
    lVar5 = (uVar16 - 1 & 0x3fffffff) << 2;
    do {
      iVar21 = *(int *)(param_1 + 0x3c);
      uVar2 = *(undefined4 *)((int)lVar10 + iVar21);
      *(undefined4 *)((int)lVar10 + iVar21) = *(undefined4 *)((int)lVar5 + iVar21);
      lVar10 = lVar10 + 4;
      *(undefined4 *)(*(int *)(param_1 + 0x3c) + (int)lVar5) = uVar2;
      lVar5 = lVar5 + -4;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  fn_829B3AC0(param_1,&uStack_ac,&uStack_a8);
  if (((uStack_ac < *(uint *)(param_1 + 0x50)) && (uStack_a8 <= *(uint *)(param_1 + 0x4c))) ||
     ((uStack_ac <= *(uint *)(param_1 + 0x50) && (uStack_a8 < *(uint *)(param_1 + 0x4c))))) {
    return 0;
  }
  if (iStack_c0 < 0) {
    uVar20 = uVar15 - uVar14;
  }
  param_2 = uVar20 + param_2;
  uVar12 = uVar20 + uVar12;
  iStack_b0 = 1;
  iVar21 = iStack_a4;
  goto LAB_829b3ccc;
}

