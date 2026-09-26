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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230300();
extern int fn_822B27E8();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_822B1BE8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  uVar1 = fn_822B27E8(auStack_a0,param_3,0xffffffff821ac8a0);
  *(int *)(param_1 + 0x60) = (int)param_4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar2 = fn_828EA268(param_4);
  *(undefined4 *)(param_1 + 100) = uVar2;
  fn_82897DF8(param_1,param_2,uVar1);
  fn_82230300(auStack_a0,1,0);
  uVar1 = fn_822B27E8(auStack_80,param_3,0xffffffff821ac8b0);
  fn_82897DF8(param_1 + 0x68,param_2,uVar1);
  fn_82230300(auStack_80,1,0);
  uVar1 = fn_822B27E8(auStack_60,param_3,0xffffffff821ac8c0);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(int *)(param_1 + 0x120) = (int)param_4;
  uVar2 = fn_828EA268(param_4);
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  fn_82897DF8(param_1 + 0xc0,param_2,uVar1);
  fn_82230300(auStack_60,1,0);
  return;
}

