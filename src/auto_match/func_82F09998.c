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


void fn_82F09998(int param_1,undefined8 param_2,int param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  ulonglong uVar5;
  short sVar6;
  ulonglong uVar7;
  short sVar8;
  short sVar9;
  short *psVar10;
  undefined2 *puVar11;
  longlong lVar12;
  
  puVar11 = (undefined2 *)(param_1 + -10);
  psVar10 = (short *)(param_3 + 0x16);
  lVar12 = 4;
  do {
    psVar1 = psVar10 + -3;
    psVar2 = psVar10 + -0xb;
    psVar3 = psVar10 + -7;
    psVar10 = psVar10 + 1;
    uVar7 = (longlong)*psVar2 + (longlong)*psVar1;
    uVar5 = (longlong)*psVar2 - (longlong)*psVar1;
    sVar9 = (short)((uVar7 & 0xffffffff) << 4) + (short)uVar7 + 4;
    sVar8 = *psVar3 * 0x16 + *psVar10 * 10;
    sVar6 = *psVar3 * 10 + *psVar10 * -0x16;
    sVar4 = (short)((uVar5 & 0xffffffff) << 4) + (short)uVar5 + 4;
    puVar11[5] = (short)((int)sVar8 + (int)sVar9 >> 3);
    puVar11[6] = (short)((int)sVar6 + (int)sVar4 >> 3);
    puVar11[7] = (short)((int)sVar4 - (int)sVar6 >> 3);
    puVar11 = puVar11 + 8;
    *puVar11 = (short)((int)sVar9 - (int)sVar8 >> 3);
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  puVar11 = (undefined2 *)(param_1 + 0x2e);
  lVar12 = 4;
  do {
    sVar6 = puVar11[-0x17] + puVar11[-7];
    sVar4 = puVar11[-0x17] - puVar11[-7];
    sVar8 = puVar11[-0xf] * 0xb + puVar11[1] * 5;
    sVar9 = (sVar6 + 4) * 8 + (sVar6 >> 1);
    sVar6 = (sVar4 + 4) * 8 + (sVar4 >> 1);
    sVar4 = puVar11[-0xf] * 5 + puVar11[1] * -0xb;
    puVar11[-0x17] = (short)((int)sVar8 + (int)sVar9 >> 6);
    puVar11[-0xf] = (short)((int)sVar4 + (int)sVar6 >> 6);
    puVar11[-7] = (short)((int)sVar6 - (int)sVar4 >> 6);
    puVar11 = puVar11 + 1;
    *puVar11 = (short)((int)sVar9 - (int)sVar8 >> 6);
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return;
}

