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


uint * fn_82B76170(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar10 = 3;
  uVar7 = 0;
  puVar13 = (uint *)(param_2 + 0x10);
  do {
    if ((*puVar13 & 0x800000) != 0) {
      uVar10 = *(uint *)((uVar7 + 10) * 4 + param_2) >> 0x11 & 7;
      break;
    }
    uVar7 = uVar7 + 1;
    puVar13 = puVar13 + 1;
  } while (uVar7 < 3);
  *param_4 = *param_3;
  param_4[1] = param_3[1];
  uVar7 = (uint)param_3[2] >> 0x17 & 1;
  param_4[2] = param_3[2];
  puVar11 = param_3 + 4;
  param_4[3] = param_3[3];
  puVar8 = param_4 + 4;
  if (uVar7 != 0) {
    uVar2 = *puVar11;
    puVar11 = param_3 + 5;
    *puVar8 = uVar2;
    puVar8 = param_4 + 5;
  }
  *puVar8 = *puVar11;
  puVar12 = puVar11 + 2;
  puVar8[1] = puVar11[1];
  puVar9 = puVar8 + 2;
  if (uVar7 != 0) {
    uVar2 = *puVar12;
    puVar12 = puVar11 + 3;
    *puVar9 = uVar2;
    puVar9 = puVar8 + 3;
  }
  *puVar9 = *puVar12;
  uVar7 = puVar12[1] | 0x400000;
  puVar12[1] = uVar7;
  puVar9[1] = uVar7;
  puVar9[2] = 0;
  uVar7 = puVar12[2];
  puVar13 = puVar12 + 3;
  puVar6 = puVar9 + 4;
  *(short *)((int)puVar9 + 0xe) = (short)*(undefined4 *)(iVar1 + 0x5b38);
  puVar9[3] = puVar9[3] & 0xff00ffff | 0x440000;
  if ((uVar7 >> 0x16 & 1) == 0) {
    *puVar6 = uVar10 << 0xc | *puVar6 & 0xffff8fff;
    goto LAB_82b763e4;
  }
  *puVar6 = *puVar13;
  if (uVar10 == 0) {
    uVar10 = *puVar6;
    uVar3 = (*puVar13 & 7) << 0xc;
    *puVar6 = uVar3 | uVar10 & 0xffff8fff;
    *puVar6 = uVar3 | uVar10 & 0xffff8ff8 | *puVar13 & 7;
    uVar10 = *puVar6;
    uVar3 = (*puVar13 & 7) << 4;
    *puVar6 = uVar3 | uVar10 & 0xffffff8f;
    uVar10 = (*puVar13 & 7) << 8 | uVar3 | uVar10 & 0xfffff88f;
LAB_82b763cc:
    *puVar6 = uVar10;
  }
  else {
    if (uVar10 == 1) {
      uVar10 = *puVar6;
      uVar3 = (*puVar13 & 0x70) << 8;
      *puVar6 = uVar3 | uVar10 & 0xffff8fff;
      uVar4 = *puVar13 >> 4 & 7;
      *puVar6 = uVar4 | uVar3 | uVar10 & 0xffff8ff8;
      *puVar6 = uVar4 | uVar3 | uVar10 & 0xffff8f88 | *puVar13 & 0x70;
      uVar10 = (*puVar13 & 0x70) << 4 | *puVar6 & 0xfffff8ff;
      goto LAB_82b763cc;
    }
    if (uVar10 < 3) {
      uVar10 = *puVar6;
      uVar3 = (*puVar13 & 0x700) << 4;
      *puVar6 = uVar3 | uVar10 & 0xffff8fff;
      uVar4 = *puVar13 >> 8 & 7;
      *puVar6 = uVar4 | uVar3 | uVar10 & 0xffff8ff8;
      uVar5 = *puVar13 >> 4 & 0x70;
      *puVar6 = uVar5 | uVar4 | uVar3 | uVar10 & 0xffff8f88;
      *puVar6 = uVar5 | uVar4 | uVar3 | uVar10 & 0xffff8888 | *puVar13 & 0x700;
    }
    else {
      if (uVar10 == 3) {
        uVar10 = *puVar6;
        uVar3 = *puVar13;
        *puVar6 = uVar10 & 0xffff8fff | uVar3 & 0x7000;
        *puVar6 = *puVar13 >> 0xc & 7 | uVar10 & 0xffff8ff8 | uVar3 & 0x7000;
        uVar10 = *puVar6;
        uVar3 = *puVar13 >> 8 & 0x70;
        *puVar6 = uVar3 | uVar10 & 0xffffff8f;
        uVar10 = *puVar13 >> 4 & 0x700 | uVar3 | uVar10 & 0xfffff88f;
        goto LAB_82b763cc;
      }
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x2e72);
    }
  }
  puVar13 = puVar12 + 4;
LAB_82b763e4:
  puVar6 = puVar9 + 5;
  if ((uVar7 >> 0x17 & 1) != 0) {
    *puVar6 = *puVar13;
    puVar6 = puVar9 + 6;
  }
  *param_5 = *param_5 + 2;
  return puVar6;
}

