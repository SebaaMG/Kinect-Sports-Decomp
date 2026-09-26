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
extern int iRam83219d60;


void fn_82A4F4E0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + -8);
  param_1 = param_1 - *(int *)(param_1 + -4);
  iVar4 = *(int *)(*(int *)(param_1 + -8) + 4) + -8;
  RtlEnterCriticalSection(0xffffffff83219da4);
  piVar2 = *(int **)(param_1 + -8);
  trapWord(6,(ulonglong)(uint)piVar2[1],0);
  piVar2[2] = 1 << ((uint)((param_1 + -8) - *piVar2) / (uint)piVar2[1] & 0x3f) ^ piVar2[2];
  RtlLeaveCriticalSection(0xffffffff83219da4);
  iVar3 = (uVar1 & 0x1fff) * 4;
  iRam83219d60 = iRam83219d60 - iVar4;
  *(int *)(iVar3 + -0x7cde629c) = *(int *)(iVar3 + -0x7cde629c) - iVar4;
  return;
}

