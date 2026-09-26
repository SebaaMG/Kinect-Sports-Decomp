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
extern unsigned int *auStack_a0;
extern int fn_82273C88();
extern int fn_8267BE38();
extern int fn_82681D00();
extern int fn_82682D30();
extern int fn_82683770();
extern int fn_82683928();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696CB8();
extern int fn_826A7398();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int uStack_48;
extern unsigned int uStack_5c;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a8;


void fn_82683990(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  
  iStack_b0 = 0;
  iStack_ac = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uStack_a8 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  auStack_a0[0] = 0;
  if (*(int *)(param_2 + 8) == 0) {
    fn_826959C8(auStack_a0);
    auStack_a0[0] = 1;
  }
  else {
    fn_82696CB8();
  }
  uVar5 = fn_826A7398(uVar1);
  fn_82682D30(uVar5,uVar1,auStack_a0,&uStack_80);
  fn_82683928(&iStack_b0,&uStack_80);
  lVar7 = 0;
  if (0 < *(int *)(param_2 + 0x1c)) {
    do {
      uStack_70 = 0;
      uStack_6c = 0;
      uVar5 = fn_826957D0(param_2,lVar7);
      uVar6 = fn_826A7398(uVar1);
      fn_82682D30(uVar6,uVar1,uVar5,&uStack_70);
      fn_82683928(&iStack_b0,&uStack_70);
      fn_82273C88(&uStack_70);
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(param_2 + 0x1c));
  }
  uStack_5c = fn_826A7398(uVar1);
  iVar4 = iStack_ac;
  iVar3 = iStack_b0;
  puStack_60 = &uStack_90;
  puStack_58 = &uStack_80;
  if (*(int *)(param_2 + 0x1c) < 1) {
    iStack_50 = 0;
  }
  else {
    iStack_50 = iStack_b0 + 0x10;
  }
  uStack_48 = *(undefined4 *)(param_1 + 0x34);
  iStack_54 = iStack_b0;
  iStack_4c = iStack_ac + -1;
  (**(code **)(**(int **)(param_1 + 0x30) + 4))(*(int **)(param_1 + 0x30),&puStack_60);
  if ((uStack_8c & 0x8f) != 0) {
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar5 = fn_826A7398(uVar1);
    fn_82681D00(uVar5,&uStack_90,uVar2);
  }
  fn_82696330(auStack_a0);
  fn_82273C88(&uStack_90);
  fn_82273C88(&uStack_80);
  fn_82683770(iVar3,iVar4);
  fn_8267BE38(iVar3);
  return;
}

