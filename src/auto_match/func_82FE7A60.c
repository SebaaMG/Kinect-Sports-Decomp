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
extern unsigned int *auStack_30;
extern int fn_82A1E6A0();
extern int fn_82FE7220();
extern int fn_82FE7320();


undefined8 fn_82FE7A60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  int *piStack_28;
  int aiStack_24 [9];
  
  aiStack_24[0] = fn_82A1E6A0(0,0,0,0);
  if (aiStack_24[0] == 0) {
    uVar1 = 2;
  }
  else {
    piStack_28 = aiStack_24;
    uVar1 = fn_82FE7320(param_1,0xffffffff82fe72a0,auStack_30,param_2,param_3,1);
    uVar1 = fn_82FE7220(auStack_30,uVar1);
  }
  return uVar1;
}

