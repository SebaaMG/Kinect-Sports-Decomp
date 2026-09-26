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
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_138;
extern unsigned int *auStack_140;
extern unsigned int *auStack_148;
extern unsigned int *auStack_150;
extern unsigned int *auStack_158;
extern unsigned int *auStack_160;
extern unsigned int *auStack_170;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_823297C8();
extern int fn_82329EC0();
extern int fn_823A8340();
extern int fn_823A85C8();
extern int fn_823A9560();
extern int fn_823A9980();
extern int fn_823A9B18();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_828ABF58();
extern int fn_828AC0A0();
extern int fn_828E2680();
extern int fn_828E2688();
extern int fn_828E34D8();
extern int fn_828E3508();
extern int fn_828E3AE0();
extern unsigned int iStack_134;
extern unsigned int iStack_13c;
extern unsigned int iStack_144;
extern unsigned int iStack_14c;
extern unsigned int iStack_154;
extern unsigned int iStack_164;
extern unsigned int lbl_82196C78;
extern unsigned int lbl_82196E94;
extern unsigned int lbl_82197334;
extern unsigned int lbl_8219733C;
extern unsigned int lbl_8219734C;
extern unsigned int lbl_8219735C;
extern unsigned int lbl_8219736C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B55C4;
extern unsigned int lbl_821B55DC;
extern unsigned int lbl_821B55F4;
extern unsigned int uStack_168;


