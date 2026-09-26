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
extern int fn_82CAB2D8();
extern unsigned int iStack00000014;
extern unsigned int iStack00000034;
extern unsigned int iStack0000003c;
extern unsigned int iStack_a0;
extern unsigned int uStack_a4;


void fn_82C81EB8(int param_1,byte *param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  int param_6)

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
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  byte *pbVar36;
  byte *pbVar37;
  byte *pbVar38;
  byte *pbVar39;
  byte *pbVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  int iStack00000014;
  byte *pbStack0000001c;
  int iStack00000034;
  int iStack0000003c;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  byte *pbStack_c0;
  byte *pbStack_bc;
  byte *pbStack_b8;
  byte *pbStack_b4;
  uint uStack_a4;
  int iStack_a0;
  
  iStack00000014 = param_1;
  pbStack0000001c = param_2;
  iStack00000034 = param_5;
  iStack0000003c = param_6;
  if (in_stack_00000054 != 0) {
    pbVar37 = param_2 + 8;
    iVar11 = *(int *)(param_1 + 0x100);
    pbVar36 = param_2 + 7;
    pbVar32 = param_2 + 9;
    pbStack_bc = (byte *)0x0;
    pbVar33 = param_2 + 6;
    pbVar31 = param_2 + 10;
    pbVar34 = param_2 + 5;
    pbStack_c0 = param_2 + 0xb;
    pbVar35 = param_2 + 4;
    pbStack_b4 = param_2 + 0xc;
    pbStack_b8 = param_2 + 3;
    do {
      bVar1 = *pbVar35;
      uVar42 = (ulonglong)bVar1;
      bVar2 = *pbStack_b8;
      bVar3 = *pbStack_b4;
      bVar4 = *pbVar34;
      uVar44 = (ulonglong)bVar4;
      bVar5 = *pbVar33;
      uVar46 = (ulonglong)bVar5;
      bVar6 = *pbVar36;
      uVar48 = (ulonglong)bVar6;
      bVar7 = *pbVar37;
      uVar47 = (ulonglong)bVar7;
      bVar8 = *pbVar32;
      uVar45 = (ulonglong)bVar8;
      bVar9 = *pbVar31;
      uVar43 = (ulonglong)bVar9;
      bVar10 = *pbStack_c0;
      uVar41 = (ulonglong)bVar10;
      if (((uint)pbStack_bc & 3) == 0) {
        uVar26 = uVar41 - bVar3;
        uVar24 = (ulonglong)((int)uVar26 >> 0x1f);
        uVar24 = (uVar26 ^ uVar24) - uVar24;
        uVar26 = (ulonglong)((int)(uVar43 - uVar41) >> 0x1f);
        uVar26 = (uVar43 - uVar41 ^ uVar26) - uVar26;
        uVar17 = (ulonglong)((int)(uVar45 - uVar43) >> 0x1f);
        uVar17 = (uVar45 - uVar43 ^ uVar17) - uVar17;
        uVar20 = (ulonglong)((int)(uVar47 - uVar45) >> 0x1f);
        uVar20 = (uVar47 - uVar45 ^ uVar20) - uVar20;
        uVar21 = (ulonglong)((int)(uVar48 - uVar47) >> 0x1f);
        uVar21 = (uVar48 - uVar47 ^ uVar21) - uVar21;
        uVar19 = (ulonglong)((int)(uVar46 - uVar48) >> 0x1f);
        uVar19 = (uVar46 - uVar48 ^ uVar19) - uVar19;
        uVar18 = (ulonglong)((int)(uVar44 - uVar46) >> 0x1f);
        uVar18 = (uVar44 - uVar46 ^ uVar18) - uVar18;
        uVar22 = bVar2 - uVar42;
        uVar14 = (ulonglong)((int)(uVar42 - uVar44) >> 0x1f);
        uVar14 = (uVar42 - uVar44 ^ uVar14) - uVar14;
        uVar25 = (ulonglong)((int)uVar22 >> 0x1f);
        uVar25 = (uVar22 ^ uVar25) - uVar25;
        iStack_a0 = ((uint)(uVar24 < 3) - ((int)uVar24 >> 0x1f)) +
                    ((uint)(uVar26 < 3) - ((int)uVar26 >> 0x1f)) +
                    ((uint)(uVar17 < 3) - ((int)uVar17 >> 0x1f)) +
                    ((uint)(uVar20 < 3) - ((int)uVar20 >> 0x1f)) +
                    ((uint)(uVar21 < 3) - ((int)uVar21 >> 0x1f)) +
                    ((uint)(uVar19 < 3) - ((int)uVar19 >> 0x1f)) +
                    ((uint)(uVar18 < 3) - ((int)uVar18 >> 0x1f)) +
                    ((uint)(uVar14 < 3) - ((int)uVar14 >> 0x1f)) +
                    ((uint)(uVar25 < 3) - ((int)uVar25 >> 0x1f));
      }
      if (iStack_a0 < 6) {
        uVar26 = uVar48 - uVar47;
        iVar12 = (int)uVar26;
        uVar15 = (int)(((uVar46 - uVar45) + 2 & 0xffffffff) << 1) -
                 (iVar12 + (int)((uVar26 & 0xffffffff) << 2));
        uVar15 = ((int)uVar15 >> 3) + (uint)((int)uVar15 < 0 && (uVar15 & 7) != 0);
        iVar16 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
        if (iVar16 < in_stack_0000005c) {
          uVar13 = (int)(((uVar42 - uVar48) + 2 & 0xffffffff) << 1) +
                   (int)(uVar46 - uVar44) + (int)((uVar46 - uVar44 & 0xffffffff) << 2);
          uVar23 = (int)(((uVar47 - uVar41) + 2 & 0xffffffff) << 1) +
                   (int)(uVar43 - uVar45) + (int)((uVar43 - uVar45 & 0xffffffff) << 2);
          uVar29 = ((int)uVar13 >> 3) + (uint)((int)uVar13 < 0 && (uVar13 & 7) != 0);
          uVar27 = ((int)uVar23 >> 3) + (uint)((int)uVar23 < 0 && (uVar23 & 7) != 0);
          uVar13 = (int)uVar27 >> 0x1f;
          uVar23 = (int)uVar29 >> 0x1f;
          iVar30 = (uVar27 ^ uVar13) - uVar13;
          iVar28 = (uVar29 ^ uVar23) - uVar23;
          if (iVar28 < iVar30) {
            iVar30 = iVar28;
          }
          if (iVar30 < iVar16) {
            iVar16 = -1;
            if (-1 < (int)uVar15) {
              iVar16 = 1;
            }
            uVar42 = (longlong)(iVar12 >> 1) + (ulonglong)(iVar12 < 0 && (uVar26 & 1) != 0);
            uVar15 = (iVar16 * iVar30 - uVar15) * 5;
            uVar41 = (longlong)((int)uVar15 >> 3) +
                     (ulonglong)((int)uVar15 < 0 && (uVar15 & 7) != 0);
            if ((longlong)uVar42 < 1) {
              uVar41 = -((ulonglong)(uVar41 == 0) + ((uVar41 & 0xffffffff) >> 0x1f)) & uVar41;
              if ((int)uVar41 < (int)uVar42) goto LAB_82c82420;
            }
            else {
              uVar41 = ((uVar41 & 0xffffffff) >> 0x1f) - 1 & uVar41;
              if ((int)uVar42 < (int)uVar41) {
LAB_82c82420:
                uVar41 = uVar42;
              }
            }
            *pbVar36 = *(byte *)(((uint)bVar6 - (int)uVar41) + iVar11);
            *pbVar37 = *(byte *)((int)uVar41 + (uint)bVar7 + iVar11);
          }
        }
      }
      else {
        iVar12 = fn_82CAB2D8(uVar42,uVar44,uVar46,uVar48,uVar47,uVar45,uVar43,uVar41);
        if (iVar12 != 0) {
          uVar15 = (int)((uint)bVar1 - (uint)bVar2) >> 0x1f;
          uVar43 = (ulonglong)bVar2;
          if (in_stack_0000005c <= (int)(((uint)bVar1 - (uint)bVar2 ^ uVar15) - uVar15)) {
            uVar43 = uVar42;
          }
          uVar15 = (int)((uint)bVar10 - (uint)bVar3) >> 0x1f;
          uVar42 = (ulonglong)bVar3;
          if (in_stack_0000005c <= (int)(((uint)bVar10 - (uint)bVar3 ^ uVar15) - uVar15)) {
            uVar42 = uVar41;
          }
          iVar12 = (int)uVar43;
          *pbVar35 = *(byte *)(((int)(((bVar1 + 2) * 2 + iVar12 * 3 + (uint)bVar5 + (uint)bVar4) * 2
                                      + (uint)bVar7 + (uint)bVar6) >> 4) + iVar11);
          iVar16 = (int)uVar42;
          *pbVar34 = *(byte *)(((int)((((uint)bVar4 + iVar12 + 2) * 2 + (uint)bVar6 + (uint)bVar5 +
                                      (uint)bVar1) * 2 + (uint)bVar8 + (uint)bVar7) >> 4) + iVar11);
          *pbVar33 = *(byte *)(((int)(((bVar5 + 2) * 2 + (uint)bVar7 + (uint)bVar6 + (uint)bVar4 +
                                       (uint)bVar1 + iVar12) * 2 + (uint)bVar9 + (uint)bVar8) >> 4)
                              + iVar11);
          *pbVar36 = *(byte *)(((int)(((bVar6 + 2) * 2 + (uint)bVar8 + (uint)bVar7 + (uint)bVar5 +
                                      (uint)bVar4) * 2 + (uint)bVar10 + (uint)bVar9 + (uint)bVar1 +
                                     iVar12) >> 4) + iVar11);
          *pbVar37 = *(byte *)(((int)(((bVar7 + 2) * 2 + (uint)bVar9 + (uint)bVar8 + (uint)bVar6 +
                                      (uint)bVar5) * 2 + iVar16 + (uint)bVar10 + (uint)bVar4 +
                                     (uint)bVar1) >> 4) + iVar11);
          *pbVar32 = *(byte *)(((int)(((bVar8 + 2) * 2 + iVar16 + (uint)bVar10 + (uint)bVar9 +
                                       (uint)bVar7 + (uint)bVar6) * 2 + (uint)bVar5 + (uint)bVar4)
                               >> 4) + iVar11);
          *pbVar31 = *(byte *)(((int)(((iVar16 + (uint)bVar9 + 2) * 2 + (uint)bVar10 + (uint)bVar8 +
                                      (uint)bVar7) * 2 + (uint)bVar6 + (uint)bVar5) >> 4) + iVar11);
          *pbStack_c0 = *(byte *)(((int)(((bVar10 + 2) * 2 + iVar16 * 3 + (uint)bVar9 + (uint)bVar8)
                                         * 2 + (uint)bVar7 + (uint)bVar6) >> 4) + iVar11);
        }
      }
      pbVar34 = pbVar34 + in_stack_00000064;
      pbStack_bc = (byte *)((int)pbStack_bc + 1);
      pbStack_b8 = pbStack_b8 + in_stack_00000064;
      pbVar33 = pbVar33 + in_stack_00000064;
      pbVar32 = pbVar32 + in_stack_00000064;
      pbVar31 = pbVar31 + in_stack_00000064;
      pbStack_c0 = pbStack_c0 + in_stack_00000064;
      pbStack_b4 = pbStack_b4 + in_stack_00000064;
      pbVar35 = pbVar35 + in_stack_00000064;
      pbVar36 = pbVar36 + in_stack_00000064;
      pbVar37 = pbVar37 + in_stack_00000064;
    } while ((int)pbStack_bc < 0x10);
  }
  if (iStack00000034 != 0) {
    pbVar36 = pbStack0000001c + -1;
    iVar11 = *(int *)(iStack00000014 + 0x100);
    pbVar33 = pbStack0000001c + -2;
    pbVar32 = pbStack0000001c + 2;
    pbVar34 = pbStack0000001c + -3;
    pbStack_c0 = pbStack0000001c + 3;
    pbVar35 = pbStack0000001c + -4;
    pbStack_bc = pbStack0000001c + 4;
    pbStack_b8 = pbStack0000001c + -5;
    pbStack_b4 = (byte *)0x0;
    pbVar31 = pbStack0000001c;
    do {
      bVar1 = *pbVar35;
      uVar42 = (ulonglong)bVar1;
      bVar2 = *pbStack_b8;
      bVar3 = *pbStack_bc;
      bVar4 = *pbVar34;
      uVar44 = (ulonglong)bVar4;
      bVar5 = *pbVar33;
      uVar46 = (ulonglong)bVar5;
      bVar6 = *pbVar36;
      uVar48 = (ulonglong)bVar6;
      bVar7 = *pbVar31;
      uVar47 = (ulonglong)bVar7;
      bVar8 = pbVar31[1];
      uVar45 = (ulonglong)bVar8;
      bVar9 = *pbVar32;
      uVar43 = (ulonglong)bVar9;
      bVar10 = *pbStack_c0;
      uVar41 = (ulonglong)bVar10;
      if (((uint)pbStack_b4 & 3) == 0) {
        uVar26 = uVar41 - bVar3;
        uVar19 = (ulonglong)((int)uVar26 >> 0x1f);
        uVar19 = (uVar26 ^ uVar19) - uVar19;
        uVar26 = (ulonglong)((int)(uVar43 - uVar41) >> 0x1f);
        uVar26 = (uVar43 - uVar41 ^ uVar26) - uVar26;
        uVar14 = (ulonglong)((int)(uVar45 - uVar43) >> 0x1f);
        uVar14 = (uVar45 - uVar43 ^ uVar14) - uVar14;
        uVar24 = (ulonglong)((int)(uVar47 - uVar45) >> 0x1f);
        uVar24 = (uVar47 - uVar45 ^ uVar24) - uVar24;
        uVar17 = (ulonglong)((int)(uVar48 - uVar47) >> 0x1f);
        uVar17 = (uVar48 - uVar47 ^ uVar17) - uVar17;
        uVar21 = (ulonglong)((int)(uVar46 - uVar48) >> 0x1f);
        uVar21 = (uVar46 - uVar48 ^ uVar21) - uVar21;
        uVar25 = (ulonglong)((int)(uVar44 - uVar46) >> 0x1f);
        uVar25 = (uVar44 - uVar46 ^ uVar25) - uVar25;
        uVar20 = bVar2 - uVar42;
        uVar18 = (ulonglong)((int)(uVar42 - uVar44) >> 0x1f);
        uVar18 = (uVar42 - uVar44 ^ uVar18) - uVar18;
        uVar22 = (ulonglong)((int)uVar20 >> 0x1f);
        uVar22 = (uVar20 ^ uVar22) - uVar22;
        iStack_a0 = ((uint)(uVar19 < 3) - ((int)uVar19 >> 0x1f)) +
                    ((uint)(uVar26 < 3) - ((int)uVar26 >> 0x1f)) +
                    ((uint)(uVar14 < 3) - ((int)uVar14 >> 0x1f)) +
                    ((uint)(uVar24 < 3) - ((int)uVar24 >> 0x1f)) +
                    ((uint)(uVar17 < 3) - ((int)uVar17 >> 0x1f)) +
                    ((uint)(uVar21 < 3) - ((int)uVar21 >> 0x1f)) +
                    ((uint)(uVar25 < 3) - ((int)uVar25 >> 0x1f)) +
                    ((uint)(uVar18 < 3) - ((int)uVar18 >> 0x1f)) +
                    ((uint)(uVar22 < 3) - ((int)uVar22 >> 0x1f));
      }
      if (iStack_a0 < 6) {
        uVar26 = uVar48 - uVar47;
        iVar12 = (int)uVar26;
        uVar15 = (int)(((uVar46 - uVar45) + 2 & 0xffffffff) << 1) -
                 (iVar12 + (int)((uVar26 & 0xffffffff) << 2));
        uVar15 = ((int)uVar15 >> 3) + (uint)((int)uVar15 < 0 && (uVar15 & 7) != 0);
        iVar16 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
        if (iVar16 < in_stack_0000005c) {
          uVar13 = (int)(((uVar42 - uVar48) + 2 & 0xffffffff) << 1) +
                   (int)(uVar46 - uVar44) + (int)((uVar46 - uVar44 & 0xffffffff) << 2);
          uVar23 = (int)(((uVar47 - uVar41) + 2 & 0xffffffff) << 1) +
                   (int)(uVar43 - uVar45) + (int)((uVar43 - uVar45 & 0xffffffff) << 2);
          uVar29 = ((int)uVar13 >> 3) + (uint)((int)uVar13 < 0 && (uVar13 & 7) != 0);
          uVar27 = ((int)uVar23 >> 3) + (uint)((int)uVar23 < 0 && (uVar23 & 7) != 0);
          uVar13 = (int)uVar27 >> 0x1f;
          uVar23 = (int)uVar29 >> 0x1f;
          iVar30 = (uVar27 ^ uVar13) - uVar13;
          iVar28 = (uVar29 ^ uVar23) - uVar23;
          if (iVar28 < iVar30) {
            iVar30 = iVar28;
          }
          if (iVar30 < iVar16) {
            iVar16 = -1;
            if (-1 < (int)uVar15) {
              iVar16 = 1;
            }
            uVar42 = (longlong)(iVar12 >> 1) + (ulonglong)(iVar12 < 0 && (uVar26 & 1) != 0);
            uVar15 = (iVar16 * iVar30 - uVar15) * 5;
            uVar41 = (longlong)((int)uVar15 >> 3) +
                     (ulonglong)((int)uVar15 < 0 && (uVar15 & 7) != 0);
            if ((longlong)uVar42 < 1) {
              uVar41 = -((ulonglong)(uVar41 == 0) + ((uVar41 & 0xffffffff) >> 0x1f)) & uVar41;
              if ((int)uVar41 < (int)uVar42) goto LAB_82c829ec;
            }
            else {
              uVar41 = ((uVar41 & 0xffffffff) >> 0x1f) - 1 & uVar41;
              if ((int)uVar42 < (int)uVar41) {
LAB_82c829ec:
                uVar41 = uVar42;
              }
            }
            *pbVar36 = *(byte *)(((uint)bVar6 - (int)uVar41) + iVar11);
            *pbVar31 = *(byte *)((int)uVar41 + (uint)bVar7 + iVar11);
          }
        }
      }
      else {
        iVar12 = fn_82CAB2D8(uVar42,uVar44,uVar46,uVar48,uVar47,uVar45,uVar43,uVar41);
        if (iVar12 != 0) {
          uVar15 = (int)((uint)bVar1 - (uint)bVar2) >> 0x1f;
          uVar43 = (ulonglong)bVar2;
          if (in_stack_0000005c <= (int)(((uint)bVar1 - (uint)bVar2 ^ uVar15) - uVar15)) {
            uVar43 = uVar42;
          }
          uVar15 = (int)((uint)bVar10 - (uint)bVar3) >> 0x1f;
          uVar42 = (ulonglong)bVar3;
          if (in_stack_0000005c <= (int)(((uint)bVar10 - (uint)bVar3 ^ uVar15) - uVar15)) {
            uVar42 = uVar41;
          }
          iVar12 = (int)uVar43;
          *pbVar35 = *(byte *)(((int)(((bVar1 + 2) * 2 + iVar12 * 3 + (uint)bVar5 + (uint)bVar4) * 2
                                      + (uint)bVar7 + (uint)bVar6) >> 4) + iVar11);
          iVar16 = (int)uVar42;
          *pbVar34 = *(byte *)(((int)((((uint)bVar4 + iVar12 + 2) * 2 + (uint)bVar6 + (uint)bVar5 +
                                      (uint)bVar1) * 2 + (uint)bVar8 + (uint)bVar7) >> 4) + iVar11);
          *pbVar33 = *(byte *)(((int)(((bVar5 + 2) * 2 + (uint)bVar7 + (uint)bVar6 + (uint)bVar4 +
                                       (uint)bVar1 + iVar12) * 2 + (uint)bVar9 + (uint)bVar8) >> 4)
                              + iVar11);
          *pbVar36 = *(byte *)(((int)(((bVar6 + 2) * 2 + (uint)bVar8 + (uint)bVar7 + (uint)bVar5 +
                                      (uint)bVar4) * 2 + (uint)bVar10 + (uint)bVar9 + (uint)bVar1 +
                                     iVar12) >> 4) + iVar11);
          *pbVar31 = *(byte *)(((int)(((bVar7 + 2) * 2 + (uint)bVar9 + (uint)bVar8 + (uint)bVar6 +
                                      (uint)bVar5) * 2 + iVar16 + (uint)bVar10 + (uint)bVar4 +
                                     (uint)bVar1) >> 4) + iVar11);
          pbVar31[1] = *(byte *)(((int)(((bVar8 + 2) * 2 + iVar16 + (uint)bVar10 + (uint)bVar9 +
                                         (uint)bVar7 + (uint)bVar6) * 2 + (uint)bVar5 + (uint)bVar4)
                                 >> 4) + iVar11);
          *pbVar32 = *(byte *)(((int)(((iVar16 + (uint)bVar9 + 2) * 2 + (uint)bVar10 + (uint)bVar8 +
                                      (uint)bVar7) * 2 + (uint)bVar6 + (uint)bVar5) >> 4) + iVar11);
          *pbStack_c0 = *(byte *)(((int)(((bVar10 + 2) * 2 + iVar16 * 3 + (uint)bVar9 + (uint)bVar8)
                                         * 2 + (uint)bVar7 + (uint)bVar6) >> 4) + iVar11);
        }
      }
      pbVar34 = pbVar34 + in_stack_00000064;
      pbStack_b4 = (byte *)((int)pbStack_b4 + 1);
      pbStack_b8 = pbStack_b8 + in_stack_00000064;
      pbVar33 = pbVar33 + in_stack_00000064;
      pbVar32 = pbVar32 + in_stack_00000064;
      pbStack_c0 = pbStack_c0 + in_stack_00000064;
      pbStack_bc = pbStack_bc + in_stack_00000064;
      pbVar35 = pbVar35 + in_stack_00000064;
      pbVar36 = pbVar36 + in_stack_00000064;
      pbVar31 = pbVar31 + in_stack_00000064;
    } while ((int)pbStack_b4 < 0x10);
  }
  if (iStack0000003c != 0) {
    pbVar36 = pbStack0000001c + 0x10;
    iVar11 = *(int *)(iStack00000014 + 0x100);
    pbVar40 = pbStack0000001c + 0xf;
    pbVar35 = pbStack0000001c + 0x11;
    uStack_a4 = 0x10;
    pbVar37 = pbStack0000001c + 0xe;
    pbVar33 = pbStack0000001c + 0x12;
    pbVar38 = pbStack0000001c + 0xd;
    pbVar34 = pbStack0000001c + 0x13;
    pbVar39 = pbStack0000001c + 0xc;
    pbVar31 = pbStack0000001c + 0x14;
    pbVar32 = pbStack0000001c + 0xb;
    do {
      bVar1 = *pbVar34;
      uVar24 = (ulonglong)bVar1;
      bVar2 = *pbVar32;
      bVar3 = *pbVar33;
      uVar17 = (ulonglong)bVar3;
      bVar4 = *pbVar35;
      uVar18 = (ulonglong)bVar4;
      uVar46 = (ulonglong)((int)(uVar24 - *pbVar31) >> 0x1f);
      bVar5 = *pbVar36;
      uVar25 = (ulonglong)bVar5;
      bVar6 = *pbVar37;
      uVar22 = (ulonglong)bVar6;
      bVar7 = *pbVar40;
      uVar19 = (ulonglong)bVar7;
      bVar8 = *pbVar38;
      uVar20 = (ulonglong)bVar8;
      uVar46 = (uVar24 - *pbVar31 ^ uVar46) - uVar46;
      bVar9 = *pbVar39;
      uVar21 = (ulonglong)bVar9;
      uVar41 = (ulonglong)((int)(uVar17 - uVar24) >> 0x1f);
      uVar41 = (uVar17 - uVar24 ^ uVar41) - uVar41;
      uVar47 = (ulonglong)((int)(uVar18 - uVar17) >> 0x1f);
      uVar47 = (uVar18 - uVar17 ^ uVar47) - uVar47;
      uVar42 = (ulonglong)((int)(uVar25 - uVar18) >> 0x1f);
      uVar42 = (uVar25 - uVar18 ^ uVar42) - uVar42;
      uVar26 = (ulonglong)((int)(uVar22 - uVar19) >> 0x1f);
      uVar26 = (uVar22 - uVar19 ^ uVar26) - uVar26;
      uVar44 = (ulonglong)((int)(uVar20 - uVar22) >> 0x1f);
      uVar44 = (uVar20 - uVar22 ^ uVar44) - uVar44;
      uVar14 = uVar19 - uVar25;
      uVar45 = (ulonglong)((int)(uVar21 - uVar20) >> 0x1f);
      uVar45 = (uVar21 - uVar20 ^ uVar45) - uVar45;
      uVar48 = bVar2 - uVar21;
      uVar43 = (ulonglong)((int)uVar48 >> 0x1f);
      uVar43 = (uVar48 ^ uVar43) - uVar43;
      iVar12 = (int)uVar14;
      uVar48 = (uVar14 ^ (longlong)(iVar12 >> 0x1f)) - (longlong)(iVar12 >> 0x1f);
      if (((uint)(uVar46 < 3) - ((int)uVar46 >> 0x1f)) +
          ((uint)(uVar41 < 3) - ((int)uVar41 >> 0x1f)) +
          ((uint)(uVar47 < 3) - ((int)uVar47 >> 0x1f)) +
          ((uint)(uVar42 < 3) - ((int)uVar42 >> 0x1f)) +
          ((uint)(uVar26 < 3) - ((int)uVar26 >> 0x1f)) +
          ((uint)(uVar44 < 3) - ((int)uVar44 >> 0x1f)) +
          ((uint)(uVar45 < 3) - ((int)uVar45 >> 0x1f)) +
          ((uint)(uVar43 < 3) - ((int)uVar43 >> 0x1f)) +
          ((uint)(uVar48 < 3) - ((int)uVar48 >> 0x1f)) < 6) {
        uVar15 = (int)(((uVar22 - uVar18) + 2 & 0xffffffff) << 1) -
                 (iVar12 + (int)((uVar14 & 0xffffffff) << 2));
        uVar15 = ((int)uVar15 >> 3) + (uint)((int)uVar15 < 0 && (uVar15 & 7) != 0);
        iVar16 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
        if (iVar16 < in_stack_0000005c) {
          uVar13 = (int)(((uVar21 - uVar19) + 2 & 0xffffffff) << 1) +
                   (int)(uVar22 - uVar20) + (int)((uVar22 - uVar20 & 0xffffffff) << 2);
          uVar23 = (int)(((uVar25 - uVar24) + 2 & 0xffffffff) << 1) +
                   (int)(uVar17 - uVar18) + (int)((uVar17 - uVar18 & 0xffffffff) << 2);
          uVar29 = ((int)uVar13 >> 3) + (uint)((int)uVar13 < 0 && (uVar13 & 7) != 0);
          uVar27 = ((int)uVar23 >> 3) + (uint)((int)uVar23 < 0 && (uVar23 & 7) != 0);
          uVar13 = (int)uVar27 >> 0x1f;
          uVar23 = (int)uVar29 >> 0x1f;
          iVar30 = (uVar27 ^ uVar13) - uVar13;
          iVar28 = (uVar29 ^ uVar23) - uVar23;
          if (iVar28 < iVar30) {
            iVar30 = iVar28;
          }
          if (iVar30 < iVar16) {
            iVar16 = -1;
            if (-1 < (int)uVar15) {
              iVar16 = 1;
            }
            uVar42 = (longlong)(iVar12 >> 1) + (ulonglong)(iVar12 < 0 && (uVar14 & 1) != 0);
            uVar15 = (iVar16 * iVar30 - uVar15) * 5;
            uVar41 = (longlong)((int)uVar15 >> 3) +
                     (ulonglong)((int)uVar15 < 0 && (uVar15 & 7) != 0);
            if ((longlong)uVar42 < 1) {
              uVar41 = -((ulonglong)(uVar41 == 0) + ((uVar41 & 0xffffffff) >> 0x1f)) & uVar41;
              if ((int)uVar41 < (int)uVar42) goto LAB_82c82e84;
            }
            else {
              uVar41 = ((uVar41 & 0xffffffff) >> 0x1f) - 1 & uVar41;
              if ((int)uVar42 < (int)uVar41) {
LAB_82c82e84:
                uVar41 = uVar42;
              }
            }
            *pbVar40 = *(byte *)(((uint)bVar7 - (int)uVar41) + iVar11);
          }
        }
      }
      else {
        iVar12 = fn_82CAB2D8(uVar21,uVar20,uVar22,uVar19,uVar25,uVar18,uVar17,uVar24);
        if (iVar12 != 0) {
          uVar15 = (int)((uint)bVar9 - (uint)bVar2) >> 0x1f;
          uVar41 = (ulonglong)bVar2;
          if (in_stack_0000005c <= (int)(((uint)bVar9 - (uint)bVar2 ^ uVar15) - uVar15)) {
            uVar41 = uVar21;
          }
          iVar12 = (int)uVar41;
          *pbVar39 = *(byte *)(((int)(((bVar9 + 2) * 2 + iVar12 * 3 + (uint)bVar6 + (uint)bVar8) * 2
                                      + (uint)bVar5 + (uint)bVar7) >> 4) + iVar11);
          *pbVar38 = *(byte *)(((int)((((uint)bVar8 + iVar12 + 2) * 2 + (uint)bVar7 + (uint)bVar6 +
                                      (uint)bVar9) * 2 + (uint)bVar4 + (uint)bVar5) >> 4) + iVar11);
          *pbVar37 = *(byte *)(((int)(((bVar6 + 2) * 2 + (uint)bVar5 + (uint)bVar7 + (uint)bVar8 +
                                       (uint)bVar9 + iVar12) * 2 + (uint)bVar3 + (uint)bVar4) >> 4)
                              + iVar11);
          *pbVar40 = *(byte *)(((int)(((bVar7 + 2) * 2 + (uint)bVar4 + (uint)bVar5 + (uint)bVar6 +
                                      (uint)bVar8) * 2 + (uint)bVar1 + (uint)bVar3 + (uint)bVar9 +
                                     iVar12) >> 4) + iVar11);
        }
      }
      uVar41 = (ulonglong)uStack_a4;
      pbVar39 = pbVar39 + in_stack_00000064;
      pbVar32 = pbVar32 + in_stack_00000064;
      pbVar33 = pbVar33 + in_stack_00000064;
      pbVar34 = pbVar34 + in_stack_00000064;
      uStack_a4 = (uint)(uVar41 - 1);
      pbVar31 = pbVar31 + in_stack_00000064;
      pbVar38 = pbVar38 + in_stack_00000064;
      pbVar37 = pbVar37 + in_stack_00000064;
      pbVar40 = pbVar40 + in_stack_00000064;
      pbVar36 = pbVar36 + in_stack_00000064;
      pbVar35 = pbVar35 + in_stack_00000064;
    } while (uVar41 - 1 != 0);
  }
  return;
}

