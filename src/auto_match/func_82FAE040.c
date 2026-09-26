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


void fn_82FAE040(int *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (longlong)(param_1[0x20] - param_1[0x1f] >> 3) - 1;
  if (-1 < (longlong)uVar2) {
    lVar1 = (uVar2 & 0x1fffffff) << 3;
    do {
      (**(code **)(**(int **)((int)lVar1 + param_1[0x1f] + 4) + 8))();
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + -8;
    } while (-1 < (longlong)uVar2);
  }
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

