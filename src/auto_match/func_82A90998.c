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
extern int fn_82A8FDF8();


void fn_82A90998(int param_1,uint *param_2,undefined8 param_3,longlong param_4,longlong param_5)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 8);
  if ((ulonglong)*param_2 <= (ulonglong)*(uint *)(param_1 + 8)) {
    uVar1 = (ulonglong)*param_2;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    fn_82A8FDF8(param_1,param_2 + 2,param_3,param_4,param_5);
    param_5 = param_5 + 0x20;
    param_4 = (ulonglong)param_2[0xc] + (ulonglong)param_2[0xd] + (ulonglong)param_2[0xe] +
              (ulonglong)param_2[0x19] + (ulonglong)param_2[0x1b] + param_4 +
              (ulonglong)param_2[0x1a];
    param_2 = param_2 + 0x1a;
  }
  return;
}

