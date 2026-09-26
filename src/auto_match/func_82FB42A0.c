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


void fn_82FB42A0(int param_1,int *param_2,int param_3)

{
  char cVar1;
  
  *(int *)(param_1 + 0x24) = *param_2;
  *(int *)(param_1 + 0x28) = param_2[1];
  *(int *)(param_1 + 0x2c) = param_2[2];
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (0 < *param_2) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - param_3;
  }
  *(int *)(param_1 + 0x20) = param_3;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  if (param_3 < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = param_3;
  }
  return;
}

