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
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;


void fn_82A1CD20(char *param_1,undefined8 param_2,char *param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  char acStack_a0 [64];
  char acStack_60 [96];
  
  _snprintf(acStack_a0,0x40,param_1,param_2);
  RtlInitAnsiString(auStack_b0,acStack_a0);
  _snprintf(acStack_60,0x40,param_3,param_4);
  RtlInitAnsiString(auStack_a8,acStack_60);
  uVar1 = ObCreateSymbolicLink(auStack_b0,auStack_a8);
  *param_5 = uVar1 >> 0x1f ^ 1;
  return;
}

