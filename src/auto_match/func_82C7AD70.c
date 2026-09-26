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


void fn_82C7AD70(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  
  piVar18 = (int *)(param_4 * 0x80 + param_1);
  piVar16 = (int *)(param_3 + -0x20);
  lVar22 = 4;
  piVar17 = piVar18;
  do {
    piVar1 = piVar16 + 9;
    piVar2 = piVar16 + 0xf;
    piVar3 = piVar16 + 0xb;
    piVar4 = piVar16 + 0xd;
    piVar5 = piVar16 + 10;
    piVar6 = piVar16 + 0xe;
    piVar7 = piVar16 + 0xc;
    piVar16 = piVar16 + 8;
    iVar9 = (*piVar2 + *piVar1) * 0x235;
    iVar19 = (*piVar4 + *piVar3) * 0x968;
    iVar15 = *piVar1 * 0x8e4 + iVar9;
    iVar20 = iVar19 + *piVar4 * -799;
    iVar9 = iVar9 + *piVar2 * -0xd4e;
    iVar19 = iVar19 + *piVar3 * -0xfb1;
    iVar13 = iVar15 - iVar20;
    iVar12 = iVar9 - iVar19;
    iVar14 = (*piVar6 + *piVar5) * 0x454;
    iVar8 = *piVar16 * 0x800 + 0x80;
    iVar11 = *piVar5 * 0x620 + iVar14;
    iVar10 = iVar8 + *piVar7 * 0x800;
    iVar8 = iVar8 + *piVar7 * -0x800;
    iVar14 = iVar14 + *piVar6 * -0xec8;
    iVar21 = iVar10 - iVar11;
    iVar10 = iVar10 + iVar11;
    iVar20 = iVar20 + iVar15;
    iVar15 = iVar8 + iVar14;
    iVar11 = (iVar12 + iVar13) * 0xb5 + 0x80 >> 8;
    iVar8 = iVar8 - iVar14;
    iVar12 = (iVar13 - iVar12) * 0xb5 + 0x80 >> 8;
    iVar9 = iVar9 + iVar19;
    *piVar17 = iVar20 + iVar10 >> 8;
    piVar17[1] = iVar11 + iVar15 >> 8;
    piVar17[2] = iVar8 + iVar12 >> 8;
    piVar17[3] = iVar21 + iVar9 >> 8;
    piVar17[4] = iVar21 - iVar9 >> 8;
    piVar17[5] = iVar8 - iVar12 >> 8;
    piVar17[6] = iVar15 - iVar11 >> 8;
    piVar17[7] = iVar10 - iVar20 >> 8;
    piVar17 = piVar17 + param_2;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  piVar16 = piVar18 + param_2;
  iVar11 = (int)piVar18 - (int)piVar16;
  lVar22 = 8;
  do {
    iVar12 = *(int *)(iVar11 + (int)piVar16);
    iVar10 = *piVar16 * 0x764 + piVar16[param_2 * 2] * 0x310;
    iVar8 = (piVar16[param_2] + iVar12) * 0x5a8;
    iVar9 = (iVar12 - piVar16[param_2]) * 0x5a8;
    iVar12 = *piVar16 * 0x310 + piVar16[param_2 * 2] * -0x764;
    *(int *)(iVar11 + (int)piVar16) = iVar8 + iVar10 + 0x8000 >> 0x10;
    *piVar16 = iVar9 + iVar12 + 0x8000 >> 0x10;
    piVar16[param_2] = (iVar9 - iVar12) + 0x8000 >> 0x10;
    piVar16[param_2 * 2] = (iVar8 - iVar10) + 0x8000 >> 0x10;
    piVar16 = piVar16 + 1;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  return;
}

