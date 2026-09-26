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
extern int fn_82AB15D0();


uint * fn_82B721F8(ushort *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  
  uVar3 = 4;
  uVar2 = *param_1 & 0x1fff;
  if ((*param_1 & 0x1fff) != 0) {
    if (uVar2 != 1) {
      if (2 < uVar2) {
        if (uVar2 != 3) {
          if (4 < uVar2) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x164c);
            return param_2;
          }
          uVar3 = 3;
        }
        uVar3 = uVar3 - 1;
      }
      uVar4 = 0;
      if (uVar3 == 0) {
        return param_2;
      }
      do {
        *(undefined2 *)((int)param_2 + 2) = 0x22;
        *param_2 = *param_2 & 0xe000ffff;
        *(short *)((int)param_2 + 6) = (short)*(undefined4 *)(param_1 + 2);
        uVar8 = *(uint *)(param_1 + 2);
        uVar1 = param_2[1];
        param_2[1] = uVar8 & 0x3f0000 | uVar1 & 0xffc0ffff;
        param_2[1] = *(uint *)(param_1 + 2) & 0x800000 | uVar8 & 0x3f0000 | uVar1 & 0xff40ffff |
                     0x400000;
        puVar9 = param_2 + 2;
        uVar1 = *puVar9;
        uVar8 = *(uint *)(param_1 + 4);
        *puVar9 = uVar1 & 0xfffffeff | uVar8 & 0x100;
        *puVar9 = uVar1 & 0xffffe0ff | uVar8 & 0x100 | *(uint *)(param_1 + 4) & 0x1e00;
        if (uVar4 == 0) {
          uVar8 = *(uint *)(param_1 + 4) & 3;
        }
        else {
          uVar8 = 0;
        }
        uVar1 = *puVar9;
        *puVar9 = uVar1 & 0xfffffffc | uVar8;
        if (uVar4 == 1) {
          uVar5 = *(uint *)(param_1 + 4) >> 2 & 3;
        }
        else {
          uVar5 = 0;
        }
        uVar5 = uVar5 << 2;
        *puVar9 = uVar5 | uVar1 & 0xfffffff0 | uVar8;
        if (uVar4 == 2) {
          uVar6 = *(uint *)(param_1 + 4) >> 4 & 3;
        }
        else {
          uVar6 = 0;
        }
        *puVar9 = uVar6 << 4 | uVar5 | uVar1 & 0xffffffc0 | uVar8;
        if (uVar4 == 3) {
          uVar7 = *(uint *)(param_1 + 4) >> 6 & 3;
        }
        else {
          uVar7 = 0;
        }
        *puVar9 = uVar7 << 6 | uVar6 << 4 | uVar5 | uVar1 & 0xffffff00 | uVar8;
        puVar9 = param_2 + 3;
        if ((*(uint *)(param_1 + 2) & 0x800000) != 0) {
          *puVar9 = *(uint *)(param_1 + 6);
          puVar9 = param_2 + 4;
        }
        *(short *)((int)puVar9 + 2) = (short)*(undefined4 *)(param_1 + 8);
        uVar8 = *puVar9;
        uVar5 = *(uint *)(param_1 + 8) & 0x3f0000;
        *puVar9 = uVar8 & 0xffc0ffff | uVar5;
        uVar1 = *(uint *)(param_1 + 8);
        *puVar9 = uVar8 & 0xff40ffff | uVar5 | uVar1 & 0x800000;
        *puVar9 = uVar8 & 0xff00ffff | uVar5 | uVar1 & 0x800000 | *(uint *)(param_1 + 8) & 0x400000;
        puVar10 = puVar9 + 1;
        if ((*(uint *)(param_1 + 8) & 0x400000) != 0) {
          *puVar10 = *(uint *)(param_1 + 0xe);
          puVar10 = puVar9 + 2;
        }
        if ((*(uint *)(param_1 + 8) & 0x800000) != 0) {
          *puVar10 = *(uint *)(param_1 + 0x14);
          puVar10 = puVar10 + 1;
        }
        param_2 = puVar10 + 1;
        *(short *)((int)puVar10 + 2) = (short)*(undefined4 *)(param_1 + 10) + (short)uVar4;
        uVar8 = *(uint *)(param_1 + 10);
        uVar1 = *puVar10;
        *puVar10 = uVar1 & 0xffc0ffff | uVar8 & 0x3f0000;
        *puVar10 = uVar1 & 0xff40ffff | uVar8 & 0x3f0000 | *(uint *)(param_1 + 10) & 0x800000;
        *puVar10 = *puVar10 & 0xffbfffff | *(uint *)(param_1 + 10) & 0x400000;
        if ((*(uint *)(param_1 + 10) & 0x400000) != 0) {
          *param_2 = *(uint *)(param_1 + 0x10);
          param_2 = puVar10 + 2;
        }
        if ((*(uint *)(param_1 + 10) & 0x800000) != 0) {
          *param_2 = *(uint *)(param_1 + 0x16);
          param_2 = param_2 + 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
      return param_2;
    }
    uVar3 = 3;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      *(undefined2 *)((int)param_2 + 2) = 0x23;
      *param_2 = *param_2 & 0xe000ffff;
      *(short *)((int)param_2 + 6) = (short)*(undefined4 *)(param_1 + 2);
      param_2[1] = *(uint *)(param_1 + 2) & 0x3f0000 | param_2[1] & 0xffc0ffff;
      param_2[1] = *(uint *)(param_1 + 2) & 0x800000 | param_2[1] & 0xff7fffff | 0x400000;
      puVar9 = param_2 + 2;
      uVar1 = *puVar9;
      uVar8 = *(uint *)(param_1 + 4);
      *puVar9 = uVar1 & 0xfffffeff | uVar8 & 0x100;
      *puVar9 = uVar1 & 0xffffe0ff | uVar8 & 0x100 | *(uint *)(param_1 + 4) & 0x1e00;
      if (uVar4 == 0) {
        uVar8 = *(uint *)(param_1 + 4) & 3;
      }
      else {
        uVar8 = 0;
      }
      uVar1 = *puVar9;
      *puVar9 = uVar1 & 0xfffffffc | uVar8;
      if (uVar4 == 1) {
        uVar5 = *(uint *)(param_1 + 4) >> 2 & 3;
      }
      else {
        uVar5 = 0;
      }
      uVar5 = uVar5 << 2;
      *puVar9 = uVar5 | uVar1 & 0xfffffff0 | uVar8;
      if (uVar4 == 2) {
        uVar6 = *(uint *)(param_1 + 4) >> 4 & 3;
      }
      else {
        uVar6 = 0;
      }
      *puVar9 = uVar6 << 4 | uVar5 | uVar1 & 0xffffffc0 | uVar8;
      if (uVar4 == 3) {
        uVar7 = *(uint *)(param_1 + 4) >> 6 & 3;
      }
      else {
        uVar7 = 0;
      }
      *puVar9 = uVar7 << 6 | uVar6 << 4 | uVar5 | uVar1 & 0xffffff00 | uVar8;
      puVar9 = param_2 + 3;
      if ((*(uint *)(param_1 + 2) & 0x800000) != 0) {
        *puVar9 = *(uint *)(param_1 + 6);
        puVar9 = param_2 + 4;
      }
      *(short *)((int)puVar9 + 2) = (short)*(undefined4 *)(param_1 + 8);
      uVar8 = *puVar9;
      uVar5 = *(uint *)(param_1 + 8) & 0x3f0000;
      *puVar9 = uVar8 & 0xffc0ffff | uVar5;
      uVar1 = *(uint *)(param_1 + 8);
      *puVar9 = uVar8 & 0xff40ffff | uVar5 | uVar1 & 0x800000;
      *puVar9 = uVar8 & 0xff00ffff | uVar5 | uVar1 & 0x800000 | *(uint *)(param_1 + 8) & 0x400000;
      puVar10 = puVar9 + 1;
      if ((*(uint *)(param_1 + 8) & 0x400000) != 0) {
        *puVar10 = *(uint *)(param_1 + 0xe);
        puVar10 = puVar9 + 2;
      }
      if ((*(uint *)(param_1 + 8) & 0x800000) != 0) {
        *puVar10 = *(uint *)(param_1 + 0x14);
        puVar10 = puVar10 + 1;
      }
      param_2 = puVar10 + 1;
      *(short *)((int)puVar10 + 2) = (short)*(undefined4 *)(param_1 + 10) + (short)uVar4;
      uVar8 = *puVar10;
      uVar5 = *(uint *)(param_1 + 10) & 0x3f0000;
      *puVar10 = uVar8 & 0xffc0ffff | uVar5;
      uVar1 = *(uint *)(param_1 + 10);
      *puVar10 = uVar8 & 0xff40ffff | uVar5 | uVar1 & 0x800000;
      *puVar10 = uVar8 & 0xff00ffff | uVar5 | uVar1 & 0x800000 | *(uint *)(param_1 + 10) & 0x400000;
      if ((*(uint *)(param_1 + 10) & 0x400000) != 0) {
        *param_2 = *(uint *)(param_1 + 0x10);
        param_2 = puVar10 + 2;
      }
      if ((*(uint *)(param_1 + 10) & 0x800000) != 0) {
        *param_2 = *(uint *)(param_1 + 0x16);
        param_2 = param_2 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return param_2;
}

