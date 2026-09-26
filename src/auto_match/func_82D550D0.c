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


void fn_82D550D0(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_r0;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  
  puVar5 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *puVar5 = in_register_000100c0;
  puVar5[1] = in_register_000100c4;
  puVar5[2] = in_register_000100c8;
  puVar5[3] = in_vr12;
  bVar1 = *(byte *)(param_1 + 0x38);
  uVar3 = *(undefined2 *)(param_1 + 0x30);
  bVar2 = *(byte *)(param_1 + 0x39);
  *(byte *)(param_1 + 0x38) = bVar2;
  *(byte *)(param_1 + 0x39) = bVar1;
  iVar4 = ((uint)bVar2 + (uint)bVar1 + -1) * 2;
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) << 4 | *(byte *)(param_1 + 0x3a) >> 4;
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar4 + param_1 + 0x30);
  *(undefined2 *)(iVar4 + param_1 + 0x30) = uVar3;
  if ((*(byte *)(param_1 + 0x38) & *(byte *)(param_1 + 0x39)) != 2) {
    return;
  }
  uVar3 = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0x32);
  *(undefined2 *)(param_1 + 0x32) = uVar3;
  return;
}

