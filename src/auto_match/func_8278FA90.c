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


void fn_8278FA90(int param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = *(int *)(param_1 + 0x24) + 1U & 7;
  iVar1 = uVar2 * 4;
  *(uint *)(param_1 + 0x24) = uVar2;
  uVar3 = (ulonglong)*(uint *)(iVar1 + param_1) * 0x2ab5245e + (ulonglong)*(uint *)(param_1 + 0x20);
  iVar6 = (int)(uVar3 >> 0x20);
  *(int *)(param_1 + 0x20) = iVar6;
  uVar4 = (uVar3 & 0xffffffff) + (uVar3 >> 0x20);
  iVar5 = (int)uVar4;
  if ((uVar4 & 0xffffffff) < uVar3 >> 0x20) {
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 0x20) = iVar6 + 1;
  }
  *(int *)(iVar1 + param_1) = -2 - iVar5;
  return;
}

