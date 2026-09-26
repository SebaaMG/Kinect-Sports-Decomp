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
extern int fn_82880608();
extern int fn_82880618();
extern int fn_828EA790();
extern unsigned int lbl_83213E4C;
extern unsigned int lbl_83213E50;


void fn_82888448(void)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int aiStack_20 [2];
  
  puVar4 = (undefined4 *)0x83212a4c;
  lVar5 = 0x33;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar1 = fn_82880608();
  aiStack_20[0] = **(int **)(iVar1 + 4);
  if ((int *)aiStack_20[0] != *(int **)(iVar1 + 4)) {
    do {
      iVar2 = fn_82880618(*(undefined4 *)(aiStack_20[0] + 0x10));
      puVar4 = (undefined4 *)(iVar2 + -4);
      lVar5 = 0x33;
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = 0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      fn_828EA790(aiStack_20);
    } while (aiStack_20[0] != *(int *)(iVar1 + 4));
  }
  uVar3 = (ulonglong)lbl_83213E4C;
  iVar1 = lbl_83213E50;
  if (0 < (int)lbl_83213E4C) {
    do {
      puVar4 = (undefined4 *)(iVar1 + -4);
      lVar5 = 0x33;
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = 0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar3 = uVar3 - 1;
      iVar1 = iVar1 + 0x13ec;
    } while (uVar3 != 0);
  }
  return;
}

