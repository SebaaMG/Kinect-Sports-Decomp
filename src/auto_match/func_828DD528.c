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
extern int fn_82237920();
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
extern unsigned int stack0x00000000;


undefined8 fn_828DD528(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *apuStack_c0 [20];
  undefined **ppuStack_70;
  
  uVar3 = ZEXT48(&stack0x00000000);
  apuStack_c0[0] = &lbl_821AA8E0;
  ppuStack_70 = &lbl_82020F40;
  fn_8223CD08(uVar3 - 0x70,uVar3 - 0xbc,0);
  *(undefined ***)((int)apuStack_c0 + *(int *)(apuStack_c0[0] + 4)) =
       &lbl_82021284;
  fn_8223CF38(uVar3 - 0xbc,2);
  fn_82240158(uVar3 - 0xc0,0xffffffff82027040);
  lVar4 = uVar3 - 0xc0;
  if (*(char *)(param_2 + 0x90) == '\0') {
    uVar5 = 0xffffffff82026fd8;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x8c);
    uVar2 = *(undefined4 *)(param_2 + 0x88);
    uVar6 = *(undefined8 *)(param_2 + 0x80);
    uVar5 = fn_82240158(lVar4,0xffffffff82027020);
    uVar5 = fn_82237920(uVar5,uVar6);
    uVar5 = fn_82240158(uVar5,0xffffffff82027004);
    uVar5 = fn_82520AC8(uVar5,uVar2);
    uVar5 = fn_82240158(uVar5,0xffffffff82026fec);
    lVar4 = fn_82520AC8(uVar5,uVar1);
    uVar5 = 0xffffffff82196fb0;
  }
  fn_82240158(lVar4,uVar5);
  fn_822403C8(param_1,uVar3 - 0xbc);
  fn_8223DBE8(uVar3 - 0x70);
  ppuStack_70 = &lbl_82020F30;
  fn_82F62F60(uVar3 - 0x70);
  return param_1;
}

