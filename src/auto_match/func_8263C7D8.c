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
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern int fn_8263BDD8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_821CBFB1;


void fn_8263C7D8(int param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 param_5)

{
  int iStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [36];
  
  fn_8263BDD8(param_1,0,param_2,param_5,&iStack_30,&iStack_2c,auStack_24,auStack_28);
  if (param_4 != (int *)0x0) {
    iStack_30 = ((uint)(byte)(&lbl_821CBFB1)[(*(uint *)(param_1 + 0x20) & 0x3f) * 2] * *param_4 >> 3
                ) + param_4[1] * iStack_2c + iStack_30;
  }
  *param_3 = iStack_2c;
  param_3[1] = iStack_30;
  return;
}

