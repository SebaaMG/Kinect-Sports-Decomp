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
extern int fn_822315A0();
extern int fn_8229F618();
extern int fn_822B7340();
extern int fn_822C72E0();
extern int fn_822E2E30();
extern int fn_82372DE8();
extern int fn_82372ED8();
extern int fn_823807F0();
extern int fn_824C97F0();
extern int fn_824D2AE8();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_821CC160;


void fn_822E1C38(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  double dVar9;
  int iStack_40;
  int iStack_3c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x118);
  *(undefined1 *)(iVar1 + 0x1d4) = 0;
  *(undefined1 *)(iVar1 + 0x254) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x270) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar6 = fn_82372ED8(iVar1);
  if (iVar6 == 0) {
    iVar6 = fn_82372DE8(iVar1,0);
    if ((iVar6 == 0) && (iVar6 = fn_82372DE8(iVar1,1), iVar6 == 0)) {
      uVar7 = 2;
    }
    else {
      uVar7 = 4;
    }
  }
  else {
    uVar7 = 3;
  }
  fn_823807F0(*(undefined4 *)(iVar1 + 0x664),uVar7);
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x10) + 0xa8);
  piVar3 = (int *)puVar2[1];
  for (piVar8 = (int *)*puVar2; piVar8 != piVar3; piVar8 = piVar8 + 2) {
    fn_824C97F0(*(undefined4 *)(*piVar8 + 0x28),0xffffffff821add8c);
  }
  fn_824D2AE8(&iStack_40,param_1 + 0x58);
  fVar5 = lbl_821CC160;
  dVar9 = (double)lbl_821CC160;
  if (iStack_40 != 0) {
    *(float *)(iStack_40 + 0xe0) = lbl_821CC160;
    *(float *)(iStack_40 + 0xe4) = fVar5;
    *(undefined4 *)(iStack_40 + 0xd4) = 1;
    fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x114) + 0x20),
                      0xffffffff821ad2f4);
  }
  fn_822E2E30(param_1 + 0x58);
  if ((*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x1c0) + 0x204) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x14) + 0x78) != 0)) {
    fn_822B7340();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  *(float *)(param_1 + 0x3c) = (float)dVar9;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  if (*(int *)(param_1 + 0x60) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 200))();
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*(int *)(iVar1 + 0x204) == 0) &&
     (*(undefined4 *)(iVar1 + 0x344) = 0,
     *(int *)(*(int *)(*(int *)(iVar1 + 0xd4) + 0xc) + 0x58) != 0)) {
    fn_8229F618();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

