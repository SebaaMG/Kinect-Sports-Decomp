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
extern unsigned int *auStack_130;
extern unsigned int *auStack_dc;
extern unsigned int *auStack_e0;
extern int fn_82230300();
extern int fn_822351A0();
extern int fn_82237A48();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_828E5538();
extern int fn_828E9D28();
extern unsigned int iStack_118;
extern unsigned int iStack_120;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_11c;


undefined8 fn_82237318(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_130 [16];
  int iStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [220];
  
  iStack_120 = param_4 + 8;
  if (4 < *(uint *)(param_4 + 0xc)) {
    iStack_120 = *(int *)(param_4 + 8);
  }
  iStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_11c = 8;
  fn_828E9D28(auStack_130,iStack_120,8);
  uVar3 = fn_828E5538(auStack_130,0xb,7);
  uVar4 = fn_828E5538(auStack_130,0xb,7);
  uVar5 = fn_828E5538(auStack_130,0xb,7);
  fn_8223CFC0(auStack_e0,2,1);
  uVar1 = fn_822351A0(auStack_100,param_2,param_3,param_4);
  uVar2 = fn_82240158(auStack_e0,0xffffffff82196844);
  uVar2 = fn_82520AC8(uVar2,0xb);
  uVar2 = fn_82240158(uVar2,0xffffffff82196824);
  uVar2 = fn_8223FBB0(uVar2,7);
  uVar2 = fn_82240158(uVar2,0xffffffff82196824);
  uVar2 = fn_82520AC8(uVar2,0xb);
  uVar2 = fn_82240158(uVar2,0xffffffff82196824);
  uVar2 = fn_8223FBB0(uVar2,7);
  uVar2 = fn_82240158(uVar2,0xffffffff82196824);
  uVar2 = fn_82520AC8(uVar2,0xb);
  uVar2 = fn_82240158(uVar2,0xffffffff82196824);
  uVar2 = fn_8223FBB0(uVar2,7);
  uVar2 = fn_82240158(uVar2,0xffffffff82196824);
  fn_82240158(uVar2,0xffffffff82196fb4);
  uVar2 = fn_82237A48(uVar3);
  fn_82240158(uVar2,0xffffffff82196824);
  uVar2 = fn_82237A48(uVar4);
  fn_82240158(uVar2,0xffffffff82196824);
  uVar2 = fn_82237A48(uVar5);
  uVar2 = fn_82240158(uVar2,0xffffffff8219681c);
  uVar1 = fn_8223B728(uVar2,uVar1);
  fn_82240158(uVar1,0xffffffff82196fb0);
  fn_82230300(auStack_100,1,0);
  fn_822403C8(param_1,auStack_dc);
  fn_8223DCC8(auStack_e0);
  if (iStack_118 != 0) {
    fn_8265CA20();
  }
  return param_1;
}

