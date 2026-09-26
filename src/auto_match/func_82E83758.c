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
extern int fn_82F02410();
extern int fn_82F68B74();


void fn_82E83758(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x202c) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
    if (*(int *)(param_1 + 0x76c8) == 0) {
      uVar4 = 4;
      uVar3 = 0xf;
    }
    else {
      uVar4 = 5;
      uVar3 = 0x1f;
    }
    goto fn_82F02410;
  }
  iVar1 = *(int *)(param_1 + 0xaf0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
    uVar4 = 3;
    uVar3 = 6;
    goto fn_82F02410;
  }
  if ((*(int *)(param_1 + 0x76c8) == 0) || (*(int *)(param_1 + 0x76e0) != 0)) {
LAB_82e83808:
    if ((iVar1 == 1) && ((*(int *)(param_1 + 0x76e0) != 0 || (*(int *)(param_1 + 0x76d0) == 0)))) {
      uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
      uVar4 = 1;
      uVar3 = 0;
      goto fn_82F02410;
    }
  }
  else if (iVar1 == 1) {
    if (*(longlong *)(param_1 + 0x7758) <=
        *(longlong *)(param_1 + 0x1e30) - *(longlong *)(param_1 + 0x7740)) {
      if (*(longlong *)(param_1 + 0x7758) >> 1 <=
          *(longlong *)(param_1 + 0x1e18) - *(longlong *)(param_1 + 0x1e20)) {
        uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
        uVar4 = 6;
        uVar3 = 0x3d;
        goto fn_82F02410;
      }
    }
    goto LAB_82e83808;
  }
  if (iVar1 == 2) {
    uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
    uVar4 = 2;
    uVar3 = 2;
  }
  else if (iVar1 == 4) {
    uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
    uVar4 = 4;
    uVar3 = 0xe;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x76e0) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x76d0) == 0) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
    uVar4 = 6;
    uVar3 = 0x3c;
  }
fn_82F02410:
  fn_82F68B74(uVar2,uVar3,uVar4);
  return;
}

