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
extern int fn_82CAB3D0();
extern unsigned int iStack00000014;
extern unsigned int iStack00000034;
extern unsigned int iStack0000003c;
extern unsigned int iStack_9c;


void fn_82C82EF8(int param_1,byte *param_2,undefined8 param_3,undefined8 param_4,int param_5,
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
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  int iStack00000014;
  byte *pbStack0000001c;
  int iStack00000034;
  int iStack0000003c;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int iStack_9c;
  
  iStack00000014 = param_1;
  pbStack0000001c = param_2;
  iStack00000034 = param_5;
  iStack0000003c = param_6;
  if (in_stack_00000054 != 0) {
    pbVar29 = param_2 + 8;
    iVar9 = *(int *)(param_1 + 0x100);
    uVar23 = 0;
    pbVar28 = param_2 + 7;
    pbVar25 = param_2 + 9;
    pbVar26 = param_2 + 6;
    pbVar24 = param_2 + 10;
    pbVar27 = param_2 + 5;
    pbVar22 = param_2 + 0xb;
    param_2 = param_2 + 4;
    do {
      bVar1 = *param_2;
      bVar2 = *pbVar22;
      bVar3 = *pbVar27;
      uVar32 = (ulonglong)bVar3;
      bVar4 = *pbVar26;
      bVar5 = *pbVar28;
      uVar35 = (ulonglong)bVar5;
      bVar6 = *pbVar29;
      uVar34 = (ulonglong)bVar6;
      bVar7 = *pbVar25;
      uVar33 = (ulonglong)bVar7;
      bVar8 = *pbVar24;
      uVar31 = (ulonglong)bVar8;
      if ((uVar23 & 3) == 0) {
        uVar19 = uVar31 - bVar2;
        uVar18 = (ulonglong)((int)uVar19 >> 0x1f);
        uVar18 = (uVar19 ^ uVar18) - uVar18;
        uVar19 = (ulonglong)((int)(uVar33 - uVar31) >> 0x1f);
        uVar19 = (uVar33 - uVar31 ^ uVar19) - uVar19;
        uVar16 = (ulonglong)((int)(uVar34 - uVar33) >> 0x1f);
        uVar16 = (uVar34 - uVar33 ^ uVar16) - uVar16;
        uVar36 = uVar32 - bVar4;
        uVar11 = (ulonglong)((int)(uVar35 - uVar34) >> 0x1f);
        uVar11 = (uVar35 - uVar34 ^ uVar11) - uVar11;
        uVar15 = bVar1 - uVar32;
        uVar12 = (ulonglong)((int)((uint)bVar4 - (uint)bVar5) >> 0x1f);
        uVar12 = ((uint)bVar4 - (uint)bVar5 ^ uVar12) - uVar12;
        uVar13 = (ulonglong)((int)uVar36 >> 0x1f);
        uVar13 = (uVar36 ^ uVar13) - uVar13;
        uVar36 = (ulonglong)((int)uVar15 >> 0x1f);
        uVar36 = (uVar15 ^ uVar36) - uVar36;
        iStack_9c = ((uint)(uVar18 < 3) - ((int)uVar18 >> 0x1f)) +
                    ((uint)(uVar19 < 3) - ((int)uVar19 >> 0x1f)) +
                    ((uint)(uVar16 < 3) - ((int)uVar16 >> 0x1f)) +
                    ((uint)(uVar11 < 3) - ((int)uVar11 >> 0x1f)) +
                    ((uint)(uVar12 < 3) - ((int)uVar12 >> 0x1f)) +
                    ((uint)(uVar13 < 3) - ((int)uVar13 >> 0x1f)) +
                    ((uint)(uVar36 < 3) - ((int)uVar36 >> 0x1f));
      }
      uVar20 = (uint)bVar5;
      if (iStack_9c < 5) {
        uVar34 = uVar34 - uVar35;
        if ((uVar34 != 0) &&
           (uVar21 = (uint)uVar34,
           (int)((uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f)) < in_stack_0000005c)) {
          iVar14 = ((int)uVar21 >> 2) + (uint)((int)uVar21 < 0 && (uVar34 & 3) != 0);
          *pbVar28 = *(byte *)(iVar14 + uVar20 + iVar9);
          *pbVar29 = *(byte *)(((uint)bVar6 - iVar14) + iVar9);
        }
      }
      else {
        iVar14 = fn_82CAB3D0(uVar32,(ulonglong)bVar4,uVar35,uVar34,uVar33,uVar31,
                                 in_stack_0000005c << 1);
        if (iVar14 != 0) {
          uVar21 = (int)((uint)bVar3 - (uint)bVar1) >> 0x1f;
          uVar34 = (ulonglong)bVar1;
          if (in_stack_0000005c <= (int)(((uint)bVar3 - (uint)bVar1 ^ uVar21) - uVar21)) {
            uVar34 = uVar32;
          }
          uVar21 = (int)((uint)bVar8 - (uint)bVar2) >> 0x1f;
          uVar32 = (ulonglong)bVar2;
          if (in_stack_0000005c <= (int)(((uint)bVar8 - (uint)bVar2 ^ uVar21) - uVar21)) {
            uVar32 = uVar31;
          }
          iVar14 = (int)uVar34;
          iVar10 = (int)uVar32;
          *pbVar27 = *(byte *)(((int)((bVar3 + 2) * 2 + iVar14 + (int)(uVar34 << 1) + (uint)bVar6 +
                                      uVar20 + (uint)bVar4) >> 3) + iVar9);
          *pbVar26 = *(byte *)(((int)(((uint)bVar4 + iVar14 + 2) * 2 + (uint)bVar7 + (uint)bVar6 +
                                      uVar20 + (uint)bVar3) >> 3) + iVar9);
          *pbVar28 = *(byte *)(((int)((bVar5 + 2) * 2 + (uint)bVar8 + (uint)bVar7 + (uint)bVar6 +
                                      (uint)bVar4 + (uint)bVar3 + iVar14) >> 3) + iVar9);
          *pbVar29 = *(byte *)(((int)((bVar6 + 2) * 2 + iVar10 + (uint)bVar8 + (uint)bVar7 + uVar20
                                      + (uint)bVar4 + (uint)bVar3) >> 3) + iVar9);
          *pbVar25 = *(byte *)(((int)((iVar10 + (uint)bVar7 + 2) * 2 + (uint)bVar8 + (uint)bVar6 +
                                      uVar20 + (uint)bVar4) >> 3) + iVar9);
          *pbVar24 = *(byte *)(((int)((bVar8 + 2) * 2 + iVar10 + (int)(uVar32 << 1) + (uint)bVar7 +
                                      (uint)bVar6 + uVar20) >> 3) + iVar9);
        }
      }
      uVar23 = uVar23 + 1;
      param_2 = param_2 + in_stack_00000064;
      pbVar22 = pbVar22 + in_stack_00000064;
      pbVar27 = pbVar27 + in_stack_00000064;
      pbVar26 = pbVar26 + in_stack_00000064;
      pbVar28 = pbVar28 + in_stack_00000064;
      pbVar29 = pbVar29 + in_stack_00000064;
      pbVar25 = pbVar25 + in_stack_00000064;
      pbVar24 = pbVar24 + in_stack_00000064;
    } while ((int)uVar23 < 0x10);
  }
  if (iStack00000034 != 0) {
    pbVar29 = pbStack0000001c + -1;
    iVar9 = *(int *)(iStack00000014 + 0x100);
    pbVar27 = pbStack0000001c + -2;
    pbVar26 = pbStack0000001c + 2;
    pbVar28 = pbStack0000001c + -3;
    pbVar24 = pbStack0000001c + 3;
    pbVar25 = pbStack0000001c + -4;
    uVar23 = 0;
    pbVar22 = pbStack0000001c;
    do {
      bVar1 = *pbVar25;
      bVar2 = *pbVar24;
      bVar3 = *pbVar28;
      uVar32 = (ulonglong)bVar3;
      bVar4 = *pbVar27;
      bVar5 = *pbVar29;
      uVar35 = (ulonglong)bVar5;
      bVar6 = *pbVar22;
      uVar34 = (ulonglong)bVar6;
      bVar7 = pbVar22[1];
      uVar33 = (ulonglong)bVar7;
      bVar8 = *pbVar26;
      uVar31 = (ulonglong)bVar8;
      if ((uVar23 & 3) == 0) {
        uVar19 = uVar31 - bVar2;
        uVar15 = (ulonglong)((int)uVar19 >> 0x1f);
        uVar15 = (uVar19 ^ uVar15) - uVar15;
        uVar19 = (ulonglong)((int)(uVar33 - uVar31) >> 0x1f);
        uVar12 = bVar4 - uVar35;
        uVar19 = (uVar33 - uVar31 ^ uVar19) - uVar19;
        uVar18 = (ulonglong)((int)(uVar34 - uVar33) >> 0x1f);
        uVar18 = (uVar34 - uVar33 ^ uVar18) - uVar18;
        uVar16 = (ulonglong)((int)(uVar35 - uVar34) >> 0x1f);
        uVar16 = (uVar35 - uVar34 ^ uVar16) - uVar16;
        uVar13 = bVar1 - uVar32;
        uVar11 = (ulonglong)((int)uVar12 >> 0x1f);
        uVar11 = (uVar12 ^ uVar11) - uVar11;
        uVar12 = (ulonglong)((int)((uint)bVar3 - (uint)bVar4) >> 0x1f);
        uVar12 = ((uint)bVar3 - (uint)bVar4 ^ uVar12) - uVar12;
        uVar36 = (ulonglong)((int)uVar13 >> 0x1f);
        uVar36 = (uVar13 ^ uVar36) - uVar36;
        iStack_9c = ((uint)(uVar15 < 3) - ((int)uVar15 >> 0x1f)) +
                    ((uint)(uVar19 < 3) - ((int)uVar19 >> 0x1f)) +
                    ((uint)(uVar18 < 3) - ((int)uVar18 >> 0x1f)) +
                    ((uint)(uVar16 < 3) - ((int)uVar16 >> 0x1f)) +
                    ((uint)(uVar11 < 3) - ((int)uVar11 >> 0x1f)) +
                    ((uint)(uVar12 < 3) - ((int)uVar12 >> 0x1f)) +
                    (int)((uVar36 & 0xffffffff) >> 0x1f) + (uint)(uVar36 < 3);
      }
      if (iStack_9c < 5) {
        uVar34 = uVar34 - uVar35;
        if ((uVar34 != 0) &&
           (uVar20 = (uint)uVar34,
           (int)((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f)) < in_stack_0000005c)) {
          iVar14 = ((int)uVar20 >> 2) + (uint)((int)uVar20 < 0 && (uVar34 & 3) != 0);
          *pbVar29 = *(byte *)((uint)bVar5 + iVar9 + iVar14);
          *pbVar22 = *(byte *)(((uint)bVar6 - iVar14) + iVar9);
        }
      }
      else {
        iVar14 = fn_82CAB3D0(uVar32,(ulonglong)bVar4,uVar35,uVar34,uVar33,uVar31,
                                 in_stack_0000005c << 1);
        if (iVar14 != 0) {
          uVar20 = (int)((uint)bVar3 - (uint)bVar1) >> 0x1f;
          uVar34 = (ulonglong)bVar1;
          if (in_stack_0000005c <= (int)(((uint)bVar3 - (uint)bVar1 ^ uVar20) - uVar20)) {
            uVar34 = uVar32;
          }
          uVar20 = (int)((uint)bVar8 - (uint)bVar2) >> 0x1f;
          uVar32 = (ulonglong)bVar2;
          if (in_stack_0000005c <= (int)(((uint)bVar8 - (uint)bVar2 ^ uVar20) - uVar20)) {
            uVar32 = uVar31;
          }
          iVar14 = (int)uVar34;
          iVar10 = (int)uVar32;
          *pbVar28 = *(byte *)(((int)((bVar3 + 2) * 2 + iVar14 + (int)(uVar34 << 1) + (uint)bVar6 +
                                      (uint)bVar5 + (uint)bVar4) >> 3) + iVar9);
          *pbVar27 = *(byte *)(((int)(((uint)bVar4 + iVar14 + 2) * 2 + (uint)bVar7 + (uint)bVar6 +
                                      (uint)bVar5 + (uint)bVar3) >> 3) + iVar9);
          *pbVar29 = *(byte *)(((int)((bVar5 + 2) * 2 + (uint)bVar8 + (uint)bVar7 + (uint)bVar6 +
                                      (uint)bVar4 + (uint)bVar3 + iVar14) >> 3) + iVar9);
          *pbVar22 = *(byte *)(((int)((bVar6 + 2) * 2 + iVar10 + (uint)bVar8 + (uint)bVar7 +
                                      (uint)bVar5 + (uint)bVar4 + (uint)bVar3) >> 3) + iVar9);
          pbVar22[1] = *(byte *)(((int)((iVar10 + (uint)bVar7 + 2) * 2 + (uint)bVar8 + (uint)bVar6 +
                                        (uint)bVar5 + (uint)bVar4) >> 3) + iVar9);
          *pbVar26 = *(byte *)(((int)((bVar8 + 2) * 2 + iVar10 + (int)(uVar32 << 1) + (uint)bVar7 +
                                      (uint)bVar6 + (uint)bVar5) >> 3) + iVar9);
        }
      }
      uVar23 = uVar23 + 1;
      pbVar25 = pbVar25 + in_stack_00000064;
      pbVar24 = pbVar24 + in_stack_00000064;
      pbVar28 = pbVar28 + in_stack_00000064;
      pbVar27 = pbVar27 + in_stack_00000064;
      pbVar29 = pbVar29 + in_stack_00000064;
      pbVar22 = pbVar22 + in_stack_00000064;
      pbVar26 = pbVar26 + in_stack_00000064;
    } while ((int)uVar23 < 0x10);
  }
  if (iStack0000003c != 0) {
    pbVar26 = pbStack0000001c + 0x10;
    iVar9 = *(int *)(iStack00000014 + 0x100);
    uVar23 = 0;
    pbVar30 = pbStack0000001c + 0xf;
    pbVar25 = pbStack0000001c + 0x11;
    pbVar28 = pbStack0000001c + 0xe;
    pbVar24 = pbStack0000001c + 0x12;
    pbVar29 = pbStack0000001c + 0xd;
    pbVar27 = pbStack0000001c + 0x13;
    pbVar22 = pbStack0000001c + 0xc;
    do {
      bVar1 = *pbVar22;
      bVar2 = *pbVar26;
      uVar34 = (ulonglong)bVar2;
      bVar3 = *pbVar25;
      uVar32 = (ulonglong)bVar3;
      bVar4 = *pbVar24;
      uVar31 = (ulonglong)bVar4;
      bVar5 = *pbVar29;
      uVar19 = (ulonglong)bVar5;
      bVar6 = *pbVar28;
      uVar33 = (ulonglong)bVar6;
      bVar7 = *pbVar30;
      uVar35 = (ulonglong)bVar7;
      if ((uVar23 & 3) == 0) {
        uVar15 = (ulonglong)((int)(uVar31 - *pbVar27) >> 0x1f);
        uVar15 = (uVar31 - *pbVar27 ^ uVar15) - uVar15;
        uVar11 = (ulonglong)((int)(uVar32 - uVar31) >> 0x1f);
        uVar11 = (uVar32 - uVar31 ^ uVar11) - uVar11;
        uVar12 = (ulonglong)((int)(uVar34 - uVar32) >> 0x1f);
        uVar12 = (uVar34 - uVar32 ^ uVar12) - uVar12;
        uVar16 = bVar1 - uVar19;
        uVar36 = (ulonglong)((int)(uVar35 - uVar34) >> 0x1f);
        uVar36 = (uVar35 - uVar34 ^ uVar36) - uVar36;
        uVar17 = (ulonglong)((int)(uVar33 - uVar35) >> 0x1f);
        uVar17 = (uVar33 - uVar35 ^ uVar17) - uVar17;
        uVar13 = (ulonglong)((int)(uVar19 - uVar33) >> 0x1f);
        uVar13 = (uVar19 - uVar33 ^ uVar13) - uVar13;
        uVar18 = (ulonglong)((int)uVar16 >> 0x1f);
        uVar18 = (uVar16 ^ uVar18) - uVar18;
        iStack_9c = ((uint)(uVar15 < 3) - ((int)uVar15 >> 0x1f)) +
                    ((uint)(uVar11 < 3) - ((int)uVar11 >> 0x1f)) +
                    ((uint)(uVar12 < 3) - ((int)uVar12 >> 0x1f)) +
                    ((uint)(uVar36 < 3) - ((int)uVar36 >> 0x1f)) +
                    ((uint)(uVar17 < 3) - ((int)uVar17 >> 0x1f)) +
                    ((uint)(uVar13 < 3) - ((int)uVar13 >> 0x1f)) +
                    (int)((uVar18 & 0xffffffff) >> 0x1f) + (uint)(uVar18 < 3);
      }
      uVar20 = (uint)bVar7;
      if (iStack_9c < 5) {
        uVar34 = uVar34 - uVar35;
        if ((uVar34 != 0) &&
           (uVar21 = (uint)uVar34,
           (int)((uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f)) < in_stack_0000005c)) {
          *pbVar30 = *(byte *)(((int)uVar21 >> 2) + (uint)((int)uVar21 < 0 && (uVar34 & 3) != 0) +
                               uVar20 + iVar9);
        }
      }
      else {
        iVar14 = fn_82CAB3D0(uVar19,uVar33,uVar35,uVar34,uVar32,uVar31,in_stack_0000005c << 1);
        if (iVar14 != 0) {
          uVar21 = (int)((uint)bVar5 - (uint)bVar1) >> 0x1f;
          uVar34 = (ulonglong)bVar1;
          if (in_stack_0000005c <= (int)(((uint)bVar5 - (uint)bVar1 ^ uVar21) - uVar21)) {
            uVar34 = uVar19;
          }
          iVar14 = (int)uVar34;
          *pbVar29 = *(byte *)(((int)((bVar5 + 2) * 2 + iVar14 + (int)(uVar34 << 1) + (uint)bVar2 +
                                      uVar20 + (uint)bVar6) >> 3) + iVar9);
          *pbVar28 = *(byte *)(((int)(((uint)bVar6 + iVar14 + 2) * 2 + (uint)bVar3 + (uint)bVar2 +
                                      uVar20 + (uint)bVar5) >> 3) + iVar9);
          *pbVar30 = *(byte *)(((int)((bVar7 + 2) * 2 + (uint)bVar4 + (uint)bVar3 + (uint)bVar2 +
                                      (uint)bVar6 + (uint)bVar5 + iVar14) >> 3) + iVar9);
        }
      }
      uVar23 = uVar23 + 1;
      pbVar22 = pbVar22 + in_stack_00000064;
      pbVar25 = pbVar25 + in_stack_00000064;
      pbVar24 = pbVar24 + in_stack_00000064;
      pbVar29 = pbVar29 + in_stack_00000064;
      pbVar28 = pbVar28 + in_stack_00000064;
      pbVar30 = pbVar30 + in_stack_00000064;
      pbVar26 = pbVar26 + in_stack_00000064;
      pbVar27 = pbVar27 + in_stack_00000064;
    } while ((int)uVar23 < 0x10);
  }
  return;
}

