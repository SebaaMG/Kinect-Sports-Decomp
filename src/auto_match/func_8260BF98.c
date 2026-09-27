typedef unsigned char undefined1, byte, undefined, bool;
#define true 1
#define false 0
typedef unsigned short undefined2, ushort, word;
typedef unsigned int undefined4, uint, dword, ulong;
typedef unsigned __int64 undefined8, ulonglong, qword;
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


void fn_8260BF98(ushort *param_1)

{
  ushort uVar1;

  uVar1 = param_1[2];
  while (uVar1 != 0) {
    param_1 = (ushort *)((uint)*param_1 + (int)param_1);
    uVar1 = param_1[2];
  }
  if (*(int *)(param_1 + 0x26) != 0) {
    sync(1);
    Function_8251FA58(*(int *)(param_1 + 0x26));
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  return;
}
