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
extern unsigned int *auStack_20;
extern int fn_82517D50();
extern int fn_825AC4A0();
extern int fn_825ACAC8();
extern unsigned int lbl_82196750;
extern unsigned int lbl_821C80A0;
extern unsigned int lbl_821C8110;


undefined4 * fn_825AA6B0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int in_r0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_20 [8];
  
  fn_82517D50(param_1,param_2,4);
  *param_1 = &lbl_821C80A0;
  param_1[0x1a] = &lbl_821C8110;
  param_1[0x20] = 0;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0x90 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined8 *)(param_1 + 0x34) = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x28) & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x2c) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x30) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  fn_825ACAC8(param_1 + 0x39);
  fn_825ACAC8(param_1 + 0x3f,auStack_20);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x45) = 1;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  fn_825AC4A0(param_1);
  return param_1;
}