undefined4 * fn_823A7B08(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar4;
  char cVar9;
  undefined4 *puVar8;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 auStack_170 [8];
  undefined4 uStack_168;
  int iStack_164;
  undefined4 auStack_160 [2];
  undefined1 auStack_158 [4];
  int iStack_154;
  undefined1 auStack_150 [4];
  int iStack_14c;
  undefined1 auStack_148 [4];
  int iStack_144;
  undefined1 auStack_140 [4];
  int iStack_13c;
  undefined1 auStack_138 [4];
  int iStack_134;
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  fn_828E34D8();
  puVar8 = param_1 + 10;
  *param_1 = &lbl_82197334;
  fn_828E3508(puVar8);
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  param_1[10] = &lbl_8219733C;
  puVar5 = (undefined4 *)fn_8265C9E0(8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 0;
    *puVar5 = &lbl_821B55DC;
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  puVar6 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[3] = puVar5;
    puVar6[1] = 1;
    puVar6[2] = 1;
    *puVar6 = &lbl_82196E94;
  }
  if (param_1[0x25] != 0) {
    fn_822315A0();
  }
  param_1[0x25] = puVar6;
  param_1[0x24] = puVar5;
  puVar6 = param_1 + 0x26;
  *puVar8 = &lbl_8219733C;
  fn_828E3508(puVar6);
  param_1[0x38] = 0;
  param_1[0x3e] = 0;
  param_1[0x26] = &lbl_8219734C;
  puVar5 = (undefined4 *)fn_8265C9E0(8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 0;
    *puVar5 = &lbl_821B55F4;
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  puVar7 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[3] = puVar5;
    puVar7[1] = 1;
    puVar7[2] = 1;
    *puVar7 = &lbl_82196E94;
  }
  if (param_1[0x41] != 0) {
    fn_822315A0();
  }
  param_1[0x40] = puVar5;
  param_1[0x41] = puVar7;
  puVar11 = param_1 + 0x42;
  *puVar6 = &lbl_8219734C;
  fn_823A8340(puVar11);
  puVar7 = param_1 + 100;
  param_1[0x42] = &lbl_8219735C;
  fn_828E3508(puVar7);
  param_1[0x76] = 0;
  puVar10 = param_1 + 0x7e;
  param_1[0x7c] = 0;
  param_1[100] = &lbl_82196C78;
  fn_823A85C8(puVar10);
  puVar5 = param_1 + 0x9e;
  param_1[0x7e] = &lbl_8219736C;
  fn_828E3508(puVar5);
  param_1[0xb0] = 0;
  param_1[0xb6] = 0;
  param_1[0x9e] = &lbl_82196C78;
  fn_82230110(auStack_130,0xffffffff821b550c);
  fn_828E3AE0(puVar8,auStack_130);
  fn_82230300(auStack_130,1,0);
  fn_828E2680(puVar8,1);
  uVar4 = fn_8265C9E0(0xc4);
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    puVar3 = (undefined4 *)uVar4;
    puVar3[1] = 1;
    puVar3[2] = 1;
    *puVar3 = &lbl_821AD588;
    if (uVar4 != 0xfffffffffffffff4) {
      fn_823A9980();
    }
  }
  iVar2 = (int)uVar4;
  cVar9 = fn_828E2688(puVar8);
  if (cVar9 == '\0') {
    iVar1 = param_1[0x25];
    uVar4 = 0;
    param_1[0x25] = iVar2;
    param_1[0x24] = iVar2 + 0xc;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_823a7d9c;
    }
  }
  else {
LAB_823a7d9c:
    if ((uVar4 & 0xffffffff) != 0) {
      fn_822315A0(uVar4);
    }
  }
  fn_82230110(auStack_f0,0xffffffff821b5518);
  fn_828E3AE0(puVar6,auStack_f0);
  fn_82230300(auStack_f0,1,0);
  fn_828E2680(puVar6,1);
  uVar4 = fn_8265C9E0(0xc4);
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    puVar8 = (undefined4 *)uVar4;
    puVar8[1] = 1;
    puVar8[2] = 1;
    *puVar8 = &lbl_821AD588;
    if (uVar4 != 0xfffffffffffffff4) {
      fn_823A9B18();
    }
  }
  iVar2 = (int)uVar4;
  cVar9 = fn_828E2688(puVar6);
  if (cVar9 == '\0') {
    iVar1 = param_1[0x41];
    uVar4 = 0;
    param_1[0x41] = iVar2;
    param_1[0x40] = iVar2 + 0xc;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_823a7e50;
    }
  }
  else {
LAB_823a7e50:
    if ((uVar4 & 0xffffffff) != 0) {
      fn_822315A0(uVar4);
    }
  }
  fn_82230110(auStack_b0,0xffffffff821b552c);
  fn_828E3AE0(puVar11,auStack_b0);
  fn_82230300(auStack_b0,1,0);
  fn_828E2680(puVar11,1);
  uStack_168 = 0;
  auStack_160[0] = 2;
  auStack_170[0] = 0;
  puVar8 = (undefined4 *)fn_82329EC0(auStack_148,auStack_170,&uStack_168,auStack_160);
  uStack_168 = *puVar8;
  iVar2 = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  iStack_164 = iVar2;
  cVar9 = fn_828E2688(puVar11);
  if (cVar9 == '\0') {
    fn_823F2E20(param_1 + 0x5c,&uStack_168);
    iVar2 = iStack_164;
  }
  if (iVar2 != 0) {
    fn_822315A0(iVar2);
  }
  if (iStack_144 != 0) {
    fn_822315A0();
  }
  auStack_160[0] = 0;
  uStack_168 = 8;
  puVar8 = (undefined4 *)fn_823A9560(auStack_140,auStack_160,&uStack_168);
  uStack_168 = *puVar8;
  iVar2 = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  iStack_164 = iVar2;
  cVar9 = fn_828E2688(puVar11);
  if (cVar9 == '\0') {
    fn_823F2E20(param_1 + 0x5e,&uStack_168);
    iVar2 = iStack_164;
  }
  if (iVar2 != 0) {
    fn_822315A0(iVar2);
  }
  if (iStack_13c != 0) {
    fn_822315A0();
  }
  puVar8 = (undefined4 *)fn_823297C8(auStack_150);
  uStack_168 = *puVar8;
  iVar2 = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  iStack_164 = iVar2;
  cVar9 = fn_828E2688(puVar11);
  if (cVar9 == '\0') {
    fn_823F2E20(param_1 + 0x60,&uStack_168);
    iVar2 = iStack_164;
  }
  if (iVar2 != 0) {
    fn_822315A0(iVar2);
  }
  if (iStack_14c != 0) {
    fn_822315A0();
  }
  puVar8 = (undefined4 *)fn_8265C9E0(0x24);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8[1] = 1;
    puVar8[2] = 1;
    *puVar8 = &lbl_821AD588;
    if (puVar8 + 3 != (undefined4 *)0x0) {
      fn_828AC0A0(puVar8 + 3,0,0,2);
    }
  }
  puVar6 = puVar8 + 3;
  cVar9 = fn_828E2688(puVar11);
  if (cVar9 == '\0') {
    iVar2 = param_1[99];
    param_1[99] = puVar8;
    puVar8 = (undefined4 *)0x0;
    param_1[0x62] = puVar6;
    if (iVar2 != 0) {
      fn_822315A0();
      goto LAB_823a806c;
    }
  }
  else {
LAB_823a806c:
    if (puVar8 != (undefined4 *)0x0) {
      fn_822315A0(puVar8);
    }
  }
  fn_82230110(auStack_110,0xffffffff821b5540);
  fn_828E3AE0(puVar10,auStack_110);
  fn_82230300(auStack_110,1,0);
  fn_828E2680(puVar10,1);
  uStack_168 = 8;
  auStack_160[0] = 0;
  puVar8 = (undefined4 *)fn_823A9560(auStack_158,auStack_160,&uStack_168);
  uStack_168 = *puVar8;
  iVar2 = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  iStack_164 = iVar2;
  cVar9 = fn_828E2688(puVar10);
  if (cVar9 == '\0') {
    fn_823F2E20(param_1 + 0x98,&uStack_168);
    iVar2 = iStack_164;
  }
  if (iVar2 != 0) {
    fn_822315A0(iVar2);
  }
  if (iStack_154 != 0) {
    fn_822315A0();
  }
  puVar8 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8[1] = 1;
    puVar8[2] = 1;
    *puVar8 = &lbl_821AD588;
    if (puVar8 + 3 != (undefined4 *)0x0) {
      puVar8[4] = 0;
      puVar8[3] = &lbl_821B55C4;
      fn_828ABF58(puVar8 + 5,0,0,10);
    }
  }
  puVar6 = puVar8 + 3;
  cVar9 = fn_828E2688(puVar10);
  if (cVar9 == '\0') {
    iVar2 = param_1[0x9b];
    param_1[0x9b] = puVar8;
    puVar8 = (undefined4 *)0x0;
    param_1[0x9a] = puVar6;
    if (iVar2 == 0) goto LAB_823a81c4;
    fn_822315A0();
  }
  if (puVar8 != (undefined4 *)0x0) {
    fn_822315A0(puVar8);
  }
LAB_823a81c4:
  uStack_168 = 2;
  auStack_160[0] = 0;
  auStack_170[0] = 0;
  puVar8 = (undefined4 *)fn_82329EC0(auStack_138,auStack_170,auStack_160,&uStack_168);
  uStack_168 = *puVar8;
  iVar2 = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  iStack_164 = iVar2;
  cVar9 = fn_828E2688(puVar10);
  if (cVar9 == '\0') {
    fn_823F2E20(param_1 + 0x9c,&uStack_168);
    iVar2 = iStack_164;
  }
  if (iVar2 != 0) {
    fn_822315A0(iVar2);
  }
  if (iStack_134 != 0) {
    fn_822315A0();
  }
  fn_82230110(auStack_d0,0xffffffff821b5550);
  fn_828E3AE0(puVar7,auStack_d0);
  fn_82230300(auStack_d0,1,0);
  fn_828E2680(puVar7,1);
  fn_82230110(auStack_90,0xffffffff821b5568);
  fn_828E3AE0(puVar5,auStack_90);
  fn_82230300(auStack_90,1,0);
  fn_828E2680(puVar5,1);
  return param_1;
}

