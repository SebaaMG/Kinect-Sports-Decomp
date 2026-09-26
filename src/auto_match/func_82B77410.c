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
extern int fn_82AB15D0();
extern int fn_82B7F8E0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_8201546C;
extern unsigned int lbl_82015BD4;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_82021540;
extern unsigned int lbl_820288CC;
extern unsigned int lbl_8202EE88;
extern unsigned int lbl_8202EE8C;
extern unsigned int lbl_8202EE98;
extern unsigned int lbl_8208E0A0;
extern unsigned int lbl_820DAA94;
extern unsigned int lbl_820DAA98;
extern unsigned int lbl_820DAA9C;
extern unsigned int lbl_820DAAA0;
extern unsigned int lbl_820DAAA4;
extern unsigned int lbl_820DAAA8;
extern unsigned int lbl_820DAAAC;
extern unsigned int lbl_820DAAB0;
extern unsigned int lbl_820DAAB4;
extern unsigned int lbl_820DAAB8;
extern unsigned int lbl_820DAABC;
extern unsigned int lbl_820DAAC0;
extern unsigned int lbl_821AAD20;


void fn_82B77410(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar2 = fn_82F6A548();
  puVar1 = *(undefined4 **)(iVar2 + 0x1c);
  dVar6 = (double)lbl_821AAD20;
  iVar3 = fn_82B7F8E0(dVar6,*(undefined4 *)(iVar2 + 0x10),*puVar1,0,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3af9);
  }
  dVar4 = (double)lbl_82002AE0;
  iVar3 = fn_82B7F8E0(dVar4,*(undefined4 *)(iVar2 + 0x10),*puVar1,0,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3aff);
  }
  dVar5 = (double)lbl_82002C5C;
  iVar3 = fn_82B7F8E0(dVar5,*(undefined4 *)(iVar2 + 0x10),*puVar1,0,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b05);
  }
  iVar3 = fn_82B7F8E0((double)lbl_8200133C,*(undefined4 *)(iVar2 + 0x10),*puVar1,0,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b0b);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820DAAC0,*(undefined4 *)(iVar2 + 0x10),*puVar1,1,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b11);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820DAABC,*(undefined4 *)(iVar2 + 0x10),*puVar1,1,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b17);
  }
  iVar3 = fn_82B7F8E0((double)lbl_8201DD74,*(undefined4 *)(iVar2 + 0x10),*puVar1,1,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b1d);
  }
  iVar3 = fn_82B7F8E0(0xfff8000000000000,*(undefined4 *)(iVar2 + 0x10),*puVar1,1,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b23);
  }
  iVar3 = fn_82B7F8E0((double)lbl_82005344,*(undefined4 *)(iVar2 + 0x10),*puVar1,2,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b29);
  }
  iVar3 = fn_82B7F8E0((double)lbl_82021540,*(undefined4 *)(iVar2 + 0x10),*puVar1,2,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b2f);
  }
  iVar3 = fn_82B7F8E0((double)lbl_82015BD4,*(undefined4 *)(iVar2 + 0x10),*puVar1,2,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b35);
  }
  iVar3 = fn_82B7F8E0((double)lbl_8208E0A0,*(undefined4 *)(iVar2 + 0x10),*puVar1,2,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b3b);
  }
  iVar3 = fn_82B7F8E0(dVar5,*(undefined4 *)(iVar2 + 0x10),*puVar1,3,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b41);
  }
  iVar3 = fn_82B7F8E0((double)lbl_82002C28,*(undefined4 *)(iVar2 + 0x10),*puVar1,3,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b47);
  }
  iVar3 = fn_82B7F8E0((double)lbl_8201546C,*(undefined4 *)(iVar2 + 0x10),*puVar1,3,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b4d);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820145BC,*(undefined4 *)(iVar2 + 0x10),*puVar1,3,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b53);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820DAAB8,*(undefined4 *)(iVar2 + 0x10),*puVar1,4,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b5b);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820DAAB4,*(undefined4 *)(iVar2 + 0x10),*puVar1,4,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b63);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820DAAB0,*(undefined4 *)(iVar2 + 0x10),*puVar1,4,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b6b);
  }
  iVar3 = fn_82B7F8E0(dVar4,*(undefined4 *)(iVar2 + 0x10),*puVar1,4,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b71);
  }
  dVar7 = (double)lbl_8202EE8C;
  iVar3 = fn_82B7F8E0(dVar7,*(undefined4 *)(iVar2 + 0x10),*puVar1,5,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b77);
  }
  iVar3 = fn_82B7F8E0(dVar7,*(undefined4 *)(iVar2 + 0x10),*puVar1,5,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b7d);
  }
  iVar3 = fn_82B7F8E0(dVar7,*(undefined4 *)(iVar2 + 0x10),*puVar1,5,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b83);
  }
  iVar3 = fn_82B7F8E0(dVar6,*(undefined4 *)(iVar2 + 0x10),*puVar1,5,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b89);
  }
  iVar3 = fn_82B7F8E0(dVar6,*(undefined4 *)(iVar2 + 0x10),*puVar1,6,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b8f);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820DAAAC,*(undefined4 *)(iVar2 + 0x10),*puVar1,6,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b95);
  }
  iVar3 = fn_82B7F8E0((double)lbl_8202EE98,*(undefined4 *)(iVar2 + 0x10),*puVar1,6,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3b9b);
  }
  iVar3 = fn_82B7F8E0(dVar6,*(undefined4 *)(iVar2 + 0x10),*puVar1,6,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3ba1);
  }
  iVar3 = fn_82B7F8E0((double)lbl_8202EE88,*(undefined4 *)(iVar2 + 0x10),*puVar1,7,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3ba7);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820DAAA8,*(undefined4 *)(iVar2 + 0x10),*puVar1,7,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3bad);
  }
  iVar3 = fn_82B7F8E0(dVar6,*(undefined4 *)(iVar2 + 0x10),*puVar1,7,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3bb3);
  }
  iVar3 = fn_82B7F8E0(dVar6,*(undefined4 *)(iVar2 + 0x10),*puVar1,7,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3bb9);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820DAAA4,*(undefined4 *)(iVar2 + 0x10),*puVar1,8,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3bbf);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820DAAA0,*(undefined4 *)(iVar2 + 0x10),*puVar1,8,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3bc5);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820DAA9C,*(undefined4 *)(iVar2 + 0x10),*puVar1,8,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3bcb);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820DAA98,*(undefined4 *)(iVar2 + 0x10),*puVar1,8,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3bd1);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820DAA94,*(undefined4 *)(iVar2 + 0x10),*puVar1,9,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3bd7);
  }
  iVar3 = fn_82B7F8E0((double)lbl_820288CC,*(undefined4 *)(iVar2 + 0x10),*puVar1,9,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3bdd);
  }
  iVar3 = fn_82B7F8E0(dVar4,*(undefined4 *)(iVar2 + 0x10),*puVar1,9,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3be3);
  }
  iVar2 = fn_82B7F8E0(dVar5,*(undefined4 *)(iVar2 + 0x10),*puVar1,9,3);
  if (iVar2 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x3be9);
  }
  fn_82F6A594();
  return;
}

