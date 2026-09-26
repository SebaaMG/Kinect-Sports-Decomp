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
extern int fn_8224F2B8();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();


void fn_822CABC8(int param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x10);
  fn_8224F2B8(param_1 + 0x9c,param_1,uVar2 + 0x9c);
  fn_8224F2B8(param_1 + 0x48,param_1,uVar2 + 0x34);
  uVar1 = fn_82897B18(uVar2 + 0x15c);
  fn_82897600(param_1,param_1 + 0x144,uVar1);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x144,param_1,uVar2 + 0x15c,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_82897B18(uVar2 + 0x104);
  fn_82897600(param_1,param_1 + 0xf0,uVar1);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0xf0,param_1,uVar2 + 0x104,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_82897B18(uVar2 + 0x1b4);
  fn_82897600(param_1,param_1 + 0x198,uVar1);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x198,param_1,uVar2 + 0x1b4,*(undefined4 *)(param_1 + 4));
  return;
}

