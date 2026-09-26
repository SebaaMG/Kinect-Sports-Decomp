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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822F6FE0();
extern int fn_82365BD8();
extern int fn_82F68CC0();
extern unsigned int lbl_82196582;
extern unsigned int lbl_821ADF3C;
extern unsigned int lbl_821AE6B4;
extern unsigned int lbl_821CC160;


undefined4 *
fn_822F33D0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_50 [80];
  
  iVar5 = fn_82365BD8(auStack_50,param_6);
  param_1[2] = param_2;
  param_1[5] = param_5;
  param_1[3] = param_3;
  param_1[1] = 9;
  *param_1 = &lbl_821ADF3C;
  param_1[4] = param_4;
  fn_82365BD8(param_1 + 6,iVar5);
  param_1[8] = param_7;
  if (*(int *)(iVar5 + 4) != 0) {
    fn_822315A0();
  }
  param_1[9] = 0;
  *param_1 = &lbl_821AE6B4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  fn_82F68CC0(param_1 + 0x18,0xffffffff8329ead0,0x40);
  iVar5 = param_1[4];
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  uVar4 = lbl_821CC160;
  iVar1 = param_1[3];
  puVar3 = (undefined4 *)((uint)(param_1 + 0x28) & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  param_1[0x30] = &lbl_82196582;
  param_1[0x2c] = uVar4;
  param_1[0x2d] = uVar4;
  param_1[0x2f] = uVar4;
  param_1[0x32] = uVar4;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x2c) * 4 + *(int *)(iVar5 + 0x20));
  if ((piVar2[1] - *piVar2 & 0xfffffffcU) == 0) {
    fn_822F6FE0(param_1);
  }
  if (*(int *)(param_6 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

