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


void fn_82643CE0(int param_1)

{
  int iVar1;
  
  iVar1 = KeGetCurrentProcessType();
  if (iVar1 == 2) {
    *(int *)(param_1 + 0x30) = param_1 + 0x4230;
    *(int *)(param_1 + 0x34) = param_1 + 0x54f0;
    *(int *)(param_1 + 0x38) = param_1 + 0x5450;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4230);
    *(int *)(param_1 + 0x34) = iVar1 + 0x12c0;
    *(int *)(param_1 + 0x30) = iVar1;
    *(int *)(param_1 + 0x38) = iVar1 + 0x1220;
  }
  *(byte *)(param_1 + 0x2abd) = *(byte *)(param_1 + 0x2abd) | 0x20;
  return;
}

