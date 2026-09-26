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
extern int fn_8229F618();
extern int fn_822ABA88();
extern int fn_822CFA38();
extern int fn_822E2BE8();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_822E28C0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar6 = (ulonglong)uVar1;
  if (*(int *)(uVar1 + 0x2ec) != 0) {
    piVar2 = *(int **)(**(int **)(*(int *)(param_1 + 0x10) + 8) + *(int *)(uVar1 + 0x2c) * -4 + 4);
    uVar4 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),*(undefined4 *)(param_1 + 0x44));
    iVar5 = fn_822CFA38(uVar6,1);
    dVar9 = (double)lbl_821CC160;
    dVar7 = (double)lbl_821CA460;
    dVar8 = dVar9;
    if (iVar5 != 0) {
      dVar8 = dVar7;
    }
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fn_822E2BE8((double)(float)((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff |
                                                                     0x3f800000) - dVar7) *
                                      (double)lbl_821916FC - dVar7),dVar8,param_1,uVar4,
                      *(undefined4 *)(param_1 + 0x30));
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    *(float *)(param_1 + 0x3c) = (float)dVar9;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = uVar3;
    if (*(int *)(param_1 + 0x60) != 0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 200))();
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    iVar5 = *(int *)(param_1 + 0x10);
    if ((*(int *)(iVar5 + 0x204) == 0) &&
       (*(undefined4 *)(iVar5 + 0x344) = 0,
       *(int *)(*(int *)(*(int *)(iVar5 + 0xd4) + 0xc) + 0x58) != 0)) {
      fn_8229F618();
    }
  }
  return;
}

