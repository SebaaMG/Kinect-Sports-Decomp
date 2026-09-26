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
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695598();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_826A0968();
extern int fn_826A5E30();
extern int fn_826A69E8();
extern int fn_826A79D8();
extern int fn_826A8330();
extern int fn_826AD078();
extern int fn_826B1688();
extern int fn_826BA3C0();
extern int fn_826BA4A0();
extern int fn_826BA580();
extern int fn_826BA660();
extern int fn_826BA740();
extern int fn_826BA820();
extern int fn_826BA900();
extern int fn_826BA9E0();
extern int fn_826BAAC0();
extern int fn_826BABA0();
extern int fn_826BAC80();
extern int fn_826BAD60();
extern int fn_826BAE40();
extern int fn_826BAF20();
extern int fn_826BB000();
extern int fn_826BB0E0();
extern int fn_826BB1C0();
extern int fn_826BB2A0();
extern int fn_826BB380();
extern int fn_826BB460();
extern int fn_826BB540();
extern int fn_826BB620();
extern int fn_826BB700();
extern int fn_826BB7E0();
extern int fn_826BB8C0();
extern int fn_826BB9A0();
extern int fn_826BBA80();
extern int fn_826BBB60();
extern int fn_826BBC40();
extern int fn_826BBD20();
extern int fn_826BBE00();
extern int fn_826C0ED0();
extern int fn_826C2B20();
extern int fn_826C3B90();
extern int fn_826C3C70();
extern int fn_826D2648();
extern int fn_827522E0();
extern int fn_82752C10();
extern unsigned int iStack_4c;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int lbl_82007464;
extern unsigned int lbl_8200C4D4;
extern unsigned int uStack_94;
extern unsigned int uStack_ad;
extern unsigned int uStack_ae;
extern unsigned int uStack_af;
extern unsigned int uStack_b0;


/* WARNING: Type propagation algorithm not settling */

