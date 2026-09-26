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


void fn_82C7B3C0(int param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  int iVar14;
  undefined2 *puVar15;
  int iVar16;
  int iVar17;
  undefined2 *puVar18;
  longlong lVar19;
  
  puVar18 = (undefined2 *)(param_4 * 8 + param_1);
  psVar13 = (short *)(param_3 + -2);
  lVar19 = 8;
  puVar15 = puVar18;
  do {
    psVar1 = psVar13 + 2;
    psVar2 = psVar13 + 3;
    psVar3 = psVar13 + 1;
    psVar13 = psVar13 + 4;
    iVar14 = *psVar1 * 0x764 + *psVar13 * 0x310;
    iVar4 = ((int)*psVar2 + (int)*psVar3) * 0x5a8;
    iVar9 = *psVar1 * 0x310 + *psVar13 * -0x764;
    iVar5 = ((int)*psVar3 - (int)*psVar2) * 0x5a8;
    *puVar15 = (short)(iVar14 + iVar4 + 0x40 >> 7);
    puVar15[1] = (short)(iVar9 + iVar5 + 0x40 >> 7);
    puVar15[2] = (short)((iVar5 - iVar9) + 0x40 >> 7);
    puVar15[3] = (short)((iVar4 - iVar14) + 0x40 >> 7);
    puVar15 = puVar15 + param_2;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  psVar13 = puVar18 + param_2;
  iVar14 = (int)puVar18 - (int)psVar13;
  lVar19 = 4;
  do {
    iVar9 = ((int)psVar13[param_2 * 6] + (int)*psVar13) * 0x235 + 4;
    iVar10 = ((int)psVar13[param_2 * 2] + (int)psVar13[param_2 * 4]) * 0x968 + 4;
    iVar4 = *psVar13 * 0x8e4 + iVar9 >> 3;
    iVar9 = iVar9 + psVar13[param_2 * 6] * -0xd4e >> 3;
    iVar5 = iVar10 + psVar13[param_2 * 4] * -799 >> 3;
    iVar10 = iVar10 + psVar13[param_2 * 2] * -0xfb1 >> 3;
    iVar11 = ((int)psVar13[param_2] + (int)psVar13[param_2 * 5]) * 0x454 + 4;
    iVar7 = iVar4 - iVar5;
    iVar6 = iVar9 - iVar10;
    iVar16 = (*(short *)(iVar14 + (int)psVar13) + 0x20) * 0x100;
    iVar8 = iVar11 + psVar13[param_2 * 5] * -0xec8 >> 3;
    iVar11 = psVar13[param_2] * 0x620 + iVar11 >> 3;
    iVar12 = psVar13[param_2 * 3] * 0x100 + iVar16;
    iVar16 = iVar16 + ((int)psVar13[param_2 * 3] & 0xffffffU) * -0x100;
    iVar17 = iVar12 - iVar11;
    iVar5 = iVar5 + iVar4;
    iVar12 = iVar12 + iVar11;
    iVar10 = iVar10 + iVar9;
    iVar4 = (iVar6 + iVar7) * 0xb5 + 0x80 >> 8;
    iVar11 = iVar16 - iVar8;
    iVar8 = iVar8 + iVar16;
    iVar9 = (iVar7 - iVar6) * 0xb5 + 0x80 >> 8;
    *(short *)(iVar14 + (int)psVar13) = (short)(iVar5 + iVar12 >> 0xe);
    *psVar13 = (short)(iVar8 + iVar4 >> 0xe);
    psVar13[param_2] = (short)(iVar11 + iVar9 >> 0xe);
    psVar13[param_2 * 2] = (short)(iVar17 + iVar10 >> 0xe);
    psVar13[param_2 * 3] = (short)(iVar17 - iVar10 >> 0xe);
    psVar13[param_2 * 4] = (short)(iVar11 - iVar9 >> 0xe);
    psVar13[param_2 * 5] = (short)(iVar8 - iVar4 >> 0xe);
    psVar13[param_2 * 6] = (short)(iVar12 - iVar5 >> 0xe);
    psVar13 = psVar13 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  return;
}

