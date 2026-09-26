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
extern unsigned int *auStack_240;
extern int fn_82A2A288();
extern int fn_82FB0EE0();


undefined8
fn_82FB1008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_240 [576];
  
  iVar2 = fn_82A2A288(0,0,param_3,0xffffffffffffffff,auStack_240,0x104);
  if (iVar2 < 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = fn_82FB0EE0(param_1,param_2,auStack_240,param_4,param_5);
  }
  return uVar1;
}

