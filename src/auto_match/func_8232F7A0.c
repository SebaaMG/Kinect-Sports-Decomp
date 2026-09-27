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


void fn_8232F7A0(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x7b4) = 0;
  *(undefined4 *)(iVar1 + 0x7b8) = 0;
  return;
}
