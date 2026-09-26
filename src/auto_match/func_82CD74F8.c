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


void fn_82CD74F8(longlong param_1,int param_2,int param_3,ulonglong param_4,int param_5,
                  ulonglong param_6)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  undefined1 *puVar25;
  
  uVar22 = 0;
  uVar17 = (longlong)((int)param_4 >> 2) + (ulonglong)((int)param_4 < 0 && (param_4 & 3) != 0);
  uVar21 = param_6 - 0x1f;
  uVar8 = param_4;
  uVar9 = param_6;
  if (0 < (longlong)uVar21) {
    iVar20 = 0;
    iVar18 = param_3 * 3;
    iVar19 = param_3 << 1;
    uVar23 = uVar21;
    do {
      iVar24 = 0;
      uVar12 = (uVar22 & 0xffffffff) + param_1;
      if (0 < param_5 + -3) {
        do {
          uVar23 = uVar12 + 0x20;
          puVar15 = (uint *)(iVar20 + param_2 + iVar24);
          if ((uVar12 & 0xffffffff) < (uVar23 & 0xffffffff)) {
            uVar8 = uVar17 & 0x3fffffff;
            do {
              uVar16 = *puVar15;
              uVar2 = *(uint *)((int)puVar15 + param_3);
              puVar15 = (uint *)((int)puVar15 + param_3 + param_3);
              uVar3 = *puVar15;
              puVar15 = (uint *)((int)puVar15 + param_3);
              uVar4 = *puVar15;
              lVar13 = uVar12 + (uVar17 + (uVar17 & 0x7fffffff) * 2 & 0x3fffffff) * 4;
              *(uint *)lVar13 =
                   (uVar2 >> 8 & 0xff00ff | uVar16 >> 0x10 | uVar3 & 0xff0000ff) >> 8 |
                   uVar4 & 0xff000000;
              lVar13 = lVar13 + uVar8 * -4;
              lVar7 = lVar13 + uVar8 * -4;
              lVar10 = lVar7 + uVar8 * -4;
              *(uint *)lVar13 =
                   (uVar2 & 0xff0000 | uVar16 >> 8 & 0xffff) >> 8 | (uVar4 & 0xff0000) << 8 |
                   uVar3 & 0xff0000;
              uVar12 = lVar10 + 4;
              *(uint *)lVar7 =
                   (uint)((((ulonglong)uVar4 & 0xffff00) << 8 | (ulonglong)uVar3 & 0xff00) << 8) |
                   uVar16 >> 8 & 0xff | uVar2 & 0xff00;
              puVar15 = (uint *)((int)puVar15 + param_3);
              *(uint *)lVar10 =
                   (uint)(((((ulonglong)uVar4 & 0xffff) << 8 | (ulonglong)uVar3 & 0xffffffff000000ff
                           ) << 8 | (ulonglong)uVar2 & 0xffffffff000000ff) << 8) | uVar16 & 0xff;
            } while ((uVar12 & 0xffffffff) < (uVar23 & 0xffffffff));
            uVar9 = param_6 & 0xffffffff;
            uVar8 = param_4 & 0xffffffff;
          }
          iVar24 = iVar24 + 4;
          uVar12 = (uVar17 - 2 & 0xfffffff) * 0x10 + uVar12;
        } while (iVar24 < param_5 + -3);
        uVar23 = uVar21 & 0xffffffff;
      }
      if (iVar24 < param_5) {
        lVar13 = (longlong)iVar24 * (longlong)(int)uVar8;
        do {
          if ((int)uVar22 < (int)(uVar22 + 0x20)) {
            iVar6 = param_3 * 4;
            lVar7 = ((((uVar22 + 0x20) - uVar22) - 1 & 0xffffffff) >> 2) + 1;
            puVar14 = (undefined1 *)(iVar20 + iVar24 + param_2);
            puVar11 = (undefined1 *)(iVar19 + param_3 * -4 + iVar24 + param_2);
            puVar25 = (undefined1 *)(iVar18 + param_3 * -4 + iVar24 + param_2);
            uVar12 = uVar22;
            do {
              puVar25 = puVar25 + iVar6;
              uVar16 = (int)lVar13 + (int)uVar12;
              puVar11 = puVar11 + iVar6;
              uVar12 = uVar12 + 4;
              puVar5 = puVar14 + param_3;
              uVar1 = *puVar14;
              puVar14 = puVar14 + iVar6;
              *(uint *)((((int)uVar16 >> 2) + (uint)((int)uVar16 < 0 && (uVar16 & 3) != 0)) * 4 +
                       (int)param_1) = CONCAT31(CONCAT21(CONCAT11(*puVar25,*puVar11),*puVar5),uVar1)
              ;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          iVar24 = iVar24 + 1;
          lVar13 = lVar13 + uVar8;
        } while (iVar24 < param_5);
      }
      iVar24 = param_3 * 0x20;
      uVar22 = uVar22 + 0x20;
      iVar20 = iVar20 + iVar24;
      iVar19 = iVar24 + iVar19;
      iVar18 = iVar24 + iVar18;
    } while ((int)uVar22 < (int)uVar23);
  }
  iVar18 = 0;
  if (0 < param_5) {
    do {
      if ((int)uVar22 < (int)uVar9) {
        lVar13 = uVar9 - uVar22;
        puVar25 = (undefined1 *)(((int)uVar22 + -1) * param_3 + iVar18 + param_2);
        uVar17 = uVar22;
        do {
          puVar25 = puVar25 + param_3;
          *(undefined1 *)((int)param_1 + (int)uVar17) = *puVar25;
          uVar17 = uVar17 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      iVar18 = iVar18 + 1;
      param_1 = param_1 + uVar8;
    } while (iVar18 < param_5);
  }
  return;
}

