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
extern unsigned int *auStack_d0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B1BE8();
extern int fn_8236DA90();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_82404150(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  fn_8236DA90();
  fn_82230110(auStack_b0,0xffffffff821b7b8c);
  fn_822B1BE8(param_1 + 0xe4,param_1,auStack_b0,8);
  fn_82230300(auStack_b0,1,0);
  fn_82230110(auStack_70,0xffffffff821b7ba4);
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0xf;
  uVar1 = fn_828EA268(0xf);
  *(undefined4 *)(param_1 + 0x2d8) = uVar1;
  fn_82897DF8(param_1 + 0x274,param_1,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82230110(auStack_d0,0xffffffff821b7bb8);
  *(undefined1 *)(param_1 + 0x2e8) = 0;
  fn_82897DF8(param_1 + 0x2dc,param_1,auStack_d0);
  fn_82230300(auStack_d0,1,0);
  fn_82230110(auStack_90,0xffffffff821b7bc8);
  *(undefined1 *)(param_1 + 0x340) = 0;
  fn_82897DF8(param_1 + 0x334,param_1,auStack_90);
  fn_82230300(auStack_90,1,0);
  fn_82230110(auStack_50,0xffffffff821b7be4);
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0xf;
  uVar1 = fn_828EA268(0xf);
  *(undefined4 *)(param_1 + 0x270) = uVar1;
  fn_82897DF8(param_1 + 0x20c,param_1,auStack_50);
  fn_82230300(auStack_50,1,0);
  return;
}

