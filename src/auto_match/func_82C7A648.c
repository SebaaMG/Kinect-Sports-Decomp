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


void fn_82C7A648(short *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  
  iVar9 = 0;
  iVar11 = 0;
  lVar17 = 8;
  uVar10 = 1;
  psVar7 = (short *)(param_2 + 4);
  psVar8 = param_1;
  do {
    if ((int)uVar10 == 0) {
      if (psVar7[-2] != 0) {
        sVar3 = psVar7[-2] << 3;
        psVar8[7] = sVar3;
        psVar8[6] = sVar3;
        psVar8[5] = sVar3;
        psVar8[4] = sVar3;
        psVar8[3] = sVar3;
        psVar8[2] = sVar3;
        psVar8[1] = sVar3;
        *psVar8 = sVar3;
        iVar9 = iVar11;
      }
    }
    else {
      iVar14 = ((int)psVar7[3] + (int)psVar7[1]) * 0x968;
      iVar9 = ((int)psVar7[5] + (int)psVar7[-1]) * 0x235;
      iVar15 = iVar14 + psVar7[3] * -799;
      iVar13 = iVar9 + psVar7[5] * -0xd4e;
      iVar9 = psVar7[-1] * 0x8e4 + iVar9;
      iVar14 = iVar14 + psVar7[1] * -0xfb1;
      iVar1 = iVar9 - iVar15;
      iVar4 = iVar13 - iVar14;
      iVar6 = psVar7[-2] * 0x800 + 0x80;
      iVar16 = ((int)psVar7[4] + (int)*psVar7) * 0x454;
      iVar2 = *psVar7 * 0x620 + iVar16;
      iVar5 = iVar6 + psVar7[2] * 0x800;
      iVar6 = iVar6 + ((int)psVar7[2] & 0x1fffffU) * -0x800;
      iVar16 = iVar16 + psVar7[4] * -0xec8;
      iVar12 = iVar5 - iVar2;
      iVar15 = iVar15 + iVar9;
      iVar5 = iVar5 + iVar2;
      iVar2 = iVar6 + iVar16;
      iVar6 = iVar6 - iVar16;
      iVar9 = (iVar4 + iVar1) * 0xb5 + 0x80 >> 8;
      iVar13 = iVar13 + iVar14;
      iVar4 = (iVar1 - iVar4) * 0xb5 + 0x80 >> 8;
      *psVar8 = (short)((uint)(iVar15 + iVar5) >> 8);
      psVar8[1] = (short)((uint)(iVar9 + iVar2) >> 8);
      psVar8[2] = (short)((uint)(iVar6 + iVar4) >> 8);
      psVar8[3] = (short)((uint)(iVar12 + iVar13) >> 8);
      psVar8[4] = (short)((uint)(iVar12 - iVar13) >> 8);
      psVar8[5] = (short)((uint)(iVar6 - iVar4) >> 8);
      psVar8[6] = (short)((uint)(iVar2 - iVar9) >> 8);
      psVar8[7] = (short)((uint)(iVar5 - iVar15) >> 8);
      iVar9 = iVar11;
    }
    iVar11 = iVar11 + 1;
    uVar10 = (uVar10 & 0x7fffffff) << 1 | uVar10 >> 0x1f;
    psVar8 = psVar8 + param_3;
    psVar7 = psVar7 + 8;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  lVar17 = 8;
  do {
    if (iVar9 == 0) {
      if (*param_1 != 0) {
        sVar3 = (short)(*param_1 + 0x20 >> 6);
        param_1[param_3 * 7] = sVar3;
        param_1[param_3 * 6] = sVar3;
        param_1[param_3 * 5] = sVar3;
        param_1[param_3 * 4] = sVar3;
        param_1[param_3 * 3] = sVar3;
        param_1[param_3 * 2] = sVar3;
        param_1[param_3] = sVar3;
        *param_1 = sVar3;
      }
    }
    else {
      iVar4 = ((int)param_1[param_3 * 7] + (int)param_1[param_3]) * 0x235 + 4;
      iVar5 = ((int)param_1[param_3 * 5] + (int)param_1[param_3 * 3]) * 0x968 + 4;
      iVar11 = param_1[param_3] * 0x8e4 + iVar4 >> 3;
      iVar4 = iVar4 + param_1[param_3 * 7] * -0xd4e >> 3;
      iVar1 = iVar5 + param_1[param_3 * 5] * -799 >> 3;
      iVar5 = iVar5 + param_1[param_3 * 3] * -0xfb1 >> 3;
      iVar6 = ((int)param_1[param_3 * 6] + (int)param_1[param_3 * 2]) * 0x454 + 4;
      iVar13 = iVar11 - iVar1;
      iVar16 = iVar4 - iVar5;
      iVar12 = (*param_1 + 0x20) * 0x100;
      iVar2 = iVar6 + param_1[param_3 * 6] * -0xec8 >> 3;
      iVar6 = param_1[param_3 * 2] * 0x620 + iVar6 >> 3;
      iVar15 = iVar12 + param_1[param_3 * 4] * 0x100;
      iVar12 = iVar12 + ((int)param_1[param_3 * 4] & 0xffffffU) * -0x100;
      iVar14 = iVar15 - iVar6;
      iVar1 = iVar1 + iVar11;
      iVar15 = iVar15 + iVar6;
      iVar4 = iVar4 + iVar5;
      iVar11 = (iVar16 + iVar13) * 0xb5 + 0x80 >> 8;
      iVar6 = iVar12 - iVar2;
      iVar12 = iVar12 + iVar2;
      iVar5 = (iVar13 - iVar16) * 0xb5 + 0x80 >> 8;
      *param_1 = (short)(iVar1 + iVar15 >> 0xe);
      param_1[param_3] = (short)(iVar11 + iVar12 >> 0xe);
      param_1[param_3 * 2] = (short)(iVar6 + iVar5 >> 0xe);
      param_1[param_3 * 3] = (short)(iVar14 + iVar4 >> 0xe);
      param_1[param_3 * 4] = (short)(iVar14 - iVar4 >> 0xe);
      param_1[param_3 * 5] = (short)(iVar6 - iVar5 >> 0xe);
      param_1[param_3 * 6] = (short)(iVar12 - iVar11 >> 0xe);
      param_1[param_3 * 7] = (short)(iVar15 - iVar1 >> 0xe);
    }
    param_1 = param_1 + 1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  return;
}

