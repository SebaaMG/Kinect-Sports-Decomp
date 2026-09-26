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


void fn_83037250(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  int in_r0;
  uint uVar2;
  undefined1 in_vs32 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_000103c0;
  undefined4 in_register_000103c4;
  undefined4 in_register_000103c8;
  undefined4 in_vr60;
  undefined4 in_register_000103d0;
  undefined4 in_register_000103d4;
  undefined4 in_register_000103d8;
  undefined4 in_vr61;
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  uVar2 = 0;
  if (*(ushort *)(param_1 + 0x2e) >> 0xd == 0) {
    return;
  }
  param_3 = param_3 + 0x10;
  do {
    altv207_13(in_vs43,in_vs39);
    uVar2 = uVar2 + 1;
    puVar1 = (undefined4 *)(param_3 - 0x10U & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    altv207_13(in_vs32,in_vs43);
    puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar1 = in_register_000103e0;
    puVar1[1] = in_register_000103e4;
    puVar1[2] = in_register_000103e8;
    puVar1[3] = in_vr62;
    altv207_13(in_vs43,in_vs37);
    puVar1 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
    *puVar1 = in_register_000103d0;
    puVar1[1] = in_register_000103d4;
    puVar1[2] = in_register_000103d8;
    puVar1[3] = in_vr61;
    altv207_13(in_vs43,in_vs40);
    puVar1 = (undefined4 *)(param_3 + 0x20U & 0xfffffff0);
    *puVar1 = in_register_000103c0;
    puVar1[1] = in_register_000103c4;
    puVar1[2] = in_register_000103c8;
    puVar1[3] = in_vr60;
    param_3 = param_3 + 0x40;
  } while (uVar2 < *(ushort *)(param_1 + 0x2e) >> 0xd);
  return;
}