void fn_826BBF30(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar6;
  longlong lVar4;
  undefined8 uVar5;
  int iVar7;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int aiStack_a0 [3];
  undefined1 uStack_94;
  int iStack_90;
  int iStack_8c;
  byte bStack_88;
  int iStack_80;
  int iStack_7c;
  byte bStack_78;
  int iStack_70;
  int iStack_6c;
  byte bStack_68;
  int iStack_60;
  int iStack_5c;
  byte bStack_58;
  undefined **ppuStack_50;
  int iStack_4c;
  int *piStack_48;
  undefined1 auStack_40 [64];
  
  *(int *)(param_1 + 0x284) = param_2;
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uStack_94 = 8;
  *(undefined4 *)(param_1 + 0x288) = uVar6;
  aiStack_a0[2] = param_1;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    uVar3 = fn_8267B890(uVar6,0x34,0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_826A8330(uVar3,param_1);
    }
    if (*(int *)(param_1 + 0x2a0) != 0) {
      fn_826824B0();
    }
    *(undefined4 *)(param_1 + 0x2a0) = uVar6;
  }
  uVar3 = fn_8267B890(*(undefined4 *)(param_1 + 0x288),0x34,0);
  if ((uVar3 & 0xffffffff) == 0) {
    iStack_60 = 0;
  }
  else {
    iStack_60 = fn_826C0ED0(uVar3,aiStack_a0 + 2);
  }
  bStack_58 = 0;
  iStack_5c = 0;
  uVar3 = fn_8267B890(*(undefined4 *)(param_1 + 0x288),0x34,0);
  if ((uVar3 & 0xffffffff) == 0) {
    iStack_90 = 0;
  }
  else {
    iStack_90 = fn_826C3B90(uVar3,aiStack_a0 + 2);
  }
  bStack_88 = 0;
  iStack_8c = 0;
  uVar3 = fn_8267B890(*(undefined4 *)(param_1 + 0x288),0x50,0);
  if ((uVar3 & 0xffffffff) == 0) {
    iStack_ac = 0;
  }
  else {
    iStack_ac = fn_826C2B20(uVar3,aiStack_a0 + 2,&iStack_60);
  }
  uVar3 = fn_8267B890(*(undefined4 *)(param_1 + 0x288),0x50,0);
  if ((uVar3 & 0xffffffff) == 0) {
    iStack_a8 = 0;
  }
  else {
    iStack_a8 = fn_826C3C70(uVar3,aiStack_a0 + 2,iStack_ac,&iStack_90,1);
  }
  (**(code **)(*(int *)(iStack_60 + 0x10) + 0x34))(iStack_60 + 0x10,aiStack_a0 + 2);
  (**(code **)(*(int *)(iStack_90 + 0x10) + 0x34))(iStack_90 + 0x10,aiStack_a0 + 2,iStack_a8);
  iVar7 = param_1 + 0x278;
  aiStack_a0[1] = 1;
  fn_826A5E30(iVar7,aiStack_a0 + 1,&iStack_ac);
  aiStack_a0[1] = 7;
  fn_826A5E30(iVar7,aiStack_a0 + 1,&iStack_a8);
  uVar3 = fn_8267B890(*(undefined4 *)(param_1 + 0x288),0x34,0);
  if ((uVar3 & 0xffffffff) == 0) {
    iStack_70 = 0;
  }
  else {
    iStack_70 = fn_826A69E8(uVar3,aiStack_a0 + 2);
  }
  bStack_68 = 0;
  iStack_6c = 0;
  uVar3 = fn_8267B890(*(undefined4 *)(param_1 + 0x288),0x48,0);
  if ((uVar3 & 0xffffffff) == 0) {
    iStack_80 = 0;
  }
  else {
    iStack_80 = fn_827522E0(uVar3,aiStack_a0 + 2,param_2);
  }
  bStack_78 = 0;
  iStack_7c = 0;
  uVar3 = fn_8267B890(*(undefined4 *)(param_1 + 0x288),0x50,0);
  if ((uVar3 & 0xffffffff) == 0) {
    aiStack_a0[0] = 0;
  }
  else {
    aiStack_a0[0] = fn_82752C10(uVar3,aiStack_a0 + 2,iStack_ac,&iStack_80);
  }
  aiStack_a0[1] = 0x1a;
  fn_826A5E30(iVar7,aiStack_a0 + 1,aiStack_a0);
  uVar3 = fn_8267B890(*(undefined4 *)(param_1 + 0x288),0x58,0);
  if ((uVar3 & 0xffffffff) == 0) {
    iStack_a4 = 0;
  }
  else {
    iStack_a4 = fn_826D2648(uVar3,aiStack_a0 + 2,iStack_ac,&iStack_70);
  }
  aiStack_a0[1] = 6;
  fn_826A5E30(iVar7,aiStack_a0 + 1,&iStack_a4);
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x2a0) + 0x10;
  if ((ulonglong)*(uint *)(param_1 + 0x2a0) == 0) {
    lVar4 = 0;
  }
  fn_826B1688(lVar4,aiStack_a0 + 2,0xffffffff83155978,0);
  uVar1 = *(uint *)(param_1 + 0x2a0);
  uVar5 = fn_82695598(auStack_40,aiStack_a0 + 2,0xffffffff826a80d8);
  fn_826A79D8((ulonglong)uVar1 + 0x10,aiStack_a0 + 2,0xffffffff82007048,uVar5);
  fn_82696330(auStack_40);
  uVar1 = *(uint *)(param_1 + 0x2a0);
  uVar5 = fn_82695598(auStack_40,aiStack_a0 + 2,0xffffffff826ac4b0);
  fn_826A79D8((ulonglong)uVar1 + 0x10,aiStack_a0 + 2,0xffffffff8200702c,uVar5);
  fn_82696330(auStack_40);
  uVar1 = *(uint *)(param_1 + 0x2a0);
  uVar5 = fn_82695598(auStack_40,aiStack_a0 + 2,0xffffffff826a81f8);
  fn_826A79D8((ulonglong)uVar1 + 0x10,aiStack_a0 + 2,0xffffffff82007018,uVar5);
  fn_82696330(auStack_40);
  uVar1 = *(uint *)(param_1 + 0x2a0);
  uVar5 = fn_82695598(auStack_40,aiStack_a0 + 2,0xffffffff826acca8);
  fn_826A79D8((ulonglong)uVar1 + 0x10,aiStack_a0 + 2,0xffffffff82006ffc,uVar5);
  fn_82696330(auStack_40);
  uStack_b0 = 0;
  iVar7 = *(int *)(param_1 + 0x2a0);
  iVar2 = *(int *)(iVar7 + 0x10);
  uVar5 = fn_82695750(auStack_40,&iStack_60);
  (**(code **)(iVar2 + 0x28))(iVar7 + 0x10,aiStack_a0 + 2,param_1 + 0xc,uVar5,&uStack_b0);
  fn_82696330(auStack_40);
  iVar7 = *(int *)(param_1 + 0x2a0);
  uStack_af = 0;
  iVar2 = *(int *)(iVar7 + 0x10);
  uVar5 = fn_82695750(auStack_40,&iStack_90);
  (**(code **)(iVar2 + 0x28))(iVar7 + 0x10,aiStack_a0 + 2,param_1 + 0x24,uVar5,&uStack_af);
  fn_82696330(auStack_40);
  uStack_ae = 0;
  iVar7 = *(int *)(param_1 + 0x2a0);
  iVar2 = *(int *)(iVar7 + 0x10);
  uVar5 = fn_82695750(auStack_40,&iStack_70);
  (**(code **)(iVar2 + 0x28))(iVar7 + 0x10,aiStack_a0 + 2,param_1 + 0x20,uVar5,&uStack_ae);
  fn_82696330(auStack_40);
  uStack_ad = 0;
  iVar7 = *(int *)(param_1 + 0x2a0);
  iVar2 = *(int *)(iVar7 + 0x10);
  uVar5 = fn_82695750(auStack_40,&iStack_80);
  (**(code **)(iVar2 + 0x28))(iVar7 + 0x10,aiStack_a0 + 2,param_1 + 0x70,uVar5,&uStack_ad);
  fn_82696330(auStack_40);
  fn_826BA3C0(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BA4A0(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BA580(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BA660(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BA740(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BA820(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BA900(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BA9E0(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BAAC0(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BABA0(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BAC80(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BAD60(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BAE40(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BAF20(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BB000(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BB0E0(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BB1C0(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  fn_826BB2A0(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0));
  uVar5 = fn_826AD078(aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0),iStack_ac,
                            0xffffffff820082c0);
  *(int *)(param_1 + 0x28c) = (int)uVar5;
  fn_826BB380(param_1,aiStack_a0 + 2,uVar5);
  fn_826BB460(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x28c));
  fn_826BB540(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x28c));
  fn_826BB620(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x28c));
  fn_826BB700(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x28c));
  uVar5 = fn_826AD078(aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0),iStack_ac,
                            0xffffffff820082b8);
  *(int *)(param_1 + 0x290) = (int)uVar5;
  fn_826BB7E0(param_1,aiStack_a0 + 2,uVar5);
  fn_826BB8C0(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x290));
  uVar5 = fn_826AD078(aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0),iStack_ac,
                            0xffffffff820082a8);
  *(int *)(param_1 + 0x294) = (int)uVar5;
  fn_826BB9A0(param_1,aiStack_a0 + 2,uVar5);
  uVar5 = fn_826AD078(aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0),iStack_ac,
                            0xffffffff82008298);
  *(int *)(param_1 + 0x298) = (int)uVar5;
  fn_826BBA80(param_1,aiStack_a0 + 2,uVar5);
  uVar5 = fn_826AD078(aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x2a0),iStack_ac,
                            0xffffffff82008288);
  *(int *)(param_1 + 0x29c) = (int)uVar5;
  fn_826BBB60(param_1,aiStack_a0 + 2,uVar5);
  fn_826BBC40(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x29c));
  fn_826BBD20(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x29c));
  fn_826BBE00(param_1,aiStack_a0 + 2,*(undefined4 *)(param_1 + 0x29c));
  fn_826A0968(param_1);
  iStack_4c = *(int *)(param_1 + 0x2a0);
  ppuStack_50 = &lbl_82007464;
  if (iStack_4c != 0) {
    *(uint *)(iStack_4c + 8) = *(int *)(iStack_4c + 8) + 1U & 0x8fffffff;
  }
  piStack_48 = aiStack_a0 + 2;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x2a0) + 0x10) + 0x20))
            (*(int *)(param_1 + 0x2a0) + 0x10,aiStack_a0 + 2,&ppuStack_50,4,0);
  if (iStack_4c != 0) {
    fn_826824B0();
  }
  ppuStack_50 = &lbl_8200C4D4;
  if (iStack_a4 != 0) {
    fn_826824B0();
  }
  if (aiStack_a0[0] != 0) {
    fn_826824B0();
  }
  if (((bStack_78 & 2) == 0) && (iStack_80 != 0)) {
    fn_826824B0();
  }
  iStack_80 = 0;
  if (((bStack_78 & 1) == 0) && (iStack_7c != 0)) {
    fn_826824B0();
  }
  iStack_7c = 0;
  if (((bStack_68 & 2) == 0) && (iStack_70 != 0)) {
    fn_826824B0();
  }
  iStack_70 = 0;
  if (((bStack_68 & 1) == 0) && (iStack_6c != 0)) {
    fn_826824B0();
  }
  iStack_6c = 0;
  if (iStack_a8 != 0) {
    fn_826824B0();
  }
  if (iStack_ac != 0) {
    fn_826824B0();
  }
  if (((bStack_88 & 2) == 0) && (iStack_90 != 0)) {
    fn_826824B0();
  }
  iStack_90 = 0;
  if (((bStack_88 & 1) == 0) && (iStack_8c != 0)) {
    fn_826824B0();
  }
  iStack_8c = 0;
  if (((bStack_58 & 2) == 0) && (iStack_60 != 0)) {
    fn_826824B0();
  }
  iStack_60 = 0;
  if (((bStack_58 & 1) == 0) && (iStack_5c != 0)) {
    fn_826824B0();
  }
  return;
}

