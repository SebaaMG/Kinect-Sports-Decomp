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


int fn_82C9D6E0(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
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
  byte *pbVar24;
  byte *pbVar25;
  int iVar26;
  int iVar27;
  byte *pbVar28;
  byte *pbVar29;
  longlong lVar30;
  
  lVar30 = 2;
  iVar27 = param_2 * 4;
  pbVar28 = (byte *)((param_2 + 2) * 3 + param_1);
  iVar26 = 0;
  pbVar25 = (byte *)(param_1 + (param_2 & 0x3fffffff) * -4 + 6);
  pbVar29 = (byte *)(param_1 + param_2 + 6);
  do {
    pbVar3 = pbVar29 + (-6 - param_2);
    pbVar4 = pbVar29 + (-5 - param_2);
    pbVar5 = pbVar29 + (-4 - param_2);
    pbVar6 = pbVar29 + -5;
    pbVar7 = pbVar29 + -6;
    pbVar8 = pbVar29 + (-3 - param_2);
    pbVar9 = pbVar29 + -4;
    pbVar10 = pbVar29 + (param_2 - 2);
    pbVar11 = pbVar29 + (param_2 - 3);
    pbVar12 = pbVar29 + (-2 - param_2);
    pbVar13 = pbVar29 + -3;
    pbVar14 = pbVar29 + (param_2 - 1);
    pbVar15 = pbVar29 + (-1 - param_2);
    pbVar16 = pbVar29 + -2;
    pbVar17 = pbVar29 + param_2 + 1;
    pbVar18 = pbVar29 + (1 - param_2);
    pbVar19 = pbVar29 + -1;
    pbVar20 = pbVar29 + (param_2 - 6);
    pbVar25 = pbVar25 + iVar27;
    pbVar21 = pbVar29 + 1;
    pbVar22 = pbVar29 + param_2;
    bVar1 = *pbVar29;
    pbVar23 = pbVar29 + (param_2 - 5);
    pbVar24 = pbVar29 + (param_2 - 4);
    pbVar29 = pbVar29 + iVar27;
    iVar26 = (uint)pbVar28[-6] + (uint)pbVar28[-5] + (uint)pbVar28[-4] + (uint)pbVar28[-3] +
             (uint)pbVar28[-2] + (uint)pbVar28[-1] + (uint)pbVar28[1] + (uint)*pbVar28 +
             (uint)*pbVar11 + (uint)*pbVar10 + (uint)*pbVar14 + (uint)*pbVar17 + (uint)*pbVar20 +
             (uint)*pbVar22 + (uint)*pbVar23 + (uint)*pbVar24 +
             (uint)*pbVar7 + (uint)*pbVar6 + (uint)*pbVar9 + (uint)*pbVar13 + (uint)*pbVar16 +
             (uint)*pbVar19 + (uint)*pbVar21 + (uint)bVar1 +
             (uint)*pbVar3 + (uint)*pbVar4 + (uint)*pbVar5 + (uint)*pbVar8 + (uint)*pbVar12 +
             (uint)*pbVar15 + (uint)*pbVar18 + (uint)*pbVar25 + iVar26;
    pbVar28 = pbVar28 + iVar27;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  uVar2 = iVar26 + 4 >> 3;
  trapWord(6,(ulonglong)param_3,0);
  trapWord(5,(ulonglong)param_3 &
             ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1),0xffff);
  return (int)uVar2 / (int)param_3;
}

