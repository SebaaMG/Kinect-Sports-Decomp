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


longlong fn_82EFDCF8(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  byte *pbVar27;
  ulonglong uVar26;
  int iVar29;
  ulonglong uVar28;
  int iVar30;
  byte *pbVar32;
  longlong lVar31;
  byte *pbVar33;
  byte *pbVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  
  lVar39 = 2;
  pbVar34 = (byte *)(param_1 + 6);
  pbVar32 = (byte *)((param_2 + 2) * 3 + param_1);
  iVar30 = param_2 * 4;
  iVar29 = 0x20;
  pbVar27 = pbVar34 + (param_2 & 0x3fffffff) * -4;
  pbVar33 = (byte *)(param_1 + param_2 + 6);
  do {
    pbVar2 = pbVar33 + (-6 - param_2);
    pbVar3 = pbVar33 + (-5 - param_2);
    pbVar4 = pbVar33 + (-2 - param_2);
    pbVar5 = pbVar33 + -5;
    pbVar6 = pbVar33 + -6;
    pbVar7 = pbVar33 + (-1 - param_2);
    pbVar8 = pbVar33 + -4;
    pbVar9 = pbVar33 + (param_2 - 5);
    pbVar10 = pbVar33 + (param_2 - 6);
    pbVar11 = pbVar33 + (-4 - param_2);
    pbVar12 = pbVar33 + -3;
    pbVar13 = pbVar33 + (param_2 - 4);
    pbVar14 = pbVar33 + (1 - param_2);
    pbVar15 = pbVar33 + -2;
    pbVar16 = pbVar33 + (param_2 - 3);
    pbVar17 = pbVar33 + (-3 - param_2);
    pbVar18 = pbVar33 + -1;
    pbVar19 = pbVar33 + (param_2 - 2);
    pbVar27 = pbVar27 + iVar30;
    pbVar20 = pbVar33 + 1;
    pbVar21 = pbVar33 + (param_2 - 1);
    bVar1 = *pbVar33;
    pbVar22 = pbVar33 + param_2 + 1;
    pbVar23 = pbVar33 + param_2;
    pbVar33 = pbVar33 + iVar30;
    iVar29 = (uint)pbVar32[-6] + (uint)pbVar32[-5] + (uint)pbVar32[-4] + (uint)pbVar32[-3] +
             (uint)pbVar32[-2] + (uint)pbVar32[-1] + (uint)pbVar32[1] + (uint)*pbVar32 +
             (uint)*pbVar10 + (uint)*pbVar9 + (uint)*pbVar13 + (uint)*pbVar16 + (uint)*pbVar19 +
             (uint)*pbVar21 + (uint)*pbVar22 + (uint)*pbVar23 +
             (uint)*pbVar6 + (uint)*pbVar5 + (uint)*pbVar8 + (uint)*pbVar12 + (uint)*pbVar15 +
             (uint)*pbVar18 + (uint)*pbVar20 + (uint)bVar1 +
             (uint)*pbVar2 + (uint)*pbVar3 + (uint)*pbVar4 + (uint)*pbVar7 + (uint)*pbVar11 +
             (uint)*pbVar14 + (uint)*pbVar17 + (uint)*pbVar27 + iVar29;
    pbVar32 = pbVar32 + iVar30;
    lVar39 = lVar39 + -1;
  } while (lVar39 != 0);
  lVar31 = (longlong)(iVar29 >> 6);
  lVar39 = 0;
  lVar40 = 8;
  do {
    pbVar27 = pbVar34 + -6;
    pbVar32 = pbVar34 + -5;
    pbVar33 = pbVar34 + -4;
    pbVar2 = pbVar34 + -3;
    uVar36 = (ulonglong)((int)((ulonglong)*pbVar27 - lVar31) >> 0x1f);
    pbVar3 = pbVar34 + -2;
    uVar28 = (ulonglong)((int)((ulonglong)*pbVar32 - lVar31) >> 0x1f);
    pbVar4 = pbVar34 + -1;
    pbVar5 = pbVar34 + 1;
    bVar1 = *pbVar34;
    uVar35 = (ulonglong)((int)((ulonglong)*pbVar33 - lVar31) >> 0x1f);
    uVar25 = (ulonglong)((int)((ulonglong)*pbVar2 - lVar31) >> 0x1f);
    uVar37 = (ulonglong)((int)((ulonglong)*pbVar3 - lVar31) >> 0x1f);
    uVar24 = (ulonglong)((int)((ulonglong)*pbVar4 - lVar31) >> 0x1f);
    uVar38 = (ulonglong)((int)((ulonglong)*pbVar5 - lVar31) >> 0x1f);
    uVar26 = (ulonglong)((int)((ulonglong)bVar1 - lVar31) >> 0x1f);
    pbVar34 = pbVar34 + param_2;
    lVar39 = (((ulonglong)*pbVar27 - lVar31 ^ uVar36) - uVar36) +
             (((ulonglong)*pbVar32 - lVar31 ^ uVar28) - uVar28) +
             (((ulonglong)*pbVar33 - lVar31 ^ uVar35) - uVar35) +
             (((ulonglong)*pbVar2 - lVar31 ^ uVar25) - uVar25) +
             (((ulonglong)*pbVar3 - lVar31 ^ uVar37) - uVar37) +
             (((ulonglong)*pbVar4 - lVar31 ^ uVar24) - uVar24) +
             (((ulonglong)*pbVar5 - lVar31 ^ uVar38) - uVar38) +
             (((ulonglong)bVar1 - lVar31 ^ uVar26) - uVar26) + lVar39;
    lVar40 = lVar40 + -1;
  } while (lVar40 != 0);
  return lVar39;
}

