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
extern int fn_82B6EA60();


uint * fn_82B72FC8(undefined8 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar4 = fn_82B6EA60();
  *(undefined2 *)((int)param_3 + 2) = 0x3c;
  *param_3 = *param_3 & 0xe000ffff;
  *(undefined2 *)((int)param_3 + 6) = uVar4;
  puVar5 = param_3 + 2;
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)*(undefined4 *)(param_2 + 0x10);
  uVar1 = *puVar5;
  uVar2 = *(uint *)(param_2 + 0x10) & 0x3f0000;
  *puVar5 = uVar1 & 0xffc0ffff | uVar2;
  uVar3 = *(uint *)(param_2 + 0x10) & 0x800000;
  *puVar5 = uVar1 & 0xff40ffff | uVar2 | uVar3;
  *puVar5 = uVar1 & 0xff00ffff | uVar2 | uVar3 | *(uint *)(param_2 + 0x10) & 0x400000;
  puVar5 = param_3 + 3;
  if ((*(uint *)(param_2 + 0x10) & 0x400000) != 0) {
    *puVar5 = *(uint *)(param_2 + 0x1c);
    puVar5 = param_3 + 4;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar5 = *(uint *)(param_2 + 0x28);
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)((int)puVar5 + 2) = 0x49;
  *puVar5 = *puVar5 & 0xe000ffff;
  *(undefined2 *)((int)puVar5 + 6) = uVar4;
  puVar5[1] = puVar5[1] & 0xff00ffff | 0x440000;
  puVar5[2] = puVar5[2] & 0xffffe000 | 0x40;
  *(undefined2 *)((int)puVar5 + 0xe) = uVar4;
  puVar5[3] = puVar5[3] & 0xff00ffff | 0x40000;
  puVar6 = puVar5 + 4;
  *(short *)((int)puVar5 + 0x12) = (short)*(undefined4 *)(param_2 + 0x14);
  uVar1 = *puVar6;
  uVar2 = *(uint *)(param_2 + 0x14) & 0x3f0000;
  *puVar6 = uVar1 & 0xffc0ffff | uVar2;
  uVar3 = *(uint *)(param_2 + 0x14) & 0x800000;
  *puVar6 = uVar1 & 0xff40ffff | uVar2 | uVar3;
  *puVar6 = uVar1 & 0xff00ffff | uVar2 | uVar3 | *(uint *)(param_2 + 0x14) & 0x400000;
  puVar6 = puVar5 + 5;
  if ((*(uint *)(param_2 + 0x14) & 0x400000) != 0) {
    *puVar6 = *(uint *)(param_2 + 0x20);
    puVar6 = puVar5 + 6;
  }
  if ((*(uint *)(param_2 + 0x14) & 0x800000) != 0) {
    *puVar6 = *(uint *)(param_2 + 0x2c);
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)((int)puVar6 + 2) = 0x2d;
  *puVar6 = *puVar6 & 0xe000ffff;
  puVar5 = puVar6 + 1;
  *(short *)((int)puVar6 + 6) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar5;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar5 = uVar1 & 0xffc0ffff | uVar2;
  uVar3 = *(uint *)(param_2 + 4) & 0x800000;
  *puVar5 = uVar1 & 0xff40ffff | uVar2 | uVar3;
  *puVar5 = uVar1 & 0xff00ffff | uVar2 | uVar3 | *(uint *)(param_2 + 4) & 0x400000;
  puVar5 = puVar6 + 2;
  if ((*(uint *)(param_2 + 4) & 0x400000) != 0) {
    *puVar5 = *(uint *)(param_2 + 8);
    puVar5 = puVar6 + 3;
  }
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar5 = *(uint *)(param_2 + 0xc);
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)((int)puVar5 + 2) = uVar4;
  *puVar5 = *puVar5 & 0xff00ffff | 0x40000;
  return puVar5 + 1;
}

