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
extern unsigned int uStack_101;
extern unsigned int uStack_134;
extern unsigned int uStack_138;


void fn_82CB5E78(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

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
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  int iVar21;
  int *piVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  int iVar26;
  int iVar27;
  byte *pbVar28;
  int *piVar29;
  int iVar30;
  undefined1 *puVar31;
  int iVar33;
  byte *pbVar34;
  byte *pbVar35;
  ulonglong uVar32;
  int iVar36;
  int iVar37;
  longlong lVar38;
  longlong lVar39;
  uint uStack_138;
  uint uStack_134;
  undefined1 uStack_101;
  byte abStack_100 [256];
  
  iVar21 = *(int *)(param_1 + 0x100);
  if (param_7 == 0) {
    if (param_6 == 0) {
      puVar31 = &uStack_101;
      lVar38 = 0xb;
      if (param_8 == 0) {
        pbVar28 = (byte *)(param_4 - param_5);
        do {
          bVar16 = pbVar28[2];
          bVar1 = pbVar28[1];
          bVar2 = *pbVar28;
          bVar3 = pbVar28[3];
          bVar4 = pbVar28[4];
          bVar5 = pbVar28[5];
          bVar6 = pbVar28[6];
          bVar7 = pbVar28[7];
          bVar8 = pbVar28[8];
          bVar9 = pbVar28[9];
          puVar31[1] = *(undefined1 *)
                        (((int)(((((uint)bVar2 + (uint)bVar1) * 9 - (uint)pbVar28[-1]) -
                                (uint)bVar16) + 8) >> 4) + iVar21);
          uVar17 = *(undefined1 *)
                    (((int)(((((uint)bVar3 + (uint)bVar16) * 9 - (uint)bVar4) - (uint)bVar1) + 8) >>
                     4) + iVar21);
          uVar18 = *(undefined1 *)
                    (((int)(((((uint)bVar4 + (uint)bVar3) * 9 - (uint)bVar5) - (uint)bVar16) + 8) >>
                     4) + iVar21);
          uVar19 = *(undefined1 *)
                    (((int)(((((uint)bVar5 + (uint)bVar4) * 9 - (uint)bVar6) - (uint)bVar3) + 8) >>
                     4) + iVar21);
          puVar31[2] = *(undefined1 *)
                        (((int)(((((uint)bVar16 + (uint)bVar1) * 9 - (uint)bVar3) - (uint)bVar2) + 8
                               ) >> 4) + iVar21);
          uVar20 = *(undefined1 *)
                    (((int)(((((uint)bVar6 + (uint)bVar5) * 9 - (uint)bVar7) - (uint)bVar4) + 8) >>
                     4) + iVar21);
          puVar31[3] = uVar17;
          uVar17 = *(undefined1 *)
                    (((int)(((((uint)bVar7 + (uint)bVar6) * 9 - (uint)bVar8) - (uint)bVar5) + 8) >>
                     4) + iVar21);
          puVar31[4] = uVar18;
          puVar31[5] = uVar19;
          puVar31[6] = uVar20;
          puVar31[7] = uVar17;
          pbVar28 = pbVar28 + param_5;
          puVar31 = puVar31 + 8;
          *puVar31 = *(undefined1 *)
                      (((int)(((((uint)bVar8 + (uint)bVar7) * 9 - (uint)bVar9) - (uint)bVar6) + 8)
                       >> 4) + iVar21);
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
        puVar31 = (undefined1 *)(param_2 + 2);
        piVar29 = (int *)(param_3 + -4);
        lVar38 = 8;
        pbVar28 = abStack_100;
        do {
          bVar16 = pbVar28[9];
          bVar1 = pbVar28[0x11];
          bVar2 = pbVar28[10];
          bVar3 = pbVar28[0x19];
          bVar4 = pbVar28[0x12];
          bVar5 = pbVar28[0xb];
          bVar6 = pbVar28[1];
          bVar7 = pbVar28[0x13];
          bVar8 = pbVar28[0x1a];
          bVar9 = pbVar28[0x14];
          bVar10 = pbVar28[0x1b];
          bVar11 = pbVar28[0x1c];
          bVar12 = pbVar28[2];
          bVar13 = pbVar28[3];
          bVar14 = pbVar28[4];
          bVar15 = pbVar28[0xc];
          puVar31[-2] = *(undefined1 *)
                         ((uint)*(byte *)(((int)(((((uint)pbVar28[0x10] + (uint)pbVar28[8]) * 9 -
                                                  (uint)pbVar28[0x18]) - (uint)*pbVar28) + 8) >> 4)
                                         + iVar21) + piVar29[1] + iVar21);
          puVar31[-1] = *(undefined1 *)
                         ((uint)*(byte *)(((int)(((((uint)bVar1 + (uint)bVar16) * 9 - (uint)bVar3) -
                                                 (uint)bVar6) + 8) >> 4) + iVar21) + piVar29[2] +
                         iVar21);
          *puVar31 = *(undefined1 *)
                      ((uint)*(byte *)(((int)(((((uint)bVar4 + (uint)bVar2) * 9 - (uint)bVar8) -
                                              (uint)bVar12) + 8) >> 4) + iVar21) + piVar29[3] +
                      iVar21);
          puVar31[1] = *(undefined1 *)
                        ((uint)*(byte *)(((int)(((((uint)bVar7 + (uint)bVar5) * 9 - (uint)bVar10) -
                                                (uint)bVar13) + 8) >> 4) + iVar21) + piVar29[4] +
                        iVar21);
          bVar16 = pbVar28[0x15];
          puVar31[2] = *(undefined1 *)
                        ((uint)*(byte *)(((int)(((((uint)bVar9 + (uint)bVar15) * 9 - (uint)bVar11) -
                                                (uint)bVar14) + 8) >> 4) + iVar21) + piVar29[5] +
                        iVar21);
          bVar1 = pbVar28[0xe];
          bVar2 = pbVar28[0x16];
          bVar3 = pbVar28[0x1e];
          bVar4 = pbVar28[6];
          bVar5 = pbVar28[0x17];
          bVar6 = pbVar28[0xf];
          bVar7 = pbVar28[0x1f];
          bVar8 = pbVar28[7];
          puVar31[3] = *(undefined1 *)
                        ((uint)*(byte *)(((int)(((((uint)bVar16 + (uint)pbVar28[0xd]) * 9 -
                                                 (uint)pbVar28[0x1d]) - (uint)pbVar28[5]) + 8) >> 4)
                                        + iVar21) + piVar29[6] + iVar21);
          puVar31[4] = *(undefined1 *)
                        ((uint)*(byte *)(((int)(((((uint)bVar2 + (uint)bVar1) * 9 - (uint)bVar3) -
                                                (uint)bVar4) + 8) >> 4) + iVar21) + piVar29[7] +
                        iVar21);
          piVar29 = piVar29 + 8;
          puVar31[5] = *(undefined1 *)
                        ((uint)*(byte *)(((int)(((((uint)bVar5 + (uint)bVar6) * 9 - (uint)bVar7) -
                                                (uint)bVar8) + 8) >> 4) + iVar21) + *piVar29 +
                        iVar21);
          puVar31 = puVar31 + param_5;
          lVar38 = lVar38 + -1;
          pbVar28 = pbVar28 + 8;
        } while (lVar38 != 0);
      }
      else {
        iVar27 = param_4 + param_5 + 1;
        iVar26 = iVar27 - param_5;
        uStack_138 = iVar26 - param_5;
        pbVar28 = (byte *)(uStack_138 + 1);
        do {
          bVar16 = pbVar28[-1];
          bVar1 = pbVar28[-2];
          bVar2 = *pbVar28;
          bVar3 = pbVar28[7];
          bVar4 = pbVar28[1];
          bVar5 = pbVar28[2];
          bVar6 = pbVar28[3];
          bVar7 = pbVar28[4];
          bVar8 = pbVar28[5];
          bVar9 = pbVar28[6];
          puVar31[1] = *(undefined1 *)
                        (((int)(((((uint)bVar16 + (uint)bVar1) * 9 - (uint)pbVar28[-3]) -
                                (uint)bVar2) + 8) >> 4) + iVar21);
          uVar17 = *(undefined1 *)
                    (((int)(((((uint)bVar2 + (uint)bVar4) * 9 - (uint)bVar5) - (uint)bVar16) + 8) >>
                     4) + iVar21);
          uVar18 = *(undefined1 *)
                    (((int)(((((uint)bVar5 + (uint)bVar4) * 9 - (uint)bVar2) - (uint)bVar6) + 8) >>
                     4) + iVar21);
          puVar31[2] = *(undefined1 *)
                        (((int)(((((uint)bVar2 + (uint)bVar16) * 9 - (uint)bVar4) - (uint)bVar1) + 8
                               ) >> 4) + iVar21);
          uVar19 = *(undefined1 *)
                    (((int)(((((uint)bVar6 + (uint)bVar5) * 9 - (uint)bVar7) - (uint)bVar4) + 8) >>
                     4) + iVar21);
          puVar31[3] = uVar17;
          uVar17 = *(undefined1 *)
                    (((int)(((((uint)bVar7 + (uint)bVar6) * 9 - (uint)bVar8) - (uint)bVar5) + 8) >>
                     4) + iVar21);
          puVar31[4] = uVar18;
          uVar18 = *(undefined1 *)
                    (((int)(((((uint)bVar8 + (uint)bVar7) * 9 - (uint)bVar9) - (uint)bVar6) + 8) >>
                     4) + iVar21);
          puVar31[5] = uVar19;
          puVar31[6] = uVar17;
          puVar31[7] = uVar18;
          pbVar28 = pbVar28 + param_5;
          puVar31 = puVar31 + 8;
          *puVar31 = *(undefined1 *)
                      (((int)(((((uint)bVar9 + (uint)bVar8) * 9 - (uint)bVar3) - (uint)bVar7) + 8)
                       >> 4) + iVar21);
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
        piVar29 = (int *)(param_3 + 8);
        uStack_134 = 8;
        iVar37 = (iVar26 - iVar27) + param_2 + param_5 + 2;
        iVar27 = iVar26 + param_5 + 2;
        pbVar28 = abStack_100 + 8;
        do {
          lVar38 = 2;
          iVar36 = 0;
          do {
            iVar30 = iVar36 + iVar26;
            bVar16 = pbVar28[iVar36 + -7];
            bVar1 = pbVar28[iVar36 + 9];
            bVar2 = pbVar28[iVar36 + 1];
            bVar3 = pbVar28[iVar36 + 0x11];
            bVar4 = pbVar28[iVar36 + 10];
            bVar5 = pbVar28[iVar36 + 2];
            *(undefined1 *)(iVar30 + (iVar37 - iVar26) + -2) =
                 *(undefined1 *)
                  ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)(pbVar28 + 8)[iVar36] +
                                                                   (uint)pbVar28[iVar36]) * 9 -
                                                                  (uint)pbVar28[iVar36 + 0x10]) -
                                                                 (uint)pbVar28[iVar30 + (-8 - iVar26
                                                                                        )]) + 8) >>
                                                          4) + iVar21) +
                                          (uint)*(byte *)(((int)(((((uint)*(byte *)(iVar30 + (iVar27
                                                                                             - 
                                                  iVar26) + -2) + (uint)*(byte *)(iVar36 + iVar26))
                                                  * 9 - (uint)*(byte *)(iVar30 + (uStack_138 -
                                                                                 iVar26))) -
                                                  (uint)*(byte *)(iVar30 + ((param_5 + -2) - iVar26)
                                                                           + iVar27)) + 8) >> 4) +
                                                  iVar21) + 1) >> 1) + iVar21) + piVar29[-2] +
                  iVar21);
            *(undefined1 *)(iVar37 + -1 + iVar36) =
                 *(undefined1 *)
                  ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)bVar2 + (uint)bVar1) * 9 -
                                                                  (uint)bVar16) - (uint)bVar3) + 8)
                                                          >> 4) + iVar21) +
                                          (uint)*(byte *)(((int)(((((uint)*(byte *)((-1 - param_5) +
                                                                                    iVar27 + iVar36)
                                                                   + (uint)*(byte *)(iVar27 + -1 +
                                                                                    iVar36)) * 9 -
                                                                  (uint)*(byte *)(param_5 + -1 +
                                                                                  iVar27 + iVar36))
                                                                 - (uint)*(byte *)(iVar36 + 
                                                  uStack_138 + 1)) + 8) >> 4) + iVar21) + 1) >> 1) +
                                  iVar21) + piVar29[-1] + iVar21);
            bVar16 = pbVar28[iVar36 + 0xb];
            bVar1 = pbVar28[iVar36 + -5];
            bVar2 = pbVar28[iVar36 + 3];
            bVar3 = pbVar28[iVar36 + 0x13];
            *(undefined1 *)(iVar37 + iVar36) =
                 *(undefined1 *)
                  ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)*(byte *)(iVar27 + iVar36)
                                                                   + (uint)*(byte *)(iVar36 + iVar26
                                                                                              + 2))
                                                                   * 9 - (uint)*(byte *)(iVar27 + 
                                                  param_5 + iVar36)) -
                                                  (uint)*(byte *)(iVar36 + uStack_138 + 2)) + 8) >>
                                                  4) + iVar21) +
                                          (uint)*(byte *)(((int)(((((uint)bVar5 + (uint)bVar4) * 9 -
                                                                  (uint)pbVar28[iVar36 + -6]) -
                                                                 (uint)pbVar28[iVar36 + 0x12]) + 8)
                                                          >> 4) + iVar21) + 1) >> 1) + iVar21) +
                   *piVar29 + iVar21);
            piVar22 = piVar29 + 1;
            piVar29 = piVar29 + 4;
            *(undefined1 *)(iVar37 + 1 + iVar36) =
                 *(undefined1 *)
                  ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)*(byte *)((1 - param_5) +
                                                                                    iVar27 + iVar36)
                                                                   + (uint)*(byte *)(iVar27 + 1 +
                                                                                    iVar36)) * 9 -
                                                                  (uint)*(byte *)(param_5 + 1 +
                                                                                  iVar27 + iVar36))
                                                                 - (uint)*(byte *)(uStack_138 + 3 +
                                                                                  iVar36)) + 8) >> 4
                                                          ) + iVar21) +
                                          (uint)*(byte *)(((int)(((((uint)bVar2 + (uint)bVar16) * 9
                                                                  - (uint)bVar1) - (uint)bVar3) + 8)
                                                          >> 4) + iVar21) + 1) >> 1) + iVar21) +
                   *piVar22 + iVar21);
            iVar36 = iVar36 + 4;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          uVar32 = (ulonglong)uStack_134;
          uStack_138 = uStack_138 + param_5;
          iVar26 = iVar26 + param_5;
          uStack_134 = (uint)(uVar32 - 1);
          iVar27 = iVar27 + param_5;
          iVar37 = iVar37 + param_5;
          pbVar28 = pbVar28 + 8;
        } while (uVar32 - 1 != 0);
      }
    }
    else {
      pbVar28 = (byte *)(param_4 + param_5);
      if (param_8 == 0) {
        lVar38 = 8;
        puVar31 = (undefined1 *)(param_2 + 2);
        piVar29 = (int *)(param_3 + -4);
        pbVar35 = (byte *)((param_4 - param_5) + 2);
        pbVar34 = pbVar28 + 2;
        do {
          pbVar28 = pbVar28 + param_5;
          pbVar34[((param_2 - param_4) - param_5) + -2] =
               *(byte *)((uint)*(byte *)(((int)(((((uint)pbVar34[-2 - param_5] + (uint)pbVar34[-2])
                                                  * 9 - (uint)pbVar35[-2]) - (uint)*pbVar28) + 8) >>
                                         4) + iVar21) + piVar29[1] + iVar21);
          puVar31[-1] = *(undefined1 *)
                         ((uint)*(byte *)(((int)(((((uint)pbVar34[-1 - param_5] + (uint)pbVar34[-1])
                                                   * 9 - (uint)pbVar35[-1]) - (uint)pbVar28[1]) + 8)
                                          >> 4) + iVar21) + piVar29[2] + iVar21);
          *puVar31 = *(undefined1 *)
                      ((uint)*(byte *)(((int)(((((uint)*pbVar34 + (uint)pbVar35[param_5]) * 9 -
                                               (uint)pbVar28[2]) - (uint)*pbVar35) + 8) >> 4) +
                                      iVar21) + piVar29[3] + iVar21);
          puVar31[1] = *(undefined1 *)
                        ((uint)*(byte *)(((int)(((((uint)pbVar34[1 - param_5] + (uint)pbVar34[1]) *
                                                  9 - (uint)pbVar35[1]) - (uint)pbVar28[3]) + 8) >>
                                         4) + iVar21) + piVar29[4] + iVar21);
          puVar31[2] = *(undefined1 *)
                        ((uint)*(byte *)(((int)(((((uint)pbVar34[2 - param_5] + (uint)pbVar34[2]) *
                                                  9 - (uint)pbVar35[2]) - (uint)pbVar28[4]) + 8) >>
                                         4) + iVar21) + piVar29[5] + iVar21);
          puVar31[3] = *(undefined1 *)
                        ((uint)*(byte *)(((int)(((((uint)pbVar34[3 - param_5] + (uint)pbVar34[3]) *
                                                  9 - (uint)pbVar35[3]) - (uint)pbVar28[5]) + 8) >>
                                         4) + iVar21) + piVar29[6] + iVar21);
          puVar31[4] = *(undefined1 *)
                        ((uint)*(byte *)(((int)(((((uint)pbVar34[4 - param_5] + (uint)pbVar34[4]) *
                                                  9 - (uint)pbVar35[4]) - (uint)pbVar28[6]) + 8) >>
                                         4) + iVar21) + piVar29[7] + iVar21);
          pbVar23 = pbVar34 + 5;
          pbVar24 = pbVar34 + (5 - param_5);
          pbVar25 = pbVar35 + 5;
          piVar29 = piVar29 + 8;
          pbVar34 = pbVar34 + param_5;
          pbVar35 = pbVar35 + param_5;
          puVar31[5] = *(undefined1 *)
                        ((uint)*(byte *)(((int)(((((uint)*pbVar24 + (uint)*pbVar23) * 9 -
                                                 (uint)*pbVar25) - (uint)pbVar28[7]) + 8) >> 4) +
                                        iVar21) + *piVar29 + iVar21);
          puVar31 = puVar31 + param_5;
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
      }
      else {
        iVar26 = (int)pbVar28 - param_5;
        uStack_134 = iVar26 - param_5;
        puVar31 = &uStack_101;
        pbVar35 = (byte *)(uStack_134 + 2);
        lVar38 = 0xb;
        do {
          bVar16 = pbVar35[-1];
          bVar1 = pbVar35[-2];
          bVar2 = *pbVar35;
          bVar3 = pbVar35[7];
          bVar4 = pbVar35[1];
          bVar5 = pbVar35[2];
          bVar6 = pbVar35[3];
          bVar7 = pbVar35[4];
          bVar8 = pbVar35[5];
          bVar9 = pbVar35[6];
          puVar31[1] = *(undefined1 *)
                        (((int)(((((uint)bVar1 + (uint)bVar16) * 9 - (uint)pbVar35[-3]) -
                                (uint)bVar2) + 8) >> 4) + iVar21);
          uVar17 = *(undefined1 *)
                    (((int)(((((uint)bVar2 + (uint)bVar4) * 9 - (uint)bVar5) - (uint)bVar16) + 8) >>
                     4) + iVar21);
          uVar18 = *(undefined1 *)
                    (((int)(((((uint)bVar5 + (uint)bVar4) * 9 - (uint)bVar2) - (uint)bVar6) + 8) >>
                     4) + iVar21);
          puVar31[2] = *(undefined1 *)
                        (((int)(((((uint)bVar2 + (uint)bVar16) * 9 - (uint)bVar4) - (uint)bVar1) + 8
                               ) >> 4) + iVar21);
          uVar19 = *(undefined1 *)
                    (((int)(((((uint)bVar6 + (uint)bVar5) * 9 - (uint)bVar7) - (uint)bVar4) + 8) >>
                     4) + iVar21);
          puVar31[3] = uVar17;
          uVar17 = *(undefined1 *)
                    (((int)(((((uint)bVar7 + (uint)bVar6) * 9 - (uint)bVar8) - (uint)bVar5) + 8) >>
                     4) + iVar21);
          puVar31[4] = uVar18;
          uVar18 = *(undefined1 *)
                    (((int)(((((uint)bVar8 + (uint)bVar7) * 9 - (uint)bVar9) - (uint)bVar6) + 8) >>
                     4) + iVar21);
          puVar31[5] = uVar19;
          puVar31[6] = uVar17;
          puVar31[7] = uVar18;
          pbVar35 = pbVar35 + param_5;
          puVar31 = puVar31 + 8;
          *puVar31 = *(undefined1 *)
                      (((int)(((((uint)bVar9 + (uint)bVar8) * 9 - (uint)bVar3) - (uint)bVar7) + 8)
                       >> 4) + iVar21);
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
        piVar29 = (int *)(param_3 + 8);
        uStack_138 = 8;
        iVar37 = (iVar26 - (int)pbVar28) + param_2 + param_5 + 2;
        iVar27 = iVar26 + param_5 + 2;
        pbVar28 = abStack_100 + 8;
        do {
          lVar38 = 2;
          iVar36 = 0;
          do {
            iVar30 = iVar36 + iVar26;
            bVar16 = pbVar28[iVar36 + -7];
            bVar1 = pbVar28[iVar36 + 9];
            bVar2 = pbVar28[iVar36 + 1];
            bVar3 = pbVar28[iVar36 + 0x11];
            bVar4 = pbVar28[iVar36 + 10];
            bVar5 = pbVar28[iVar36 + 2];
            *(undefined1 *)((iVar37 - iVar26) + -2 + iVar30) =
                 *(undefined1 *)
                  ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)(pbVar28 + 8)[iVar36] +
                                                                   (uint)pbVar28[iVar36]) * 9 -
                                                                  (uint)pbVar28[iVar36 + 0x10]) -
                                                                 (uint)pbVar28[iVar30 + (-8 - iVar26
                                                                                        )]) + 8) >>
                                                          4) + iVar21) +
                                          (uint)*(byte *)(((int)(((((uint)*(byte *)((iVar27 - iVar26
                                                                                    ) + -2 + iVar30)
                                                                   + (uint)*(byte *)(iVar36 + iVar26
                                                                                    )) * 9 -
                                                                  (uint)*(byte *)((uStack_134 -
                                                                                  iVar26) + iVar30))
                                                                 - (uint)*(byte *)(((param_5 + -2) -
                                                                                   iVar26) + iVar27
                                                                                  + iVar30)) + 8) >>
                                                          4) + iVar21) + 1) >> 1) + iVar21) +
                   piVar29[-2] + iVar21);
            *(undefined1 *)(iVar37 + -1 + iVar36) =
                 *(undefined1 *)
                  ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)bVar2 + (uint)bVar1) * 9 -
                                                                  (uint)bVar16) - (uint)bVar3) + 8)
                                                          >> 4) + iVar21) +
                                          (uint)*(byte *)(((int)(((((uint)*(byte *)((-1 - param_5) +
                                                                                    iVar27 + iVar36)
                                                                   + (uint)*(byte *)(iVar27 + -1 +
                                                                                    iVar36)) * 9 -
                                                                  (uint)*(byte *)(param_5 + -1 +
                                                                                  iVar27 + iVar36))
                                                                 - (uint)*(byte *)(uStack_134 + 1 +
                                                                                  iVar36)) + 8) >> 4
                                                          ) + iVar21) + 1) >> 1) + iVar21) +
                   piVar29[-1] + iVar21);
            bVar16 = pbVar28[iVar36 + 0xb];
            bVar1 = pbVar28[iVar36 + -5];
            bVar2 = pbVar28[iVar36 + 3];
            bVar3 = pbVar28[iVar36 + 0x13];
            *(undefined1 *)(iVar36 + iVar37) =
                 *(undefined1 *)
                  ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)*(byte *)(iVar26 + 2 +
                                                                                   iVar36) +
                                                                   (uint)*(byte *)(iVar36 + iVar27))
                                                                   * 9 - (uint)*(byte *)(iVar27 + 
                                                  param_5 + iVar36)) -
                                                  (uint)*(byte *)(uStack_134 + 2 + iVar36)) + 8) >>
                                                  4) + iVar21) +
                                          (uint)*(byte *)(((int)(((((uint)bVar5 + (uint)bVar4) * 9 -
                                                                  (uint)pbVar28[iVar36 + -6]) -
                                                                 (uint)pbVar28[iVar36 + 0x12]) + 8)
                                                          >> 4) + iVar21) + 1) >> 1) + iVar21) +
                   *piVar29 + iVar21);
            piVar22 = piVar29 + 1;
            piVar29 = piVar29 + 4;
            *(undefined1 *)(iVar37 + 1 + iVar36) =
                 *(undefined1 *)
                  ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)bVar2 + (uint)bVar16) * 9
                                                                  - (uint)bVar1) - (uint)bVar3) + 8)
                                                          >> 4) + iVar21) +
                                          (uint)*(byte *)(((int)(((((uint)*(byte *)((1 - param_5) +
                                                                                    iVar27 + iVar36)
                                                                   + (uint)*(byte *)(iVar27 + 1 +
                                                                                    iVar36)) * 9 -
                                                                  (uint)*(byte *)(param_5 + 1 +
                                                                                  iVar27 + iVar36))
                                                                 - (uint)*(byte *)(uStack_134 + 3 +
                                                                                  iVar36)) + 8) >> 4
                                                          ) + iVar21) + 1) >> 1) + iVar21) +
                   *piVar22 + iVar21);
            iVar36 = iVar36 + 4;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          uVar32 = (ulonglong)uStack_138;
          uStack_134 = uStack_134 + param_5;
          iVar26 = iVar26 + param_5;
          uStack_138 = (uint)(uVar32 - 1);
          iVar27 = iVar27 + param_5;
          iVar37 = iVar37 + param_5;
          pbVar28 = pbVar28 + 8;
        } while (uVar32 - 1 != 0);
      }
    }
  }
  else if (param_6 == 0) {
    if (param_8 == 0) {
      piVar29 = (int *)(param_3 + -4);
      pbVar28 = (byte *)(param_4 + 2);
      puVar31 = (undefined1 *)(param_2 + 2);
      iVar26 = (param_4 - param_2) + -2;
      lVar38 = 8;
      do {
        puVar31[-2] = *(undefined1 *)
                       ((uint)*(byte *)(((int)(((((uint)pbVar28[-1] + (uint)(byte)puVar31[iVar26]) *
                                                 9 - (uint)pbVar28[-3]) - (uint)*pbVar28) + 8) >> 4)
                                       + iVar21) + piVar29[1] + iVar21);
        puVar31[-1] = *(undefined1 *)
                       ((uint)*(byte *)(((int)(((((uint)*pbVar28 + (uint)pbVar28[-1]) * 9 -
                                                (uint)pbVar28[1]) - (uint)(byte)puVar31[iVar26]) + 8
                                              ) >> 4) + iVar21) + piVar29[2] + iVar21);
        *puVar31 = *(undefined1 *)
                    ((uint)*(byte *)(((int)(((((uint)pbVar28[1] + (uint)*pbVar28) * 9 -
                                             (uint)pbVar28[2]) - (uint)pbVar28[-1]) + 8) >> 4) +
                                    iVar21) + piVar29[3] + iVar21);
        puVar31[1] = *(undefined1 *)
                      ((uint)*(byte *)(((int)(((((uint)pbVar28[2] + (uint)pbVar28[1]) * 9 -
                                               (uint)pbVar28[3]) - (uint)*pbVar28) + 8) >> 4) +
                                      iVar21) + piVar29[4] + iVar21);
        puVar31[2] = *(undefined1 *)
                      ((uint)*(byte *)(((int)(((((uint)pbVar28[3] + (uint)pbVar28[2]) * 9 -
                                               (uint)pbVar28[4]) - (uint)pbVar28[1]) + 8) >> 4) +
                                      iVar21) + piVar29[5] + iVar21);
        puVar31[3] = *(undefined1 *)
                      ((uint)*(byte *)(((int)(((((uint)pbVar28[4] + (uint)pbVar28[3]) * 9 -
                                               (uint)pbVar28[5]) - (uint)pbVar28[2]) + 8) >> 4) +
                                      iVar21) + piVar29[6] + iVar21);
        puVar31[4] = *(undefined1 *)
                      ((uint)*(byte *)(((int)(((((uint)pbVar28[5] + (uint)pbVar28[4]) * 9 -
                                               (uint)pbVar28[6]) - (uint)pbVar28[3]) + 8) >> 4) +
                                      iVar21) + piVar29[7] + iVar21);
        pbVar35 = pbVar28 + 7;
        piVar29 = piVar29 + 8;
        pbVar34 = pbVar28 + 6;
        pbVar23 = pbVar28 + 5;
        pbVar24 = pbVar28 + 4;
        pbVar28 = pbVar28 + param_5;
        puVar31[5] = *(undefined1 *)
                      ((uint)*(byte *)(((int)(((((uint)*pbVar34 + (uint)*pbVar23) * 9 -
                                               (uint)*pbVar35) - (uint)*pbVar24) + 8) >> 4) + iVar21
                                      ) + *piVar29 + iVar21);
        puVar31 = puVar31 + param_5;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
    }
    else {
      piVar29 = (int *)(param_3 + 8);
      iVar27 = param_2 + 2;
      iVar26 = param_4 + 1;
      lVar38 = 8;
      do {
        iVar30 = 0;
        lVar39 = 2;
        iVar37 = iVar26 + 2;
        iVar36 = iVar26 + 1;
        do {
          *(undefined1 *)(iVar30 + iVar26 + (param_2 - param_4) + -1) =
               *(undefined1 *)
                ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)*(byte *)(iVar26 + -1 +
                                                                                 iVar30) +
                                                                 (uint)*(byte *)(iVar26 + iVar30)) *
                                                                 9 - (uint)*(byte *)(iVar26 + -2 +
                                                                                    iVar30)) -
                                                               (uint)*(byte *)(iVar36 + iVar30)) + 8
                                                              ) >> 4) + iVar21) +
                                        (uint)*(byte *)(iVar26 + iVar30) + 1) >> 1) + iVar21) +
                 piVar29[-2] + iVar21);
          *(undefined1 *)(iVar27 + -1 + iVar30) =
               *(undefined1 *)
                ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)*(byte *)(iVar26 + iVar30) +
                                                                 (uint)*(byte *)(iVar36 + iVar30)) *
                                                                 9 - (uint)*(byte *)(iVar26 + -1 +
                                                                                    iVar30)) -
                                                               (uint)*(byte *)(iVar37 + iVar30)) + 8
                                                              ) >> 4) + iVar21) +
                                        (uint)*(byte *)(iVar36 + iVar30) + 1) >> 1) + iVar21) +
                 piVar29[-1] + iVar21);
          *(undefined1 *)(iVar27 + iVar30) =
               *(undefined1 *)
                ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)*(byte *)(iVar36 + iVar30) +
                                                                 (uint)*(byte *)(iVar37 + iVar30)) *
                                                                 9 - (uint)*(byte *)(iVar26 + 3 +
                                                                                    iVar30)) -
                                                               (uint)*(byte *)(iVar26 + iVar30)) + 8
                                                              ) >> 4) + iVar21) +
                                        (uint)*(byte *)(iVar37 + iVar30) + 1) >> 1) + iVar21) +
                 *piVar29 + iVar21);
          piVar22 = piVar29 + 1;
          piVar29 = piVar29 + 4;
          bVar16 = *(byte *)(iVar26 + 3 + iVar30);
          *(undefined1 *)(iVar27 + 1 + iVar30) =
               *(undefined1 *)
                ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)*(byte *)(iVar37 + iVar30) +
                                                                 (uint)bVar16) * 9 -
                                                                (uint)*(byte *)(iVar26 + 4 + iVar30)
                                                                ) - (uint)*(byte *)(iVar36 + iVar30)
                                                               ) + 8) >> 4) + iVar21) + (uint)bVar16
                                       + 1) >> 1) + iVar21) + *piVar22 + iVar21);
          iVar30 = iVar30 + 4;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
        lVar38 = lVar38 + -1;
        iVar27 = iVar27 + param_5;
        iVar26 = iVar26 + param_5;
      } while (lVar38 != 0);
    }
  }
  else if (param_8 == 0) {
    puVar31 = (undefined1 *)(param_2 + 2);
    pbVar28 = (byte *)(param_4 + 2);
    piVar29 = (int *)(param_3 + -4);
    lVar38 = 8;
    do {
      puVar31[-2] = *(undefined1 *)
                     ((uint)(byte)puVar31[(param_4 - param_2) + -2] + piVar29[1] + iVar21);
      puVar31[-1] = *(undefined1 *)((uint)pbVar28[-1] + piVar29[2] + iVar21);
      *puVar31 = *(undefined1 *)((uint)*pbVar28 + piVar29[3] + iVar21);
      puVar31[1] = *(undefined1 *)((uint)pbVar28[1] + piVar29[4] + iVar21);
      puVar31[2] = *(undefined1 *)((uint)pbVar28[2] + piVar29[5] + iVar21);
      puVar31[3] = *(undefined1 *)((uint)pbVar28[3] + piVar29[6] + iVar21);
      puVar31[4] = *(undefined1 *)((uint)pbVar28[4] + piVar29[7] + iVar21);
      pbVar35 = pbVar28 + 5;
      pbVar28 = pbVar28 + param_5;
      piVar29 = piVar29 + 8;
      puVar31[5] = *(undefined1 *)((uint)*pbVar35 + *piVar29 + iVar21);
      puVar31 = puVar31 + param_5;
      lVar38 = lVar38 + -1;
    } while (lVar38 != 0);
  }
  else {
    piVar29 = (int *)(param_3 + 8);
    iVar27 = param_2 + 2;
    iVar26 = param_4 + 1;
    lVar38 = 8;
    do {
      iVar37 = iVar26 + -1;
      iVar33 = 0;
      lVar39 = 2;
      iVar30 = iVar26 + 1;
      iVar36 = iVar26 + 2;
      do {
        *(undefined1 *)((iVar26 - iVar37) + (param_2 - param_4) + -1 + iVar37 + iVar33) =
             *(undefined1 *)
              ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)*(byte *)(iVar26 + iVar33) +
                                                               (uint)*(byte *)(iVar37 + iVar33)) * 9
                                                              - (uint)*(byte *)(iVar33 + iVar26 + -2
                                                                               )) -
                                                             (uint)*(byte *)(iVar30 + iVar33)) + 8)
                                                      >> 4) + iVar21) +
                                      (uint)*(byte *)(iVar37 + iVar33) + 1) >> 1) + iVar21) +
               piVar29[-2] + iVar21);
        *(undefined1 *)(iVar33 + iVar27 + -1) =
             *(undefined1 *)
              ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)*(byte *)(iVar30 + iVar33) +
                                                               (uint)*(byte *)(iVar26 + iVar33)) * 9
                                                              - (uint)*(byte *)(iVar36 + iVar33)) -
                                                             (uint)*(byte *)(iVar37 + iVar33)) + 8)
                                                      >> 4) + iVar21) +
                                      (uint)*(byte *)(iVar26 + iVar33) + 1) >> 1) + iVar21) +
               piVar29[-1] + iVar21);
        *(undefined1 *)(iVar27 + iVar33) =
             *(undefined1 *)
              ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)*(byte *)(iVar36 + iVar33) +
                                                               (uint)*(byte *)(iVar30 + iVar33)) * 9
                                                              - (uint)*(byte *)(iVar33 + iVar26 + 3)
                                                              ) - (uint)*(byte *)(iVar26 + iVar33))
                                                            + 8) >> 4) + iVar21) +
                                      (uint)*(byte *)(iVar30 + iVar33) + 1) >> 1) + iVar21) + iVar21
              + *piVar29);
        piVar22 = piVar29 + 1;
        piVar29 = piVar29 + 4;
        *(undefined1 *)(iVar27 + 1 + iVar33) =
             *(undefined1 *)
              ((uint)*(byte *)(((int)((uint)*(byte *)(((int)(((((uint)*(byte *)(iVar33 + iVar26 + 3)
                                                               + (uint)*(byte *)(iVar36 + iVar33)) *
                                                               9 - (uint)*(byte *)(iVar26 + 4 +
                                                                                  iVar33)) -
                                                             (uint)*(byte *)(iVar30 + iVar33)) + 8)
                                                      >> 4) + iVar21) +
                                      (uint)*(byte *)(iVar36 + iVar33) + 1) >> 1) + iVar21) +
               *piVar22 + iVar21);
        iVar33 = iVar33 + 4;
        lVar39 = lVar39 + -1;
      } while (lVar39 != 0);
      lVar38 = lVar38 + -1;
      iVar27 = iVar27 + param_5;
      iVar26 = iVar26 + param_5;
    } while (lVar38 != 0);
  }
  return;
}

