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


void fn_82A776A0(int *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  param_1[0xc] = 2;
  *param_1 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar3 = 2;
  param_1[0xb] = 0;
  param_1[1] = (int)(param_1 + 2);
  param_1[2] = 0;
  do {
    iVar1 = param_1[1] + iVar2;
    iVar2 = iVar2 + 0xc;
    *(int *)(iVar1 + 8) = *param_1;
    *param_1 = iVar1 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

