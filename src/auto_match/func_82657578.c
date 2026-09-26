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
extern unsigned int *auStack_60;
extern int fn_82631C78();
extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82643A48();
extern int fn_82645110();
extern int fn_82645740();
extern int fn_8264DA70();
extern int fn_8264DB08();
extern int fn_82656D40();
extern int fn_82A1E650();
extern int fn_82A29FE0();
extern int fn_82F68CC0();
extern unsigned int uRam831e79a4;
extern U64 storeWordConditionalIndexed();


void fn_82657578(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  char in_RESERVE;
  byte bVar19;
  uint auStack_60 [24];
  
  iVar18 = param_1 + 0x5c1c;
  fn_82631C78(param_1,0,0x70,0x10);
  uVar12 = *(ulonglong *)(param_1 + 0x10);
  if (uVar12 != 0) {
    if ((*(ulonglong *)(param_1 + 0x28) & uVar12) != 0) {
      uVar5 = fn_826417C8(param_1,uVar12,*(undefined4 *)(param_1 + 0x2940));
      *(undefined8 *)(param_1 + 0x10) = uVar5;
    }
    if ((*(ulonglong *)(param_1 + 0x10) & 0xfff) != 0) {
      fn_82641B60(param_1,*(ulonglong *)(param_1 + 0x10) << 0x34,0x2200,param_1 + 0x2934);
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & 0xfffffffffffff000;
    }
    if ((*(ulonglong *)(param_1 + 0x10) & 0x1f000) != 0) {
      fn_82641B60(param_1,(*(ulonglong *)(param_1 + 0x10) & 0x1f000) << 0x2f,0x2180,
                        param_1 + 0x2920);
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & 0xfffffffffffe0fff;
    }
    if ((*(ulonglong *)(param_1 + 0x10) & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(*(ulonglong *)(param_1 + 0x10) & 0x3fffc0000000000) << 6,0x2000,
                        param_1 + 0x2880);
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & 0xfc0003ffffffffff;
    }
    if ((*(ulonglong *)(param_1 + 0x10) & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(*(ulonglong *)(param_1 + 0x10) & 0x3ffffe00000) << 0x16,0x2100,
                        param_1 + 0x28cc);
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & 0xfffffc00001fffff;
    }
  }
  uVar12 = *(ulonglong *)(param_1 + 0x18);
  if ((uVar12 != 0) && ((uVar12 & 0x7ffffc00000000) != 0)) {
    fn_82641B60(param_1,(uVar12 & 0x7ffffc00000000) << 9,0x2280,param_1 + 0x2964);
    *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) & 0xff800003ffffffff;
  }
  uVar12 = *(ulonglong *)(param_1 + 0x20);
  if ((uVar12 != 0) && ((uVar12 & 0x3fffffffff) != 0)) {
    fn_82641B60(param_1,uVar12 << 0x1a,0x2300,param_1 + 0x29b8);
    *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) & 0xffffffc000000000;
  }
  iVar8 = *(int *)(param_1 + 0x5e78) >> 0x1d;
  if (iVar8 == 0) {
    uVar12 = 0xffffffff8218aef0;
    uVar17 = 0x20d;
    uVar15 = 0x7000015;
  }
  else if (iVar8 == 1) {
    uVar12 = 0xffffffff8218b748;
    uVar17 = 0x3a5;
    uVar15 = 0x7000013;
  }
  else if (iVar8 == 2) {
    uVar12 = 0xffffffff8218c618;
    uVar17 = 0xd2;
    uVar15 = 0x700000f;
  }
  else {
    uVar17 = (ulonglong)auStack_60[0];
    uVar12 = (ulonglong)auStack_60[0];
    uVar15 = auStack_60[0];
  }
  lVar6 = fn_82643A48(param_1,uVar17 + 5);
  iVar8 = (int)lVar6;
  *(undefined4 *)(iVar8 + 4) = 0xc0003b00;
  *(undefined4 *)(iVar8 + 8) = 0x300;
  lVar16 = (uVar17 & 0x3fffffff) * 4;
  *(uint *)(iVar8 + 0xc) = (uint)((uVar17 + 1 & 0xffffffff) << 0x10) & 0x3fff0000 | 0xc0002b00;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  *(uint *)(lVar6 + 0x14) = (uint)uVar17 & 0x3fff;
  fn_82F68CC0(lVar6 + 0x18,uVar12,lVar16);
  uVar12 = lVar16 + lVar6 + 0x14;
  *(int *)(param_1 + 0x30) = (int)uVar12;
  if ((ulonglong)*(uint *)(param_1 + 0x38) < (uVar12 & 0xffffffff)) {
    uVar12 = fn_82645110(param_1);
  }
  iVar8 = (int)uVar12;
  *(undefined4 *)(iVar8 + 4) = 0xc0102b00;
  *(undefined4 *)(iVar8 + 8) = 1;
  *(undefined4 *)(iVar8 + 0xc) = 0xf;
  fn_82F68CC0(uVar12 + 0x10,0xffffffff8218ad04,0x3c);
  *(undefined4 *)(iVar8 + 0x4c) = 0x12180;
  *(uint *)(iVar8 + 0x50) = uVar15 | 0x10000000;
  uVar12 = uVar12 + 0x54;
  *(undefined4 *)uVar12 = 0;
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)uVar12;
  if ((ulonglong)*(uint *)(param_1 + 0x38) < (uVar12 & 0xffffffff)) {
    uVar12 = fn_82645110(param_1);
  }
  iVar8 = (int)uVar12;
  *(undefined4 *)(iVar8 + 4) = 0x22100;
  *(undefined4 *)(iVar8 + 8) = 0xffff;
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  *(undefined4 *)(iVar8 + 0x14) = 0x2293;
  *(undefined4 *)(iVar8 + 0x18) = 0;
  *(undefined4 *)(iVar8 + 0x1c) = 0x22204;
  *(undefined4 *)(iVar8 + 0x20) = 0x10000;
  *(undefined4 *)(iVar8 + 0x24) = 0x10000;
  *(undefined4 *)(iVar8 + 0x28) = 0x300;
  *(undefined4 *)(iVar8 + 0x2c) = 0x2312;
  *(undefined4 *)(iVar8 + 0x30) = 0xffff;
  *(undefined4 *)(iVar8 + 0x34) = 0x200d;
  *(undefined4 *)(iVar8 + 0x38) = 0;
  *(undefined4 *)(iVar8 + 0x3c) = 0x2200;
  puVar7 = (undefined4 *)(uVar12 + 0x40);
  *puVar7 = 0;
  *(undefined4 **)(param_1 + 0x30) = puVar7;
  if ((ulonglong)*(uint *)(param_1 + 0x38) < (uVar12 + 0x40 & 0xffffffff)) {
    puVar7 = (undefined4 *)fn_82645110(param_1);
  }
  puVar7[1] = 0x54800;
  puVar7[2] = (*(ushort *)(param_1 + 0x5d90) & 0x7fe0) << 0x11 | *(uint *)(param_2 + 0x1c) & 0x3fc |
              0x80004802;
  puVar7[3] = ((*(uint *)(param_2 + 0x20) >> 0x14) + 0x200 & 0x1000) +
              (*(uint *)(param_2 + 0x20) & 0x1fffffff);
  puVar7[4] = *(undefined4 *)(param_2 + 0x24);
  puVar7[5] = *(uint *)(param_2 + 0x28) & 0x8007ffff | 0x1000000;
  puVar7[6] = *(undefined4 *)(param_2 + 0x2c);
  puVar7[7] = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 **)(param_1 + 0x30) = puVar7 + 7;
  uVar15 = *(uint *)(param_1 + 0x5e70) >> 0x1e;
  uVar12 = (ulonglong)*(uint *)((*(uint *)(param_1 + 0x5e64) & 1) * 4 + iVar18);
  iVar8 = *(int *)(param_1 + 0x5e78) >> 0x1d;
  uVar17 = (ulonglong)(*(uint *)(param_1 + 0x5e70) >> 0x1f) * 0x600 +
           (((ulonglong)uVar15 & 1) * 0x38 + 0x20f & 0xfffffe00) + uVar12;
  if ((iVar8 == 0) || (iVar8 == 1)) {
    uVar10 = *(uint *)(param_1 + 0x5dac) & 0xc0f8 | 0x4b000600;
  }
  else {
    if (iVar8 != 2) goto code_r0x82657a6c;
    uVar10 = *(uint *)(param_1 + 0x5dac) & 0xc0f8 | 0x4b000a00;
  }
  *(uint *)(param_1 + 0x5dac) = uVar10;
  *(undefined4 *)(param_1 + 0x5da4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x5da8) = 0x4b000000;
  *(uint *)(param_1 + 0x5db0) = *(uint *)(param_1 + 0x5da0) & 0x7fffff | 0x4b000000;
