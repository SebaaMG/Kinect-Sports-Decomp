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


void fn_82A6E4F0(int param_1,int param_2)

{
  int iVar1;
  
  if (2 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x34) = 0x1f;
    *(undefined4 *)(param_1 + 0x38) = 0x7fffffff;
    return;
  }
  if ((param_2 < 5) || (param_2 < 0xf)) {
    iVar1 = 0xd;
  }
  else if (param_2 < 0x20) {
    iVar1 = 0xc;
  }
  else if (param_2 < 0x28) {
    iVar1 = 0xb;
  }
  else if (param_2 < 0x2d) {
    iVar1 = 10;
  }
  else {
    iVar1 = 9;
  }
  *(int *)(param_1 + 0x34) = iVar1;
  *(int *)(param_1 + 0x38) = (1 << iVar1) + -1;
  return;
}

