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
extern int fn_82415090();


longlong fn_82426EA0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = 0;
  uVar7 = 0;
  do {
    lVar5 = fn_82415090(*(undefined4 *)(uVar7 + *(int *)(param_1 + 4)));
    uVar7 = uVar7 + 4;
    lVar6 = lVar5 + lVar6;
  } while (uVar7 < 0x28);
  puVar1 = *(uint **)(*(int *)(param_1 + 0x24) + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x20);
  if (puVar1 == (uint *)0x0) {
    piVar3 = *(int **)(iVar2 + 4);
    if ((piVar3 == (int *)0x0) || (bVar4 = true, *piVar3 != 10)) {
      bVar4 = false;
    }
    if (bVar4) {
      piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 4);
      if ((piVar3 == (int *)0x0) || (bVar4 = true, *piVar3 != 10)) {
        bVar4 = false;
      }
      if (!bVar4) {
        return lVar6 + 10;
      }
      return lVar6 + 0x1e;
    }
    if (((piVar3 == (int *)0x0) || (*(int **)(iVar2 + 8) == (int *)0x0)) ||
       (bVar4 = true, **(int **)(iVar2 + 8) + *piVar3 != 10)) {
      bVar4 = false;
    }
    if (!bVar4) {
      return lVar6;
    }
  }
  else {
    piVar3 = *(int **)(*(int *)(param_1 + 0x24) + 8);
    if (piVar3 == (int *)0x0) {
      lVar6 = (ulonglong)*puVar1 + lVar6;
      if ((*(int **)(iVar2 + 4) == (int *)0x0) || (bVar4 = true, **(int **)(iVar2 + 4) != 10)) {
        bVar4 = false;
      }
      if (!bVar4) {
        return lVar6;
      }
      return (ulonglong)*puVar1 + lVar6 + 10;
    }
    if (piVar3[2] != 0) {
      return lVar6;
    }
    if ((*puVar1 == 10) && (*piVar3 == 10)) {
      return lVar6 + 0x14;
    }
  }
  return lVar6 + 10;
}

