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
extern unsigned int *auStack_100;
extern unsigned int *auStack_dc;
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_828B7940();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


undefined8 fn_828B7BD8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint auStack_100 [4];
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined *puStack_e0;
  undefined1 auStack_dc [76];
  undefined **appuStack_90 [36];
  
  puStack_e0 = &lbl_821AA8E0;
  appuStack_90[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_90,auStack_dc,0);
  *(undefined ***)(auStack_dc + *(int *)(puStack_e0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_dc,2);
  if (*(int *)(param_2 + 0x50) == 0) {
    uVar6 = 0xffffffff82025294;
  }
  else {
    uVar6 = 0xffffffff8202529c;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  uVar4 = fn_828B7940(auStack_100,param_2 + 0x38,0);
  uVar5 = fn_82240158(&puStack_e0,0xffffffff82025218);
  uVar4 = fn_8223B728(uVar5,uVar4);
  uVar4 = fn_82240158(uVar4,0xffffffff820251ec);
  uVar4 = fn_82520AC8(uVar4,uVar3);
  uVar4 = fn_82240158(uVar4,0xffffffff820251c0);
  uVar4 = fn_82520AC8(uVar4,uVar2);
  uVar4 = fn_82240158(uVar4,0xffffffff82025190);
  uVar4 = fn_82520AC8(uVar4,uVar1);
  uVar4 = fn_82240158(uVar4,0xffffffff8202516c);
  uVar6 = fn_82240158(uVar4,uVar6);
  fn_82240158(uVar6,0xffffffff82025070);
  if (0xf < uStack_ec) {
    fn_8265CA20(auStack_100[0]);
  }
  uStack_f0 = 0;
  auStack_100[0] = auStack_100[0] & 0xffffff;
  uStack_ec = 0xf;
  fn_822403C8(param_1,auStack_dc);
  fn_8223DBE8(appuStack_90);
  appuStack_90[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_90);
  return param_1;
}

