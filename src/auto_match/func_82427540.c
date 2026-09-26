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
extern int fn_82414F58();
extern int fn_82415090();


longlong fn_82427540(int param_1,ulonglong param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar5;
  longlong lVar4;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (1 < (uint)param_2) {
    iVar7 = (uint)param_2 << 2;
    do {
      cVar5 = (**(code **)**(undefined4 **)(iVar7 + *(int *)(param_1 + 4) + -4))();
      if (cVar5 != '\0') break;
      param_2 = param_2 - 1;
      iVar7 = iVar7 + -4;
    } while (1 < (param_2 & 0xffffffff));
  }
  lVar6 = 0;
  if ((param_2 & 0xffffffff) != 0) {
    iVar7 = 0;
    uVar8 = param_2;
    do {
      lVar4 = fn_82415090(*(undefined4 *)(iVar7 + *(int *)(param_1 + 4)));
      uVar8 = uVar8 - 1;
      lVar6 = lVar4 + lVar6;
      iVar7 = iVar7 + 4;
    } while (uVar8 != 0);
  }
  iVar7 = (int)((param_2 & 0x3fffffff) << 2);
  cVar5 = fn_82414F58(*(undefined4 *)(iVar7 + *(int *)(param_1 + 4) + -4));
  if (cVar5 == '\0') {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + iVar7 + -4) + 4);
    if ((piVar1 == (int *)0x0) || (bVar3 = true, *piVar1 != 10)) {
      bVar3 = false;
    }
    if (bVar3) {
      if ((param_2 & 0xffffffff) < 2) {
        return lVar6 + 10;
      }
      piVar1 = *(int **)(*(int *)((int)((param_2 - 2 & 0xffffffff) << 2) + *(int *)(param_1 + 4)) +
                        4);
      if ((piVar1 == (int *)0x0) || (bVar3 = true, *piVar1 != 10)) {
        bVar3 = false;
      }
      if (!bVar3) {
        return lVar6 + 10;
      }
      return lVar6 + 0x1e;
    }
  }
  cVar5 = fn_82414F58(*(undefined4 *)(iVar7 + *(int *)(param_1 + 4) + -4));
  if (cVar5 == '\0') {
    iVar7 = *(int *)(iVar7 + *(int *)(param_1 + 4) + -4);
    piVar1 = *(int **)(iVar7 + 4);
    if (((piVar1 == (int *)0x0) || (piVar2 = *(int **)(iVar7 + 8), piVar2 == (int *)0x0)) ||
       (bVar3 = true, *piVar2 + *piVar1 != 10)) {
      bVar3 = false;
    }
    if (bVar3) {
      lVar6 = lVar6 + 10;
    }
  }
  return lVar6;
}

