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


void fn_82F093D0(int param_1,undefined8 param_2,int param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  ulonglong uVar5;
  short sVar6;
  short sVar7;
  ulonglong uVar8;
  short sVar9;
  short sVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short *psVar15;
  undefined2 *puVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  longlong lVar21;
  
  puVar16 = (undefined2 *)(param_1 + -2);
  psVar15 = (short *)(param_3 + 0x2e);
  lVar21 = 4;
  do {
    psVar1 = psVar15 + -0x17;
    sVar4 = psVar15[-0x13];
    sVar6 = psVar15[-3];
    uVar11 = (ulonglong)sVar4;
    psVar2 = psVar15 + -7;
    sVar7 = psVar15[5];
    sVar10 = psVar15[-0xb];
    psVar3 = psVar15 + -0xf;
    uVar5 = (ulonglong)sVar6;
    psVar15 = psVar15 + 1;
    uVar13 = (ulonglong)sVar7;
    uVar8 = (ulonglong)sVar10;
    sVar18 = *psVar1 * 0xc + 4;
    sVar17 = ((short)((uVar8 & 0xffffffff) << 4) - sVar10) +
             sVar6 + (short)((uVar5 & 0xffffffff) << 3) +
             (short)(((uVar11 & 0x3fffffff) * 4 + uVar13 & 0xffffffff) << 2);
    sVar9 = *psVar2 * 0xc + sVar18;
    sVar18 = sVar18 + *psVar2 * -0xc;
    sVar19 = (short)((uVar5 + (uVar8 & 0x3fffffff) * -4 & 0xffffffff) << 2) +
             sVar4 + (short)((uVar11 & 0xffffffff) << 3) +
             ((short)((uVar13 & 0xffffffff) << 4) - sVar7);
    uVar14 = (ulonglong)*psVar3;
    sVar4 = (((short)((uVar11 & 0xffffffff) << 4) - sVar4) -
            (sVar7 + (short)((uVar13 & 0xffffffff) << 3))) -
            (short)(((uVar5 & 0x3fffffff) * 4 + uVar8 & 0xffffffff) << 2);
    uVar12 = (ulonglong)*psVar15;
    sVar20 = (((short)((uVar5 & 0xffffffff) << 4) - sVar6) -
             (sVar10 + (short)((uVar8 & 0xffffffff) << 3))) +
             (short)((uVar11 + (uVar13 & 0x3fffffff) * -4 & 0xffffffff) << 2);
    sVar6 = (short)((uVar14 + (uVar14 & 0x7fffffff) * 2 & 0xffffffff) << 1) -
            (short)((uVar12 & 0xffffffff) << 4);
    sVar7 = sVar6 + sVar18;
    sVar18 = sVar18 - sVar6;
    sVar6 = (short)((uVar14 & 0xffffffff) << 4) +
            (short)((uVar12 + (uVar12 & 0x7fffffff) * 2 & 0xffffffff) << 1);
    sVar10 = sVar6 + sVar9;
    sVar9 = sVar9 - sVar6;
    puVar16[1] = (short)((int)sVar10 + (int)sVar17 >> 3);
    puVar16[2] = (short)((int)sVar7 + (int)sVar4 >> 3);
    puVar16[3] = (short)((int)sVar18 + (int)sVar19 >> 3);
    puVar16[4] = (short)((int)sVar9 + (int)sVar20 >> 3);
    puVar16[5] = (short)((int)sVar9 - (int)sVar20 >> 3);
    puVar16[6] = (short)((int)sVar18 - (int)sVar19 >> 3);
    puVar16[7] = (short)((int)sVar7 - (int)sVar4 >> 3);
    puVar16 = puVar16 + 8;
    *puVar16 = (short)((int)sVar10 - (int)sVar17 >> 3);
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  puVar16 = (undefined2 *)(param_1 + 0x2e);
  lVar21 = 8;
  do {
    sVar6 = puVar16[-7] + puVar16[-0x17];
    sVar4 = puVar16[-0x17] - puVar16[-7];
    sVar10 = (sVar6 + 4) * 8 + (sVar6 >> 1);
    sVar6 = puVar16[1] * 5 + puVar16[-0xf] * 0xb;
    sVar7 = (sVar4 + 4) * 8 + (sVar4 >> 1);
    sVar4 = puVar16[-0xf] * 5 + puVar16[1] * -0xb;
    puVar16[-0x17] = (short)((int)sVar10 + (int)sVar6 >> 6);
    puVar16[-0xf] = (short)((int)sVar7 + (int)sVar4 >> 6);
    puVar16[-7] = (short)((int)sVar7 - (int)sVar4 >> 6);
    puVar16 = puVar16 + 1;
    *puVar16 = (short)((int)sVar10 - (int)sVar6 >> 6);
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  return;
}

