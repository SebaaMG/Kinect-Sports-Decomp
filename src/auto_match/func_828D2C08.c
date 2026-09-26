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
extern unsigned int *auStack_fc;
extern int fn_82230180();
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_828A8E18();
extern int fn_828B94E0();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int lbl_8315A0BC;


undefined8 fn_828D2C08(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_100;
  undefined1 auStack_fc [76];
  undefined **appuStack_b0 [20];
  undefined1 auStack_60 [96];
  
  puStack_100 = &lbl_821AA8E0;
  appuStack_b0[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_b0,auStack_fc,0);
  *(undefined ***)(auStack_fc + *(int *)(puStack_100 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_fc,2);
  puVar6 = (&lbl_8315A0BC)[*(int *)(param_2 + 0x80)];
  uVar7 = fn_82240158(&puStack_100,0xffffffff82026924);
  fn_82240158(uVar7,puVar6);
  iVar2 = *(int *)(param_2 + 0x80);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(param_2 + 0xb4);
    uVar1 = *(undefined1 *)(param_2 + 0xb0);
    uVar4 = *(undefined4 *)(param_2 + 0xac);
    uVar5 = *(undefined4 *)(param_2 + 0xa8);
    uVar7 = fn_828B94E0(auStack_60,param_2 + 0x84,0);
    uVar8 = fn_82240158(&puStack_100,0xffffffff82026908);
    uVar7 = fn_8223B728(uVar8,uVar7);
    uVar7 = fn_82240158(uVar7,0xffffffff820268fc);
    uVar7 = fn_8223FBB0(uVar7,uVar5);
    uVar7 = fn_82240158(uVar7,0xffffffff82026918);
    uVar7 = fn_8223FBB0(uVar7,uVar4);
    uVar7 = fn_82240158(uVar7,0xffffffff820268ec);
    uVar7 = fn_828A8E18(uVar7,uVar1);
    uVar7 = fn_82240158(uVar7,0xffffffff820268d8);
    fn_82520AC8(uVar7,uVar3);
    fn_82230180(auStack_60);
  }
  else if ((iVar2 == 1) || (iVar2 == 3)) {
    uVar3 = *(undefined4 *)(param_2 + 0xac);
    uVar7 = fn_82240158(&puStack_100,0xffffffff82026918);
    fn_8223FBB0(uVar7,uVar3);
  }
  uVar7 = fn_82240158(&puStack_100,0xffffffff820267a8);
  uVar7 = fn_8223B728(uVar7,param_2 + 0xb8);
  fn_82240158(uVar7,0xffffffff82196fb0);
  fn_822403C8(param_1,auStack_fc);
  fn_8223DBE8(appuStack_b0);
  appuStack_b0[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_b0);
  return param_1;
}

