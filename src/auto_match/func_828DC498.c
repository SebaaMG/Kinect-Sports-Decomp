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
extern unsigned int *auStack_dc;
extern int fn_82237920();
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_828A0948();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;


undefined8 fn_828DC498(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_e0;
  undefined1 auStack_dc [76];
  undefined **appuStack_90 [36];
  
  puStack_e0 = &lbl_821AA8E0;
  appuStack_90[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_90,auStack_dc,0);
  *(undefined ***)(auStack_dc + *(int *)(puStack_e0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_dc,2);
  uVar8 = *(undefined8 *)(param_2 + 0x98);
  uVar6 = fn_828A0948(*(undefined4 *)(param_2 + 0x94));
  uVar7 = fn_82240158(&puStack_e0,0xffffffff82026ec8);
  uVar6 = fn_82240158(uVar7,uVar6);
  uVar6 = fn_82240158(uVar6,0xffffffff82026eb4);
  fn_82237920(uVar6,uVar8);
  if (*(int *)(param_2 + 0x94) == 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x90);
    uVar2 = *(undefined4 *)(param_2 + 0x8c);
    uVar3 = *(undefined4 *)(param_2 + 0x88);
    uVar4 = *(undefined4 *)(param_2 + 0x84);
    uVar5 = *(undefined4 *)(param_2 + 0x80);
    uVar6 = fn_82240158(&puStack_e0,0xffffffff82026ea4);
    uVar6 = fn_8223FBB0(uVar6,uVar5);
    uVar6 = fn_82240158(uVar6,0xffffffff82026e94);
    uVar6 = fn_8223FBB0(uVar6,uVar4);
    uVar6 = fn_82240158(uVar6,0xffffffff82026e7c);
    uVar6 = fn_82520AC8(uVar6,uVar3);
    uVar6 = fn_82240158(uVar6,0xffffffff82026e6c);
    uVar6 = fn_8223FBB0(uVar6,uVar2);
    uVar6 = fn_82240158(uVar6,0xffffffff82026e5c);
    fn_8223FBB0(uVar6,uVar1);
  }
  uVar6 = fn_82240158(&puStack_e0,0xffffffff820267a8);
  uVar6 = fn_8223B728(uVar6,param_2 + 0xa4);
  fn_82240158(uVar6,0xffffffff82196fb0);
  fn_822403C8(param_1,auStack_dc);
  fn_8223DBE8(appuStack_90);
  appuStack_90[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_90);
  return param_1;
}

