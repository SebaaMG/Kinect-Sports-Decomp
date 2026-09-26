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
#define TBLr 0
extern unsigned int *auStack_180;
extern unsigned int *auStack_1dc;
extern unsigned int *auStack_e0;
extern int fn_82637398();
extern int fn_82643A48();
extern int fn_826441E0();
extern int fn_82645110();
extern int fn_826452A8();
extern int fn_82646E80();
extern int fn_82646F48();
extern int fn_82647258();
extern int fn_82647C20();
extern int fn_82647DE8();
extern int fn_82647F88();
extern int fn_826517A0();
extern int fn_82652BA8();
extern int fn_82655F40();
extern int fn_82657E40();
extern int fn_82657F88();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern int fn_8314267C();
extern int fn_8314268C();
extern int fn_8314278C();
extern int iRam83282400;
extern unsigned int iStack_164;
extern unsigned int iStack_178;
extern unsigned int iStack_1e8;
extern unsigned int iStack_1ec;
extern unsigned int iStack_1f0;
extern unsigned int iStack_f0;
extern unsigned int lbl_832823F8;
extern unsigned int uStack_17c;
extern unsigned int uStack_190;
extern unsigned int uStack_198;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1c4;
extern unsigned int uStack_1c8;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1e4;
extern unsigned int uStack_8a;
extern unsigned int uStack_96;
extern unsigned int uStack_98;


