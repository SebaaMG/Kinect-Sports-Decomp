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


void fn_823F90A0(int param_1,undefined8 param_2,longlong param_3)

{
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))
            (*(int **)(param_1 + 0x2c),param_2,(ulonglong)*(uint *)(param_1 + 8) + param_3);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x10))
            (*(int **)(param_1 + 0x34),param_2,(ulonglong)*(uint *)(param_1 + 0xc) + param_3);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))
            (*(int **)(param_1 + 0x3c),param_2,(ulonglong)*(uint *)(param_1 + 0x10) + param_3);
  (**(code **)(**(int **)(param_1 + 0x44) + 0x10))
            (*(int **)(param_1 + 0x44),param_2,(ulonglong)*(uint *)(param_1 + 0x14) + param_3);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x10))
            (*(int **)(param_1 + 0x4c),param_2,(ulonglong)*(uint *)(param_1 + 0x18) + param_3);
  (**(code **)(**(int **)(param_1 + 0x54) + 0x10))
            (*(int **)(param_1 + 0x54),param_2,(ulonglong)*(uint *)(param_1 + 0x1c) + param_3);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x10))
            (*(int **)(param_1 + 0x5c),param_2,(ulonglong)*(uint *)(param_1 + 0x20) + param_3);
  (**(code **)(**(int **)(param_1 + 100) + 0x10))
            (*(int **)(param_1 + 100),param_2,(ulonglong)*(uint *)(param_1 + 0x24) + param_3);
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))
            (*(int **)(param_1 + 0x6c),param_2,(ulonglong)*(uint *)(param_1 + 0x28) + param_3);
  return;
}

