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


void fn_82ACADA8(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  
  uVar3 = (ulonglong)*(uint *)param_1;
  uVar1 = (uint)(param_2 + 1U) & 0x1f;
  lVar2 = uVar3 + 4;
  if ((~uVar3 & 1) == 0) {
    lVar2 = param_1;
  }
  uVar4 = ((param_2 + 1U & 0xffffffff) >> 3 & 0x1ffffffc) + lVar2;
  if ((~uVar3 & 1) != 0) {
    param_1 = uVar3 + 4;
  }
  piVar5 = (int *)uVar4;
  uVar3 = ((param_3 + 1U & 0xffffffff) >> 3 & 0x1ffffffc) + param_1;
  *piVar5 = *piVar5 - (param_4 << uVar1);
  if ((uVar4 & 0xffffffff) == (uVar3 & 0xffffffff)) {
    return;
  }
  piVar5 = (int *)uVar3;
  *piVar5 = *piVar5 - (param_4 >> (0x20 - uVar1 & 0x3f));
  return;
}

