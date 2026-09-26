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
extern int fn_822315A0();
extern int fn_8223B688();
extern int fn_822C70F0();
extern int fn_82365BD8();
extern int fn_82511668();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82560010();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821ADA68;
extern unsigned int lbl_821ADA7C;
extern unsigned int lbl_821C2424;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;


undefined4 *
fn_822D81D8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,int param_8)

{
  ushort uVar1;
  undefined4 *puVar3;
  longlong lVar2;
  ushort *puVar4;
  undefined4 *puVar5;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined **ppuStack_78;
  undefined4 uStack_74;
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  undefined4 *puStack_50;
  
  fn_822C70F0();
  param_1[0x16] = param_5;
  param_1[0x15] = param_4;
  puVar5 = param_1 + 0x17;
  *param_1 = &lbl_821ADA68;
  fn_8223B688(puVar5,param_6);
  param_1[0x1e] = param_7;
  param_1[0x1f] = in_stack_0000005c;
  fn_82365BD8(param_1 + 0x22,param_8);
  param_1[0x24] = &lbl_821C2424;
  param_1[0x2a] = 0;
  param_1[0x2c] = &lbl_821C2424;
  param_1[0x32] = 0;
  param_1[0x38] = in_stack_00000064;
  param_1[0x34] = in_stack_00000054;
  uStack_60 = 0x822d884800000000;
  puStack_58 = param_1;
  puVar3 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar3 == (undefined4 *)0x0) {
    uStack_6c = 0;
    ppuStack_70 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_70);
  }
  *puVar3 = &lbl_821ADA7C;
  fn_82F68CC0(puVar3 + 2,&uStack_60,0x18);
  puStack_50 = puVar3;
  fn_82511668(param_1 + 0x24,&uStack_60);
  uStack_60 = 0x822d885800000000;
  puStack_58 = param_1;
  puVar3 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar3 == (undefined4 *)0x0) {
    uStack_74 = 0;
    ppuStack_78 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_78);
  }
  *puVar3 = &lbl_821ADA7C;
  fn_82F68CC0(puVar3 + 2,&uStack_60,0x18);
  puStack_50 = puVar3;
  fn_82511668(param_1 + 0x2c,&uStack_60);
  if (param_1[0x34] == 0) {
    param_1[0x35] = lbl_82192734;
  }
  else {
    if (0xf < (uint)param_1[0x1c]) {
      puVar5 = (undefined4 *)*puVar5;
    }
    lVar2 = fn_82560010(*(undefined4 *)(*(int *)(param_1[0x15] + 0x118) + 0x24),puVar5);
    puVar4 = (ushort *)fn_8251F720(lVar2 + 0x44,0);
    uVar1 = puVar4[6];
    while (uVar1 != 0) {
      if (uVar1 == 0x27) goto code_r0x822d8384;
      puVar4 = (ushort *)((uint)*puVar4 + (int)puVar4);
      uVar1 = puVar4[6];
    }
    puVar4 = (ushort *)0x0;
code_r0x822d8384:
    param_1[0x35] = *(undefined4 *)(puVar4 + 2);
    fn_8251FA58();
  }
  if (*(int *)(param_8 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

