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
extern int fn_822315A0();
extern int fn_8248F8E8();
extern int fn_8265CA20();
extern int fn_82F63CA0();
extern unsigned int lbl_821CA460;
extern int (*lbl_8327677C)();
extern unsigned int lbl_8329618C;


void fn_824910D0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = lbl_821CA460;
  *(undefined4 *)(param_1 + 0x54) = lbl_821CA460;
  if (lbl_8329618C == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lbl_8329618C + 4);
  }
  *(undefined4 *)(iVar4 + 0x820) = uVar3;
  iVar4 = *(int *)(param_1 + 0x5c);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 4) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar4);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    if (lbl_8327677C != (code *)0x0) {
      (*lbl_8327677C)(0xffffffff821beb88,0xffffffff821beb18,0x5a8);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 100) != 0) {
    if (lbl_8327677C != (code *)0x0) {
      (*lbl_8327677C)(0xffffffff821beb88,0xffffffff821beb18,0x5ae);
    }
    *(undefined4 *)(param_1 + 100) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != *(int **)(param_1 + 0x24)) {
    do {
      puVar2 = (undefined4 *)*piVar1;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      fn_82F63CA0(piVar1,piVar1 + 1,(*(int *)(param_1 + 0x24) - (int)(piVar1 + 1) >> 2) << 2);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -4;
    } while (piVar1 != *(int **)(param_1 + 0x24));
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_8248F8E8();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    for (; iVar4 != *(int *)(param_1 + 8); iVar4 = iVar4 + 8) {
    }
    fn_8248F8E8();
  }
  *(int *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

