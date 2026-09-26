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
extern unsigned int *auStack_bc;
extern unsigned int *auStack_e0;
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8265CA20();
extern int fn_828B7940();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


undefined8 fn_828B5400(undefined8 param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint auStack_100 [4];
  undefined4 uStack_f0;
  uint uStack_ec;
  uint auStack_e0 [4];
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined *puStack_c0;
  undefined1 auStack_bc [76];
  undefined **appuStack_70 [28];
  
  puStack_c0 = &lbl_821AA8E0;
  appuStack_70[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_70,auStack_bc,0);
  *(undefined ***)(auStack_bc + *(int *)(puStack_c0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_bc,2);
  if (param_3 == '\0') {
    uVar1 = fn_828B7940(auStack_100,param_2 + 0x30,0);
    uVar2 = fn_82240158(&puStack_c0,0xffffffff82024ecc);
    uVar1 = fn_8223B728(uVar2,uVar1);
    fn_82240158(uVar1,0xffffffff82196fb0);
    if (0xf < uStack_ec) {
      fn_8265CA20(auStack_100[0]);
    }
    uStack_f0 = 0;
    auStack_100[0] = auStack_100[0] & 0xffffff;
    uStack_ec = 0xf;
  }
  else {
    uVar1 = fn_828B7940(auStack_e0,param_2 + 0x30,0);
    uVar2 = fn_82240158(&puStack_c0,0xffffffff82024ee4);
    uVar1 = fn_8223B728(uVar2,uVar1);
    fn_82240158(uVar1,0xffffffff82196fb0);
    if (0xf < uStack_cc) {
      fn_8265CA20(auStack_e0[0]);
    }
    uStack_d0 = 0;
    auStack_e0[0] = auStack_e0[0] & 0xffffff;
    uStack_cc = 0xf;
  }
  fn_822403C8(param_1,auStack_bc);
  fn_8223DBE8(appuStack_70);
  appuStack_70[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_70);
  return param_1;
}

