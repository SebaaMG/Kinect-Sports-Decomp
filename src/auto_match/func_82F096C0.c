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


void fn_82F096C0(int param_1,undefined8 param_2,int param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  longlong lVar4;
  short sVar5;
  ulonglong uVar6;
  short sVar7;
  ulonglong uVar8;
  short sVar9;
  short sVar10;
  short sVar12;
  longlong lVar11;
  ulonglong uVar13;
  ulonglong uVar14;
  short *psVar15;
  undefined2 *puVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  longlong lVar22;
  
  puVar16 = (undefined2 *)(param_1 + -10);
  psVar15 = (short *)(param_3 + 0x2e);
  lVar22 = 8;
  do {
    psVar1 = psVar15 + -7;
    psVar2 = psVar15 + -0x17;
    psVar3 = psVar15 + -0xf;
    psVar15 = psVar15 + 1;
    uVar8 = (longlong)*psVar2 + (longlong)*psVar1;
    uVar6 = (longlong)*psVar2 - (longlong)*psVar1;
    sVar12 = (short)((uVar8 & 0xffffffff) << 4) + (short)uVar8 + 4;
    sVar9 = *psVar15 * 10 + *psVar3 * 0x16;
    sVar5 = *psVar3 * 10 + *psVar15 * -0x16;
    sVar7 = (short)((uVar6 & 0xffffffff) << 4) + (short)uVar6 + 4;
    puVar16[5] = (short)((int)sVar12 + (int)sVar9 >> 3);
    puVar16[6] = (short)((int)sVar7 + (int)sVar5 >> 3);
    puVar16[7] = (short)((int)sVar7 - (int)sVar5 >> 3);
    puVar16 = puVar16 + 8;
    *puVar16 = (short)((int)sVar12 - (int)sVar9 >> 3);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  puVar16 = (undefined2 *)(param_1 + 0x6e);
  lVar22 = 4;
  do {
    sVar5 = puVar16[-0x2f];
    sVar7 = puVar16[1];
    uVar8 = (ulonglong)sVar5;
    sVar9 = puVar16[-0x1f];
    uVar14 = (ulonglong)sVar7;
    sVar12 = puVar16[-0xf];
    uVar13 = (ulonglong)sVar9;
    sVar10 = puVar16[-7];
    sVar18 = puVar16[-0x27];
    uVar6 = (ulonglong)sVar12;
    lVar4 = (uVar8 & 0x3fffffff) * 4;
    sVar17 = (short)(sVar5 + sVar7) >> 1;
    sVar19 = (short)(sVar9 + sVar12) >> 1;
    lVar11 = (uVar6 & 0x3fffffff) * 4;
    sVar21 = (sVar17 + (((short)((uVar8 & 0xffffffff) << 3) - sVar5) -
                       (sVar7 + (short)((uVar14 & 0xffffffff) << 2)))) -
             (short)((uVar13 + lVar11 & 0xffffffff) << 1);
    sVar5 = ((short)((uVar13 & 0xffffffff) << 3) - sVar9) + sVar19 +
            (short)((lVar4 + uVar14 & 0xffffffff) << 1) + (short)lVar11;
    sVar19 = (((short)((uVar6 & 0xffffffff) << 3) - sVar12) -
             (sVar9 + (short)((uVar13 & 0xffffffff) << 2))) + sVar19 +
             (short)((uVar8 + (uVar14 & 0x3fffffff) * -4 & 0xffffffff) << 1);
    sVar20 = (short)((uVar6 + (uVar13 & 0x3fffffff) * -4 & 0xffffffff) << 1) +
             sVar17 + ((short)((uVar14 & 0xffffffff) << 3) - sVar7) + (short)lVar4;
    sVar17 = (short)(((longlong)sVar18 & 0xffffffffU) << 3) +
             sVar10 + (short)(((longlong)sVar10 & 0xffffffffU) << 1);
    sVar7 = puVar16[-0x37] * 6 + 0x20;
    sVar9 = puVar16[-0x17] * 6 + sVar7;
    sVar7 = sVar7 + puVar16[-0x17] * -6;
    sVar10 = (short)(((longlong)sVar10 & 0xffffffffU) << 3) -
             (sVar18 + (short)(((longlong)sVar18 & 0xffffffffU) << 1));
    sVar12 = sVar9 + sVar17;
    sVar18 = sVar10 + sVar7;
    sVar7 = sVar7 - sVar10;
    sVar9 = sVar9 - sVar17;
    puVar16[-0x37] = (short)((int)sVar5 + (int)sVar12 >> 6);
    puVar16[-0x2f] = (short)((int)sVar7 + (int)sVar21 >> 6);
    puVar16[-0x27] = (short)((int)sVar20 + (int)sVar18 >> 6);
    puVar16[-0x1f] = (short)((int)sVar9 + (int)sVar19 >> 6);
    puVar16[-0x17] = (short)((int)sVar9 - (int)sVar19 >> 6);
    puVar16[-0xf] = (short)((int)sVar18 - (int)sVar20 >> 6);
    puVar16[-7] = (short)((int)sVar7 - (int)sVar21 >> 6);
    puVar16 = puVar16 + 1;
    *puVar16 = (short)((int)sVar12 - (int)sVar5 >> 6);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  return;
}

