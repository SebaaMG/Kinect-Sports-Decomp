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
extern unsigned int *auStack_70;
extern int fn_826518E0();
extern int fn_82651A90();
extern int fn_82A2ABE0();
extern __int64 lRam83275b70;
extern __int64 lRam83275dc0;
extern unsigned int lbl_83275B68;
extern unsigned int lbl_83275DB8;
extern unsigned int uRam83275d90;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_78;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82651AF8(undefined8 param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar6;
  longlong lVar5;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uStack_78;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  iVar3 = (int)param_1;
  uStack_6c = *(undefined4 *)(iVar3 + 0x5528);
  uStack_68 = *(undefined4 *)(iVar3 + 0x5524);
  puVar9 = &uStack_78;
  lVar14 = 8;
  do {
    puVar9 = puVar9 + 1;
    *puVar9 = 0;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  uVar2 = *(uint *)(iVar3 + 0x5550);
  uVar6 = uStack_48 | 0xffff;
  uStack_64 = *(undefined4 *)(iVar3 + 0x5520);
  uStack_58 = *(undefined4 *)(iVar3 + 0x4188);
  uStack_54 = *(undefined4 *)(iVar3 + 0x5548);
  uStack_60 = *(undefined4 *)(iVar3 + 0x5530);
  uStack_50 = *(undefined4 *)(iVar3 + 0x554c);
  uStack_4c = *(undefined4 *)(iVar3 + 0x5c10);
  uStack_5c = *(undefined4 *)(iVar3 + 0x552c);
  iVar10 = *(int *)(iVar3 + 0x2a90);
  pbVar1 = (byte *)(((uVar2 & 7) + 0x10) * 4 + iVar10);
  uVar7 = (ulonglong)pbVar1[3] << 0x18 | (ulonglong)pbVar1[2] << 0x10 | (ulonglong)pbVar1[1] << 8 |
          (ulonglong)*pbVar1;
  pbVar1 = (byte *)(((uVar2 + 1 & 7) + 0x10) * 4 + iVar10);
  uVar11 = (ulonglong)pbVar1[3] << 0x18 | (ulonglong)pbVar1[2] << 0x10 | (ulonglong)pbVar1[1] << 8 |
           (ulonglong)*pbVar1;
  pbVar1 = (byte *)(((uVar2 - 1 & 7) + 0x10) * 4 + iVar10);
  uVar4 = (ulonglong)pbVar1[3] << 0x18 | (ulonglong)pbVar1[2] << 0x10 | (ulonglong)pbVar1[1] << 8 |
          (ulonglong)*pbVar1;
  uStack_48 = uVar6;
  if (((uVar11 != 0) && (*(uint *)(iVar3 + 0x5550) = uVar2 + 2, uVar7 != 0)) && (uVar4 != 0)) {
    if (uVar7 <= uVar4) {
      uVar7 = uVar7 + 0x100000000;
    }
    if (uVar11 <= uVar7) {
      uVar11 = uVar11 + 0x100000000;
    }
    uVar2 = fn_82651A90(uVar11 - uVar7,uVar11 - uVar4);
    uStack_48 = uVar6 & 0xffff0000 | uVar2 & 0xffff;
  }
  iVar3 = fn_826518E0(param_1);
  if (iVar3 == 0) {
    uStack_34 = 0xffffffff;
    uStack_48 = uStack_48 | 0xffff0000;
    uStack_44 = 0xffffffff;
    uStack_40 = 0xffffffff;
    uStack_3c = 0xffffffff;
    uStack_38 = 0xffffffff;
  }
  else {
    iVar10 = -0x7cd8a270;
    uVar4 = lbl_83275B68 - lbl_83275DB8;
    lVar14 = lRam83275b70 - lRam83275dc0;
    iVar3 = fn_82651A90(lVar14 - (ulonglong)uRam83275d90,uVar4);
    uStack_48 = iVar3 << 0x10 | uStack_48 & 0xffff;
    uVar2 = fn_82651A90(lVar14);
    lVar8 = *(longlong *)(iVar10 + 0xa8);
    lVar5 = *(longlong *)(iVar10 + -0x1a8);
    lVar12 = *(longlong *)(iVar10 + -0x1b0) - *(longlong *)(iVar10 + 0xa0);
    iVar3 = fn_82651A90(lVar5 - lVar8,lVar12);
    lVar14 = *(longlong *)(iVar10 + -0x1a0);
    lVar13 = *(longlong *)(iVar10 + 0xb0);
    uStack_44 = iVar3 << 0x10 | uVar2 & 0xffff;
    uVar2 = fn_82651A90(((lVar12 - lVar14) - lVar5) + lVar13 + lVar8);
    iVar3 = fn_82651A90(lVar14 - lVar13);
    uStack_40 = iVar3 << 0x10 | uVar2 & 0xffff;
    lVar14 = ((*(longlong *)(iVar10 + -0x70) - *(longlong *)(iVar10 + 0x1e0)) -
             *(longlong *)(iVar10 + 0x1d8)) + *(longlong *)(iVar10 + -0x78);
    if (lVar14 < 0) {
      uVar2 = 0;
    }
    else if (uVar4 == 0) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = (uint)((lVar14 * 0xaaa9) / (longlong)uVar4);
      trapDoubleWordImmediate(6,uVar4,0);
      trapDoubleWordImmediate
                (5,uVar4 & ~((lVar14 * 0x15552 | (ulonglong)(lVar14 * 0xaaa9) >> 0x3f) - 1),0xffff);
    }
    lVar14 = *(longlong *)(iVar10 + -0x68) - *(longlong *)(iVar10 + 0x1e8);
    if (lVar14 < 0) {
      uVar7 = 0;
    }
    else if (uVar4 == 0) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = (lVar14 * 0xaaa9) / (longlong)uVar4 & 0xffffffff;
      trapDoubleWordImmediate(6,uVar4,0);
      trapDoubleWordImmediate
                (5,uVar4 & ~((lVar14 * 0x15552 | (ulonglong)(lVar14 * 0xaaa9) >> 0x3f) - 1),0xffff);
    }
    uStack_3c = (uint)(uVar7 << 0x10) | uVar2 & 0xffff;
    lVar14 = *(longlong *)(iVar10 + -0x140) - *(longlong *)(iVar10 + 0x110);
    if (lVar14 < 0) {
      uVar2 = 0;
    }
    else if (uVar4 == 0) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = (uint)((lVar14 * 0xaaa9) / (longlong)uVar4);
      trapDoubleWordImmediate(6,uVar4,0);
      trapDoubleWordImmediate
                (5,uVar4 & ~((lVar14 * 0x15552 | (ulonglong)(lVar14 * 0xaaa9) >> 0x3f) - 1),0xffff);
    }
    lVar14 = *(longlong *)(iVar10 + -0x1d0) - *(longlong *)(iVar10 + 0x80);
    if (lVar14 < 0) {
      uVar7 = 0;
    }
    else if (uVar4 == 0) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = (lVar14 * 0xaaa9) / (longlong)uVar4 & 0xffffffff;
      trapDoubleWordImmediate(6,uVar4,0);
      trapDoubleWordImmediate
                (5,uVar4 & ~((lVar14 * 0x15552 | (ulonglong)(lVar14 * 0xaaa9) >> 0x3f) - 1),0xffff);
    }
    uStack_38 = (uint)(uVar7 << 0x10) | uVar2 & 0xffff;
    lVar14 = *(longlong *)(iVar10 + -0x60) - *(longlong *)(iVar10 + 0x1f0);
    if (lVar14 * 2 < 0) {
      uVar2 = 0;
    }
    else if (uVar4 == 0) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = (uint)((lVar14 * 0x15552) / (longlong)uVar4);
      trapDoubleWordImmediate(6,uVar4,0);
      trapDoubleWordImmediate
                (5,uVar4 & ~((lVar14 * 0x2aaa4 | (ulonglong)(lVar14 * 0x15552) >> 0x3f) - 1),0xffff)
      ;
    }
    lVar14 = *(longlong *)(iVar10 + -0x58) - *(longlong *)(iVar10 + 0x1f8);
    if (lVar14 * 2 < 0) {
      uVar7 = 0;
    }
    else if (uVar4 == 0) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = (lVar14 * 0x15552) / (longlong)uVar4 & 0xffffffff;
      trapDoubleWordImmediate(6,uVar4,0);
      trapDoubleWordImmediate
                (5,uVar4 & ~((lVar14 * 0x2aaa4 | (ulonglong)(lVar14 * 0x15552) >> 0x3f) - 1),0xffff)
      ;
    }
    uStack_34 = (uint)(uVar7 << 0x10) | uVar2 & 0xffff;
  }
  fn_82A2ABE0(0x44336467,auStack_70,0x40);
  return;
}

