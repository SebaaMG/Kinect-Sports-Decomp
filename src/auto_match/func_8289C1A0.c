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
extern int fn_82381BC0();
extern int fn_8289C078();
extern int fn_8289C128();
extern int fn_828A13B8();


void fn_8289C1A0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int aiStack_20 [2];
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(), iVar3 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(), iVar3 == 0)) {
      if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
         ((iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), iVar3 != 0 &&
          (piVar1 = *(int **)(*(int *)(param_1 + 0x28) + 0x220), aiStack_20[0] = *piVar1,
          (int *)aiStack_20[0] != piVar1)))) {
        do {
          fn_8289C078(param_1,*(undefined4 *)(aiStack_20[0] + 0x10));
          fn_82381BC0(aiStack_20);
        } while (aiStack_20[0] != *(int *)(*(int *)(param_1 + 0x28) + 0x220));
      }
    }
    else {
      fn_8289C128(param_1);
    }
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x28) + 0x220);
    aiStack_20[0] = *piVar1;
    if ((int *)aiStack_20[0] != piVar1) {
      do {
        fn_8289C078(param_1,*(undefined4 *)(aiStack_20[0] + 0x10));
        fn_82381BC0(aiStack_20);
      } while (aiStack_20[0] != *(int *)(*(int *)(param_1 + 0x28) + 0x220));
    }
  }
  fn_828A13B8(*(undefined4 *)(param_1 + 0x28),param_1);
  puVar2 = *(undefined4 **)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

