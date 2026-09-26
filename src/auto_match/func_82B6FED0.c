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


uint * fn_82B6FED0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  *(undefined2 *)((int)param_2 + 2) = 0x41;
  *param_2 = *param_2 & 0xe000ffff;
  puVar5 = param_2 + 2;
  *(short *)((int)param_2 + 6) = (short)*(undefined4 *)(param_1 + 4);
  uVar1 = param_2[1];
  uVar3 = *(uint *)(param_1 + 4) & 0x3f0000;
  param_2[1] = uVar1 & 0xffc0ffff | uVar3;
  uVar2 = *(uint *)(param_1 + 4) & 0x800000;
  param_2[1] = uVar1 & 0xff40ffff | uVar3 | uVar2;
  param_2[1] = uVar1 & 0xff00ffff | uVar3 | uVar2 | *(uint *)(param_1 + 4) & 0x400000;
  if ((*(uint *)(param_1 + 4) & 0x400000) != 0) {
    *puVar5 = *(uint *)(param_1 + 8);
    puVar5 = param_2 + 3;
  }
  if ((*(uint *)(param_1 + 4) & 0x800000) != 0) {
    *puVar5 = *(uint *)(param_1 + 0xc);
    puVar5 = puVar5 + 1;
  }
  *(short *)((int)puVar5 + 2) = (short)*(undefined4 *)(param_1 + 0x10);
  uVar1 = *puVar5;
  uVar3 = *(uint *)(param_1 + 0x10) & 0x3f0000;
  *puVar5 = uVar1 & 0xffc0ffff | uVar3;
  *puVar5 = uVar1 & 0xff40ffff | uVar3 | *(uint *)(param_1 + 0x10) & 0x800000 | 0x400000;
  puVar6 = puVar5 + 1;
  uVar1 = *puVar6;
  uVar3 = *(uint *)(param_1 + 0x1c) & 7;
  *puVar6 = uVar3 | uVar1 & 0xfffffff8;
  uVar2 = *(uint *)(param_1 + 0x1c) & 0x70;
  *puVar6 = uVar2 | uVar3 | uVar1 & 0xffffff88;
  uVar4 = *(uint *)(param_1 + 0x1c) & 0x700;
  *puVar6 = uVar4 | uVar2 | uVar3 | uVar1 & 0xfffff888;
  *puVar6 = uVar4 | uVar2 | uVar3 | uVar1 & 0xffff8888 | *(uint *)(param_1 + 0x1c) & 0x7000;
  puVar6 = puVar5 + 2;
  if ((*(uint *)(param_1 + 0x10) & 0x800000) != 0) {
    *puVar6 = *(uint *)(param_1 + 0x28);
    puVar6 = puVar5 + 3;
  }
  *(short *)((int)puVar6 + 2) = (short)*(undefined4 *)(param_1 + 0x10);
  uVar1 = *puVar6;
  uVar3 = *(uint *)(param_1 + 0x10) & 0x3f0000;
  *puVar6 = uVar1 & 0xffc0ffff | uVar3;
  *puVar6 = uVar1 & 0xff40ffff | uVar3 | *(uint *)(param_1 + 0x10) & 0x800000 | 0x400000;
  puVar5 = puVar6 + 1;
  uVar1 = *puVar5;
  uVar3 = *(uint *)(param_1 + 0x1c) & 7;
  *puVar5 = uVar3 | uVar1 & 0xfffffff8;
  uVar2 = *(uint *)(param_1 + 0x1c) & 0x70;
  *puVar5 = uVar2 | uVar3 | uVar1 & 0xffffff88;
  *puVar5 = *(uint *)(param_1 + 0x1c) & 0x700 | uVar2 | uVar3 | uVar1 & 0xfffff888;
  *puVar5 = *puVar5 & 0xffff8fff | *(uint *)(param_1 + 0x1c) & 0x7000 | 0x8888;
  if ((*(uint *)(param_1 + 0x10) & 0x800000) == 0) {
    return puVar6 + 2;
  }
  puVar6[2] = *(uint *)(param_1 + 0x28);
  return puVar6 + 3;
}

