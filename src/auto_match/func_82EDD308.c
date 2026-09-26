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
extern int fn_82EDD170();
extern unsigned int iStack00000014;
extern unsigned int stack0x00000014;


bool fn_82EDD308(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  int iStack00000014;
  
  *(int *)(param_1 + 0x20) = (int)param_4;
  *(int *)(param_1 + 0x10) = (int)param_2;
  *(int *)(param_1 + 0x14) = (int)param_3;
  *(int *)(param_1 + 0x28) = (int)param_2;
  *(int *)(param_1 + 0x30) = (int)param_4;
  *(int *)(param_1 + 0x2c) = (int)param_3;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  iStack00000014 = param_1;
  lVar1 = fn_82EDD170(&stack0x00000014,0,0,param_2,param_3,0,0,param_4);
  return lVar1 != 0;
}

