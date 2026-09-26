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


void fn_82A96960(int param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 in_vs32 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  int aiStack_10 [4];
  
  piVar1 = aiStack_10;
  lVar2 = 4;
  do {
    *piVar1 = -(uint)(*(int *)((param_1 - (int)aiStack_10) + (int)piVar1) == 3);
    piVar1 = piVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  altv300_23(in_vs42,in_vs43);
  altv300_21(in_vs32,in_vs41);
  return;
}

