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
extern unsigned int *auStack_90;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_822BCAB0();
extern int fn_8241F838();
extern int fn_8241F978();
extern int fn_824D2888();
extern int fn_82809400();
extern int fn_82A1EFC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


void fn_8241A418(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_r0;
  int *piVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [144];
  
  piVar4 = (int *)fn_82F6A548();
  puVar1 = (undefined4 *)(*(int *)(param_3 + 0x28) + 0x50U & 0xfffffff0);
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];
  puVar2 = (undefined4 *)((int)&fStack_c0 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar11;
  puVar2[2] = uVar12;
  puVar2[3] = uVar13;
  dVar10 = (double)lbl_821CC160;
  fStack_bc = lbl_821CC160;
  fn_82A1EFC0(&uStack_b0,0,0x20);
  dVar9 = (double)fStack_b8;
  dVar8 = (double)fStack_c0;
  dVar7 = (double)((float)piVar4[0x88] - *(float *)(*piVar4 + 0x2a8));
  fn_82809400((double)((float)((double)((float)piVar4[0x84] + *(float *)(*piVar4 + 0x2a8)) - dVar8)
                       / (float)((double)(float)piVar4[0x86] - dVar9)));
  fn_82809400((double)((float)(dVar7 - dVar8) / (float)((double)(float)piVar4[0x86] - dVar9)));
  iVar3 = (int)param_2;
  iVar6 = *(int *)(iVar3 + 0x24);
  if (iVar6 != 0) {
    if (((*(int *)(iVar6 + 0x394) == 0) || (iVar5 = fn_824D2888(iVar6,0), iVar5 == 0)) &&
       ((*(int *)(iVar6 + 0x1fa4) == 0 || (iVar6 = fn_824D2888(iVar6,1), iVar6 == 0)))) {
      iVar6 = 0;
    }
    else {
      iVar6 = 1;
    }
    if (((iVar6 != 0) && (*(int *)(param_3 + 0x260) == 0)) &&
       ((double)*(float *)(param_3 + 0x25c) == dVar10)) {
      *(undefined4 *)(param_3 + 0x25c) = *(undefined4 *)(**(int **)(param_3 + 0x24) + 0x2f8);
    }
    *(int *)(param_3 + 0x260) = iVar6;
  }
  if (*(int *)(iVar3 + 0x24) != 0) {
    iVar6 = *(int *)(param_3 + 0x40) * 0x1c10 + *(int *)(iVar3 + 0x24);
    *(undefined8 *)(iVar6 + 0x420) = uStack_b0;
    *(undefined8 *)(iVar6 + 0x428) = uStack_a8;
    *(undefined8 *)(iVar6 + 0x430) = uStack_a0;
    *(undefined8 *)(iVar6 + 0x438) = uStack_98;
  }
  if (*(int *)(iVar3 + 0x24) != 0) {
    if (*(int *)(*piVar4 + 0x660) != 0) {
      fn_8241F838(piVar4,&uStack_a8,(int)&uStack_a8 + 4);
    }
    if (*(int *)(*piVar4 + 0x664) != 0) {
      fn_822BCAB0(param_2,*(undefined4 *)(param_3 + 0x40),auStack_90);
      fn_8241F978(piVar4);
    }
  }
  fn_82F6A594();
  return;
}

