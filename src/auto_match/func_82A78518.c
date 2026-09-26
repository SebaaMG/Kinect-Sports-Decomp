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
extern int fn_82A77860();


longlong fn_82A78518(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(iVar1 + 4);
  uVar3 = *(undefined4 *)(iVar1 + 8);
  iVar6 = (int)param_2;
  *(int *)(iVar1 + 4) = iVar6;
  iVar1 = *(int *)(param_1 + 0x78);
  if (**(short **)(param_1 + 0x78) == 2) {
    trapWord(6,(ulonglong)*(ushort *)(iVar1 + 0x12),0);
    iVar6 = (int)(((longlong)(int)(uint)*(ushort *)(iVar1 + 0xc) * (longlong)iVar6 & 0xffffffffU) /
                 (ulonglong)*(ushort *)(iVar1 + 0x12));
  }
  else {
    iVar6 = (uint)*(ushort *)(iVar1 + 0xc) * iVar6;
  }
  *(int *)(iVar1 + 8) = iVar6;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x24))();
  }
  (**(code **)(**(int **)(param_1 + 0xfc) + 0x24))();
  lVar5 = fn_82A77860(param_1);
  if (-1 < lVar5) {
    piVar4 = *(int **)(param_1 + 0x108);
    lVar5 = 0;
    if (piVar4 != (int *)0x0) {
      lVar5 = (**(code **)(*piVar4 + 0x10))(piVar4,param_2);
    }
    if (-1 < (int)lVar5) {
      return lVar5;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 4) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 8) = uVar3;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x24))();
  }
  (**(code **)(**(int **)(param_1 + 0xfc) + 0x24))();
  fn_82A77860(param_1);
  return lVar5;
}

