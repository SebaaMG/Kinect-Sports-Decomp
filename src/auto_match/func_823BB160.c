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
extern int fn_8227CB30();
extern int fn_82359C18();


void fn_823BB160(int *param_1,int *param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  int iVar3;
  undefined4 uVar4;
  longlong lVar2;
  int *piVar5;
  
  iVar3 = (**(code **)(*param_1 + 0x44))();
  piVar5 = (int *)(iVar3 + 0x80);
  if (piVar5 != param_2) {
    piVar1 = *(int **)(iVar3 + 0x90);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,piVar5 != piVar1);
      *(undefined4 *)(iVar3 + 0x90) = 0;
    }
    if ((int *)param_2[4] == (int *)0x0) {
      *(undefined4 *)(iVar3 + 0x90) = 0;
    }
    else {
      if ((int *)param_2[4] != param_2) {
        piVar5 = (int *)0x0;
      }
      uVar4 = (*(code *)**(undefined4 **)param_2[4])((undefined4 *)param_2[4],piVar5);
      *(undefined4 *)(iVar3 + 0x90) = uVar4;
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x44))(param_1);
  fn_8227CB30(lVar2 + 0xf8,param_3);
  piVar5 = param_1 + 0x22;
  if (piVar5 != param_4) {
    piVar1 = (int *)param_1[0x26];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,piVar5 != piVar1);
      param_1[0x26] = 0;
    }
    if ((int *)param_4[4] == (int *)0x0) {
      param_1[0x26] = 0;
    }
    else {
      if ((int *)param_4[4] != param_4) {
        piVar5 = (int *)0x0;
      }
      iVar3 = (*(code *)**(undefined4 **)param_4[4])((undefined4 *)param_4[4],piVar5);
      param_1[0x26] = iVar3;
    }
  }
  fn_82359C18(param_2);
  fn_82359C18(param_3);
  fn_82359C18(param_4);
  return;
}

