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
extern unsigned int *auStack_50;
extern int fn_82936290();
extern int fn_82A9CD40();


void fn_82A9D530(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [48];
  
  if (-1 < *(int *)(param_1 + 0x90)) {
    fn_82936290(auStack_50,0x20,param_2);
    fn_82936290(auStack_30,8,param_3);
    fn_82A9CD40(param_1 + 0x38,auStack_50,param_1 + 0x90);
  }
  return;
}

