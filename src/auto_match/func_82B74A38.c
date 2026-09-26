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


uint * fn_82B74A38(undefined8 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar3 = fn_82B6EA60();
  *(undefined2 *)((int)param_3 + 2) = 0x40;
  *param_3 = *param_3 & 0xe000ffff;
  *(undefined2 *)((int)param_3 + 6) = uVar3;
  puVar4 = param_3 + 2;
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar4;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar4 = uVar1 & 0xffc0ffff | uVar2;
  *puVar4 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  param_3[3] = param_3[3] & 0xffff9999 | 0x1111;
  puVar4 = param_3 + 4;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar4 = *(uint *)(param_2 + 0xc);
    puVar4 = param_3 + 5;
  }
  *(undefined2 *)((int)puVar4 + 2) = 5;
  *puVar4 = *puVar4 & 0xff00ffff | 0x10000;
  *(undefined1 *)puVar4 = 1;
  puVar5 = puVar4 + 1;
  *(undefined2 *)((int)puVar4 + 6) = 4;
  *puVar5 = *puVar5 & 0xff00ffff | 0x10000;
  *(undefined1 *)puVar5 = 1;
  *(undefined2 *)((int)puVar4 + 10) = 0x40;
  puVar4[2] = puVar4[2] & 0xe000ffff;
  *(undefined2 *)((int)puVar4 + 0xe) = uVar3;
  puVar4[3] = puVar4[3] & 0xff00ffff | 0x40000;
  puVar5 = puVar4 + 4;
  *(short *)((int)puVar4 + 0x12) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar5;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar5 = uVar1 & 0xffc0ffff | uVar2;
  *puVar5 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar4[5] = puVar4[5] & 0xffffaaaa | 0x2222;
  puVar5 = puVar4 + 6;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar5 = *(uint *)(param_2 + 0xc);
    puVar5 = puVar4 + 7;
  }
  *(undefined2 *)((int)puVar5 + 2) = 6;
  *puVar5 = *puVar5 & 0xff00ffff | 0x10000;
  *(undefined1 *)puVar5 = 1;
  *(undefined2 *)((int)puVar5 + 6) = uVar3;
  puVar5[1] = puVar5[1] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)puVar5 + 10) = 0x40;
  puVar5[2] = puVar5[2] & 0xe000ffff;
  puVar4 = puVar5 + 3;
  *(short *)((int)puVar5 + 0xe) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar4;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar4 = uVar1 & 0xffc0ffff | uVar2;
  *puVar4 = uVar1 & 0xff00ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000;
  puVar4 = puVar5 + 4;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar4 = *(uint *)(param_2 + 0xc);
    puVar4 = puVar5 + 5;
  }
  *(short *)((int)puVar4 + 2) = (short)*(undefined4 *)(param_2 + 4);
  uVar1 = *puVar4;
  uVar2 = *(uint *)(param_2 + 4) & 0x3f0000;
  *puVar4 = uVar1 & 0xffc0ffff | uVar2;
  *puVar4 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar4[1] = puVar4[1] & 0xffff8888;
  puVar5 = puVar4 + 2;
  if ((*(uint *)(param_2 + 4) & 0x800000) != 0) {
    *puVar5 = *(uint *)(param_2 + 0xc);
    puVar5 = puVar4 + 3;
  }
  *(undefined2 *)((int)puVar5 + 2) = 7;
  *puVar5 = *puVar5 & 0xff00ffff | 0x10000;
  *(undefined1 *)puVar5 = 1;
  *(undefined2 *)((int)puVar5 + 6) = uVar3;
  puVar5[1] = puVar5[1] & 0xff00ffff | 0x40000;
  return puVar5 + 2;
}

