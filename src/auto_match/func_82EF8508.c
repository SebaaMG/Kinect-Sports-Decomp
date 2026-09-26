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


longlong fn_82EF8508(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
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
  ulonglong uVar17;
  longlong lVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  
  lVar18 = 0;
  pbVar19 = (byte *)(param_3 + 6);
  pbVar20 = (byte *)(param_1 + 6);
  lVar28 = 8;
  do {
    pbVar3 = pbVar19 + -6;
    pbVar4 = pbVar20 + -6;
    pbVar5 = pbVar19 + -5;
    pbVar6 = pbVar20 + -5;
    pbVar7 = pbVar20 + -4;
    pbVar8 = pbVar19 + -4;
    uVar27 = (ulonglong)((int)((ulonglong)*pbVar4 - (ulonglong)*pbVar3) >> 0x1f);
    pbVar9 = pbVar19 + -3;
    uVar24 = (ulonglong)((int)((ulonglong)*pbVar6 - (ulonglong)*pbVar5) >> 0x1f);
    pbVar10 = pbVar20 + -3;
    pbVar11 = pbVar20 + -2;
    pbVar12 = pbVar19 + -2;
    pbVar13 = pbVar20 + -1;
    uVar22 = (ulonglong)((int)((ulonglong)*pbVar7 - (ulonglong)*pbVar8) >> 0x1f);
    pbVar14 = pbVar19 + -1;
    pbVar15 = pbVar20 + 1;
    pbVar16 = pbVar19 + 1;
    bVar1 = *pbVar20;
    bVar2 = *pbVar19;
    uVar21 = (ulonglong)((int)((ulonglong)*pbVar10 - (ulonglong)*pbVar9) >> 0x1f);
    uVar25 = (ulonglong)((int)((ulonglong)*pbVar11 - (ulonglong)*pbVar12) >> 0x1f);
    uVar23 = (ulonglong)((int)((ulonglong)*pbVar13 - (ulonglong)*pbVar14) >> 0x1f);
    uVar17 = (ulonglong)((int)((ulonglong)*pbVar15 - (ulonglong)*pbVar16) >> 0x1f);
    uVar26 = (ulonglong)((int)((ulonglong)bVar1 - (ulonglong)bVar2) >> 0x1f);
    pbVar20 = pbVar20 + param_2;
    pbVar19 = pbVar19 + param_4;
    lVar18 = (((ulonglong)*pbVar4 - (ulonglong)*pbVar3 ^ uVar27) - uVar27) +
             (((ulonglong)*pbVar6 - (ulonglong)*pbVar5 ^ uVar24) - uVar24) +
             (((ulonglong)*pbVar7 - (ulonglong)*pbVar8 ^ uVar22) - uVar22) +
             (((ulonglong)*pbVar10 - (ulonglong)*pbVar9 ^ uVar21) - uVar21) +
             (((ulonglong)*pbVar11 - (ulonglong)*pbVar12 ^ uVar25) - uVar25) +
             (((ulonglong)*pbVar13 - (ulonglong)*pbVar14 ^ uVar23) - uVar23) +
             (((ulonglong)*pbVar15 - (ulonglong)*pbVar16 ^ uVar17) - uVar17) +
             (((ulonglong)bVar1 - (ulonglong)bVar2 ^ uVar26) - uVar26) + lVar18;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  return lVar18;
}

