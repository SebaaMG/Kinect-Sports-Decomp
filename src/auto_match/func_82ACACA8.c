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


uint fn_82ACACA8(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)*(uint *)param_1;
  uVar2 = (uint)(param_2 + 1U) & 0x1f;
  uVar1 = (2 << (param_3 + 1U & 0x1f)) - 1;
  lVar4 = uVar3 + 4;
  if ((~uVar3 & 1) == 0) {
    lVar4 = param_1;
  }
  uVar6 = ((param_2 + 1U & 0xffffffff) >> 3 & 0x1ffffffc) + lVar4;
  if ((~uVar3 & 1) != 0) {
    param_1 = uVar3 + 4;
  }
  uVar3 = ((ulonglong)(param_3 + 1U >> 3) & 0x1ffffffc) + param_1;
  uVar5 = -1 << uVar2 & *(uint *)uVar6;
  if ((uVar6 & 0xffffffff) == (uVar3 & 0xffffffff)) {
    return (uVar5 & uVar1) >> uVar2;
  }
  return (*(uint *)uVar3 & uVar1) << (0x20 - uVar2 & 0x3f) | uVar5 >> uVar2;
}

