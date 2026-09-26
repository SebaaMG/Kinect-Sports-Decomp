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
extern int fn_82B7BEB0();
extern int fn_82BA02A8();
extern int fn_82BA03B8();
extern int fn_82BA0FD8();
extern int fn_82BB1BE8();
extern int fn_82BB5630();
extern int fn_82BB5EF0();
extern int fn_82BB6528();
extern int fn_82BB6580();
extern int fn_82BB68B0();
extern int fn_82BB9760();
extern int fn_82BBFDF0();
extern int fn_82BBFE28();
extern int fn_82BC6DC0();
extern int fn_82BCFB88();


void fn_82BB9AE8(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  param_1[1] = param_2;
  iVar3 = *(int *)(param_2 + 0xc);
  *param_1 = iVar3;
  uVar1 = *(undefined4 *)(iVar3 + 0x5b0);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x20);
  lVar6 = 0;
  *puVar2 = uVar1;
  if (puVar2 + 1 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82BB5EF0(puVar2 + 1,*(undefined4 *)(*param_1 + 0x5b0));
  }
  param_1[2] = iVar3;
  uVar1 = *(undefined4 *)(*param_1 + 0x5b0);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar5 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0xffffffff;
  }
  param_1[3] = (int)puVar5;
  uVar1 = *(undefined4 *)(*param_1 + 0x5b0);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar5 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar5,*(undefined4 *)(*param_1 + 0x5b0));
  }
  param_1[5] = (int)puVar5;
  uVar1 = *(undefined4 *)(*param_1 + 0x5b0);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar5 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar5,*(undefined4 *)(*param_1 + 0x5b0));
  }
  param_1[6] = (int)puVar5;
  uVar1 = *(undefined4 *)(*param_1 + 0x5b0);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x24);
  puVar5 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    fn_82BBFDF0(puVar2 + 3);
    *puVar5 = 0;
    puVar2[2] = 0;
  }
  param_1[8] = (int)puVar5;
  iVar3 = fn_82BA0FD8(*(undefined4 *)(*(int *)(*param_1 + 0x550) + 4),
                            *(undefined4 *)(*param_1 + 0x5b0));
  param_1[0x1d] = iVar3;
  param_1[0x1f] = 0;
  param_1[0x20] = -1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  fn_82BB5630(param_1);
  fn_82BB6580(param_1);
  fn_82BB68B0(param_1);
  for (iVar3 = *(int *)(param_1[1] + 0x88); *(int *)(iVar3 + 8) != 0; iVar3 = *(int *)(iVar3 + 8)) {
    iVar4 = fn_82BBFE28(iVar3 + 0x14);
    if (2 < iVar4) {
      fn_82BB9760(param_1,iVar3);
      param_1[0x1f] = param_1[7] + param_1[0x1f];
    }
  }
  if (-1 < param_1[0x20]) {
    do {
      fn_82BB1BE8(param_1[1],lVar6);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 <= param_1[0x20]);
  }
  fn_82BA02A8(*param_1,0xffffffff820e07e0,param_1[0x1f]);
  if (-1 < param_1[0x20]) {
    fn_82BA02A8(*param_1,0xffffffff820e07bc);
  }
  fn_82BA02A8(*param_1,0xffffffff820e0790,param_1[0x21],param_1[0x22]);
  fn_82BCFB88(param_2);
  iVar3 = param_1[0x1d];
  if (iVar3 != 0) {
    fn_82B7BEB0(*(undefined4 *)(iVar3 + -4),iVar3 + -4);
  }
  if (param_1[8] != 0) {
    fn_82BB6528(param_1[8],1);
  }
  if (param_1[6] != 0) {
    fn_82BC6DC0(param_1[6],1);
  }
  if (param_1[5] != 0) {
    fn_82BC6DC0(param_1[5],1);
  }
  iVar3 = param_1[3];
  if (iVar3 != 0) {
    fn_82B7BEB0(*(undefined4 *)(iVar3 + -4),iVar3 + -4);
  }
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    fn_82B7BEB0(*(undefined4 *)(iVar3 + -4),iVar3 + -4);
  }
  return;
}

