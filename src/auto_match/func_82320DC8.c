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
extern unsigned int *auStack_10;


void fn_82320DC8(int param_1,int param_2)

{
  undefined4 auStack_10 [4];
  
  auStack_10[0] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x28);
  (**(code **)(**(int **)(param_2 + 0x1b0) + 8))
            (*(int **)(param_2 + 0x1b0),(*(int *)(*(int *)(param_1 + 4) + 0x2c) == 0) + '\x19',
             auStack_10);
  return;
}

