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
extern unsigned int *auStack_10;
extern int fn_82A2B760();


undefined4
fn_82A33490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,uint param_6,undefined8 param_7)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 auStack_10 [4];
  
  uVar2 = (param_5 & 0xffffffff) >> 2 & 1;
  if (param_6 != 0xffffffff) {
    uVar2 = ((ulonglong)(uint)(1 << (param_6 & 0x3f)) & 0xff) << 0x18 | uVar2;
  }
  iVar1 = ExCreateThread(auStack_10,param_2,param_7,0xffffffff82a37050,param_3,param_4,uVar2);
  if (iVar1 < 0) {
    fn_82A2B760();
    auStack_10[0] = 0;
  }
  return auStack_10[0];
}

