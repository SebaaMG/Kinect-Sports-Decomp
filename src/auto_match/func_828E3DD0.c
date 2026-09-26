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
extern unsigned int *auStack_ac;
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;


undefined8 fn_828E3DD0(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined1 auStack_ac [76];
  undefined **appuStack_60 [18];
  
  iVar3 = (**(code **)(*param_2 + 0x1c))(param_2);
  puStack_b0 = &lbl_821AA8E0;
  appuStack_60[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_60,auStack_ac,0);
  *(undefined ***)(auStack_ac + *(int *)(puStack_b0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_ac,2);
  fn_82240158(&puStack_b0,0xffffffff82027244);
  if (*(int *)(iVar3 + 0x20) != 0) {
    uVar2 = fn_82240158(&puStack_b0,0xffffffff8200c4f8);
    uVar2 = fn_8223B728(uVar2,iVar3 + 0x10);
    fn_82240158(uVar2,0xffffffff820141ec);
  }
  uVar1 = *(undefined4 *)(iVar3 + 0x30);
  uVar2 = fn_82240158(&puStack_b0,0xffffffff82027240);
  uVar2 = fn_82520AC8(uVar2,uVar1);
  fn_82240158(uVar2,0xffffffff821c24f0);
  fn_822403C8(param_1,auStack_ac);
  fn_8223DBE8(appuStack_60);
  appuStack_60[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_60);
  return param_1;
}

