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
extern int fn_8225F160();
extern unsigned int lbl_832765BC;


void fn_82356E38(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (lbl_832765BC == 0) {
    return;
  }
  iVar1 = fn_8225F160();
  if (*(int *)(iVar1 + 8) == 2) {
    if (lbl_832765BC == 0) goto LAB_82356f74;
    iVar2 = *(int *)(lbl_832765BC + 0x28);
    iVar3 = 0;
    iVar1 = 0x10;
    do {
      if (*(int *)(iVar1 + iVar2) == *(int *)(param_1 + 0x34c)) goto LAB_82356eac;
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar1 < 0x18);
LAB_82356ea8:
    iVar3 = -1;
LAB_82356eac:
    iVar1 = lbl_832765BC;
    *(int *)(lbl_832765BC + 0x68) = iVar3;
    if (*(int *)(iVar2 + 4) == 0) {
      *(int *)(*(int *)(iVar1 + 200) + 0x50c) = iVar3;
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 200) + 0x50c) = 2;
    }
    if (iVar1 == 0) goto LAB_82356f74;
    if (*(int *)(*(int *)(iVar1 + 0x28) + 4) == 0) {
      if (*(int *)(iVar1 + 0x68) == 0) {
        uVar6 = 1;
        uVar5 = 2;
      }
      else {
        uVar6 = 2;
        uVar5 = 3;
      }
      *(undefined4 *)(param_1 + 0x2a8) = 0;
      goto LAB_82356f80;
    }
    uVar6 = 3;
    *(undefined4 *)(param_1 + 0x2a8) = 1;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 100))();
    if (lbl_832765BC != 0) {
      iVar2 = *(int *)(lbl_832765BC + 0x28);
      iVar3 = 0;
      iVar4 = 0x10;
      do {
        if (*(int *)(iVar4 + iVar2) == iVar1) goto LAB_82356eac;
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
      } while (iVar4 < 0x18);
      goto LAB_82356ea8;
    }
LAB_82356f74:
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
  }
  uVar5 = 0;
LAB_82356f80:
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd0) = uVar6;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd8) = uVar5;
  return;
}

