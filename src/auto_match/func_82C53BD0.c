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
extern int fn_82923B38();
extern int fn_82C45138();
extern int fn_82C4E7C0();
extern int fn_82C50660();
extern int fn_82C50D30();
extern int fn_82C50F98();
extern int fn_82C51DB0();
extern int fn_82C53370();
extern int fn_82C53488();
extern int fn_82C53608();
extern int fn_82C53AE8();
extern int fn_82C562F0();
extern int fn_82C56398();
extern int fn_82C5E4C8();
extern int fn_82C69448();
extern int fn_82C74220();
extern int fn_82C787E8();
extern int fn_82C7B980();
extern int fn_82C95078();
extern int fn_82C9A740();
extern int fn_82C9D898();
extern int fn_82CAA950();
extern int fn_82CABB00();
extern int fn_82CABE30();
extern int fn_82CACF10();
extern int fn_82CAD4C0();
extern int fn_82CBBC30();
extern unsigned int lbl_82196582;
extern unsigned int uStack0000003c;


undefined8
fn_82C53BD0(int param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
             undefined4 param_6)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uStack0000003c;
  
  *(undefined4 *)(param_1 + 0xe80) = param_3;
  *(undefined4 *)(param_1 + 0x5440) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x55b4) = 0;
  *(undefined4 *)(param_1 + 0x55b8) = 0;
  iVar5 = *(int *)(param_1 + 0x6070) + 8;
  *(undefined4 *)(param_1 + 0x55c4) = 0;
  *(undefined4 *)(param_1 + 0x55c8) = 0;
  *(undefined4 *)(param_1 + 0x55cc) = 0;
  *(undefined4 *)(param_1 + 0x55bc) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x3cac) = 1;
  *(undefined4 *)(param_1 + 0x1c4) = 1;
  *(undefined4 *)(param_1 + 0x79c) = 1;
  *(undefined4 *)(param_1 + 0x3cec) = 1000;
  *(undefined4 *)(param_1 + 0x3cfc) = 0;
  *(undefined4 *)(param_1 + 0x3cf0) = 1;
  *(undefined4 *)(param_1 + 0xf84) = 0;
  *(undefined4 *)(param_1 + 0xf88) = 0;
  *(undefined4 *)(param_1 + 0xf94) = 0;
  *(undefined4 *)(param_1 + 0xbc4) = 0;
  *(undefined4 *)(param_1 + 0xbc0) = 0;
  *(undefined4 *)(param_1 + 0xbbc) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0x3a0c) = 0;
  *(undefined4 *)(param_1 + 0x3a10) = 0;
  *(undefined4 *)(param_1 + 0x3a08) = 0;
  *(undefined4 *)(param_1 + 0x39f4) = 0;
  *(undefined4 *)(param_1 + 0xd4c) = 1;
  *(undefined4 *)(param_1 + 0xd50) = 0;
  *(undefined4 *)(param_1 + 0xd48) = 0;
  *(undefined4 *)(param_1 + 0xb148) = 0;
  *(undefined4 *)(param_1 + 0x55b0) = 0;
  *(undefined8 *)(param_1 + 0xb2e8) = 0;
  *(undefined4 *)(param_1 + 0x55ec) = 0;
  *(undefined4 *)(param_1 + 22000) = 0;
  *(undefined4 *)(param_1 + 0x55f4) = 0;
  *(undefined4 *)(param_1 + 0x55fc) = 0;
  *(undefined4 *)(param_1 + 0x55f8) = 0;
  *(undefined4 *)(param_1 + 0x3a18) = 0;
  *(undefined4 *)(param_1 + 0x3a1c) = 0;
  *(undefined4 *)(param_1 + 0x3a20) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  uStack0000003c = param_6;
  fn_82C69448(param_1 + 0xeb8,0);
  fn_82C69448(param_1 + 0xeac,0);
  *(undefined4 *)(param_1 + 0xd78) = 0;
  *(undefined4 *)(param_1 + 0xc10) = 0;
  *(undefined4 *)(param_1 + 0xc0c) = 0;
  *(undefined4 *)(param_1 + 0x3bc8) = 0;
  *(undefined4 *)(param_1 + 0x3bcc) = 0;
  *(undefined4 *)(param_1 + 0x3bd0) = 0;
  *(undefined4 *)(param_1 + 0x3bd4) = 0;
  *(undefined4 *)(param_1 + 0x3bd8) = 0;
  *(undefined4 *)(param_1 + 0x3bdc) = 0;
  *(undefined4 *)(param_1 + 0x3be0) = 0;
  *(undefined4 *)(param_1 + 0x3d00) = 0;
  *(undefined4 *)(param_1 + 0xd84) = 0;
  fn_82C69448(param_1 + 0xebc,0);
  *(undefined4 *)(param_1 + 0x3be4) = 0;
  *(undefined4 *)(param_1 + 0x3bfc) = 0;
  *(undefined4 *)(param_1 + 0x3bec) = 0;
  *(undefined4 *)(param_1 + 0x3bf4) = 0;
  *(undefined4 *)(param_1 + 0xd94) = 0;
  *(undefined4 *)(param_1 + 0xd98) = 0;
  *(undefined4 *)(param_1 + 0xd8c) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0xd9c) = 0;
  *(undefined4 *)(param_1 + 0xda0) = 0;
  fn_82923B38(param_1 + 0x7c8);
  fn_82923B38(param_1 + 0x7d4);
  fn_82923B38(param_1 + 0x7fc);
  fn_82923B38(param_1 + 0x808);
  fn_82923B38(param_1 + 0x814);
  fn_82923B38(param_1 + 0x820);
  fn_82923B38(param_1 + 0x848);
  fn_82923B38(param_1 + 0x854);
  fn_82923B38(param_1 + 0x864);
  fn_82923B38(param_1 + 0x870);
  fn_82923B38(param_1 + 0x87c);
  fn_82923B38(param_1 + 0x888);
  fn_82923B38(param_1 + 0x894);
  fn_82923B38(param_1 + 0x8a0);
  fn_82923B38(param_1 + 0x8ac);
  fn_82923B38(param_1 + 0x8b8);
  fn_82923B38(param_1 + 0x8c4);
  fn_82923B38(param_1 + 0x980);
  fn_82923B38(param_1 + 0x8d0);
  fn_82923B38(param_1 + 0x8ec);
  fn_82923B38(param_1 + 0x8f8);
  fn_82923B38(param_1 + 0x904);
  fn_82923B38(param_1 + 0x910);
  fn_82923B38(param_1 + 0x91c);
  fn_82923B38(param_1 + 0x928);
  fn_82923B38(param_1 + 0x934);
  fn_82923B38(param_1 + 0x940);
  *(undefined4 *)(param_1 + 0x860) = 0;
  fn_82923B38(param_1 + 0x5758);
  fn_82923B38(param_1 + 0x5764);
  fn_82923B38(param_1 + 0x5770);
  fn_82923B38(param_1 + 0x577c);
  fn_82923B38(param_1 + 0x574c);
  fn_82C50660(param_1);
  *(undefined4 *)(param_1 + 0xfac) = 0;
  *(undefined4 *)(param_1 + 0x6f0) = 0;
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0xb14c) = 0;
  *(undefined4 *)(param_1 + 0xb138) = 0;
  *(undefined4 *)(param_1 + 0x3e5c) = 0;
  *(undefined4 *)(param_1 + 0x5da4) = 0;
  *(undefined4 *)(param_1 + 0x5da0) = 0;
  *(undefined4 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x3a24) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0xfc8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x39e4) = 0;
  *(undefined4 *)(param_1 + 0x3ba4) = 0;
  *(undefined4 *)(param_1 + 0x3bb0) = 0;
  *(undefined4 *)(param_1 + 0x3bb4) = 0;
  *(undefined4 *)(param_1 + 0xfc4) = 0;
  *(undefined4 *)(param_1 + 0xd74) = 0;
  *(undefined4 *)(param_1 + 0xb13c) = 0;
  *(undefined4 *)(param_1 + 0x50c8) = 0;
  *(undefined4 *)(param_1 + 0xda4) = 0;
  *(undefined4 *)(param_1 + 0x5430) = 0;
  *(undefined4 *)(param_1 + 0x50d8) = 0;
  *(undefined4 *)(param_1 + 0x50dc) = 0;
  *(undefined4 *)(param_1 + 0x50e0) = 0;
  *(undefined4 *)(param_1 + 0x5118) = 0;
  *(undefined4 *)(param_1 + 0x50cc) = 0;
  *(undefined4 *)(param_1 + 0x50d0) = 0;
  *(undefined4 *)(param_1 + 0x54c8) = 0;
  *(undefined4 *)(param_1 + 0x54cc) = 0;
  *(undefined4 *)(param_1 + 0x54bc) = 1;
  *(undefined4 *)(param_1 + 0x54c4) = 1;
  *(undefined4 *)(param_1 + 0x54c0) = 1;
  *(undefined4 *)(param_1 + 0x5420) = 0;
  *(undefined4 *)(param_1 + 0x5424) = 1;
  *(undefined4 *)(param_1 + 0x5428) = 0;
  *(undefined4 *)(param_1 + 0x5568) = 0;
  *(undefined4 *)(param_1 + 0x556c) = 0;
  *(undefined4 *)(param_1 + 0xd64) = 0;
  *(undefined4 *)(param_1 + 0x5678) = 0;
  *(undefined4 *)(param_1 + 0x569c) = 0;
  *(undefined4 *)(param_1 + 0x56a0) = 0;
  *(undefined4 *)(param_1 + 0x56a4) = 0;
  *(undefined4 *)(param_1 + 0x54ac) = 1;
  *(undefined4 *)(param_1 + 0x54b4) = 1;
  *(undefined4 *)(param_1 + 0x54b0) = 1;
  *(undefined4 *)(param_1 + 0x5680) = 0;
  *(undefined4 *)(param_1 + 0x5684) = 0;
  *(undefined4 *)(param_1 + 0x5688) = 0;
  *(undefined4 *)(param_1 + 0x568c) = 0;
  *(undefined4 *)(param_1 + 0x5690) = 0;
  *(undefined4 *)(param_1 + 0x5694) = 0;
  *(undefined4 *)(param_1 + 0x5698) = 0;
  *(undefined4 *)(param_1 + 0x549c) = 0;
  *(undefined4 *)(param_1 + 0x54a0) = 0;
  *(undefined4 *)(param_1 + 0x54a4) = 0;
  *(undefined4 *)(param_1 + 0x54a8) = 0;
  *(undefined4 *)(param_1 + 0x5518) = 0;
  *(undefined4 *)(param_1 + 0x551c) = 0;
  *(undefined4 *)(param_1 + 0x5520) = 0;
  *(undefined4 *)(param_1 + 0x5524) = 0;
  *(undefined4 *)(param_1 + 0x5528) = 0;
  *(undefined4 *)(param_1 + 0x552c) = 0;
  *(undefined4 *)(param_1 + 0x5530) = 0;
  *(undefined4 *)(param_1 + 0x5534) = 0;
  *(undefined4 *)(param_1 + 0x5538) = 0;
  *(undefined4 *)(param_1 + 0x553c) = 0;
  *(undefined4 *)(param_1 + 0x5540) = 0;
  *(undefined4 *)(param_1 + 0x5544) = 0;
  *(undefined4 *)(param_1 + 0x5548) = 0;
  *(undefined4 *)(param_1 + 0x554c) = 0;
  *(undefined4 *)(param_1 + 0x5550) = 0;
  *(undefined4 *)(param_1 + 0x5554) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x3d0c) = 0;
  *(undefined4 *)(param_1 + 0x5590) = 1;
  *(undefined4 *)(param_1 + 0x557c) = 1;
  *(undefined4 *)(param_1 + 0x5580) = 1;
  *(undefined4 *)(param_1 + 0x5584) = 0;
  *(undefined4 *)(param_1 + 0x5570) = 0;
  *(undefined4 *)(param_1 + 0x5574) = 0;
  *(undefined4 *)(param_1 + 0x5578) = 0;
  *(undefined4 *)(param_1 + 0x558c) = 0;
  *(undefined4 *)(param_1 + 0x5588) = 0;
  *(undefined4 *)(param_1 + 0x3c48) = 0;
  *(undefined4 *)(param_1 + 0x60a0) = 100;
  *(undefined4 *)(param_1 + 0x55ac) = 0;
  *(undefined4 *)(param_1 + 0x56a8) = 0;
  *(undefined4 *)(param_1 + 0x5630) = 0;
  *(undefined4 *)(param_1 + 0x564c) = 0;
  *(undefined4 *)(param_1 + 0x559c) = 0;
  *(undefined4 *)(param_1 + 0x55a0) = 0;
  *(undefined4 *)(param_1 + 0x55d8) = 0;
  *(undefined4 *)(param_1 + 0x55d4) = 0;
  *(undefined4 *)(param_1 + 0x5594) = 0;
  *(undefined4 *)(param_1 + 0x5598) = 0;
  *(undefined4 *)(param_1 + 0x5634) = 0;
  *(undefined4 *)(param_1 + 0x5638) = 0;
  *(undefined4 *)(param_1 + 0x563c) = 0;
  *(undefined4 *)(param_1 + 0x5640) = 0;
  *(undefined4 *)(param_1 + 0x56d8) = 0;
  *(undefined4 *)(param_1 + 0x56dc) = 0;
  *(undefined4 *)(param_1 + 0x56e0) = 0;
  *(undefined4 *)(param_1 + 0x56e8) = 1;
  *(undefined4 *)(param_1 + 0x56ec) = 0;
  *(undefined4 *)(param_1 + 0x754) = 0;
  *(undefined4 *)(param_1 + 0x758) = 0;
  *(undefined4 *)(param_1 + 0xb154) = 0;
  *(undefined2 *)(param_1 + 0xb158) = 0;
  *(undefined2 *)(param_1 + 0xb15a) = 0;
  *(undefined2 *)(param_1 + 0xb15c) = 0;
  *(undefined2 *)(param_1 + 0xb15e) = 0;
  *(undefined4 *)(param_1 + 0xb160) = 0;
  *(undefined4 *)(param_1 + 0x5710) = 0;
  *(undefined4 *)(param_1 + 0x5714) = 0;
  *(undefined4 *)(param_1 + 0x5718) = 1;
  *(undefined4 *)(param_1 + 0x571c) = 0;
  *(undefined4 *)(param_1 + 0x5720) = 0;
  *(undefined4 *)(param_1 + 0x5744) = 0;
  *(undefined4 *)(param_1 + 0x5748) = 0;
  *(undefined4 *)(param_1 + 0x3b98) = 0;
  *(undefined4 *)(param_1 + 0x5788) = 1;
  *(undefined4 *)(param_1 + 0x578c) = 1;
  *(undefined4 *)(param_1 + 0x3ba0) = 0xffffffff;
  if ((param_2 == 0x574d5632) || (param_2 == 0x776d7632)) {
    uVar4 = 5;
LAB_82c542b0:
    *(undefined4 *)(param_1 + 0x3cb0) = uVar4;
  }
  else {
    if ((param_2 == 0x574d5633) || (param_2 == 0x776d7633)) {
LAB_82c5427c:
      uVar4 = 6;
      goto LAB_82c542b0;
    }
    if ((param_2 == 0x574d5641) || (param_2 == 0x776d7661)) {
      uVar4 = 7;
      goto LAB_82c542b0;
    }
    if ((param_2 == 0x574d5631) || (param_2 == 0x776d7631)) {
      uVar4 = 4;
      goto LAB_82c542b0;
    }
    if ((param_2 == 0x4d503433) || (param_2 == 0x6d703433)) {
      uVar4 = 3;
      goto LAB_82c542b0;
    }
    if ((param_2 == 0x4d503432) || (param_2 == 0x6d703432)) {
      uVar4 = 2;
      goto LAB_82c542b0;
    }
    if ((param_2 == 0x4d503453) || (param_2 == 0x6d703473)) {
      *(undefined4 *)(param_1 + 0x3cb0) = 0;
    }
    else {
      if ((param_2 == 0x574d5650) || (param_2 == 0x776d7670)) goto LAB_82c5427c;
      if ((param_2 == 0x57565032) || (param_2 == 0x77767032)) {
        *(undefined4 *)(param_1 + 0x3cb0) = 7;
        *(undefined4 *)(param_1 + 0x3c48) = 1;
      }
      else {
        if ((param_2 != 0x574d5652) && (param_2 != 0x776d7672)) {
          return 0xfffffffffffffffa;
        }
        *(undefined4 *)(param_1 + 0x3cb0) = 7;
        *(undefined4 *)(param_1 + 0x5710) = 1;
        if (*(int *)(param_1 + 0x578c) == 0) {
          *(undefined4 *)(param_1 + 0x5744) = 1;
          *(undefined4 *)(param_1 + 0x5720) = 1;
          *(undefined4 *)(param_1 + 0x5788) = 1;
          *(undefined4 *)(param_1 + 0x3b98) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x5744) = 0;
          *(undefined4 *)(param_1 + 0x5720) = 0;
          *(undefined4 *)(param_1 + 0x5788) = 0;
          *(undefined4 *)(param_1 + 0x3b98) = 1;
        }
      }
    }
  }
  if (5 < *(int *)(param_1 + 0x3cb0)) {
    *(undefined4 *)(param_1 + 0x3a04) = 1;
    *(undefined4 *)(param_1 + 0xfac) = 1;
    *(undefined4 *)(param_1 + 0xf68) = 0;
    *(undefined4 *)(param_1 + 0x39e4) = 1;
  }
  iVar3 = fn_82C45138(param_1);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x3a04) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x3a04) = 0;
  }
  if (((*(int *)(param_1 + 0x3cb0) != 6) || (*(int *)(param_1 + 0xf8c) != 0)) ||
     (iVar3 = fn_82C45138(param_1), iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x3e5c) = 0;
  }
  *(undefined4 *)(param_1 + 0xd40) = 1;
  if (0 < *(int *)(param_1 + 0x39f4)) {
    *(undefined4 *)(param_1 + 0xd40) = 1;
  }
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    *(undefined4 *)(param_1 + 0xd40) = 1;
    *(undefined4 *)(param_1 + 0x5118) = 1;
  }
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    fn_82C9D898();
    fn_82C53370(param_1,1);
    fn_82C53488();
    fn_82C53608(param_1);
    iVar3 = fn_82C45138(param_1);
    if ((iVar3 == 0) || (*(int *)(param_1 + 0x5710) == 0)) {
      *(undefined4 *)(param_1 + 0x39f4) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x39f4) = 0;
    }
    *(undefined4 *)(param_1 + 0x560c) = 0x1000;
    iVar3 = fn_82C562F0(iVar5,0x1000,0xffffffff82196582);
    *(int *)(param_1 + 0x5604) = iVar3;
    if (iVar3 == 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82C562F0(iVar5,*(undefined4 *)(param_1 + 0x560c),&lbl_82196582);
    *(int *)(param_1 + 0x5608) = iVar3;
    if (iVar3 == 0) {
      return 0xfffffffffffffff7;
    }
  }
  else {
    iVar3 = fn_82C45138(param_1);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x39f4) = 0;
    }
    fn_82C9D898();
    fn_82C53370(param_1,1);
    fn_82C53608();
    fn_82C53488(param_1);
  }
  iVar3 = fn_82C45138(param_1);
  if ((iVar3 != 0) && (uVar2 = fn_82C74220(param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  *(undefined4 *)(param_1 + 0xd44) = 0;
  uVar2 = fn_82C7B980(param_1);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  *(undefined4 *)(param_1 + 0x54) = uStack0000003c;
  uVar2 = fn_82C50D30(param_1);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  fn_82C5E4C8(param_1);
  iVar6 = (int)param_4;
  iVar3 = (int)param_5;
  *(int *)(param_1 + 0x5578) = iVar6 * iVar3;
  *(int *)(param_1 + 0x5588) = iVar6;
  *(int *)(param_1 + 0x5628) = iVar6;
  *(int *)(param_1 + 0x558c) = iVar3;
  *(int *)(param_1 + 0x562c) = iVar3;
  *(undefined4 *)(param_1 + 0xe94) = 1;
  uVar2 = fn_82C50F98(param_1,param_4,param_5);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = fn_82C53AE8(param_1,param_4,param_5);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  *(undefined4 *)(param_1 + 0xe94) = 0;
  *(undefined4 *)(param_1 + 0xe98) = 0;
  uVar1 = param_1 + 0x25fU & 0xffffff80;
  *(uint *)(param_1 + 0x6e8) = param_1 + 0x4dfU & 0xffffff80;
  *(uint *)(param_1 + 0x6ec) = uVar1;
  *(uint *)(param_1 + 0x6e4) = uVar1;
  *(uint *)(param_1 + 0x6e0) = uVar1 + 4;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xc44) = *(undefined4 *)(param_1 + 0xc40);
  *(undefined4 *)(param_1 + 0xc30) = *(undefined4 *)(param_1 + 0xc40);
  *(undefined4 *)(param_1 + 0xc48) = *(undefined4 *)(param_1 + 0xc3c);
  *(undefined4 *)(param_1 + 0xc2c) = *(undefined4 *)(param_1 + 0xc3c);
  fn_82CAA950(param_1);
  fn_82C95078(param_1);
  fn_82CBBC30(param_1);
  fn_82C69448(param_1 + 0xebc,*(undefined4 *)(param_1 + 0xea0));
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0x34) = *(undefined4 *)(param_1 + 0xc90);
    iVar3 = fn_82C51DB0(param_1);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
  }
  else {
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x7c8,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82101e10,6);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x7d4,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82100cd8,6);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x848,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82103768,8);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x854,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82103560,6);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x864,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82102f48,6);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x870,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82103150,6);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x87c,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82103358,6);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x7fc,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82103870,8);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x808,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82103a58,6);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x814,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82103c40,9);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x820,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82103e28,8);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x888,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff820ffa40,0x8a);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x894,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff820ffce8,0x8a);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x8a0,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff820fffd8,0x8a);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x8ac,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82100230,0x8a);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x8b8,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82100448,0x8a);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x8c4,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff821005e8,0x8a);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x980,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82100788,0x8a);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x8d0,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82100a48,0x8a);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x8ec,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104010,0x88);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x8f8,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104118,0x88);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x904,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104220,0x88);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x910,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104328,0x88);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    *(int *)(param_1 + 0x950) = param_1 + 0x8ec;
    *(int *)(param_1 + 0x954) = param_1 + 0x8f8;
    *(int *)(param_1 + 0x958) = param_1 + 0x904;
    *(int *)(param_1 + 0x95c) = param_1 + 0x910;
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x91c,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104430,0x8a);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x928,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104558,0x8a);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x934,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104680,0x8a);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x940,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff821047a8,0x8a);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    *(int *)(param_1 + 0x960) = param_1 + 0x91c;
    *(int *)(param_1 + 0x964) = param_1 + 0x928;
    *(int *)(param_1 + 0x968) = param_1 + 0x934;
    *(int *)(param_1 + 0x96c) = param_1 + 0x940;
    if (*(int *)(param_1 + 0x5720) != 0) {
      iVar3 = fn_82CAD4C0(param_1,param_1 + 0x5758,*(undefined4 *)(param_1 + 0xd30),
                                0xffffffff821048d0,8);
      if (iVar3 != 0) {
        return 0xfffffffffffffff7;
      }
      iVar3 = fn_82CAD4C0(param_1,param_1 + 0x5764,*(undefined4 *)(param_1 + 0xd30),
                                0xffffffff82104a00,8);
      if (iVar3 != 0) {
        return 0xfffffffffffffff7;
      }
      iVar3 = fn_82CAD4C0(param_1,param_1 + 0x5770,*(undefined4 *)(param_1 + 0xd30),
                                0xffffffff82104b30,8);
      if (iVar3 != 0) {
        return 0xfffffffffffffff7;
      }
      iVar3 = fn_82CAD4C0(param_1,param_1 + 0x577c,*(undefined4 *)(param_1 + 0xd30),
                                0xffffffff82104c60,8);
      if (iVar3 != 0) {
        return 0xfffffffffffffff7;
      }
      *(int *)(param_1 + 0x960) = param_1 + 0x5758;
      *(int *)(param_1 + 0x964) = param_1 + 0x5764;
      *(int *)(param_1 + 0x968) = param_1 + 0x5770;
      *(int *)(param_1 + 0x96c) = param_1 + 0x577c;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x574c,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104d90,8);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x98c,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104e50,0x86);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x998,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104e10,0x86);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x9a4,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104dd0,0x86);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x9b4,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104e90,0x88);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x9c0,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104ed8,0x88);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x9cc,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104f20,0x88);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x9dc,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104f64,0x86);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x9e8,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104f88,0x86);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    iVar3 = fn_82CAD4C0(param_1,param_1 + 0x9f4,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104fac,0x86);
    if (iVar3 != 0) {
      return 0xfffffffffffffff7;
    }
    if (4 < *(int *)(param_1 + 0x3cb0)) {
      if (*(int *)(param_1 + 0x7b8) == 0) {
        uVar4 = fn_82CACF10(param_1,*(undefined4 *)(param_1 + 0xd30));
        *(undefined4 *)(param_1 + 0x7b8) = uVar4;
      }
      if (*(int *)(param_1 + 0x7b8) == 0) {
        return 0xfffffffffffffff7;
      }
      iVar3 = *(int *)(param_1 + 0x7b0);
      if (iVar3 == 0) {
        iVar3 = fn_82CABE30();
        *(int *)(param_1 + 0x7b0) = iVar3;
        if (iVar3 == 0) {
          return 0xfffffffffffffff7;
        }
      }
      *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(param_1 + 0xc90);
      if (*(int *)(param_1 + 0x7b4) == 0) {
        iVar3 = fn_82CABB00(*(int *)(param_1 + 0x88) << 1,2);
        *(int *)(param_1 + 0x7b4) = iVar3;
        if (iVar3 == 0) {
          return 0xfffffffffffffff7;
        }
      }
    }
  }
  uVar2 = fn_82C4E7C0(param_1);
  if (5 < *(int *)(param_1 + 0x3cb0)) {
    if (*(int *)(param_1 + 0x164) == 0) {
      iVar3 = fn_82C562F0(iVar5,0x10,&lbl_82196582);
      *(int *)(param_1 + 0x164) = iVar3;
      if (iVar3 == 0) {
        return 0xfffffffffffffff7;
      }
    }
    *(code **)(param_1 + 0x3de0) = fn_82C9A740;
    iVar3 = fn_82C562F0(iVar5,0x20,&lbl_82196582);
    *(int *)(param_1 + 0x168) = iVar3;
    if (iVar3 != 0) {
      iVar3 = fn_82C562F0(iVar5,0x48,&lbl_82196582);
      *(int *)(param_1 + 0x16c) = iVar3;
      if (iVar3 != 0) {
        iVar3 = fn_82C562F0(iVar5,0x120,&lbl_82196582);
        *(int *)(param_1 + 0x170) = iVar3;
        if (iVar3 != 0) {
          iVar3 = fn_82C562F0(iVar5,0x240,&lbl_82196582);
          *(int *)(param_1 + 0x174) = iVar3;
          if (iVar3 != 0) {
            iVar3 = fn_82C562F0(iVar5,0x3f0,&lbl_82196582);
            *(int *)(param_1 + 0x178) = iVar3;
            if (iVar3 != 0) {
              if (*(int *)(param_1 + 0x6f0) == 0) {
                iVar3 = fn_82C56398(iVar5,((longlong)*(int *)(param_1 + 0x88) *
                                            (longlong)*(int *)(param_1 + 0x8c) & 0xfffffffU) << 4,
                                     &lbl_82196582);
                *(int *)(param_1 + 0x6f0) = iVar3;
                *(int *)(param_1 + 0x6f4) =
                     *(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x8c) * 8 + iVar3;
                if (*(int *)(param_1 + 0x6f0) == 0) {
                  return 0xfffffffffffffff7;
                }
              }
              if (*(int *)(param_1 + 0x17c) == 0) {
                iVar3 = fn_82C562F0(iVar5,((longlong)
                                                 (int)((*(int *)(param_1 + 0x8c) + 1U & 0xfffffffe)
                                                      + 1) * (longlong)*(int *)(param_1 + 0x88) &
                                                0xfffffffU) << 4,&lbl_82196582);
                *(int *)(param_1 + 0x184) = iVar3;
                if (iVar3 == 0) {
                  return 0xfffffffffffffff7;
                }
                *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x88) * 0x10 + iVar3;
              }
              if (*(int *)(param_1 + 0x180) == 0) {
                iVar3 = fn_82C562F0(iVar5,((longlong)
                                                 (int)((*(int *)(param_1 + 0x8c) + 1U & 0xfffffffe)
                                                      + 2) * (longlong)*(int *)(param_1 + 0x88) &
                                                0x3fffffffU) << 2,&lbl_82196582);
                *(int *)(param_1 + 0x188) = iVar3;
                if (iVar3 == 0) {
                  return 0xfffffffffffffff7;
                }
                *(int *)(param_1 + 0x180) = iVar3;
              }
              if (*(int *)(param_1 + 0x3bb0) == 0) {
                iVar3 = fn_82C562F0(iVar5,0x340,&lbl_82196582);
                *(int *)(param_1 + 0x3bb0) = iVar3;
                if (iVar3 == 0) {
                  return 0xfffffffffffffff7;
                }
                *(uint *)(param_1 + 0x3bb4) = iVar3 + 0x1fU & 0xffffffe0;
              }
              if (*(int *)(param_1 + 0x6f8) == 0) {
                iVar5 = fn_82C56398(iVar5,((longlong)*(int *)(param_1 + 0x88) *
                                            (longlong)*(int *)(param_1 + 0x8c) & 0x3fffffffU) << 2,
                                     &lbl_82196582);
                *(int *)(param_1 + 0x6f8) = iVar5;
                *(int *)(param_1 + 0x6fc) =
                     *(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x8c) * 2 + iVar5;
                if (*(int *)(param_1 + 0x6f8) == 0) {
                  return 0xfffffffffffffff7;
                }
              }
              goto LAB_82c54e4c;
            }
          }
        }
      }
    }
    return 0xfffffffffffffff7;
  }
LAB_82c54e4c:
  if (*(int *)(param_1 + 0x3cb0) == 6) {
    iVar5 = param_1 + 0x3e70;
    lVar7 = 2;
    do {
      fn_82C787E8(param_1,iVar5);
      lVar7 = lVar7 + -1;
      iVar5 = iVar5 + 0x8a0;
    } while (lVar7 != 0);
    return uVar2;
  }
  return uVar2;
}

