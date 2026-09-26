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


undefined8 fn_82950DB8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  uVar6 = 0;
  uVar1 = **(uint **)(param_1 + 0x104);
  uVar5 = (ulonglong)uVar1;
  if ((uVar1 & 0xfffff) != 0) {
    iVar8 = 0;
    lVar7 = (uVar5 & 0xfffff) << 2;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x104) + 8);
      iVar3 = *(int *)(*(int *)(iVar8 + iVar2) * 4 + *(int *)(param_1 + 0x14));
      iVar4 = *(int *)(*(int *)((int)(((uVar5 & 0xfffff) * 2 + uVar6 & 0xffffffff) << 2) + iVar2) *
                       4 + *(int *)(param_1 + 0x14));
      if ((*(int *)(iVar8 + iVar2) != *(int *)((int)lVar7 + iVar2)) ||
         (((iVar2 = *(int *)(iVar4 + 0x38),
           iVar2 != *(int *)((*(uint **)(param_1 + 0x104))[2] + iVar8) &&
           ((iVar2 == -1 || (iVar2 != *(int *)(iVar3 + 0x38))))) ||
          ((*(uint *)(iVar4 + 0x3c) ^ 0x80000) != *(uint *)(iVar3 + 0x3c))))) {
        return 1;
      }
      uVar6 = uVar6 + 1;
      iVar8 = iVar8 + 4;
      lVar7 = lVar7 + 4;
    } while ((uVar6 & 0xffffffff) < (uVar5 & 0xfffff));
  }
  uVar1 = (uint)(uVar5 & 0xfffff);
  **(uint **)(param_1 + 0x104) = uVar1 | 0x70000000;
  *(uint *)(*(int *)(param_1 + 0x104) + 4) = uVar1;
  return 0;
}

