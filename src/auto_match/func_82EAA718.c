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


void fn_82EAA718(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x2d4) == 0) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x2d0);
  iVar3 = 2;
  do {
    uVar7 = 0;
    uVar10 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)(int)uVar4;
    if (uVar5 != 0) {
      lVar8 = (uVar10 & 0x7fffffff) << 1;
      lVar9 = (uVar10 & 0x1fffffff) << 3;
      iVar11 = iVar3 * *(int *)(param_1 + 0x2d0) * 2;
      do {
        uVar7 = uVar7 + 1;
        iVar1 = (int)lVar8;
        *(undefined2 *)(iVar11 + *(int *)(param_1 + 0x990) + 2) =
             *(undefined2 *)(iVar1 + *(int *)(param_1 + 0x1d6c));
        puVar6 = (undefined2 *)(iVar11 + *(int *)(param_1 + 0x990));
        *puVar6 = puVar6[1];
        iVar2 = (int)lVar9;
        *(undefined2 *)(iVar2 + *(int *)(param_1 + 0x990) + 2) =
             *(undefined2 *)(iVar11 + *(int *)(param_1 + 0x990));
        puVar6 = (undefined2 *)(iVar2 + *(int *)(param_1 + 0x990));
        *puVar6 = puVar6[1];
        lVar8 = lVar8 + 2;
        *(undefined2 *)(iVar11 + *(int *)(param_1 + 0x994) + 2) =
             *(undefined2 *)(iVar1 + *(int *)(param_1 + 0x1d70));
        puVar6 = (undefined2 *)(iVar11 + *(int *)(param_1 + 0x994));
        *puVar6 = puVar6[1];
        puVar6 = (undefined2 *)(iVar11 + *(int *)(param_1 + 0x994));
        iVar11 = iVar11 + 4;
        *(undefined2 *)(iVar2 + *(int *)(param_1 + 0x994) + 2) = *puVar6;
        puVar6 = (undefined2 *)(iVar2 + *(int *)(param_1 + 0x994));
        lVar9 = lVar9 + 4;
        *puVar6 = puVar6[1];
        uVar5 = *(uint *)(param_1 + 0x2d0);
      } while (uVar7 < uVar5);
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (uVar4 < *(uint *)(param_1 + 0x2d4));
  return;
}

