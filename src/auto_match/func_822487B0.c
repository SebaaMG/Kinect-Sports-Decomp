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
extern int fn_82243568();
extern int fn_8224F2B8();
extern int fn_8236D750();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();


void fn_822487B0(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x10);
  fn_8224F2B8(param_1 + 0x9c,param_1,uVar5 + 0x9c);
  fn_8224F2B8(param_1 + 0x48,param_1,uVar5 + 0x34);
  lVar3 = uVar5 + 0x104;
  uVar1 = fn_82897B18(lVar3);
  fn_82897600(param_1,param_1 + 0xf0,uVar1);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0xf0,param_1,lVar3,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar3);
  fn_82243568(param_1 + 0xf4,0,uVar1,0);
  fn_8224F2B8(param_1 + 0x144,param_1,uVar5 + 0x164);
  fn_8224F2B8(param_1 + 0x198,param_1,uVar5 + 0x1bc);
  fn_8224F2B8(param_1 + 0x1ec,param_1,uVar5 + 0x214);
  lVar3 = uVar5 + 0x26c;
  uVar1 = fn_82897B18(lVar3);
  fn_82897600(param_1,param_1 + 0x240,uVar1);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x240,param_1,lVar3,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar3);
  fn_82243568(param_1 + 0x244,0,uVar1,0);
  lVar3 = uVar5 + 0x8e4;
  lVar2 = uVar5 + 0x2cc;
  iVar4 = param_1 + 0x780;
  lVar6 = 0xf;
  do {
    fn_8224F2B8(iVar4 + -0x4ec,param_1,lVar2);
    fn_8224F2B8(iVar4,param_1,lVar3);
    lVar6 = lVar6 + -1;
    lVar2 = lVar2 + 0x68;
    lVar3 = lVar3 + 0x58;
    iVar4 = iVar4 + 0x54;
  } while (lVar6 != 0);
  return;
}

