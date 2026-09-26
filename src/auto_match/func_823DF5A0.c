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
extern int fn_823D3C28();
extern unsigned int lbl_82191F44;
extern unsigned int lbl_821CC160;


void fn_823DF5A0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(char *)(*(int *)(param_1 + 8) + 0xe00) == '\0') {
    iVar5 = 0xe14;
    lVar6 = 3;
    do {
      piVar1 = (int *)(iVar5 + *(int *)(param_1 + 8));
      iVar5 = iVar5 + 4;
      *(undefined4 *)(*piVar1 + 0x1d0) = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(undefined1 *)(*(int *)(param_1 + 8) + 0xe00) = 1;
    fn_823CC298(*(undefined4 *)(*(int *)(param_1 + 8) + 0x4b8),7);
  }
  else {
    cVar4 = fn_823D3C28(*(undefined4 *)(*(int *)(param_1 + 8) + 0xe20));
    uVar3 = lbl_82191F44;
    if (cVar4 != '\0') {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xe20);
      iVar5 = *piVar1;
      *(undefined4 *)(iVar5 + 0x1334) = lbl_821CC160;
      *(undefined4 *)(iVar5 + 0x1330) = uVar3;
      iVar2 = *piVar1;
      iVar5 = piVar1[0x26];
      *(float *)((*(int *)(iVar2 + 0x1684) + 0x5a2) * 4 + iVar2) = (float)(longlong)piVar1[0x25];
      *(int *)((*(int *)(iVar2 + 0x1684) + 0x5a6) * 4 + iVar2) = iVar5;
      *(int *)(iVar2 + 0x1684) = *(int *)(iVar2 + 0x1684) + 1;
      *(undefined4 *)(*(int *)(param_1 + 8) + 0xe0c) = 2;
    }
  }
  return;
}

