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
extern int fn_8224F2B8();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();


void fn_824CD890(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x10);
  uVar1 = fn_82897B18(uVar5 + 0x34);
  fn_82897600(param_1,param_1 + 0x48,uVar1);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x48,param_1,uVar5 + 0x34,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_82897B18(uVar5 + 0x8c);
  fn_82897600(param_1,param_1 + 0x9c,uVar1);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x9c,param_1,uVar5 + 0x8c,*(undefined4 *)(param_1 + 4));
  iVar4 = param_1 + 0xf0;
  lVar3 = uVar5 + 0xe4;
  lVar2 = 0x14;
  do {
    uVar1 = fn_82897B18(lVar3);
    fn_82897600(param_1,iVar4,uVar1);
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_1 + 0xc);
    fn_82898220(iVar4,param_1,lVar3,*(undefined4 *)(param_1 + 4));
    lVar2 = lVar2 + -1;
    lVar3 = lVar3 + 0x58;
    iVar4 = iVar4 + 0x54;
  } while (lVar2 != 0);
  fn_8224F2B8(param_1 + 0x828,param_1,uVar5 + 0x874);
  fn_8224F2B8(param_1 + 0x87c,param_1,uVar5 + 0x8dc);
  fn_8224F2B8(param_1 + 0x780,param_1,uVar5 + 0x7c4);
  fn_8224F2B8(param_1 + 0x7d4,param_1,uVar5 + 0x81c);
  uVar1 = fn_82897B18(uVar5 + 0x944);
  fn_82897600(param_1,param_1 + 0x8d0,uVar1);
  *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x8d0,param_1,uVar5 + 0x944,*(undefined4 *)(param_1 + 4));
  return;
}

