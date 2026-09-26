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
extern int fn_824152E8();
extern int fn_8253D5A0();
extern int fn_8265CA20();
extern int fn_82CE4118();


void fn_82417870(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x24))();
  }
  for (iVar3 = *(int *)(param_1 + 8); iVar3 != *(int *)(param_1 + 0xc); iVar3 = iVar3 + 0x1ac) {
    iVar1 = *(int *)(iVar3 + 8);
    if (iVar1 != 0) {
      fn_824152E8(iVar1);
      fn_8265CA20(iVar1);
    }
  }
  if ((*(int *)(param_1 + 0xac) != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
    fn_8253D5A0(param_2,param_3);
    fn_82CE4118(*(undefined4 *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb4) = 0;
    fn_82CE4118(*(undefined4 *)(param_1 + 0xb0));
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  if ((*(int *)(param_1 + 0x11c) != 0) && (*(int *)(param_1 + 0x124) != 0)) {
    fn_8253D5A0(param_2,param_3);
    fn_82CE4118(*(undefined4 *)(param_1 + 0x124));
    *(undefined4 *)(param_1 + 0x124) = 0;
    fn_82CE4118(*(undefined4 *)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  for (piVar4 = *(int **)(param_1 + 0x20); piVar4 != *(int **)(param_1 + 0x24); piVar4 = piVar4 + 1)
  {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  for (piVar4 = *(int **)(param_1 + 0x88); piVar4 != *(int **)(param_1 + 0x8c); piVar4 = piVar4 + 1)
  {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

