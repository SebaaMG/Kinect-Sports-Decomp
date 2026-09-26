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
extern int fn_829CF1C0();
extern int fn_831420FC();
extern int fn_8314210C();


undefined8 fn_829CF908(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 2;
  iVar1 = fn_8314210C(0xff,0xffffffff820573d4,0xffffffff820573bc,0x43,0,0,0);
  iVar2 = 0;
  if ((iVar1 == 0) ||
     (iVar2 = fn_8314210C(0xff,0xffffffff820573d4,0xffffffff82057398,0x43,0,0,0), iVar2 == 0)) {
    iVar1 = fn_8314210C(0xff,0xffffffff820573b0,0xffffffff8205737c,0x43,0,0,0);
    iVar3 = 0;
    if ((iVar1 == 0) ||
       (iVar3 = fn_8314210C(0xff,0xffffffff820573b0,0xffffffff82057360,0x43,0,0,0), iVar3 == 0))
    {
      uVar4 = fn_829CF1C0(param_1,param_2,0xffffffff82057340,0xffffffff82057350,0);
    }
    else {
      uVar4 = 0xffffffff8301000d;
    }
  }
  else {
    uVar4 = 0xffffffff8301000d;
  }
  if (iVar2 == 0) {
    fn_831420FC(0xffffffff820573d4,0);
  }
  if (iVar3 == 0) {
    fn_831420FC(0xffffffff820573b0,0);
  }
  return uVar4;
}

