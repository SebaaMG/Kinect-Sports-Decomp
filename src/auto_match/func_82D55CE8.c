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


void fn_82D55CE8(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 0xc);
  iVar1 = *(int *)(param_3 + 0x10) * 0xc + iVar2;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    if (*(int **)(iVar2 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar2 + 8) + 0x28))(param_1,param_2);
    }
  }
  return;
}

