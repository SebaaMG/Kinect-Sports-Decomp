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


void fn_82E838A0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 0xaf0);
  if ((iVar1 == 2) && (*(int *)(param_1 + 0x7b38) == 0)) {
    uVar4 = 1;
    uVar3 = (uint)(*(int *)(param_1 + 0x89c) == 1);
    goto LAB_82e83aa0;
  }
  if (*(uint *)(param_1 + 0x614) < 0xd) {
    if ((*(int *)(param_1 + 0x8a0) != 0) && (iVar1 != 2)) {
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,4);
    }
    uVar3 = *(uint *)(param_1 + 0x89c);
    if (uVar3 < 4) {
      if (uVar3 != 1) {
        if (uVar3 == 2) {
LAB_82e8393c:
          uVar5 = 3;
          uVar4 = 1;
          goto LAB_82e839c4;
        }
        if (uVar3 == 0) goto LAB_82e83988;
        goto LAB_82e83994;
      }
LAB_82e83934:
      uVar4 = 1;
LAB_82e839c0:
      uVar5 = 1;
LAB_82e839c4:
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar4,uVar5);
    }
  }
  else {
    if ((*(int *)(param_1 + 0x8a0) != 0) && (iVar1 != 2)) {
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,4);
    }
    uVar3 = *(uint *)(param_1 + 0x89c);
    if (uVar3 < 4) {
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 2) goto LAB_82e8393c;
          goto LAB_82e83934;
        }
LAB_82e83988:
        uVar5 = 2;
        uVar4 = 1;
        goto LAB_82e839c4;
      }
LAB_82e83994:
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,3);
      if ((*(int *)(param_1 + 0x8a0) == 0) && (*(int *)(param_1 + 0xaf0) != 2)) {
        uVar4 = 0;
        goto LAB_82e839c0;
      }
    }
  }
  if (*(int *)(param_1 + 0x8a0) == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
  if (*(int *)(param_1 + 0x7b38) == 0) {
    fn_82F02410(uVar2,*(undefined4 *)(param_1 + 0x8ac),6);
    uVar3 = *(uint *)(param_1 + 0x8b0);
  }
  else if (*(int *)(param_1 + 0x8a4) == 0) {
    fn_82F02410(uVar2,1,2);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x8bc),6);
    uVar3 = *(uint *)(param_1 + 0x8c0);
  }
  else if (*(int *)(param_1 + 0x8a8) == 0) {
    fn_82F02410(uVar2,0,2);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x8b4),6);
    uVar3 = *(uint *)(param_1 + 0x8b8);
  }
  else {
    fn_82F02410(uVar2,1,1);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x8b4),6);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x8b8),6);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x8bc),6);
    uVar3 = *(uint *)(param_1 + 0x8c0);
  }
  uVar4 = 6;
LAB_82e83aa0:
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar3,uVar4);
  return;
}

