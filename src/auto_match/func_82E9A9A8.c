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


longlong fn_82E9A9A8(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte *pbVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  
  iVar19 = 0;
  lVar18 = 0;
  pbVar17 = (byte *)(param_1 + -0x10);
  lVar20 = 0x10;
  do {
    bVar1 = pbVar17[0x1d];
    bVar2 = pbVar17[0x1f];
    bVar3 = pbVar17[0x1e];
    bVar4 = pbVar17[0x1b];
    bVar5 = pbVar17[0x1a];
    bVar6 = pbVar17[0x19];
    bVar7 = pbVar17[0x17];
    bVar8 = pbVar17[0x16];
    bVar9 = pbVar17[0x14];
    bVar10 = pbVar17[0x11];
    bVar11 = pbVar17[0x1c];
    bVar12 = pbVar17[0x18];
    bVar13 = pbVar17[0x15];
    bVar14 = pbVar17[0x13];
    bVar15 = pbVar17[0x12];
    pbVar17 = pbVar17 + 0x10;
    bVar16 = *pbVar17;
    iVar19 = (uint)bVar16 + (uint)bVar10 + (uint)bVar15 + (uint)bVar14 + (uint)bVar9 + (uint)bVar13
             + (uint)bVar8 + (uint)bVar7 + (uint)bVar12 + (uint)bVar6 + (uint)bVar5 + (uint)bVar4 +
             (uint)bVar11 + (uint)bVar1 + (uint)bVar2 + (uint)bVar3 + iVar19;
    lVar18 = (longlong)(int)(uint)bVar16 * (longlong)(int)(uint)bVar16 +
             (longlong)(int)(uint)bVar10 * (longlong)(int)(uint)bVar10 +
             (longlong)(int)(uint)bVar15 * (longlong)(int)(uint)bVar15 +
             (longlong)(int)(uint)bVar14 * (longlong)(int)(uint)bVar14 +
             (longlong)(int)(uint)bVar9 * (longlong)(int)(uint)bVar9 +
             (longlong)(int)(uint)bVar13 * (longlong)(int)(uint)bVar13 +
             (longlong)(int)(uint)bVar8 * (longlong)(int)(uint)bVar8 +
             (longlong)(int)(uint)bVar7 * (longlong)(int)(uint)bVar7 +
             (longlong)(int)(uint)bVar12 * (longlong)(int)(uint)bVar12 +
             (longlong)(int)(uint)bVar3 * (longlong)(int)(uint)bVar3 +
             (longlong)(int)(uint)bVar6 * (longlong)(int)(uint)bVar6 +
             (longlong)(int)(uint)bVar5 * (longlong)(int)(uint)bVar5 +
             (longlong)(int)(uint)bVar4 * (longlong)(int)(uint)bVar4 +
             (longlong)(int)(uint)bVar11 * (longlong)(int)(uint)bVar11 +
             (longlong)(int)(uint)bVar1 * (longlong)(int)(uint)bVar1 +
             (longlong)(int)(uint)bVar2 * (longlong)(int)(uint)bVar2 + lVar18;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  return lVar18 - (iVar19 * iVar19 >> 8);
}

