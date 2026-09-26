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
extern unsigned int *auStack_cc;
extern unsigned int *auStack_d4;
extern unsigned int *auStack_e0;
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8288CD40();
extern int fn_828A12E8();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F0();
extern int fn_828B55F8();
extern int fn_828B5600();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_d8;


undefined8
fn_82892758(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar7;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_e0 [8];
  undefined4 uStack_d8;
  undefined1 auStack_d4 [4];
  undefined *puStack_d0;
  undefined1 auStack_cc [76];
  undefined **appuStack_80 [32];
  
  fn_828B5580(auStack_e0,param_4 + 8);
  puStack_d0 = &lbl_821AA8E0;
  appuStack_80[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_80,auStack_cc,0);
  *(undefined ***)(auStack_cc + *(int *)(puStack_d0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_cc,2);
  uStack_d8 = fn_828B55F8(auStack_e0);
  lVar2 = fn_828A12E8(param_5);
  puVar7 = (uint *)fn_8288CD40(auStack_d4,lVar2 + 0x94,&uStack_d8);
  uVar1 = *puVar7;
  uVar3 = fn_828B5600(auStack_e0);
  uVar4 = fn_828B55F8(auStack_e0);
  uVar5 = fn_828B55F0(auStack_e0);
  uVar6 = fn_82240158(&puStack_d0,0xffffffff82023810);
  uVar5 = fn_82520AC8(uVar6,uVar5);
  uVar5 = fn_82240158(uVar5,0xffffffff82023804);
  uVar4 = fn_82520AC8(uVar5,uVar4);
  uVar4 = fn_82240158(uVar4,0xffffffff82023800);
  uVar4 = fn_8223B728(uVar4,(ulonglong)uVar1 + 0x10);
  uVar4 = fn_82240158(uVar4,0xffffffff820237f8);
  uVar3 = fn_82520AC8(uVar4,uVar3);
  fn_82240158(uVar3,0xffffffff82196fb0);
  fn_822403C8(param_1,auStack_cc);
  fn_8223DBE8(appuStack_80);
  appuStack_80[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_80);
  fn_828B55B0(auStack_e0);
  return param_1;
}

