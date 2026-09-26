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


void fn_82CBC3B8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0xd40);
  uVar1 = *(uint *)(param_1 + 0xd4);
  if (iVar3 == 1) {
    *(uint *)(param_1 + 0x3bb8) = uVar1;
    return;
  }
  uVar2 = ((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0);
  if (iVar3 == 2) {
    uVar2 = uVar2 + 1;
    *(uint *)(param_1 + 0x3bbc) = uVar1;
    *(uint *)(param_1 + 0x3bb8) =
         (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0)) * 4;
    return;
  }
  if (iVar3 != 4) {
    return;
  }
  iVar4 = ((int)uVar2 >> 2) + (uint)((int)uVar2 < 0 && (uVar2 & 3) != 0);
  *(int *)(param_1 + 0x3bc0) = iVar4;
  *(int *)(param_1 + 0x3bbc) = iVar4;
  iVar3 = uVar2 + iVar4 * -4;
  *(int *)(param_1 + 0x3bb8) = iVar4;
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      *(int *)(param_1 + 0x3bbc) = iVar4 + 1;
    }
    else {
      if (iVar3 != 3) goto LAB_82cbc45c;
      *(int *)(param_1 + 0x3bbc) = iVar4 + 1;
      *(int *)(param_1 + 0x3bc0) = iVar4 + 1;
    }
  }
  *(int *)(param_1 + 0x3bb8) = iVar4 + 1;
LAB_82cbc45c:
  iVar3 = *(int *)(param_1 + 0x3bb8) * 4;
  *(int *)(param_1 + 0x3bb8) = iVar3;
  iVar3 = *(int *)(param_1 + 0x3bbc) * 4 + iVar3;
  *(int *)(param_1 + 0x3bbc) = iVar3;
  *(int *)(param_1 + 0x3bc0) = *(int *)(param_1 + 0x3bc0) * 4 + iVar3;
  return;
}

