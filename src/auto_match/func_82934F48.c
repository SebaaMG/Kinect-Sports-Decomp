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
extern int fn_82930318();
extern int fn_82934E38();


int fn_82934F48(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = fn_82930318(0x60);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_82934E38();
  }
  if (iVar1 == 0) {
LAB_82934f80:
    iVar1 = 0;
  }
  else {
    *(undefined8 *)(iVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(iVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(iVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(iVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 4))();
      *(int *)(iVar1 + 0x3c) = iVar2;
      if (iVar2 == 0) goto LAB_82934f80;
    }
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 4))();
      *(int *)(iVar1 + 0x40) = iVar2;
      if (iVar2 == 0) goto LAB_82934f80;
    }
    piVar4 = (int *)(param_1 + 0x44);
    uVar3 = 0;
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        iVar2 = (**(code **)(*(int *)*piVar4 + 4))();
        *(int *)((iVar1 - param_1) + (int)piVar4) = iVar2;
        if (iVar2 == 0) goto LAB_82934f80;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < 4);
  }
  return iVar1;
}

