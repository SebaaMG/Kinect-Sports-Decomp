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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int fStack_64;
extern int fn_82230040();
extern int fn_82318498();
extern int fn_82318788();
extern int fn_82511668();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8265C9E0();
extern int fn_82A1DD38();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_82192604;
extern unsigned int lbl_821AF790;
extern unsigned int lbl_821AF7B0;
extern unsigned int lbl_821C0F10;
extern unsigned int lbl_821C0F1C;
extern unsigned int lbl_821C2424;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;


undefined4 *
fn_82315250(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
             undefined8 param_6)

{
  float fVar1;
  float fVar2;
  int in_r0;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float *pfVar7;
  longlong lVar8;
  double dVar9;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  code *pcStack_90;
  undefined4 uStack_8c;
  undefined **ppuStack_88;
  undefined4 uStack_84;
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_70;
  undefined4 *puStack_68;
  float fStack_64;
  undefined4 *puStack_60;
  
  uVar6 = *(undefined4 *)(param_2 + 0x114);
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = param_5;
  lVar8 = 7;
  *param_1 = &lbl_821AF790;
  param_1[2] = uVar6;
  param_1[1] = 0x12;
  fVar2 = lbl_821CC160;
  fVar1 = lbl_821CA460;
  dVar9 = (double)lbl_821CC160;
  pfVar7 = (float *)(param_1 + 0xe2);
  do {
    pfVar7[-1] = fVar1;
    *pfVar7 = fVar2;
    pfVar7[-2] = 0.0;
    pfVar7[1] = fVar1;
    pfVar7[10] = 0.0;
    pfVar7[2] = fVar1;
    pfVar7[0xd] = 0.0;
    pfVar7[3] = fVar2;
    pfVar7[0xc] = fVar2;
    pfVar7[0xe] = fVar2;
    puVar4 = (undefined4 *)((uint)(pfVar7 + 6) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    pfVar7 = pfVar7 + 0x14;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  param_1[0x16c] = 0;
  param_1[0x16f] = 0;
  iVar3 = fn_8265C9E0(0x28);
  if (iVar3 == 0) {
    uStack_7c = 0;
    ppuStack_80 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_80);
  }
  param_1[0x16e] = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(param_1[0x16e] + 4) = param_1[0x16e];
  *(undefined4 *)(param_1[0x16e] + 8) = param_1[0x16e];
  *(undefined1 *)(param_1[0x16e] + 0x24) = 1;
  *(undefined1 *)(param_1[0x16e] + 0x25) = 1;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  puVar4 = (undefined4 *)((int)param_1 + in_r0 + 0x600 & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  param_1[0x185] = 0xffffffff;
  param_1[0x184] = 0;
  param_1[0x186] = 0xffffffff;
  param_1[0x187] = 0;
  param_1[0x19a] = &lbl_821C2424;
  param_1[0x1a0] = 0;
  param_1[0x1a2] = 0;
  param_1[7] = *(undefined4 *)
                (((uint)((ulonglong)LZCOUNT(*(undefined4 *)(param_2 + 0x2c)) >> 3) & 4) +
                **(int **)(param_3 + 8));
  puVar4 = (undefined4 *)fn_8265C9E0(0x70);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[5] = (float)dVar9;
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
  param_1[0x174] = puVar4;
  lVar8 = fn_8251F720(param_6,0);
  fn_82A1DD38(param_1 + 9,lVar8,0x348);
  fn_8251FA58(lVar8);
  fn_82520158(0xffffffff821af73c,&pcStack_90,0);
  uVar6 = fn_8251F720(&pcStack_90,0);
  param_1[0xdc] = uVar6;
  uVar6 = fn_8251F720(lVar8 + 0x340,0);
  param_1[0x171] = uVar6;
  uVar6 = fn_8251F720(lVar8 + 0x344,0);
  fStack_64 = lbl_821CA460;
  param_1[0x172] = uVar6;
  uStack_70 = (ulonglong)lbl_82192604;
  puStack_68 = (undefined4 *)lbl_82192604;
  puStack_60 = (undefined4 *)lbl_821917C0;
  fn_82318788(param_1 + 0x16d,0,&uStack_70);
  puStack_60 = (undefined4 *)lbl_821917C0;
  puStack_68 = (undefined4 *)(U32)(float)dVar9;
  uStack_70 = CONCAT44(1,lbl_821916FC);
  fStack_64 = lbl_821CA460;
  fn_82318788(param_1 + 0x16d,2,&uStack_70);
  uStack_8c = 0;
  pcStack_90 = fn_82318498;
  uStack_70 = 0x8231849800000000;
  puStack_68 = param_1;
  puVar4 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &lbl_821AF7B0;
    fn_82F68CC0(puVar4 + 2,&uStack_70,0x18);
    puStack_60 = puVar4;
    fn_82511668(param_1 + 0x19a,&uStack_70);
    return param_1;
  }
  uStack_84 = 0;
  ppuStack_88 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_88);
}

