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
extern unsigned int lbl_8213C25C;
extern unsigned int lbl_821AAD20;


void fn_82DA1C80(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_r0;
  undefined4 in_register_00010070;
  undefined4 in_register_00010074;
  undefined4 in_register_00010078;
  undefined4 in_vr7;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  *param_1 = &lbl_8213C25C;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 4) = 3;
  *(undefined2 *)(param_1 + 0x10) = 0x14;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0x30 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0x50 & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  uVar3 = lbl_821AAD20;
  uVar2 = lbl_82002AE0;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0x60 & 0xfffffff0);
  *puVar1 = in_register_00010070;
  puVar1[1] = in_register_00010074;
  puVar1[2] = in_register_00010078;
  puVar1[3] = in_vr7;
  param_1[0x1c] = uVar3;
  param_1[0x1d] = uVar2;
  return;
}

