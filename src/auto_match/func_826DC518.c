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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_8267B848();
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C2D8();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8268C590();
extern int fn_826DA948();
extern int fn_826DB810();
extern int fn_8270C6B0();
extern unsigned int lbl_82005928;
extern unsigned int lbl_8200C610;
extern unsigned int lbl_8200C628;
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


undefined4 *
fn_826DC518(undefined4 *param_1,int param_2,ulonglong param_3,ulonglong param_4,undefined8 param_5
             ,undefined8 param_6,ulonglong param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  char in_RESERVE;
  byte in_cr0;
  undefined4 in_stack_00000054;
  uint auStack_90 [4];
  uint auStack_80 [32];
  
  uVar5 = 0;
  param_1[2] = 0;
  param_1[1] = 1;
  param_1[3] = &lbl_82005928;
  *param_1 = &lbl_8200C628;
  param_1[3] = &lbl_8200C610;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar3 = param_7;
  if ((param_7 & 0xffffffff) == 0) {
    uVar2 = fn_8270C6B0(((ulonglong)*(uint *)(*(int *)(param_2 + 0x20) + 0x24) & 0xfffffffc) + 8);
    fn_8268C590(auStack_90,0xffffffff8200c6cc,uVar2,0xffffffff8200c4f8);
    auStack_80[0] = (uint)((ulonglong)param_5 >> 0x10) & 0x1000;
    auStack_80[2] = 0x1000;
    auStack_80[3] = 0x1000;
    auStack_80[5] = 0;
    auStack_80[6] = 2;
    auStack_80[1] = 0x10;
    auStack_80[4] = 0xffffffff;
    auStack_80[7] = in_stack_00000054;
    uVar3 = fn_8267C2D8(lbl_831E7E64,((ulonglong)auStack_90[0] & 0xfffffffc) + 8,auStack_80);
    lVar6 = ((ulonglong)auStack_90[0] & 0xfffffffc) + 4;
    do {
      puVar7 = (uint *)lVar6;
      uVar8 = (ulonglong)*puVar7;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar8 - 1,0,lVar6);
        *puVar7 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar8 == 1) {
      fn_8267BE38();
    }
  }
  uVar8 = fn_8267B890(uVar3,0x90,0);
  if ((uVar8 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_826DB810(uVar8,uVar3,param_2,param_1,param_5,param_8);
  }
  if (param_1[7] != 0) {
    fn_8267C4F0();
  }
  param_1[7] = uVar4;
  if ((param_7 & 0xffffffff) == 0) {
    fn_8267B848(uVar3,uVar4);
  }
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267C4C8(param_4);
  }
  if (param_1[5] != 0) {
    fn_8267C4F0();
  }
  param_1[5] = (int)param_4;
  if ((param_3 & 0xffffffff) != 0) {
    fn_8267C4C8(param_3);
  }
  if (param_1[6] != 0) {
    fn_8267C4F0();
  }
  param_1[6] = (int)param_3;
  uVar3 = fn_8267B890(lbl_831E7E64,0x38,0);
  if ((uVar3 & 0xffffffff) != 0) {
    uVar5 = fn_826DA948(uVar3,param_6);
  }
  if (param_1[4] != 0) {
    fn_8267C4F0();
  }
  param_1[4] = uVar5;
  return param_1;
}

