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
extern int fn_82A3BAA8();
extern int fn_82A3BD78();


bool fn_82A396F0(int param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,int *param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x2b0c) = (int)param_5;
  *(int *)(param_1 + 0x2b04) = param_3;
  *(int *)(param_1 + 0x2b08) = param_3 + param_4 + 4;
  uVar1 = MmQueryAddressProtect(param_5);
  *(char *)(param_1 + 0x2fe4) = -(((uVar1 & 0x600) == 0) + -1);
  fn_82A3BD78(param_1);
  lVar2 = fn_82A3BAA8(param_1,param_2);
  *(int *)(param_1 + 0x2ec4) = *(int *)(param_1 + 0x2ec4) + 1;
  if (-1 < lVar2) {
    *param_7 = (int)lVar2;
    *(int *)(param_1 + 0x2b10) = *(int *)(param_1 + 0x2b10) + (int)lVar2;
  }
  else {
    *param_7 = 0;
  }
  return -1 >= lVar2;
}

