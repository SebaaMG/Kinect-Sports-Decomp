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


undefined8 fn_82920AD8(int *param_1)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  longlong lVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  
  iVar1 = *param_1;
  iVar11 = *(int *)(param_1[1] + 0x20);
  uVar4 = *(uint *)(iVar1 + 0x20);
  uVar10 = *(int *)(iVar1 + 0x6c) * *(int *)(iVar1 + 0x60) + uVar4;
  for (; uVar4 < uVar10; uVar4 = *(int *)(iVar1 + 0x60) * 2 + uVar4) {
    uVar8 = *(int *)(iVar1 + 0x68) * 2 + uVar4;
    if (uVar4 < uVar8) {
      puVar9 = (ushort *)(uVar4 + *(int *)(iVar1 + 0x60) + -4);
      puVar7 = (ushort *)(uVar4 - 4);
      puVar5 = (ushort *)(iVar11 + -2);
      lVar6 = (ulonglong)((uVar8 - uVar4) - 1 >> 2) + 1;
      do {
        puVar2 = puVar9 + 3;
        puVar3 = puVar7 + 3;
        puVar9 = puVar9 + 2;
        puVar7 = puVar7 + 2;
        puVar5 = puVar5 + 1;
        *puVar5 = (ushort)(((ulonglong)*puVar7 & 0x3e0) + ((ulonglong)*puVar9 & 0x3e0) +
                           ((ulonglong)*puVar3 & 0x3e0) + ((ulonglong)*puVar2 & 0x3e0) + 0x40 >> 2)
                  & 0x3e0 | (ushort)(((ulonglong)*puVar7 & 0x7c1f) + ((ulonglong)*puVar9 & 0x7c1f) +
                                     ((ulonglong)*puVar3 & 0x7c1f) + ((ulonglong)*puVar2 & 0x7c1f) +
                                     0x802 >> 2) & 0x7c1f;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    iVar1 = *param_1;
    iVar11 = *(int *)(param_1[1] + 0x60) + iVar11;
  }
  return 0;
}

