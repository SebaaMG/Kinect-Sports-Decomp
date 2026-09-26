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
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82D2DA50(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar7;
  ulonglong uVar6;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar16;
  longlong lVar14;
  ulonglong uVar15;
  uint *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  ulonglong uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  
  piVar22 = (int *)(param_1 + 0x40);
  do {
    iVar8 = *(int *)(param_1 + 0x44) * 8 + *piVar22;
    uVar13 = *(uint *)(iVar8 + -4);
    uVar23 = (ulonglong)uVar13;
    uVar1 = *(uint *)(iVar8 + -8);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
    iVar8 = (int)((uVar23 + 5 & 0x3fffffff) << 2);
    uVar24 = *(uint *)(iVar8 + uVar1);
    if ((uVar24 & 0xfffffffc) != 0) {
      uVar10 = uVar23 + 1;
      iVar5 = (int)((uVar23 + 2 & 0xffffffff) << 2);
      iVar2 = *(int *)(iVar5 + uVar1);
      iVar7 = *(int *)((int)(((-(ulonglong)(uVar23 != 2) & uVar10) + 2 & 0xffffffff) << 2) + uVar1);
      iVar21 = *(int *)(iVar7 + 8);
      if ((*(int *)(iVar2 + 8) < iVar21) ||
         ((*(int *)(iVar2 + 8) <= iVar21 &&
          ((iVar21 = *(int *)(iVar7 + 0xc), *(int *)(iVar2 + 0xc) < iVar21 ||
           (*(int *)(iVar2 + 0xc) <= iVar21)))))) {
        bVar25 = true;
      }
      else {
        bVar25 = false;
      }
      uVar16 = uVar13;
      uVar12 = uVar1;
      if (!bVar25) {
        uVar16 = uVar24 & 3;
        uVar12 = uVar24 & 0xfffffffc;
      }
      if (((uint)(*(ushort *)(uVar12 + 0x20) >> 0xd) & 1 << (uVar16 & 0x3f)) == 0) {
        iVar21 = 2;
        if ((uVar24 & 3) != 0) {
          iVar21 = (uVar24 & 3) - 1;
        }
        lVar14 = 2;
        if (uVar23 != 0) {
          lVar14 = uVar23 - 1;
        }
        iVar7 = *(int *)((iVar21 + 2) * 4 + (uVar24 & 0xfffffffc));
        iVar18 = *(int *)((int)((lVar14 + 2U & 0xffffffff) << 2) + uVar1);
        iVar3 = *(int *)((int)(((-(ulonglong)(uVar23 != 2) & uVar10) + 2 & 0xffffffff) << 2) + uVar1
                        );
        iVar21 = *(int *)(iVar7 + 0xc);
        iVar7 = *(int *)(iVar7 + 8);
        iVar19 = *(int *)(iVar2 + 0xc) - iVar21;
        iVar9 = *(int *)(iVar2 + 8) - iVar7;
        iVar20 = *(int *)(iVar18 + 8) - iVar7;
        iVar18 = *(int *)(iVar18 + 0xc) - iVar21;
        iVar21 = *(int *)(iVar3 + 0xc) - iVar21;
        iVar7 = *(int *)(iVar3 + 8) - iVar7;
        if (-((longlong)(iVar20 * iVar20 + iVar18 * iVar18) *
              (longlong)(iVar9 * iVar21 - iVar19 * iVar7) +
              (longlong)(iVar9 * iVar9 + iVar19 * iVar19) *
              (longlong)(iVar18 * iVar7 - iVar20 * iVar21) +
             (longlong)(iVar20 * iVar19 - iVar18 * iVar9) *
             (longlong)(iVar7 * iVar7 + iVar21 * iVar21)) < 0) {
          iVar7 = *(int *)((int)(((-(ulonglong)(uVar23 != 2) & uVar10) + 2 & 0xffffffff) << 2) +
                          uVar1);
          iVar21 = *(int *)(iVar7 + 8);
          if ((*(int *)(iVar2 + 8) < iVar21) ||
             ((*(int *)(iVar2 + 8) <= iVar21 &&
              ((iVar21 = *(int *)(iVar7 + 0xc), *(int *)(iVar2 + 0xc) < iVar21 ||
               (*(int *)(iVar2 + 0xc) <= iVar21)))))) {
            bVar25 = true;
          }
          else {
            bVar25 = false;
          }
          uVar16 = uVar13;
          uVar12 = uVar1;
          if (!bVar25) {
            uVar16 = uVar24 & 3;
            uVar12 = uVar24 & 0xfffffffc;
          }
          if (((uint)(*(ushort *)(uVar12 + 0x20) >> 0xd) & 1 << (uVar16 & 0x3f)) == 0) {
            lVar14 = 2;
            if (uVar23 != 0) {
              lVar14 = uVar23 - 1;
            }
            iVar21 = 2;
            if ((uVar24 & 3) != 0) {
              iVar21 = (uVar24 & 3) - 1;
            }
            iVar7 = *(int *)((iVar21 + 2) * 4 + (uVar24 & 0xfffffffc));
            iVar18 = *(int *)((int)((lVar14 + 2U & 0xffffffff) << 2) + uVar1);
            iVar21 = *(int *)(iVar7 + 0xc);
            if ((0 < (longlong)(*(int *)(iVar2 + 8) - *(int *)(iVar18 + 8)) *
                     (longlong)(iVar21 - *(int *)(iVar18 + 0xc)) -
                     (longlong)(*(int *)(iVar2 + 0xc) - *(int *)(iVar18 + 0xc)) *
                     (longlong)(*(int *)(iVar7 + 8) - *(int *)(iVar18 + 8))) &&
               (iVar2 = *(int *)(((uVar24 & 3) + 2) * 4 + (uVar24 & 0xfffffffc)),
               0 < (longlong)(*(int *)(iVar2 + 8) - *(int *)(iVar7 + 8)) *
                   (longlong)(*(int *)(iVar18 + 0xc) - iVar21) -
                   (longlong)(*(int *)(iVar2 + 0xc) - iVar21) *
                   (longlong)(*(int *)(iVar18 + 8) - *(int *)(iVar7 + 8)))) {
              uVar10 = 2;
              if (uVar23 != 0) {
                uVar10 = uVar23 - 1;
              }
              iVar2 = *(int *)((int)((uVar10 + 2 & 0xffffffff) << 2) + uVar1);
              iVar7 = *(int *)((int)(((-(ulonglong)(uVar10 != 2) & uVar10 + 1) + 2 & 0xffffffff) <<
                                    2) + uVar1);
              iVar21 = *(int *)(iVar7 + 8);
              if ((*(int *)(iVar2 + 8) < iVar21) ||
                 ((*(int *)(iVar2 + 8) <= iVar21 &&
                  ((iVar21 = *(int *)(iVar7 + 0xc), *(int *)(iVar2 + 0xc) < iVar21 ||
                   (*(int *)(iVar2 + 0xc) <= iVar21)))))) {
                bVar25 = true;
              }
              else {
                bVar25 = false;
              }
              if ((bVar25) ||
                 (bVar25 = false,
                 (*(uint *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar1) & 0xfffffffc) == 0)) {
                bVar25 = true;
              }
              uVar6 = uVar10;
              uVar24 = uVar1;
              if (!bVar25) {
                uVar24 = *(uint *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar1);
                uVar6 = (ulonglong)uVar24 & 3;
                uVar24 = uVar24 & 0xfffffffc;
              }
              bVar25 = ((uint)(*(ushort *)(uVar24 + 0x20) >> 0xd) & 1 << ((uint)uVar6 & 0x3f)) != 0;
              uVar6 = (ulonglong)bVar25;
              if (uVar6 != 0) {
                iVar7 = *(int *)((int)(((-(ulonglong)(uVar10 != 2) & uVar10 + 1) + 2 & 0xffffffff)
                                      << 2) + uVar1);
                iVar21 = *(int *)(iVar7 + 8);
                if ((*(int *)(iVar2 + 8) < iVar21) ||
                   ((*(int *)(iVar2 + 8) <= iVar21 &&
                    ((iVar21 = *(int *)(iVar7 + 0xc), *(int *)(iVar2 + 0xc) < iVar21 ||
                     (*(int *)(iVar2 + 0xc) <= iVar21)))))) {
                  bVar26 = true;
                }
                else {
                  bVar26 = false;
                }
                if ((bVar26) ||
                   (bVar26 = false,
                   (*(uint *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar1) & 0xfffffffc) == 0)) {
                  bVar26 = true;
                }
                uVar24 = uVar1;
                if (!bVar26) {
                  uVar24 = *(uint *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar1);
                  uVar10 = (ulonglong)uVar24 & 3;
                  uVar24 = uVar24 & 0xfffffffc;
                }
                *(ushort *)(uVar24 + 0x20) =
                     ((ushort)((~(ulonglong)(uint)(1 << ((uint)uVar10 & 0x3f)) & 0xffffffff) << 0xd)
                     | 0x1fff) & *(ushort *)(uVar24 + 0x20);
              }
              uVar24 = *(uint *)(iVar8 + uVar1);
              uVar10 = 2;
              uVar16 = uVar24 & 0xfffffffc;
              if ((uVar24 & 3) != 0) {
                uVar10 = ((ulonglong)uVar24 & 3) - 1;
              }
              iVar2 = *(int *)((int)((uVar10 + 2 & 0xffffffff) << 2) + uVar16);
              iVar7 = *(int *)((int)(((-(ulonglong)(uVar10 != 2) & uVar10 + 1) + 2 & 0xffffffff) <<
                                    2) + uVar16);
              iVar21 = *(int *)(iVar7 + 8);
              if ((*(int *)(iVar2 + 8) < iVar21) ||
                 ((*(int *)(iVar2 + 8) <= iVar21 &&
                  ((iVar21 = *(int *)(iVar7 + 0xc), *(int *)(iVar2 + 0xc) < iVar21 ||
                   (*(int *)(iVar2 + 0xc) <= iVar21)))))) {
                bVar26 = true;
              }
              else {
                bVar26 = false;
              }
              if ((bVar26) ||
                 (bVar26 = false,
                 (*(uint *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar16) & 0xfffffffc) == 0)) {
                bVar26 = true;
              }
              uVar15 = uVar10;
              uVar24 = uVar16;
              if (!bVar26) {
                uVar24 = *(uint *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar16);
                uVar15 = (ulonglong)uVar24 & 3;
                uVar24 = uVar24 & 0xfffffffc;
              }
              bVar26 = ((uint)(*(ushort *)(uVar24 + 0x20) >> 0xd) & 1 << ((uint)uVar15 & 0x3f)) != 0
              ;
              if (bVar26) {
                iVar7 = *(int *)((int)(((-(ulonglong)(uVar10 != 2) & uVar10 + 1) + 2 & 0xffffffff)
                                      << 2) + uVar16);
                iVar21 = *(int *)(iVar7 + 8);
                if ((*(int *)(iVar2 + 8) < iVar21) ||
                   ((*(int *)(iVar2 + 8) <= iVar21 &&
                    ((iVar21 = *(int *)(iVar7 + 0xc), *(int *)(iVar2 + 0xc) < iVar21 ||
                     (*(int *)(iVar2 + 0xc) <= iVar21)))))) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar4) ||
                   (bVar4 = false,
                   (*(uint *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar16) & 0xfffffffc) == 0)) {
                  bVar4 = true;
                }
                if (!bVar4) {
                  uVar16 = *(uint *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar16);
                  uVar10 = (ulonglong)uVar16 & 3;
                  uVar16 = uVar16 & 0xfffffffc;
                }
                *(ushort *)(uVar16 + 0x20) =
                     ((ushort)((~(ulonglong)(uint)(1 << ((uint)uVar10 & 0x3f)) & 0xffffffff) << 0xd)
                     | 0x1fff) & *(ushort *)(uVar16 + 0x20);
              }
              uVar24 = *(uint *)(iVar8 + uVar1);
              lVar14 = 2;
              uVar16 = uVar24 & 0xfffffffc;
              if (uVar23 != 0) {
                lVar14 = uVar23 - 1;
              }
              lVar11 = 2;
              if ((uVar24 & 3) != 0) {
                lVar11 = ((ulonglong)uVar24 & 3) - 1;
              }
              iVar2 = (int)((ulonglong)uVar24 & 3);
              iVar21 = (int)((lVar14 + 5U & 0xffffffff) << 2);
              *(undefined4 *)(iVar5 + uVar1) =
                   *(undefined4 *)((int)((lVar11 + 2U & 0xffffffff) << 2) + uVar16);
              *(undefined4 *)((iVar2 + 2) * 4 + uVar16) =
                   *(undefined4 *)((int)((lVar14 + 2U & 0xffffffff) << 2) + uVar1);
              uVar24 = *(uint *)(iVar21 + uVar1);
              uVar12 = uVar24 & 0xfffffffc;
              uVar24 = uVar24 & 3;
              *(uint *)((iVar2 + 5) * 4 + uVar16) = uVar24 + uVar12;
              if (uVar12 != 0) {
                *(uint *)((uVar24 + 5) * 4 + uVar12) = iVar2 + uVar16;
              }
              iVar2 = (int)((lVar11 + 5U & 0xffffffff) << 2);
              uVar24 = *(uint *)(iVar2 + uVar16);
              uVar12 = uVar24 & 0xfffffffc;
              uVar24 = uVar24 & 3;
              *(uint *)(iVar8 + uVar1) = uVar24 + uVar12;
              if (uVar12 != 0) {
                *(uint *)((uVar24 + 5) * 4 + uVar12) = uVar13 + uVar1;
              }
              *(uint *)(iVar21 + uVar1) = (int)lVar11 + uVar16;
              if (uVar16 != 0) {
                *(uint *)(iVar2 + uVar16) = (int)lVar14 + uVar1;
              }
              lVar11 = 2;
              if (uVar23 != 0) {
                lVar11 = uVar23 - 1;
              }
              if (bVar25) {
                uVar13 = *(uint *)((int)((lVar11 + 5U & 0xffffffff) << 2) + uVar1);
                uVar23 = (ulonglong)uVar13 & 3;
                uVar13 = uVar13 & 0xfffffffc;
                uVar23 = -(ulonglong)(uVar23 != 2) & uVar23 + 1;
                lVar14 = (uVar23 + 2) * 4;
                uVar6 = (-(ulonglong)(uVar23 != 2) & uVar23 + 1) + 2;
                iVar2 = *(int *)((int)lVar14 + uVar13);
                iVar7 = *(int *)((int)uVar6 * 4 + uVar13);
                iVar8 = *(int *)(iVar2 + 8);
                iVar21 = *(int *)(iVar7 + 8);
                if ((iVar8 < iVar21) ||
                   ((iVar8 <= iVar21 &&
                    ((iVar8 = *(int *)(iVar2 + 0xc), iVar21 = *(int *)(iVar7 + 0xc), iVar8 < iVar21
                     || (iVar8 <= iVar21)))))) {
                  bVar25 = true;
                }
                else {
                  bVar25 = false;
                }
                if ((bVar25) ||
                   (bVar25 = false, (*(uint *)(((int)uVar23 + 5) * 4 + uVar13) & 0xfffffffc) == 0))
                {
                  bVar25 = true;
                }
                if (!bVar25) {
                  uVar13 = *(uint *)(((int)uVar23 + 5) * 4 + uVar13);
                  uVar23 = (ulonglong)uVar13 & 3;
                  uVar13 = uVar13 & 0xfffffffc;
                }
                *(ushort *)(uVar13 + 0x20) =
                     *(ushort *)(uVar13 + 0x20) & 0x1fff |
                     (ushort)((1 << (int)uVar23) << 0xd) | *(ushort *)(uVar13 + 0x20) & 0xe000;
              }
              if (bVar26) {
                uVar23 = -(ulonglong)(lVar11 != 2) & lVar11 + 1U;
                lVar14 = -(uVar23 - 2);
                uVar6 = uVar23 + 2;
                iVar2 = *(int *)((int)((uVar6 & 0xffffffff) << 2) + uVar1);
                iVar7 = *(int *)((int)(((-(ulonglong)(uVar23 - 2 != 0) & uVar23 + 1) + 2 &
                                       0xffffffff) << 2) + uVar1);
                iVar8 = *(int *)(iVar2 + 8);
                iVar21 = *(int *)(iVar7 + 8);
                if ((iVar8 < iVar21) ||
                   ((iVar8 <= iVar21 &&
                    ((iVar8 = *(int *)(iVar2 + 0xc), iVar21 = *(int *)(iVar7 + 0xc), iVar8 < iVar21
                     || (iVar8 <= iVar21)))))) {
                  bVar25 = true;
                }
                else {
                  bVar25 = false;
                }
                if ((bVar25) ||
                   (bVar25 = false,
                   (*(uint *)((int)((uVar23 + 5 & 0xffffffff) << 2) + uVar1) & 0xfffffffc) == 0)) {
                  bVar25 = true;
                }
                uVar13 = uVar1;
                if (!bVar25) {
                  uVar13 = *(uint *)((int)((uVar23 + 5 & 0xffffffff) << 2) + uVar1);
                  uVar23 = (ulonglong)uVar13 & 3;
                  uVar13 = uVar13 & 0xfffffffc;
                }
                *(ushort *)(uVar13 + 0x20) =
                     *(ushort *)(uVar13 + 0x20) & 0x1fff |
                     (ushort)((1 << ((uint)uVar23 & 0x3f)) << 0xd) |
                     *(ushort *)(uVar13 + 0x20) & 0xe000;
              }
              iVar8 = fn_82CE5410(uVar6,bVar26,lVar14);
              if (*(uint *)(param_1 + 0x44) == (*(uint *)(param_1 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),piVar22,8);
              }
              puVar17 = (uint *)(*(int *)(param_1 + 0x44) * 8 + *piVar22);
              if (puVar17 != (uint *)0x0) {
                *puVar17 = uVar1;
                puVar17[1] = -(uint)(lVar11 != 2) & (int)lVar11 + 1U;
              }
              uVar24 = 2;
              *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
              uVar13 = *(uint *)((int)((lVar11 + 5U & 0xffffffff) << 2) + uVar1);
              if ((uVar13 & 3) != 0) {
                uVar24 = (uVar13 & 3) - 1;
              }
              iVar8 = fn_82CE5410();
              if (*(uint *)(param_1 + 0x44) == (*(uint *)(param_1 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),piVar22,8);
              }
              puVar17 = (uint *)(*(int *)(param_1 + 0x44) * 8 + *piVar22);
              if (puVar17 != (uint *)0x0) {
                *puVar17 = uVar13 & 0xfffffffc;
                puVar17[1] = uVar24;
              }
              *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
            }
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x44) < 1) {
      return;
    }
  } while( true );
}

