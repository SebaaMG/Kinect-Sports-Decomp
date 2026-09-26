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
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern char cRam832766f0;
extern char cRam832766f1;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_82473568();
extern int fn_82484210();
extern int fn_82487180();
extern int fn_824C04E0();
extern int fn_82512B08();
extern int fn_82520D38();
extern int fn_82528B78();
extern int fn_82561778();
extern int fn_8265C9E0();
extern int fn_8266EC60();
extern int fn_8266EF20();
extern int fn_82A1DD38();
extern int fn_82A1EFC0();
extern int fn_82F4DE00();
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821BD3D0;
extern unsigned int lbl_821BE890;
extern unsigned int lbl_832766F7;
extern unsigned int uRam832766f5;


undefined4 * fn_824798D8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar4;
  ulonglong uVar2;
  undefined4 *puVar5;
  undefined8 uVar3;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [96];
  
  fn_82520D38();
  param_1[0x171] = 0;
  *param_1 = &lbl_821BD3D0;
  param_1[0x172] = 0;
  param_1[0x173] = *(undefined4 *)(param_2 + 0x44);
  uVar4 = fn_82512B08(0,1);
  param_1[0x174] = uVar4;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  uVar2 = fn_8265C9E0(0x24);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82528B78(uVar2,param_2 + 0x48,0xffffffff821aa364);
  }
  param_1[0x1dc] = uVar4;
  puVar5 = param_1 + 0x1de;
  fn_82484210(puVar5,param_2 + 0x4c,param_2 + 0x50,*(undefined4 *)(param_2 + 0x44));
  fn_82230110(auStack_60,0xffffffff821bd0a0);
  piVar7 = param_1 + 0x822;
  fn_82487180(piVar7,auStack_60);
  param_1[0x822] = &lbl_821BE890;
  fn_82230300(auStack_60,1,0);
  param_1[0x833] = 0;
  fn_82561778(param_1 + 0x178,0xffffffff821bd0b8,0);
  lbl_832766F7 = 1;
  uRam832766f5 = 0;
  if (cRam832766f1 == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(0xffffffff8328e788,0,0x18d8);
  }
  fn_82A1DD38(puVar5,0xffffffff8328e788);
  if (cRam832766f0 != '\0') {
    fn_82A1DD38(puVar5,0xffffffff83290060,0x18d8);
  }
  fn_82A1DD38(param_1 + 10,param_2 + 0x54,0x59c);
  puVar5 = (undefined4 *)fn_8265C9E0(8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar3 = fn_8266EC60();
    uVar3 = fn_8266EF20(auStack_78,uVar3,param_1 + 10,0,0,0x18280143);
    fn_823F2E20(puVar5,uVar3);
    if (iStack_74 != 0) {
      fn_822315A0();
    }
  }
  param_1[0x171] = puVar5;
  puVar5 = (undefined4 *)fn_8265C9E0(8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar3 = fn_8266EC60();
    uVar3 = fn_8266EF20(auStack_70,uVar3,param_1 + 0xb,0,0,0x18280143);
    fn_823F2E20(puVar5,uVar3);
    if (iStack_6c != 0) {
      fn_822315A0();
    }
  }
  param_1[0x172] = puVar5;
  puVar6 = (undefined4 *)fn_8265C9E0(0xb4);
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 1;
    puVar6[2] = 1;
    *puVar6 = &lbl_821AD588;
    puVar5 = puVar6;
    if (puVar6 + 3 != (undefined4 *)0x0) {
      fn_82473568(puVar6 + 3,param_1 + 0xc,param_1[0x173]);
    }
  }
  puStack_80 = puVar5 + 3;
  iVar1 = *piVar7;
  puStack_7c = puVar5;
  uVar3 = fn_82365BD8(auStack_68,&puStack_80);
  (**(code **)(iVar1 + 4))(piVar7,uVar3);
  fn_824C04E0(piVar7,1);
  fn_82F4DE00(1);
  if (puVar5 != (undefined4 *)0x0) {
    fn_822315A0(puVar5);
  }
  return param_1;
}

