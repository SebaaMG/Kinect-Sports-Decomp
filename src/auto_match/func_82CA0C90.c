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
extern unsigned int lbl_83232478;


void fn_82CA0C90(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = lbl_83232478;
  if (*(int *)(param_1 + 0x3a0c) != 1) {
    return;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0xd8) * (longlong)*(int *)(param_1 + 0xd0);
  iVar1 = *(int *)(param_1 + 0xf00);
  iVar7 = *(int *)(param_1 + 0xefc);
  iVar6 = *(int *)(param_1 + 0xef8);
  lVar3 = (longlong)*(int *)(param_1 + 0xd4) * (longlong)*(int *)(param_1 + 0xcc);
  iVar5 = 0;
  if (0 < (int)lVar3) {
    do {
      *(undefined1 *)(iVar5 + iVar6) =
           *(undefined1 *)((*(byte *)(iVar5 + iVar6) - 0x40) * 2 + iVar2);
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  iVar6 = 0;
  lVar3 = lVar4;
  if (0 < (int)lVar4) {
    do {
      *(undefined1 *)(iVar6 + iVar7) =
           *(undefined1 *)((*(byte *)(iVar6 + iVar7) - 0x40) * 2 + iVar2);
      iVar6 = iVar6 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  iVar7 = 0;
  if (0 < (int)lVar4) {
    do {
      *(undefined1 *)(iVar7 + iVar1) =
           *(undefined1 *)((*(byte *)(iVar7 + iVar1) - 0x40) * 2 + iVar2);
      iVar7 = iVar7 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return;
  }
  return;
}

