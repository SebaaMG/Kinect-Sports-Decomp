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


void fn_8305BBB8(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  if (3 < (int)param_3) {
    lVar5 = ((param_3 - 4U & 0xffffffff) >> 2) + 1;
    lVar3 = (param_5 & 0x3fffffff) * 4 + param_4 + -4;
    lVar4 = param_2 + -8;
    uVar6 = lVar5 * 4 & 0xfffffffc;
    do {
      iVar1 = (int)lVar4;
      iVar2 = (int)lVar3;
      *(float *)(iVar2 + 4) = (float)*(double *)(iVar1 + 8);
      *(float *)(iVar2 + 8) = (float)*(double *)(iVar1 + 0x10);
      *(float *)(iVar2 + 0xc) = (float)*(double *)(iVar1 + 0x18);
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + 0x10;
      *(float *)lVar3 = (float)*(double *)lVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if ((int)param_3 <= (int)uVar6) {
    return;
  }
  param_3 = param_3 - uVar6;
  lVar4 = (uVar6 & 0x1fffffff) * 8 + param_2 + -8;
  lVar3 = (uVar6 + param_5 & 0x3fffffff) * 4 + param_4 + -4;
  do {
    lVar4 = lVar4 + 8;
    lVar3 = lVar3 + 4;
    *(float *)lVar3 = (float)*(double *)lVar4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

