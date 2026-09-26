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


uint * fn_82B70070(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  uVar4 = fn_82B6EA60();
  uVar7 = *param_2;
  *(undefined2 *)((int)param_3 + 2) = 3;
  *param_3 = *param_3 & 0xe000ffff;
  *(undefined2 *)((int)param_3 + 6) = uVar4;
  uVar1 = uVar7 >> 0x16 & 7;
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  uVar7 = uVar7 >> 0x10 & 7;
  lVar6 = 0;
  param_3[2] = param_2[4];
  puVar8 = param_3 + 3;
  if ((param_2[4] & 0x400000) != 0) {
    *puVar8 = param_2[7];
    puVar8 = param_3 + 4;
  }
  if ((param_2[4] & 0x800000) != 0) {
    *puVar8 = param_2[10];
    puVar8 = puVar8 + 1;
  }
  if (uVar1 == 0) {
    lVar6 = 0;
  }
  else if (uVar1 == 1) {
LAB_82b70134:
    lVar6 = 2;
  }
  else {
    if (2 < uVar1) {
      if (uVar1 == 3) goto LAB_82b70134;
      if (4 < uVar1) goto LAB_82b70140;
    }
    lVar6 = 1;
  }
LAB_82b70140:
  *(undefined2 *)((int)puVar8 + 2) = 0;
  *puVar8 = *puVar8 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar8 = 1;
  puVar9 = puVar8 + 1;
  uVar5 = *puVar9;
  uVar3 = (uint)(lVar6 << 4);
  uVar2 = (uint)(lVar6 << 8);
  *puVar9 = uVar2 | uVar3 | uVar5 & 0xfffff888 | (uint)lVar6;
  uVar5 = (uint)(lVar6 << 0xc) | uVar2 | uVar3 | uVar5 & 0xffff8888 | (uint)lVar6;
  *puVar9 = uVar5;
  if (uVar1 < 3) {
    *puVar9 = uVar5 | 0x8888;
  }
  puVar9 = puVar8 + 2;
  if (uVar7 != 0) {
    if (uVar7 < 4) {
      *puVar9 = *param_2;
      puVar8[3] = param_2[1];
      puVar9 = puVar8 + 4;
      if ((param_2[1] & 0x400000) != 0) {
        *puVar9 = param_2[2];
        puVar9 = puVar8 + 5;
      }
      if ((param_2[1] & 0x800000) != 0) {
        *puVar9 = param_2[3];
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)((int)puVar9 + 2) = uVar4;
      *puVar9 = *puVar9 & 0xff00ffff | 0x40000;
      puVar9[1] = param_2[5];
      puVar8 = puVar9 + 2;
      if ((param_2[5] & 0x400000) != 0) {
        *puVar8 = param_2[8];
        puVar8 = puVar9 + 3;
      }
      if ((param_2[5] & 0x800000) != 0) {
        *puVar8 = param_2[0xb];
        puVar8 = puVar8 + 1;
      }
      puVar9 = puVar8 + 1;
      *puVar8 = param_2[6];
      if ((param_2[6] & 0x400000) != 0) {
        *puVar9 = param_2[9];
        puVar9 = puVar8 + 2;
      }
      if ((param_2[6] & 0x800000) == 0) {
        return puVar9;
      }
      uVar7 = param_2[0xc];
      goto LAB_82b70400;
    }
    if (5 < uVar7) {
      return puVar9;
    }
  }
  *(undefined2 *)((int)puVar8 + 10) = 0xd;
  uVar1 = *puVar9;
  if (uVar7 == 0) {
    uVar7 = uVar1 & 0xe000ffff | 0x10000;
  }
  else if (uVar7 == 5) {
    uVar7 = uVar1 & 0xe000ffff | 0x20000;
  }
  else {
    uVar7 = uVar1 & 0xe000ffff | 0x30000;
  }
  *puVar9 = uVar7;
  puVar9 = puVar8 + 3;
  *(short *)((int)puVar8 + 0xe) = (short)param_2[1];
  uVar7 = *puVar9;
  uVar5 = param_2[1] & 0x3f0000;
  *puVar9 = uVar7 & 0xffc0ffff | uVar5;
  uVar1 = param_2[1];
  *puVar9 = uVar7 & 0xff40ffff | uVar5 | uVar1 & 0x800000;
  *puVar9 = uVar7 & 0xff00ffff | uVar5 | uVar1 & 0x800000 | param_2[1] & 0x400000;
  puVar9 = puVar8 + 4;
  if ((param_2[1] & 0x400000) != 0) {
    *puVar9 = param_2[2];
    puVar9 = puVar8 + 5;
  }
  if ((param_2[1] & 0x800000) != 0) {
    *puVar9 = param_2[3];
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)((int)puVar9 + 2) = uVar4;
  *puVar9 = *puVar9 & 0xff00ffff | 0x40000;
  puVar8 = puVar9 + 1;
  *(short *)((int)puVar9 + 6) = (short)param_2[6];
  uVar7 = *puVar8;
  uVar5 = param_2[6] & 0x3f0000;
  *puVar8 = uVar7 & 0xffc0ffff | uVar5;
  uVar1 = param_2[6];
  *puVar8 = uVar7 & 0xff40ffff | uVar5 | uVar1 & 0x800000;
  *puVar8 = uVar7 & 0xff00ffff | uVar5 | uVar1 & 0x800000 | param_2[6] & 0x400000;
  puVar8 = puVar9 + 2;
  if ((param_2[6] & 0x400000) != 0) {
    *puVar8 = param_2[9];
    puVar8 = puVar9 + 3;
  }
  if ((param_2[6] & 0x800000) != 0) {
    *puVar8 = param_2[0xc];
    puVar8 = puVar8 + 1;
  }
  puVar9 = puVar8 + 1;
  *(short *)((int)puVar8 + 2) = (short)param_2[5];
  uVar7 = *puVar8;
  uVar5 = param_2[5] & 0x3f0000;
  *puVar8 = uVar7 & 0xffc0ffff | uVar5;
  uVar1 = param_2[5];
  *puVar8 = uVar7 & 0xff40ffff | uVar5 | uVar1 & 0x800000;
  *puVar8 = uVar7 & 0xff00ffff | uVar5 | uVar1 & 0x800000 | param_2[5] & 0x400000;
  if ((param_2[5] & 0x400000) != 0) {
    *puVar9 = param_2[8];
    puVar9 = puVar8 + 2;
  }
  if ((param_2[5] & 0x800000) == 0) {
    return puVar9;
  }
  uVar7 = param_2[0xb];
LAB_82b70400:
  *puVar9 = uVar7;
  return puVar9 + 1;
}

