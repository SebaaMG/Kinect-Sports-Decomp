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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B1BE8();
extern int fn_8236DA90();
extern int fn_82897DF8();


void fn_8243C908(longlong param_1)

{
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  fn_8236DA90();
  fn_82230110(auStack_a0,0xffffffff821b9564);
  fn_822B1BE8(param_1 + 0xe4,param_1,auStack_a0,8);
  fn_82230300(auStack_a0,1,0);
  fn_82230110(auStack_e0,0xffffffff821b9578);
  fn_822B1BE8(param_1 + 0x20c,param_1,auStack_e0,0x16);
  fn_82230300(auStack_e0,1,0);
  fn_82230110(auStack_60,0xffffffff821b958c);
  fn_822B1BE8(param_1 + 0x334,param_1,auStack_60,0x16);
  fn_82230300(auStack_60,1,0);
  fn_82230110(auStack_120,0xffffffff821b959c);
  fn_822B1BE8(param_1 + 0x45c,param_1,auStack_120,0x16);
  fn_82230300(auStack_120,1,0);
  fn_82230110(auStack_100,0xffffffff821b959c);
  fn_822B1BE8(param_1 + 0x584,param_1,auStack_100,0x16);
  fn_82230300(auStack_100,1,0);
  fn_82230110(auStack_c0,0xffffffff821b959c);
  fn_822B1BE8(param_1 + 0x6ac,param_1,auStack_c0,0x16);
  fn_82230300(auStack_c0,1,0);
  fn_82230110(auStack_80,0xffffffff821b95a8);
  fn_82897DF8(param_1 + 0x7d4,param_1,auStack_80);
  fn_82230300(auStack_80,1,0);
  fn_82230110(auStack_40,0xffffffff821b95b0);
  fn_82897DF8(param_1 + 0x82c,param_1,auStack_40);
  fn_82230300(auStack_40,1,0);
  return;
}

