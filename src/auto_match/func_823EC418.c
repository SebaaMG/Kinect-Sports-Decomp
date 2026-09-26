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
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223A7A8();
extern int fn_823ECB88();
extern int fn_823ECCA8();
extern int fn_823F0708();
extern int fn_823F0B60();
extern int fn_823F0DC0();
extern int fn_823F1190();
extern int fn_823F1608();
extern int fn_823F1940();
extern int fn_823F1C80();
extern int fn_823F2040();
extern int fn_823F23B0();
extern int fn_823F2810();
extern int fn_823F2AD0();
extern int fn_8265C9E0();
extern int fn_828ABF58();
extern int fn_828E34D8();
extern int fn_828E3508();
extern int fn_828E3AD0();
extern unsigned int lbl_82196C78;
extern unsigned int lbl_82196E94;
extern unsigned int lbl_82197924;
extern unsigned int lbl_82197EEC;
extern unsigned int lbl_82197EF4;
extern unsigned int lbl_82197F24;
extern unsigned int lbl_82197F34;
extern unsigned int lbl_82197F44;
extern unsigned int lbl_82197F54;
extern unsigned int lbl_82197F64;
extern unsigned int lbl_82197F74;
extern unsigned int lbl_82197F84;
extern unsigned int lbl_82197F94;
extern unsigned int lbl_82197FA4;
extern unsigned int lbl_82197FB4;
extern unsigned int lbl_82197FC4;
extern unsigned int lbl_82197FD4;
extern unsigned int lbl_82197FE4;
extern unsigned int lbl_82197FF4;
extern unsigned int lbl_82198004;
extern unsigned int lbl_82198014;
extern unsigned int lbl_821B47F8;
extern unsigned int lbl_821B70B4;
extern unsigned int lbl_821B70CC;
extern unsigned int lbl_821B70E4;
extern unsigned int lbl_821B70FC;
extern unsigned int lbl_821B7114;
extern unsigned int lbl_821B7264;
extern unsigned int lbl_821B727C;


undefined4 * fn_823EC418(undefined4 *param_1)

