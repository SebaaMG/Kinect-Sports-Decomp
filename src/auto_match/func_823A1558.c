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
extern int fn_822A0AD8();
extern int fn_822A0BC8();
extern int fn_822ABA88();
extern int fn_82399CB8();
extern unsigned int lbl_821CC160;


void fn_823A1558(int param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar4;
  ulonglong uVar3;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  
  iVar4 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x1c) = lbl_821CC160;
  if (iVar4 == 10) {
    iVar4 = *(int *)(param_1 + 8);
    uVar3 = (ulonglong)*(uint *)(*(int *)(iVar4 + 0x2e0) + 0x50);
    piVar7 = *(int **)(*(int *)(*(int *)(iVar4 + 0x2e0) + 0x4c) * 4 + **(int **)(iVar4 + 8));
LAB_823a170c:
    lVar6 = fn_822ABA88(*(undefined4 *)(piVar7[4] * 4 + *piVar7),uVar3);
    lVar6 = lVar6 + 0x30;
    uVar2 = *(undefined4 *)(iVar4 + 0xd4);
  }
  else {
    if (iVar4 == 0xb) {
      iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 0x94))();
      uVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 0x98))();
      iVar4 = *(int *)(param_1 + 8);
      piVar7 = *(int **)(**(int **)(iVar4 + 8) + iVar5 * 4);
      goto LAB_823a170c;
    }
    if (iVar4 == 0xc) {
      uVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 0x80))();
      iVar4 = *(int *)(param_1 + 8);
      piVar7 = *(int **)(*(int *)(*(int *)(iVar4 + 0x2e0) + 0xc) * 4 + **(int **)(iVar4 + 8));
      goto LAB_823a170c;
    }
    if (iVar4 != 0xf) {
      fn_822A0AD8((double)*(float *)(param_1 + 0x20),
                        *(undefined4 *)(*(int *)(param_1 + 8) + 0xd4),*(undefined4 *)(param_1 + 0xc)
                       );
      goto LAB_823a1734;
    }
    piVar7 = (int *)**(int **)(*(int *)(param_1 + 8) + 8);
    piVar1 = (int *)*piVar7;
    piVar7 = (int *)piVar7[1];
    if ((int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20) ==
        (int)*(float *)(*(int *)(piVar7[4] * 4 + *piVar7) + 0x20)) {
      iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 4))();
    }
    else {
      iVar4 = fn_82399CB8();
    }
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xd4);
    piVar7 = *(int **)(**(int **)(*(int *)(param_1 + 8) + 8) + iVar4 * 4);
    lVar6 = (ulonglong)*(uint *)(piVar7[4] * 4 + *piVar7) + 0xa8;
  }
  fn_822A0BC8((double)*(float *)(param_1 + 0x20),uVar2,*(undefined4 *)(param_1 + 0xc),param_3,
                    lVar6);
LAB_823a1734:
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

