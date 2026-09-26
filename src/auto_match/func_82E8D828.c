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


void fn_82E8D828(undefined8 param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_4 == (int *)0x0) {
    iVar5 = 0;
    iVar4 = 0;
  }
  else {
    iVar5 = *param_4;
    iVar4 = param_4[1];
  }
  *param_2 = *(int *)(param_3 + 4) * iVar4 + iVar5;
  uVar2 = *(int *)(param_3 + 4) * iVar4;
  uVar3 = *(int *)(param_3 + 4) * *(int *)(param_3 + 8);
  uVar1 = (int)uVar3 >> 0x1f;
  uVar2 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) + iVar5;
  param_2[1] = ((uVar3 ^ uVar1) - uVar1) +
               ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  uVar3 = *(int *)(param_3 + 4) * *(int *)(param_3 + 8);
  uVar1 = (int)uVar3 >> 0x1f;
  uVar2 = *(int *)(param_3 + 4) * iVar4;
  uVar1 = ((uVar3 ^ uVar1) - uVar1) * 5;
  uVar2 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) + iVar5;
  param_2[2] = ((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0) +
               ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  return;
}

