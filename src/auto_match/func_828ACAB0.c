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


undefined8 fn_828ACAB0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined *apuStack_d0 [20];
  undefined **ppuStack_80;
  
  uVar5 = ZEXT48(&stack0x00000000);
  apuStack_d0[0] = &lbl_821AA8E0;
  ppuStack_80 = &lbl_82020F40;
  fn_8223CD08(uVar5 - 0x80,uVar5 - 0xcc,0);
  *(undefined ***)((int)apuStack_d0 + *(int *)(apuStack_d0[0] + 4)) =
       &lbl_82021284;
  fn_8223CF38(uVar5 - 0xcc,2);
  lVar6 = uVar5 - 0xd0;
  if (*(char *)(param_2 + 4) == '\0') {
    uVar7 = 0xffffffff8202459c;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x14);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    uVar4 = *(undefined4 *)(param_2 + 8);
    uVar7 = fn_82240158(lVar6,0xffffffff82024588);
    uVar7 = fn_82520AC8(uVar7,uVar4);
    uVar7 = fn_82240158(uVar7,0xffffffff821aa630);
    uVar7 = fn_82520AC8(uVar7,uVar3);
    uVar7 = fn_82240158(uVar7,0xffffffff8202457c);
    uVar7 = fn_82520AC8(uVar7,uVar2);
    uVar7 = fn_82240158(uVar7,0xffffffff821aa630);
    lVar6 = fn_82520AC8(uVar7,uVar1);
    uVar7 = 0xffffffff821c27b4;
  }
  fn_82240158(lVar6,uVar7);
  fn_822403C8(param_1,uVar5 - 0xcc);
  fn_8223DBE8(uVar5 - 0x80);
  ppuStack_80 = &lbl_82020F30;
  fn_82F62F60(uVar5 - 0x80);
  return param_1;
}

