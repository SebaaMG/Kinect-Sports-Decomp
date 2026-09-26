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


void fn_826A1FC8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = 0;
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x38) - 1;
  if ((longlong)uVar4 < 1) {
    return;
  }
  iVar6 = 0;
  lVar5 = (uVar4 & 0x3fffffff) << 2;
  do {
    iVar1 = *(int *)(param_1 + 0x34);
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 - 1;
    uVar2 = *(undefined4 *)(iVar6 + iVar1);
    *(undefined4 *)(iVar6 + iVar1) = *(undefined4 *)((int)lVar5 + iVar1);
    iVar6 = iVar6 + 4;
    *(undefined4 *)((int)lVar5 + iVar1) = uVar2;
    lVar5 = lVar5 + -4;
  } while (iVar3 < (int)uVar4);
  return;
}

