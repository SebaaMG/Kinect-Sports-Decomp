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


void fn_82CF69B8(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_3 & 0xfffffff8;
  if (((((int)uVar5 != 0) && ((param_3 & 7) == 0)) && ((param_1 & 7) == 0)) && ((param_2 & 7) == 0))
  {
    uVar4 = (param_3 & 0xffffffff) >> 3;
    if (7 < (param_3 & 0xffffffff)) {
      lVar3 = (uVar4 - 1 & 0x1fffffff) * 8 + param_1;
      do {
        *(undefined8 *)lVar3 =
             *(undefined8 *)(((int)param_2 - (int)param_1) + (int)(undefined8 *)lVar3);
        lVar3 = lVar3 + -8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    param_1 = uVar5 + param_1;
    param_2 = uVar5 + param_2;
    param_3 = 0;
  }
  uVar5 = param_3 & 0xfffffffc;
  if ((((int)uVar5 != 0) && ((param_3 & 3) == 0)) && (((param_1 & 3) == 0 && ((param_2 & 3) == 0))))
  {
    uVar4 = (param_3 & 0xffffffff) >> 2;
    if (3 < (param_3 & 0xffffffff)) {
      lVar3 = (uVar4 - 1 & 0x3fffffff) * 4 + param_1;
      do {
        *(undefined4 *)lVar3 =
             *(undefined4 *)((int)(undefined4 *)lVar3 + ((int)param_2 - (int)param_1));
        lVar3 = lVar3 + -4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    param_1 = uVar5 + param_1;
    param_2 = uVar5 + param_2;
    param_3 = 0;
  }
  iVar1 = (int)param_2;
  iVar2 = (int)(param_3 & 0xfffffffe);
  if (((iVar2 != 0) && ((param_3 & 1) == 0)) && (((param_1 & 1) == 0 && ((param_2 & 1) == 0)))) {
    uVar5 = (param_3 & 0xffffffff) >> 1;
    if (1 < (param_3 & 0xffffffff)) {
      lVar3 = (uVar5 - 1 & 0x7fffffff) * 2 + param_1;
      do {
        *(undefined2 *)lVar3 = *(undefined2 *)((int)(undefined2 *)lVar3 + (iVar1 - (int)param_1));
        lVar3 = lVar3 + -2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_1 = (param_3 & 0xfffffffe) + param_1;
    iVar1 = iVar2 + iVar1;
    param_3 = 0;
  }
  if ((param_3 & 0xffffffff) == 0) {
    return;
  }
  lVar3 = (param_3 - 1) + param_1;
  do {
    *(undefined1 *)lVar3 = ((undefined1 *)lVar3)[iVar1 - (int)param_1];
    lVar3 = lVar3 + -1;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}

