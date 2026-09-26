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


uint * fn_82B755B0(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,undefined2 param_5
                    ,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar5 = fn_82B6EA60();
  *(undefined2 *)((int)param_6 + 2) = 0xd;
  *param_6 = *param_6 & 0xe000ffff | 0x20000;
  *(undefined2 *)((int)param_6 + 6) = param_5;
  puVar6 = param_6 + 2;
  param_6[1] = param_6[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_6 + 10) = (short)*param_2;
  uVar1 = *puVar6;
  uVar2 = *param_2;
  *puVar6 = uVar1 & 0xffc0ffff | uVar2 & 0x3f0000;
  *puVar6 = uVar1 & 0xff40ffff | uVar2 & 0x3f0000 | *param_2 & 0x800000 | 0x400000;
  puVar6 = param_6 + 3;
  uVar2 = *puVar6;
  uVar3 = *param_3 & 7;
  *puVar6 = uVar2 & 0xfffffff8 | uVar3;
  uVar4 = *param_3 & 0x70;
  *puVar6 = uVar2 & 0xffffff88 | uVar3 | uVar4;
  uVar1 = *param_3;
  *puVar6 = uVar2 & 0xfffff888 | uVar3 | uVar4 | uVar1 & 0x700;
  *puVar6 = uVar2 & 0xffff8888 | uVar3 | uVar4 | uVar1 & 0x700 | *param_3 & 0x7000;
  puVar6 = param_6 + 4;
  if ((*param_2 & 0x800000) != 0) {
    *puVar6 = *param_4;
    puVar6 = param_6 + 5;
  }
  *(undefined2 *)((int)puVar6 + 2) = 0;
  *puVar6 = *puVar6 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar6 = 1;
  puVar6[1] = puVar6[1] & 0xffff9999 | 0x1111;
  puVar7 = puVar6 + 2;
  *(undefined2 *)((int)puVar6 + 10) = 0;
  *puVar7 = *puVar7 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar7 = 1;
  puVar6[3] = puVar6[3] & 0xffffbbbb | 0x3333;
  *(undefined2 *)((int)puVar6 + 0x12) = 0x56;
  puVar6[4] = puVar6[4] & 0xe000ffff;
  *(undefined2 *)((int)puVar6 + 0x16) = uVar5;
  puVar6[5] = puVar6[5] & 0xff00ffff | 0x40000;
  puVar7 = puVar6 + 6;
  *(short *)((int)puVar6 + 0x1a) = (short)*param_2;
  uVar1 = *puVar7;
  uVar2 = *param_2;
  *puVar7 = uVar1 & 0xffc0ffff | uVar2 & 0x3f0000;
  *puVar7 = uVar1 & 0xff40ffff | uVar2 & 0x3f0000 | *param_2 & 0x800000 | 0x400000;
  puVar7 = puVar6 + 7;
  uVar2 = *puVar7;
  uVar3 = *param_3 & 7;
  *puVar7 = uVar2 & 0xfffffff8 | uVar3;
  uVar4 = *param_3 & 0x70;
  *puVar7 = uVar2 & 0xffffff88 | uVar3 | uVar4;
  uVar1 = *param_3;
  *puVar7 = uVar2 & 0xfffff888 | uVar3 | uVar4 | uVar1 & 0x700;
  *puVar7 = uVar2 & 0xffff8888 | uVar3 | uVar4 | uVar1 & 0x700 | *param_3 & 0x7000;
  puVar7 = puVar6 + 8;
  if ((*param_2 & 0x800000) != 0) {
    *puVar7 = *param_4;
    puVar7 = puVar6 + 9;
  }
  *(undefined2 *)((int)puVar7 + 2) = 0;
  *puVar7 = *puVar7 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar7 = 1;
  puVar7[1] = puVar7[1] & 0xffff8888;
  *(undefined2 *)((int)puVar7 + 10) = 0x49;
  puVar7[2] = puVar7[2] & 0xe000ffff;
  *(undefined2 *)((int)puVar7 + 0xe) = param_5;
  puVar7[3] = puVar7[3] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)puVar7 + 0x12) = param_5;
  puVar7[4] = puVar7[4] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)puVar7 + 0x16) = uVar5;
  puVar7[5] = puVar7[5] & 0xff00ffff | 0x40000;
  return puVar7 + 6;
}

