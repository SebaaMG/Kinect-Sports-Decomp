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
extern int fn_828E0268();
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BA0FD8();
extern int fn_82BAFA88();
extern int fn_82BBFDF0();
extern int fn_82BBFE50();
extern int fn_82BBFE78();
extern int fn_82BC61C0();
extern int fn_82BC6218();
extern int fn_82F68CC0();
extern unsigned int lbl_820E3190;
extern unsigned int lbl_820E3298;


undefined1 * fn_82BA3BD8(undefined1 *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  
  *(undefined4 *)(param_1 + 0x10) = param_3;
  uVar11 = 0;
  puVar9 = param_1 + 0x80;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  fn_82BBFDF0(puVar9);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  fn_82F68CC0(param_1 + 0xb8,param_2,0x758);
  *(undefined4 *)(param_1 + 0x810) = 0;
  param_1[0x818] = 0;
  param_1[0x819] = 0;
  *(undefined4 *)(param_1 + 0x81c) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x824) = 0;
  lVar12 = 0x10;
  *(undefined4 *)(param_1 + 0x828) = 0;
  *(undefined4 *)(param_1 + 0x82c) = 0;
  *(undefined4 *)(param_1 + 0x830) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x86c) = 0;
  *(undefined4 *)(param_1 + 0x870) = 0;
  *(undefined4 *)(param_1 + 0x874) = 0;
  *(undefined4 *)(param_1 + 0x878) = 0;
  *(undefined4 *)(param_1 + 0x87c) = 0;
  *(int *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x820) = 0xffffffff;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  *(undefined1 **)(param_4 + 0xab0) = param_1;
  uVar4 = *(undefined4 *)(param_4 + 0x5ac);
  puVar3 = (undefined4 *)fn_82B7BD28(uVar4,0x30);
  *puVar3 = uVar4;
  if (puVar3 + 1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_828E0268(puVar3 + 1,param_4);
  }
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  uVar4 = fn_82BA0FD8(0x400,*(undefined4 *)(param_4 + 0x5ac));
  *(undefined4 *)(param_1 + 0xb0) = uVar4;
  uVar4 = *(undefined4 *)(param_4 + 0x5ac);
  puVar3 = (undefined4 *)fn_82B7BD28(uVar4,0x90);
  *puVar3 = uVar4;
  if (puVar3 + 1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82BC61C0(puVar3 + 1,param_4);
  }
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  uVar4 = *(undefined4 *)(param_4 + 0x5ac);
  puVar3 = (undefined4 *)fn_82B7BD28(uVar4,0x8c);
  *puVar3 = uVar4;
  if (puVar3 + 1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82BC6218(puVar3 + 1,param_4);
  }
  *(undefined4 *)(param_1 + 0xa8) = uVar4;
  uVar4 = *(undefined4 *)(param_4 + 0x5ac);
  puVar3 = (undefined4 *)fn_82B7BD28(uVar4,0x14);
  puVar10 = puVar3 + 1;
  *puVar3 = uVar4;
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar10,*(undefined4 *)(param_4 + 0x5ac));
  }
  *(undefined4 **)(param_1 + 0x814) = puVar10;
  uVar4 = *(undefined4 *)(param_4 + 0x5ac);
  puVar3 = (undefined4 *)fn_82B7BD28(uVar4,0x14);
  puVar10 = puVar3 + 1;
  *puVar3 = uVar4;
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar10,*(undefined4 *)(param_4 + 0x5ac));
  }
  *(undefined4 **)(param_1 + 0x60) = puVar10;
  param_1[0x860] = *(undefined1 *)(param_4 + 0x564);
  fn_82BAFA88(*(undefined4 *)(param_1 + 0xac));
  iVar1 = *(int *)(param_1 + 0xa4);
  fn_82BBFE78(puVar9,iVar1);
  *(undefined1 **)(iVar1 + 0x10) = param_1;
  iVar1 = *(int *)(param_1 + 0xa8);
  fn_82BBFE50(puVar9,iVar1);
  *(undefined1 **)(iVar1 + 0x10) = param_1;
  if (param_1[0x860] == '\0') {
    puVar8 = &lbl_820E3190;
  }
  else {
    puVar8 = &lbl_820E3298;
  }
  *(undefined **)(param_1 + 0x5c) = puVar8;
  uVar4 = *(undefined4 *)(*(int *)(param_4 + 0x550) + 4);
  uVar5 = fn_82BA0FD8(uVar4,*(undefined4 *)(param_4 + 0x5ac));
  *(undefined4 *)(param_1 + 0x858) = uVar5;
  uVar4 = fn_82BA0FD8(uVar4,*(undefined4 *)(param_4 + 0x5ac));
  puVar2 = *(uint **)(param_1 + 0x858);
  *(undefined4 *)(param_1 + 0x85c) = uVar4;
  uVar7 = 0;
  if (*puVar2 != 0) {
    puVar6 = puVar2 + 1;
    do {
      puVar6 = puVar6 + 1;
      *puVar6 = 0xffffffff;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *puVar2);
  }
  puVar2 = *(uint **)(param_1 + 0x85c);
  if (*puVar2 != 0) {
    puVar6 = puVar2 + 1;
    do {
      puVar6 = puVar6 + 1;
      *puVar6 = 0xffffffff;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *puVar2);
  }
  uVar4 = fn_82B7BD28(*(undefined4 *)(param_4 + 0x5ac),
                            *(int *)(*(int *)(param_4 + 0x550) + 0x18) << 3);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  return param_1;
}

