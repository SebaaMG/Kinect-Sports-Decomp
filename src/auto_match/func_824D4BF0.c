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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_824CD610();
extern int fn_82897B40();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_824D4BF0(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  fn_824CD610();
  fn_82230110(auStack_70,0xffffffff821c0de0);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  *(undefined4 *)(param_1 + 0x9fc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x9f4) = 1;
  *(undefined4 *)(param_1 + 0x9f8) = 0;
  uVar1 = fn_828EA268(0xffffffffffffffff);
  *(undefined4 *)(param_1 + 0xa00) = uVar1;
  fn_82897DF8(param_1 + 0x99c,param_1,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82897B40(param_1 + 0x99c);
  fn_82230110(auStack_50,0xffffffff821c0dec);
  *(undefined4 *)(param_1 + 0xa64) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa10) = 0;
  *(undefined1 *)(param_1 + 0xa5c) = 1;
  *(undefined4 *)(param_1 + 0xa60) = 0;
  uVar1 = fn_828EA268(0xffffffffffffffff);
  *(undefined4 *)(param_1 + 0xa68) = uVar1;
  fn_82897DF8(param_1 + 0xa04,param_1,auStack_50);
  fn_82230300(auStack_50,1,0);
  fn_82897B40(param_1 + 0xa04);
  return;
}

