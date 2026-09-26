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
extern unsigned int *auStack_30;
extern int fn_8267ADA8();
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82687270();
extern int fn_8268C248();
extern int fn_826CDDA8();
extern int fn_826D28F0();
extern int fn_826D7D58();
extern int fn_826D8C80();
extern int fn_826DDC60();
extern int fn_827252E0();
extern int fn_82726070();
extern int fn_8275D0E0();
extern unsigned int lbl_8200C6D8;
extern unsigned int lbl_831E7E64;


undefined4 *
fn_826DE8E0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 auStack_30 [12];
  
  uVar4 = 0;
  param_1[1] = 1;
  param_1[5] = param_4;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  *param_1 = &lbl_8200C6D8;
  param_1[7] = param_4;
  param_1[8] = 0;
  fn_8268C248(param_1 + 9,param_3);
  fn_826D7D58(param_1 + 10);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  fn_8267ADA8(param_1 + 0x2b,0);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  fn_8267ADA8(param_1 + 0x35,0);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0x50000;
  param_1[0x45] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = fn_8267B890(param_1[7],0xc,0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8275D0E0(uVar1,0x1ff8);
  }
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x2a] = 0;
  param_1[0x42] = 0;
  iVar3 = fn_8267B890(lbl_831E7E64,0x24,0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_826D8C80();
  }
  if (param_1[0x21] != 0) {
    fn_8267C4F0();
  }
  param_1[0x21] = uVar2;
  uVar1 = fn_8267B890(param_1[7],0x38,0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_826D28F0(uVar1,param_2);
  }
  fn_826CDDA8(uVar1);
  auStack_30[0] = 0x10001;
  fn_826DDC60(param_1,auStack_30,uVar1);
  iVar3 = fn_8267B890(param_1[7],0x58,0);
  if (iVar3 != 0) {
    uVar4 = fn_82726070();
  }
  fn_827252E0(uVar4);
  auStack_30[0] = 0x10002;
  fn_826DDC60(param_1,auStack_30,uVar4);
  if ((uVar4 & 0xffffffff) != 0) {
    fn_82687270(uVar4);
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_82687270(uVar1);
  }
  return param_1;
}

