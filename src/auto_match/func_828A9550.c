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
extern int fn_8236D750();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();


void fn_828A9550(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x10);
  uVar1 = fn_82897B18(uVar3 + 0x34);
  fn_82897600(param_1,param_1 + 0x48,uVar1);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x48,param_1,uVar3 + 0x34,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_82897B18(uVar3 + 0x8c);
  fn_82897600(param_1,param_1 + 0x9c,uVar1);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x9c,param_1,uVar3 + 0x8c,*(undefined4 *)(param_1 + 4));
  lVar2 = uVar3 + 0xe4;
  uVar1 = fn_82897B18(lVar2);
  fn_82897600(param_1,param_1 + 0xf0,uVar1);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0xf0,param_1,lVar2,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar2);
  fn_82243568(param_1 + 0xf4,0,uVar1,0);
  lVar2 = uVar3 + 0x144;
  uVar1 = fn_82897B18(lVar2);
  fn_82897600(param_1,param_1 + 0x144,uVar1);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x144,param_1,lVar2,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar2);
  fn_82243568(param_1 + 0x148,0,uVar1,0);
  lVar2 = uVar3 + 0x19c;
  uVar1 = fn_82897B18(lVar2);
  fn_82897600(param_1,param_1 + 0x198,uVar1);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x198,param_1,lVar2,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar2);
  fn_82243568(param_1 + 0x19c,0,uVar1,0);
  lVar2 = uVar3 + 500;
  uVar1 = fn_82897B18(lVar2);
  fn_82897600(param_1,param_1 + 0x1ec,uVar1);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x1ec,param_1,lVar2,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar2);
  fn_82243568(param_1 + 0x1f0,0,uVar1,0);
  lVar2 = uVar3 + 0x24c;
  uVar1 = fn_82897B18(lVar2);
  fn_82897600(param_1,param_1 + 0x240,uVar1);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x240,param_1,lVar2,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar2);
  fn_82243568(param_1 + 0x244,0,uVar1,0);
  lVar2 = uVar3 + 0x2a4;
  uVar1 = fn_82897B18(lVar2);
  fn_82897600(param_1,param_1 + 0x294,uVar1);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x294,param_1,lVar2,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar2);
  fn_82243568(param_1 + 0x298,0,uVar1,0);
  return;
}

