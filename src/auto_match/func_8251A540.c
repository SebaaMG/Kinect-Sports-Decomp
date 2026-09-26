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
extern int fn_82230300();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8251A6C0();
extern int fn_82520AC8();
extern int fn_828B9720();
extern unsigned int stack0x00000000;


undefined8 fn_8251A540(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar4 = ZEXT48(&stack0x00000000);
  fn_8223CFC0(uVar4 - 0x110,2,1);
  fn_82240158(uVar4 - 0x110,0xffffffff821c28ec);
  uVar7 = 0xffffffff821c24f0;
  uVar1 = *(uint *)(param_2 + 0x50);
  if (uVar1 == 0) {
    uVar7 = 0xffffffff821b42c0;
LAB_8251a688:
    lVar6 = uVar4 - 0x110;
  }
  else {
    if (uVar1 == 1) {
      uVar7 = 0xffffffff821c2900;
      goto LAB_8251a688;
    }
    if (uVar1 < 3) {
      uVar7 = fn_8251A6C0(uVar4 - 0x70,*(undefined4 *)(param_2 + 0xc));
      uVar5 = fn_82240158(uVar4 - 0x110,0xffffffff821c2908);
      uVar7 = fn_8223B728(uVar5,uVar7);
      fn_82240158(uVar7,0xffffffff821c24f0);
      lVar6 = uVar4 - 0x70;
LAB_8251a664:
      fn_82230300(lVar6,1,0);
      goto LAB_8251a690;
    }
    if (uVar1 == 3) {
      uVar7 = 0xffffffff821c2918;
      goto LAB_8251a688;
    }
    if (4 < uVar1) {
      if (uVar1 != 5) goto LAB_8251a690;
      uVar7 = fn_828B9720(uVar4 - 0x50,*(undefined4 *)(param_2 + 0x44),0,0,0);
      uVar5 = fn_82240158(uVar4 - 0x110,0xffffffff821c2950);
      uVar7 = fn_8223B728(uVar5,uVar7);
      fn_82240158(uVar7,0xffffffff821c24f0);
      lVar6 = uVar4 - 0x50;
      goto LAB_8251a664;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x38);
    uVar3 = *(undefined4 *)(param_2 + 0x34);
    uVar5 = fn_82240158(uVar4 - 0x110,0xffffffff821c2938);
    uVar5 = fn_82520AC8(uVar5,uVar3);
    uVar5 = fn_82240158(uVar5,0xffffffff821c2924);
    lVar6 = fn_82520AC8(uVar5,uVar2);
  }
  fn_82240158(lVar6,uVar7);
LAB_8251a690:
  fn_82240158(uVar4 - 0x110,0xffffffff821c24f0);
  fn_822403C8(param_1,uVar4 - 0x10c);
  fn_8223DCC8(uVar4 - 0x110);
  return param_1;
}

