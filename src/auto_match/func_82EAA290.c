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


void fn_82EAA290(int param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(param_1 + 0x1be0))(param_2,param_3);
  iVar2 = (**(code **)(param_1 + 0x1be0))(param_2 + 8,param_3);
  param_2 = (param_3 & 0x1fffffff) * 8 + param_2;
  iVar3 = (**(code **)(param_1 + 0x1be0))(param_2,param_3);
  iVar4 = (**(code **)(param_1 + 0x1be0))(param_2 + 8,param_3);
  *param_4 = iVar4 + iVar3 + iVar2 + iVar1;
  return;
}

