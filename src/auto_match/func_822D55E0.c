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
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern int fn_82230040();
extern int fn_822CA8E0();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_821AD9A8;
extern unsigned int lbl_821AD9C0;
extern unsigned int lbl_821AD9D8;
extern unsigned int lbl_821AD9F0;
extern unsigned int stack0x00000000;


void fn_822D55E0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [48];
  int aiStack_a0 [8];
  int aiStack_80 [8];
  int aiStack_60 [8];
  int aiStack_40 [16];
  
  fn_822CA8E0();
  puVar2 = (undefined4 *)fn_8265C9E0(0x30);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_82230040(&stack0x00000000 + -0xf8);
  }
  *puVar2 = &lbl_821AD9A8;
  fn_82F68CC0(puVar2 + 2,&stack0x00000000 + -0xd0,0x28);
  iVar3 = (**(code **)(*param_1 + 0x50))(param_1);
  piVar5 = (int *)(iVar3 + 0x80);
  if (piVar5 != (int *)(&stack0x00000000 + -0xa0)) {
    piVar1 = *(int **)(iVar3 + 0x90);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,piVar5 != piVar1);
      *(undefined4 *)(iVar3 + 0x90) = 0;
    }
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 0x90) = 0;
    }
    else if (puVar2 == (undefined4 *)(&stack0x00000000 + -0xa0)) {
      uVar4 = (**(code **)*puVar2)(puVar2,piVar5);
      *(undefined4 *)(iVar3 + 0x90) = uVar4;
    }
    else {
      *(undefined4 **)(iVar3 + 0x90) = puVar2;
    }
  }
  fn_82359C18(&stack0x00000000 + -0xa0);
  puVar2 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_82230040(&stack0x00000000 + -0xf0);
  }
  *puVar2 = &lbl_821AD9C0;
  fn_82F68CC0(puVar2 + 2,&stack0x00000000 + -0xd0,0x18);
  iVar3 = (**(code **)(*param_1 + 0x50))(param_1);
  piVar5 = (int *)(iVar3 + 0x100);
  if (piVar5 != (int *)(&stack0x00000000 + -0x40)) {
    piVar1 = *(int **)(iVar3 + 0x110);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,piVar5 != piVar1);
      *(undefined4 *)(iVar3 + 0x110) = 0;
    }
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 0x110) = 0;
    }
    else if (puVar2 == (undefined4 *)(&stack0x00000000 + -0x40)) {
      uVar4 = (**(code **)*puVar2)(puVar2,piVar5);
      *(undefined4 *)(iVar3 + 0x110) = uVar4;
    }
    else {
      *(undefined4 **)(iVar3 + 0x110) = puVar2;
    }
  }
  fn_82359C18(&stack0x00000000 + -0x40);
  puVar2 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_82230040(&stack0x00000000 + -0xe0);
  }
  *puVar2 = &lbl_821AD9D8;
  fn_82F68CC0(puVar2 + 2,&stack0x00000000 + -0xd0,0x18);
  iVar3 = (**(code **)(*param_1 + 0x50))(param_1);
  piVar5 = (int *)(iVar3 + 0x170);
  if (piVar5 != (int *)(&stack0x00000000 + -0x60)) {
    piVar1 = *(int **)(iVar3 + 0x180);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,piVar5 != piVar1);
      *(undefined4 *)(iVar3 + 0x180) = 0;
    }
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 0x180) = 0;
    }
    else if (puVar2 == (undefined4 *)(&stack0x00000000 + -0x60)) {
      uVar4 = (**(code **)*puVar2)(puVar2,piVar5);
      *(undefined4 *)(iVar3 + 0x180) = uVar4;
    }
    else {
      *(undefined4 **)(iVar3 + 0x180) = puVar2;
    }
  }
  fn_82359C18(&stack0x00000000 + -0x60);
  puVar2 = (undefined4 *)fn_8265C9E0(0x30);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821AD9F0;
    fn_82F68CC0(puVar2 + 2,&stack0x00000000 + -0xd0,0x28);
    iVar3 = (**(code **)(*param_1 + 0x50))(param_1);
    piVar5 = (int *)(iVar3 + 0x1e0);
    if (piVar5 != (int *)(&stack0x00000000 + -0x80)) {
      piVar1 = *(int **)(iVar3 + 0x1f0);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))(piVar1,piVar5 != piVar1);
        *(undefined4 *)(iVar3 + 0x1f0) = 0;
      }
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(iVar3 + 0x1f0) = 0;
      }
      else if (puVar2 == (undefined4 *)(&stack0x00000000 + -0x80)) {
        uVar4 = (**(code **)*puVar2)(puVar2,piVar5);
        *(undefined4 *)(iVar3 + 0x1f0) = uVar4;
      }
      else {
        *(undefined4 **)(iVar3 + 0x1f0) = puVar2;
      }
    }
    fn_82359C18(&stack0x00000000 + -0x80);
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82230040(&stack0x00000000 + -0xe8);
}

