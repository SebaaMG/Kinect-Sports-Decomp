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
extern int fn_823CC298();
extern int fn_823D4E88();
extern unsigned int lbl_82191F44;
extern unsigned int lbl_821CC160;


void fn_823DEAE8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int *piVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(char *)(iVar1 + 0xe00) == '\0') {
    piVar6 = (int *)(iVar1 + 0xe10);
    lVar7 = 3;
    do {
      piVar6 = piVar6 + 1;
      *(undefined4 *)(*piVar6 + 0x1d0) = 0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(undefined1 *)(iVar1 + 0xe00) = 1;
    fn_823CC298(*(undefined4 *)(iVar1 + 0x4b8),7);
  }
  else {
    cVar5 = fn_823D4E88(*(undefined4 *)(iVar1 + 0xe20));
    uVar4 = lbl_82191F44;
    if (cVar5 != '\0') {
      piVar6 = *(int **)(iVar1 + 0xe20);
      iVar2 = *piVar6;
      *(undefined4 *)(iVar2 + 0x1334) = lbl_821CC160;
      *(undefined4 *)(iVar2 + 0x1330) = uVar4;
      iVar3 = *piVar6;
      iVar2 = piVar6[0x26];
      *(float *)((*(int *)(iVar3 + 0x1684) + 0x5a2) * 4 + iVar3) = (float)(longlong)piVar6[0x25];
      *(int *)((*(int *)(iVar3 + 0x1684) + 0x5a6) * 4 + iVar3) = iVar2;
      *(int *)(iVar3 + 0x1684) = *(int *)(iVar3 + 0x1684) + 1;
      *(undefined4 *)(iVar1 + 0xe0c) = 2;
    }
  }
  return;
}

