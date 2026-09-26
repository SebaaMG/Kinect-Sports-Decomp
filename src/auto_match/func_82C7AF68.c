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


void fn_82C7AF68(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  longlong lVar19;
  
  piVar18 = (int *)(param_4 * 0x10 + param_1);
  piVar15 = (int *)(param_3 + -4);
  lVar19 = 8;
  piVar16 = piVar18;
  do {
    piVar2 = piVar15 + 1;
    piVar3 = piVar15 + 3;
    piVar4 = piVar15 + 2;
    piVar15 = piVar15 + 4;
    iVar14 = *piVar4 * 0x764 + *piVar15 * 0x310;
    iVar10 = (*piVar3 + *piVar2) * 0x5a8;
    iVar8 = *piVar4 * 0x310 + *piVar15 * -0x764;
    iVar9 = (*piVar2 - *piVar3) * 0x5a8;
    *piVar16 = iVar14 + iVar10 + 0x40 >> 7;
    piVar16[1] = iVar8 + iVar9 + 0x40 >> 7;
    piVar16[2] = (iVar9 - iVar8) + 0x40 >> 7;
    piVar16[3] = (iVar10 - iVar14) + 0x40 >> 7;
    piVar16 = piVar16 + param_2;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  piVar15 = piVar18 + param_2;
  iVar8 = (int)piVar18 - (int)piVar15;
  lVar19 = 4;
  do {
    iVar10 = (piVar15[param_2 * 6] + *piVar15) * 0x235 + 4;
    iVar11 = (piVar15[param_2 * 2] + piVar15[param_2 * 4]) * 0x968 + 4;
    iVar9 = *piVar15 * 0x8e4 + iVar10 >> 3;
    iVar10 = iVar10 + piVar15[param_2 * 6] * -0xd4e >> 3;
    iVar14 = iVar11 + piVar15[param_2 * 4] * -799 >> 3;
    iVar11 = iVar11 + piVar15[param_2 * 2] * -0xfb1 >> 3;
    iVar12 = (piVar15[param_2] + piVar15[param_2 * 5]) * 0x454 + 4;
    iVar5 = iVar10 - iVar11;
    iVar6 = iVar9 - iVar14;
    iVar17 = (*(int *)(iVar8 + (int)piVar15) + 0x20) * 0x100;
    iVar1 = iVar12 + piVar15[param_2 * 5] * -0xec8 >> 3;
    iVar13 = piVar15[param_2 * 3] * 0x100 + iVar17;
    iVar12 = piVar15[param_2] * 0x620 + iVar12 >> 3;
    iVar17 = iVar17 + (piVar15[param_2 * 3] & 0xffffffU) * -0x100;
    iVar14 = iVar14 + iVar9;
    iVar7 = iVar13 + iVar12;
    iVar13 = iVar13 - iVar12;
    iVar12 = iVar1 + iVar17;
    iVar11 = iVar11 + iVar10;
    iVar9 = (iVar5 + iVar6) * 0xb5 + 0x80 >> 8;
    iVar17 = iVar17 - iVar1;
    iVar10 = (iVar6 - iVar5) * 0xb5 + 0x80 >> 8;
    *(int *)(iVar8 + (int)piVar15) = iVar14 + iVar7 >> 0xe;
    *piVar15 = iVar12 + iVar9 >> 0xe;
    piVar15[param_2] = iVar17 + iVar10 >> 0xe;
    piVar15[param_2 * 2] = iVar13 + iVar11 >> 0xe;
    piVar15[param_2 * 3] = iVar13 - iVar11 >> 0xe;
    piVar15[param_2 * 4] = iVar17 - iVar10 >> 0xe;
    piVar15[param_2 * 5] = iVar12 - iVar9 >> 0xe;
    piVar15[param_2 * 6] = iVar7 - iVar14 >> 0xe;
    piVar15 = piVar15 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  return;
}

