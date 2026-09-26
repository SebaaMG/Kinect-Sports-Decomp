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
extern int fn_82B7BD28();
extern int fn_82BA02A8();
extern int fn_82BA03B8();
extern int fn_82BA3FB0();
extern int fn_82BB3490();
extern int fn_82BBFE28();
extern int fn_82BC6DC0();


void fn_82BB3E60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar4;
  longlong lVar3;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int aiStack_60 [24];
  
  puVar4 = (undefined4 *)fn_82BA3FB0();
  lVar3 = fn_82BBFE28(param_1 + 0x80);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar5 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar10 = puVar5 + 1;
  *puVar5 = uVar1;
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar10,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar5 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar6 = puVar5 + 1;
  *puVar5 = uVar1;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar6,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar5 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar7 = puVar5 + 1;
  *puVar5 = uVar1;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar7,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar5 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar8 = puVar5 + 1;
  *puVar5 = uVar1;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar8,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar5 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar9 = puVar5 + 1;
  *puVar5 = uVar1;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar9,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  }
  aiStack_60[0] = 0;
  if (0 < (int)lVar3) {
    do {
      puVar4 = puVar4 + 1;
      fn_82BB3490(param_1,*puVar4,puVar10,puVar6,puVar7,puVar8,puVar9,aiStack_60);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  iVar2 = aiStack_60[0];
  if (puVar9 != (undefined4 *)0x0) {
    fn_82BC6DC0(puVar9,1);
  }
  if (puVar8 != (undefined4 *)0x0) {
    fn_82BC6DC0(puVar8,1);
  }
  if (puVar7 != (undefined4 *)0x0) {
    fn_82BC6DC0(puVar7,1);
  }
  if (puVar6 != (undefined4 *)0x0) {
    fn_82BC6DC0(puVar6,1);
  }
  if (puVar10 != (undefined4 *)0x0) {
    fn_82BC6DC0(puVar10,1);
  }
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x574) = 1;
  if (iVar2 != 0) {
    fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820dfefc,iVar2);
  }
  return;
}

