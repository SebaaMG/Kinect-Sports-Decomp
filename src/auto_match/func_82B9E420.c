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
extern int fn_82AB15D0();
extern int fn_82AB71F0();
extern int fn_82B9A4B0();
extern unsigned int lbl_8316E558;


undefined8
fn_82B9E420(ulonglong param_1,undefined8 param_2,float *param_3,code *param_4,ulonglong param_5)

{
  ulonglong uVar1;
  undefined1 auStack_50 [80];
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(param_1,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0x1025);
  }
  uVar1 = fn_82AB71F0(param_1,0x30,param_2);
  *param_3 = (float)(uVar1 & 0xffffffff);
  if ((param_4 != (code *)0x0) && ((param_5 & 0xffffffff) != 0)) {
    fn_82B9A4B0(uVar1,auStack_50);
    (*param_4)(param_5,0xffffffff820ddc50,lbl_8316E558,0x36,
               auStack_50);
  }
  return 1;
}

