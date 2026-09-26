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
extern int fn_822B2618();
extern int fn_8288B760();
extern int fn_828AB870();
extern int fn_82F63108();


undefined8 fn_822B20B8(int param_1,ulonglong param_2)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    uVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 4))();
  }
  if ((param_2 & 0xffffffff) == (uVar2 & 0xffffffff)) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar4 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      iVar4 = (**(code **)(**(int **)(param_1 + 0x28) + 4))();
    }
    for (piVar7 = *(int **)(param_1 + 300);
        (piVar7 != *(int **)(param_1 + 0x130) && (*piVar7 != iVar4)); piVar7 = piVar7 + 1) {
    }
    bVar1 = *(char *)(param_1 + 0x13c) == '\0';
    if (piVar7 == *(int **)(param_1 + 0x130)) {
      if (bVar1) {
        if (*(int *)(param_1 + 0x28) == 0) {
          uVar2 = 0;
        }
        else {
          if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F63108();
          }
          uVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 4))();
        }
      }
      else {
        uVar2 = (ulonglong)*(uint *)(param_1 + 0x140);
      }
      iVar4 = param_1 + 0x84;
      fn_822B2618(iVar4,uVar2,0);
      fn_822B2618(iVar4,1,1);
      fn_822B2618(iVar4,1,2);
      cVar6 = fn_8288B760(*(undefined4 *)(param_1 + 0x10));
      if (cVar6 != '\0') {
        fn_828AB870(param_1 + 0xd8,param_2);
      }
    }
    else if (bVar1) {
      *(undefined1 *)(param_1 + 0x13c) = 1;
      if (*(int *)(param_1 + 0x28) == 0) {
        uVar5 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        uVar5 = (**(code **)(**(int **)(param_1 + 0x28) + 4))();
      }
      *(undefined4 *)(param_1 + 0x140) = uVar5;
    }
    uVar3 = 1;
  }
  return uVar3;
}

