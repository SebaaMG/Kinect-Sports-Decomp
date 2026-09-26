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


uint * fn_82B75BC0(uint *param_1,uint *param_2,uint *param_3,undefined2 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  *(undefined2 *)((int)param_5 + 2) = 0x49;
  *param_5 = *param_5 & 0xe000ffff;
  *(undefined2 *)((int)param_5 + 6) = param_4;
  param_5[1] = param_5[1] & 0xff00ffff | 0x40000;
  puVar5 = param_5 + 2;
  *(short *)((int)param_5 + 10) = (short)*param_1;
  uVar4 = *puVar5;
  uVar1 = *param_1;
  *puVar5 = uVar4 & 0xffc0ffff | uVar1 & 0x3f0000;
  *puVar5 = uVar4 & 0xff40ffff | uVar1 & 0x3f0000 | *param_1 & 0x800000 | 0x400000;
  puVar5 = param_5 + 3;
  uVar1 = *puVar5;
  uVar2 = *param_2 & 7;
  *puVar5 = uVar1 & 0xfffffff8 | uVar2;
  uVar3 = *param_2 & 0x70;
  *puVar5 = uVar1 & 0xffffff88 | uVar2 | uVar3;
  uVar4 = *param_2;
  *puVar5 = uVar1 & 0xfffff888 | uVar2 | uVar3 | uVar4 & 0x700;
  *puVar5 = uVar1 & 0xffff8888 | uVar2 | uVar3 | uVar4 & 0x700 | *param_2 & 0x7000;
  puVar5 = param_5 + 4;
  if ((*param_1 & 0x800000) != 0) {
    *puVar5 = *param_3;
    puVar5 = param_5 + 5;
  }
  *(undefined2 *)((int)puVar5 + 2) = 0;
  *puVar5 = *puVar5 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar5 = 1;
  puVar6 = puVar5 + 1;
  if ((*param_2 & 8) == 0) {
    uVar4 = *puVar6 & 0xfffffff8 | 1;
  }
  else {
    uVar4 = *puVar6 & 0xfffffff8 | 3;
  }
  *puVar6 = uVar4;
  if ((*param_2 & 0x80) == 0) {
    uVar4 = *puVar6 & 0xffffff8f | 0x10;
  }
  else {
    uVar4 = *puVar6 & 0xffffff8f | 0x30;
  }
  *puVar6 = uVar4;
  if ((*param_2 & 0x800) == 0) {
    uVar4 = *puVar6 & 0xfffff8ff | 0x100;
  }
  else {
    uVar4 = *puVar6 & 0xfffff8ff | 0x300;
  }
  *puVar6 = uVar4;
  if ((*param_2 & 0x8000) == 0) {
    *puVar6 = *puVar6 & 0xffff8fff | 0x1000;
  }
  else {
    *puVar6 = *puVar6 & 0xffff8fff | 0x3000;
  }
  return puVar5 + 2;
}

