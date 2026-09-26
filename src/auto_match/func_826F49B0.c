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


void fn_826F49B0(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 700);
  *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
  if (*(int *)(param_1 + 0x2d4) == 0) {
    *(int *)(param_1 + 0x2d4) = param_2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  sync(1);
  if (*(int *)(iVar1 + 0x90) == 0) {
    sync(1);
    *(int *)(iVar1 + 0x90) = param_2;
  }
  else {
    sync(1);
    *(int *)(*(int *)(iVar1 + 0x94) + 0x18) = param_2;
  }
  *(int *)(iVar1 + 0x94) = param_2;
  *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + 1;
  return;
}

