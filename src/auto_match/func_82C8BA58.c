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


void fn_82C8BA58(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar10;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  
  lVar5 = 2;
  bVar11 = *(int *)(param_1 + 0x54a4) != 0;
  lVar13 = 0x47;
  bVar12 = *(int *)(param_1 + 0x54a8) != 0;
  puVar10 = (uint *)(*(int *)(param_1 + 0x50d0) * 0x120 + *(int *)(param_1 + 0x174));
  uVar1 = (ulonglong)bVar12;
  *puVar10 = (uint)bVar11;
  do {
    iVar6 = (int)lVar5;
    uVar3 = iVar6 / 9 + (iVar6 >> 0x1f);
    uVar7 = (longlong)(int)uVar3 + (ulonglong)(uVar3 >> 0x1f);
    lVar8 = lVar5 - (uVar7 + (uVar7 & 0x1fffffff) * 8);
    if (lVar8 == 0) {
      uVar3 = 0;
      uVar7 = 0;
    }
    else {
      iVar2 = (int)lVar8;
      uVar3 = iVar2 + (uint)bVar11;
      uVar7 = (ulonglong)(uint)(1 << ((iVar2 + (uint)bVar11) - 1 & 0x3f)) - (ulonglong)bVar11;
    }
    iVar6 = iVar6 / 9;
    if (iVar6 == 0) {
      uVar9 = 0;
      uVar4 = 0;
    }
    else {
      uVar9 = (longlong)iVar6 + uVar1;
      uVar4 = (uint)(1 << ((iVar6 + (uint)bVar12) - 1 & 0x3f)) - uVar1;
    }
    lVar5 = lVar5 + 1;
    puVar10 = puVar10 + 1;
    *puVar10 = (uint)((((uVar4 & 0xff) << 8 | uVar7 & 0xff) << 4 | uVar9 & 0xf) << 4) |
               (1 << ((uint)uVar9 & 0x3f)) * 0x1000000 - 0x1000000U | uVar3 & 0xf;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}

