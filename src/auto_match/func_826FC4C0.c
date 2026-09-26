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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_8268BA10();
extern int fn_8268C750();
extern int fn_826F5070();
extern int fn_826F6CC0();
extern int fn_826F7480();
extern unsigned int lbl_8200DD64;
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


undefined4 *
fn_826FC4C0(undefined4 *param_1,int param_2,undefined8 param_3,char param_4,char param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  ulonglong uVar6;
  char in_RESERVE;
  byte bVar7;
  uint auStack_60 [24];
  
  uVar4 = 0;
  param_1[1] = 1;
  param_1[3] = 0;
  *param_1 = &lbl_8200DD64;
  param_1[2] = 0x20001;
  param_1[4] = 0;
  fn_8268B330(param_1 + 6);
  fn_8268C750(param_1 + 7,param_3);
  fn_8268B330(param_1 + 8);
  param_1[9] = 0;
  param_1[10] = 0;
  lVar2 = fn_8267B890(lbl_831E7E64,0x54,0);
  if (lVar2 != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x6c) + 0x14);
    uVar3 = (*(code *)**(undefined4 **)(param_2 + 8))(param_2 + 8);
    uVar4 = fn_826F5070(lVar2,uVar4,uVar3,0);
  }
  if (param_1[4] != 0) {
    fn_8267C4F0();
  }
  param_1[4] = uVar4;
  uVar1 = *(uint *)(*(int *)(*(int *)(param_2 + 0x6c) + 0x1c) + 0x14) & 0xfffffffc;
  param_1[5] = uVar1 | 0x10000;
  if (param_5 != '\0') {
    param_1[5] = uVar1 | 0x210000;
  }
  fn_826F7480(param_2,param_1 + 6);
  bVar7 = (param_4 == '\0') << 1;
  if (param_4 != '\0') {
    uVar3 = fn_826F6CC0(auStack_60,param_1 + 7);
    fn_8268BA10(param_1 + 8,uVar3);
    lVar2 = ((ulonglong)auStack_60[0] & 0xfffffffc) + 4;
    do {
      puVar5 = (uint *)lVar2;
      uVar6 = (ulonglong)*puVar5;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar2);
        *puVar5 = uVar1;
        bVar7 = 2;
      }
    } while (!(bool)(bVar7 >> 1 & 1));
    if (uVar6 == 1) {
      fn_8267BE38();
    }
  }
  return param_1;
}

