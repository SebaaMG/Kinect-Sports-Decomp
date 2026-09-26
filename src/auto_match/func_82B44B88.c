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
extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82B43B90();


void fn_82B44B88(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x5c) << 2,0);
  uVar1 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  for (; ((uVar1 & 1) == 0 && (uVar1 != 0)); uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
    *(undefined4 *)(uVar1 + 0x34) = 0;
    *(undefined4 *)(uVar1 + 0x38) = 0;
    *(undefined4 *)(uVar1 + 0x3c) = 0;
    *(uint *)((*(uint *)(uVar1 + 0x30) & 0x7ffff) * 4 + *(int *)(param_1 + 0x60) + -4) = uVar1;
  }
  fn_82B43B90(param_1,*(undefined4 *)(param_1 + 0x5c));
  fn_82AC6808(param_1,*(undefined4 *)(param_1 + 0x60),*(int *)(param_1 + 0x5c) << 2,0);
  return;
}

