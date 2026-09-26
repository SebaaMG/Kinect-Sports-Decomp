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
extern int fn_82C563B8();


void fn_82C7B780(int param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0xd44) = 1;
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
  if (*(int *)(param_1 + 0x3d68) != 0) {
    fn_82C563B8(lVar1);
    *(undefined4 *)(param_1 + 0x3d68) = 0;
  }
  if (*(int *)(param_1 + 0x3d70) != 0) {
    fn_82C563B8(lVar1);
    *(undefined4 *)(param_1 + 0x3d70) = 0;
  }
  if (*(int *)(param_1 + 0x3d6c) != 0) {
    fn_82C563B8(lVar1);
    *(undefined4 *)(param_1 + 0x3d6c) = 0;
  }
  if (*(int *)(param_1 + 0x3d74) != 0) {
    fn_82C563B8(lVar1);
    *(undefined4 *)(param_1 + 0x3d74) = 0;
  }
  if ((*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) ||
     (param_1 == *(int *)(*(int *)(param_1 + 0x6070) + 0x43d8))) {
    if (*(int *)(param_1 + 0x3d78) != 0) {
      fn_82C563B8(lVar1);
      *(undefined4 *)(param_1 + 0x3d78) = 0;
    }
    if (*(int *)(param_1 + 0x3d80) != 0) {
      fn_82C563B8(lVar1);
      *(undefined4 *)(param_1 + 0x3d80) = 0;
    }
    if (*(int *)(param_1 + 0x3d88) != 0) {
      fn_82C563B8(lVar1);
      *(undefined4 *)(param_1 + 0x3d88) = 0;
    }
    if (*(int *)(param_1 + 0x3d90) != 0) {
      fn_82C563B8(lVar1);
      *(undefined4 *)(param_1 + 0x3d90) = 0;
    }
    if (*(int *)(param_1 + 0x3d98) != 0) {
      fn_82C563B8(lVar1);
      *(undefined4 *)(param_1 + 0x3d98) = 0;
    }
    if (*(int *)(param_1 + 0x3da0) != 0) {
      fn_82C563B8(lVar1);
      *(undefined4 *)(param_1 + 0x3da0) = 0;
    }
    if (*(int *)(param_1 + 0x3da8) != 0) {
      fn_82C563B8(lVar1);
      *(undefined4 *)(param_1 + 0x3da8) = 0;
    }
    if (*(int *)(param_1 + 0x3db0) != 0) {
      fn_82C563B8(lVar1);
      *(undefined4 *)(param_1 + 0x3db0) = 0;
    }
    if (*(int *)(param_1 + 0x3db8) != 0) {
      fn_82C563B8(lVar1);
      *(undefined4 *)(param_1 + 0x3db8) = 0;
    }
    if (*(int *)(param_1 + 0x3dc0) != 0) {
      fn_82C563B8(lVar1);
      *(undefined4 *)(param_1 + 0x3dc0) = 0;
    }
    if (*(int *)(param_1 + 0x3dc8) != 0) {
      fn_82C563B8(lVar1);
      *(undefined4 *)(param_1 + 0x3dc8) = 0;
    }
    if (*(int *)(param_1 + 0x3dd0) != 0) {
      fn_82C563B8(lVar1);
      *(undefined4 *)(param_1 + 0x3dd0) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3d78) = 0;
    *(undefined4 *)(param_1 + 0x3d80) = 0;
    *(undefined4 *)(param_1 + 0x3d88) = 0;
    *(undefined4 *)(param_1 + 0x3d90) = 0;
    *(undefined4 *)(param_1 + 0x3d98) = 0;
    *(undefined4 *)(param_1 + 0x3da0) = 0;
    *(undefined4 *)(param_1 + 0x3da8) = 0;
    *(undefined4 *)(param_1 + 0x3db0) = 0;
    *(undefined4 *)(param_1 + 0x3db8) = 0;
    *(undefined4 *)(param_1 + 0x3dc0) = 0;
    *(undefined4 *)(param_1 + 0x3dc8) = 0;
    *(undefined4 *)(param_1 + 0x3dd0) = 0;
  }
  return;
}

