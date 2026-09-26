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
extern int fn_82F68CC0();


void fn_82F04030(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,ulonglong param_7,uint param_8)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = param_7 & 0x7fffffff;
  lVar5 = uVar2 * 2;
  param_1 = param_1 + (param_7 & 0x1fffffff) * -8;
  param_4 = param_4 + (param_7 & 0x1fffffff) * -8;
  param_5 = param_5 + uVar2 * -2;
  param_6 = param_6 + uVar2 * -2;
  if (0 < (int)param_8) {
    lVar3 = (((ulonglong)param_8 - 1 & 0xffffffff) >> 1) + 1;
    do {
      fn_82F68CC0(param_1,param_4,param_7);
      lVar3 = lVar3 + -1;
      param_1 = lVar5 + param_1;
      param_4 = lVar5 + param_4;
    } while (lVar3 != 0);
  }
  lVar3 = (longlong)((int)param_8 >> 1);
  iVar1 = (int)param_7 >> 1;
  lVar5 = (longlong)((int)lVar5 >> 1);
  if (0 < lVar3) {
    lVar4 = (param_2 + uVar2 * -2) - param_5;
    lVar6 = ((lVar3 - 1U & 0xffffffff) >> 1) + 1;
    do {
      fn_82F68CC0(lVar4 + param_5,param_5,iVar1);
      lVar6 = lVar6 + -1;
      param_5 = lVar5 + param_5;
    } while (lVar6 != 0);
  }
  if (0 < (int)param_8 >> 1) {
    lVar4 = (param_3 + uVar2 * -2) - param_6;
    lVar3 = ((lVar3 - 1U & 0xffffffff) >> 1) + 1;
    do {
      fn_82F68CC0(lVar4 + param_6,param_6,iVar1);
      lVar3 = lVar3 + -1;
      param_6 = lVar5 + param_6;
    } while (lVar3 != 0);
  }
  return;
}

