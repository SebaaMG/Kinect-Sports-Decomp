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


uint fn_82CE5250(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 4))(param_1,param_2 + param_3 + 0x10);
  uVar2 = iVar1 + param_3 + 0xfU & ~(param_3 - 1U);
  *(int **)(uVar2 - 0x10) = param_1;
  *(int *)(uVar2 - 0xc) = param_2 + param_3;
  *(uint *)(uVar2 - 8) = uVar2 - iVar1;
  return uVar2;
}

