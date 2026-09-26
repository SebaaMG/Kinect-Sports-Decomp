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


uint * fn_82B74028(int param_1,uint *param_2)

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
  uint *puVar10;
  
  *(undefined2 *)((int)param_2 + 2) = 3;
  *param_2 = *param_2 & 0xe000ffff;
  param_2[1] = *(uint *)(param_1 + 4);
  puVar9 = param_2 + 2;
  if ((*(uint *)(param_1 + 4) & 0x400000) != 0) {
    *puVar9 = *(uint *)(param_1 + 8);
    puVar9 = param_2 + 3;
  }
  if ((*(uint *)(param_1 + 4) & 0x800000) != 0) {
    *puVar9 = *(uint *)(param_1 + 0xc);
    puVar9 = puVar9 + 1;
  }
  *puVar9 = *(uint *)(param_1 + 0x10);
  puVar10 = puVar9 + 1;
  if ((*(uint *)(param_1 + 0x10) & 0x400000) != 0) {
    *puVar10 = *(uint *)(param_1 + 0x1c);
    puVar10 = puVar9 + 2;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x800000) != 0) {
    *puVar10 = *(uint *)(param_1 + 0x28);
    puVar10 = puVar10 + 1;
  }
  *(short *)((int)puVar10 + 2) = (short)*(undefined4 *)(param_1 + 0x14);
  uVar1 = *puVar10;
  uVar2 = *(uint *)(param_1 + 0x14) & 0x3f0000;
  *puVar10 = uVar1 & 0xffc0ffff | uVar2;
  *puVar10 = uVar1 & 0xff40ffff | uVar2 | *(uint *)(param_1 + 0x14) & 0x800000 | 0x400000;
  puVar9 = puVar10 + 1;
  uVar1 = *puVar9;
  uVar6 = *(uint *)(param_1 + 0x20) & 7;
  *puVar9 = uVar6 | uVar1 & 0xfffffff8;
  uVar7 = *(uint *)(param_1 + 0x20) & 0x70;
  *puVar9 = uVar7 | uVar6 | uVar1 & 0xffffff88;
  uVar8 = *(uint *)(param_1 + 0x20) & 0x700;
  *puVar9 = uVar8 | uVar7 | uVar6 | uVar1 & 0xfffff888;
  uVar2 = *(uint *)(param_1 + 0x20) & 0x7000;
  *puVar9 = uVar8 | uVar7 | uVar6 | uVar1 & 0xffff8888 | uVar2;
  uVar3 = ~*(uint *)(param_1 + 0x20) & 8;
  *puVar9 = uVar8 | uVar7 | uVar6 | uVar1 & 0xffff8880 | uVar2 | uVar3;
  uVar4 = ~*(uint *)(param_1 + 0x20) & 0x80;
  *puVar9 = uVar8 | uVar7 | uVar6 | uVar1 & 0xffff8800 | uVar2 | uVar3 | uVar4;
  uVar5 = ~*(uint *)(param_1 + 0x20) & 0x800;
  *puVar9 = uVar8 | uVar7 | uVar6 | uVar1 & 0xffff8000 | uVar2 | uVar3 | uVar4 | uVar5;
  *puVar9 = uVar8 | uVar7 | uVar6 | uVar1 & 0xffff0000 | uVar2 | uVar3 | uVar4 | uVar5 |
            ~*(uint *)(param_1 + 0x20) & 0x8000;
  if ((*(uint *)(param_1 + 0x10) & 0x800000) == 0) {
    return puVar10 + 2;
  }
  puVar10[2] = *(uint *)(param_1 + 0x28);
  return puVar10 + 3;
}