void fn_82648160(int param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  byte bVar18;
  int in_r13;
  int iVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  uint uVar23;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  undefined4 auStack_1dc [3];
  uint uStack_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  int aiStack_1b0 [3];
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined1 auStack_180 [4];
  undefined4 uStack_17c;
  int iStack_178;
  int iStack_164;
  byte abStack_160 [56];
  byte abStack_128 [56];
  int iStack_f0;
  undefined1 auStack_e0 [72];
  ushort uStack_98;
  ushort uStack_96;
  ushort uStack_8a;
  
  lVar7 = KeGetCurrentProcessType();
  *(int *)(param_1 + 0x4188) = *(int *)(param_1 + 0x4188) + 1;
  iVar4 = (int)lVar7 + -3 + (uint)(lVar7 + -2 == 0);
  iVar12 = (int)(lVar7 + -2);
  fn_82F68CC0(&uStack_1d0,param_2 + 0x1c,0x18);
  uVar22 = (ulonglong)uStack_1cc;
  if ((uStack_1cc & 0x3f) == 0x32) {
    uVar22 = uVar22 & 0xffffffffffffffc0 | 6;
LAB_826481d4:
    uStack_1cc = (uint)uVar22;
  }
  else if ((uStack_1cc & 0x3f) == 7) {
    uVar22 = uVar22 & 0xffffffffffffffc0 | 0x36;
    goto LAB_826481d4;
  }
  uVar20 = (ulonglong)(*(uint *)(param_1 + 0x35fc) >> 0x11);
  uStack_1d0 = *(uint *)(param_1 + 0x35fc) >> 7 & 0x3fc | uStack_1d0 & 0xfffffc03;
  uVar20 = (ulonglong)uStack_1c4 & 0xffffe000 | uVar20 & 0x1ffe | uVar20 & 1;
  uStack_1c4 = (uint)uVar20;
  if ((*(byte *)(param_1 + 0x2ac0) & 0x40) != 0) {
    fn_82647258(param_1);
    uVar20 = (ulonglong)uStack_1c4;
    uVar22 = (ulonglong)uStack_1cc;
  }
  fn_82F68CC0(param_1 + 0x3ad0,param_2,0x34);
  iVar2 = *(int *)(param_1 + 0x3600);
  iVar16 = ((uint)(uVar20 >> 0x1e) & 2) + 1;
  iVar13 = (uStack_1c8 & 0x1fff) + iVar16;
  uVar20 = uVar22 & 0xfffff000;
  uVar11 = (uint)uVar22 & 0x3f;
  iVar16 = (uStack_1c8 >> 0xd & 0x1fff) + iVar16;
  uVar14 = (uint)uVar20;
  bVar6 = false;
  iStack_1f0 = iVar2;
  iStack_1ec = iVar16;
  iStack_1e8 = iVar13;
  uStack_1e4 = uVar14;
  uStack_1e0 = uVar11;
  if (*(int *)(param_1 + 0x5558) != 0) {
    if (*(uint *)(param_1 + 0x5554) - *(int *)(param_1 + 0x5550) < 6) {
      *(undefined4 *)(((*(uint *)(param_1 + 0x5554) & 7) + 0x10) * 4 + *(int *)(param_1 + 0x2a90)) =
           0;
      *(undefined4 *)
       (((*(int *)(param_1 + 0x5554) + 1U & 7) + 0x10) * 4 + *(int *)(param_1 + 0x2a90)) = 0;
      uVar8 = *(uint *)(param_1 + 0x30);
      uVar23 = ((*(uint *)(param_1 + 0x5554) & 7) + 0x10) * 4 + *(int *)(param_1 + 0x2a90);
      if (*(uint *)(param_1 + 0x38) < uVar8) {
        uVar8 = fn_82645110(param_1);
      }
      *(undefined4 *)(uVar8 + 4) = 0xc0025800;
      *(undefined4 *)(uVar8 + 8) = 0x80000003;
      bVar6 = true;
      *(uint *)(uVar8 + 0xc) = ((uVar23 >> 0x14) + 0x200 & 0x1000) + (uVar23 & 0x1fffffff);
      *(undefined4 *)(uVar8 + 0x10) = 0xdeadbeef;
      *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar8 + 0x10);
    }
  }
  if (param_3 == (byte *)0x0) {
code_r0x82648384:
    bVar5 = false;
  }
  else {
    pbVar15 = (byte *)(param_1 + 0x361c);
    pbVar10 = param_3;
    do {
      bVar18 = *pbVar10;
      bVar1 = *pbVar15;
      if ((ulonglong)bVar18 - (ulonglong)bVar1 != 0) break;
      pbVar10 = pbVar10 + 1;
      pbVar15 = pbVar15 + 1;
    } while (pbVar10 != param_3 + 0x1c);
    bVar5 = true;
    if ((int)((ulonglong)bVar18 - (ulonglong)bVar1) == 0) goto code_r0x82648384;
  }
  if (iVar12 != iVar4) {
    if (iRam83282400 != 0) {
      uVar8 = *(uint *)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x38) < uVar8) {
        uVar8 = fn_82645110(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar8;
    }
    if (bVar5) {
      *(uint *)(param_1 + 0x5e70) = *(uint *)(param_1 + 0x5e70) | 0x40000000;
    }
    fn_82657E40(param_1,param_2);
  }
  fn_8314268C(auStack_180,auStack_1dc);
  if (*(int *)(param_1 + 0x54f4) == 0) {
    lVar7 = fn_82643A48(param_1,0x40);
    fn_8314267C(lVar7 + 4,&uStack_1d0,(ulonglong)*(uint *)(param_1 + 0x2a90) + 8,auStack_180,
                    auStack_1dc[0],&uStack_1e4,&uStack_1e0,&iStack_1f0);
    *(int *)(param_1 + 0x30) = (int)lVar7 + 0x100;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x2a90) + 8) = auStack_1dc[0];
    uVar8 = *(uint *)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x38) < uVar8) {
      uVar8 = fn_82645110(param_1);
    }
    *(undefined4 *)(uVar8 + 4) = 0xc0001000;
    *(undefined4 *)(uVar8 + 8) = 0;
    *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar8 + 8);
  }
  *(undefined4 *)(param_1 + 0x5c10) = uStack_17c;
  if (bVar6) {
    uVar8 = *(uint *)(param_1 + 0x30);
    uVar23 = ((*(int *)(param_1 + 0x5554) + 1U & 7) + 0x10) * 4 + *(int *)(param_1 + 0x2a90);
    if (*(uint *)(param_1 + 0x38) < uVar8) {
      uVar8 = fn_82645110(param_1);
    }
    *(undefined4 *)(uVar8 + 4) = 0xc0025800;
    *(undefined4 *)(uVar8 + 8) = 0x80000003;
    *(uint *)(uVar8 + 0xc) = ((uVar23 >> 0x14) + 0x200 & 0x1000) + (uVar23 & 0x1fffffff);
    *(undefined4 *)(uVar8 + 0x10) = 0xdeadbeef;
    *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar8 + 0x10);
    *(int *)(param_1 + 0x5554) = *(int *)(param_1 + 0x5554) + 2;
  }
  if (iStack_178 != 0) {
    *(int *)(param_1 + 0x5e84) = iStack_178;
  }
  uVar8 = *(uint *)(param_1 + 0x421c);
  *(undefined4 *)(param_1 + 0x421c) = 0;
  if ((uVar8 & 8) != 0) {
    if (iVar12 != iVar4) {
      uVar9 = 0;
      uVar23 = *(uint *)(param_1 + 0x35fc) & 0x3f;
      if ((uVar23 == 7) || (uVar23 == 0x36)) {
        uVar9 = 0x8000000;
      }
      uVar9 = (*(uint *)(param_1 + 0x3600) & 3) << 0x1c | 0x40000000 | uVar9;
      if ((*(int *)(param_1 + 0x35bc) == 0x2d0) &&
         ((*(int *)(param_1 + 0x35c0) == 0x1e0 || (*(int *)(param_1 + 0x35c0) == 0x240)))) {
        uVar9 = uVar9 | 2;
      }
      fn_8314278C(uVar9);
    }
    VdGetCurrentDisplayInformation(auStack_e0);
    *(uint *)(param_1 + 0x5500) = (uint)uStack_98;
    *(uint *)(param_1 + 0x5504) = (uint)uStack_96;
    *(uint *)(param_1 + 0x5508) = (uint)uStack_8a;
    fn_82645110(param_1);
  }
  if (bVar5) {
    fn_82F68CC0(param_1 + 0x361c,param_3,0x1c);
    fn_82655F40(param_1,param_3);
  }
  if ((iStack_178 == 0) || (iStack_1f0 != iVar2)) {
    uVar21 = *(undefined4 *)(param_1 + 0x35fc);
    pbVar10 = (byte *)(param_1 + 0x3670);
    iVar19 = param_1 + 0x3b70;
    if ((*(byte *)(param_1 + 0x2abe) & 0x10) != 0) {
      iStack_1f0 = iVar2;
      iStack_1ec = iVar16;
      iStack_1e8 = iVar13;
      uStack_1e4 = uVar14;
      uStack_1e0 = uVar11;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1 + 0x3638,0,0x38);
    }
    if ((*(byte *)(param_1 + 0x2abf) & 0x40) != 0) {
      uVar8 = uVar8 | 3;
    }
    bVar18 = *(byte *)(param_1 + 0x2abf) & 0xbf;
    iStack_1f0 = iVar2;
    iStack_1ec = iVar16;
    iStack_1e8 = iVar13;
    uStack_1e4 = uVar14;
    uStack_1e0 = uVar11;
    goto LAB_8264871c;
  }
  pbVar10 = (byte *)(param_1 + 0x3638);
  iVar19 = 0;
  if (uStack_1e0 == 7) {
    uVar21 = 0x28280136;
  }
  else {
    uVar21 = 0x28280106;
  }
  if (iStack_164 == 0) {
LAB_8264867c:
    if (((*(byte *)(param_1 + 0x2abe) & 0x10) != 0) && (iStack_f0 == 0)) {
      pbVar10 = (byte *)(param_1 + 0x3670);
      goto code_r0x82648698;
    }
  }
  else {
    pbVar17 = abStack_160;
    pbVar15 = pbVar10;
    do {
      bVar18 = *pbVar17;
      bVar1 = *pbVar15;
      if ((ulonglong)bVar18 - (ulonglong)bVar1 != 0) break;
      pbVar17 = pbVar17 + 1;
      pbVar15 = pbVar15 + 1;
    } while (pbVar17 != abStack_128);
    if ((int)((ulonglong)bVar18 - (ulonglong)bVar1) == 0) goto LAB_8264867c;
    fn_82F68CC0(pbVar10,abStack_160,0x38);
    *(byte *)(param_1 + 0x2abe) = *(byte *)(param_1 + 0x2abe) | 0x10;
code_r0x82648698:
    uVar8 = uVar8 | 4;
  }
  if ((*(byte *)(param_1 + 0x2abf) & 0x40) == 0) {
    uVar8 = uVar8 | 3;
  }
  uVar20 = (ulonglong)uStack_1e4;
  bVar18 = *(byte *)(param_1 + 0x2abf) | 0x40;
