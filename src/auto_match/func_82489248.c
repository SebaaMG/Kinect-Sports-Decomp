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
extern int fn_825A24C0();


void fn_82489248(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xd54) + 0x14);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0xd54) + 0x18) == 0)) {
    if (*(int **)(iVar1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x18) + 0x48))();
    }
    iVar1 = *(int *)(iVar1 + 0x28);
    if (iVar1 != 0) {
      puVar2 = *(undefined4 **)(iVar1 + 0x24);
      for (puVar4 = *(undefined4 **)(iVar1 + 0x20); puVar4 != puVar2; puVar4 = puVar4 + 1) {
        (**(code **)(*(int *)*puVar4 + 0x1c))((int *)*puVar4,param_2);
      }
    }
  }
  if ((*param_2 == 0x44) && (iVar1 = *(int *)(param_1 + 2000), iVar1 != 0)) {
    piVar3 = *(int **)(iVar1 + 8);
    for (piVar5 = *(int **)(iVar1 + 4); piVar5 < piVar3; piVar5 = piVar5 + 1) {
      if (*piVar5 == param_2[2]) {
        fn_825A24C0(*(undefined4 *)(param_1 + 2000),piVar5);
        piVar5 = piVar5 + -1;
        piVar3 = piVar3 + -1;
      }
    }
  }
  return;
}

