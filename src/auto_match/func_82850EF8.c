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


ulonglong fn_82850EF8(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    uVar1 = (ulonglong)**(uint **)(param_1 + 0x17c) - 1;
    if (-1 < (longlong)uVar1) {
      lVar2 = (uVar1 & 0xfffffff) << 4;
      do {
        if (*(int *)((int)lVar2 + (*(uint **)(param_1 + 0x17c))[1] + 8) != 0) {
          return uVar1;
        }
        uVar1 = uVar1 - 1;
        lVar2 = lVar2 + -0x10;
      } while (-1 < (longlong)uVar1);
    }
  }
  return 0xffffffffffffffff;
}

