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


void fn_82F69148(undefined4 *param_1,undefined4 *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = param_3 + 1;
  for (; lVar3 = lVar3 + -1, lVar3 != 0 && ((uint)param_1 & 3) != 0;
      param_1 = (undefined4 *)((int)param_1 + 1)) {
    param_3 = param_3 - 1;
    uVar1 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    *(undefined1 *)param_1 = uVar1;
  }
  uVar4 = (param_3 & 0xffffffff) >> 2;
  if (uVar4 != 0) {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar2;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    else {
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar2;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    do {
      uVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      *(undefined1 *)param_1 = uVar1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return;
  }
  return;
}

