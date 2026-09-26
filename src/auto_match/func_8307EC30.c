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
extern unsigned int lbl_82134504;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();


void fn_8307EC30(int *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
  
  if ((int)param_2 == 0) {
    *param_3 = lbl_82134508;
    uVar3 = lbl_82134504;
    puVar1 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
    param_3[4] = uVar3;
    puVar1 = (undefined4 *)((int)param_3 + in_r0 + 0x10 & 0xfffffff0);
    *puVar1 = in_register_000100b0;
    puVar1[1] = in_register_000100b4;
    puVar1[2] = in_register_000100b8;
    puVar1[3] = in_vr11;
    return;
  }
  puVar1 = (undefined4 *)(in_r0 + *param_1 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (undefined4 *)(in_r0 + *param_1 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)((int)param_3 + in_r0 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  if (1 < (int)param_2) {
    param_2 = param_2 + -1;
    do {
      vectorMinimumFloatingPoint(in_vs44,in_vs32);
      puVar1 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
      *puVar1 = in_register_000100b0;
      puVar1[1] = in_register_000100b4;
      puVar1[2] = in_register_000100b8;
      puVar1[3] = in_vr11;
      vectorMaximumFloatingPoint(in_vs42,in_vs45);
      puVar1 = (undefined4 *)((int)param_3 + in_r0 + 0x10 & 0xfffffff0);
      *puVar1 = in_register_00010090;
      puVar1[1] = in_register_00010094;
      puVar1[2] = in_register_00010098;
      puVar1[3] = in_vr9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar3 = lbl_821AAD20;
  param_3[3] = lbl_821AAD20;
  param_3[7] = uVar3;
  return;
}

