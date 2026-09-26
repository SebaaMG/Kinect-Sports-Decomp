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
extern int fn_82B7BD28();
extern int fn_82B9C788();
extern int fn_82B9CD20();
extern int fn_82BAFE48();
extern int fn_82BC0A30();
extern int fn_82BC13C0();
extern int fn_82BC2958();
extern int fn_82BC3A28();
extern int fn_82BC43D8();
extern int fn_82BC5538();
extern int fn_82BC5580();
extern unsigned int lbl_820E3514;
extern unsigned int lbl_820E3600;
extern unsigned int lbl_820E36A8;
extern unsigned int lbl_820E37D8;
extern unsigned int lbl_820E37DC;
extern unsigned int lbl_820E37E0;
extern unsigned int lbl_820E37E4;
extern unsigned int lbl_820E37F8;
extern unsigned int lbl_820E37FC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82BC1750(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar10;
  ulonglong uVar8;
  undefined4 *puVar11;
  ulonglong uVar9;
  undefined *puVar12;
  int aiStack_70 [28];
  
  fn_82BC13C0();
  *param_1 = &lbl_820E3514;
  iVar1 = *(int *)(param_4 + 0xab0);
  uVar2 = *(undefined4 *)(param_4 + 0x600);
  uVar7 = (**(code **)(**(int **)(param_4 + 0x5d0) + 0x1c))();
  iVar10 = fn_82B9C788(uVar2,0,uVar7,0xffffffff82b7c800,param_4);
  if (iVar10 == 0) {
    iVar3 = (lbl_820E3600 + 6) * 4;
    iVar10 = *(int *)(iVar3 + iVar1);
    if (iVar10 == 0) {
      uVar8 = fn_82BAFE48(*(undefined4 *)(iVar1 + 0xac),0xf);
      uVar2 = *(undefined4 *)(param_4 + 0x5ac);
      puVar11 = (undefined4 *)fn_82B7BD28(uVar2,0x3c4);
      *puVar11 = uVar2;
      if (puVar11 + 1 == (undefined4 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = fn_82BC3A28(puVar11 + 1,param_1,param_4);
      }
      fn_82BC5580(*(undefined4 *)(iVar1 + 0xa4),uVar7);
      fn_82BC2958(uVar7,0,uVar8);
      fn_82BC0A30(uVar8,uVar7);
      *(int *)(iVar3 + iVar1) = (int)uVar7;
    }
    else {
      uVar8 = (ulonglong)*(uint *)(iVar10 + 0x1c);
    }
    iVar10 = fn_82BC43D8(0x31,param_4);
    fn_82BC2958(iVar10,1,uVar8);
  }
  else {
    fn_82B9CD20(*(undefined4 *)(param_4 + 0x600),aiStack_70,0xffffffff82b7c800,param_4);
    if (*(int *)(&lbl_820E36A8 + aiStack_70[0] * 0x10) < 0) {
      iVar3 = (*(int *)(&lbl_820E3600 + *(int *)(&lbl_820E37F8 + aiStack_70[0] * 0x20) * 8) + 6) * 4
      ;
      iVar10 = *(int *)(iVar3 + iVar1);
      if (iVar10 == 0) {
        uVar8 = fn_82BAFE48(*(undefined4 *)(iVar1 + 0xac),0xf);
        uVar2 = *(undefined4 *)(param_4 + 0x5ac);
        puVar11 = (undefined4 *)fn_82B7BD28(uVar2,0x3c4);
        *puVar11 = uVar2;
        if (puVar11 + 1 == (undefined4 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = fn_82BC3A28(puVar11 + 1,param_1,param_4);
        }
        fn_82BC5580(*(undefined4 *)(iVar1 + 0xa4),uVar7);
        fn_82BC2958(uVar7,0,uVar8);
        fn_82BC0A30(uVar8,uVar7);
        *(int *)(iVar3 + iVar1) = (int)uVar7;
      }
      else {
        uVar8 = (ulonglong)*(uint *)(iVar10 + 0x1c);
      }
      iVar10 = fn_82BC43D8(0x31,param_4);
      fn_82BC2958(iVar10,1,uVar8);
      puVar12 = &lbl_820E37FC;
      aiStack_70[0] = aiStack_70[0] << 5;
    }
    else {
      iVar3 = *(int *)(&lbl_820E36A8 + aiStack_70[0] * 0x10) * 0x10;
      iVar10 = *(int *)(&lbl_820E3600 + *(int *)(&lbl_820E37E0 + iVar3) * 8);
      iVar5 = (*(int *)(&lbl_820E3600 + *(int *)(&lbl_820E37D8 + iVar3) * 8) + 6) * 4;
      iVar6 = (iVar10 + 6) * 4;
      iVar3 = *(int *)(iVar5 + iVar1);
      iVar4 = *(int *)(iVar6 + iVar1);
      if (iVar3 == 0) {
        uVar8 = fn_82BAFE48(*(undefined4 *)(iVar1 + 0xac),0xf);
        uVar2 = *(undefined4 *)(param_4 + 0x5ac);
        puVar11 = (undefined4 *)fn_82B7BD28(uVar2,0x3c4);
        *puVar11 = uVar2;
        if (puVar11 + 1 == (undefined4 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = fn_82BC3A28(puVar11 + 1,param_1,param_4);
        }
        fn_82BC5580(*(undefined4 *)(iVar1 + 0xa4),uVar7);
        fn_82BC2958(uVar7,0,uVar8);
        fn_82BC0A30(uVar8,uVar7);
        *(int *)(iVar5 + iVar1) = (int)uVar7;
      }
      else {
        uVar8 = (ulonglong)*(uint *)(iVar3 + 0x1c);
      }
      if (iVar4 == 0) {
        uVar9 = fn_82BAFE48(*(undefined4 *)(iVar1 + 0xac),0xf,iVar10);
        uVar2 = *(undefined4 *)(param_4 + 0x5ac);
        puVar11 = (undefined4 *)fn_82B7BD28(uVar2,0x3c4);
        *puVar11 = uVar2;
        if (puVar11 + 1 == (undefined4 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = fn_82BC3A28(puVar11 + 1,param_1,param_4);
        }
        fn_82BC5580(*(undefined4 *)(iVar1 + 0xa4),uVar7);
        fn_82BC2958(uVar7,0,uVar9);
        fn_82BC0A30(uVar9,uVar7);
        *(int *)(iVar6 + iVar1) = (int)uVar7;
      }
      else {
        uVar9 = (ulonglong)*(uint *)(iVar4 + 0x1c);
      }
      iVar10 = fn_82BC43D8(0x31,param_4);
      fn_82BC2958(iVar10,1,uVar8);
      *(undefined4 *)(iVar10 + 0x84) =
           *(undefined4 *)(&lbl_820E37DC + *(int *)(&lbl_820E36A8 + aiStack_70[0] * 0x10) * 0x10);
      fn_82BC2958(iVar10,0,param_1);
      fn_82BC0A30(param_1,iVar10);
      fn_82BC5538(*(undefined4 *)(iVar1 + 0xa4),iVar10);
      iVar10 = fn_82BC43D8(0x31,param_4);
      fn_82BC2958(iVar10,1,uVar9);
      puVar12 = &lbl_820E37E4;
      aiStack_70[0] = *(int *)(&lbl_820E36A8 + aiStack_70[0] * 0x10) << 4;
    }
    *(undefined4 *)(iVar10 + 0x84) = *(undefined4 *)(puVar12 + aiStack_70[0]);
  }
  fn_82BC2958(iVar10,0,param_1);
  fn_82BC0A30(param_1,iVar10);
  fn_82BC5538(*(undefined4 *)(iVar1 + 0xa4),iVar10);
  return param_1;
}

