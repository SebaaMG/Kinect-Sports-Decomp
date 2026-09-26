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
extern unsigned int *auStack_b0;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8227D7E8();
extern int fn_8227D908();
extern int fn_82528BF8();
extern int fn_82672F30();
extern int fn_82F68CC0();
extern unsigned int lbl_821B3BB4;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


undefined4 *
fn_823838E0(undefined4 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  float fVar3;
  int in_r0;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 *puStack_b8;
  undefined1 auStack_b0 [32];
  undefined2 auStack_90 [72];
  
  fVar3 = lbl_821CC160;
  dVar6 = (double)lbl_821CC160;
  param_1[4] = lbl_821CC160;
  param_1[0x17] = 0;
  param_1[5] = fVar3;
  *param_1 = &lbl_821B3BB4;
  param_1[6] = fVar3;
  param_1[0x18] = 0;
  param_1[0x10] = fVar3;
  param_1[0x19] = 0;
  param_1[0x11] = fVar3;
  param_1[0x12] = fVar3;
  param_1[0x13] = fVar3;
  puVar2 = (undefined4 *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (undefined4 *)((int)param_1 + in_r0 + 0x30 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  fn_8227D7E8(param_1 + 0x1c);
  param_1[4] = (float)dVar6;
  param_1[0x17] = 0;
  param_1[5] = (float)dVar6;
  param_1[0x18] = 0;
  param_1[6] = (float)dVar6;
  param_1[0x19] = 0;
  param_1[0x10] = (float)dVar6;
  param_1[0x38] = 0;
  param_1[0x11] = (float)dVar6;
  param_1[0x39] = 0;
  param_1[0x12] = (float)dVar6;
  param_1[0x3a] = 0;
  param_1[0x13] = (float)dVar6;
  param_1[0x14] = (float)dVar6;
  param_1[0x15] = (float)dVar6;
  param_1[0x16] = (float)dVar6;
  param_1[0x30] = (float)dVar6;
  param_1[0x31] = (float)dVar6;
  puVar2 = (undefined4 *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (undefined4 *)((int)param_1 + in_r0 + 0x30 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (undefined4 *)((uint)(param_1 + 0x34) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  if ((7 < (param_2 & 0xffffffff)) || (bVar1 = (int)param_2 != 0, param_2 == 1 && bVar1)) {
    uVar5 = 2;
  }
  else if (param_2 == 2 && bVar1) {
    uVar5 = 10;
  }
  else if (param_2 == 3 && bVar1) {
    uVar5 = 6;
  }
  else if (param_2 == 4 && bVar1) {
    uVar5 = 4;
  }
  else if (param_2 == 5 && bVar1) {
    uVar5 = 5;
  }
  else if (param_2 == 6 && bVar1) {
    uVar5 = 7;
  }
  else if (bVar1) {
    uVar5 = 9;
  }
  else {
    uVar5 = 3;
  }
  param_1[0x3b] = uVar5;
  fn_8227D908(param_1 + 0x1c,uVar5);
  fn_82F68CC0(auStack_b0,0xffffffff821a875c,0x19);
  auStack_90[0] = 0;
  if ((((param_3 & 0xffffffff) == 0) ||
      (iVar4 = fn_82528BF8(param_3,auStack_b0,auStack_90,0x20,0,1), iVar4 == 0)) &&
     ((param_4 & 0xffffffff) != 0)) {
    fn_82528BF8(param_4,auStack_b0,auStack_90,0x20,0,1);
  }
  uStack_c0 = 0;
  uStack_bc = 0;
  fn_82273CD8(&uStack_c0,5);
  puStack_b8 = auStack_90;
  fn_82672F30(param_1[0x2b],0xffffffff821a8778,0,&uStack_c0,1,1);
  fn_82273C88(&uStack_c0);
  return param_1;
}

