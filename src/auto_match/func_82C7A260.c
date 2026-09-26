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
extern unsigned int iStack_124;
extern unsigned int iStack_e4;


void fn_82C7A260(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  int iVar28;
  int *piVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  longlong lVar35;
  int aiStack_180 [16];
  int aiStack_140 [7];
  int iStack_124;
  int aiStack_120 [8];
  int aiStack_100 [7];
  int iStack_e4;
  int aiStack_e0 [8];
  int aiStack_c0 [8];
  int aiStack_a0 [40];
  
  piVar21 = (int *)(param_3 + -4);
  piVar29 = aiStack_180 + 2;
  lVar35 = 8;
  do {
    piVar1 = piVar21 + 3;
    piVar2 = piVar21 + 7;
    piVar3 = piVar21 + 2;
    piVar4 = piVar21 + 4;
    piVar5 = piVar21 + 6;
    piVar6 = piVar21 + 5;
    piVar21 = piVar21 + 8;
    iVar19 = (*piVar21 + *piVar3) * 0x235;
    iVar15 = (*piVar5 + *piVar4) * 0x968;
    iVar34 = iVar19 + *piVar21 * -0xd4e;
    iVar19 = *piVar3 * 0x8e4 + iVar19;
    iVar28 = iVar15 + *piVar4 * -0xfb1;
    iVar15 = iVar15 + *piVar5 * -799;
    iVar13 = iVar34 - iVar28;
    iVar9 = iVar19 - iVar15;
    iVar11 = (*piVar2 + *piVar1) * 0x454;
    iVar20 = *(int *)((param_3 - (int)(aiStack_180 + 2)) + (int)piVar29) * 0x800 + 0x80;
    iVar12 = *piVar1 * 0x620 + iVar11;
    iVar8 = iVar20 + *piVar6 * 0x800;
    iVar20 = iVar20 + *piVar6 * -0x800;
    iVar11 = iVar11 + *piVar2 * -0xec8;
    iVar30 = iVar8 - iVar12;
    iVar8 = iVar8 + iVar12;
    iVar15 = iVar15 + iVar19;
    iVar19 = iVar20 + iVar11;
    iVar12 = (iVar13 + iVar9) * 0xb5 + 0x80 >> 8;
    iVar20 = iVar20 - iVar11;
    iVar13 = (iVar9 - iVar13) * 0xb5 + 0x80 >> 8;
    iVar34 = iVar34 + iVar28;
    piVar29[-2] = iVar15 + iVar8 >> 8;
    piVar29[-1] = iVar12 + iVar19 >> 8;
    *piVar29 = iVar20 + iVar13 >> 8;
    piVar29[1] = iVar30 + iVar34 >> 8;
    piVar29[2] = iVar30 - iVar34 >> 8;
    piVar29[3] = iVar20 - iVar13 >> 8;
    piVar29[4] = iVar19 - iVar12 >> 8;
    piVar29[5] = iVar8 - iVar15 >> 8;
    piVar29 = piVar29 + 8;
    lVar35 = lVar35 + -1;
  } while (lVar35 != 0);
  puVar18 = (undefined1 *)(param_1 + param_2);
  param_1 = param_1 - (int)puVar18;
  lVar35 = 8;
  piVar29 = &iStack_124;
  piVar21 = &iStack_e4;
  puVar24 = puVar18 + param_2 * 4 + -1;
  puVar23 = puVar18 + param_2 * 5 + -1;
  puVar22 = puVar18 + param_2 * 6 + -1;
  puVar25 = puVar18 + param_2 * 3 + -1;
  puVar26 = puVar18 + param_2 * 2 + -1;
  puVar27 = puVar18 + param_2 + -1;
  do {
    piVar1 = piVar21 + -0x1f;
    piVar2 = piVar21 + 0x11;
    piVar3 = piVar21 + 9;
    piVar4 = piVar21 + -0x17;
    piVar5 = piVar21 + -0x27;
    piVar6 = piVar21 + -7;
    piVar21 = piVar21 + 1;
    piVar29 = piVar29 + 1;
    iVar13 = (*piVar2 + *piVar1) * 0x235 + 4;
    iVar19 = (*piVar21 + *piVar29) * 0x968 + 4;
    iVar12 = *piVar1 * 0x8e4 + iVar13 >> 3;
    iVar13 = iVar13 + *piVar2 * -0xd4e >> 3;
    iVar8 = iVar19 + *piVar21 * -799 >> 3;
    iVar19 = iVar19 + *piVar29 * -0xfb1 >> 3;
    iVar34 = iVar12 - iVar8;
    iVar11 = iVar13 - iVar19;
    iVar20 = (*piVar3 + *piVar4) * 0x454 + 4;
    iVar15 = (*piVar5 + 0x20) * 0x100;
    iVar9 = iVar20 + *piVar3 * -0xec8 >> 3;
    iVar30 = iVar15 + *piVar6 * 0x100;
    iVar20 = *piVar4 * 0x620 + iVar20 >> 3;
    iVar8 = iVar8 + iVar12;
    iVar15 = iVar15 + *piVar6 * -0x100;
    iVar28 = iVar30 + iVar20;
    iVar13 = iVar13 + iVar19;
    iVar30 = iVar30 - iVar20;
    iVar20 = iVar15 + iVar9;
    iVar15 = iVar15 - iVar9;
    iVar12 = (iVar11 + iVar34) * 0xb5 + 0x80 >> 8;
    uVar7 = iVar8 + iVar28;
    iVar19 = (iVar34 - iVar11) * 0xb5 + 0x80 >> 8;
    uVar16 = iVar28 - iVar8;
    uVar32 = iVar12 + iVar20;
    uVar10 = iVar20 - iVar12;
    iVar12 = (int)uVar7 >> 0xe;
    iVar8 = (int)uVar16 >> 0xe;
    uVar31 = iVar15 + iVar19;
    uVar17 = iVar15 - iVar19;
    iVar19 = (int)uVar32 >> 0xe;
    uVar33 = iVar30 + iVar13;
    iVar9 = (int)uVar10 >> 0xe;
    iVar20 = (int)uVar31 >> 0xe;
    iVar11 = (int)uVar17 >> 0xe;
    iVar34 = (int)uVar33 >> 0xe;
    uVar14 = iVar30 - iVar13;
    iVar13 = (int)uVar14 >> 0xe;
    if (((int)(uVar33 | uVar7 | uVar10 | uVar14 | uVar16 | uVar32 | uVar31 | uVar17) >> 0xe &
        0xffffff00U) != 0) {
      if (iVar34 < 0) {
        iVar34 = 0;
      }
      else if (0xff < iVar34) {
        iVar34 = 0xff;
      }
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0xff < iVar8) {
        iVar8 = 0xff;
      }
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0xff < iVar9) {
        iVar9 = 0xff;
      }
      if (iVar20 < 0) {
        iVar20 = 0;
      }
      else if (0xff < iVar20) {
        iVar20 = 0xff;
      }
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      else if (0xff < iVar11) {
        iVar11 = 0xff;
      }
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      else if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      if (iVar13 < 0) {
        iVar13 = 0;
      }
      else if (0xff < iVar13) {
        iVar13 = 0xff;
      }
      if (iVar19 < 0) {
        iVar19 = 0;
      }
      else if (0xff < iVar19) {
        iVar19 = 0xff;
      }
    }
    puVar18[param_1] = (char)iVar12;
    *puVar18 = (char)iVar19;
    puVar18 = puVar18 + 1;
    puVar27 = puVar27 + 1;
    *puVar27 = (char)iVar20;
    puVar26 = puVar26 + 1;
    *puVar26 = (char)iVar34;
    puVar25 = puVar25 + 1;
    *puVar25 = (char)iVar13;
    puVar24 = puVar24 + 1;
    *puVar24 = (char)iVar11;
    puVar23 = puVar23 + 1;
    *puVar23 = (char)iVar9;
    puVar22 = puVar22 + 1;
    *puVar22 = (char)iVar8;
    lVar35 = lVar35 + -1;
  } while (lVar35 != 0);
  return;
}

