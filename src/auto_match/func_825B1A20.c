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
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_9c;
extern unsigned int *auStack_a0;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82522DF8();
extern int fn_82544718();
extern int fn_825B1F70();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_8263C910();
extern int fn_826438C0();
extern int fn_82A93C18();
extern int fn_82F68CC0();
extern unsigned int lbl_8326B314;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uStack_5e;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_66;
extern unsigned int uStack_68;
extern unsigned int uStack_6a;
extern unsigned int uStack_6b;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_94;


void fn_825B1A20(void)

{
  int iVar3;
  longlong lVar1;
  undefined4 uVar4;
  undefined8 uVar2;
  ulonglong uVar5;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  
  iVar3 = fn_82522DF8(0xbc);
  uStack_7c = 0;
  uStack_80 = 0x7f4;
  uStack_78 = 0;
  uStack_74 = 0;
  fn_82520158(0xffffffff821c8200,auStack_a0,0);
  fn_82520158(0xffffffff821c8224,auStack_9c,0);
  fn_82520158(0xffffffff821c8244,auStack_98,0);
  fn_82520158(0xffffffff821c8264,&uStack_94,0);
  lVar1 = fn_8251F720(auStack_a0,0);
  if (lVar1 == 0) {
    *(undefined4 *)(iVar3 + 0x44) = 0;
  }
  else {
    uVar4 = fn_82631830(lVar1);
    *(undefined4 *)(iVar3 + 0x44) = uVar4;
    fn_8251FA58(lVar1);
  }
  lVar1 = fn_8251F720(auStack_9c,0);
  if (lVar1 == 0) {
    *(undefined4 *)(iVar3 + 0x48) = 0;
  }
  else {
    uVar4 = fn_82631488(lVar1);
    *(undefined4 *)(iVar3 + 0x48) = uVar4;
    fn_8251FA58(lVar1);
  }
  lVar1 = fn_8251F720(auStack_98,0);
  if (lVar1 == 0) {
    *(undefined4 *)(iVar3 + 0x4c) = 0;
  }
  else {
    uVar4 = fn_82631830(lVar1);
    *(undefined4 *)(iVar3 + 0x4c) = uVar4;
    fn_8251FA58(lVar1);
  }
  lVar1 = fn_8251F720(&uStack_94,0);
  if (lVar1 == 0) {
    *(undefined4 *)(iVar3 + 0x50) = 0;
  }
  else {
    uVar4 = fn_82631488(lVar1);
    *(undefined4 *)(iVar3 + 0x50) = uVar4;
    fn_8251FA58(lVar1);
  }
  uVar4 = fn_8263C910(0xa0,0x5a,0x18280186,0,&uStack_80);
  *(undefined4 *)(iVar3 + 0x40) = uVar4;
  uStack_80 = 0;
  uStack_7c = 0x2c23a5;
  uStack_78 = ((((U64)(uStack_78)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((ushort)uStack_78 & 0xff)) & ((U64)0xFFFF)) << 16));
  uStack_78 = (uint)(((U64)(uStack_78) >> 16) & 0xFFFF);
  uStack_74 = 8;
  uStack_70 = 0x2c23a5;
  uStack_6c = 0;
  uStack_6b = 5;
  uStack_6a = 0;
  uStack_68 = 0xff;
  uStack_66 = 0;
  uStack_64 = 0xffffffff;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  if (*(int *)(iVar3 + 0x44) != 0) {
    uVar2 = fn_82631BF8(&uStack_80);
    uStack_94 = 0x10;
    fn_826438C0(*(undefined4 *)(iVar3 + 0x44),0,uVar2,&uStack_94,0);
    fn_8262FEC8(uVar2);
  }
  fn_82520158(0xffffffff821c8280,&uStack_94,0);
  fn_82520158(0xffffffff821c829c,auStack_98,0);
  fn_82520158(0xffffffff821c82b8,auStack_9c,0);
  fn_82520158(0xffffffff821c82dc,auStack_a0,0);
  lVar1 = fn_8251F720(&uStack_94,0);
  if (lVar1 != 0) {
    uVar4 = fn_82631830(lVar1);
    *(undefined4 *)(iVar3 + 0x78) = uVar4;
    fn_8251FA58(lVar1);
  }
  lVar1 = fn_8251F720(auStack_98,0);
  if (lVar1 != 0) {
    uVar4 = fn_82631488(lVar1);
    *(undefined4 *)(iVar3 + 0x7c) = uVar4;
    fn_8251FA58(lVar1);
  }
  lVar1 = fn_8251F720(auStack_9c,0);
  if (lVar1 != 0) {
    uVar4 = fn_82631488(lVar1);
    *(undefined4 *)(iVar3 + 0x80) = uVar4;
    fn_8251FA58(lVar1);
  }
  lVar1 = fn_8251F720(auStack_a0,0);
  if (lVar1 != 0) {
    uVar4 = fn_82631488(lVar1);
    *(undefined4 *)(iVar3 + 0x84) = uVar4;
    fn_8251FA58(lVar1);
  }
  uStack_80 = 0;
  uStack_7c = 0x2c23a5;
  uStack_78 = ((((U64)(uStack_78)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((ushort)uStack_78 & 0xff)) & ((U64)0xFFFF)) << 16));
  uStack_78 = (uint)(((U64)(uStack_78) >> 16) & 0xFFFF);
  uStack_74 = 0xff0000;
  uStack_70 = 0xffffffff;
  uStack_6c = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  if (*(int *)(iVar3 + 0x78) != 0) {
    uVar2 = fn_82631BF8(&uStack_80);
    uStack_94 = 8;
    fn_826438C0(*(undefined4 *)(iVar3 + 0x78),0,uVar2,&uStack_94,0);
    fn_8262FEC8(uVar2);
  }
  uVar5 = (ulonglong)lbl_8326B314;
  lVar1 = fn_82A93C18(lbl_8326B430,lbl_8326B434,1,0,0x28000102,0,0,0xffffffffffffffff);
  uVar2 = fn_82544718(&uStack_80,lbl_8326B430,lbl_8326B434,0x28000102,uVar5 - lVar1,auStack_90
                           );
  fn_82F68CC0(iVar3 + 0x88,uVar2,0x34);
  fn_82520158(0xffffffff821c8300,&uStack_94,0);
  fn_82520158(0xffffffff821c8314,auStack_98,0);
  uVar4 = fn_8251F720(&uStack_94,0);
  *(undefined4 *)(iVar3 + 0x54) = uVar4;
  uVar4 = fn_8251F720(auStack_98,0);
  *(undefined4 *)(iVar3 + 0x58) = uVar4;
  fn_825B1F70(iVar3);
  return;
}

