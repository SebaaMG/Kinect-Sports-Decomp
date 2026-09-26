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
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_dc;
extern int fn_82230110();
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_8288F1E8();
extern int fn_828B5A20();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


undefined8 fn_828C8AB8(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint auStack_140 [4];
  undefined4 uStack_130;
  uint uStack_12c;
  uint auStack_120 [4];
  undefined4 uStack_110;
  uint uStack_10c;
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
  piVar6 = (int *)fn_8288F1E8(*(undefined4 *)(param_2 + 0x6c),param_2 + 0x84);
  bVar1 = piVar6 == (int *)0x0;
  if (bVar1) {
    uVar3 = fn_82230110(auStack_140,0xffffffff82025294);
  }
  else {
    uVar3 = (**(code **)(*piVar6 + 0x10))(auStack_120,piVar6,param_3);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  uVar4 = fn_828B5A20(auStack_100,param_2 + 0x84,param_3,*(undefined4 *)(param_2 + 0x6c));
  uVar5 = fn_82240158(&puStack_e0,0xffffffff82026418);
  uVar5 = fn_82240158(uVar5,0xffffffff82026408);
  uVar4 = fn_8223B728(uVar5,uVar4);
  uVar4 = fn_82240158(uVar4,0xffffffff820261ec);
  uVar3 = fn_8223B728(uVar4,uVar3);
  uVar3 = fn_82240158(uVar3,0xffffffff820263f0);
  fn_82520AC8(uVar3,uVar2);
  if (0xf < uStack_ec) {
    fn_8265CA20(auStack_100[0]);
  }
  uStack_f0 = 0;
  auStack_100[0] = auStack_100[0] & 0xffffff;
  uStack_ec = 0xf;
  if (bVar1) {
    if (0xf < uStack_12c) {
      fn_8265CA20(auStack_140[0]);
    }
    uStack_12c = 0xf;
    uStack_130 = 0;
    auStack_140[0] = auStack_140[0] & 0xffffff;
  }
  if (!bVar1) {
    if (0xf < uStack_10c) {
      fn_8265CA20(auStack_120[0]);
    }
    uStack_10c = 0xf;
    uStack_110 = 0;
    auStack_120[0] = auStack_120[0] & 0xffffff;
  }
  fn_822403C8(param_1,auStack_dc);
  fn_8223DBE8(appuStack_90);
  appuStack_90[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_90);
  return param_1;
}

