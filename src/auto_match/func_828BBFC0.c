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
extern unsigned int *auStack_14c;
extern unsigned int *auStack_1ec;
extern unsigned int *auStack_210;
extern unsigned int *auStack_230;
extern unsigned int *auStack_250;
extern unsigned int *auStack_270;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_82230110();
extern int fn_82230180();
extern int fn_82230360();
extern int fn_82237A48();
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_828BAD68();
extern int fn_828BAE88();
extern int fn_828BB1F0();
extern int fn_828BBB68();
extern int fn_828BBC20();
extern int fn_82A2AAA8();
extern int fn_82F62F60();
extern int fn_82F6ECF8();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_21c;
extern unsigned int uStack_220;
extern unsigned int uStack_23c;
extern unsigned int uStack_240;
extern unsigned int uStack_254;
extern unsigned int uStack_256;
extern unsigned int uStack_258;
extern unsigned int uStack_25a;
extern unsigned int uStack_25e;
extern unsigned int uStack_260;


undefined8 fn_828BBFC0(undefined8 param_1,int param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ushort uVar8;
  char *pcVar9;
  double dVar10;
  undefined4 auStack_270 [4];
  undefined2 uStack_260;
  undefined2 uStack_25e;
  undefined2 uStack_25a;
  ushort uStack_258;
  undefined2 uStack_256;
  undefined2 uStack_254;
  uint auStack_250 [4];
  undefined4 uStack_240;
  uint uStack_23c;
  uint auStack_230 [4];
  undefined4 uStack_220;
  uint uStack_21c;
  undefined1 auStack_210 [32];
  undefined *puStack_1f0;
  undefined1 auStack_1ec [76];
  undefined **appuStack_1a0 [20];
  undefined *puStack_150;
  undefined1 auStack_14c [76];
  undefined **appuStack_100 [20];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  puStack_150 = &lbl_821AA8E0;
  appuStack_100[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_100,auStack_14c,0);
  *(undefined ***)(auStack_14c + *(int *)(puStack_150 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_14c,2);
  puStack_1f0 = &lbl_821AA8E0;
  appuStack_1a0[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_1a0,auStack_1ec,0);
  *(undefined ***)(auStack_1ec + *(int *)(puStack_1f0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_1ec,2);
  iVar3 = *(int *)(param_2 + 0x18);
  if (iVar3 - 1U < 7) {
    if (iVar3 == 2) {
      uVar5 = fn_828BBC20(auStack_b0,param_2 + 0x10,0);
      uVar6 = fn_82240158(&puStack_1f0,0xffffffff820254f8);
      fn_8223B728(uVar6,uVar5);
      fn_82230180(auStack_b0);
    }
    else if (iVar3 == 3) {
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      fn_82240158(&puStack_1f0,0xffffffff820254f0);
      fn_828BAE88(uVar5);
    }
    else if (iVar3 == 4) {
      fn_82230110(auStack_210,0xffffffff82196582);
      if (*(int *)(param_2 + 0x10) != 0) {
        pcVar7 = (char *)fn_8265CA60();
        auStack_270[0] = 0;
        fn_82F6ECF8(auStack_270,pcVar7,(ulonglong)*(uint *)(param_2 + 0x10),
                     *(undefined4 *)(param_2 + 0x14),(ulonglong)*(uint *)(param_2 + 0x10) - 1);
        pcVar9 = pcVar7;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        fn_82230360(auStack_210,pcVar7,pcVar9 + (-1 - (int)pcVar7));
        fn_8265CAA0(pcVar7);
      }
      uVar5 = fn_82240158(&puStack_1f0,0xffffffff820254e4);
      uVar5 = fn_8223B728(uVar5,auStack_210);
      fn_82240158(uVar5,0xffffffff8200c4f8);
      fn_82230180(auStack_210);
    }
    else if (iVar3 == 5) {
      dVar10 = (double)*(float *)(param_2 + 0x10);
      fn_82240158(&puStack_1f0,0xffffffff820254dc);
      fn_82237A48(dVar10);
    }
    else if (iVar3 == 6) {
      uVar4 = *(undefined4 *)(param_2 + 0x10);
      uVar5 = fn_82240158(&puStack_1f0,0xffffffff820254d4);
      uVar5 = fn_82520AC8(uVar5,uVar4);
      fn_82240158(uVar5,0xffffffff820254cc);
    }
    else if (iVar3 == 1) {
      uVar5 = fn_828BBB68(auStack_90,param_2 + 0x10,0);
      uVar6 = fn_82240158(&puStack_1f0,0xffffffff82025504);
      fn_8223B728(uVar6,uVar5);
      fn_82230180(auStack_90);
    }
    else {
      fn_82A2AAA8(param_2 + 0x10,&uStack_260);
      if (uStack_258 == 0) {
        uVar8 = 0xc;
      }
      else {
        uVar8 = -(ushort)(0xc < uStack_258) & 0xfff4;
      }
      if (uStack_258 < 0xc) {
        uVar5 = 0xffffffff820254c8;
      }
      else {
        uVar5 = 0xffffffff820254c4;
      }
      uVar6 = fn_82240158(&puStack_1f0,0xffffffff820254b8);
      uVar6 = fn_82240158(uVar6,0xffffffff820254ac);
      uVar6 = fn_828BAD68(uVar6,uStack_260);
      uVar6 = fn_82240158(uVar6,0xffffffff820254a0);
      uVar6 = fn_828BAD68(uVar6,uStack_25e);
      uVar6 = fn_82240158(uVar6,0xffffffff82025494);
      uVar6 = fn_828BAD68(uVar6,uStack_25a);
      uVar6 = fn_82240158(uVar6,0xffffffff82025484);
      uVar6 = fn_828BAD68(uVar6,uStack_258);
      uVar6 = fn_82240158(uVar6,0xffffffff82025474);
      uVar6 = fn_828BAD68(uVar6,uStack_258 + uVar8);
      uVar5 = fn_82240158(uVar6,uVar5);
      uVar5 = fn_82240158(uVar5,0xffffffff82025464);
      uVar5 = fn_828BAD68(uVar5,uStack_256);
      uVar5 = fn_82240158(uVar5,0xffffffff82025458);
      fn_828BAD68(uVar5,uStack_254);
    }
  }
  else {
    uVar2 = *(undefined1 *)(param_2 + 8);
    uVar5 = fn_82240158(&puStack_1f0,0xffffffff82025444);
    fn_828BB1F0(uVar5,uVar2);
  }
  if (param_3 == '\0') {
    fn_822403C8(auStack_230,auStack_1ec);
    uVar5 = fn_82240158(&puStack_150,0xffffffff8202541c);
    uVar5 = fn_8223B728(uVar5,auStack_230);
    fn_82240158(uVar5,0xffffffff821c27b4);
    if (0xf < uStack_21c) {
      fn_8265CA20(auStack_230[0]);
    }
    uStack_220 = 0;
    auStack_230[0] = auStack_230[0] & 0xffffff;
    uStack_21c = 0xf;
  }
  else {
    fn_822403C8(auStack_250,auStack_1ec);
    uVar5 = fn_82240158(&puStack_150,0xffffffff82025424);
    uVar5 = fn_8223B728(uVar5,auStack_250);
    fn_82240158(uVar5,0xffffffff82196fb0);
    if (0xf < uStack_23c) {
      fn_8265CA20(auStack_250[0]);
    }
    uStack_240 = 0;
    auStack_250[0] = auStack_250[0] & 0xffffff;
    uStack_23c = 0xf;
  }
  fn_822403C8(param_1,auStack_14c);
  fn_8223DBE8(appuStack_1a0);
  appuStack_1a0[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_1a0);
  fn_8223DBE8(appuStack_100);
  appuStack_100[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_100);
  return param_1;
}

