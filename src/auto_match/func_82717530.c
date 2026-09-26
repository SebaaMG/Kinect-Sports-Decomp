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


void fn_82717530(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(uint)param_1[0x2a];
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)((int)param_1 + 0x93) = 0;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      if (*(int **)(iVar1 + param_1[0x29]) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + param_1[0x29]) + 100))();
      }
      uVar2 = uVar2 - 1;
      iVar1 = iVar1 + 4;
    } while (uVar2 != 0);
  }
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  *(uint *)(iVar1 + 0xb00) = *(uint *)(iVar1 + 0xb00) | 0x400;
  return;
}

