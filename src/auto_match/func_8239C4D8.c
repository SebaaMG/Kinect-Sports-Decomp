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
extern unsigned int *auStack_38;
extern int fn_8229F5A8();
extern int fn_8229F618();
extern int fn_8229F688();
extern int fn_8229F758();
extern int fn_8229F858();
extern int fn_8229FAB8();
extern int fn_8229FF28();
extern int fn_822A02D8();
extern int fn_82396230();
extern int fn_82F64988();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_821CC160;


void fn_8239C4D8(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iStack_40;
  int iStack_3c;
  ulonglong auStack_38;
  
  iVar2 = *(int *)(param_1 + 0xd4);
  uVar3 = *(uint *)(param_1 + 0x54);
  bVar1 = true;
  if (((uVar3 < 4) || (uVar3 == 7)) || (uVar3 == 0x10)) {
    bVar1 = false;
  }
  if (((*(int *)(*(int *)(iVar2 + 0x14) + 0x14) != 0) ||
      (*(int *)(*(int *)(iVar2 + 0x18) + 0xc) != 0)) || (bVar6 = true, !bVar1)) {
    bVar6 = false;
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    piVar4 = *(int **)(*(int *)(param_1 + 0xcc) * 4 + **(int **)(param_1 + 8));
    iVar10 = (int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
    auStack_38 = (ulonglong)iVar10;
    if (*(int *)(iVar2 + 0x48) != iVar10) {
      *(int *)(iVar2 + 0x48) = iVar10;
      fn_8229FF28(*(undefined4 *)(iVar2 + 0xc));
    }
  }
  else {
    if (*(int *)(param_1 + 0x178) == 2) {
      piVar4 = *(int **)(param_1 + 0x2e0);
      piVar5 = *(int **)(*(int *)(param_1 + 0xcc) * 4 + **(int **)(param_1 + 8));
      iVar10 = (int)*(float *)(*(int *)(piVar5[4] * 4 + *piVar5) + 0x20);
      auStack_38 = (ulonglong)iVar10;
      if (*(int *)(iVar2 + 0x48) != iVar10) {
        *(int *)(iVar2 + 0x48) = iVar10;
        fn_8229FF28(*(undefined4 *)(iVar2 + 0xc));
      }
      bVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 0x58) != 0;
      if (bVar6) {
        if (!bVar1) {
          fn_8229F5A8();
        }
      }
      else if (bVar1) {
        fn_8229F618();
      }
      iVar2 = *(int *)(param_1 + 0xd4);
      iStack_40 = 0;
      iStack_3c = 0;
      auStack_38 = auStack_38 & 0xffffffff;
      uVar7 = (**(code **)(*piVar4 + 0xa0))(piVar4);
      fn_822A02D8(uVar7,&iStack_40,&iStack_3c,&auStack_38);
      iVar8 = iStack_3c;
      iVar10 = iStack_40;
      lVar9 = (longlong)((uint)((ulonglong)(auStack_38) >> 32));
      auStack_38 = (ulonglong)(iStack_40 * 0x3c + iStack_3c);
      fn_8229F758((double)lbl_821CC160,(double)(longlong)auStack_38,(double)lVar9,
                        *(undefined4 *)(iVar2 + 0xc));
      if ((9 < iVar8) || (uVar7 = 1, iVar10 != 0)) {
        uVar7 = 0;
      }
      fn_8229F858(*(undefined4 *)(iVar2 + 0xc),uVar7);
      goto LAB_8239c784;
    }
    piVar4 = (int *)**(int **)(param_1 + 8);
    piVar5 = (int *)*piVar4;
    iVar10 = (int)*(float *)(*(int *)(piVar5[4] * 4 + *piVar5) + 0x20);
    if (0x62 < iVar10) {
      iVar10 = 99;
    }
    piVar4 = (int *)piVar4[1];
    iVar8 = (int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
    auStack_38 = (ulonglong)iVar8;
    if (0x62 < iVar8) {
      iVar8 = 99;
    }
    if ((*(int *)(iVar2 + 0x48) != iVar10) || (*(int *)(iVar2 + 0x4c) != iVar8)) {
      *(int *)(iVar2 + 0x48) = iVar10;
      *(int *)(iVar2 + 0x4c) = iVar8;
      fn_8229FAB8(*(undefined4 *)(iVar2 + 0xc),iVar10);
    }
  }
  bVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 0x58) != 0;
  if (bVar6) {
    if (!bVar1) {
      fn_8229F5A8();
    }
  }
  else if (bVar1) {
    fn_8229F618();
  }
LAB_8239c784:
  piVar4 = *(int **)(param_1 + 0x2e0);
  if ((piVar4 != (int *)0x0) && (*(int *)(param_1 + 0x178) != 2)) {
    iVar2 = *(int *)(param_1 + 0xd4);
    uVar7 = (**(code **)(*piVar4 + 0x88))(piVar4,param_1);
    iVar10 = iVar2 + 0x50;
    fn_82F64988(iVar10,0x40,uVar7);
    fn_8229F688(*(undefined4 *)(iVar2 + 0xc),iVar10,0);
  }
  *(undefined4 *)(param_1 + 0x240) = 1;
  fn_82396230(param_1);
  return;
}

