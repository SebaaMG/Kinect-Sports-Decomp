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


void fn_82819F70(int param_1,short param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  iVar4 = param_2 * 0x40 + iVar2;
  sVar1 = *(short *)(*(short *)(param_1 + 0x82) * 0x40 + iVar2 + 0x34);
  iVar3 = *(int *)(iVar4 + 0x20);
  *(short *)(param_1 + 0x82) = *(short *)(param_1 + 0x82) + 1;
  param_3 = param_3 - iVar3;
  iVar3 = sVar1 * 0x40 + iVar2;
  *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(iVar4 + 0x2e);
  *(short *)(iVar3 + 0x2c) = param_2;
  if (*(short *)(iVar4 + 0x2e) != -1) {
    *(short *)(*(short *)(iVar4 + 0x2e) * 0x40 + iVar2 + 0x2c) = sVar1;
  }
  *(short *)(iVar4 + 0x2e) = sVar1;
  *(int *)(iVar3 + 0x20) = *(int *)(iVar4 + 0x20) + param_3;
  *(int *)(iVar3 + 0x24) = *(int *)(iVar4 + 0x24) - param_3;
  *(int *)(iVar4 + 0x24) = param_3;
  return;
}

