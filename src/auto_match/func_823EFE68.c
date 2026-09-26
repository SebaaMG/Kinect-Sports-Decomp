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
extern int fn_82329730();
extern int fn_82359C18();
extern int fn_82383300();
extern int fn_823F2E90();
extern int fn_823F2F20();
extern unsigned int uStack_30;


void fn_823EFE68(int param_1)

{
  int *piVar1;
  int aiStack_40 [4];
  undefined4 uStack_30;
  
  uStack_30 = 0;
  if ((int *)(param_1 + 0x60) != aiStack_40) {
    piVar1 = *(int **)(param_1 + 0x70);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x60) != piVar1);
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x28,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0xa8,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0xa8,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  if ((int *)(param_1 + 0x158) != aiStack_40) {
    piVar1 = *(int **)(param_1 + 0x168);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x158) != piVar1);
      *(undefined4 *)(param_1 + 0x168) = 0;
    }
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x120,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  if ((int *)(param_1 + 0x1c8) != aiStack_40) {
    piVar1 = *(int **)(param_1 + 0x1d8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x1c8) != piVar1);
      *(undefined4 *)(param_1 + 0x1d8) = 0;
    }
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 400,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0x270,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x270,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0x2e8,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x2e8,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0x360,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x360,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0x3d8,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x3d8,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  if ((int *)(param_1 + 0x238) != aiStack_40) {
    piVar1 = *(int **)(param_1 + 0x248);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x238) != piVar1);
      *(undefined4 *)(param_1 + 0x248) = 0;
    }
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x200,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0x450,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x450,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0x4c8,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x4c8,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  if ((int *)(param_1 + 0x578) != aiStack_40) {
    piVar1 = *(int **)(param_1 + 0x588);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x578) != piVar1);
      *(undefined4 *)(param_1 + 0x588) = 0;
    }
    *(undefined4 *)(param_1 + 0x588) = 0;
  }
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x540,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2E90(param_1 + 0x5b0,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82383300(param_1 + 0x5b0,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0x618,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x618,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0x690,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x690,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2E90(param_1 + 0x710,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82383300(param_1 + 0x710,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  if ((int *)(param_1 + 0x7b0) != aiStack_40) {
    piVar1 = *(int **)(param_1 + 0x7c0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x7b0) != piVar1);
      *(undefined4 *)(param_1 + 0x7c0) = 0;
    }
    *(undefined4 *)(param_1 + 0x7c0) = 0;
  }
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x778,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  if ((int *)(param_1 + 0x828) != aiStack_40) {
    piVar1 = *(int **)(param_1 + 0x838);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x828) != piVar1);
      *(undefined4 *)(param_1 + 0x838) = 0;
    }
    *(undefined4 *)(param_1 + 0x838) = 0;
  }
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x7f0,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0x890,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x890,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  if ((int *)(param_1 + 0x968) != aiStack_40) {
    piVar1 = *(int **)(param_1 + 0x978);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x968) != piVar1);
      *(undefined4 *)(param_1 + 0x978) = 0;
    }
    *(undefined4 *)(param_1 + 0x978) = 0;
  }
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x930,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0x9c0,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x9c0,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0xa58,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0xa58,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0xaf8,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0xaf8,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0xb98,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0xb98,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0xc38,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0xc38,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0xcd0,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0xcd0,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0xd40,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0xd40,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_823F2F20(param_1 + 0xdb0,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0xdb0,aiStack_40);
  fn_82359C18(aiStack_40);
  return;
}

