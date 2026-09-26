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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_98;
extern int iRam831bc2c8;
extern int iRam831bc2cc;
extern int iRam831bc2d8;
extern int iRam831bc2dc;
extern unsigned int iStack_80;
extern unsigned int stack0x00000000;
extern unsigned int uRam831bc2d0;
extern unsigned int uRam831bc2d4;
extern unsigned int uStack_84;
extern unsigned int uStack_88;


undefined8 fn_82F87280(ushort *param_1,uint *param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar14;
  longlong lVar13;
  int iVar16;
  ulonglong uVar15;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint auStack_98 [4];
  uint uStack_88;
  uint uStack_84;
  int iStack_80;
  
  uVar6 = uRam831bc2d4;
  uVar10 = uRam831bc2d0;
  uVar7 = ZEXT48(&stack0x00000000);
  uVar2 = *param_1;
  uVar21 = uVar2 & 0x7fff;
  auStack_98[0] = *(uint *)(param_1 + 1);
  auStack_98[1] = *(uint *)(param_1 + 3);
  iVar16 = uVar21 - 0x3fff;
  auStack_98[2] = (uint)param_1[5] << 0x10;
  lVar12 = uVar7 - 0x98;
  iVar9 = 0;
  if (iVar16 == -0x3fff) {
    iVar16 = 0;
    do {
      if (*(int *)lVar12 != 0) {
        uVar8 = 2;
        auStack_98[0] = 0;
        auStack_98[1] = 0;
        goto LAB_82f87948;
      }
      iVar16 = iVar16 + 1;
      lVar12 = lVar12 + 4;
      iVar20 = 0;
    } while (iVar16 < 3);
  }
  else {
    uStack_88 = *(uint *)lVar12;
    uVar18 = uRam831bc2d0 - 1;
    uVar8 = 1;
    iVar3 = (int)uRam831bc2d0 >> 5;
    uStack_84 = auStack_98[1];
    uVar22 = (longlong)iVar3 + (ulonglong)((int)uRam831bc2d0 < 0 && (uRam831bc2d0 & 0x1f) != 0);
    iStack_80 = auStack_98[2];
    iVar5 = (int)((uVar22 & 0x3fffffff) << 2);
    uVar19 = 0x1f - (uRam831bc2d0 +
                    (iVar3 + (uint)((int)uRam831bc2d0 < 0 && (uRam831bc2d0 & 0x1f) != 0)) * -0x20);
    iVar4 = (int)uVar18 >> 5;
    if ((1 << (uVar19 & 0x3f) & *(uint *)((int)auStack_98 + iVar5)) != 0) {
      if ((*(uint *)((int)auStack_98 + (int)((uVar22 & 0xffffffff) << 2)) & ~(-1 << (uVar19 & 0x3f))
          ) == 0) {
        uVar15 = uVar22 + 1;
        if ((int)uVar15 < 3) {
          lVar12 = (uVar15 & 0x3fffffff) * 4 + (uVar7 - 0x98);
          do {
            if (*(int *)lVar12 != 0) goto LAB_82f873c8;
            uVar15 = uVar15 + 1;
            lVar12 = lVar12 + 4;
          } while ((int)uVar15 < 3);
        }
      }
      else {
LAB_82f873c8:
        uVar15 = (longlong)iVar4 + (ulonglong)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0);
        iVar20 = (int)((uVar15 & 0xffffffff) << 2);
        iVar9 = 0;
        uVar17 = *(uint *)((int)auStack_98 + iVar20);
        uVar11 = 1 << (0x1f - (uVar18 + (iVar4 + (uint)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0)) *
                                        -0x20) & 0x3f);
        uVar14 = uVar17 + uVar11;
        if ((uVar14 < uVar17) || (uVar14 < uVar11)) {
          iVar9 = 1;
        }
        uVar15 = uVar15 - 1;
        *(uint *)((int)auStack_98 + iVar20) = uVar14;
        if (-1 < (longlong)uVar15) {
          lVar12 = (uVar15 & 0x3fffffff) * 4 + (uVar7 - 0x94);
          do {
            bVar1 = iVar9 == 0;
            iVar9 = 0;
            if (bVar1) break;
            uVar17 = *(uint *)((int)lVar12 + -4);
            iVar9 = 0;
            uVar11 = uVar17 + 1;
            if ((uVar11 < uVar17) || (uVar11 == 0)) {
              iVar9 = 1;
            }
            uVar15 = uVar15 - 1;
            lVar12 = lVar12 + -4;
            *(uint *)lVar12 = uVar11;
          } while (-1 < (longlong)uVar15);
        }
      }
    }
    uVar22 = uVar22 + 1;
    *(uint *)((int)auStack_98 + iVar5) = -1 << (uVar19 & 0x3f) & *(uint *)((int)auStack_98 + iVar5);
    if ((int)uVar22 < 3) {
      uVar15 = 3 - uVar22;
      lVar12 = (uVar22 & 0x3fffffff) * 4 + uVar7 + -0x9c;
      uVar22 = uVar15 & 0xffffffff;
      while (uVar22 != 0) {
        lVar12 = lVar12 + 4;
        *(undefined4 *)lVar12 = 0;
        uVar15 = uVar15 - 1;
        uVar22 = uVar15;
      }
    }
    iVar5 = iRam831bc2c8;
    iVar20 = iVar16;
    if (iVar9 != 0) {
      iVar20 = uVar21 - 0x3ffe;
    }
    if (iVar20 < (int)(iRam831bc2cc - uVar10)) {
      iVar9 = 0;
      uVar8 = 2;
      auStack_98[0] = 0;
      auStack_98[1] = 0;
      goto LAB_82f87948;
    }
    lVar12 = 3;
    if (iVar20 <= iRam831bc2cc) {
      uVar17 = iRam831bc2cc - iVar16;
      uVar19 = ((int)uVar17 >> 5) + (uint)((int)uVar17 < 0 && (uVar17 & 0x1f) != 0);
      uVar17 = uVar17 + (((int)uVar17 >> 5) + (uint)((int)uVar17 < 0 && (uVar17 & 0x1f) != 0)) *
                        -0x20;
      auStack_98[0] = uStack_88;
      uVar21 = 0;
      lVar13 = uVar7 - 0x9c;
      do {
        uVar11 = *(uint *)((int)lVar13 + 4);
        lVar13 = lVar13 + 4;
        *(uint *)lVar13 = uVar11 >> (uVar17 & 0x3f) | uVar21;
        uVar21 = (uVar11 & ~(-1 << (uVar17 & 0x3f))) << (0x20 - uVar17 & 0x3f);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      iVar9 = 2;
      lVar13 = uVar7 - 0x90;
      lVar12 = (uVar7 - 0x90) + ((ulonglong)uVar19 & 0x3fffffff) * -4;
      lVar23 = 3;
      do {
        if (iVar9 < (int)uVar19) {
          *(undefined4 *)lVar13 = 0;
        }
        else {
          *(undefined4 *)lVar13 = *(undefined4 *)lVar12;
        }
        iVar9 = iVar9 + -1;
        lVar12 = lVar12 + -4;
        lVar13 = lVar13 + -4;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      uVar22 = (longlong)iVar3 + (ulonglong)((int)uVar10 < 0 && (uVar10 & 0x1f) != 0);
      iVar9 = (int)((uVar22 & 0x3fffffff) << 2);
      uVar21 = 0x1f - (uVar10 + (iVar3 + (uint)((int)uVar10 < 0 && (uVar10 & 0x1f) != 0)) * -0x20);
      if ((1 << (uVar21 & 0x3f) & *(uint *)((int)auStack_98 + iVar9)) != 0) {
        if ((*(uint *)((int)auStack_98 + (int)((uVar22 & 0xffffffff) << 2)) &
            ~(-1 << (uVar21 & 0x3f))) == 0) {
          uVar15 = uVar22 + 1;
          if ((int)uVar15 < 3) {
            lVar12 = (uVar15 & 0x3fffffff) * 4 + (uVar7 - 0x98);
            do {
              if (*(int *)lVar12 != 0) goto LAB_82f87634;
              uVar15 = uVar15 + 1;
              lVar12 = lVar12 + 4;
            } while ((int)uVar15 < 3);
          }
        }
        else {
LAB_82f87634:
          uVar15 = (longlong)iVar4 + (ulonglong)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0);
          iVar16 = (int)((uVar15 & 0xffffffff) << 2);
          bVar1 = false;
          uVar10 = *(uint *)((int)auStack_98 + iVar16);
          uVar18 = 1 << (0x1f - (uVar18 + (iVar4 + (uint)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0))
                                          * -0x20) & 0x3f);
          uVar19 = uVar10 + uVar18;
          if ((uVar19 < uVar10) || (uVar19 < uVar18)) {
            bVar1 = true;
          }
          *(uint *)((int)auStack_98 + iVar16) = uVar19;
          uVar15 = uVar15 - 1;
          if (-1 < (longlong)uVar15) {
            lVar12 = (uVar15 & 0x3fffffff) * 4 + (uVar7 - 0x94);
            do {
              if (!bVar1) break;
              uVar10 = *(uint *)((int)lVar12 + -4);
              bVar1 = false;
              uVar18 = uVar10 + 1;
              if ((uVar18 < uVar10) || (uVar18 == 0)) {
                bVar1 = true;
              }
              uVar15 = uVar15 - 1;
              lVar12 = lVar12 + -4;
              *(uint *)lVar12 = uVar18;
            } while (-1 < (longlong)uVar15);
          }
        }
      }
      uVar22 = uVar22 + 1;
      *(uint *)((int)auStack_98 + iVar9) =
           -1 << (uVar21 & 0x3f) & *(uint *)((int)auStack_98 + iVar9);
      if ((int)uVar22 < 3) {
        uVar15 = 3 - uVar22;
        lVar12 = (uVar22 & 0x3fffffff) * 4 + uVar7 + -0x9c;
        uVar22 = uVar15 & 0xffffffff;
        while (uVar22 != 0) {
          lVar12 = lVar12 + 4;
          *(undefined4 *)lVar12 = 0;
          uVar15 = uVar15 - 1;
          uVar22 = uVar15;
        }
      }
      uVar18 = uVar6 + 1;
      uVar10 = ((int)uVar18 >> 5) + (uint)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0);
      lVar13 = 3;
      lVar12 = uVar7 - 0x9c;
      uVar21 = 0;
      uVar18 = uVar18 + (((int)uVar18 >> 5) + (uint)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0)) *
                        -0x20;
      do {
        uVar19 = *(uint *)((int)lVar12 + 4);
        lVar12 = lVar12 + 4;
        *(uint *)lVar12 = uVar19 >> (uVar18 & 0x3f) | uVar21;
        uVar21 = (uVar19 & ~(-1 << (uVar18 & 0x3f))) << (0x20 - uVar18 & 0x3f);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      iVar9 = 2;
      lVar13 = uVar7 - 0x90;
      lVar12 = (uVar7 - 0x90) + ((ulonglong)uVar10 & 0x3fffffff) * -4;
      lVar23 = 3;
      do {
        if (iVar9 < (int)uVar10) {
          *(undefined4 *)lVar13 = 0;
        }
        else {
          *(undefined4 *)lVar13 = *(undefined4 *)lVar12;
        }
        iVar9 = iVar9 + -1;
        lVar12 = lVar12 + -4;
        lVar13 = lVar13 + -4;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      iVar9 = 0;
      uVar8 = 2;
      goto LAB_82f87948;
    }
    iVar9 = (int)uVar6 >> 5;
    if (iRam831bc2c8 <= iVar20) {
      uVar10 = iVar9 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0);
      auStack_98[1] = 0;
      uVar18 = uVar6 + (iVar9 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0)) * -0x20;
      lVar13 = uVar7 - 0x9c;
      uVar21 = 0;
      auStack_98[0] = 0x80000000;
      do {
        uVar19 = *(uint *)((int)lVar13 + 4);
        lVar13 = lVar13 + 4;
        *(uint *)lVar13 = uVar19 >> (uVar18 & 0x3f) | uVar21;
        uVar21 = (uVar19 & ~(-1 << (uVar18 & 0x3f))) << (0x20 - uVar18 & 0x3f);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      iVar9 = 2;
      lVar13 = uVar7 - 0x90;
      lVar12 = (uVar7 - 0x90) + ((ulonglong)uVar10 & 0x3fffffff) * -4;
      lVar23 = 3;
      do {
        if (iVar9 < (int)uVar10) {
          *(undefined4 *)lVar13 = 0;
        }
        else {
          *(undefined4 *)lVar13 = *(undefined4 *)lVar12;
        }
        iVar9 = iVar9 + -1;
        lVar12 = lVar12 + -4;
        lVar13 = lVar13 + -4;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      iVar9 = iRam831bc2dc + iVar5;
      goto LAB_82f87948;
    }
    uVar10 = iVar9 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0);
    auStack_98[0] = auStack_98[0] & 0x7fffffff;
    iVar20 = iRam831bc2dc + iVar20;
    uVar18 = uVar6 + (iVar9 + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0)) * -0x20;
    uVar21 = 0;
    lVar13 = uVar7 - 0x9c;
    do {
      uVar19 = *(uint *)((int)lVar13 + 4);
      lVar13 = lVar13 + 4;
      *(uint *)lVar13 = uVar19 >> (uVar18 & 0x3f) | uVar21;
      uVar21 = (uVar19 & ~(-1 << (uVar18 & 0x3f))) << (0x20 - uVar18 & 0x3f);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    iVar9 = 2;
    lVar13 = uVar7 - 0x90;
    lVar12 = (uVar7 - 0x90) + ((ulonglong)uVar10 & 0x3fffffff) * -4;
    lVar23 = 3;
    do {
      if (iVar9 < (int)uVar10) {
        *(undefined4 *)lVar13 = 0;
      }
      else {
        *(undefined4 *)lVar13 = *(undefined4 *)lVar12;
      }
      iVar9 = iVar9 + -1;
      lVar12 = lVar12 + -4;
      lVar13 = lVar13 + -4;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  iVar9 = iVar20;
  uVar8 = 0;
LAB_82f87948:
  if (iRam831bc2d8 == 0x40) {
    param_2[1] = auStack_98[1];
  }
  else if (iRam831bc2d8 != 0x20) {
    return uVar8;
  }
  *param_2 = iVar9 << (0x1f - uVar6 & 0x3f) | -(uint)((uVar2 & 0x8000) != 0) & 0x80000000 |
             auStack_98[0];
  return uVar8;
}

