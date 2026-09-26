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
extern int fn_82C565B0();
extern int fn_82C8BA58();
extern int fn_82C8BB60();
extern int fn_82C935C8();
extern int fn_82C9B9E0();


void fn_830D5D20(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xb64) =
       *(undefined4 *)((*(int *)(param_1 + 0xb94) + 0x2df) * 4 + param_1);
  *(undefined4 *)(param_1 + 0xb70) =
       *(undefined4 *)((*(int *)(param_1 + 0xb94) + 0x2e2) * 4 + param_1);
  *(undefined4 *)(param_1 + 0x830) =
       *(undefined4 *)((*(int *)(param_1 + 0x82c) + 0x107) * 8 + param_1);
  *(undefined4 *)(param_1 + 0x834) =
       *(undefined4 *)(*(int *)(param_1 + 0x82c) * 8 + param_1 + 0x83c);
  if (*(int *)(param_1 + 0xfb0) == 3) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1cc) = 1;
  }
  if ((*(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64) & 0xffffff80U) == 0) {
    *(undefined4 *)(param_1 + 0x39fc) = 1;
    *(undefined4 *)(param_1 + 0x3a00) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x3a00) = 1;
    *(undefined4 *)(param_1 + 0x39fc) = 3;
  }
  if (*(int *)(param_1 + 0x50d0) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x56a0);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x56a4);
  }
  *(undefined4 *)(param_1 + 0x569c) = uVar1;
  if (*(int *)(param_1 + 0x54c8) == 1) {
    *(int *)(param_1 + 0x55d0) = *(int *)(param_1 + 0x8c) * 4 + *(int *)(param_1 + 0x55d4);
  }
  else {
    *(undefined4 *)(param_1 + 0x55d0) = *(undefined4 *)(param_1 + 0x55d4);
  }
  fn_82C565B0(param_1,*(undefined4 *)(param_1 + 0xf8));
  fn_82C935C8(param_1,*(undefined4 *)(param_1 + 0xf8));
  fn_82C8BA58(param_1);
  fn_82C8BB60(param_1);
  fn_82C9B9E0(param_1,param_2);
  return;
}

