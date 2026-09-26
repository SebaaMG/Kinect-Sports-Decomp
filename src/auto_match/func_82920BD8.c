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


undefined8 fn_82920BD8(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  
  iVar1 = *param_1;
  iVar11 = *(int *)(param_1[1] + 0x20);
  uVar7 = *(uint *)(iVar1 + 0x20);
  uVar10 = *(int *)(iVar1 + 0x6c) * *(int *)(iVar1 + 0x60) + uVar7;
  for (; uVar7 < uVar10; uVar7 = *(int *)(iVar1 + 0x60) * 2 + uVar7) {
    uVar8 = *(int *)(iVar1 + 0x68) + uVar7;
    if (uVar7 < uVar8) {
      pbVar9 = (byte *)(uVar7 + *(int *)(iVar1 + 0x60) + -1);
      pbVar6 = (byte *)(uVar7 - 1);
      puVar5 = (undefined1 *)(iVar11 + -1);
      lVar4 = (ulonglong)((uVar8 - uVar7) - 1 >> 1) + 1;
      do {
        pbVar2 = pbVar9 + 1;
        pbVar9 = pbVar9 + 2;
        pbVar3 = pbVar6 + 1;
        pbVar6 = pbVar6 + 2;
        puVar5 = puVar5 + 1;
        *puVar5 = (char)((ulonglong)*pbVar2 + (ulonglong)*pbVar9 + (ulonglong)*pbVar3 +
                         (ulonglong)*pbVar6 + 2 >> 2);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    iVar1 = *param_1;
    iVar11 = *(int *)(param_1[1] + 0x60) + iVar11;
  }
  return 0;
}

