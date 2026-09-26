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
extern V16 vectorAddFloatingPoint();


int fn_82D52568(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_register_00010060;
  undefined4 in_register_00010064;
  undefined4 in_register_00010068;
  undefined4 in_vr6;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0x30 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + param_2 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0x40 & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar1 = (undefined4 *)(in_r0 + param_2 + 0x20 & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x17) == '\0') {
    return param_2;
  }
  vectorAddFloatingPoint(in_vs32,in_vs45);
  puVar1 = (undefined4 *)(in_r0 + param_2 + 0x30 & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x10);
  vectorAddFloatingPoint(in_vs42,in_vs43);
  puVar1 = (undefined4 *)(in_r0 + param_2 + 0x40 & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x10);
  vectorAddFloatingPoint(in_vs39,in_vs40);
  puVar1 = (undefined4 *)(in_r0 + param_2 + 0x50 & 0xfffffff0);
  *puVar1 = in_register_00010060;
  puVar1[1] = in_register_00010064;
  puVar1[2] = in_register_00010068;
  puVar1[3] = in_vr6;
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x10);
  return param_2;
}

