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
extern int fn_82C8BA58();
extern int fn_82C935C8();
extern int fn_82C9B9E0();


void fn_830CBCD0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64) & 0xffffff80U) == 0) {
    uVar2 = 4;
    uVar1 = 3;
  }
  else {
    uVar2 = 3;
    uVar1 = 4;
  }
  *(undefined4 *)(param_1 + 0x39fc) = uVar2;
  *(undefined4 *)(param_1 + 0x3a00) = uVar1;
  *(undefined4 *)(param_1 + 0xb64) =
       *(undefined4 *)((*(int *)(param_1 + 0xb94) + 0x2df) * 4 + param_1);
  *(undefined4 *)(param_1 + 0xb70) =
       *(undefined4 *)((*(int *)(param_1 + 0xb94) + 0x2e2) * 4 + param_1);
  *(undefined4 *)(param_1 + 0x830) =
       *(undefined4 *)((*(int *)(param_1 + 0x82c) + 0x107) * 8 + param_1);
  *(undefined4 *)(param_1 + 0x834) =
       *(undefined4 *)(*(int *)(param_1 + 0x82c) * 8 + param_1 + 0x83c);
  *(undefined4 *)(param_1 + 0x1cc) = 1;
  fn_82C935C8(param_1,*(undefined4 *)(param_1 + 0xf8));
  fn_82C8BA58(param_1);
  fn_82C9B9E0(param_1,param_2);
  return;
}

