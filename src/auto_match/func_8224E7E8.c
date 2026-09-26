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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82897DF8();
extern int fn_828A9C98();


void fn_8224E7E8(int param_1)

{
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  fn_828A9C98();
  fn_82230110(auStack_80,0xffffffff82197c5c);
  *(undefined1 *)(param_1 + 0x308) = 0;
  fn_82897DF8(param_1 + 0x2fc,param_1,auStack_80);
  fn_82230300(auStack_80,1,0);
  fn_82230110(auStack_60,0xffffffff82197c68);
  *(undefined1 *)(param_1 + 0x360) = 0;
  fn_82897DF8(param_1 + 0x354,param_1,auStack_60);
  fn_82230300(auStack_60,1,0);
  fn_82230110(auStack_40,0xffffffff82197c78);
  *(undefined1 *)(param_1 + 0x3b8) = 0;
  fn_82897DF8(param_1 + 0x3ac,param_1,auStack_40);
  fn_82230300(auStack_40,1,0);
  return;
}

