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


void fn_82CC74A8(int param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar13;
  longlong lVar11;
  longlong lVar12;
  byte *pbVar14;
  undefined1 *puVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar27;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  lVar25 = 0;
  uVar30 = *(uint *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar10 = (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0);
  iVar27 = ((int)uVar13 >> 1) + uVar10;
  iVar26 = ((int)uVar13 >> 1) + uVar10;
  trapWord(6,(ulonglong)uVar2,0);
  uVar23 = (longlong)((int)uVar30 >> 1) + (ulonglong)((int)uVar30 < 0 && (uVar30 & 1) != 0);
  uVar10 = *(uint *)(*(int *)(param_1 + 0x30) + 8);
  iVar29 = (int)uVar23;
  iVar22 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  uVar30 = (iVar29 + -1) * iVar22;
  uVar13 = (uVar10 - 1) * uVar2;
  iVar5 = (int)param_3;
  trapWord(6,(ulonglong)uVar10,0);
  iVar31 = (int)(((ulonglong)uVar10 & 0xffffff) << 8) / (int)uVar2;
  uVar24 = (ulonglong)iVar31;
  trapWord(5,(ulonglong)uVar2 &
             ~((((ulonglong)uVar10 & 0x7fffff) << 9 | ((ulonglong)uVar10 & 0xffffff) >> 0x17) - 1),
           0xffff);
  trapWord(5,(ulonglong)uVar10 &
             ~((((ulonglong)uVar13 & 0x7fffffff) << 1 | (ulonglong)(uVar13 >> 0x1f)) - 1),0xffff);
  trapWord(6,uVar23,0);
  trapWord(5,uVar23 & ~((((ulonglong)uVar30 & 0x7fffffff) << 1 | (ulonglong)(uVar30 >> 0x1f)) - 1),
           0xffff);
  lVar17 = (longlong)(iVar5 >> 1) + (ulonglong)(iVar5 < 0 && (param_3 & 1) != 0);
  uVar23 = (longlong)((int)uVar13 / (int)uVar10);
  if (iVar5 < (int)uVar13 / (int)uVar10) {
    uVar23 = param_3;
  }
  iVar18 = (int)lVar17;
  lVar19 = (longlong)((int)uVar30 / iVar29);
  if (iVar18 < (int)uVar30 / iVar29) {
    lVar19 = lVar17;
  }
  if (0 < iVar31) {
    iVar4 = (int)param_2;
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x4c) != 0)) {
      iVar16 = *(int *)(param_1 + 0x20);
      iVar28 = iVar16 * iVar4 + *(int *)(param_1 + 0x38);
    }
    else {
      iVar28 = *(int *)(param_1 + 0x50);
      iVar16 = *(int *)(param_1 + 0x5c);
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar11 = 0;
    }
    else {
      uVar13 = iVar31 - 0x100;
      lVar11 = (longlong)((int)uVar13 >> 1) + (ulonglong)((int)uVar13 < 0 && (uVar13 & 1) != 0);
    }
    uVar21 = (longlong)iVar31 * (longlong)iVar4;
    lVar11 = uVar21 + lVar11;
    if (lVar11 < 0) {
      uVar8 = uVar24 - lVar11;
      trapWord(6,uVar24,0);
      iVar20 = (int)uVar8 / iVar31;
      lVar25 = (longlong)iVar20;
      trapWord(5,uVar24 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (iVar4 < (int)(lVar25 + param_2)) {
        lVar12 = (lVar25 + param_2) - param_2;
        iVar9 = *(int *)(param_1 + 0x20);
        do {
          iVar7 = 0;
          if (0 < iVar9) {
            puVar6 = (undefined1 *)(*(int *)(param_1 + 0x40) + -1);
            do {
              puVar6 = puVar6 + 1;
              *(undefined1 *)(iVar7 + iVar28) = *puVar6;
              iVar7 = iVar7 + 1;
              iVar9 = *(int *)(param_1 + 0x20);
            } while (iVar7 < iVar9);
          }
          iVar28 = iVar16 + iVar28;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      lVar11 = (longlong)iVar20 * (longlong)iVar31 + lVar11;
    }
    if ((int)(lVar25 + param_2) < (int)uVar23) {
      lVar12 = uVar23 - (lVar25 + param_2);
      iVar20 = *(int *)(param_1 + 0x20);
      do {
        uVar13 = (uint)lVar11 & 0xff;
        iVar9 = 0;
        pbVar14 = (byte *)(((int)(uint)lVar11 >> 8) * iVar20 + *(int *)(param_1 + 0x40));
        if (0 < iVar20) {
          do {
            pbVar3 = pbVar14 + iVar20;
            bVar1 = *pbVar14;
            pbVar14 = pbVar14 + 1;
            *(char *)(iVar9 + iVar28) =
                 (char)(*pbVar3 * uVar13 + (uint)bVar1 * (0x100 - uVar13) >> 8);
            iVar9 = iVar9 + 1;
            iVar20 = *(int *)(param_1 + 0x20);
          } while (iVar9 < iVar20);
        }
        iVar28 = iVar16 + iVar28;
        lVar11 = lVar11 + uVar24;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if ((int)uVar23 < iVar5) {
      lVar12 = param_3 - uVar23;
      iVar5 = *(int *)(param_1 + 0x20);
      do {
        uVar13 = (uint)lVar11 & 0xff;
        iVar20 = (int)(uint)lVar11 >> 8;
        pbVar14 = (byte *)(iVar20 * iVar5 + *(int *)(param_1 + 0x40));
        iVar9 = 0;
        if (iVar20 < (int)(uVar10 - 1)) {
          if (0 < iVar5) {
            do {
              pbVar3 = pbVar14 + iVar5;
              bVar1 = *pbVar14;
              pbVar14 = pbVar14 + 1;
              *(char *)(iVar9 + iVar28) =
                   (char)(*pbVar3 * uVar13 + (uint)bVar1 * (0x100 - uVar13) >> 8);
              iVar9 = iVar9 + 1;
              iVar5 = *(int *)(param_1 + 0x20);
            } while (iVar9 < iVar5);
          }
        }
        else if (0 < iVar5) {
          pbVar14 = pbVar14 + -1;
          do {
            pbVar14 = pbVar14 + 1;
            *(byte *)(iVar9 + iVar28) = *pbVar14;
            iVar9 = iVar9 + 1;
            iVar5 = *(int *)(param_1 + 0x20);
          } while (iVar9 < iVar5);
        }
        iVar28 = iVar16 + iVar28;
        lVar11 = lVar11 + uVar24;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x4c) != 0)) {
      uVar13 = *(int *)(param_1 + 0x2c) * iVar4;
      puVar6 = (undefined1 *)
               ((((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0)) * iVar27 +
                *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x38));
      iVar5 = iVar27;
    }
    else {
      puVar6 = *(undefined1 **)(param_1 + 0x54);
      iVar5 = *(int *)(param_1 + 0x60);
    }
    iVar28 = *(int *)(param_1 + 0x20) * uVar10 + *(int *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar11 = 0;
    }
    else {
      uVar13 = *(int *)(param_1 + 0x2c) * iVar31 - 0x100;
      lVar11 = (longlong)((int)uVar13 >> 1) + (ulonglong)((int)uVar13 < 0 && (uVar13 & 1) != 0);
    }
    iVar16 = *(int *)(param_1 + 0x2c);
    uVar13 = iVar16 * iVar31 * iVar4;
    lVar11 = (longlong)((int)uVar13 >> 1) + (ulonglong)((int)uVar13 < 0 && (uVar13 & 1) != 0) +
             lVar11;
    if (lVar11 < 0) {
      uVar23 = uVar24 - lVar11;
      uVar13 = iVar16 * iVar4;
      iVar20 = (int)uVar23 / iVar31;
      lVar25 = (longlong)iVar20;
      iVar9 = ((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0);
      trapWord(6,uVar24,0);
      trapWord(5,uVar24 & ~(((uVar23 & 0x7fffffff) << 1 | (uVar23 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      if (iVar9 < iVar9 + iVar20) {
        iVar7 = iVar28 - (int)puVar6;
        do {
          puVar15 = puVar6;
          iVar16 = iVar26;
          if (0 < iVar27) {
            do {
              *puVar15 = puVar15[iVar7];
              iVar16 = iVar16 + -1;
              puVar15 = puVar15 + 1;
            } while (iVar16 != 0);
          }
          iVar16 = *(int *)(param_1 + 0x2c);
          iVar9 = iVar9 + 1;
          puVar6 = puVar6 + iVar5;
          uVar13 = iVar16 * iVar4;
          iVar7 = iVar7 - iVar5;
        } while (iVar9 < (int)(((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0) +
                              iVar20));
      }
      lVar11 = (longlong)iVar20 * (longlong)iVar31 + lVar11;
    }
    uVar13 = iVar16 * iVar4;
    iVar20 = (int)lVar19;
    lVar12 = (longlong)((int)uVar13 >> 1) + (ulonglong)((int)uVar13 < 0 && (uVar13 & 1) != 0) +
             lVar25;
    if ((int)lVar12 < iVar16 * iVar20) {
      do {
        uVar13 = (uint)lVar11 & 0xff;
        iVar16 = (int)(uint)lVar11 >> 8;
        if (0 < iVar27) {
          pbVar14 = (byte *)((iVar16 + 1) * iVar27 + iVar28 + -1);
          puVar15 = puVar6;
          iVar9 = iVar26;
          do {
            pbVar14 = pbVar14 + 1;
            *puVar15 = (char)((uint)(byte)puVar15[(iVar16 * iVar27 + iVar28) - (int)puVar6] *
                              (0x100 - uVar13) + *pbVar14 * uVar13 >> 8);
            puVar15 = puVar15 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        lVar12 = lVar12 + 1;
        puVar6 = puVar6 + iVar5;
        lVar11 = lVar11 + uVar24;
      } while ((int)lVar12 < *(int *)(param_1 + 0x2c) * iVar20);
    }
    if ((*(int *)(param_1 + 0x2c) * iVar20 < *(int *)(param_1 + 0x2c) * iVar18) && (iVar20 < iVar18)
       ) {
      lVar12 = lVar17 - lVar19;
      do {
        if (0 < iVar27) {
          puVar15 = puVar6;
          iVar16 = iVar26;
          do {
            *puVar15 = puVar15[(((int)lVar11 >> 8) * iVar27 + iVar28) - (int)puVar6];
            puVar15 = puVar15 + 1;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
        lVar12 = lVar12 + -1;
        puVar6 = puVar6 + iVar5;
        lVar11 = lVar11 + uVar24;
      } while (lVar12 != 0);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x4c) != 0)) {
      uVar13 = *(int *)(param_1 + 0x2c) * iVar4;
      puVar6 = (undefined1 *)
               ((((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0) +
                *(int *)(param_1 + 0x2c) * iVar22) * iVar27 +
                *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x38));
      iVar5 = iVar27;
    }
    else {
      puVar6 = *(undefined1 **)(param_1 + 0x58);
      iVar5 = *(int *)(param_1 + 100);
    }
    iVar22 = *(int *)(param_1 + 0x2c);
    iVar29 = iVar22 * iVar29 * iVar27 + *(int *)(param_1 + 0x20) * uVar10 + *(int *)(param_1 + 0x40)
    ;
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar11 = 0;
    }
    else {
      uVar10 = iVar22 * iVar31 - 0x100;
      lVar11 = (longlong)((int)uVar10 >> 1) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 1) != 0);
    }
    lVar11 = (longlong)((int)uVar21 >> 1) + (ulonglong)((int)uVar21 < 0 && (uVar21 & 1) != 0) +
             lVar11;
    if (lVar11 < 0) {
      uVar23 = uVar24 - lVar11;
      uVar10 = iVar22 * iVar4;
      iVar28 = (int)uVar23 / iVar31;
      lVar25 = (longlong)iVar28;
      iVar16 = ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0);
      trapWord(6,uVar24,0);
      trapWord(5,uVar24 & ~(((uVar23 & 0x7fffffff) << 1 | (uVar23 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      if (iVar16 < iVar16 + iVar28) {
        iVar9 = iVar29 - (int)puVar6;
        do {
          iVar22 = iVar26;
          puVar15 = puVar6;
          if (0 < iVar27) {
            do {
              *puVar15 = puVar15[iVar9];
              iVar22 = iVar22 + -1;
              puVar15 = puVar15 + 1;
            } while (iVar22 != 0);
          }
          iVar22 = *(int *)(param_1 + 0x2c);
          iVar16 = iVar16 + 1;
          puVar6 = puVar6 + iVar5;
          uVar10 = iVar22 * iVar4;
          iVar9 = iVar9 - iVar5;
        } while (iVar16 < (int)(((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0) +
                               iVar28));
      }
      lVar11 = (longlong)iVar28 * (longlong)iVar31 + lVar11;
    }
    uVar10 = iVar22 * iVar4;
    lVar25 = (longlong)((int)uVar10 >> 1) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 1) != 0) +
             lVar25;
    if ((int)lVar25 < iVar22 * iVar20) {
      do {
        uVar10 = (uint)lVar11 & 0xff;
        iVar31 = (int)(uint)lVar11 >> 8;
        if (0 < iVar27) {
          pbVar14 = (byte *)((iVar31 + 1) * iVar27 + iVar29 + -1);
          iVar22 = iVar26;
          puVar15 = puVar6;
          do {
            pbVar14 = pbVar14 + 1;
            *puVar15 = (char)((uint)(byte)puVar15[(iVar31 * iVar27 + iVar29) - (int)puVar6] *
                              (0x100 - uVar10) + *pbVar14 * uVar10 >> 8);
            puVar15 = puVar15 + 1;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        lVar25 = lVar25 + 1;
        puVar6 = puVar6 + iVar5;
        lVar11 = lVar11 + uVar24;
      } while ((int)lVar25 < *(int *)(param_1 + 0x2c) * iVar20);
    }
    if ((*(int *)(param_1 + 0x2c) * iVar20 < *(int *)(param_1 + 0x2c) * iVar18) && (iVar20 < iVar18)
       ) {
      lVar17 = lVar17 - lVar19;
      do {
        if (0 < iVar27) {
          iVar31 = iVar26;
          puVar15 = puVar6;
          do {
            *puVar15 = puVar15[(((int)lVar11 >> 8) * iVar27 + iVar29) - (int)puVar6];
            puVar15 = puVar15 + 1;
            iVar31 = iVar31 + -1;
          } while (iVar31 != 0);
        }
        lVar17 = lVar17 + -1;
        puVar6 = puVar6 + iVar5;
        lVar11 = lVar11 + uVar24;
      } while (lVar17 != 0);
    }
  }
  return;
}

