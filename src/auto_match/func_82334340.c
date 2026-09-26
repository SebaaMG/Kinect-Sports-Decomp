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
extern int fn_822C72E0();
extern int fn_823345C0();
extern int fn_82334668();
extern int fn_82334868();
extern int fn_823349C0();
extern int fn_82334A70();
extern int fn_82334E28();
extern int fn_82334FD0();
extern int fn_82335158();
extern int fn_82335838();
extern int fn_82336398();
extern int fn_823364B8();
extern int fn_82417F58();
extern unsigned int lbl_821CC160;
extern unsigned char switchdataD_82195038[];


void fn_82334340(double param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  float fVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  uVar1 = *(uint *)(param_2 + 0x230);
  uVar8 = (ulonglong)uVar1;
  *(float *)(param_2 + 0x22c) = *(float *)(param_2 + 0x228);
  *(float *)(param_2 + 0x228) = (float)((double)*(float *)(param_2 + 0x228) + param_1);
  uVar9 = (ulonglong)*(uint *)(uVar1 + 0x238);
  if (uVar9 == 0) {
    return;
  }
  if (((*(int *)(uVar1 + 0x24) != 0) || (*(int *)(uVar1 + 0x280) == 0)) ||
     (uVar4 = fn_82417F58(uVar9), fVar3 = lbl_821CC160,
     (uVar4 & 0xffffffff) != (uVar8 & 0xffffffff))) {
    uVar9 = fn_82417F58(uVar9);
    if ((uVar9 & 0xffffffff) == (uVar8 & 0xffffffff)) {
      return;
    }
    *(undefined4 *)(param_2 + 0x14) = 0;
    return;
  }
  dVar11 = (double)lbl_821CC160;
  if (*(int *)(param_2 + 0x14) == 0) {
    *(float *)(param_2 + 0x228) = lbl_821CC160;
    *(undefined4 *)(param_2 + 0x224) = 1;
    *(float *)(param_2 + 0x22c) = fVar3;
  }
  *(undefined4 *)(param_2 + 0x14) = 1;
  uVar1 = *(uint *)(param_2 + 0x224);
  if (0xb < uVar1) {
    return;
  }
  iVar6 = (uint)(switchdataD_82195038)[uVar1] * 4;
  switch(uVar1) {
  case 0:
    fn_823345C0(param_2);
    break;
  case 1:
    fn_82334668(param_2);
    break;
  case 2:
    iVar6 = fn_823364B8(param_2,param_2 + 0x1f0,0);
    if (iVar6 == 0) {
      return;
    }
    fn_822C72E0(*(undefined4 *)(*(int *)(param_2 + 8) + 0x20),param_2 + 0x198);
    uVar10 = 3;
    goto LAB_82334440;
  case 3:
    fn_82334868(param_2);
    break;
  case 4:
    iVar6 = fn_823364B8(param_2,param_2 + 0x1e0,1);
    if (iVar6 == 0) {
      return;
    }
    if (*(int *)(param_2 + 0x184) == 0) {
      uVar7 = 0xffffffff821b09cc;
    }
    else {
      uVar7 = 0xffffffff821b09b4;
    }
    fn_822C72E0(*(undefined4 *)(*(int *)(param_2 + 8) + 0x20),uVar7);
    uVar10 = 5;
LAB_82334440:
    *(float *)(param_2 + 0x228) = (float)dVar11;
    *(undefined4 *)(param_2 + 0x224) = uVar10;
    *(float *)(param_2 + 0x22c) = (float)dVar11;
    break;
  case 5:
    iVar6 = fn_82336398(param_2,param_2 + 0x1e0);
    if (iVar6 == 0) {
      return;
    }
    if (*(int *)(param_2 + 400) != 0) {
      *(int *)(param_2 + 0x21c) = *(int *)(param_2 + 0x21c) + 1;
    }
    uVar10 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x230) + 0x23c) + 0x928);
    *(undefined4 *)(param_2 + 0x224) = 6;
    *(undefined4 *)(param_2 + 0x238) = uVar10;
    goto LAB_823344a4;
  case 6:
    fn_823349C0(param_2);
    break;
  case 7:
    fn_82334A70(param_2);
    break;
  case 8:
    if (*(int *)(param_2 + 0x210) == 0) {
      fn_82335838(param_2,*(undefined4 *)((int)uVar8 + 0x238));
    }
    iVar5 = fn_82336398(param_2,param_2 + 0x1e0);
    if (iVar5 == 0) {
      return;
    }
    iVar5 = *(int *)(*(int *)(param_2 + 0x230) + 0x114);
    puVar2 = (undefined4 *)(iVar6 + iVar5 + 0x50 & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    *(undefined4 *)(iVar5 + 0x7c) = 0;
    puVar2 = (undefined4 *)(iVar5 + 0x60U & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    *(undefined4 *)(param_2 + 0x224) = 3;
LAB_823344a4:
    *(float *)(param_2 + 0x228) = (float)dVar11;
    *(float *)(param_2 + 0x22c) = (float)dVar11;
    break;
  case 9:
    fn_82334E28(param_2);
    break;
  case 10:
    fn_82334FD0(param_2);
    break;
  case 0xb:
    fn_82335158(param_2);
  }
  return;
}

