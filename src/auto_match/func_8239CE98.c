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
extern int fn_822AA770();
extern int fn_82399BA0();


ulonglong fn_8239CE98(int param_1)

{
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar1;
  
  iVar2 = *(int *)(param_1 + 0x94);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x50);
  }
  if (((iVar3 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) && (*(int *)(param_1 + 0x178) == 0)) {
    iVar2 = fn_82399BA0(param_1);
    if ((iVar2 != 0) ||
       ((iVar2 = *(int *)(param_1 + 0x1e4), iVar2 != 0 && (*(int *)(iVar2 + 0x188) != 0)))) {
      return 1;
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x3c))();
    if (iVar3 != 0) {
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x1a4) != 0)) &&
         ((iVar2 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x90))(), iVar2 != 5 &&
          (iVar2 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x90))(), iVar2 != 2)))) {
        uVar4 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x34))();
        iVar2 = fn_822AA770(*(undefined4 *)
                                   (**(int **)(param_1 + 8) +
                                   ((uint)((ulonglong)LZCOUNT(uVar4) >> 3) & 4)));
        return (ulonglong)(iVar2 == 0);
      }
      uVar1 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x3c))();
      return -((ulonglong)(uVar1 < *(uint *)(param_1 + 0x2d4)) - 1);
    }
  }
  return 0;
}

