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


void fn_827CF0C0(int param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  
  uVar3 = param_4 - param_3;
  if ((longlong)uVar3 < 1) {
    return;
  }
  if ((int)param_2 < 1) {
    return;
  }
  puVar5 = (uint *)(param_1 + -4);
  do {
    puVar5 = puVar5 + 1;
    lVar4 = (ulonglong)*puVar5 + param_3 + -1;
    uVar1 = *(undefined1 *)((int)((ulonglong)*puVar5 + param_3) + -1);
    uVar6 = uVar3;
    uVar2 = uVar3 & 0xffffffff;
    while (uVar2 != 0) {
      lVar4 = lVar4 + 1;
      *(undefined1 *)lVar4 = uVar1;
      uVar6 = uVar6 - 1;
      uVar2 = uVar6;
    }
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

