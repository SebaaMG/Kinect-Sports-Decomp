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
extern int fn_82398DA0();
extern int fn_8239A928();
extern int fn_823ADF20();
extern int fn_8265CA20();
extern int fn_82F63CA0();


void fn_82397BA8(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  fn_8239A928();
  fn_82398DA0(param_1,*(undefined4 *)(param_1 + 0x1e4));
  iVar1 = *(int *)(param_1 + 0x1e4);
  if (iVar1 != 0) {
    fn_823ADF20(iVar1);
    fn_8265CA20(iVar1);
  }
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  piVar2 = *(int **)(param_1 + 0x1b8);
  for (piVar3 = *(int **)(param_1 + 0x1b4); piVar3 != piVar2; piVar3 = piVar3 + 1) {
    iVar1 = *piVar3;
    fn_82398DA0(param_1,iVar1);
    if (iVar1 != 0) {
      fn_823ADF20(iVar1);
      fn_8265CA20(iVar1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x1b4);
  if (iVar1 != *(int *)(param_1 + 0x1b8)) {
    fn_82F63CA0(iVar1,*(int *)(param_1 + 0x1b8),0);
    *(int *)(param_1 + 0x1b8) = iVar1;
  }
  piVar2 = *(int **)(param_1 + 0x1a8);
  for (piVar3 = *(int **)(param_1 + 0x1a4); piVar3 != piVar2; piVar3 = piVar3 + 1) {
    iVar1 = *piVar3;
    fn_82398DA0(param_1,iVar1);
    if (iVar1 != 0) {
      fn_823ADF20(iVar1);
      fn_8265CA20(iVar1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x1a4);
  if (iVar1 != *(int *)(param_1 + 0x1a8)) {
    fn_82F63CA0(iVar1,*(int *)(param_1 + 0x1a8),0);
    *(int *)(param_1 + 0x1a8) = iVar1;
  }
  piVar2 = *(int **)(param_1 + 0x1c8);
  for (piVar3 = *(int **)(param_1 + 0x1c4); piVar3 != piVar2; piVar3 = piVar3 + 1) {
    iVar1 = *piVar3;
    fn_82398DA0(param_1,iVar1);
    if (iVar1 != 0) {
      fn_823ADF20(iVar1);
      fn_8265CA20(iVar1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c4);
  if (iVar1 != *(int *)(param_1 + 0x1c8)) {
    fn_82F63CA0(iVar1,*(int *)(param_1 + 0x1c8),0);
    *(int *)(param_1 + 0x1c8) = iVar1;
  }
  return;
}

