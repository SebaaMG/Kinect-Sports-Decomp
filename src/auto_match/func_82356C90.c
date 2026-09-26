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
extern int fn_824696D0();
extern unsigned int lbl_832765BC;


void fn_82356C90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = fn_8225F160();
  piVar3 = (int *)**(int **)(param_1 + 0x1c);
  if (*(int *)(iVar5 + 8) == 2) {
    uVar1 = *(undefined4 *)((*(int **)*piVar3)[1] + 0x20);
    uVar2 = *(undefined4 *)(**(int **)*piVar3 + 0x20);
    if (lbl_832765BC == 0) goto LAB_82356e00;
    iVar5 = 0;
    iVar6 = 0x10;
    do {
      if (*(int *)(iVar6 + *(int *)(lbl_832765BC + 0x28)) == 0) goto LAB_82356d18;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar6 < 0x18);
    iVar5 = -1;
LAB_82356d18:
    iVar6 = 0;
    iVar7 = 0x10;
    do {
      if (*(int *)(iVar7 + *(int *)(lbl_832765BC + 0x28)) == 1) goto LAB_82356dcc;
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar7 < 0x18);
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(((int *)piVar3[1])[4] * 4 + *(int *)piVar3[1]) + 0x20);
    uVar2 = *(undefined4 *)(*(int *)(((int *)*piVar3)[4] * 4 + *(int *)*piVar3) + 0x20);
    if (lbl_832765BC == 0) goto LAB_82356e00;
    iVar5 = 0;
    iVar6 = 0x10;
    do {
      if (*(int *)(iVar6 + *(int *)(lbl_832765BC + 0x28)) == 0) goto LAB_82356da4;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar6 < 0x18);
    iVar5 = -1;
LAB_82356da4:
    iVar6 = 0;
    iVar7 = 0x10;
    do {
      if (*(int *)(iVar7 + *(int *)(lbl_832765BC + 0x28)) == 1) goto LAB_82356dcc;
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar7 < 0x18);
  }
  iVar6 = -1;
LAB_82356dcc:
  iVar7 = *(int *)(lbl_832765BC + 0x3c);
  uVar4 = *(undefined4 *)(*(int *)(lbl_832765BC + 0x38) + 0x3fc);
  *(undefined4 *)(iVar5 * 0x11c + iVar7 + 0x114) = uVar2;
  *(undefined4 *)(iVar6 * 0x11c + iVar7 + 0x114) = uVar1;
  fn_824696D0((double)*(float *)(iVar7 + 0x114),(double)*(float *)(iVar7 + 0x230),uVar4);
LAB_82356e00:
  uVar1 = *(undefined4 *)(param_1 + 0x2b0);
  if (lbl_832765BC != 0) {
    iVar5 = *(int *)(lbl_832765BC + 0x38);
    *(undefined4 *)(iVar5 + 0x424) = uVar1;
    *(undefined4 *)(*(int *)(iVar5 + 0x3fc) + 0x10) = uVar1;
  }
  return;
}

