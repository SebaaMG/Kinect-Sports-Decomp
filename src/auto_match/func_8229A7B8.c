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
extern unsigned int *auStack_130;
extern unsigned int *auStack_170;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_822997C8();
extern int fn_82299948();
extern int fn_8229B1A0();
extern int fn_8229D298();
extern int fn_8229EBD8();
extern int fn_8229F2C0();
extern int fn_8229F3F0();
extern int fn_82358FD8();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern unsigned int iStack_23c;
extern unsigned int lbl_821AADF4;


undefined4 * fn_8229A7B8(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_240 [4];
  int iStack_23c;
  undefined1 auStack_230 [64];
  undefined1 auStack_1f0 [64];
  undefined1 auStack_1b0 [64];
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [112];
  
  *param_1 = &lbl_821AADF4;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_82266D28(param_1 + 1,0);
  iVar3 = fn_8265C9E0(0x138);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_8229F2C0();
  }
  param_1[3] = uVar4;
  iVar3 = fn_8265C9E0(0x18);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_8229EBD8();
  }
  param_1[4] = uVar4;
  iVar3 = fn_8265C9E0(0x1c);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_8229D298();
  }
  param_1[5] = uVar4;
  iVar3 = fn_8265C9E0(0xc0);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_8229B1A0();
  }
  param_1[6] = uVar4;
  param_1[7] = param_2;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82299948(uVar1,8,0);
  }
  param_1[8] = uVar4;
  iVar3 = fn_8265C9E0(0x1230);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_822997C8();
  }
  param_1[9] = uVar4;
  param_1[10] = 0xffffffff;
  uVar2 = fn_8266EC60();
  uVar2 = fn_8266EE08(auStack_240,uVar2,param_3,0,1,0);
  fn_823F2E20(param_1 + 1,uVar2);
  if (iStack_23c != 0) {
    fn_822315A0();
  }
  fn_82358FD8(param_1[7],auStack_70,0x20,0xffffffff821a8370);
  fn_82358FD8(param_1[7],auStack_f0,0x20,0xffffffff821a837c);
  fn_82358FD8(param_1[7],auStack_170,0x20,0xffffffff821a8388);
  fn_82358FD8(param_1[7],auStack_1f0,0x20,0xffffffff821a8394);
  fn_82358FD8(param_1[7],auStack_230,0x20,0xffffffff821a83a0);
  fn_82358FD8(param_1[7],auStack_b0,0x20,0xffffffff821a83ac);
  fn_82358FD8(param_1[7],auStack_1b0,0x20,0xffffffff821a83b8);
  fn_82358FD8(param_1[7],auStack_130,0x20,0xffffffff821a83c4);
  fn_8229F3F0(param_1[3],auStack_70,auStack_f0,auStack_170,auStack_1f0,auStack_230,auStack_b0,
                  auStack_1b0);
  return param_1;
}

