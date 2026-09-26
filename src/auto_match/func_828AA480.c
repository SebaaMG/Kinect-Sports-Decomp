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
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int *auStack_cc;
extern unsigned int *auStack_f0;
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8224E978();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_828B7940();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_100;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_fc;


undefined8 fn_828AA480(undefined8 param_1,int *param_2,char param_3)

{
  int iVar5;
  char cVar6;
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 auStack_160 [2];
  uint auStack_150 [4];
  undefined4 uStack_140;
  uint uStack_13c;
  uint auStack_130 [4];
  undefined4 uStack_120;
  uint uStack_11c;
  uint auStack_110 [4];
  undefined4 uStack_100;
  uint uStack_fc;
  uint auStack_f0 [4];
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined *puStack_d0;
  undefined1 auStack_cc [76];
  undefined **appuStack_80 [32];
  
  puStack_d0 = &lbl_821AA8E0;
  appuStack_80[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_80,auStack_cc,0);
  *(undefined ***)(auStack_cc + *(int *)(puStack_d0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_cc,2);
  if (param_3 == '\0') {
    auStack_160[0] = (**(code **)(*param_2 + 0x48))(param_2);
    iVar5 = (**(code **)(*param_2 + 4))(param_2);
    cVar6 = (**(code **)(*(int *)(iVar5 + 0x1ec) + 0x3c))();
    if (cVar6 == '\0') {
      uVar7 = 0xffffffff820244bc;
    }
    else {
      uVar7 = 0xffffffff820244c4;
    }
    cVar6 = fn_8288B760(param_2);
    if (cVar6 == '\0') {
      uVar8 = 0xffffffff820244ac;
    }
    else {
      uVar8 = 0xffffffff820244b4;
    }
    lVar1 = (**(code **)(*param_2 + 4))(param_2);
    fn_8224E978(auStack_150,lVar1 + 0x9c);
    uVar2 = fn_828B7940(auStack_f0,auStack_160,0);
    uVar3 = (**(code **)(*param_2 + 0x44))(param_2);
    uVar4 = fn_82240158(&puStack_d0,0xffffffff82024448);
    uVar4 = fn_8223B728(uVar4,auStack_150);
    uVar4 = fn_82240158(uVar4,0xffffffff820060d0);
    uVar8 = fn_82240158(uVar4,uVar8);
    uVar8 = fn_82240158(uVar8,0xffffffff82196824);
    uVar7 = fn_82240158(uVar8,uVar7);
    uVar7 = fn_82240158(uVar7,0xffffffff82024438);
    uVar7 = fn_82520AC8(uVar7,uVar3);
    uVar7 = fn_82240158(uVar7,0xffffffff82024454);
    uVar7 = fn_8223B728(uVar7,uVar2);
    fn_82240158(uVar7,0xffffffff82196fb0);
    if (0xf < uStack_13c) {
      fn_8265CA20(auStack_150[0]);
    }
    uStack_140 = 0;
    uStack_13c = 0xf;
    auStack_150[0] = auStack_150[0] & 0xffffff;
    if (0xf < uStack_dc) {
      fn_8265CA20(auStack_f0[0]);
    }
    uStack_dc = 0xf;
    uStack_e0 = 0;
    auStack_f0[0] = auStack_f0[0] & 0xffffff;
  }
  else {
    auStack_160[0] = (**(code **)(*param_2 + 0x48))(param_2);
    iVar5 = (**(code **)(*param_2 + 4))(param_2);
    cVar6 = (**(code **)(*(int *)(iVar5 + 0x1ec) + 0x3c))();
    if (cVar6 == '\0') {
      uVar7 = 0xffffffff820244bc;
    }
    else {
      uVar7 = 0xffffffff820244c4;
    }
    cVar6 = fn_8288B760(param_2);
    if (cVar6 == '\0') {
      uVar8 = 0xffffffff820244ac;
    }
    else {
      uVar8 = 0xffffffff820244b4;
    }
    lVar1 = (**(code **)(*param_2 + 4))(param_2);
    fn_8224E978(auStack_130,lVar1 + 0x9c);
    uVar2 = fn_828B7940(auStack_110,auStack_160,0);
    uVar3 = (**(code **)(*param_2 + 0x44))(param_2);
    uVar4 = fn_82240158(&puStack_d0,0xffffffff82024478);
    uVar4 = fn_8223B728(uVar4,auStack_130);
    uVar4 = fn_82240158(uVar4,0xffffffff8202446c);
    uVar8 = fn_82240158(uVar4,uVar8);
    uVar8 = fn_82240158(uVar8,0xffffffff82196824);
    uVar7 = fn_82240158(uVar8,uVar7);
    uVar7 = fn_82240158(uVar7,0xffffffff8202445c);
    uVar7 = fn_82520AC8(uVar7,uVar3);
    uVar7 = fn_82240158(uVar7,0xffffffff82024454);
    uVar7 = fn_8223B728(uVar7,uVar2);
    fn_82240158(uVar7,0xffffffff82196fb0);
    if (0xf < uStack_11c) {
      fn_8265CA20(auStack_130[0]);
    }
    uStack_120 = 0;
    uStack_11c = 0xf;
    auStack_130[0] = auStack_130[0] & 0xffffff;
    if (0xf < uStack_fc) {
      fn_8265CA20(auStack_110[0]);
    }
    uStack_fc = 0xf;
    uStack_100 = 0;
    auStack_110[0] = auStack_110[0] & 0xffffff;
  }
  fn_822403C8(param_1,auStack_cc);
  fn_8223DBE8(appuStack_80);
  appuStack_80[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_80);
  return param_1;
}

