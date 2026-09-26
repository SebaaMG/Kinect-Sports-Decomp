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
extern int fn_822408B0();
extern int fn_82243568();
extern int fn_8224F2B8();
extern int fn_822CABC8();
extern int fn_8236D750();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();


void fn_8233E248(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  fn_822CABC8();
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x10);
  fn_822408B0(param_1 + 0x1ec,param_1,uVar3 + 0x20c);
  fn_8224F2B8(param_1 + 0x240,param_1,uVar3 + 0x264);
  uVar1 = fn_82897B18(uVar3 + 700);
  fn_82897600(param_1,param_1 + 0x294,uVar1);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x294,param_1,uVar3 + 700,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_82897B18(uVar3 + 0x314);
  fn_82897600(param_1,param_1 + 0x2e8,uVar1);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x2e8,param_1,uVar3 + 0x314,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_82897B18(uVar3 + 0x36c);
  fn_82897600(param_1,param_1 + 0x33c,uVar1);
  *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x33c,param_1,uVar3 + 0x36c,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_82897B18(uVar3 + 0x3c4);
  fn_82897600(param_1,param_1 + 0x390,uVar1);
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x390,param_1,uVar3 + 0x3c4,*(undefined4 *)(param_1 + 4));
  fn_8224F2B8(param_1 + 0x3e4,param_1,uVar3 + 0x41c);
  fn_8224F2B8(param_1 + 0x438,param_1,uVar3 + 0x474);
  uVar1 = fn_82897B18(uVar3 + 0x4cc);
  fn_82897600(param_1,param_1 + 0x48c,uVar1);
  *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x48c,param_1,uVar3 + 0x4cc,*(undefined4 *)(param_1 + 4));
  lVar2 = uVar3 + 0x524;
  uVar1 = fn_82897B18(lVar2);
  fn_82897600(param_1,param_1 + 0x4e0,uVar1);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x4e0,param_1,lVar2,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar2);
  fn_82243568(param_1 + 0x4e4,0,uVar1,0);
  fn_822408B0(param_1 + 0x534,param_1,uVar3 + 0x584);
  fn_8224F2B8(param_1 + 0x588,param_1,uVar3 + 0x5dc);
  fn_8224F2B8(param_1 + 0x5dc,param_1,uVar3 + 0x634);
  return;
}

