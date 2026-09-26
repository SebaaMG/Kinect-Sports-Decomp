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
extern int fn_82F68CC0();


undefined8 fn_82950E98(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar10 = 0;
  uVar1 = **(uint **)(param_1 + 0x104);
  uVar8 = (ulonglong)uVar1;
  if ((uVar1 & 0xfffff) != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    iVar11 = 0;
    lVar9 = (uVar8 & 0xfffff) << 2;
    do {
      iVar7 = (int)(((uVar8 & 0xfffff) * 2 + uVar10 & 0xffffffff) << 2);
      iVar3 = *(int *)(*(int *)(param_1 + 0x104) + 8);
      iVar4 = *(int *)(*(int *)(iVar11 + iVar3) * 4 + iVar2);
      iVar5 = *(int *)(*(int *)((int)lVar9 + iVar3) * 4 + iVar2);
      iVar6 = *(int *)(*(int *)(iVar7 + iVar3) * 4 + iVar2);
      if (*(int *)(iVar11 + iVar3) != *(int *)((int)lVar9 + iVar3)) {
        return 1;
      }
      iVar3 = *(int *)(iVar5 + 0x38);
      iVar7 = *(int *)((*(uint **)(param_1 + 0x104))[2] + iVar7);
      if (iVar3 != iVar7) {
        if (iVar3 == -1) {
          return 1;
        }
        if (iVar3 != *(int *)(iVar6 + 0x38)) {
          return 1;
        }
      }
      if ((*(uint *)(iVar5 + 0x3c) ^ 0x80000) != *(uint *)(iVar6 + 0x3c)) {
        return 1;
      }
      iVar3 = *(int *)(iVar4 + 0x38);
      if (iVar3 != iVar7) {
        if (iVar3 == -1) {
          return 1;
        }
        if (iVar3 != *(int *)(iVar6 + 0x38)) {
          return 1;
        }
      }
      if ((*(uint *)(iVar4 + 0x3c) ^ 0x80000) != *(uint *)(iVar6 + 0x3c)) {
        return 1;
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 4;
      lVar9 = lVar9 + 4;
    } while ((uVar10 & 0xffffffff) < (uVar8 & 0xfffff));
  }
  uVar1 = (uint)(uVar8 & 0xfffff);
  **(uint **)(param_1 + 0x104) = uVar1 | 0x70000000;
  *(uint *)(*(int *)(param_1 + 0x104) + 4) = uVar1;
  uVar10 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x104) + 8);
  fn_82F68CC0(uVar10,(uVar8 & 0xfffff) * 8 + uVar10,(uVar8 & 0xfffff) << 2);
  return 0;
}

