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


void fn_82C41C38(undefined8 param_1,int param_2,int *param_3,int param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = (longlong)((int)param_5 >> 1) + (ulonglong)((int)param_5 < 0 && (param_5 & 1) != 0);
  if ((int)lVar3 < 1) {
    return;
  }
  piVar2 = (int *)(param_4 + -4);
  piVar1 = (int *)(param_5 * 4 + param_4);
  param_2 = param_2 - (int)param_3;
  do {
    param_3 = param_3 + 1;
    piVar2 = piVar2 + 1;
    *piVar2 = -((*(int *)(param_2 + (int)param_3) >> 1) + (*param_3 >> 1));
    piVar1 = piVar1 + -1;
    *piVar1 = (*param_3 >> 1) - (*(int *)(param_2 + (int)param_3) >> 1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

