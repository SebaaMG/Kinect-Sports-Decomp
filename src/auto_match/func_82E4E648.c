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
extern unsigned int iStack00000014;


void fn_82E4E648(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  int iVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  int iVar26;
  uint uVar28;
  longlong lVar27;
  byte *pbVar29;
  int iVar30;
  byte *pbVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  undefined1 *puVar35;
  int iStack00000014;
  undefined1 *puStack00000024;
  undefined1 *puStack0000002c;
  
  iVar32 = *(int *)(param_7 + 0x3924);
  param_6 = param_6 - param_5;
  iVar26 = *(int *)(param_7 + 0x388c);
  uVar28 = iVar32 * param_5;
  uVar33 = iVar32 - iVar26;
  iVar30 = ((int)uVar28 >> 2) + (uint)((int)uVar28 < 0 && (uVar28 & 3) != 0);
  iStack00000014 = *(int *)(param_7 + 0x38bc) * param_5 + *(int *)(param_7 + 0x38c4) + param_1;
  iVar32 = iVar32 * 2 - iVar26;
  iVar34 = ((int)uVar33 >> 1) + (uint)((int)uVar33 < 0 && (uVar33 & 1) != 0);
  puVar22 = (undefined1 *)(*(int *)(param_7 + 0x38a4) + uVar28 + param_2);
  param_3 = *(int *)(param_7 + 0x38a8) + iVar30 + param_3;
  param_4 = *(int *)(param_7 + 0x38ac) + iVar30 + param_4;
  if (*(int *)(param_7 + 0x395c) == 0) {
    if (0 < param_6) {
      iVar26 = *(int *)(param_7 + 0x388c);
      puVar24 = (undefined1 *)(param_3 + -1);
      puVar35 = (undefined1 *)(param_4 + -1);
      lVar27 = (ulonglong)(param_6 - 1U >> 1) + 1;
      do {
        iVar30 = *(int *)(param_7 + 0x3924);
        iVar23 = 0;
        if (0 < iVar26) {
          pbVar31 = (byte *)(iStack00000014 + -2);
          do {
            pbVar29 = pbVar31 + 2;
            iVar23 = iVar23 + 2;
            pbVar12 = pbVar31 + 3;
            pbVar13 = pbVar31 + 7;
            pbVar14 = pbVar31 + 4;
            pbVar15 = pbVar31 + 6;
            pbVar31 = pbVar31 + 8;
            iVar26 = *(int *)((*pbVar29 + 0x81f) * 4 + param_7);
            iVar1 = *(int *)((*pbVar12 + 0x51f) * 4 + param_7);
            iVar2 = *(int *)((*pbVar15 + 0x81f) * 4 + param_7);
            iVar3 = *(int *)((*pbVar31 + 0x21f) * 4 + param_7);
            iVar4 = *(int *)((*pbVar14 + 0x21f) * 4 + param_7);
            iVar5 = *(int *)((*pbVar13 + 0x51f) * 4 + param_7);
            puVar24 = puVar24 + 1;
            *puVar24 = (char)((*(int *)((*pbVar15 + 0x71f) * 4 + param_7) +
                               *(int *)((*pbVar31 + 0x11f) * 4 + param_7) +
                               *(int *)((*pbVar13 + 0x41f) * 4 + param_7) >> 0x10) +
                              (*(int *)((*pbVar29 + 0x71f) * 4 + param_7) +
                               *(int *)((*pbVar12 + 0x41f) * 4 + param_7) +
                               *(int *)((*pbVar14 + 0x11f) * 4 + param_7) >> 0x10) + 1 >> 1);
            puVar35 = puVar35 + 1;
            *puVar35 = (char)((iVar2 + iVar3 + iVar5 >> 0x10) + (iVar26 + iVar1 + iVar4 >> 0x10) + 1
                             >> 1);
            iVar26 = *(int *)(param_7 + 0x388c);
          } while (iVar23 < iVar26);
        }
        iVar23 = 0;
        if (0 < iVar26) {
          pbVar31 = (byte *)(iStack00000014 + -4);
          puVar25 = puVar22 + iVar30 + -1;
          pbVar29 = (byte *)(*(int *)(param_7 + 0x38bc) + iStack00000014 + -4);
          do {
            iVar23 = iVar23 + 2;
            *puVar22 = (char)((uint)(*(int *)((pbVar31[4] + 0x61f) * 4 + param_7) +
                                     *(int *)((pbVar31[5] + 799) * 4 + param_7) +
                                    *(int *)((pbVar31[6] + 0x1f) * 4 + param_7)) >> 0x10);
            pbVar12 = pbVar31 + 9;
            pbVar13 = pbVar31 + 10;
            pbVar31 = pbVar31 + 8;
            puVar22[1] = (char)((uint)(*(int *)((*pbVar31 + 0x61f) * 4 + param_7) +
                                       *(int *)((*pbVar12 + 799) * 4 + param_7) +
                                      *(int *)((*pbVar13 + 0x1f) * 4 + param_7)) >> 0x10);
            puVar22 = puVar22 + 2;
            puVar25[1] = (char)((uint)(*(int *)((pbVar29[4] + 0x61f) * 4 + param_7) +
                                       *(int *)((pbVar29[5] + 799) * 4 + param_7) +
                                      *(int *)((pbVar29[6] + 0x1f) * 4 + param_7)) >> 0x10);
            pbVar12 = pbVar29 + 9;
            pbVar13 = pbVar29 + 10;
            pbVar29 = pbVar29 + 8;
            puVar25 = puVar25 + 2;
            *puVar25 = (char)((uint)(*(int *)((*pbVar29 + 0x61f) * 4 + param_7) +
                                     *(int *)((*pbVar12 + 799) * 4 + param_7) +
                                    *(int *)((*pbVar13 + 0x1f) * 4 + param_7)) >> 0x10);
            iVar26 = *(int *)(param_7 + 0x388c);
          } while (iVar23 < iVar26);
        }
        puVar22 = puVar22 + iVar32;
        puVar24 = puVar24 + iVar34;
        iStack00000014 = *(int *)(param_7 + 0x38c0) + iStack00000014;
        puVar35 = puVar35 + iVar34;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
  }
  else if (0 < param_6) {
    puStack00000024 = (undefined1 *)(param_3 + -1);
    puStack0000002c = (undefined1 *)(param_4 + -1);
    lVar27 = (ulonglong)(param_6 - 1U >> 1) + 1;
    do {
      iVar30 = *(int *)(param_7 + 0x3924);
      iVar23 = 0;
      if (0 < iVar26) {
        pbVar31 = (byte *)(iStack00000014 + -2);
        pbVar29 = (byte *)(*(int *)(param_7 + 0x38bc) + iStack00000014 + -2);
        do {
          pbVar12 = pbVar31 + 2;
          pbVar13 = pbVar29 + 6;
          pbVar14 = pbVar29 + 2;
          pbVar15 = pbVar31 + 3;
          pbVar16 = pbVar31 + 4;
          pbVar17 = pbVar29 + 3;
          pbVar18 = pbVar31 + 6;
          pbVar19 = pbVar29 + 7;
          pbVar20 = pbVar29 + 4;
          iVar26 = *(int *)((*pbVar12 + 0x81f) * 4 + param_7);
          iVar1 = *(int *)((*pbVar13 + 0x81f) * 4 + param_7);
          pbVar21 = pbVar31 + 7;
          pbVar31 = pbVar31 + 8;
          iVar2 = *(int *)((*pbVar14 + 0x81f) * 4 + param_7);
          pbVar29 = pbVar29 + 8;
          iVar3 = *(int *)((*pbVar15 + 0x51f) * 4 + param_7);
          iVar4 = *(int *)((*pbVar18 + 0x81f) * 4 + param_7);
          iVar5 = *(int *)((*pbVar17 + 0x51f) * 4 + param_7);
          iVar6 = *(int *)((*pbVar31 + 0x21f) * 4 + param_7);
          iVar7 = *(int *)((*pbVar19 + 0x51f) * 4 + param_7);
          iVar8 = *(int *)((*pbVar21 + 0x51f) * 4 + param_7);
          iVar9 = *(int *)((*pbVar20 + 0x21f) * 4 + param_7);
          iVar10 = *(int *)((*pbVar16 + 0x21f) * 4 + param_7);
          iVar11 = *(int *)((*pbVar29 + 0x21f) * 4 + param_7);
          iVar23 = iVar23 + 2;
          puStack00000024 = puStack00000024 + 1;
          *puStack00000024 =
               (char)((*(int *)((*pbVar12 + 0x71f) * 4 + param_7) +
                       *(int *)((*pbVar15 + 0x41f) * 4 + param_7) +
                       *(int *)((*pbVar16 + 0x11f) * 4 + param_7) >> 0x10) +
                      (*(int *)((*pbVar13 + 0x71f) * 4 + param_7) +
                       *(int *)((*pbVar19 + 0x41f) * 4 + param_7) +
                       *(int *)((*pbVar29 + 0x11f) * 4 + param_7) >> 0x10) +
                      (*(int *)((*pbVar14 + 0x71f) * 4 + param_7) +
                       *(int *)((*pbVar17 + 0x41f) * 4 + param_7) +
                       *(int *)((*pbVar20 + 0x11f) * 4 + param_7) >> 0x10) +
                      (*(int *)((*pbVar18 + 0x71f) * 4 + param_7) +
                       *(int *)((*pbVar31 + 0x11f) * 4 + param_7) +
                       *(int *)((*pbVar21 + 0x41f) * 4 + param_7) >> 0x10) + 2 >> 2);
          puStack0000002c = puStack0000002c + 1;
          *puStack0000002c =
               (char)((iVar1 + iVar7 + iVar11 >> 0x10) + (iVar2 + iVar5 + iVar9 >> 0x10) +
                      (iVar4 + iVar6 + iVar8 >> 0x10) + (iVar26 + iVar3 + iVar10 >> 0x10) + 2 >> 2);
          iVar26 = *(int *)(param_7 + 0x388c);
        } while (iVar23 < iVar26);
      }
      iVar23 = 0;
      if (0 < iVar26) {
        pbVar31 = (byte *)(iStack00000014 + -3);
        pbVar29 = (byte *)(*(int *)(param_7 + 0x38bc) + iStack00000014 + -4);
        puVar24 = puVar22 + iVar30 + -1;
        do {
          iVar23 = iVar23 + 2;
          *puVar22 = (char)((uint)(*(int *)((pbVar31[3] + 0x61f) * 4 + param_7) +
                                   *(int *)((pbVar31[4] + 799) * 4 + param_7) +
                                  *(int *)((pbVar31[5] + 0x1f) * 4 + param_7)) >> 0x10);
          pbVar12 = pbVar31 + 7;
          pbVar13 = pbVar31 + 9;
          pbVar31 = pbVar31 + 8;
          puVar22[1] = (char)((uint)(*(int *)((*pbVar12 + 0x61f) * 4 + param_7) +
                                     *(int *)((*pbVar31 + 799) * 4 + param_7) +
                                    *(int *)((*pbVar13 + 0x1f) * 4 + param_7)) >> 0x10);
          puVar22 = puVar22 + 2;
          puVar24[1] = (char)((uint)(*(int *)((pbVar29[4] + 0x61f) * 4 + param_7) +
                                     *(int *)((pbVar29[5] + 799) * 4 + param_7) +
                                    *(int *)((pbVar29[6] + 0x1f) * 4 + param_7)) >> 0x10);
          pbVar12 = pbVar29 + 9;
          pbVar13 = pbVar29 + 10;
          pbVar29 = pbVar29 + 8;
          puVar24 = puVar24 + 2;
          *puVar24 = (char)((uint)(*(int *)((*pbVar29 + 0x61f) * 4 + param_7) +
                                   *(int *)((*pbVar12 + 799) * 4 + param_7) +
                                  *(int *)((*pbVar13 + 0x1f) * 4 + param_7)) >> 0x10);
          iVar26 = *(int *)(param_7 + 0x388c);
        } while (iVar23 < iVar26);
      }
      puStack00000024 = puStack00000024 + iVar34;
      puStack0000002c = puStack0000002c + iVar34;
      iStack00000014 = *(int *)(param_7 + 0x38c0) + iStack00000014;
      puVar22 = puVar22 + iVar32;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  return;
}

