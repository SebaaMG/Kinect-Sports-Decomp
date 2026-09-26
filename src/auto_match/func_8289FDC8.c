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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82230110();
extern int fn_82230180();
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_8223DEF8();
extern int fn_8223DFF0();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822402F8();
extern int fn_822403C8();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int stack0x00000000;


undefined8 fn_8289FDC8(undefined8 param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *apuStack_e0 [20];
  undefined **ppuStack_90;
  
  uVar5 = ZEXT48(&stack0x00000000);
  apuStack_e0[0] = &lbl_821AA8E0;
  ppuStack_90 = &lbl_82020F40;
  fn_8223CD08(uVar5 - 0x90,uVar5 - 0xdc,0);
  *(undefined ***)((int)apuStack_e0 + *(int *)(apuStack_e0[0] + 4)) =
       &lbl_82021284;
  fn_8223CF38(uVar5 - 0xdc,2);
  iVar1 = *(int *)(param_2 + 0x3c);
  if (param_3 == '\0') {
    if (iVar1 == 0) {
      lVar8 = fn_82230110(uVar5 - 0x100,0xffffffff82196582);
    }
    else {
      uVar6 = fn_82230110(uVar5 - 0x120,0xffffffff82196824);
      uVar6 = fn_8223DEF8(uVar6,param_2 + 0x2c,0,0xffffffffffffffff);
      fn_822402F8(uVar5 - 0x140,uVar6);
      lVar8 = uVar5 - 0x140;
    }
    if (*(char *)(param_2 + 0x26) == '\0') {
      uVar6 = 0xffffffff820237d0;
    }
    else {
      uVar6 = 0xffffffff820237d8;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x28);
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar7 = fn_82240158(uVar5 - 0xe0,0xffffffff82023c68);
    uVar6 = fn_82240158(uVar7,uVar6);
    uVar6 = fn_8223B728(uVar6,lVar8);
    uVar6 = fn_82240158(uVar6,0xffffffff82023c84);
    uVar6 = fn_8223FBB0(uVar6,uVar4);
    uVar6 = fn_82240158(uVar6,0xffffffff82023c7c);
    uVar6 = fn_8223FBB0(uVar6,uVar3);
    uVar6 = fn_82240158(uVar6,0xffffffff82023c74);
    uVar6 = fn_8223FBB0(uVar6,uVar2);
    fn_82240158(uVar6,0xffffffff82196fb0);
    if (iVar1 == 0) {
      fn_82230180(uVar5 - 0x100);
      goto LAB_828a00d0;
    }
    fn_82230180(uVar5 - 0x140);
    lVar8 = uVar5 - 0x120;
  }
  else {
    if (iVar1 == 0) {
      lVar8 = fn_82230110(uVar5 - 0x120,0xffffffff82196582);
    }
    else {
      uVar6 = fn_82230110(uVar5 - 0x100,0xffffffff82023cb8);
      uVar6 = fn_8223DEF8(uVar6,param_2 + 0x2c,0,0xffffffffffffffff);
      uVar6 = fn_8223DFF0(uVar6,0xffffffff82023cb0,7);
      fn_822402F8(uVar5 - 0x160,uVar6);
      lVar8 = uVar5 - 0x160;
    }
    if (*(char *)(param_2 + 0x26) == '\0') {
      uVar6 = 0xffffffff820237d0;
    }
    else {
      uVar6 = 0xffffffff820237d8;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x28);
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar7 = fn_82240158(uVar5 - 0xe0,0xffffffff82023c8c);
    uVar6 = fn_82240158(uVar7,uVar6);
    uVar6 = fn_8223B728(uVar6,lVar8);
    uVar6 = fn_82240158(uVar6,0xffffffff82023c84);
    uVar6 = fn_8223FBB0(uVar6,uVar4);
    uVar6 = fn_82240158(uVar6,0xffffffff82023c7c);
    uVar6 = fn_8223FBB0(uVar6,uVar3);
    uVar6 = fn_82240158(uVar6,0xffffffff82023c74);
    uVar6 = fn_8223FBB0(uVar6,uVar2);
    fn_82240158(uVar6,0xffffffff82196fb0);
    if (iVar1 == 0) {
      fn_82230180(uVar5 - 0x120);
      goto LAB_828a00d0;
    }
    fn_82230180(uVar5 - 0x160);
    lVar8 = uVar5 - 0x100;
  }
  fn_82230180(lVar8);
LAB_828a00d0:
  fn_822403C8(param_1,uVar5 - 0xdc);
  fn_8223DBE8(uVar5 - 0x90);
  ppuStack_90 = &lbl_82020F30;
  fn_82F62F60(uVar5 - 0x90);
  return param_1;
}

