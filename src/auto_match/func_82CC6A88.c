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


void fn_82CC6A88(int param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar8;
  longlong lVar7;
  uint uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar15;
  longlong lVar12;
  longlong lVar13;
  int iVar16;
  byte *pbVar17;
  longlong lVar14;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar25;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  
  lVar26 = 0;
  uVar9 = *(uint *)(param_1 + 0x24);
  uVar15 = *(uint *)(param_1 + 0x20);
  trapWord(6,(ulonglong)uVar9,0);
  uVar18 = *(uint *)(*(int *)(param_1 + 0x30) + 8);
  uVar22 = (ulonglong)uVar18;
  uVar28 = (uVar18 - 1) * uVar9;
  uVar25 = (((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0) + -1) * uVar9;
  iVar4 = (int)param_2;
  trapWord(5,(ulonglong)uVar9 &
             ~((((ulonglong)uVar18 & 0x7fffff) << 9 | ((ulonglong)uVar18 & 0xffffff) >> 0x17) - 1),
           0xffff);
  trapWord(6,uVar22,0);
  uVar1 = (int)(((ulonglong)uVar18 & 0xffffff) << 8) / (int)uVar9;
  uVar20 = (ulonglong)(int)uVar1;
  trapWord(5,uVar22 & ~((((ulonglong)uVar28 & 0x7fffffff) << 1 | (ulonglong)(uVar28 >> 0x1f)) - 1),
           0xffff);
  trapWord(6,uVar22,0);
  trapWord(5,uVar22 & ~((((ulonglong)uVar25 & 0x7fffffff) << 1 | (ulonglong)(uVar25 >> 0x1f)) - 1),
           0xffff);
  iVar21 = ((int)uVar15 >> 1) + (uint)((int)uVar15 < 0 && (uVar15 & 1) != 0);
  puVar6 = (undefined1 *)(uVar15 * iVar4 + *(int *)(param_1 + 0x38));
  iVar5 = (int)param_3;
  uVar22 = (longlong)((int)uVar28 / (int)uVar18);
  if (iVar5 < (int)uVar28 / (int)uVar18) {
    uVar22 = param_3;
  }
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar12 = 0;
    }
    else {
      uVar15 = uVar1 - 0x100;
      lVar12 = (longlong)((int)uVar15 >> 1) + (ulonglong)((int)uVar15 < 0 && (uVar15 & 1) != 0);
    }
    uVar23 = (longlong)(int)uVar1 * (longlong)iVar4;
    lVar12 = uVar23 + lVar12;
    if (lVar12 < 0) {
      uVar10 = uVar20 - lVar12;
      trapWord(6,uVar20,0);
      iVar29 = (int)uVar10 / (int)uVar1;
      lVar26 = (longlong)iVar29;
      trapWord(5,uVar20 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      if (iVar4 < (int)(lVar26 + param_2)) {
        lVar13 = (lVar26 + param_2) - param_2;
        iVar19 = *(int *)(param_1 + 0x20);
        do {
          iVar16 = 0;
          if (0 < iVar19) {
            puVar8 = (undefined1 *)(*(int *)(param_1 + 0x40) + -1);
            do {
              puVar8 = puVar8 + 1;
              iVar16 = iVar16 + 1;
              *puVar6 = *puVar8;
              puVar6 = puVar6 + 1;
              iVar19 = *(int *)(param_1 + 0x20);
            } while (iVar16 < iVar19);
          }
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      lVar12 = (longlong)iVar29 * (longlong)(int)uVar1 + lVar12;
    }
    if ((int)(lVar26 + param_2) < (int)uVar22) {
      lVar13 = uVar22 - (lVar26 + param_2);
      iVar29 = *(int *)(param_1 + 0x20);
      do {
        uVar15 = (uint)lVar12 & 0xff;
        iVar19 = 0;
        pbVar17 = (byte *)(((int)(uint)lVar12 >> 8) * iVar29 + *(int *)(param_1 + 0x40));
        if (0 < iVar29) {
          do {
            pbVar11 = pbVar17 + iVar29;
            iVar19 = iVar19 + 1;
            bVar2 = *pbVar17;
            pbVar17 = pbVar17 + 1;
            *puVar6 = (char)(*pbVar11 * uVar15 + (uint)bVar2 * (0x100 - uVar15) >> 8);
            puVar6 = puVar6 + 1;
            iVar29 = *(int *)(param_1 + 0x20);
          } while (iVar19 < iVar29);
        }
        lVar12 = lVar12 + uVar20;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if ((int)uVar22 < iVar5) {
      lVar13 = param_3 - uVar22;
      iVar29 = *(int *)(param_1 + 0x20);
      pbVar17 = puVar6 + -1;
      do {
        uVar15 = (uint)lVar12 & 0xff;
        iVar19 = (int)(uint)lVar12 >> 8;
        pbVar11 = (byte *)(iVar19 * iVar29 + *(int *)(param_1 + 0x40));
        iVar16 = 0;
        if (iVar19 < (int)(uVar18 - 1)) {
          if (0 < iVar29) {
            do {
              pbVar3 = pbVar11 + iVar29;
              iVar16 = iVar16 + 1;
              bVar2 = *pbVar11;
              pbVar11 = pbVar11 + 1;
              pbVar17[1] = (byte)(*pbVar3 * uVar15 + (uint)bVar2 * (0x100 - uVar15) >> 8);
              pbVar17 = pbVar17 + 1;
              iVar29 = *(int *)(param_1 + 0x20);
            } while (iVar16 < iVar29);
          }
        }
        else if (0 < iVar29) {
          pbVar11 = pbVar11 + -1;
          do {
            pbVar11 = pbVar11 + 1;
            iVar16 = iVar16 + 1;
            pbVar17 = pbVar17 + 1;
            *pbVar17 = *pbVar11;
            iVar29 = *(int *)(param_1 + 0x20);
          } while (iVar16 < iVar29);
        }
        lVar12 = lVar12 + uVar20;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    lVar13 = (longlong)(iVar5 >> 1) + (ulonglong)(iVar5 < 0 && (param_3 & 1) != 0);
    iVar5 = (int)lVar13;
    lVar12 = (longlong)((int)uVar25 / (int)uVar18);
    if (iVar5 < (int)uVar25 / (int)uVar18) {
      lVar12 = lVar13;
    }
    lVar27 = (longlong)(iVar4 >> 1) + (ulonglong)(iVar4 < 0 && (param_2 & 1) != 0);
    iVar4 = (int)lVar27;
    iVar29 = *(int *)(param_1 + 0x20) * uVar18 + *(int *)(param_1 + 0x40);
    puVar6 = (undefined1 *)
             (iVar4 * iVar21 + *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x24) +
             *(int *)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar14 = 0;
    }
    else {
      uVar15 = (((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) - 0x100;
      lVar14 = (longlong)((int)uVar15 >> 1) + (ulonglong)((int)uVar15 < 0 && (uVar15 & 1) != 0);
    }
    lVar24 = (longlong)((int)uVar23 >> 1) + (ulonglong)((int)uVar23 < 0 && (uVar23 & 1) != 0);
    lVar14 = lVar24 + lVar14;
    if (lVar14 < 0) {
      uVar22 = uVar20 - lVar14;
      trapWord(6,uVar20,0);
      iVar19 = (int)uVar22 / (int)uVar1;
      lVar26 = (longlong)iVar19;
      trapWord(5,uVar20 & ~(((uVar22 & 0x7fffffff) << 1 | (uVar22 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      if (iVar4 < (int)(lVar27 + lVar26)) {
        lVar7 = (lVar27 + lVar26) - lVar27;
        do {
          iVar31 = 0;
          iVar16 = iVar21;
          if (0 < iVar21) {
            do {
              puVar8 = (undefined1 *)(iVar31 + iVar29);
              iVar31 = iVar31 + 1;
              *puVar6 = *puVar8;
              puVar6 = puVar6 + 1;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar14 = (longlong)iVar19 * (longlong)(int)uVar1 + lVar14;
    }
    lVar26 = lVar27 + lVar26;
    iVar19 = (int)lVar12;
    if ((int)lVar26 < iVar19) {
      lVar7 = lVar12 - lVar26;
      do {
        uVar15 = (uint)lVar14 & 0x7f;
        iVar31 = 0;
        iVar16 = ((int)(uint)lVar14 >> 7) * iVar21 + iVar29;
        if (0 < iVar21) {
          pbVar17 = (byte *)(iVar16 + iVar21 + -1);
          iVar30 = iVar21;
          do {
            pbVar11 = (byte *)(iVar16 + iVar31);
            iVar31 = iVar31 + 1;
            pbVar17 = pbVar17 + 1;
            *puVar6 = (char)((int)((uint)*pbVar11 * (0x80 - uVar15) + *pbVar17 * uVar15) >> 7);
            puVar6 = puVar6 + 1;
            iVar30 = iVar30 + -1;
          } while (iVar30 != 0);
        }
        lVar7 = lVar7 + -1;
        lVar14 = lVar14 + uVar20;
      } while (lVar7 != 0);
    }
    if (iVar19 < iVar5) {
      lVar7 = lVar13 - lVar12;
      puVar6 = puVar6 + -1;
      do {
        iVar31 = 0;
        iVar16 = iVar21;
        if (0 < iVar21) {
          do {
            puVar8 = (undefined1 *)(((int)lVar14 >> 7) * iVar21 + iVar29 + iVar31);
            iVar31 = iVar31 + 1;
            puVar6 = puVar6 + 1;
            *puVar6 = *puVar8;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
        lVar7 = lVar7 + -1;
        lVar14 = lVar14 + uVar20;
      } while (lVar7 != 0);
    }
    uVar18 = *(int *)(param_1 + 0x20) * uVar18;
    puVar6 = (undefined1 *)
             ((iVar4 + ((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0)) * iVar21 +
              *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x38));
    iVar29 = ((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0) +
             *(int *)(param_1 + 0x40) + uVar18;
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar14 = 0;
    }
    else {
      uVar9 = (((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) - 0x100;
      lVar14 = (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0);
    }
    lVar24 = lVar24 + lVar14;
    if (lVar24 < 0) {
      uVar22 = uVar20 - lVar24;
      trapWord(6,uVar20,0);
      iVar16 = (int)uVar22 / (int)uVar1;
      lVar26 = lVar27 + iVar16;
      trapWord(5,uVar20 & ~(((uVar22 & 0x7fffffff) << 1 | (uVar22 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      if (iVar4 < (int)lVar26) {
        lVar27 = lVar26 - lVar27;
        do {
          iVar31 = 0;
          iVar4 = iVar21;
          if (0 < iVar21) {
            do {
              puVar8 = (undefined1 *)(iVar31 + iVar29);
              iVar31 = iVar31 + 1;
              *puVar6 = *puVar8;
              puVar6 = puVar6 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      lVar24 = (longlong)iVar16 * (longlong)(int)uVar1 + lVar24;
    }
    if ((int)lVar26 < iVar19) {
      lVar26 = lVar12 - lVar26;
      do {
        uVar1 = (uint)lVar24 & 0x7f;
        iVar16 = 0;
        iVar4 = ((int)(uint)lVar24 >> 7) * iVar21 + iVar29;
        if (0 < iVar21) {
          pbVar17 = (byte *)(iVar4 + iVar21 + -1);
          iVar31 = iVar21;
          do {
            pbVar11 = (byte *)(iVar4 + iVar16);
            iVar16 = iVar16 + 1;
            pbVar17 = pbVar17 + 1;
            *puVar6 = (char)((int)((uint)*pbVar11 * (0x80 - uVar1) + *pbVar17 * uVar1) >> 7);
            puVar6 = puVar6 + 1;
            iVar31 = iVar31 + -1;
          } while (iVar31 != 0);
        }
        lVar26 = lVar26 + -1;
        lVar24 = lVar24 + uVar20;
      } while (lVar26 != 0);
    }
    if (iVar19 < iVar5) {
      lVar13 = lVar13 - lVar12;
      puVar6 = puVar6 + -1;
      do {
        iVar5 = 0;
        iVar4 = iVar21;
        if (0 < iVar21) {
          do {
            puVar8 = (undefined1 *)(((int)lVar24 >> 7) * iVar21 + iVar29 + iVar5);
            iVar5 = iVar5 + 1;
            puVar6 = puVar6 + 1;
            *puVar6 = *puVar8;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        lVar13 = lVar13 + -1;
        lVar24 = lVar24 + uVar20;
      } while (lVar13 != 0);
    }
  }
  return;
}

