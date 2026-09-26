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


void fn_8277C098(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_2 + 0x14) * 4;
  iVar3 = *(int *)(param_2 + 0x18) * 4;
  iVar1 = param_1[0x33];
  if (*param_1 == 0) {
    *(int *)(iVar2 + iVar1) = *(int *)(param_2 + 0x10) + *(int *)(iVar2 + iVar1);
    iVar1 = param_1[0x33];
    uVar4 = *(int *)(iVar3 + iVar1) - *(int *)(param_2 + 0x10);
  }
  else {
    *(uint *)(iVar2 + iVar1) = *(uint *)(iVar2 + iVar1) ^ 1;
    iVar1 = param_1[0x33];
    uVar4 = *(uint *)(iVar3 + iVar1) ^ 1;
  }
  *(uint *)(iVar3 + iVar1) = uVar4;
  return;
}

