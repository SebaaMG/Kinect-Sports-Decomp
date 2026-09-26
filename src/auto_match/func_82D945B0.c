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


void fn_82D945B0(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x30) - 1;
  if ((longlong)uVar2 < 0) {
    return;
  }
  lVar1 = (uVar2 & 0x3fffffff) << 2;
  do {
    if (*(int *)(*(int *)(param_1 + 0x2c) + (int)lVar1) == 0) {
      lVar3 = (ulonglong)*(uint *)(param_1 + 0x30) - 1;
      lVar4 = (ulonglong)*(uint *)(param_1 + 0x2c) + lVar1;
      *(int *)(param_1 + 0x30) = (int)lVar3;
      lVar3 = (lVar3 - uVar2 & 0x3fffffff) * 4;
      if (0 < (int)lVar3) {
        lVar3 = ((lVar3 - 1U & 0xffffffff) >> 2) + 1;
        do {
          *(undefined4 *)lVar4 = ((undefined4 *)lVar4)[1];
          lVar4 = lVar4 + 4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
    }
    uVar2 = uVar2 - 1;
    lVar1 = lVar1 + -4;
  } while (-1 < (longlong)uVar2);
  return;
}

