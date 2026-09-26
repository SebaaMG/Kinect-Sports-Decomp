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
extern int fn_8236D750();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();
extern int fn_828A9550();


void fn_8224E3A8(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  fn_828A9550();
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x10);
  uVar1 = fn_82897B18(uVar5 + 0x354);
  fn_82897600(param_1,param_1 + 0x33c,uVar1);
  *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x33c,param_1,uVar5 + 0x354,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_82897B18(uVar5 + 0x854);
  fn_82897600(param_1,param_1 + 0x780,uVar1);
  *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x780,param_1,uVar5 + 0x854,*(undefined4 *)(param_1 + 4));
  iVar3 = param_1 + 0x7d4;
  lVar4 = uVar5 + 0x8ac;
  lVar2 = 8;
  do {
    fn_8224F2B8(iVar3 + -0x444,param_1,lVar4 + -0x500);
    fn_8224F2B8(iVar3,param_1,lVar4);
    lVar2 = lVar2 + -1;
    lVar4 = lVar4 + 0x68;
    iVar3 = iVar3 + 0x54;
  } while (lVar2 != 0);
  lVar2 = uVar5 + 0x2fc;
  uVar1 = fn_82897B18(lVar2);
  fn_82897600(param_1,param_1 + 0x2e8,uVar1);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x2e8,param_1,lVar2,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar2);
  fn_82243568(param_1 + 0x2ec,0,uVar1,0);
  lVar2 = uVar5 + 0x6ec;
  uVar1 = fn_82897B18(lVar2);
  fn_82897600(param_1,param_1 + 0x630,uVar1);
  *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_1 + 0xc);
  fn_82898220(param_1 + 0x630,param_1,lVar2,*(undefined4 *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar2);
  fn_82243568(param_1 + 0x634,0,uVar1,0);
  fn_822408B0(param_1 + 0x684,param_1,uVar5 + 0x744);
  fn_822408B0(param_1 + 0x6d8,param_1,uVar5 + 0x79c);
  fn_8224F2B8(param_1 + 0x72c,param_1,uVar5 + 0x7f4);
  fn_8224F2B8(param_1 + 0xa74,param_1,uVar5 + 0xbec);
  fn_8224F2B8(param_1 + 0xac8,param_1,uVar5 + 0xc44);
  fn_8224F2B8(param_1 + 0xb1c,param_1,uVar5 + 0xca4);
  return;
}

