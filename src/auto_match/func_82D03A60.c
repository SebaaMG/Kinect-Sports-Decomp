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


void fn_82D03A60(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(uint *)(*(int *)(param_2 + 0x10) + 4) = *(uint *)(param_2 + 0x14) | 1;
  iVar1 = *(int *)(param_2 + 0xa8);
  if (iVar1 == param_2 + 0xa4) {
    *param_1 = 0;
    return;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  iVar3 = *(int *)(iVar1 + 0x14);
  param_1[1] = iVar1;
  *param_1 = uVar2;
  param_1[2] = iVar3 + -0x10;
  return;
}

