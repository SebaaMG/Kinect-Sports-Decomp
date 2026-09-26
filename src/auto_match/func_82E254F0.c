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
extern int fn_82E24438();
extern int fn_82E24AA8();
extern int fn_82E25140();


void fn_82E254F0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_82E24AA8(param_1,0,0);
  if ((((-1 < iVar1) &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x10c) + 0x24))
                          (*(int **)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x108)), -1 < iVar1)
       ) && (iVar1 = (**(code **)(**(int **)(param_1 + 0x100) + 0x34))
                               (*(int **)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x108)),
            -1 < iVar1)) &&
     ((iVar1 = fn_82E25140(param_1), -1 < iVar1 && (iVar1 = fn_82E24438(param_1), -1 < iVar1))))
  {
    (**(code **)(**(int **)(param_1 + 0x104) + 0x40))();
  }
  return;
}