code_r0x82657a6c:
  iVar8 = fn_82643A48(param_1,0x31);
  *(undefined4 *)(iVar8 + 4) = 0x2f4000;
  fn_82F68CC0(iVar8 + 8,(undefined4 *)(param_1 + 0x5da4),0xc0);
  *(int *)(param_1 + 0x30) = iVar8 + 0xc4;
  bVar4 = (*(byte *)(param_1 + 0x5e7c) & 0x40) == 0;
  bVar19 = bVar4 << 1;
  if (!bVar4) {
    fn_82A1E650(*(undefined4 *)(param_1 + 0x5d88),0xffffffffffffffff);
  }
  lVar6 = (ulonglong)*(ushort *)(param_1 + 0x5c2a) * 0x200 + uVar17;
  do {
    uVar13 = (ulonglong)uRam831e79a4;
    if (in_RESERVE != '\0') {
      uRam831e79a4 = storeWordConditionalIndexed(lVar6,0,0xffffffff831e79a4);
      bVar19 = 2;
    }
  } while (!(bool)(bVar19 >> 1 & 1));
  uVar13 = (uVar13 - *(uint *)(param_1 + 0x5c24) & 0xffffffff) / 0x1800;
  if (0xd < uVar13) {
    uVar13 = 0xe;
  }
  *(int *)(param_1 + 0x5c24) = (int)lVar6;
  uVar10 = *(uint *)(param_1 + 0x5e70);
  uVar1 = *(undefined4 *)(param_1 + 0x5c2c);
  uVar9 = *(uint *)(param_1 + 0x30);
  uVar2 = *(uint *)(param_1 + 0x38);
  puVar7 = *(undefined4 **)(((*(int *)(param_1 + 0x5e64) + -1) * 4 & 4U) + iVar18);
  *(uint *)(param_1 + 0x2898) =
       ((int)((uVar17 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((uint)uVar17 & 0x1fffffff);
  *puVar7 = 0x9b58e71a;
  puVar7[1] = uVar10 >> 0x1c & 3;
  puVar7[2] = uVar1;
  puVar7[3] = (int)uVar13;
  if (uVar2 < uVar9) {
    uVar9 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar9 + 4) = 0x2006;
  lVar6 = 0;
  *(undefined4 *)(uVar9 + 8) = 0;
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar9 + 8);
  *(int *)(param_1 + 0x3590) = *(int *)(param_1 + 0x3590) + 1;
  uVar17 = (ulonglong)*(uint *)(param_1 + 0x5d94);
  while( true ) {
    uVar10 = *(uint *)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x38) < uVar10) {
      uVar10 = fn_82645110(param_1);
    }
    *(undefined4 *)(uVar10 + 4) = 0x2102;
    *(int *)(uVar10 + 8) = (int)lVar6;
    uVar14 = uVar17;
    if (0xffff < (uVar17 & 0xffffffff)) {
      uVar14 = 0xfffe;
    }
    *(undefined4 *)(uVar10 + 0xc) = 0xc0003601;
    uVar17 = uVar17 - uVar14;
    puVar11 = (uint *)(uVar10 + 0x10);
    *puVar11 = (uint)((uVar14 & 0xffffffff) << 0x10) | 0x81;
    *(uint **)(param_1 + 0x30) = puVar11;
    if (uVar17 == 0) break;
    lVar6 = uVar14 + lVar6;
  }
  *(undefined4 *)(param_1 + 0x2898) = 0;
  if (*(uint **)(param_1 + 0x38) < puVar11) {
    puVar11 = (uint *)fn_82645110(param_1);
  }
  puVar11[1] = 0x2006;
  puVar11 = puVar11 + 2;
  *puVar11 = 0;
  *(uint **)(param_1 + 0x30) = puVar11;
  *(int *)(param_1 + 0x3590) = *(int *)(param_1 + 0x3590) + -1;
  if (*(uint **)(param_1 + 0x38) < puVar11) {
    puVar11 = (uint *)fn_82645110(param_1);
  }
  puVar11[1] = 0xc0004600;
  puVar11[2] = 6;
  *(uint **)(param_1 + 0x30) = puVar11 + 2;
  uVar17 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = uVar17 | 8;
  *(ulonglong *)(param_1 + 0x10) = uVar17 | 0x80008;
  *(ulonglong *)(param_1 + 0x10) = uVar17 | 0x180008;
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) | 0xfe000000;
  uVar17 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = uVar17 | 0x800;
  *(ulonglong *)(param_1 + 0x10) = uVar17 | 0x900;
  uVar1 = *(undefined4 *)(param_1 + 0x2a9c);
  uVar3 = *(undefined4 *)(param_1 + 0x5e68);
  *(undefined4 *)(param_1 + 0x2ab0) = uVar1;
  fn_82645110(param_1);
  *(undefined4 *)(param_1 + 0x5e68) = uVar1;
  fn_82631C78(param_1,0,0,0);
  fn_82631C78(param_1,0,0,0);
  lVar6 = uVar12 + 0x10;
  *(uint *)(param_1 + 0x5e70) = uVar15 << 0x1c | *(uint *)(param_1 + 0x5e70) & 0xcfffffff;
  if ((uVar15 & 1) != 0) {
    fn_82F68CC0(lVar6,param_1 + 0x3670,0x38);
    lVar6 = uVar12 + 0x48;
  }
  lVar6 = ((lVar6 - uVar12) + 0x1ff & 0xfffffe00) + uVar12;
  if ((uVar15 & 2) != 0) {
    if ((*(byte *)(param_1 + 0x5e74) & 0x80) == 0) {
      fn_8264DA70(*(undefined4 *)(param_1 + 0x5e6c),*(undefined4 *)(param_1 + 0x5e6c),1);
    }
    else {
      fn_8264DB08();
    }
    fn_82F68CC0(lVar6,*(undefined4 *)(param_1 + 0x5e6c),0x600);
    lVar6 = lVar6 + 0x600;
  }
  uVar12 = (uVar13 * 0xc + (ulonglong)*(ushort *)(param_1 + 0x5c28)) * 0x200 & 0xfffffe00;
  uVar10 = *(uint *)((*(uint *)(param_1 + 0x5e64) & 1) * 4 + iVar18);
  *(uint *)(param_1 + 0x5e70) = uVar15 << 0x1a | *(uint *)(param_1 + 0x5e70) & 0x3fffffff;
  *(short *)(param_1 + 0x5c28) =
       (short)((lVar6 - (ulonglong)uVar10 & 0xffffffff) >> 9) + *(short *)(param_1 + 0x5c2a);
  if ((*(byte *)(param_1 + 0x5e7c) & 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x5d84) = 0;
    *(undefined4 *)(param_1 + 0x5d80) = *(undefined4 *)(param_1 + 0x5d98);
    fn_82645740(uVar3);
    fn_82A29FE0(*(undefined4 *)
                       (((*(uint *)(param_1 + 0x5e70) >> 0x14 & 0x3f) + 5) * 4 + iVar18),
                      *(undefined4 *)(((*(int *)(param_1 + 0x5e64) + -1) * 4 & 4U) + iVar18),uVar12,
                      auStack_60,param_1 + 0x5d78);
    *(byte *)(param_1 + 0x5e7c) = *(byte *)(param_1 + 0x5e7c) | 0x40;
    fn_82656D40(iVar18,uVar12);
  }
  *(byte *)(param_1 + 0x5e7c) = *(byte *)(param_1 + 0x5e7c) | 0x80;
  *(int *)(param_1 + 0x5e64) = *(int *)(param_1 + 0x5e64) + 1;
  return;
}

