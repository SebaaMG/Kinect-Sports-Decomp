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
extern int fn_82BA03B8();
extern int fn_82BBFDF0();
extern int fn_82BBFE50();
extern int fn_82BBFE78();
extern int fn_82BC3830();
extern int fn_82BC3888();
extern unsigned int lbl_820E4BDC;


undefined4 * fn_82BC5758(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  param_1[3] = param_2;
  param_1[1] = 0;
  puVar4 = param_1 + 5;
  *param_1 = &lbl_820E4BDC;
  param_1[2] = 0;
  param_1[4] = 0;
  fn_82BBFDF0(puVar4);
  iVar1 = param_1[3];
  param_1[0xc] = *(undefined4 *)(iVar1 + 0x56c);
  *(int *)(iVar1 + 0x56c) = *(int *)(iVar1 + 0x56c) + 1;
  param_1[0xd] = 0;
  param_1[0x12] = 0x400;
  param_1[0x13] = 0x400;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar3 = *(undefined4 *)(param_1[3] + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar3,0x14);
  puVar5 = puVar2 + 1;
  *puVar2 = uVar3;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar5,*(undefined4 *)(param_1[3] + 0x5ac));
  }
  param_1[0xb] = puVar5;
  uVar3 = *(undefined4 *)(param_1[3] + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar3,0x14);
  puVar5 = puVar2 + 1;
  *puVar2 = uVar3;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar5,*(undefined4 *)(param_1[3] + 0x5ac));
  }
  param_1[0x17] = puVar5;
  uVar3 = *(undefined4 *)(param_1[3] + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar3,0x14);
  puVar5 = puVar2 + 1;
  *puVar2 = uVar3;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar5,*(undefined4 *)(param_1[3] + 0x5ac));
  }
  param_1[0x16] = puVar5;
  uVar3 = *(undefined4 *)(param_1[3] + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar3,0x14);
  puVar5 = puVar2 + 1;
  *puVar2 = uVar3;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar5,*(undefined4 *)(param_1[3] + 0x5ac));
  }
  param_1[0xe] = puVar5;
  uVar3 = *(undefined4 *)(param_1[3] + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar3,0x14);
  puVar5 = puVar2 + 1;
  *puVar2 = uVar3;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar5,*(undefined4 *)(param_1[3] + 0x5ac));
  }
  param_1[0xf] = puVar5;
  uVar3 = *(undefined4 *)(param_1[3] + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar3,0x3c4);
  *puVar2 = uVar3;
  if (puVar2 + 1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82BC3830(puVar2 + 1,param_1[3]);
  }
  param_1[0x1c] = uVar3;
  uVar3 = *(undefined4 *)(param_1[3] + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar3,0x3c4);
  *puVar2 = uVar3;
  if (puVar2 + 1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82BC3888(puVar2 + 1,param_1[3]);
  }
  param_1[0x1d] = uVar3;
  fn_82BBFE78(puVar4,param_1[0x1c]);
  fn_82BBFE50(puVar4,param_1[0x1d]);
  *(undefined4 **)(param_1[0x1c] + 0x3b4) = param_1;
  *(undefined4 **)(param_1[0x1d] + 0x3b4) = param_1;
  return param_1;
}

