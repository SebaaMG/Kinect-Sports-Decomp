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


void fn_82C7B198(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short *psVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  
  puVar19 = (undefined2 *)(param_4 * 0x40 + param_1);
  psVar17 = (short *)(param_3 + -0x10);
  lVar23 = 4;
  puVar18 = puVar19;
  do {
    psVar2 = psVar17 + 0xb;
    psVar3 = psVar17 + 0xd;
    psVar4 = psVar17 + 9;
    psVar5 = psVar17 + 0xf;
    psVar6 = psVar17 + 10;
    psVar7 = psVar17 + 0xc;
    psVar8 = psVar17 + 0xe;
    psVar17 = psVar17 + 8;
    iVar22 = ((int)*psVar3 + (int)*psVar2) * 0x968;
    iVar16 = ((int)*psVar5 + (int)*psVar4) * 0x235;
    iVar11 = iVar22 + *psVar3 * -799;
    iVar21 = iVar16 + *psVar5 * -0xd4e;
    iVar22 = iVar22 + *psVar2 * -0xfb1;
    iVar16 = *psVar4 * 0x8e4 + iVar16;
    iVar10 = iVar16 - iVar11;
    iVar9 = iVar21 - iVar22;
    iVar15 = *psVar17 * 0x800 + 0x80;
    iVar13 = ((int)*psVar8 + (int)*psVar6) * 0x454;
    iVar14 = *psVar6 * 0x620 + iVar13;
    iVar12 = iVar15 + ((int)*psVar7 & 0x1fffffU) * -0x800;
    iVar15 = iVar15 + *psVar7 * 0x800;
    iVar13 = iVar13 + *psVar8 * -0xec8;
    iVar20 = iVar15 - iVar14;
    iVar11 = iVar11 + iVar16;
    iVar15 = iVar15 + iVar14;
    iVar16 = iVar12 + iVar13;
    iVar12 = iVar12 - iVar13;
    iVar13 = (iVar9 + iVar10) * 0xb5 + 0x80 >> 8;
    iVar21 = iVar21 + iVar22;
    iVar9 = (iVar10 - iVar9) * 0xb5 + 0x80 >> 8;
    *puVar18 = (short)((uint)(iVar11 + iVar15) >> 8);
    puVar18[1] = (short)((uint)(iVar13 + iVar16) >> 8);
    puVar18[2] = (short)((uint)(iVar12 + iVar9) >> 8);
    puVar18[3] = (short)((uint)(iVar20 + iVar21) >> 8);
    puVar18[4] = (short)((uint)(iVar20 - iVar21) >> 8);
    puVar18[5] = (short)((uint)(iVar12 - iVar9) >> 8);
    puVar18[6] = (short)((uint)(iVar16 - iVar13) >> 8);
    puVar18[7] = (short)((uint)(iVar15 - iVar11) >> 8);
    puVar18 = puVar18 + param_2;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  psVar17 = puVar19 + param_2;
  iVar13 = (int)puVar19 - (int)psVar17;
  lVar23 = 8;
  do {
    sVar1 = *(short *)(iVar13 + (int)psVar17);
    iVar10 = *psVar17 * 0x764 + psVar17[param_2 * 2] * 0x310;
    iVar9 = ((int)psVar17[param_2] + (int)sVar1) * 0x5a8;
    iVar15 = ((int)sVar1 - (int)psVar17[param_2]) * 0x5a8;
    iVar11 = *psVar17 * 0x310 + psVar17[param_2 * 2] * -0x764;
    *(short *)(iVar13 + (int)psVar17) = (short)((uint)(iVar9 + iVar10 + 0x8000) >> 0x10);
    *psVar17 = (short)((uint)(iVar15 + iVar11 + 0x8000) >> 0x10);
    psVar17[param_2] = (short)((uint)((iVar15 - iVar11) + 0x8000) >> 0x10);
    psVar17[param_2 * 2] = (short)((uint)((iVar9 - iVar10) + 0x8000) >> 0x10);
    psVar17 = psVar17 + 1;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  return;
}

