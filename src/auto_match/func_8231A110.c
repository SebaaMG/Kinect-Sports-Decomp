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
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822C4718();
extern int fn_82511668();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82560010();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_821AF948;
extern unsigned int lbl_821AF968;
extern unsigned int lbl_821C0F10;
extern unsigned int lbl_821C0F1C;
extern unsigned int lbl_821C2424;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_60;
extern unsigned int uStack_64;


undefined4 * fn_8231A110(undefined4 *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  ushort *puVar8;
  ulonglong uVar9;
  ushort *puVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  double dVar14;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined **ppuStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  undefined4 *puStack_50;
  
  uVar2 = *(undefined4 *)(param_2 + 0x114);
  param_1[4] = param_3;
  param_1[3] = param_2;
  puVar13 = param_1 + 8;
  param_1[1] = 0x14;
  *param_1 = &lbl_821AF948;
  lVar12 = 0xc;
  param_1[2] = uVar2;
  puVar4 = puVar13;
  do {
    fn_82230300(puVar4,0,0);
    lVar12 = lVar12 + -1;
    puVar4 = puVar4 + 0xc;
  } while (-1 < lVar12);
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)((int)param_1 + 0x2a1) = 0;
  *(undefined1 *)((int)param_1 + 0x2a2) = 0;
  fVar3 = lbl_821CC160;
  dVar14 = (double)lbl_821CC160;
  *(undefined1 *)((int)param_1 + 0x2a3) = 0;
  param_1[0xa9] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined1 *)((int)param_1 + 0x2d1) = 0;
  param_1[0xb5] = 0;
  param_1[0xba] = &lbl_821C2424;
  param_1[0xc0] = 0;
  param_1[0xc3] = fVar3;
  puVar4 = (undefined4 *)((uint)(param_1 + 0xc4) & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  param_1[200] = 0;
  puVar4 = (undefined4 *)fn_8265C9E0(0x70);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[5] = (float)dVar14;
    *puVar4 = &lbl_821C0F1C;
    puVar5 = (undefined4 *)fn_8265C9E0(4);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &lbl_821C0F10;
    }
    puVar4[4] = puVar5;
  }
  param_1[0xa5] = puVar4;
  fn_82230360(puVar13,0xffffffff821af7e8,0xf);
  fn_82230360(param_1 + 0x14,0xffffffff821af7f8,0x12);
  fn_82230360(param_1 + 0x20,0xffffffff821af80c,0x10);
  fn_82230360(param_1 + 0x2c,0xffffffff821af820,9);
  fn_82230360(param_1 + 0x38,0xffffffff821af780,0xc);
  fn_82230360(param_1 + 0x44,0xffffffff821af82c,10);
  fn_82230360(param_1 + 0x50,0xffffffff821af838,0x12);
  fn_82230360(param_1 + 0x5c,0xffffffff821af84c,0x12);
  fn_82230360(param_1 + 0x68,0xffffffff821af860,0x16);
  fn_82230360(param_1 + 0x74,0xffffffff821af878,0x13);
  fn_82230360(param_1 + 0x80,0xffffffff821af88c,0x11);
  fn_82230360(param_1 + 0x8c,0xffffffff821af8a0,0x15);
  fn_82230360(param_1 + 0x98,0xffffffff821af8b8,0x12);
  iVar11 = 0;
  do {
    puVar4 = puVar13;
    if (0xf < (uint)puVar13[5]) {
      puVar4 = (undefined4 *)*puVar13;
    }
    iVar6 = fn_82560010(*(undefined4 *)(*(int *)(param_1[3] + 0x118) + 0x24),puVar4);
    puVar7 = (uint *)(iVar6 + 0x44);
    if ((puVar7 == (uint *)0x0) ||
       (uVar9 = (ulonglong)*puVar7, uVar9 == (uVar9 - 1) + (ulonglong)(uVar9 == 0))) {
      param_1[iVar11 * 0xc + 0xf] = lbl_82191FC8;
      break;
    }
    puVar8 = (ushort *)fn_8251F720(puVar7,0);
    uVar1 = puVar8[6];
    puVar10 = puVar8;
    while (uVar1 != 0) {
      if (uVar1 == 0x14) goto LAB_8231a3a0;
      puVar10 = (ushort *)((uint)*puVar10 + (int)puVar10);
      uVar1 = puVar10[6];
    }
    puVar10 = (ushort *)0x0;
LAB_8231a3a0:
    fn_822C4718((double)*(float *)(puVar10 + 2),param_1[3],iVar6 + 0x40,0x21,param_4,
                      puVar13 + 8,puVar13 + 7);
    fn_8251FA58(puVar8);
    iVar11 = iVar11 + 1;
    puVar13 = puVar13 + 0xc;
  } while (iVar11 < 0xd);
  uStack_60 = 0x8231de4800000000;
  puStack_58 = param_1;
  puStack_50 = (undefined4 *)fn_8265C9E0(0x20);
  if (puStack_50 == (undefined4 *)0x0) {
    uStack_64 = 0;
    ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_68);
  }
  *puStack_50 = &lbl_821AF968;
  fn_82F68CC0(puStack_50 + 2,&uStack_60,0x18);
  fn_82511668(param_1 + 0xba,&uStack_60);
  return param_1;
}

