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
extern int fn_82739680();
extern int fn_827396D0();


void fn_8273B930(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  *(int *)((int)param_1 + 0x38) = (int)param_2 + (int)(param_2 / 86400000) * -86400000;
  uVar1 = (longlong)(int)((param_2 / 86400000) / 0x23ab1) * 400 + 0x7b2;
  uVar4 = (param_2 / 86400000) % 0x23ab1;
  *(int *)((int)param_1 + 0x3c) = (int)uVar1;
  uVar2 = uVar1;
  if (param_2 < 0) {
    while (uVar3 = fn_82739680(uVar1),
          (longlong)(int)(((uint)LZCOUNT(uVar3 & 0xff) >> 5 ^ 1) + 0x16d) <=
          (longlong)((uVar4 ^ (longlong)uVar4 >> 0x3f) - ((longlong)uVar4 >> 0x3f))) {
      uVar2 = uVar2 - 1;
      *(int *)((int)param_1 + 0x3c) = (int)uVar2;
      uVar3 = fn_82739680();
      uVar1 = uVar2 & 0xffffffff;
      uVar4 = (longlong)(int)(((uint)LZCOUNT(uVar3 & 0xff) >> 5 ^ 1) + 0x16d) + uVar4;
    }
  }
  else {
    while (uVar3 = fn_82739680(uVar1),
          (longlong)(int)(((uint)LZCOUNT(uVar3 & 0xff) >> 5 ^ 1) + 0x16d) <= (longlong)uVar4) {
      uVar1 = (ulonglong)*(uint *)((int)param_1 + 0x3c);
      uVar3 = fn_82739680(uVar1);
      *(int *)((int)param_1 + 0x3c) = (int)(uVar1 + 1);
      uVar1 = uVar1 + 1 & 0xffffffff;
      uVar4 = uVar4 - (longlong)(int)(((uint)LZCOUNT(uVar3 & 0xff) >> 5 ^ 1) + 0x16d);
    }
  }
  *(longlong *)((int)param_1 + 0x30) = param_2;
  *(int *)((int)param_1 + 0x40) = (int)uVar4;
  fn_827396D0(param_1);
  return;
}

