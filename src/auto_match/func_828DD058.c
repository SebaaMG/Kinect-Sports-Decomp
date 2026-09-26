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
extern unsigned int *auStack_cc;
extern unsigned int *auStack_f0;
extern int fn_82237920();
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8265CA20();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5A20();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


undefined8 fn_828DD058(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_100 [16];
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
  if (*(char *)(param_2 + 0x80) == '\0') {
    uVar4 = 0xffffffff82026f3c;
  }
  else {
    uVar4 = 0xffffffff82026f48;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  fn_828B5580(auStack_100,param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = fn_828B5A20(auStack_f0,auStack_100,param_3,uVar1);
  uVar3 = fn_82240158(&puStack_d0,0xffffffff82026f30);
  uVar2 = fn_8223B728(uVar3,uVar2);
  uVar2 = fn_82240158(uVar2,0xffffffff82026f28);
  uVar2 = fn_82237920(uVar2,uVar5);
  uVar2 = fn_82240158(uVar2,0xffffffff82026f20);
  uVar4 = fn_82240158(uVar2,uVar4);
  fn_82240158(uVar4,0xffffffff82026f18);
  if (0xf < uStack_dc) {
    fn_8265CA20(auStack_f0[0]);
  }
  uStack_e0 = 0;
  auStack_f0[0] = auStack_f0[0] & 0xffffff;
  uStack_dc = 0xf;
  fn_828B55B0(auStack_100);
  fn_822403C8(param_1,auStack_cc);
  fn_8223DBE8(appuStack_80);
  appuStack_80[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_80);
  return param_1;
}

