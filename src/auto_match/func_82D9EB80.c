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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_82022E60;
extern unsigned int lbl_8213B5CC;


void fn_82D9EB80(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_r0;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  *param_1 = &lbl_8213B5CC;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 4) = 4;
  *(undefined2 *)(param_1 + 0x20) = 0xe;
  *(undefined1 *)((int)param_1 + 0x82) = 1;
  *(undefined2 *)(param_1 + 0x24) = 0xc;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  uVar2 = lbl_82002AE0;
  param_1[8] = lbl_82002AE0;
  param_1[0xd] = uVar2;
  param_1[0x12] = uVar2;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0x50 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x18) & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x1c) & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  param_1[0x14] = uVar2;
  param_1[0x19] = uVar2;
  param_1[0x1e] = uVar2;
  *(undefined1 *)((int)param_1 + 0x92) = 0;
  uVar4 = lbl_82022E60;
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  uVar3 = lbl_8201DD74;
  param_1[0x21] = uVar4;
  param_1[0x22] = uVar3;
  param_1[0x23] = uVar2;
  return;
}

