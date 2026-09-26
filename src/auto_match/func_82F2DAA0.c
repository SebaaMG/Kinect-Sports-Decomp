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


void fn_82F2DAA0(int param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar7;
  ulonglong uVar10;
  undefined1 *puVar11;
  uint uVar14;
  longlong lVar12;
  longlong lVar13;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  
  iVar29 = (int)param_3;
  uVar19 = *(uint *)(*(int *)(param_1 + 0x74) + 8);
  if ((((uVar19 != 0) && (uVar2 = *(uint *)(param_1 + 100), uVar2 != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x74) + 4) != 0)) &&
     (uVar18 = *(uint *)(param_1 + 0x60), uVar18 != 0)) {
    uVar3 = *(uint *)(param_1 + 0x5c);
    uVar14 = (uVar19 - 1) * uVar2;
    iVar25 = ((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0);
    trapWord(6,(ulonglong)uVar19,0);
    iVar6 = (int)(((ulonglong)uVar19 & 0xffffff) << 8) / (int)uVar2;
    uVar23 = (ulonglong)iVar6;
    trapWord(6,(ulonglong)uVar2,0);
    trapWord(5,(ulonglong)uVar2 &
               ~((((ulonglong)uVar19 & 0x7fffff) << 9 | ((ulonglong)uVar19 & 0xffffff) >> 0x17) - 1)
             ,0xffff);
    trapWord(5,(ulonglong)uVar19 &
               ~((((ulonglong)uVar14 & 0x7fffffff) << 1 | (ulonglong)(uVar14 >> 0x1f)) - 1),0xffff);
    uVar7 = (longlong)((int)uVar14 / (int)uVar19);
    if (iVar29 < (int)uVar14 / (int)uVar19) {
      uVar7 = param_3;
    }
    if (0 < iVar6) {
      iVar5 = (int)param_2;
      puVar8 = (undefined1 *)(uVar18 * iVar5 + *(int *)(param_1 + 0x7c));
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar12 = 0;
      }
      else {
        uVar14 = iVar6 - 0x100;
        lVar12 = (longlong)((int)uVar14 >> 1) + (ulonglong)((int)uVar14 < 0 && (uVar14 & 1) != 0);
      }
      uVar22 = (longlong)iVar6 * (longlong)iVar5;
      lVar12 = uVar22 + lVar12;
      lVar24 = 0;
      if (lVar12 < 0) {
        uVar10 = uVar23 - lVar12;
        trapWord(6,uVar23,0);
        iVar27 = (int)uVar10 / iVar6;
        lVar24 = (longlong)iVar27;
        trapWord(5,uVar23 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),
                 0xffff);
        if (iVar5 < (int)(lVar24 + param_2)) {
          lVar13 = (lVar24 + param_2) - param_2;
          do {
            iVar15 = 0;
            if (0 < (int)uVar18) {
              puVar11 = (undefined1 *)(*(int *)(param_1 + 0x84) + -1);
              do {
                puVar11 = puVar11 + 1;
                iVar15 = iVar15 + 1;
                *puVar8 = *puVar11;
                puVar8 = puVar8 + 1;
                uVar18 = *(uint *)(param_1 + 0x60);
              } while (iVar15 < (int)uVar18);
            }
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        lVar12 = (longlong)iVar27 * (longlong)iVar6 + lVar12;
      }
      iVar27 = (int)uVar7;
      if ((int)(lVar24 + param_2) < iVar27) {
        lVar13 = uVar7 - (lVar24 + param_2);
        do {
          uVar14 = (uint)lVar12 & 0xff;
          iVar15 = 0;
          pbVar16 = (byte *)(((int)(uint)lVar12 >> 8) * uVar18 + *(int *)(param_1 + 0x84));
          if (0 < (int)uVar18) {
            do {
              pbVar17 = pbVar16 + uVar18;
              iVar15 = iVar15 + 1;
              bVar1 = *pbVar16;
              pbVar16 = pbVar16 + 1;
              *puVar8 = (char)(*pbVar17 * uVar14 + (uint)bVar1 * (0x100 - uVar14) >> 8);
              puVar8 = puVar8 + 1;
              uVar18 = *(uint *)(param_1 + 0x60);
            } while (iVar15 < (int)uVar18);
          }
          lVar12 = lVar12 + uVar23;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      if (iVar27 < iVar29) {
        lVar13 = param_3 - uVar7;
        pbVar16 = puVar8 + -1;
        do {
          uVar14 = (uint)lVar12 & 0xff;
          iVar15 = (int)(uint)lVar12 >> 8;
          pbVar17 = (byte *)(iVar15 * uVar18 + *(int *)(param_1 + 0x84));
          iVar9 = 0;
          if (iVar15 < (int)(uVar19 - 1)) {
            if (0 < (int)uVar18) {
              do {
                pbVar4 = pbVar17 + uVar18;
                iVar9 = iVar9 + 1;
                bVar1 = *pbVar17;
                pbVar17 = pbVar17 + 1;
                pbVar16[1] = (byte)(*pbVar4 * uVar14 + (uint)bVar1 * (0x100 - uVar14) >> 8);
                pbVar16 = pbVar16 + 1;
                uVar18 = *(uint *)(param_1 + 0x60);
              } while (iVar9 < (int)uVar18);
            }
          }
          else if (0 < (int)uVar18) {
            pbVar17 = pbVar17 + -1;
            do {
              pbVar17 = pbVar17 + 1;
              iVar9 = iVar9 + 1;
              pbVar16 = pbVar16 + 1;
              *pbVar16 = *pbVar17;
              uVar18 = *(uint *)(param_1 + 0x60);
            } while (iVar9 < (int)uVar18);
          }
          lVar12 = lVar12 + uVar23;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      iVar15 = *(int *)(param_1 + 0x6c);
      uVar18 = iVar15 * iVar5;
      iVar9 = ((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0);
      iVar21 = *(int *)(param_1 + 0x60) * uVar19 + *(int *)(param_1 + 0x84);
      puVar8 = (undefined1 *)
               (iVar9 * iVar25 + *(int *)(param_1 + 100) * *(int *)(param_1 + 0x60) +
               *(int *)(param_1 + 0x7c));
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar12 = 0;
      }
      else {
        uVar18 = iVar15 * iVar6 - 0x100;
        lVar12 = (longlong)((int)uVar18 >> 1) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 1) != 0);
      }
      uVar18 = iVar15 * iVar6 * iVar5;
      lVar12 = (longlong)((int)uVar18 >> 1) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 1) != 0) +
               lVar12;
      if (lVar12 < 0) {
        uVar7 = uVar23 - lVar12;
        trapWord(6,uVar23,0);
        iVar15 = (int)uVar7 / iVar6;
        lVar24 = (longlong)iVar15;
        trapWord(5,uVar23 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff
                );
        if (iVar9 < iVar9 + iVar15) {
          do {
            iVar20 = 0;
            iVar28 = iVar25;
            if (0 < iVar25) {
              do {
                puVar11 = (undefined1 *)(iVar20 + iVar21);
                iVar20 = iVar20 + 1;
                *puVar8 = *puVar11;
                puVar8 = puVar8 + 1;
                iVar28 = iVar28 + -1;
              } while (iVar28 != 0);
            }
            iVar9 = iVar9 + 1;
            uVar18 = *(int *)(param_1 + 0x6c) * iVar5;
          } while (iVar9 < (int)(((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0) +
                                iVar15));
        }
        lVar12 = (longlong)iVar15 * (longlong)iVar6 + lVar12;
      }
      uVar14 = *(int *)(param_1 + 0x6c) * iVar27 - 1;
      uVar18 = *(int *)(param_1 + 0x6c) * iVar5;
      lVar26 = (longlong)((int)uVar14 >> 1) + (ulonglong)((int)uVar14 < 0 && (uVar14 & 1) != 0);
      lVar13 = (longlong)((int)uVar18 >> 1) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 1) != 0) +
               lVar24;
      iVar27 = (int)lVar26;
      if ((int)lVar13 < iVar27) {
        lVar13 = lVar26 - lVar13;
        do {
          uVar18 = (uint)lVar12 & 0xff;
          iVar15 = 0;
          iVar9 = ((int)(uint)lVar12 >> 8) * iVar25 + iVar21;
          if (0 < iVar25) {
            pbVar16 = (byte *)(iVar9 + iVar25 + -1);
            iVar28 = iVar25;
            do {
              pbVar17 = (byte *)(iVar9 + iVar15);
              iVar15 = iVar15 + 1;
              pbVar16 = pbVar16 + 1;
              *puVar8 = (char)((uint)*pbVar17 * (0x100 - uVar18) + *pbVar16 * uVar18 >> 8);
              puVar8 = puVar8 + 1;
              iVar28 = iVar28 + -1;
            } while (iVar28 != 0);
          }
          lVar13 = lVar13 + -1;
          lVar12 = lVar12 + uVar23;
        } while (lVar13 != 0);
      }
      uVar18 = *(int *)(param_1 + 0x6c) * iVar29;
      if ((iVar27 < (int)(((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0))) &&
         (lVar13 = (longlong)(iVar29 >> 1) + (ulonglong)(iVar29 < 0 && (param_3 & 1) != 0),
         iVar27 < (int)lVar13)) {
        lVar13 = lVar13 - lVar26;
        puVar8 = puVar8 + -1;
        do {
          iVar9 = 0;
          iVar15 = iVar25;
          if (0 < iVar25) {
            do {
              puVar11 = (undefined1 *)(((int)lVar12 >> 8) * iVar25 + iVar21 + iVar9);
              iVar9 = iVar9 + 1;
              puVar8 = puVar8 + 1;
              *puVar8 = *puVar11;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          lVar13 = lVar13 + -1;
          lVar12 = lVar12 + uVar23;
        } while (lVar13 != 0);
      }
      iVar15 = *(int *)(param_1 + 0x6c);
      uVar18 = iVar15 * iVar5;
      puVar8 = (undefined1 *)
               ((((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0) +
                iVar15 * (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0))) * iVar25
                + *(int *)(param_1 + 0x60) * *(int *)(param_1 + 100) + *(int *)(param_1 + 0x7c));
      iVar15 = iVar15 * (((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0)) * iVar25 +
               *(int *)(param_1 + 0x60) * uVar19 + *(int *)(param_1 + 0x84);
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar12 = 0;
      }
      else {
        uVar19 = *(int *)(param_1 + 0x6c) * iVar6 - 0x100;
        lVar12 = (longlong)((int)uVar19 >> 1) + (ulonglong)((int)uVar19 < 0 && (uVar19 & 1) != 0);
      }
      lVar12 = (longlong)((int)uVar22 >> 1) + (ulonglong)((int)uVar22 < 0 && (uVar22 & 1) != 0) +
               lVar12;
      if (lVar12 < 0) {
        uVar7 = uVar23 - lVar12;
        trapWord(6,uVar23,0);
        uVar19 = *(int *)(param_1 + 0x6c) * iVar5;
        iVar21 = ((int)uVar19 >> 1) + (uint)((int)uVar19 < 0 && (uVar19 & 1) != 0);
        iVar9 = (int)uVar7 / iVar6;
        lVar24 = (longlong)iVar9;
        trapWord(5,uVar23 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff
                );
        if (iVar21 < iVar21 + iVar9) {
          do {
            iVar20 = 0;
            iVar28 = iVar25;
            if (0 < iVar25) {
              do {
                puVar11 = (undefined1 *)(iVar20 + iVar15);
                iVar20 = iVar20 + 1;
                *puVar8 = *puVar11;
                puVar8 = puVar8 + 1;
                iVar28 = iVar28 + -1;
              } while (iVar28 != 0);
            }
            iVar21 = iVar21 + 1;
            uVar19 = *(int *)(param_1 + 0x6c) * iVar5;
          } while (iVar21 < (int)(((int)uVar19 >> 1) + (uint)((int)uVar19 < 0 && (uVar19 & 1) != 0)
                                 + iVar9));
        }
        lVar12 = (longlong)iVar9 * (longlong)iVar6 + lVar12;
      }
      uVar19 = *(int *)(param_1 + 0x6c) * iVar5;
      lVar24 = (longlong)((int)uVar19 >> 1) + (ulonglong)((int)uVar19 < 0 && (uVar19 & 1) != 0) +
               lVar24;
      if ((int)lVar24 < iVar27) {
        lVar24 = lVar26 - lVar24;
        do {
          uVar19 = (uint)lVar12 & 0xff;
          iVar5 = 0;
          iVar6 = ((int)(uint)lVar12 >> 8) * iVar25 + iVar15;
          if (0 < iVar25) {
            pbVar16 = (byte *)(iVar6 + iVar25 + -1);
            iVar9 = iVar25;
            do {
              pbVar17 = (byte *)(iVar6 + iVar5);
              iVar5 = iVar5 + 1;
              pbVar16 = pbVar16 + 1;
              *puVar8 = (char)((uint)*pbVar17 * (0x100 - uVar19) + *pbVar16 * uVar19 >> 8);
              puVar8 = puVar8 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          lVar24 = lVar24 + -1;
          lVar12 = lVar12 + uVar23;
        } while (lVar24 != 0);
      }
      uVar19 = *(int *)(param_1 + 0x6c) * iVar29;
      if ((iVar27 < (int)(((int)uVar19 >> 1) + (uint)((int)uVar19 < 0 && (uVar19 & 1) != 0))) &&
         (lVar24 = (longlong)(iVar29 >> 1) + (ulonglong)(iVar29 < 0 && (param_3 & 1) != 0),
         iVar27 < (int)lVar24)) {
        lVar24 = lVar24 - lVar26;
        puVar8 = puVar8 + -1;
        do {
          iVar6 = 0;
          iVar29 = iVar25;
          if (0 < iVar25) {
            do {
              puVar11 = (undefined1 *)(((int)lVar12 >> 8) * iVar25 + iVar15 + iVar6);
              iVar6 = iVar6 + 1;
              puVar8 = puVar8 + 1;
              *puVar8 = *puVar11;
              iVar29 = iVar29 + -1;
            } while (iVar29 != 0);
          }
          lVar24 = lVar24 + -1;
          lVar12 = lVar12 + uVar23;
        } while (lVar24 != 0);
      }
    }
  }
  return;
}

