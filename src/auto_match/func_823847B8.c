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
extern int fn_823861F0();
extern int fn_823864B8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern int fn_82A1DD38();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821B41FC;
extern unsigned int lbl_8327655C;
extern unsigned int lbl_83276560;
extern unsigned int lbl_83276564;
extern unsigned int uStack_5c;
extern unsigned int uStack_64;


undefined4 *
fn_823847B8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 in_stack_00000054;
  undefined4 *apuStack_70 [2];
  undefined **ppuStack_68;
  undefined4 uStack_64;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  
  param_1[0x7e8] = 0;
  *param_1 = &lbl_821B41FC;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x7ec) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0x7e9] = 0;
  param_1[0x7ea] = 0;
  param_1[0x7f0] = 0;
  param_1[0x7f1] = 0;
  param_1[0x7f2] = 0;
  uVar2 = fn_8251F720(param_2,0);
  fn_82A1DD38(param_1 + 4,uVar2,0x1f50);
  fn_8251FA58(uVar2);
  fn_823861F0(param_1,param_3,param_4,param_6,param_7,param_5,param_8,in_stack_00000054);
  if (lbl_8327655C == 0) {
    iVar3 = fn_8265C9E0(0x10);
    if (iVar3 == 0) {
      lbl_83276560 = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 8) = 0;
      iVar4 = fn_8265C9E0(0x40);
      if (iVar4 == 0) {
        uStack_64 = 0;
        ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_68);
      }
      *(int *)(iVar3 + 4) = iVar4;
      *(int *)iVar4 = iVar4;
      *(int *)(*(int *)(iVar3 + 4) + 4) = *(int *)(iVar3 + 4);
      *(int *)(*(int *)(iVar3 + 4) + 8) = *(int *)(iVar3 + 4);
      *(undefined1 *)(*(int *)(iVar3 + 4) + 0x30) = 1;
      lbl_83276560 = iVar3;
      *(undefined1 *)(*(int *)(iVar3 + 4) + 0x31) = 1;
    }
    iVar3 = fn_8265C9E0(0x10);
    if (iVar3 == 0) {
      lbl_83276564 = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 8) = 0;
      iVar4 = fn_8265C9E0(0x18);
      if (iVar4 == 0) {
        uStack_5c = 0;
        ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_60);
      }
      *(int *)(iVar3 + 4) = iVar4;
      *(int *)iVar4 = iVar4;
      lbl_83276564 = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 4) = *(int *)(iVar3 + 4);
      *(int *)(*(int *)(iVar3 + 4) + 8) = *(int *)(iVar3 + 4);
      *(undefined1 *)(*(int *)(iVar3 + 4) + 0x14) = 1;
      *(undefined1 *)(*(int *)(iVar3 + 4) + 0x15) = 1;
    }
  }
  lbl_8327655C = lbl_8327655C + 1;
  param_1[0x7e4] = lbl_82192734;
  param_1[0x7da] = 0xffffffff;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x7dc) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0x7d8] = 0x18;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x7e0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0x7db] = 0xffffffff;
  apuStack_70[0] = param_1;
  fn_823864B8(apuStack_70);
  return param_1;
}

