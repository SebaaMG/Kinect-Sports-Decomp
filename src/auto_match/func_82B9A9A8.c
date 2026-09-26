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
extern int fn_82AB71F0();
extern int fn_82AB7550();
extern unsigned int uRam8316e4b8;


undefined8
fn_82B9A9A8(undefined8 param_1,undefined8 param_2,ulonglong param_3,code *param_4,
             ulonglong param_5)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = fn_82AB71F0(param_1,0x1b,param_2);
  if (iVar2 == 1) {
    if ((param_3 & 0xffffffff) != 0) {
      fn_82AB7550(param_3,8,param_2,1);
    }
    if ((param_4 != (code *)0x0) && ((param_5 & 0xffffffff) != 0)) {
      (*param_4)(param_5,0xffffffff820ddb70,uRam8316e4b8,0xe,param_2,1);
    }
    uVar1 = 1;
  }
  else {
    if ((param_3 & 0xffffffff) != 0) {
      fn_82AB7550(param_3,8,param_2,0);
    }
    if ((param_4 != (code *)0x0) && ((param_5 & 0xffffffff) != 0)) {
      (*param_4)(param_5,0xffffffff820ddb70,uRam8316e4b8,0xe,param_2,0);
    }
    uVar1 = 0;
  }
  return uVar1;
}

