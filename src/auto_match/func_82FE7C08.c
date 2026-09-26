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
extern int fn_82A1E6A0();
extern int fn_82FE7220();
extern int fn_82FE7428();


undefined8
fn_82FE7C08(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  int *piStack_38;
  int aiStack_34 [13];
  
  aiStack_34[0] = fn_82A1E6A0(0,0,0,0);
  if (aiStack_34[0] == 0) {
    uVar1 = 2;
  }
  else {
    piStack_38 = aiStack_34;
    uVar1 = fn_82FE7428(0xffffffff82fe72a0,auStack_40,param_1 == 0,param_2,param_3,param_4,
                              param_5,1);
    uVar1 = fn_82FE7220(auStack_40,uVar1);
  }
  return uVar1;
}

