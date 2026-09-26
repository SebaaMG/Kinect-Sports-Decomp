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
extern unsigned int *auStack_30;
extern int fn_82A1E108();
extern unsigned int iStack_2c;


undefined8 fn_82C00AA0(int param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  piVar1 = *(int **)(param_1 + 0x38);
  uVar2 = 0;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x288) == 0) {
    if (param_2 == 3) {
      return 0;
    }
    uVar2 = (**(code **)(*piVar1 + 0x58))();
    (**(code **)(**(int **)(param_1 + 0x38) + 100))(*(int **)(param_1 + 0x38),auStack_30);
    while (iStack_2c != 0) {
      fn_82A1E108(10);
      (**(code **)(**(int **)(param_1 + 0x38) + 100))(*(int **)(param_1 + 0x38),auStack_30);
    }
    *(undefined4 *)(param_1 + 0x280) = 0;
    return uVar2;
  }
  if (param_2 != 2) {
    if (param_2 == 3) {
      uVar2 = (**(code **)(*piVar1 + 0x50))(piVar1,0,0);
      *(undefined4 *)(param_1 + 0x288) = 0;
      return uVar2;
    }
    if (param_2 == 4) {
      (**(code **)(*piVar1 + 0x50))(piVar1,0,0);
      uVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x58))();
      (**(code **)(**(int **)(param_1 + 0x38) + 100))(*(int **)(param_1 + 0x38),auStack_30);
      if (iStack_2c != 0) {
        do {
          fn_82A1E108(10);
          (**(code **)(**(int **)(param_1 + 0x38) + 100))(*(int **)(param_1 + 0x38),auStack_30);
        } while (iStack_2c != 0);
        *(undefined4 *)(param_1 + 0x280) = 0;
        *(undefined4 *)(param_1 + 0x288) = 0;
        return uVar2;
      }
      goto LAB_82c00c7c;
    }
  }
  (**(code **)(*piVar1 + 100))(piVar1,auStack_30);
  while (iStack_2c != 0) {
    fn_82A1E108(10);
    (**(code **)(**(int **)(param_1 + 0x38) + 100))(*(int **)(param_1 + 0x38),auStack_30);
  }
LAB_82c00c7c:
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  return uVar2;
}

