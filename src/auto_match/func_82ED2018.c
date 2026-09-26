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


void fn_82ED2018(undefined8 param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  int *piStack00000024;
  
  iVar29 = param_7 + param_8;
  piStack00000024 = (int *)(param_3 + -4);
  lVar31 = 8;
  iVar13 = param_7 + -1;
  iVar30 = param_7 + 1;
  pbVar17 = (byte *)((param_4 - param_8) + param_7 + -1);
  do {
    bVar1 = *(byte *)(param_6 + param_7);
    bVar2 = *(byte *)(param_5 + param_7);
    uVar16 = (uint)bVar1 - (uint)*(byte *)(param_6 + iVar29);
    uVar24 = (uint)bVar2 - (uint)*(byte *)(param_5 + iVar29);
    uVar4 = (int)uVar16 >> 0x1f;
    uVar5 = (int)uVar24 >> 0x1f;
    uVar23 = (uint)bVar1 - (uint)*(byte *)((param_7 - param_8) + param_6);
    bVar3 = *(byte *)(param_4 + param_7);
    uVar6 = (int)uVar23 >> 0x1f;
    uVar18 = (uint)bVar2 - (uint)*(byte *)((param_7 - param_8) + param_5);
    uVar7 = (int)uVar18 >> 0x1f;
    uVar21 = (uint)bVar1 - (uint)*(byte *)(param_6 + iVar13);
    uVar15 = (int)uVar21 >> 0x1f;
    uVar19 = (uint)bVar2 - (uint)*(byte *)(param_5 + iVar13);
    uVar26 = (int)uVar19 >> 0x1f;
    uVar14 = (uint)bVar1 - (uint)*(byte *)(param_6 + iVar30);
    uVar28 = (int)uVar14 >> 0x1f;
    uVar27 = (uint)bVar2 - (uint)*(byte *)(param_5 + iVar30);
    uVar8 = (int)uVar27 >> 0x1f;
    uVar22 = (uint)bVar3 - (uint)*(byte *)(iVar29 + param_4);
    uVar9 = (int)uVar22 >> 0x1f;
    uVar20 = (uint)bVar3 - (uint)*(byte *)(iVar13 + param_4);
    uVar10 = (int)uVar20 >> 0x1f;
    uVar25 = (uint)bVar3 - (uint)*(byte *)(iVar30 + param_4);
    uVar11 = (int)uVar25 >> 0x1f;
    uVar12 = (int)((uint)bVar3 - (uint)pbVar17[1]) >> 0x1f;
    param_5 = param_5 + 1;
    piStack00000024 = piStack00000024 + 1;
    *piStack00000024 =
         ((uVar16 ^ uVar4) - uVar4) + ((uVar24 ^ uVar5) - uVar5) + ((uVar23 ^ uVar6) - uVar6) +
         ((uVar18 ^ uVar7) - uVar7) + ((uVar21 ^ uVar15) - uVar15) + ((uVar19 ^ uVar26) - uVar26) +
         ((uVar14 ^ uVar28) - uVar28) + ((uVar27 ^ uVar8) - uVar8) + ((uVar22 ^ uVar9) - uVar9) +
         ((uVar20 ^ uVar10) - uVar10) + ((uVar25 ^ uVar11) - uVar11) +
         (((uint)bVar3 - (uint)pbVar17[1] ^ uVar12) - uVar12);
    bVar1 = *(byte *)(param_4 + param_7);
    uVar15 = (uint)bVar1 - (uint)*(byte *)(iVar29 + param_4);
    pbVar17 = pbVar17 + 1;
    param_6 = param_6 + 1;
    uVar28 = (uint)bVar1 - (uint)*(byte *)(iVar13 + param_4);
    uVar4 = (int)uVar15 >> 0x1f;
    uVar5 = (int)uVar28 >> 0x1f;
    uVar26 = (uint)bVar1 - (uint)*(byte *)(iVar30 + param_4);
    uVar6 = (int)((uint)bVar1 - (uint)*pbVar17) >> 0x1f;
    uVar7 = (int)uVar26 >> 0x1f;
    param_4 = param_4 + 1;
    *param_2 = ((uVar15 ^ uVar4) - uVar4) + ((uVar28 ^ uVar5) - uVar5) +
               (((uint)bVar1 - (uint)*pbVar17 ^ uVar6) - uVar6) + ((uVar26 ^ uVar7) - uVar7);
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  return;
}