LAB_8264871c:
  *(byte *)(param_1 + 0x2abf) = bVar18;
  if ((lbl_832823F8 != 0) || ((*(byte *)(param_1 + 0x2abd) & 2) != 0)) {
    uVar8 = 0;
  }
  lVar7 = ((uVar20 >> 0x14) + 0x200 & 0x1000) + (uVar20 & 0x1fffffff);
  if (uVar8 == 0) {
    if ((*(uint *)(param_1 + 0x5e88) & 4) == 0) {
      uVar11 = *(uint *)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x38) < uVar11) {
        uVar11 = fn_82645110(param_1);
      }
      *(undefined4 *)(uVar11 + 4) = 0x1844;
      *(uint *)(uVar11 + 8) = (uint)lVar7 & 0x1fffffff;
      *(uint **)(param_1 + 0x30) = (uint *)(uVar11 + 8);
      fn_82647DE8(param_1,uVar21);
    }
    else {
      fn_82647C20(param_1,lVar7);
    }
  }
  else {
    fn_82647F88(param_1,uVar8,lVar7,uVar21,iStack_1e8,iStack_1ec,pbVar10,iVar19);
  }
  fn_826517A0(param_1,uVar8,iStack_1f0,lVar7,uVar21,iStack_1e8,iStack_1ec,pbVar10);
  if (((uVar8 & 8) != 0) && (iVar12 != iVar4)) {
    uVar11 = *(uint *)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x38) < uVar11) {
      uVar11 = fn_82645110(param_1);
    }
    *(undefined4 *)(uVar11 + 4) = 0xc0022100;
    *(undefined4 *)(uVar11 + 8) = 0x1e4e;
    *(undefined4 *)(uVar11 + 0xc) = 0xfffffffe;
    *(undefined4 *)(uVar11 + 0x10) = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar11 + 0x10);
    iVar12 = VdPersistDisplay(&uStack_198,aiStack_1b0);
    if (iVar12 != 0) {
      MmFreePhysicalMemory(1,aiStack_1b0[0]);
    }
  }
  uVar21 = *(undefined4 *)(param_1 + 0x2a9c);
  *(undefined4 *)(param_1 + 0x2ab0) = uVar21;
  fn_82645110(param_1);
  fn_82657F88(param_1,0,0);
  fn_826441E0(param_1,*(uint *)(param_1 + 0x3b14) >> 2);
  if (*(int *)(param_1 + 0x3b30) != 0) {
    fn_826452A8(param_1,*(int *)(param_1 + 0x3b30),3,0);
  }
  if ((*(uint *)(param_1 + 0x5e88) & 4) == 0) {
    *(undefined4 *)(param_1 + 0x3b30) = uVar21;
  }
  else {
    aiStack_1b0[1] = 3;
    uStack_1a4 = *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x58);
    aiStack_1b0[2] = **(undefined4 **)(param_1 + 0x2a90);
    uVar3 = TBLr;
    uStack_19c = (undefined4)uVar3;
    aiStack_1b0[0] = param_1;
    uStack_1a0 = uStack_1a4;
    do {
      iVar12 = fn_82646F48(aiStack_1b0);
      if (iVar12 == 0) break;
    } while (0xe < (uint)(*(int *)(param_1 + 0x4188) - *(int *)(param_1 + 0x4190)));
    fn_82646E80(aiStack_1b0);
  }
  *(byte *)(param_1 + 0x2abd) = *(byte *)(param_1 + 0x2abd) & 0xef;
  fn_82652BA8(param_1);
  if (*(code **)(param_1 + 0x359c) != (code *)0x0) {
    (**(code **)(param_1 + 0x359c))();
  }
  fn_82637398(param_1,0);
  return;
}

