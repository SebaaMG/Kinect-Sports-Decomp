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
extern int fn_82694610();


int * fn_82710118(int *param_1,uint *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar5;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = param_3;
  if (param_4 == 0) {
    do {
      pcVar5 = (char *)lVar3;
      lVar3 = lVar3 + 1;
    } while (*pcVar5 != '\0');
    uVar4 = (lVar3 - param_3) - 1U & 0xffffffff;
  }
  else {
    uVar4 = (ulonglong)param_4 - param_3;
  }
  if ((int)((int)((uVar4 & 0xffffffff) >> 0x1f) - 1U & (uint)uVar4) < 1) {
    iVar2 = *(int *)(*param_2 + 8);
  }
  else {
    iVar2 = fn_82694610((ulonglong)*param_2 + 0x254,param_3);
  }
  iVar1 = *(int *)(iVar2 + 8);
  *param_1 = iVar2;
  *(int *)(iVar2 + 8) = iVar1 + 1;
  return param_1;
}

