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


void fn_82A3B768(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = 0;
  iVar3 = param_1 + 0x2530;
  lVar4 = 0x100;
  do {
    if (*(char *)(iVar3 + uVar2) == '\0') {
      *(undefined1 *)(iVar3 + uVar2) = 0xb;
    }
    uVar2 = uVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  for (; uVar2 < (uint)((*(int *)(param_1 + 0x868) + 0x20) * 8); uVar2 = uVar2 + 1) {
    if (*(char *)(iVar3 + uVar2) == '\0') {
      *(undefined1 *)(iVar3 + uVar2) = 0xc;
    }
  }
  iVar3 = 0;
  lVar4 = 0xf9;
  do {
    if (*(char *)(param_1 + 0x27ed + iVar3) == '\0') {
      *(undefined1 *)(param_1 + 0x27ed + iVar3) = 8;
    }
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar2 = *(byte *)(param_1 + 0x554) + 0x12;
  if (uVar2 < *(uint *)(param_1 + 0x868)) {
    puVar1 = (undefined1 *)((*(byte *)(param_1 + 0x554) + 0x4d7) * 8 + param_1);
    do {
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 8;
      *puVar1 = 100;
    } while (uVar2 < *(uint *)(param_1 + 0x868));
    return;
  }
  return;
}

