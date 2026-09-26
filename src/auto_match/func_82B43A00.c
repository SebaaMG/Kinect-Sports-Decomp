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


void fn_82B43A00(uint *param_1,uint *param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  
  puVar3 = (uint *)*param_1;
  if ((~(uint)puVar3 & 1) == 0) {
    *param_1 = *param_2 | (uint)puVar3;
    return;
  }
  param_2 = (uint *)*param_2;
  if (puVar3 + *puVar3 + 1 <= puVar3 + 1) {
    return;
  }
  lVar2 = (ulonglong)((uint)((int)(puVar3 + *puVar3 + 1) + (-1 - (int)(puVar3 + 1))) >> 2) + 1;
  do {
    param_2 = param_2 + 1;
    puVar1 = puVar3 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *param_2 | *puVar1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

