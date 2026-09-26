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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))


void fn_82CD7760(ulonglong param_1,int param_2,int param_3,ulonglong param_4,int param_5,
                  ulonglong param_6)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar15;
  ulonglong uVar14;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  undefined1 *puVar25;
  longlong lVar26;
  undefined1 *puVar27;
  
  uVar19 = (longlong)((int)param_4 >> 2) + (ulonglong)((int)param_4 < 0 && (param_4 & 3) != 0);
  uVar9 = param_6 - 0x1f;
  uVar21 = 0;
  uVar11 = param_4;
  uVar12 = param_6;
  if (0 < (longlong)uVar9) {
    iVar20 = 0;
    iVar22 = param_3 << 1;
    uVar23 = uVar9;
    do {
      iVar24 = 0;
      uVar16 = (param_1 - 3) - (uVar21 & 0xffffffff);
      if (0 < param_5 + -3) {
        do {
          uVar23 = uVar16 - 0x20;
          puVar18 = (uint *)(iVar20 + param_2 + iVar24);
          if ((uVar23 & 0xffffffff) < (uVar16 & 0xffffffff)) {
            uVar11 = uVar19 & 0x3fffffff;
            do {
              uVar2 = *puVar18;
              uVar3 = *(uint *)((int)puVar18 + param_3);
              puVar18 = (uint *)((int)puVar18 + param_3 + param_3);
              uVar4 = *puVar18;
              puVar18 = (uint *)((int)puVar18 + param_3);
              uVar5 = *puVar18;
              lVar10 = uVar16 + (uVar19 + (uVar19 & 0x7fffffff) * 2 & 0x3fffffff) * 4;
              *(uint *)lVar10 =
                   (uVar4 >> 8 & 0xff00ff | uVar5 >> 0x10 | uVar3 & 0xff0000ff) >> 8 |
                   uVar2 & 0xff000000;
              lVar10 = lVar10 + uVar11 * -4;
              lVar26 = lVar10 + uVar11 * -4;
              lVar13 = lVar26 + uVar11 * -4;
              *(uint *)lVar10 =
                   (uVar4 & 0xff0000 | uVar5 >> 8 & 0xffff) >> 8 | (uVar2 & 0xff0000) << 8 |
                   uVar3 & 0xff0000;
              uVar16 = lVar13 - 4;
              *(uint *)lVar26 =
                   (uint)((((ulonglong)uVar2 & 0xffff00) << 8 | (ulonglong)uVar3 & 0xff00) << 8) |
                   uVar5 >> 8 & 0xff | uVar4 & 0xff00;
              puVar18 = (uint *)((int)puVar18 + param_3);
              *(uint *)lVar13 =
                   (uint)(((((ulonglong)uVar2 & 0xffff) << 8 | (ulonglong)uVar3 & 0xffffffff000000ff
                           ) << 8 | (ulonglong)uVar4 & 0xffffffff000000ff) << 8) | uVar5 & 0xff;
            } while ((uVar23 & 0xffffffff) < (uVar16 & 0xffffffff));
            uVar12 = param_6 & 0xffffffff;
            uVar11 = param_4 & 0xffffffff;
          }
          iVar24 = iVar24 + 4;
          uVar16 = (uVar19 + 2 & 0xfffffff) * 0x10 + uVar16;
        } while (iVar24 < param_5 + -3);
        uVar23 = uVar9 & 0xffffffff;
      }
      if (iVar24 < param_5) {
        uVar16 = (longlong)iVar24 * (longlong)(int)uVar11 - uVar21;
        do {
          if ((int)uVar21 < (int)(uVar21 + 0x20)) {
            iVar8 = param_3 * 4;
            lVar10 = ((((uVar21 + 0x20) - uVar21) - 1 & 0xffffffff) >> 2) + 1;
            puVar25 = (undefined1 *)(iVar22 + param_3 * -3 + iVar24 + param_2);
            puVar17 = (undefined1 *)(iVar20 + iVar24 + param_2);
            puVar27 = (undefined1 *)(iVar22 + param_3 * -4 + iVar24 + param_2);
            uVar14 = uVar16;
            do {
              uVar1 = *puVar17;
              iVar15 = (int)uVar14;
              uVar7 = uVar14 & 3;
              puVar6 = puVar17 + param_3;
              puVar17 = puVar17 + iVar8;
              puVar27 = puVar27 + iVar8;
              puVar25 = puVar25 + iVar8;
              uVar14 = uVar14 - 4;
              *(uint *)(((iVar15 >> 2) + (uint)(iVar15 < 0 && uVar7 != 0)) * 4 + (int)(param_1 - 3))
                   = CONCAT31(CONCAT21(CONCAT11(uVar1,*puVar6),*puVar27),*puVar25);
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          iVar24 = iVar24 + 1;
          uVar16 = uVar16 + uVar11;
        } while (iVar24 < param_5);
      }
      uVar21 = uVar21 + 0x20;
      iVar20 = iVar20 + param_3 * 0x20;
      iVar22 = param_3 * 0x20 + iVar22;
    } while ((int)uVar21 < (int)uVar23);
    param_1 = param_1 & 0xffffffff;
  }
  iVar20 = 0;
  if (0 < param_5) {
    lVar10 = param_1 - uVar21;
    do {
      if ((int)uVar21 < (int)uVar12) {
        lVar26 = uVar12 - uVar21;
        lVar13 = lVar10 + 1;
        puVar27 = (undefined1 *)(((int)uVar21 + -1) * param_3 + iVar20 + param_2);
        do {
          puVar27 = puVar27 + param_3;
          lVar13 = lVar13 + -1;
          *(undefined1 *)lVar13 = *puVar27;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      iVar20 = iVar20 + 1;
      lVar10 = lVar10 + uVar11;
    } while (iVar20 < param_5);
  }
  return;
}

