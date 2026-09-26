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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_822997C8();
extern int fn_82299948();
extern int fn_8229A7B8();
extern int fn_8229AE10();
extern int fn_8229CDE0();
extern int fn_822A3CC0();
extern int fn_822A3E40();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_8266EC60();
extern int fn_8266EF20();
extern int fn_8266F6A8();
extern int fn_82673A28();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int lbl_821AA2D0;
extern unsigned int uStack_60;


undefined4 *
fn_82291680(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint *param_5)

{
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar1;
  undefined4 *puVar5;
  undefined8 uVar2;
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  
  fn_8229A7B8();
  param_1[0xc] = 0;
  *param_1 = &lbl_821AA2D0;
  param_1[0xb] = 2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar3 = fn_8265C9E0(0x2c0);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_822A3CC0();
  }
  param_1[0x12] = iVar3;
  *(undefined1 *)(iVar3 + 0x30) = 0;
  fn_822A3E40(param_1 + 0x12,0xffffffff820e975c);
  iVar3 = fn_8265C9E0(0x1230);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_822997C8();
  }
  param_1[0x13] = uVar4;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82299948(uVar1,6,1);
  }
  param_1[0x14] = uVar4;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82299948(uVar1,6,2);
  }
  param_1[0x15] = uVar4;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82299948(uVar1,4,0);
  }
  param_1[0x16] = uVar4;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82299948(uVar1,4,1);
  }
  param_1[0x17] = uVar4;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82299948(uVar1,4,2);
  }
  param_1[0x18] = uVar4;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82299948(uVar1,0,3);
  }
  param_1[0x19] = uVar4;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82299948(uVar1,0,3);
  }
  param_1[0x1a] = uVar4;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82299948(uVar1,0,2);
  }
  param_1[0x1b] = uVar4;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82299948(uVar1,0,1);
  }
  param_1[0x1c] = uVar4;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82299948(uVar1,7,0);
  }
  param_1[0x1d] = uVar4;
  uVar1 = fn_8265C9E0(0x10);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_8229CDE0(uVar1,param_4,0);
  }
  param_1[0x1e] = uVar4;
  puVar5 = (undefined4 *)fn_8229AE10(auStack_58,param_1);
  fn_82673A28(*puVar5,0xffffffff822923a0,param_1);
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  puVar5 = (undefined4 *)fn_8229AE10(auStack_50,param_1);
  fn_8266F6A8(*puVar5,3);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  if (*param_5 == 0 || 0x79ffffff < (*param_5 & 0xff000000)) {
    uStack_60 = 0;
    iStack_5c = 0;
    fn_82266D28(&uStack_60,0);
    fn_823F2E20(param_1 + 0xf,&uStack_60);
    iStack_44 = iStack_5c;
  }
  else {
    uVar2 = fn_8266EC60();
    uVar2 = fn_8266EF20(auStack_48,uVar2,param_5,0,0,0x18280143);
    fn_823F2E20(param_1 + 0xf,uVar2);
  }
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  return param_1;
}

