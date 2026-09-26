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
extern int fn_82F69148();


int fn_82A6A338(int param_1,ulonglong param_2,int param_3,int param_4)

{
  int iVar1;
  int aiStack_20 [2];
  
  param_4 = (int)param_2 * param_4;
  aiStack_20[0] = 0;
  iVar1 = param_4 + param_1;
  if (0 < (int)param_2) {
    fn_82F69148((int)aiStack_20 + ((iVar1 - param_4) - param_1),iVar1,param_2);
  }
  return aiStack_20[0] >>
         (((int)((param_2 & 0xffffffff) << 3) - param_3) + (int)((4 - param_2 & 0xffffffff) << 3) &
         0x3fU);
}

