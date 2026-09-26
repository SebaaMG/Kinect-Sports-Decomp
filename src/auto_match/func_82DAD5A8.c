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


void fn_82DAD5A8(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = (ulonglong)param_1[1] - 1;
  if ((longlong)uVar3 < 0) {
    return;
  }
  lVar2 = (uVar3 & 0x3fffffff) << 2;
  do {
    lVar5 = lVar2 + (ulonglong)*param_1;
    if (*(int *)lVar5 == 0) {
      uVar1 = param_1[1];
      param_1[1] = (uint)((ulonglong)uVar1 - 1);
      lVar4 = (((ulonglong)uVar1 - 1) - uVar3 & 0x3fffffff) * 4;
      if (0 < (int)lVar4) {
        lVar4 = ((lVar4 - 1U & 0xffffffff) >> 2) + 1;
        do {
          *(undefined4 *)lVar5 = ((undefined4 *)lVar5)[1];
          lVar5 = lVar5 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    uVar3 = uVar3 - 1;
    lVar2 = lVar2 + -4;
  } while (-1 < (longlong)uVar3);
  return;
}

