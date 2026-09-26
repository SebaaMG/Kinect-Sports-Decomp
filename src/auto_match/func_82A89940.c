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
extern int fn_82A88CC8();
extern int fn_82A892D0();


undefined8 fn_82A89940(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 auStack_10 [4];
  
  if (param_4 == 2) {
    auStack_10[0] = 0;
    uVar1 = fn_82A892D0(auStack_10,param_1,param_2,param_3,0x24);
  }
  else if (param_4 == 1) {
    auStack_10[0] = 0;
    uVar1 = fn_82A88CC8(auStack_10,param_1,param_2,param_3,0x20);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

