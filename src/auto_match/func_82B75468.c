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


uint * fn_82B75468(uint *param_1,uint *param_2,uint *param_3,undefined2 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  *(undefined2 *)((int)param_5 + 2) = 3;
  *param_5 = *param_5 & 0xe000ffff;
  *(undefined2 *)((int)param_5 + 6) = param_4;
  puVar9 = param_5 + 2;
  param_5[1] = param_5[1] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)param_5 + 10) = 0;
  *puVar9 = *puVar9 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar9 = 1;
  param_5[3] = param_5[3] & 0xffff9999 | 0x1111;
  puVar9 = param_5 + 4;
  *(short *)((int)param_5 + 0x12) = (short)*param_1;
  uVar1 = *puVar9;
  uVar2 = *param_1;
  *puVar9 = uVar1 & 0xffc0ffff | uVar2 & 0x3f0000;
  *puVar9 = uVar1 & 0xff40ffff | uVar2 & 0x3f0000 | *param_1 & 0x800000 | 0x400000;
  puVar9 = param_5 + 5;
  uVar2 = *puVar9;
  uVar3 = *param_2 & 7;
  *puVar9 = uVar2 & 0xfffffff8 | uVar3;
  uVar4 = *param_2 & 0x70;
  *puVar9 = uVar2 & 0xffffff88 | uVar3 | uVar4;
  uVar5 = *param_2 & 0x700;
  *puVar9 = uVar2 & 0xfffff888 | uVar3 | uVar4 | uVar5;
  uVar6 = *param_2 & 0x7000;
  *puVar9 = uVar2 & 0xffff8888 | uVar3 | uVar4 | uVar5 | uVar6;
  uVar7 = ~*param_2 & 8;
  *puVar9 = uVar2 & 0xffff8880 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
  uVar8 = ~*param_2 & 0x80;
  *puVar9 = uVar2 & 0xffff8800 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8;
  uVar1 = *param_2;
  *puVar9 = uVar2 & 0xffff8000 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | ~uVar1 & 0x800;
  *puVar9 = uVar2 & 0xffff0000 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | ~uVar1 & 0x800 |
            ~*param_2 & 0x8000;
  if ((*param_1 & 0x800000) == 0) {
    return param_5 + 6;
  }
  param_5[6] = *param_3;
  return param_5 + 7;
}

