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


void fn_82C8BB60(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar14;
  
  lVar5 = 2;
  bVar12 = *(int *)(param_1 + 0x54a4) != 0;
  iVar6 = *(int *)(param_1 + 0x178);
  iVar4 = *(int *)(param_1 + 0x50d0) * 0x1f8;
  lVar14 = 0x7d;
  bVar13 = *(int *)(param_1 + 0x54a8) != 0;
  *(uint *)(iVar4 + iVar6) = (uint)bVar12;
  puVar11 = (uint *)(iVar4 + iVar6);
  do {
    iVar6 = (int)lVar5;
    uVar2 = iVar6 / 9 + (iVar6 >> 0x1f);
    uVar8 = (longlong)(int)uVar2 + (ulonglong)(uVar2 >> 0x1f);
    lVar9 = lVar5 - (uVar8 + (uVar8 & 0x1fffffff) * 8);
    if (lVar9 == 0) {
      uVar3 = 0;
      uVar2 = 0;
    }
    else {
      iVar4 = (int)lVar9;
      uVar3 = iVar4 + (uint)bVar12;
      uVar2 = (1 << ((iVar4 + (uint)bVar12) - 1 & 0x3f)) - (uint)bVar12;
    }
    uVar1 = iVar6 / 9;
    if ((int)uVar1 >> 1 == 0) {
      uVar10 = 0;
      uVar7 = 0;
    }
    else {
      uVar10 = (int)((uint)bVar13 * 2 + uVar1) >> 1;
      uVar7 = (1 << ((((int)uVar1 >> 1) + (uint)bVar13) - 1 & 0x3f)) - (uint)bVar13;
    }
    lVar5 = lVar5 + 1;
    puVar11 = puVar11 + 1;
    *puVar11 = ((((uVar1 & 1) << 8 | uVar7 & 0xff) << 8 | uVar2 & 0xff) << 4 | uVar10 & 0xf) << 4 |
               uVar3 & 0xf;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  return;
}

