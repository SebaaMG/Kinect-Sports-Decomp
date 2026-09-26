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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8267B848();
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C2D8();
extern int fn_8267C4F0();
extern int fn_82686278();
extern int fn_8268C590();
extern int fn_826DE8E0();
extern int fn_8270C6B0();
extern unsigned int lbl_8200C4C4;
extern unsigned int lbl_8200C508;
extern unsigned int lbl_8200C518;
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


undefined4 *
fn_826DF140(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             ulonglong param_5,char param_6,undefined4 param_7)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  char in_RESERVE;
  byte in_cr0;
  uint auStack_70 [4];
  uint auStack_60 [24];
  
  uVar4 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0x40000;
  param_1[4] = &lbl_8200C4C4;
  *param_1 = &lbl_8200C518;
  param_1[4] = &lbl_8200C508;
  fn_82686278(param_1 + 5);
  param_1[7] = param_3;
  param_1[8] = 0;
  uVar3 = param_5;
  if ((param_5 & 0xffffffff) == 0) {
    uVar2 = fn_8270C6B0(param_4);
    fn_8268C590(auStack_70,0xffffffff8200c828,uVar2,0xffffffff8200c4f8);
    auStack_60[5] = 0;
    auStack_60[3] = 0;
    auStack_60[1] = 0x10;
    auStack_60[4] = 0xffffffff;
    auStack_60[0] = -(uint)(param_6 != '\0') & 0x1000 | 4;
    auStack_60[2] = 0x2000;
    auStack_60[6] = 4;
    auStack_60[7] = param_7;
    uVar3 = fn_8267C2D8(lbl_831E7E64,((ulonglong)auStack_70[0] & 0xfffffffc) + 8,auStack_60);
    lVar5 = ((ulonglong)auStack_70[0] & 0xfffffffc) + 4;
    do {
      puVar6 = (uint *)lVar5;
      uVar7 = (ulonglong)*puVar6;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar7 - 1,0,lVar5);
        *puVar6 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar7 == 1) {
      fn_8267BE38();
    }
  }
  uVar7 = fn_8267B890(uVar3,0x118,0);
  if ((uVar7 & 0xffffffff) != 0) {
    uVar4 = fn_826DE8E0(uVar7,param_1,param_4,uVar3);
  }
  if (param_1[8] != 0) {
    fn_8267C4F0();
  }
  param_1[8] = uVar4;
  if ((param_5 & 0xffffffff) == 0) {
    fn_8267B848(uVar3,uVar4);
  }
  return param_1;
}

