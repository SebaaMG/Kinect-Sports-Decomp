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
extern unsigned int lbl_82196750;
extern unsigned int lbl_821CC160;


void fn_82311DA0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (**(code **)(*(int *)(param_1 + 0x20) + 4))(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x104) = 0;
  uVar4 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x118) = uVar4;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x11c) = uVar4;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x120) = uVar4;
  *(undefined4 *)(param_1 + 0x114) = 0;
  puVar2 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (undefined4 *)(param_1 + 0x140U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  iVar1 = *(int *)(param_1 + 0xc);
  puVar2 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  *(undefined4 *)(param_1 + 0x170) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x130U & 0xfffffff0);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined4 *)(iVar1 + 0x240) = 0;
  return;
}

