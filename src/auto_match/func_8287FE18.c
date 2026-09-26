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


void fn_8287FE18(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    if (*param_1 != 0) {
      *(int *)(*param_1 + 0x34) = param_2;
    }
    *(int *)(param_2 + 0x30) = *param_1;
    *param_1 = param_2;
  }
  else {
    if (*(int *)(iVar1 + 0x30) != 0) {
      *(int *)(*(int *)(iVar1 + 0x30) + 0x34) = param_2;
    }
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(int *)(iVar1 + 0x30) = param_2;
  }
  *(int *)(param_2 + 0x34) = iVar1;
  if (param_1[1] == iVar1) {
    param_1[1] = param_2;
  }
  param_1[2] = param_1[2] + 1;
  *(int **)(param_2 + 0x2c) = param_1;
  return;
}

