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
extern unsigned int *auStack_140;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_d8;
extern int fn_82230040();
extern int fn_822B1A68();
extern int fn_82329730();
extern int fn_82359C18();
extern int fn_82383298();
extern int fn_82383300();
extern int fn_8238E960();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_821B3AF4;
extern unsigned int lbl_821B3B0C;
extern unsigned int lbl_821B3B24;
extern unsigned int lbl_821B3B3C;
extern unsigned int lbl_821B3B54;
extern unsigned int lbl_821B3B6C;
extern unsigned int lbl_821B3B84;
extern unsigned int lbl_821B3B9C;
extern unsigned int stack0x00000000;
extern unsigned int uStack_124;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82382150(int *param_1)

{
  longlong lVar1;
  undefined4 *puVar3;
  longlong lVar2;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_140 [16];
  int aiStack_130 [3];
  undefined4 uStack_124;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  iVar4 = param_1[0x20];
  lVar1 = (**(code **)(*param_1 + 8))();
  fn_822B1A68(*(undefined4 *)(iVar4 + 0x7c),lVar1 + 0x1f0);
  piVar7 = *(int **)(*(int *)(iVar4 + 0x7c) + 8);
  (**(code **)(*piVar7 + 0x14))(piVar7,2);
  puVar3 = (undefined4 *)fn_8265C9E0(0x28);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_82230040(&stack0x00000000 + -200);
  }
  *puVar3 = &lbl_821B3AF4;
  fn_82F68CC0(puVar3 + 2,&stack0x00000000 + -0x130,0x20);
  lVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
  fn_82329730(lVar1 + 0x348,&stack0x00000000 + -0x90);
  fn_82359C18(&stack0x00000000 + -0x90);
  puVar3 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_82230040(&stack0x00000000 + -0xd0);
  }
  *puVar3 = &lbl_821B3B0C;
  fn_82F68CC0(puVar3 + 2,&stack0x00000000 + -0x130,0x18);
  lVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
  fn_82329730(lVar1 + 0x3c0,&stack0x00000000 + -0x70);
  fn_82359C18(&stack0x00000000 + -0x70);
  puVar3 = (undefined4 *)fn_8265C9E0(0x18);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_82230040(&stack0x00000000 + -0xd8);
  }
  *puVar3 = &lbl_821B3B24;
  puVar3[2] = aiStack_130[0];
  puVar3[3] = 0;
  puVar3[4] = param_1;
  puVar3[5] = uStack_124;
  lVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
  fn_82383300(lVar1 + 0x430,&stack0x00000000 + -0x50);
  fn_82359C18(&stack0x00000000 + -0x50);
  lVar1 = fn_8265C9E0(0x98);
  if (lVar1 == 0) {
    iVar4 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x4c))(param_1);
    iVar4 = fn_8238E960(lVar1,lVar2 + 0x30);
  }
  param_1[0x22] = iVar4;
  fn_82383298(&stack0x00000000 + -0x140);
  puVar3 = (undefined4 *)fn_8265C9E0(0x48);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &lbl_821B3B3C;
    fn_82F68CC0(puVar3 + 2,&stack0x00000000 + -0x130,0x40);
    piVar7 = (int *)param_1[0x22];
    if (piVar7 != (int *)(&stack0x00000000 + -0x130)) {
      piVar6 = (int *)piVar7[4];
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))(piVar6,piVar7 != piVar6);
        piVar7[4] = 0;
      }
      piVar6 = piVar7;
      if (puVar3 != (undefined4 *)(&stack0x00000000 + -0x130)) {
        piVar6 = (int *)0x0;
      }
      iVar4 = (**(code **)*puVar3)(puVar3,piVar6);
      piVar7[4] = iVar4;
    }
    fn_82359C18(&stack0x00000000 + -0x130);
    puVar3 = (undefined4 *)fn_8265C9E0(0x58);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82230040(&stack0x00000000 + -0xc0);
    }
    *puVar3 = &lbl_821B3B54;
    fn_82F68CC0(puVar3 + 2,&stack0x00000000 + -0x130,0x50);
    iVar4 = param_1[0x22];
    piVar7 = (int *)(iVar4 + 0x18);
    if ((undefined1 *)(iVar4 + 0x18) != &stack0x00000000 + -0x130) {
      piVar6 = *(int **)(iVar4 + 0x28);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))(piVar6,piVar7 != piVar6);
        *(undefined4 *)(iVar4 + 0x28) = 0;
      }
      if (puVar3 != (undefined4 *)(&stack0x00000000 + -0x130)) {
        piVar7 = (int *)0x0;
      }
      uVar5 = (**(code **)*puVar3)(puVar3,piVar7);
      *(undefined4 *)(iVar4 + 0x28) = uVar5;
    }
    fn_82359C18(&stack0x00000000 + -0x130);
    puVar3 = (undefined4 *)fn_8265C9E0(0x20);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82230040(&stack0x00000000 + -0xa0);
    }
    *puVar3 = &lbl_821B3B6C;
    fn_82F68CC0(puVar3 + 2,&stack0x00000000 + -0x130,0x18);
    iVar4 = param_1[0x22];
    piVar7 = (int *)(iVar4 + 0x30);
    if ((undefined1 *)(iVar4 + 0x30) != &stack0x00000000 + -0x130) {
      piVar6 = *(int **)(iVar4 + 0x40);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))(piVar6,piVar7 != piVar6);
        *(undefined4 *)(iVar4 + 0x40) = 0;
      }
      if (puVar3 != (undefined4 *)(&stack0x00000000 + -0x130)) {
        piVar7 = (int *)0x0;
      }
      uVar5 = (**(code **)*puVar3)(puVar3,piVar7);
      *(undefined4 *)(iVar4 + 0x40) = uVar5;
    }
    fn_82359C18(&stack0x00000000 + -0x130);
    puVar3 = (undefined4 *)fn_8265C9E0(0x40);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &lbl_821B3B84;
      fn_82F68CC0(puVar3 + 2,&stack0x00000000 + -0x130,0x38);
      iVar4 = param_1[0x22];
      piVar7 = (int *)(iVar4 + 0x48);
      if ((undefined1 *)(iVar4 + 0x48) != &stack0x00000000 + -0x130) {
        piVar6 = *(int **)(iVar4 + 0x58);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0xc))(piVar6,piVar7 != piVar6);
          *(undefined4 *)(iVar4 + 0x58) = 0;
        }
        if (puVar3 != (undefined4 *)(&stack0x00000000 + -0x130)) {
          piVar7 = (int *)0x0;
        }
        uVar5 = (**(code **)*puVar3)(puVar3,piVar7);
        *(undefined4 *)(iVar4 + 0x58) = uVar5;
      }
      fn_82359C18(&stack0x00000000 + -0x130);
      puVar3 = (undefined4 *)fn_8265C9E0(0x60);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &lbl_821B3B9C;
        fn_82F68CC0(puVar3 + 2,&stack0x00000000 + -0x130,0x58);
        iVar4 = param_1[0x22];
        piVar7 = (int *)(iVar4 + 0x60);
        if ((undefined1 *)(iVar4 + 0x60) != &stack0x00000000 + -0x130) {
          piVar6 = *(int **)(iVar4 + 0x70);
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0xc))(piVar6,piVar7 != piVar6);
            *(undefined4 *)(iVar4 + 0x70) = 0;
          }
          if (puVar3 != (undefined4 *)(&stack0x00000000 + -0x130)) {
            piVar7 = (int *)0x0;
          }
          uVar5 = (**(code **)*puVar3)(puVar3,piVar7);
          *(undefined4 *)(iVar4 + 0x70) = uVar5;
        }
        fn_82359C18(&stack0x00000000 + -0x130);
        return;
      }
                    /* WARNING: Subroutine does not return */
      fn_82230040(&stack0x00000000 + -0xb0);
    }
                    /* WARNING: Subroutine does not return */
    fn_82230040(&stack0x00000000 + -0xb8);
  }
                    /* WARNING: Subroutine does not return */
  fn_82230040(&stack0x00000000 + -0xa8);
}

