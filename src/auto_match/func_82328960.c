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
extern unsigned int uStack_30;


void fn_82328960(int param_1)

{
  int *piVar1;
  int aiStack_40 [4];
  undefined4 uStack_30;
  
  uStack_30 = 0;
  fn_82329730(param_1 + 0x178,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  if ((int *)(param_1 + 0x1b0) != aiStack_40) {
    piVar1 = *(int **)(param_1 + 0x1c0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x1b0) != piVar1);
      *(undefined4 *)(param_1 + 0x1c0) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0xd0,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  if ((int *)(param_1 + 0x108) != aiStack_40) {
    piVar1 = *(int **)(param_1 + 0x118);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x108) != piVar1);
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x30,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  if ((int *)(param_1 + 0x68) != aiStack_40) {
    piVar1 = *(int **)(param_1 + 0x78);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x68) != piVar1);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  fn_82359C18(aiStack_40);
  return;
}

