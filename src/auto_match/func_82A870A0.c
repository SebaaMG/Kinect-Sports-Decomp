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


void fn_82A870A0(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((param_3 & 0xffffffff) < 0x39) {
    if ((param_3 & 0xffffffff) < 0x38) {
      if (-1 < (int)-param_3 + 0x37) {
        lVar3 = param_3 + param_1 + -1;
        for (lVar4 = -param_3 + 0x38; lVar4 != 0; lVar4 = lVar4 + -1) {
          lVar3 = lVar3 + 1;
          *(undefined1 *)lVar3 = 0;
        }
      }
    }
  }
  else {
    param_3 = 0x38;
  }
  if (-1 < (longlong)(param_3 - 1)) {
    iVar2 = (int)param_1 - (int)param_2;
    uVar5 = param_3;
    do {
      param_2[iVar2] = *param_2;
      param_2 = param_2 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar5 = (param_3 + 3 & 0xffffffff) >> 2;
  if ((longlong)(uVar5 - 1) < 0) {
    return;
  }
  param_1 = param_1 + -4;
  do {
    uVar1 = *(uint *)((int)param_1 + 4);
    param_1 = param_1 + 4;
    *(uint *)param_1 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  return;
}

