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
extern unsigned int *auStack_78;
extern int fn_822315A0();
extern int fn_82233428();
extern int fn_82236E18();
extern int fn_82249C60();
extern int fn_822D6990();
extern int fn_822D6BB0();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_828ABF58();
extern int fn_828E2688();
extern int fn_828E3508();
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196E28;
extern unsigned int lbl_82196E38;
extern unsigned int lbl_82196E70;
extern unsigned int lbl_82196E94;
extern unsigned int lbl_82197F44;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AD8D0;
extern unsigned int lbl_821AD8E8;
extern unsigned int lbl_821AD900;
extern unsigned int lbl_821AD918;
extern unsigned int lbl_821AD948;
extern unsigned int lbl_821AD960;
extern unsigned int lbl_821B47E0;


undefined4 * fn_822D6358(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar7;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar8;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  undefined1 auStack_70 [4];
  int iStack_6c;
  
  fn_82233428();
  *param_1 = &lbl_82196E70;
  puVar8 = param_1 + 0xc;
  param_1[10] = &lbl_821968A4;
  fn_822D6990(puVar8);
  puVar6 = param_1 + 0x2c;
  param_1[0xc] = &lbl_82196E28;
  fn_828E3508(puVar6);
  param_1[0x3e] = 0;
  param_1[0x44] = 0;
  param_1[0x2c] = &lbl_82197F44;
  puVar2 = (undefined4 *)fn_8265C9E0(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &lbl_821AD948;
  }
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  puVar3 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[3] = puVar2;
    puVar3[1] = 1;
    puVar3[2] = 1;
    *puVar3 = &lbl_82196E94;
  }
  if (param_1[0x47] != 0) {
    fn_822315A0();
  }
  param_1[0x47] = puVar3;
  param_1[0x46] = puVar2;
  puVar3 = param_1 + 0x48;
  *puVar6 = &lbl_82197F44;
  fn_828E3508(puVar3);
  param_1[0x5a] = 0;
  param_1[0x60] = 0;
  param_1[0x48] = &lbl_82197F44;
  puVar2 = (undefined4 *)fn_8265C9E0(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &lbl_821AD960;
  }
  param_1[0x62] = 0;
  param_1[99] = 0;
  puVar4 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = puVar2;
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_82196E94;
  }
  if (param_1[99] != 0) {
    fn_822315A0();
  }
  param_1[99] = puVar4;
  param_1[0x62] = puVar2;
  puVar4 = param_1 + 100;
  *puVar3 = &lbl_82197F44;
  fn_822D6BB0(puVar4);
  param_1[100] = &lbl_82196E38;
  puVar2 = (undefined4 *)fn_8265C9E0(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      fn_828ABF58(puVar2 + 3,1,0,0xffffffffffffffff);
    }
  }
  puStack_80 = puVar2 + 3;
  puStack_7c = puVar2;
  cVar7 = fn_828E2688(puVar8);
  if (cVar7 == '\0') {
    fn_823F2E20(param_1 + 0x26,&puStack_80);
    puVar2 = puStack_7c;
  }
  if (puVar2 != (undefined4 *)0x0) {
    fn_822315A0(puVar2);
  }
  puVar2 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[4] = 0;
      puVar2[3] = &lbl_821AD8D0;
      fn_828ABF58(puVar2 + 5,0,0,0xc);
    }
  }
  puVar5 = puVar2 + 3;
  cVar7 = fn_828E2688(puVar8);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x29];
    param_1[0x29] = puVar2;
    puVar2 = (undefined4 *)0x0;
    param_1[0x28] = puVar5;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_822d6628;
    }
  }
  else {
LAB_822d6628:
    if (puVar2 != (undefined4 *)0x0) {
      fn_822315A0(puVar2);
    }
  }
  puVar5 = (undefined4 *)fn_82236E18(auStack_78,0xffffffff8219674c,0xffffffff82198048);
  puStack_80 = (undefined4 *)*puVar5;
  puVar2 = (undefined4 *)puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  puStack_7c = puVar2;
  cVar7 = fn_828E2688(puVar8);
  if (cVar7 == '\0') {
    fn_823F2E20(param_1 + 0x2a,&puStack_80);
    puVar2 = puStack_7c;
  }
  if (puVar2 != (undefined4 *)0x0) {
    fn_822315A0(puVar2);
  }
  if (iStack_74 != 0) {
    fn_822315A0();
  }
  puVar2 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[4] = 0;
      puVar2[3] = &lbl_821B47E0;
      fn_828ABF58(puVar2 + 5,0,0,0x18);
    }
  }
  cVar7 = fn_828E2688(puVar6);
  puVar6 = puVar2;
  if (cVar7 == '\0') {
    iVar1 = param_1[0x47];
    puVar6 = (undefined4 *)0x0;
    param_1[0x47] = puVar2;
    param_1[0x46] = puVar2 + 3;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_822d6738;
    }
  }
  else {
LAB_822d6738:
    if (puVar6 != (undefined4 *)0x0) {
      fn_822315A0(puVar6);
    }
  }
  puVar2 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[4] = 0;
      puVar2[3] = &lbl_821AD8E8;
      fn_828ABF58(puVar2 + 5,0,0,0xff);
    }
  }
  cVar7 = fn_828E2688(puVar3);
  puVar6 = puVar2;
  if (cVar7 == '\0') {
    iVar1 = param_1[99];
    puVar6 = (undefined4 *)0x0;
    param_1[99] = puVar2;
    param_1[0x62] = puVar2 + 3;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_822d67d4;
    }
  }
  else {
LAB_822d67d4:
    if (puVar6 != (undefined4 *)0x0) {
      fn_822315A0(puVar6);
    }
  }
  puVar2 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[4] = 0;
      puVar2[3] = &lbl_821AD900;
      fn_828ABF58(puVar2 + 5,0,0,0xff);
    }
  }
  puVar6 = puVar2 + 3;
  cVar7 = fn_828E2688(puVar4);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x7f];
    param_1[0x7f] = puVar2;
    puVar2 = (undefined4 *)0x0;
    param_1[0x7e] = puVar6;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_822d6870;
    }
  }
  else {
LAB_822d6870:
    if (puVar2 != (undefined4 *)0x0) {
      fn_822315A0(puVar2);
    }
  }
  puVar2 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AD588;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[4] = 0;
      puVar2[3] = &lbl_821AD918;
      fn_828ABF58(puVar2 + 5,0,0,4);
    }
  }
  puVar6 = puVar2 + 3;
  cVar7 = fn_828E2688(puVar4);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x81];
    param_1[0x81] = puVar2;
    puVar2 = (undefined4 *)0x0;
    param_1[0x80] = puVar6;
    if (iVar1 == 0) goto LAB_822d691c;
    fn_822315A0();
  }
  if (puVar2 != (undefined4 *)0x0) {
    fn_822315A0(puVar2);
  }
LAB_822d691c:
  puVar6 = (undefined4 *)fn_82249C60(auStack_70);
  puStack_80 = (undefined4 *)*puVar6;
  puVar2 = (undefined4 *)puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  puStack_7c = puVar2;
  cVar7 = fn_828E2688(puVar4);
  if (cVar7 == '\0') {
    fn_823F2E20(param_1 + 0x82,&puStack_80);
    puVar2 = puStack_7c;
  }
  if (puVar2 != (undefined4 *)0x0) {
    fn_822315A0(puVar2);
  }
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  return param_1;
}

