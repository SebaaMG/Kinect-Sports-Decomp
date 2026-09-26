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


void fn_82BA7168(int *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((int)param_2 < 0x2fd8) {
    param_2 = 0x2fd8;
  }
  iVar2 = param_1[1];
  piVar1 = (int *)(**(code **)(*param_1 + 0x5a0))(*(undefined4 *)(*param_1 + 0x5a4),param_2 + 8);
  param_1[1] = (int)piVar1;
  *piVar1 = iVar2;
  iVar3 = (int)(param_2 + 8);
  *(int *)(param_1[1] + 4) = iVar3;
  iVar2 = param_1[1] + 8;
  param_1[2] = iVar2;
  param_1[5] = iVar2;
  param_1[4] = param_1[1] + iVar3;
  return;
}

