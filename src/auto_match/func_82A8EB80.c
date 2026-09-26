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
extern int fn_82A87738();


void fn_82A8EB80(int param_1,uint *param_2,undefined8 param_3,longlong param_4,longlong param_5)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 4);
  if ((ulonglong)*param_2 <= (ulonglong)*(uint *)(param_1 + 4)) {
    uVar2 = (ulonglong)*param_2;
  }
  if (uVar2 != 0) {
    param_2 = param_2 + 2;
    do {
      fn_82A87738(param_1,param_2,param_3,param_4,param_5);
      uVar1 = *param_2;
      uVar2 = uVar2 - 1;
      param_5 = param_5 + 4;
      param_2 = param_2 + 3;
      param_4 = (ulonglong)uVar1 + param_4;
    } while (uVar2 != 0);
  }
  return;
}

