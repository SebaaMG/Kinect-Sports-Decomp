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


void fn_82D51EA8(int param_1,ulonglong param_2,undefined2 param_3)

{
  *(undefined2 *)
   ((int)((((longlong)(*(int *)(*(int *)(param_1 + 0x18) + 0x10) + -1) *
            (longlong)(int)(uint)(ushort)(param_2 >> 0x10) + ((param_2 & 0xffffffff) >> 1 & 0x7fff)
           & 0x7fffffff) << 1 | param_2 & 1) << 1) + *(int *)(param_1 + 0x24)) = param_3;
  return;
}

