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


void fn_82C17FD0(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar3;
  
  iVar1 = (int)param_2;
  *(int *)(param_1 + 0x148) = iVar1;
  *(int *)(param_1 + 0x14c) = (int)param_3;
  uVar2 = param_2;
  uVar4 = param_3;
  if (0 < iVar1) {
    do {
      uVar3 = uVar2;
      if ((int)uVar2 < (int)uVar4) {
        uVar3 = uVar4;
        uVar4 = uVar2;
      }
      uVar2 = uVar3 - uVar4;
    } while (0 < (longlong)uVar2);
  }
  iVar5 = (int)uVar4;
  if (iVar5 == 0) {
    return;
  }
  *(int *)(param_1 + 0x148) = iVar1 / iVar5;
  trapWord(6,uVar4,0);
  *(int *)(param_1 + 0x14c) = (int)param_3 / iVar5;
  trapWord(6,uVar4,0);
  trapWord(5,uVar4 & ~(((param_2 & 0x7fffffff) << 1 | (param_2 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar4 & ~(((param_3 & 0x7fffffff) << 1 | (param_3 & 0xffffffff) >> 0x1f) - 1),0xffff);
  return;
}

