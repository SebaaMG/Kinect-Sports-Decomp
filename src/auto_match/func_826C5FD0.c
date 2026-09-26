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


byte fn_826C5FD0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (*(int *)(iVar1 + 0x168) == iVar2) {
    return 1;
  }
  if (*(int *)(iVar1 + 0x16c) == iVar2) {
    return 2;
  }
  if (*(int *)(iVar1 + 0x170) == iVar2) {
    return 4;
  }
  if (*(int *)(iVar1 + 0x174) == iVar2) {
    return 8;
  }
  if (*(int *)(iVar1 + 0x178) == iVar2) {
    return 0x10;
  }
  if (*(int *)(iVar1 + 0x17c) == iVar2) {
    return 0x20;
  }
  return -(iVar2 == *(int *)(iVar1 + 0x180)) & 0x40;
}

