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
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_822315A0();
extern int fn_82233428();
extern int fn_82236E18();
extern int fn_8223A7A8();
extern int fn_82328AA8();
extern int fn_82328F10();
extern int fn_823297C8();
extern int fn_82329EC0();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_828ABF58();
extern int fn_828E2688();
extern int fn_828E3508();
extern unsigned int iStack_8c;
extern unsigned int iStack_94;
extern unsigned int iStack_9c;
extern unsigned int iStack_a4;
extern unsigned int iStack_ac;
extern unsigned int iStack_b4;
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82197F44;
extern unsigned int lbl_82198190;
extern unsigned int lbl_82198198;
extern unsigned int lbl_821981A8;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B03CC;
extern unsigned int lbl_821B0458;
extern unsigned int lbl_821B0470;
extern unsigned int lbl_821B0488;
extern unsigned int lbl_821B04A0;
extern unsigned int lbl_821B04B8;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


undefined4 * fn_82328088(undefined4 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  char cVar7;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined1 auStack_a8 [4];
  int iStack_a4;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined1 auStack_98 [4];
  int iStack_94;
  undefined1 auStack_90 [4];
  int iStack_8c;
  
  fn_82233428();
  *param_1 = &lbl_82198190;
  puVar5 = param_1 + 0xc;
  param_1[10] = &lbl_821968A4;
  fn_82328AA8(puVar5);
  puVar6 = param_1 + 0x34;
  param_1[0xc] = &lbl_82198198;
  fn_82328F10(puVar6);
  puVar8 = param_1 + 0x5e;
  param_1[0x34] = &lbl_821981A8;
  fn_828E3508(puVar8);
  param_1[0x70] = 0;
  param_1[0x76] = 0;
  param_1[0x5e] = &lbl_82197F44;
  uVar2 = fn_8265C9E0(0x18);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828ABF58(uVar2,1,0,0xffffffffffffffff);
  }
  fn_8223A7A8(param_1 + 0x78,uVar3);
  *puVar8 = &lbl_82197F44;
  puVar4 = (undefined4 *)fn_82236E18(auStack_b0,0xffffffff8219674c,0xffffffff82198048);
  uStack_b8 = *puVar4;
  iVar1 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  iStack_b4 = iVar1;
  cVar7 = fn_828E2688(puVar5);
  if (cVar7 == '\0') {
    fn_823F2E20(param_1 + 0x26,&uStack_b8);
    iVar1 = iStack_b4;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_ac != 0) {
    fn_822315A0();
  }
  puVar4 = (undefined4 *)fn_823297C8(auStack_a8);
  uStack_b8 = *puVar4;
  iVar1 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  iStack_b4 = iVar1;
  cVar7 = fn_828E2688(puVar5);
  if (cVar7 == '\0') {
    fn_823F2E20(param_1 + 0x28,&uStack_b8);
    iVar1 = iStack_b4;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_a4 != 0) {
    fn_822315A0();
  }
  puVar4 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &lbl_821AD588;
    puVar4[1] = 1;
    puVar4[2] = 1;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      puVar4[4] = 0;
      puVar4[3] = &lbl_821B0458;
      fn_828ABF58(puVar4 + 5,0,0,4);
    }
  }
  puVar9 = puVar4 + 3;
  cVar7 = fn_828E2688(puVar5);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x2b];
    param_1[0x2b] = puVar4;
    puVar4 = (undefined4 *)0x0;
    param_1[0x2a] = puVar9;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_823282b0;
    }
  }
  else {
LAB_823282b0:
    if (puVar4 != (undefined4 *)0x0) {
      fn_822315A0(puVar4);
    }
  }
  puVar4 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &lbl_821AD588;
    puVar4[1] = 1;
    puVar4[2] = 1;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      puVar4[4] = 0;
      puVar4[3] = &lbl_821B0470;
      fn_828ABF58(puVar4 + 5,0,0,4);
    }
  }
  puVar9 = puVar4 + 3;
  cVar7 = fn_828E2688(puVar5);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x2d];
    param_1[0x2d] = puVar4;
    puVar4 = (undefined4 *)0x0;
    param_1[0x2c] = puVar9;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_8232834c;
    }
  }
  else {
LAB_8232834c:
    if (puVar4 != (undefined4 *)0x0) {
      fn_822315A0(puVar4);
    }
  }
  puVar4 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &lbl_821AD588;
    puVar4[1] = 1;
    puVar4[2] = 1;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      puVar4[4] = 0;
      puVar4[3] = &lbl_821B03CC;
    }
  }
  puVar9 = puVar4 + 3;
  cVar7 = fn_828E2688(puVar5);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x2f];
    param_1[0x2f] = puVar4;
    puVar4 = (undefined4 *)0x0;
    param_1[0x2e] = puVar9;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_823283d8;
    }
  }
  else {
LAB_823283d8:
    if (puVar4 != (undefined4 *)0x0) {
      fn_822315A0(puVar4);
    }
  }
  puVar4 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &lbl_821AD588;
    puVar4[1] = 1;
    puVar4[2] = 1;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      puVar4[4] = 0;
      puVar4[3] = &lbl_821B0488;
      fn_828ABF58(puVar4 + 5,0,0,2);
    }
  }
  puVar9 = puVar4 + 3;
  cVar7 = fn_828E2688(puVar5);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x31];
    param_1[0x31] = puVar4;
    puVar4 = (undefined4 *)0x0;
    param_1[0x30] = puVar9;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_82328474;
    }
  }
  else {
LAB_82328474:
    if (puVar4 != (undefined4 *)0x0) {
      fn_822315A0(puVar4);
    }
  }
  uStack_b8 = 0;
  auStack_c0[0] = 0;
  uStack_bc = 0x10000;
  puVar4 = (undefined4 *)fn_82329EC0(auStack_a0,auStack_c0,&uStack_b8,&uStack_bc);
  uStack_b8 = *puVar4;
  iVar1 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  iStack_b4 = iVar1;
  cVar7 = fn_828E2688(puVar5);
  if (cVar7 == '\0') {
    fn_823F2E20(param_1 + 0x32,&uStack_b8);
    iVar1 = iStack_b4;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_9c != 0) {
    fn_822315A0();
  }
  puVar5 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_821AD588;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      puVar5[4] = 0;
      puVar5[3] = &lbl_821B04A0;
      fn_828ABF58(puVar5 + 5,0,0,7);
    }
  }
  puVar4 = puVar5 + 3;
  cVar7 = fn_828E2688(puVar6);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x4f];
    param_1[0x4f] = puVar5;
    puVar5 = (undefined4 *)0x0;
    param_1[0x4e] = puVar4;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_82328590;
    }
  }
  else {
LAB_82328590:
    if (puVar5 != (undefined4 *)0x0) {
      fn_822315A0(puVar5);
    }
  }
  puVar5 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_821AD588;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      puVar5[4] = 0;
      puVar5[3] = &lbl_821B04B8;
      fn_828ABF58(puVar5 + 5,0,0,10);
    }
  }
  puVar4 = puVar5 + 3;
  cVar7 = fn_828E2688(puVar6);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x51];
    param_1[0x51] = puVar5;
    puVar5 = (undefined4 *)0x0;
    param_1[0x50] = puVar4;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_8232862c;
    }
  }
  else {
LAB_8232862c:
    if (puVar5 != (undefined4 *)0x0) {
      fn_822315A0(puVar5);
    }
  }
  puVar5 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &lbl_821AD588;
    puVar5[1] = 1;
    puVar5[2] = 1;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      puVar5[4] = 0;
      puVar5[3] = &lbl_821B0458;
      fn_828ABF58(puVar5 + 5,0,0,4);
    }
  }
  puVar4 = puVar5 + 3;
  cVar7 = fn_828E2688(puVar6);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x53];
    param_1[0x53] = puVar5;
    puVar5 = (undefined4 *)0x0;
    param_1[0x52] = puVar4;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_823286b8;
    }
  }
  else {
LAB_823286b8:
    if (puVar5 != (undefined4 *)0x0) {
      fn_822315A0(puVar5);
    }
  }
  puVar5 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &lbl_821AD588;
    puVar5[1] = 1;
    puVar5[2] = 1;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      puVar5[4] = 0;
      puVar5[3] = &lbl_821B0470;
      fn_828ABF58(puVar5 + 5,0,0,4);
    }
  }
  puVar4 = puVar5 + 3;
  cVar7 = fn_828E2688(puVar6);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x55];
    param_1[0x55] = puVar5;
    puVar5 = (undefined4 *)0x0;
    param_1[0x54] = puVar4;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_82328744;
    }
  }
  else {
LAB_82328744:
    if (puVar5 != (undefined4 *)0x0) {
      fn_822315A0(puVar5);
    }
  }
  puVar5 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &lbl_821AD588;
    puVar5[1] = 1;
    puVar5[2] = 1;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      puVar5[4] = 0;
      puVar5[3] = &lbl_821B03CC;
    }
  }
  puVar4 = puVar5 + 3;
  cVar7 = fn_828E2688(puVar6);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x57];
    param_1[0x57] = puVar5;
    puVar5 = (undefined4 *)0x0;
    param_1[0x56] = puVar4;
    if (iVar1 != 0) {
      fn_822315A0();
      goto LAB_823287c0;
    }
  }
  else {
LAB_823287c0:
    if (puVar5 != (undefined4 *)0x0) {
      fn_822315A0(puVar5);
    }
  }
  puVar5 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &lbl_821AD588;
    puVar5[1] = 1;
    puVar5[2] = 1;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      puVar5[4] = 0;
      puVar5[3] = &lbl_821B0488;
      fn_828ABF58(puVar5 + 5,0,0,2);
    }
  }
  puVar4 = puVar5 + 3;
  cVar7 = fn_828E2688(puVar6);
  if (cVar7 == '\0') {
    iVar1 = param_1[0x59];
    param_1[0x59] = puVar5;
    puVar5 = (undefined4 *)0x0;
    param_1[0x58] = puVar4;
    if (iVar1 == 0) goto LAB_8232885c;
    fn_822315A0();
  }
  if (puVar5 != (undefined4 *)0x0) {
    fn_822315A0(puVar5);
  }
LAB_8232885c:
  uStack_b8 = 0x10000;
  uStack_bc = 0;
  auStack_c0[0] = 0;
  puVar5 = (undefined4 *)fn_82329EC0(auStack_98,auStack_c0,&uStack_bc,&uStack_b8);
  uStack_b8 = *puVar5;
  iVar1 = puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  iStack_b4 = iVar1;
  cVar7 = fn_828E2688(puVar6);
  if (cVar7 == '\0') {
    fn_823F2E20(param_1 + 0x5c,&uStack_b8);
    iVar1 = iStack_b4;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_94 != 0) {
    fn_822315A0();
  }
  uStack_b8 = 0x10000;
  uStack_bc = 0;
  auStack_c0[0] = 0;
  puVar6 = (undefined4 *)fn_82329EC0(auStack_90,auStack_c0,&uStack_bc,&uStack_b8);
  uStack_b8 = *puVar6;
  iVar1 = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  iStack_b4 = iVar1;
  cVar7 = fn_828E2688(puVar8);
  if (cVar7 == '\0') {
    fn_823F2E20(param_1 + 0x78,&uStack_b8);
    iVar1 = iStack_b4;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  return param_1;
}

