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
extern int fn_822ABA88();
extern int fn_8242C6A0();
extern int fn_8243E578();
extern unsigned int lbl_82192734;
extern unsigned int lbl_82193AD8;
extern unsigned int lbl_821CC160;


void fn_8243B6E8(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar5;
  int iVar6;
  undefined8 uVar4;
  longlong lVar7;
  undefined *puVar8;
  ulonglong uVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x1d8);
  if ((*(int *)(iVar1 + 0xa0) != 0) && (*(int *)(*(int *)(iVar1 + 0xa0) + 0x40) == 1)) {
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x1d4) == -1) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d4) * 4 +
                      *(int *)(*(int *)(param_1 + 0x40) + 0x1c4));
    }
    puVar8 = &lbl_82193AD8;
    lVar7 = (ulonglong)*(uint *)(iVar5 + 0x40) + 0x120;
    dVar10 = (double)lbl_821CC160;
    if (*(int *)(*(uint *)(iVar5 + 0x40) + 0xf8) != 0) {
      dVar10 = (double)lbl_82192734;
    }
    dVar11 = (double)lbl_82192734;
    if (*(int *)(*(int *)(iVar5 + 0x40) + 0xf8) == 0) {
      dVar11 = (double)lbl_821CC160;
    }
    iVar5 = fn_8243E578(dVar10,lVar7,0);
    iVar6 = fn_8243E578(lVar7,1);
    dVar10 = extraout_f1;
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x4c) == 1)) {
      dVar10 = (double)((float)(longlong)*(int *)(iVar5 + 0x48) * *(float *)(puVar8 + 0x18));
    }
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x4c) == 1)) {
      dVar11 = (double)((float)(longlong)*(int *)(iVar6 + 0x48) * *(float *)(puVar8 + 0x18));
    }
    uVar4 = fn_822ABA88(dVar10,*(undefined4 *)
                                 ((*(int **)**(undefined4 **)(iVar1 + 8))[4] * 4 +
                                 **(int **)**(undefined4 **)(iVar1 + 8)),0);
    fn_8242C6A0(iVar1,uVar4);
    uVar2 = *(uint *)(*(int *)(param_1 + 0x40) + 0x1d8);
    uVar9 = (ulonglong)uVar2;
    piVar3 = *(int **)(**(int **)(uVar2 + 8) + 4);
    uVar4 = fn_822ABA88(dVar11,*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
    fn_8242C6A0(uVar9,uVar4);
  }
  return;
}

