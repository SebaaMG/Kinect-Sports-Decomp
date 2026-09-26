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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822C7078();
extern int fn_822C70F0();
extern int fn_822C7578();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int iStack_9c;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AFA10;
extern unsigned int lbl_821AFA18;
extern unsigned int lbl_821AFA20;
extern unsigned int uStack_a0;
extern U64 storeWordConditionalIndexed();


undefined4 *
fn_8231FFB0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  char in_RESERVE;
  byte bVar9;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 auStack_90 [4];
  int *piStack_8c;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  *param_1 = &lbl_821AFA10;
  uVar2 = fn_8265C9E0(0x14);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar2 = 0;
    bVar9 = 2;
  }
  else {
    lVar8 = uVar2 + 0xc;
    bVar9 = (lVar8 == 0) << 1;
    puVar5 = (undefined4 *)uVar2;
    puVar5[1] = 1;
    *puVar5 = &lbl_821AD588;
    puVar5[2] = 1;
    if (lVar8 != 0) {
      puVar5[4] = 0;
      *(undefined4 *)lVar8 = &lbl_821AFA18;
    }
  }
  iStack_9c = (int)uVar2;
  param_1[2] = iStack_9c;
  param_1[1] = iStack_9c + 0xc;
  uStack_a0 = param_1[1];
  if ((uVar2 & 0xffffffff) != 0) {
    lVar8 = (uVar2 & 0xffffffff) + 8;
    do {
      puVar6 = (uint *)lVar8;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,lVar8);
        *puVar6 = uVar1;
        bVar9 = 2;
      }
    } while (!(bool)(bVar9 >> 1));
  }
  uVar3 = fn_822C7078(auStack_90,&uStack_a0,param_5,param_6);
  fn_82230110(auStack_80,0xffffffff82196582);
  fn_822C70F0(param_1 + 3,auStack_80,uVar3);
  fn_82230300(auStack_80,1,0);
  param_1[3] = &lbl_821AFA20;
  if (ZEXT48(piStack_8c) != 0) {
    lVar8 = ZEXT48(piStack_8c) + 8;
    do {
      puVar6 = (uint *)lVar8;
      lVar7 = (ulonglong)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar7,0,lVar8);
        *puVar6 = uVar1;
        bVar9 = 2;
      }
    } while (!(bool)(bVar9 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(code **)(*piStack_8c + 4))();
    }
  }
  fn_82365BD8(param_1 + 0x18,param_2);
  puVar5 = param_1 + 0x1a;
  if (*(int *)(param_4 + 0x10) == 0) {
    param_1[0x1e] = 0;
  }
  else {
    if (*(int *)(param_4 + 0x10) != param_4) {
      puVar5 = (undefined4 *)0x0;
    }
    uVar4 = (**(code **)**(undefined4 **)(param_4 + 0x10))(*(undefined4 **)(param_4 + 0x10),puVar5);
    param_1[0x1e] = uVar4;
  }
  fn_82230110(auStack_60,0xffffffff82196582);
  uVar3 = fn_822C7578(param_1 + 0x13,param_3);
  fn_82230218(uVar3,auStack_60,0,0xffffffffffffffff);
  fn_82230300(auStack_60,1,0);
  return param_1;
}

