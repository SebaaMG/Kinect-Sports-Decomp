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
extern int fn_82230040();
extern int fn_824A2308();
extern int fn_8265C9E0();
extern int fn_82F4DC00();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_8219174C;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_4c;


int * fn_8249DA90(int *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int in_r0;
  int iVar4;
  int iVar5;
  ulonglong uVar3;
  float *pfVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong lVar9;
  double dVar10;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  iVar4 = fn_8265C9E0(0x14);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    *(undefined4 *)(iVar4 + 8) = 0;
    iVar5 = fn_8265C9E0(0x20);
    if (iVar5 == 0) {
      uStack_4c = 0;
      ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_50);
    }
    *(int *)(iVar4 + 4) = iVar5;
    *(int *)iVar5 = iVar5;
    *(int *)(*(int *)(iVar4 + 4) + 4) = *(int *)(iVar4 + 4);
    *(int *)(*(int *)(iVar4 + 4) + 8) = *(int *)(iVar4 + 4);
    *(undefined1 *)(*(int *)(iVar4 + 4) + 0x1c) = 1;
    *(undefined1 *)(*(int *)(iVar4 + 4) + 0x1d) = 1;
    *(undefined4 *)(iVar4 + 0x10) = 0;
  }
  *param_1 = iVar4;
  param_1[1] = 0;
  lVar9 = 2;
  puVar1 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[2] = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0x33] = -1;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0x34] = -1;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x18) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  fVar2 = lbl_821CC160;
  dVar10 = (double)lbl_821CC160;
  param_1[3] = 0;
  param_1[4] = 0;
  pfVar6 = (float *)(param_1 + 0x2d);
  param_1[5] = 0;
  piVar8 = param_1 + 0x1c;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  do {
    puVar1 = (undefined4 *)(in_r0 + (int)piVar8 & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    piVar8 = piVar8 + 4;
    pfVar6[-1] = fVar2;
    pfVar6 = pfVar6 + 1;
    *pfVar6 = fVar2;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  uVar7 = 0;
  piVar8 = param_1 + 0x3b;
  do {
    uVar3 = fn_8265C9E0(0x1c);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_824A2308(uVar3,uVar7);
    }
    iVar5 = lbl_8219174C;
    uVar7 = uVar7 + 1;
    piVar8[3] = (int)(float)dVar10;
    piVar8[1] = iVar4;
    piVar8[5] = iVar5;
    piVar8[2] = 1;
    piVar8[4] = 0;
    piVar8[6] = 0;
    piVar8 = piVar8 + 7;
    *piVar8 = 0;
  } while ((uVar7 & 0xffffffff) < 2);
  fn_82F4DC00(0);
  return param_1;
}

