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


void fn_8241F578(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 0xc00) != 0) {
    return;
  }
  iVar1 = iVar2 + 0x1bc4;
  if (*(int *)(param_1[6] * 0x1ac + param_1[2] + 4) == 0) {
    iVar1 = iVar2 + 0x1cc0;
  }
  if (*(int *)(iVar1 + 0x48) == 0) {
    return;
  }
  if (param_1[0xc] != 0) {
    iVar2 = 0x6c;
    if (param_2 == 0) {
      iVar2 = 0x4c;
    }
    *(int *)(param_1[0xc] + 0x280) = iVar1 + iVar2;
  }
  for (piVar3 = (int *)param_1[0x22]; piVar3 != (int *)param_1[0x23]; piVar3 = piVar3 + 1) {
    iVar2 = iVar1 + 0x6c;
    if (param_2 == 0) {
      iVar2 = iVar1 + 0x4c;
    }
    *(int *)(*piVar3 + 0x4c) = iVar2;
  }
  return;
}

