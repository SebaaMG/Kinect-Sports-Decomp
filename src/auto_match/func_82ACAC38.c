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


void fn_82ACAC38(uint *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  
  piVar2 = (int *)*param_1;
  if ((~(uint)piVar2 & 1) == 0) {
    *param_1 = *param_2;
    return;
  }
  piVar1 = (int *)*param_2;
  if (piVar2 + *piVar2 + 1 <= piVar2 + 1) {
    return;
  }
  lVar3 = (ulonglong)((uint)((int)(piVar2 + *piVar2 + 1) + (-1 - (int)(piVar2 + 1))) >> 2) + 1;
  do {
    piVar1 = piVar1 + 1;
    piVar2 = piVar2 + 1;
    *piVar2 = *piVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