{
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 *puVar5;
  undefined1 auStack_70 [112];
  
  fn_828E34D8();
  *param_1 = &lbl_82197EEC;
  fn_823F0708(param_1 + 10);
  param_1[10] = &lbl_82197EF4;
  fn_823ECB88(param_1 + 0x2a);
  fn_828E3508(param_1 + 0x48);
  param_1[0x5a] = 0;
  param_1[0x60] = 0;
  param_1[0x48] = &lbl_82197F24;
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B70B4;
  }
  param_1[0x62] = 0;
  param_1[99] = 0;
  puVar4 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = puVar3;
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_82196E94;
  }
  if (param_1[99] != 0) {
    fn_822315A0();
  }
  param_1[99] = puVar4;
  param_1[0x62] = puVar3;
  param_1[0x48] = &lbl_82197F24;
  fn_828E3508(param_1 + 100);
  param_1[0x76] = 0;
  param_1[0x7c] = 0;
  param_1[100] = &lbl_82197F24;
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B70CC;
  }
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  puVar4 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = puVar3;
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_82196E94;
  }
  if (param_1[0x7f] != 0) {
    fn_822315A0();
  }
  param_1[0x7f] = puVar4;
  param_1[0x7e] = puVar3;
  param_1[100] = &lbl_82197F24;
  fn_828E3508(param_1 + 0x80);
  param_1[0x92] = 0;
  param_1[0x98] = 0;
  param_1[0x80] = &lbl_82197F24;
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B70E4;
  }
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  puVar4 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = puVar3;
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_82196E94;
  }
  if (param_1[0x9b] != 0) {
    fn_822315A0();
  }
  param_1[0x9b] = puVar4;
  param_1[0x9a] = puVar3;
  param_1[0x80] = &lbl_82197F24;
  fn_823ECB88(param_1 + 0x9c);
  fn_823ECB88(param_1 + 0xba);
  fn_823ECB88(param_1 + 0xd8);
  fn_823ECB88(param_1 + 0xf6);
  fn_828E3508(param_1 + 0x114);
  param_1[0x126] = 0;
  param_1[300] = 0;
  param_1[0x114] = &lbl_82197F34;
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B47F8;
  }
  fn_8223A7A8(param_1 + 0x12e,puVar3);
  uVar1 = fn_8265C9E0(0x18);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828ABF58(uVar1,1,0,0xffffffffffffffff);
  }
  fn_8223A7A8(param_1 + 0x130,uVar2);
  param_1[0x114] = &lbl_82197F34;
  fn_823ECB88(param_1 + 0x132);
  fn_828E3508(param_1 + 0x150);
  param_1[0x162] = 0;
  param_1[0x168] = 0;
  param_1[0x150] = &lbl_82197F44;
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B70FC;
  }
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  puVar4 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = puVar3;
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_82196E94;
  }
  if (param_1[0x16b] != 0) {
    fn_822315A0();
  }
  param_1[0x16b] = puVar4;
  param_1[0x16a] = puVar3;
  param_1[0x150] = &lbl_82197F44;
  fn_828E3508(param_1 + 0x16c);
  param_1[0x17e] = 0;
  param_1[0x184] = 0;
  param_1[0x16c] = &lbl_82196C78;
  fn_828E3508(param_1 + 0x186);
  param_1[0x198] = 0;
  param_1[0x19e] = 0;
  param_1[0x186] = &lbl_82197F54;
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_82197924;
  }
  fn_8223A7A8(param_1 + 0x1a0,puVar3);
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B7114;
  }
  fn_8223A7A8(param_1 + 0x1a2,puVar3);
  param_1[0x186] = &lbl_82197F54;
  fn_823F0B60(param_1 + 0x1a4);
  param_1[0x1a4] = &lbl_82197F64;
  fn_828E3508(param_1 + 0x1c4);
  param_1[0x1d6] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1c4] = &lbl_82196C78;
  fn_828E3508(param_1 + 0x1de);
  param_1[0x1f0] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1de] = &lbl_82197F34;
  uVar1 = fn_8265C9E0(0x18);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828ABF58(uVar1,1,0,0xffffffffffffffff);
  }
  fn_8223A7A8(param_1 + 0x1f8,uVar2);
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B47F8;
  }
  fn_8223A7A8(param_1 + 0x1fa,puVar3);
  param_1[0x1de] = &lbl_82197F34;
  fn_823F0DC0(param_1 + 0x1fc);
  param_1[0x1fc] = &lbl_82197F74;
  fn_823F1190(param_1 + 0x224);
  param_1[0x224] = &lbl_82197F84;
  fn_823F1608(param_1 + 0x24c);
  param_1[0x24c] = &lbl_82197F94;
  fn_823F1940(param_1 + 0x270);
  param_1[0x270] = &lbl_82197FA4;
  fn_823F1C80(param_1 + 0x296);
  param_1[0x296] = &lbl_82197FB4;
  fn_823F2040(param_1 + 0x2be);
  param_1[0x2be] = &lbl_82197FC4;
  fn_823F23B0(param_1 + 0x2e6);
  param_1[0x2e6] = &lbl_82197FD4;
  fn_823F2810(param_1 + 0x30e);
  param_1[0x30e] = &lbl_82197FE4;
  fn_828E3508(param_1 + 0x334);
  param_1[0x346] = 0;
  param_1[0x34c] = 0;
  param_1[0x334] = &lbl_82197FF4;
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B7264;
  }
  param_1[0x34e] = 0;
  param_1[0x34f] = 0;
  puVar4 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = puVar3;
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_82196E94;
  }
  if (param_1[0x34f] != 0) {
    fn_822315A0();
  }
  param_1[0x34f] = puVar4;
  param_1[0x34e] = puVar3;
  param_1[0x334] = &lbl_82197FF4;
  fn_828E3508(param_1 + 0x350);
  param_1[0x362] = 0;
  param_1[0x368] = 0;
  param_1[0x350] = &lbl_82198004;
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B727C;
  }
  param_1[0x36a] = 0;
  param_1[0x36b] = 0;
  puVar5 = (undefined4 *)fn_8265C9E0(0x10);
  puVar4 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[3] = puVar3;
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_82196E94;
    puVar4 = puVar5;
  }
  if (param_1[0x36b] != 0) {
    fn_822315A0();
  }
  param_1[0x36b] = puVar4;
  param_1[0x36a] = puVar3;
  param_1[0x350] = &lbl_82198004;
  fn_823F2AD0(param_1 + 0x36c);
  param_1[0x36c] = &lbl_82198014;
  fn_82230110(auStack_70,0xffffffff821b6c84);
  fn_828E3AD0(param_1,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_823ECCA8(param_1);
  return param_1;
}

