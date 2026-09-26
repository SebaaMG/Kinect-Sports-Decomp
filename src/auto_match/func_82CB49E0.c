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
extern unsigned int iStack_148;
extern unsigned int uStack_101;
extern unsigned int uStack_150;


void fn_82CB49E0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  int iVar31;
  int iVar32;
  byte *pbVar33;
  int iVar34;
  int iVar36;
  undefined1 *puVar37;
  byte *pbVar38;
  byte *pbVar39;
  ulonglong uVar35;
  int iVar40;
  undefined1 *puVar41;
  int iVar42;
  longlong lVar43;
  uint uStack_150;
  int iStack_148;
  undefined1 uStack_101;
  byte abStack_100 [256];
  
  iVar36 = *(int *)(param_1 + 0x100);
  if (param_6 == 0) {
    param_3 = param_3 + param_4;
    if (param_5 == 0) {
      param_3 = param_3 + 1;
      iVar32 = param_3 - param_4;
      iStack_148 = iVar32 - param_4;
      puVar41 = &uStack_101;
      pbVar33 = (byte *)(iStack_148 + 1);
      lVar43 = 0xb;
      if (param_7 == 0) {
        do {
          bVar22 = *pbVar33;
          bVar1 = pbVar33[-1];
          bVar2 = pbVar33[1];
          bVar3 = pbVar33[2];
          bVar4 = pbVar33[3];
          bVar5 = pbVar33[4];
          bVar6 = pbVar33[5];
          bVar7 = pbVar33[6];
          bVar8 = pbVar33[7];
          uVar23 = *(undefined1 *)
                    (((int)(((((uint)bVar1 + (uint)bVar22) * 9 - (uint)bVar2) - (uint)pbVar33[-2]) +
                           8) >> 4) + iVar36);
          puVar41[1] = *(undefined1 *)
                        (((int)(((((uint)bVar1 + (uint)pbVar33[-2]) * 9 - (uint)pbVar33[-3]) -
                                (uint)bVar22) + 8) >> 4) + iVar36);
          uVar24 = *(undefined1 *)
                    (((int)(((((uint)bVar2 + (uint)bVar22) * 9 - (uint)bVar1) - (uint)bVar3) + 8) >>
                     4) + iVar36);
          uVar25 = *(undefined1 *)
                    (((int)(((((uint)bVar2 + (uint)bVar3) * 9 - (uint)bVar22) - (uint)bVar4) + 8) >>
                     4) + iVar36);
          puVar41[2] = uVar23;
          uVar23 = *(undefined1 *)
                    (((int)(((((uint)bVar4 + (uint)bVar3) * 9 - (uint)bVar2) - (uint)bVar5) + 8) >>
                     4) + iVar36);
          uVar26 = *(undefined1 *)
                    (((int)(((((uint)bVar5 + (uint)bVar4) * 9 - (uint)bVar6) - (uint)bVar3) + 8) >>
                     4) + iVar36);
          puVar41[3] = uVar24;
          uVar24 = *(undefined1 *)
                    (((int)(((((uint)bVar6 + (uint)bVar5) * 9 - (uint)bVar7) - (uint)bVar4) + 8) >>
                     4) + iVar36);
          puVar41[4] = uVar25;
          puVar41[5] = uVar23;
          puVar41[6] = uVar26;
          puVar41[7] = uVar24;
          pbVar33 = pbVar33 + param_4;
          puVar41 = puVar41 + 8;
          *puVar41 = *(undefined1 *)
                      (((int)(((((uint)bVar7 + (uint)bVar6) * 9 - (uint)bVar8) - (uint)bVar5) + 8)
                       >> 4) + iVar36);
          lVar43 = lVar43 + -1;
        } while (lVar43 != 0);
        puVar41 = (undefined1 *)(param_2 + 2);
        lVar43 = 8;
        pbVar33 = abStack_100;
        do {
          bVar22 = pbVar33[9];
          bVar1 = pbVar33[0x11];
          bVar2 = pbVar33[0x19];
          bVar3 = pbVar33[1];
          bVar4 = pbVar33[0x12];
          bVar5 = pbVar33[10];
          bVar6 = pbVar33[0x1a];
          bVar7 = pbVar33[0x1b];
          bVar8 = pbVar33[0x13];
          bVar9 = pbVar33[0xb];
          bVar10 = pbVar33[3];
          bVar11 = pbVar33[0x14];
          bVar12 = pbVar33[0xc];
          bVar13 = pbVar33[2];
          bVar14 = pbVar33[0xd];
          bVar15 = pbVar33[0x1c];
          bVar16 = pbVar33[0x15];
          bVar17 = pbVar33[4];
          bVar18 = pbVar33[0x1d];
          bVar19 = pbVar33[5];
          puVar41[-2] = *(undefined1 *)
                         (((int)(((((uint)pbVar33[8] + (uint)pbVar33[0x10]) * 9 -
                                  (uint)pbVar33[0x18]) - (uint)*pbVar33) + 8) >> 4) + iVar36);
          bVar20 = pbVar33[0x16];
          bVar21 = pbVar33[0xe];
          puVar41[-1] = *(undefined1 *)
                         (((int)(((((uint)bVar1 + (uint)bVar22) * 9 - (uint)bVar2) - (uint)bVar3) +
                                8) >> 4) + iVar36);
          *puVar41 = *(undefined1 *)
                      (((int)(((((uint)bVar4 + (uint)bVar5) * 9 - (uint)bVar6) - (uint)bVar13) + 8)
                       >> 4) + iVar36);
          puVar41[1] = *(undefined1 *)
                        (((int)(((((uint)bVar8 + (uint)bVar9) * 9 - (uint)bVar7) - (uint)bVar10) + 8
                               ) >> 4) + iVar36);
          puVar41[2] = *(undefined1 *)
                        (((int)(((((uint)bVar11 + (uint)bVar12) * 9 - (uint)bVar15) - (uint)bVar17)
                               + 8) >> 4) + iVar36);
          puVar41[3] = *(undefined1 *)
                        (((int)(((((uint)bVar16 + (uint)bVar14) * 9 - (uint)bVar18) - (uint)bVar19)
                               + 8) >> 4) + iVar36);
          bVar22 = pbVar33[0xf];
          bVar1 = pbVar33[0x17];
          bVar2 = pbVar33[0x1f];
          bVar3 = pbVar33[7];
          puVar41[4] = *(undefined1 *)
                        (((int)(((((uint)bVar20 + (uint)bVar21) * 9 - (uint)pbVar33[0x1e]) -
                                (uint)pbVar33[6]) + 8) >> 4) + iVar36);
          puVar41[5] = *(undefined1 *)
                        (((int)(((((uint)bVar1 + (uint)bVar22) * 9 - (uint)bVar2) - (uint)bVar3) + 8
                               ) >> 4) + iVar36);
          puVar41 = puVar41 + param_4;
          lVar43 = lVar43 + -1;
          pbVar33 = pbVar33 + 8;
        } while (lVar43 != 0);
      }
      else {
        do {
          bVar22 = *pbVar33;
          bVar1 = pbVar33[-1];
          bVar2 = pbVar33[-2];
          bVar3 = pbVar33[1];
          bVar4 = pbVar33[2];
          bVar5 = pbVar33[3];
          bVar6 = pbVar33[4];
          bVar7 = pbVar33[5];
          bVar8 = pbVar33[6];
          bVar9 = pbVar33[7];
          puVar41[1] = *(undefined1 *)
                        (((int)(((((uint)bVar1 + (uint)bVar2) * 9 - (uint)pbVar33[-3]) -
                                (uint)bVar22) + 8) >> 4) + iVar36);
          uVar23 = *(undefined1 *)
                    (((int)(((((uint)bVar22 + (uint)bVar3) * 9 - (uint)bVar4) - (uint)bVar1) + 8) >>
                     4) + iVar36);
          uVar24 = *(undefined1 *)
                    (((int)(((((uint)bVar4 + (uint)bVar3) * 9 - (uint)bVar22) - (uint)bVar5) + 8) >>
                     4) + iVar36);
          uVar25 = *(undefined1 *)
                    (((int)(((((uint)bVar5 + (uint)bVar4) * 9 - (uint)bVar6) - (uint)bVar3) + 8) >>
                     4) + iVar36);
          puVar41[2] = *(undefined1 *)
                        (((int)(((((uint)bVar22 + (uint)bVar1) * 9 - (uint)bVar3) - (uint)bVar2) + 8
                               ) >> 4) + iVar36);
          uVar26 = *(undefined1 *)
                    (((int)(((((uint)bVar6 + (uint)bVar5) * 9 - (uint)bVar7) - (uint)bVar4) + 8) >>
                     4) + iVar36);
          puVar41[3] = uVar23;
          uVar23 = *(undefined1 *)
                    (((int)(((((uint)bVar7 + (uint)bVar6) * 9 - (uint)bVar8) - (uint)bVar5) + 8) >>
                     4) + iVar36);
          puVar41[4] = uVar24;
          puVar41[5] = uVar25;
          puVar41[6] = uVar26;
          puVar41[7] = uVar23;
          pbVar33 = pbVar33 + param_4;
          puVar41 = puVar41 + 8;
          *puVar41 = *(undefined1 *)
                      (((int)(((((uint)bVar8 + (uint)bVar7) * 9 - (uint)bVar9) - (uint)bVar6) + 8)
                       >> 4) + iVar36);
          lVar43 = lVar43 + -1;
        } while (lVar43 != 0);
        iVar31 = iVar32 + param_4 + 2;
        uStack_150 = 8;
        iVar42 = (iVar32 - param_3) + param_2 + param_4 + 1;
        pbVar33 = abStack_100 + 8;
        do {
          lVar43 = 2;
          iVar40 = 0;
          do {
            iVar34 = iVar40 + iVar32;
            bVar22 = pbVar33[iVar40 + 9];
            bVar1 = pbVar33[iVar40 + 1];
            bVar2 = pbVar33[iVar40 + -6];
            bVar3 = pbVar33[iVar40 + -7];
            bVar4 = pbVar33[iVar40 + 0x11];
            bVar5 = pbVar33[iVar40 + 0x12];
            bVar6 = pbVar33[iVar40 + 2];
            bVar7 = pbVar33[iVar40 + 10];
            *(undefined1 *)((iVar42 - iVar32) + -1 + iVar34) =
                 *(undefined1 *)
                  (((int)((uint)*(byte *)(((int)(((((uint)(pbVar33 + 8)[iVar40] +
                                                   (uint)pbVar33[iVar40]) * 9 -
                                                  (uint)pbVar33[iVar40 + 0x10]) -
                                                 (uint)pbVar33[iVar34 + (-8 - iVar32)]) + 8) >> 4) +
                                         iVar36) +
                          (uint)*(byte *)(((int)(((((uint)*(byte *)((iVar31 - iVar32) + -2 + iVar34)
                                                   + (uint)*(byte *)(iVar40 + iVar32)) * 9 -
                                                  (uint)*(byte *)((iStack_148 - iVar32) + iVar34)) -
                                                 (uint)*(byte *)((iVar31 - iVar32) + param_4 + -2 +
                                                                iVar34)) + 8) >> 4) + iVar36) + 1)
                   >> 1) + iVar36);
            bVar8 = pbVar33[iVar40 + -5];
            *(undefined1 *)(iVar40 + iVar42) =
                 *(undefined1 *)
                  (((int)((uint)*(byte *)(((int)(((((uint)*(byte *)((-1 - param_4) + iVar31 + iVar40
                                                                   ) +
                                                   (uint)*(byte *)((param_3 - param_2) + iVar42 +
                                                                  iVar40)) * 9 -
                                                  (uint)*(byte *)(param_4 + -1 + iVar31 + iVar40)) -
                                                 (uint)*(byte *)(iVar40 + iStack_148 + 1)) + 8) >> 4
                                          ) + iVar36) +
                          (uint)*(byte *)(((int)(((((uint)bVar22 + (uint)bVar1) * 9 - (uint)bVar3) -
                                                 (uint)bVar4) + 8) >> 4) + iVar36) + 1) >> 1) +
                  iVar36);
            bVar22 = pbVar33[iVar40 + 0xb];
            bVar1 = pbVar33[iVar40 + 3];
            bVar3 = pbVar33[iVar40 + 0x13];
            *(undefined1 *)(iVar42 + 1 + iVar40) =
                 *(undefined1 *)
                  (((int)((uint)*(byte *)(((int)(((((uint)*(byte *)(iVar40 + iVar31) +
                                                   (uint)*(byte *)(iVar40 + iVar32 + 2)) * 9 -
                                                  (uint)*(byte *)(iVar31 + param_4 + iVar40)) -
                                                 (uint)*(byte *)(iVar40 + iStack_148 + 2)) + 8) >> 4
                                          ) + iVar36) +
                          (uint)*(byte *)(((int)(((((uint)bVar6 + (uint)bVar7) * 9 - (uint)bVar2) -
                                                 (uint)bVar5) + 8) >> 4) + iVar36) + 1) >> 1) +
                  iVar36);
            *(undefined1 *)(iVar42 + 2 + iVar40) =
                 *(undefined1 *)
                  (((int)((uint)*(byte *)(((int)(((((uint)bVar1 + (uint)bVar22) * 9 - (uint)bVar8) -
                                                 (uint)bVar3) + 8) >> 4) + iVar36) +
                          (uint)*(byte *)(((int)(((((uint)*(byte *)((1 - param_4) + iVar31 + iVar40)
                                                   + (uint)*(byte *)(iVar31 + 1 + iVar40)) * 9 -
                                                  (uint)*(byte *)(param_4 + 1 + iVar31 + iVar40)) -
                                                 (uint)*(byte *)(iStack_148 + 3 + iVar40)) + 8) >> 4
                                          ) + iVar36) + 1) >> 1) + iVar36);
            iVar40 = iVar40 + 4;
            lVar43 = lVar43 + -1;
          } while (lVar43 != 0);
          uVar35 = (ulonglong)uStack_150;
          iStack_148 = iStack_148 + param_4;
          iVar32 = iVar32 + param_4;
          uStack_150 = (uint)(uVar35 - 1);
          iVar31 = iVar31 + param_4;
          iVar42 = iVar42 + param_4;
          pbVar33 = pbVar33 + 8;
        } while (uVar35 - 1 != 0);
      }
    }
    else {
      iVar32 = param_3 - param_4;
      pbVar33 = (byte *)(iVar32 - param_4);
      if (param_7 == 0) {
        puVar41 = (undefined1 *)(param_2 + 2);
        pbVar38 = (byte *)(param_3 + param_4 + 2);
        pbVar39 = (byte *)(iVar32 + 2);
        lVar43 = 8;
        do {
          puVar41[-2] = *(undefined1 *)
                         (((int)(((((uint)pbVar39[param_4 + -2] + (uint)pbVar39[-2]) * 9 -
                                  (uint)pbVar38[-2]) - (uint)*pbVar33) + 8) >> 4) + iVar36);
          puVar41[-1] = *(undefined1 *)
                         (((int)(((((uint)pbVar39[param_4 + -1] + (uint)pbVar39[-1]) * 9 -
                                  (uint)pbVar38[-1]) - (uint)pbVar33[1]) + 8) >> 4) + iVar36);
          *puVar41 = *(undefined1 *)
                      (((int)(((((uint)pbVar39[param_4] + (uint)*pbVar39) * 9 - (uint)pbVar33[2]) -
                              (uint)*pbVar38) + 8) >> 4) + iVar36);
          puVar41[1] = *(undefined1 *)
                        (((int)(((((uint)pbVar39[param_4 + 1] + (uint)pbVar39[1]) * 9 -
                                 (uint)pbVar38[1]) - (uint)pbVar33[3]) + 8) >> 4) + iVar36);
          puVar41[2] = *(undefined1 *)
                        (((int)(((((uint)pbVar39[param_4 + 2] + (uint)pbVar39[2]) * 9 -
                                 (uint)pbVar38[2]) - (uint)pbVar33[4]) + 8) >> 4) + iVar36);
          puVar41[3] = *(undefined1 *)
                        (((int)(((((uint)pbVar39[param_4 + 3] + (uint)pbVar39[3]) * 9 -
                                 (uint)pbVar38[3]) - (uint)pbVar33[5]) + 8) >> 4) + iVar36);
          puVar41[4] = *(undefined1 *)
                        (((int)(((((uint)pbVar39[param_4 + 4] + (uint)pbVar39[4]) * 9 -
                                 (uint)pbVar38[4]) - (uint)pbVar33[6]) + 8) >> 4) + iVar36);
          pbVar27 = pbVar33 + 7;
          pbVar33 = pbVar33 + param_4;
          pbVar28 = pbVar39 + 5;
          pbVar29 = pbVar39 + param_4 + 5;
          pbVar39 = pbVar39 + param_4;
          pbVar30 = pbVar38 + 5;
          pbVar38 = pbVar38 + param_4;
          puVar41[5] = *(undefined1 *)
                        (((int)(((((uint)*pbVar29 + (uint)*pbVar28) * 9 - (uint)*pbVar30) -
                                (uint)*pbVar27) + 8) >> 4) + iVar36);
          puVar41 = puVar41 + param_4;
          lVar43 = lVar43 + -1;
        } while (lVar43 != 0);
      }
      else {
        pbVar38 = pbVar33 + 2;
        puVar41 = &uStack_101;
        lVar43 = 0xb;
        do {
          bVar22 = *pbVar38;
          bVar1 = pbVar38[-1];
          bVar2 = pbVar38[-2];
          bVar3 = pbVar38[1];
          bVar4 = pbVar38[2];
          bVar5 = pbVar38[3];
          bVar6 = pbVar38[4];
          bVar7 = pbVar38[5];
          bVar8 = pbVar38[6];
          bVar9 = pbVar38[7];
          puVar41[1] = *(undefined1 *)
                        (((int)(((((uint)bVar2 + (uint)bVar1) * 9 - (uint)pbVar38[-3]) -
                                (uint)bVar22) + 8) >> 4) + iVar36);
          uVar23 = *(undefined1 *)
                    (((int)(((((uint)bVar22 + (uint)bVar3) * 9 - (uint)bVar1) - (uint)bVar4) + 8) >>
                     4) + iVar36);
          uVar24 = *(undefined1 *)
                    (((int)(((((uint)bVar4 + (uint)bVar3) * 9 - (uint)bVar22) - (uint)bVar5) + 8) >>
                     4) + iVar36);
          puVar41[2] = *(undefined1 *)
                        (((int)(((((uint)bVar1 + (uint)bVar22) * 9 - (uint)bVar2) - (uint)bVar3) + 8
                               ) >> 4) + iVar36);
          uVar25 = *(undefined1 *)
                    (((int)(((((uint)bVar5 + (uint)bVar4) * 9 - (uint)bVar6) - (uint)bVar3) + 8) >>
                     4) + iVar36);
          puVar41[3] = uVar23;
          uVar23 = *(undefined1 *)
                    (((int)(((((uint)bVar6 + (uint)bVar5) * 9 - (uint)bVar7) - (uint)bVar4) + 8) >>
                     4) + iVar36);
          puVar41[4] = uVar24;
          uVar24 = *(undefined1 *)
                    (((int)(((((uint)bVar7 + (uint)bVar6) * 9 - (uint)bVar8) - (uint)bVar5) + 8) >>
                     4) + iVar36);
          puVar41[5] = uVar25;
          puVar41[6] = uVar23;
          puVar41[7] = uVar24;
          pbVar38 = pbVar38 + param_4;
          puVar41 = puVar41 + 8;
          *puVar41 = *(undefined1 *)
                      (((int)(((((uint)bVar8 + (uint)bVar7) * 9 - (uint)bVar9) - (uint)bVar6) + 8)
                       >> 4) + iVar36);
          lVar43 = lVar43 + -1;
        } while (lVar43 != 0);
        iVar31 = iVar32 + param_4 + 2;
        uStack_150 = 8;
        iVar42 = (iVar32 - param_3) + param_2 + param_4 + 1;
        pbVar38 = abStack_100 + 8;
        do {
          lVar43 = 2;
          iVar40 = 0;
          do {
            iVar34 = iVar40 + iVar32;
            bVar22 = pbVar38[iVar40 + 1];
            bVar1 = pbVar38[iVar40 + 9];
            bVar2 = pbVar38[iVar40 + -6];
            bVar3 = pbVar38[iVar40 + -7];
            bVar4 = pbVar38[iVar40 + 0x11];
            bVar5 = pbVar38[iVar40 + 10];
            bVar6 = pbVar38[iVar40 + 2];
            bVar7 = pbVar38[iVar40 + 0x12];
            *(undefined1 *)((iVar42 - iVar32) + -1 + iVar34) =
                 *(undefined1 *)
                  (((int)((uint)*(byte *)(((int)(((((uint)(pbVar38 + 8)[iVar40] +
                                                   (uint)pbVar38[iVar40]) * 9 -
                                                  (uint)pbVar38[iVar40 + 0x10]) -
                                                 (uint)pbVar38[iVar34 + (-8 - iVar32)]) + 8) >> 4) +
                                         iVar36) +
                          (uint)*(byte *)(((int)(((((uint)*(byte *)((iVar31 - iVar32) + -2 + iVar34)
                                                   + (uint)*(byte *)(iVar40 + iVar32)) * 9 -
                                                  (uint)pbVar33[iVar34 - iVar32]) -
                                                 (uint)*(byte *)((iVar31 - iVar32) + param_4 + -2 +
                                                                iVar34)) + 8) >> 4) + iVar36) + 1)
                   >> 1) + iVar36);
            *(undefined1 *)(iVar42 + iVar40) =
                 *(undefined1 *)
                  (((int)((uint)*(byte *)(((int)(((((uint)*(byte *)((-1 - param_4) + iVar31 + iVar40
                                                                   ) +
                                                   (uint)*(byte *)((param_3 - param_2) + iVar42 +
                                                                  iVar40)) * 9 -
                                                  (uint)*(byte *)(param_4 + -1 + iVar31 + iVar40)) -
                                                 (uint)pbVar33[iVar40 + 1]) + 8) >> 4) + iVar36) +
                          (uint)*(byte *)(((int)(((((uint)bVar22 + (uint)bVar1) * 9 - (uint)bVar3) -
                                                 (uint)bVar4) + 8) >> 4) + iVar36) + 1) >> 1) +
                  iVar36);
            bVar22 = pbVar38[iVar40 + 0xb];
            bVar1 = pbVar38[iVar40 + -5];
            bVar3 = pbVar38[iVar40 + 3];
            bVar4 = pbVar38[iVar40 + 0x13];
            *(undefined1 *)(iVar42 + 1 + iVar40) =
                 *(undefined1 *)
                  (((int)((uint)*(byte *)(((int)(((((uint)*(byte *)(iVar31 + iVar40) +
                                                   (uint)*(byte *)(iVar32 + 2 + iVar40)) * 9 -
                                                  (uint)*(byte *)(iVar31 + param_4 + iVar40)) -
                                                 (uint)pbVar33[iVar40 + 2]) + 8) >> 4) + iVar36) +
                          (uint)*(byte *)(((int)(((((uint)bVar6 + (uint)bVar5) * 9 - (uint)bVar2) -
                                                 (uint)bVar7) + 8) >> 4) + iVar36) + 1) >> 1) +
                  iVar36);
            *(undefined1 *)(iVar42 + 2 + iVar40) =
                 *(undefined1 *)
                  (((int)((uint)*(byte *)(((int)(((((uint)*(byte *)((1 - param_4) + iVar31 + iVar40)
                                                   + (uint)*(byte *)(iVar31 + 1 + iVar40)) * 9 -
                                                  (uint)*(byte *)(param_4 + 1 + iVar31 + iVar40)) -
                                                 (uint)pbVar33[iVar40 + 3]) + 8) >> 4) + iVar36) +
                          (uint)*(byte *)(((int)(((((uint)bVar3 + (uint)bVar22) * 9 - (uint)bVar1) -
                                                 (uint)bVar4) + 8) >> 4) + iVar36) + 1) >> 1) +
                  iVar36);
            iVar40 = iVar40 + 4;
            lVar43 = lVar43 + -1;
          } while (lVar43 != 0);
          uVar35 = (ulonglong)uStack_150;
          pbVar33 = pbVar33 + param_4;
          iVar32 = iVar32 + param_4;
          uStack_150 = (uint)(uVar35 - 1);
          iVar31 = iVar31 + param_4;
          iVar42 = iVar42 + param_4;
          pbVar38 = pbVar38 + 8;
        } while (uVar35 - 1 != 0);
      }
    }
  }
  else if (param_5 == 0) {
    pbVar38 = (byte *)(param_3 + 1);
    iVar32 = param_3 - param_2;
    pbVar33 = pbVar38 + (param_2 - param_3) + 1;
    lVar43 = 8;
    if (param_7 == 0) {
      do {
        pbVar33[-2] = *(byte *)(((int)(((((uint)*pbVar38 + (uint)pbVar38[-1]) * 9 -
                                        (uint)pbVar38[-2]) - (uint)pbVar33[iVar32]) + 8) >> 4) +
                               iVar36);
        pbVar33[-1] = *(byte *)(((int)(((((uint)pbVar33[iVar32] + (uint)*pbVar38) * 9 -
                                        (uint)pbVar38[2]) - (uint)pbVar38[-1]) + 8) >> 4) + iVar36);
        *pbVar33 = *(byte *)(((int)(((((uint)pbVar38[2] + (uint)pbVar33[iVar32]) * 9 -
                                     (uint)pbVar38[3]) - (uint)*pbVar38) + 8) >> 4) + iVar36);
        pbVar33[1] = *(byte *)(((int)(((((uint)pbVar38[3] + (uint)pbVar38[2]) * 9 - (uint)pbVar38[4]
                                       ) - (uint)pbVar33[iVar32]) + 8) >> 4) + iVar36);
        pbVar33[2] = *(byte *)(((int)(((((uint)pbVar38[4] + (uint)pbVar38[3]) * 9 - (uint)pbVar38[5]
                                       ) - (uint)pbVar38[2]) + 8) >> 4) + iVar36);
        pbVar33[3] = *(byte *)(((int)(((((uint)pbVar38[5] + (uint)pbVar38[4]) * 9 - (uint)pbVar38[6]
                                       ) - (uint)pbVar38[3]) + 8) >> 4) + iVar36);
        pbVar33[4] = *(byte *)(((int)(((((uint)pbVar38[6] + (uint)pbVar38[5]) * 9 - (uint)pbVar38[7]
                                       ) - (uint)pbVar38[4]) + 8) >> 4) + iVar36);
        pbVar39 = pbVar38 + 8;
        pbVar27 = pbVar38 + 5;
        pbVar28 = pbVar38 + 7;
        pbVar29 = pbVar38 + 6;
        pbVar38 = pbVar38 + param_4;
        pbVar33[5] = *(byte *)(((int)(((((uint)*pbVar28 + (uint)*pbVar29) * 9 - (uint)*pbVar39) -
                                      (uint)*pbVar27) + 8) >> 4) + iVar36);
        pbVar33 = pbVar33 + param_4;
        lVar43 = lVar43 + -1;
      } while (lVar43 != 0);
    }
    else {
      do {
        bVar22 = *(byte *)(((int)(((((uint)*pbVar38 + (uint)pbVar38[-1]) * 9 - (uint)pbVar38[-2]) -
                                  (uint)pbVar33[iVar32]) + 8) >> 4) + iVar36);
        pbVar33[-2] = bVar22;
        pbVar33[-2] = *(byte *)(((int)((uint)bVar22 + (uint)*pbVar38 + 1) >> 1) + iVar36);
        bVar22 = *(byte *)(((int)(((((uint)pbVar33[iVar32] + (uint)*pbVar38) * 9 - (uint)pbVar38[2])
                                  - (uint)pbVar38[-1]) + 8) >> 4) + iVar36);
        pbVar33[-1] = bVar22;
        pbVar33[-1] = *(byte *)(((int)((uint)bVar22 + (uint)pbVar33[iVar32] + 1) >> 1) + iVar36);
        *pbVar33 = *(byte *)(((int)(((((uint)pbVar38[2] + (uint)pbVar33[iVar32]) * 9 -
                                     (uint)pbVar38[3]) - (uint)*pbVar38) + 8) >> 4) + iVar36);
        *pbVar33 = *(byte *)(((int)((uint)pbVar38[2] + (uint)*pbVar33 + 1) >> 1) + iVar36);
        bVar22 = *(byte *)(((int)(((((uint)pbVar38[3] + (uint)pbVar38[2]) * 9 - (uint)pbVar38[4]) -
                                  (uint)pbVar33[iVar32]) + 8) >> 4) + iVar36);
        pbVar33[1] = bVar22;
        pbVar33[1] = *(byte *)(((int)((uint)bVar22 + (uint)pbVar38[3] + 1) >> 1) + iVar36);
        bVar22 = *(byte *)(((int)(((((uint)pbVar38[4] + (uint)pbVar38[3]) * 9 - (uint)pbVar38[5]) -
                                  (uint)pbVar38[2]) + 8) >> 4) + iVar36);
        pbVar33[2] = bVar22;
        pbVar33[2] = *(byte *)(((int)((uint)bVar22 + (uint)pbVar38[4] + 1) >> 1) + iVar36);
        bVar22 = *(byte *)(((int)(((((uint)pbVar38[5] + (uint)pbVar38[4]) * 9 - (uint)pbVar38[6]) -
                                  (uint)pbVar38[3]) + 8) >> 4) + iVar36);
        pbVar33[3] = bVar22;
        pbVar33[3] = *(byte *)(((int)((uint)bVar22 + (uint)pbVar38[5] + 1) >> 1) + iVar36);
        bVar22 = *(byte *)(((int)(((((uint)pbVar38[6] + (uint)pbVar38[5]) * 9 - (uint)pbVar38[7]) -
                                  (uint)pbVar38[4]) + 8) >> 4) + iVar36);
        pbVar33[4] = bVar22;
        pbVar33[4] = *(byte *)(((int)((uint)bVar22 + (uint)pbVar38[6] + 1) >> 1) + iVar36);
        bVar22 = *(byte *)(((int)(((((uint)pbVar38[7] + (uint)pbVar38[6]) * 9 - (uint)pbVar38[8]) -
                                  (uint)pbVar38[5]) + 8) >> 4) + iVar36);
        pbVar33[5] = bVar22;
        pbVar39 = pbVar38 + 7;
        pbVar38 = pbVar38 + param_4;
        pbVar33[5] = *(byte *)(((int)((uint)bVar22 + (uint)*pbVar39 + 1) >> 1) + iVar36);
        pbVar33 = pbVar33 + param_4;
        lVar43 = lVar43 + -1;
      } while (lVar43 != 0);
    }
  }
  else {
    puVar41 = (undefined1 *)(param_3 + -1);
    puVar37 = (undefined1 *)(param_2 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    puVar41 = (undefined1 *)(param_3 + param_4 + -1);
    puVar37 = (undefined1 *)(param_2 + param_4 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    iVar32 = param_3 + param_4 + param_4;
    iVar36 = param_2 + param_4 + param_4;
    puVar41 = (undefined1 *)(iVar32 + -1);
    puVar37 = (undefined1 *)(iVar36 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    iVar32 = iVar32 + param_4;
    iVar36 = iVar36 + param_4;
    puVar41 = (undefined1 *)(iVar32 + -1);
    puVar37 = (undefined1 *)(iVar36 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    iVar32 = iVar32 + param_4;
    iVar36 = iVar36 + param_4;
    puVar41 = (undefined1 *)(iVar32 + -1);
    puVar37 = (undefined1 *)(iVar36 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    iVar32 = iVar32 + param_4;
    iVar36 = iVar36 + param_4;
    puVar41 = (undefined1 *)(iVar32 + -1);
    puVar37 = (undefined1 *)(iVar36 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    iVar32 = iVar32 + param_4;
    iVar36 = iVar36 + param_4;
    puVar41 = (undefined1 *)(iVar32 + -1);
    puVar37 = (undefined1 *)(iVar36 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    puVar41 = (undefined1 *)(iVar32 + param_4 + -1);
    puVar37 = (undefined1 *)(iVar36 + param_4 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
  }
  return;
}

