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


void fn_822BC818(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  iVar3 = param_3 * 0x1c10 + *(int *)(param_1 + 0x24);
  puVar1 = (undefined4 *)(iVar3 + 0x2f0U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(iVar3 + 0x344);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(iVar3 + 0x3c8);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(iVar3 + 0x3cc);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(iVar3 + 0x3bc);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(iVar3 + 0x3c0);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(iVar3 + 0x3d8);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(iVar3 + 0x348);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(iVar3 + 0x2d4);
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(iVar3 + 0x3dc);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(iVar3 + 0x3e0);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(iVar3 + 0x3e4);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(iVar3 + 0x354);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(iVar3 + 0x3ec);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(iVar3 + 0x3f0);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(iVar3 + 0x3f4);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(iVar3 + 1000);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(iVar3 + 0x388);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(iVar3 + 0x3f8);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(iVar3 + 0x3fc);
  *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(iVar3 + 0x400);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(iVar3 + 0x404);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(iVar3 + 0x408);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(iVar3 + 0x40c);
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(iVar3 + 0x410);
  return;
}

