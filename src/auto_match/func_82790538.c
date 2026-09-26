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
extern int fn_82790490();


void fn_82790538(int param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = param_4;
  if (((int)param_4 != -1) && (uVar3 = param_4 - 1, -1 < (longlong)uVar3)) {
    lVar2 = (uVar3 & 0x7fffffff) * 2 + param_3;
    do {
      uVar1 = uVar3;
      if (*(short *)lVar2 == 0) break;
      uVar3 = uVar3 - 1;
      lVar2 = lVar2 + -2;
      uVar1 = param_4;
    } while (-1 < (longlong)uVar3);
  }
  fn_82790490(param_1,param_2,param_3,uVar1);
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
  return;
}

