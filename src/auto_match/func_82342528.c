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
extern int fn_82337B90();
extern int fn_82337DE0();
extern int fn_82338740();
extern int fn_82341BF0();
extern int fn_82342E10();
extern int fn_8234A3D0();
extern int fn_8234A790();
extern int fn_824CD030();


void fn_82342528(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_82337B90(**(undefined4 **)(param_2 + 0xc));
  if (iVar2 == 0) {
    return;
  }
  iVar2 = (*(int **)(param_2 + 0xc))[1];
  iVar1 = **(int **)(param_2 + 0xc);
  if ((iVar2 == 2) || (iVar2 == 0xb)) {
    fn_82341BF0(param_2);
  }
  else if (((0xc < iVar2) && (iVar2 < 0x10)) &&
          (*(int *)(*(int *)(param_2 + 0x10) + 0x44) = *(int *)(*(int *)(param_2 + 0x10) + 0x44) + 1
          , *(uint *)(*(int *)(param_2 + 0x10) + 0x48) < *(uint *)(*(int *)(param_2 + 0x10) + 0x44))
          ) {
    *(undefined1 *)(*(int *)(iVar1 + 0x118) + 0x1d4) = 0;
    *(undefined1 *)(*(int *)(iVar1 + 0x118) + 0x254) = 0;
  }
  if ((*(int *)(**(int **)(param_2 + 0xc) + 0x24) != 0) && (iVar2 = fn_824CD030(), iVar2 != 0)
     ) {
    iVar2 = *(int *)(*(int *)(*(int *)(**(int **)(param_2 + 0xc) + 0x1a0) + 0xc) + 0x174);
    if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x5c);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x1d4) * 4 + *(int *)(iVar2 + 0x1c4));
    }
    fn_82338740((double)*(float *)(*(int *)(iVar2 + 0x40) + 0x16c));
  }
  iVar2 = *(int *)(*(int *)(param_2 + 0xc) + 4);
  if (iVar2 < 0xc) {
    if (iVar2 == 0xb) {
      fn_82341BF0(param_2);
      fn_8234A3D0(param_2,param_4);
      goto LAB_823426d0;
    }
    if (iVar2 < 2) {
      return;
    }
    if (iVar2 < 5) {
      fn_82341BF0(param_2);
      fn_82337DE0(**(undefined4 **)(param_2 + 0xc));
      return;
    }
    if (iVar2 < 9) {
      return;
    }
    if (10 < iVar2) {
      return;
    }
  }
  else if (iVar2 != 0xc) {
    if (iVar2 < 0xe) {
      return;
    }
    if (0xf < iVar2) {
      return;
    }
  }
  fn_82341BF0(param_2);
  fn_8234A790(param_1,param_2);
LAB_823426d0:
  fn_82337DE0(**(undefined4 **)(param_2 + 0xc));
  fn_82342E10(param_2,param_4);
  return;
}

