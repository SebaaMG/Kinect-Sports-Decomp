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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_822447E8(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  fn_82230110(auStack_b0,0xffffffff821975f0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 6;
  uVar1 = fn_828EA268(6);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  fn_82897DF8(param_1 + 0x34,param_1,auStack_b0);
  fn_82230300(auStack_b0,1,0);
  fn_82230110(auStack_90,0xffffffff82197604);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 6;
  uVar1 = fn_828EA268(6);
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  fn_82897DF8(param_1 + 0x9c,param_1,auStack_90);
  fn_82230300(auStack_90,1,0);
  fn_82230110(auStack_70,0xffffffff8219761c);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0x3fffffff;
  uVar1 = fn_828EA268();
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  fn_82897DF8(param_1 + 0x104,param_1,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82230110(auStack_50,0xffffffff8219762c);
  *(undefined1 *)(param_1 + 0x178) = 0;
  fn_82897DF8(param_1 + 0x16c,param_1,auStack_50);
  fn_82230300(auStack_50,1,0);
  return;
}

