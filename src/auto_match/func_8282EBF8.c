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
extern unsigned int *auStack_40;
extern int fn_8282EB50();


void fn_8282EBF8(longlong param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 auStack_40 [16];
  
  param_2 = param_2 - (int)param_1;
  uVar1 = param_2 >> 2;
  uVar3 = (longlong)(param_2 >> 3) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  if (0 < (longlong)uVar3) {
    lVar2 = (uVar3 & 0x3fffffff) * 4 + param_1;
    do {
      lVar2 = lVar2 + -4;
      auStack_40[0] = *(undefined4 *)lVar2;
      uVar3 = uVar3 - 1;
      fn_8282EB50(param_1,uVar3,uVar1,auStack_40,param_3);
    } while (0 < (int)uVar3);
  }
  return;
}

