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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_148;
extern unsigned int *auStack_150;
extern unsigned int *auStack_158;
extern unsigned int *auStack_160;
extern unsigned int *auStack_168;
extern unsigned int *auStack_170;
extern unsigned int *auStack_1c8;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_82236DA0();
extern int fn_8223AAC0();
extern int fn_82249C60();
extern int fn_82365BD8();
extern int fn_82390920();
extern int fn_82390BF8();
extern int fn_82390F78();
extern int fn_82391200();
extern int fn_82391C08();
extern int fn_82391E58();
extern int fn_82392360();
extern int fn_82393000();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_828ABFB0();
extern int fn_828AC0A0();
extern int fn_828E2680();
extern int fn_828E2688();
extern int fn_828E34D8();
extern int fn_828E3508();
extern int fn_828E3AE0();
extern int fn_828E5F40();
extern int fn_828EA268();
extern unsigned int iStack_16c;
extern unsigned int iStack_174;
extern unsigned int iStack_184;
extern unsigned int iStack_1a4;
extern unsigned int iStack_1cc;
extern unsigned int lbl_82196BE0;
extern unsigned int lbl_82196BE8;
extern unsigned int lbl_82196BF8;
extern unsigned int lbl_82196C08;
extern unsigned int lbl_82196C18;
extern unsigned int lbl_82196C28;
extern unsigned int lbl_82196E94;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B47B0;
extern unsigned int lbl_821B47C8;
extern unsigned int lbl_821B47E0;
extern unsigned int lbl_821B4810;
extern unsigned int uStack_178;
extern unsigned int uStack_188;


undefined4 * fn_8238F748(undefined4 *param_1)

{
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char cVar15;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar12;
  int iVar13;
  ulonglong uVar5;
  int iVar14;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puStack00000014;
  undefined1 auStack_1f0 [8];
  undefined4 *apuStack_1e8 [2];
  undefined4 *puStack_1e0;
  undefined4 *puStack_1dc;
  undefined4 *apuStack_1d8 [2];
  undefined1 auStack_1d0 [4];
  int iStack_1cc;
  undefined1 auStack_1c8 [8];
  undefined4 *puStack_1c0;
  undefined4 *puStack_1bc;
  undefined4 *puStack_1b8;
  undefined4 *puStack_1b4;
  undefined4 *puStack_1b0;
  undefined4 *puStack_1ac;
  undefined4 *puStack_1a8;
  int iStack_1a4;
  undefined4 *puStack_1a0;
  undefined4 *puStack_19c;
  undefined4 *puStack_198;
  undefined4 *puStack_194;
  undefined4 *puStack_190;
  undefined4 uStack_188;
  int iStack_184;
  undefined4 *puStack_180;
  undefined4 *puStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  undefined1 auStack_170 [4];
  int iStack_16c;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [192];
  
  puStack00000014 = param_1;
  fn_828E34D8();
  puVar22 = param_1 + 10;
  *param_1 = &lbl_82196BE0;
  fn_82390920(puVar22);
  puVar18 = param_1 + 0x30;
  param_1[10] = &lbl_82196BE8;
  fn_82390BF8(puVar18);
  puVar23 = param_1 + 0x5a;
  param_1[0x30] = &lbl_82196BF8;
  fn_828E3508(puVar23);
  param_1[0x6c] = 0;
  param_1[0x72] = 0;
  param_1[0x5a] = &lbl_82196C08;
  puVar6 = (undefined4 *)fn_8265C9E0(8);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 0;
    *puVar6 = &lbl_821B4810;
  }
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  puVar7 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[3] = puVar6;
    puVar7[1] = 1;
    puVar7[2] = 1;
    *puVar7 = &lbl_82196E94;
  }
  if (param_1[0x75] != 0) {
    fn_822315A0();
  }
  param_1[0x75] = puVar7;
  param_1[0x74] = puVar6;
  puVar7 = param_1 + 0x76;
  *puVar23 = &lbl_82196C08;
  fn_82390F78(puVar7);
  puVar6 = param_1 + 0x9a;
  param_1[0x76] = &lbl_82196C18;
  fn_82391200(puVar6);
  apuStack_1e8[0] = (undefined4 *)0xa;
  param_1[0x9a] = &lbl_82196C28;
  apuStack_1d8[0] = (undefined4 *)0x6;
  fn_82391C08(auStack_1d0,apuStack_1e8,apuStack_1d8,apuStack_1e8,apuStack_1d8,apuStack_1e8,
                    apuStack_1d8);
  fn_82249C60(auStack_170);
  puStack_17c = (undefined4 *)fn_8265C9E0(0x1c);
  if (puStack_17c == (undefined4 *)0x0) {
    puStack_17c = (undefined4 *)0x0;
  }
  else {
    puStack_17c[1] = 1;
    puStack_17c[2] = 1;
    *puStack_17c = &lbl_821AD588;
    if (puStack_17c + 3 != (undefined4 *)0x0) {
      fn_828ABFB0(puStack_17c + 3,0,0xff);
    }
  }
  auStack_1c8[0] = 0;
  fn_82236DA0(&puStack_1a8,auStack_1c8);
  puVar8 = (undefined4 *)fn_8265C9E0(0x24);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8[1] = 1;
    puVar8[2] = 1;
    *puVar8 = &lbl_821AD588;
    if (puVar8 + 3 != (undefined4 *)0x0) {
      fn_828AC0A0(puVar8 + 3,0,0xffffffff80000000,0x7fffffff);
    }
  }
  apuStack_1e8[0] = puVar8;
  puVar8 = apuStack_1e8[0] + 3;
  puStack_1b4 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puStack_1b4 == (undefined4 *)0x0) {
    puStack_1b4 = (undefined4 *)0x0;
  }
  else {
    puStack_1b4[1] = 1;
    puStack_1b4[2] = 1;
    *puStack_1b4 = &lbl_821AD588;
    if (puStack_1b4 + 3 != (undefined4 *)0x0) {
      puStack_1b4[4] = 0;
      puStack_1b4[3] = &lbl_821B47C8;
      fn_828AC0A0(puStack_1b4 + 5,0,0xffffffffffffffff,8);
    }
  }
  puStack_1b8 = puStack_1b4 + 3;
  puStack_190 = puStack_1b4;
  puVar9 = (undefined4 *)fn_8265C9E0(0x18);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9[1] = 1;
    puVar9[2] = 1;
    *puVar9 = &lbl_821AD588;
    if (puVar9 + 3 != (undefined4 *)0x0) {
      puVar9[4] = 0;
      puVar9[3] = &lbl_821B47B0;
      uVar10 = fn_828EA268(7);
      puVar9[5] = uVar10;
    }
  }
  puVar16 = puVar9 + 3;
  puStack_1bc = (undefined4 *)fn_8265C9E0(0x1c);
  if (puStack_1bc == (undefined4 *)0x0) {
    puStack_1bc = (undefined4 *)0x0;
  }
  else {
    puStack_1bc[1] = 1;
    puStack_1bc[2] = 1;
    *puStack_1bc = &lbl_821AD588;
    if (puStack_1bc + 3 != (undefined4 *)0x0) {
      fn_828E5F40(puStack_1bc + 3,10,6);
    }
  }
  puStack_1c0 = puStack_1bc + 3;
  puStack_180 = puStack_1bc;
  puVar11 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11[1] = 1;
    puVar11[2] = 1;
    *puVar11 = &lbl_821AD588;
    if (puVar11 + 3 != (undefined4 *)0x0) {
      puVar11[4] = 0;
      puVar11[3] = &lbl_821B47E0;
      fn_828AC0A0(puVar11 + 5,0,0,0x18);
    }
  }
  apuStack_1d8[0] = puVar11;
  iVar12 = iStack_1a4;
  puVar11 = apuStack_1d8[0] + 3;
  puStack_1e0 = (undefined4 *)0x0;
  puStack_1dc = (undefined4 *)0x0;
  if ((iStack_1a4 != 0) && (cVar15 = fn_8223AAC0(iStack_1a4), cVar15 != '\0')) {
    puStack_1dc = (undefined4 *)iVar12;
    puStack_1e0 = puStack_1a8;
  }
  uVar1 = fn_82365BD8(&puStack_198,&puStack_1c0);
  uVar2 = fn_82365BD8(&puStack_1a0,auStack_1d0);
  uVar3 = fn_82365BD8(&uStack_188,auStack_1d0);
  uVar4 = fn_82365BD8(&puStack_1b0,auStack_1d0);
  fn_82391E58(&uStack_178,uVar4,uVar3,uVar2,uVar1,&puStack_1e0);
  puStack_1e0 = (undefined4 *)0x0;
  puStack_1dc = (undefined4 *)0x0;
  puVar19 = (undefined4 *)0x0;
  if ((puVar9 != (undefined4 *)0x0) && (cVar15 = fn_8223AAC0(puVar9), cVar15 != '\0')) {
    puStack_1e0 = puVar16;
    puStack_1dc = puVar9;
    puVar19 = puVar9;
  }
  puStack_1b0 = (undefined4 *)0x0;
  puStack_1ac = (undefined4 *)0x0;
  puVar21 = (undefined4 *)0x0;
  if ((puVar9 != (undefined4 *)0x0) && (cVar15 = fn_8223AAC0(puVar9), cVar15 != '\0')) {
    puStack_1b0 = puVar16;
    puStack_1ac = puVar9;
    puVar21 = puVar9;
  }
  iVar12 = fn_82365BD8(auStack_150,&puStack_1b8);
  iVar13 = fn_82365BD8(auStack_148,&puStack_1b8);
  uVar5 = fn_8265C9E0(0x44);
  if ((uVar5 & 0xffffffff) == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = fn_82393000(uVar5,iVar13,&puStack_1b0,iVar12,&puStack_1e0);
  }
  *(undefined4 *)(iVar14 + 0x14) = 0;
  *(undefined4 *)(iVar14 + 0x18) = 4;
  *(undefined4 *)(iVar14 + 0x1c) = 8;
  puVar20 = (undefined4 *)0x0;
  *(undefined4 *)(iVar14 + 0x20) = 0xc;
  iVar17 = 0;
  if (iVar14 != 0) {
    cVar15 = fn_8223AAC0(iVar14);
    puVar20 = (undefined4 *)0x0;
    if (cVar15 != '\0') {
      puVar20 = (undefined4 *)(iVar14 + 0xc);
      iVar17 = iVar14;
    }
    fn_822315A0(iVar14);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  if (puVar21 != (undefined4 *)0x0) {
    fn_822315A0(puVar21);
  }
  if (*(int *)(iVar12 + 4) != 0) {
    fn_822315A0();
  }
  if (puVar19 != (undefined4 *)0x0) {
    fn_822315A0(puVar19);
  }
  puStack_198 = (undefined4 *)0x0;
  puStack_194 = (undefined4 *)0x0;
  if ((apuStack_1e8[0] != (undefined4 *)0x0) &&
     (cVar15 = fn_8223AAC0(apuStack_1e8[0]), cVar15 != '\0')) {
    puStack_194 = apuStack_1e8[0];
    puStack_198 = puVar8;
  }
  puStack_1a0 = (undefined4 *)0x0;
  puStack_19c = (undefined4 *)0x0;
  if ((apuStack_1e8[0] != (undefined4 *)0x0) &&
     (cVar15 = fn_8223AAC0(apuStack_1e8[0]), cVar15 != '\0')) {
    puStack_19c = apuStack_1e8[0];
    puStack_1a0 = puVar8;
  }
  puStack_1b0 = (undefined4 *)0x0;
  puStack_1ac = (undefined4 *)0x0;
  if ((apuStack_1d8[0] != (undefined4 *)0x0) &&
     (cVar15 = fn_8223AAC0(apuStack_1d8[0]), cVar15 != '\0')) {
    puStack_1ac = apuStack_1d8[0];
    puStack_1b0 = puVar11;
  }
  puStack_1e0 = (undefined4 *)0x0;
  puStack_1dc = (undefined4 *)0x0;
  if ((iVar17 != 0) && (cVar15 = fn_8223AAC0(iVar17), cVar15 != '\0')) {
    puStack_1e0 = puVar20;
    puStack_1dc = (undefined4 *)iVar17;
  }
  iVar12 = iStack_174;
  uStack_188 = 0;
  iStack_184 = 0;
  if ((iStack_174 != 0) && (cVar15 = fn_8223AAC0(iStack_174), cVar15 != '\0')) {
    iStack_184 = iVar12;
    uStack_188 = uStack_178;
  }
  fn_82365BD8(auStack_168,auStack_170);
  fn_82365BD8(auStack_160,&puStack_1c0);
  uVar1 = fn_82365BD8(auStack_158,&puStack_1c0);
  uVar2 = fn_82365BD8(auStack_1f0,auStack_1d0);
  fn_82392360(&uStack_178,&uStack_188,&puStack_1e0,&puStack_1b0,uVar2,&puStack_1a0,&puStack_198,
                  uVar1);
  fn_82230110(auStack_140,0xffffffff821b475c);
  fn_828E3AE0(puVar22,auStack_140);
  fn_82230300(auStack_140,1,0);
  fn_828E2680(puVar22,1);
  iVar13 = fn_82365BD8(auStack_1f0,auStack_1d0);
  cVar15 = fn_828E2688(puVar22);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x24,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,auStack_1d0);
  cVar15 = fn_828E2688(puVar22);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x26,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,auStack_1d0);
  cVar15 = fn_828E2688(puVar22);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x28,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1c0);
  cVar15 = fn_828E2688(puVar22);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x2a,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1a8);
  cVar15 = fn_828E2688(puVar22);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x2c,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,auStack_170);
  cVar15 = fn_828E2688(puVar22);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x2e,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  fn_82230110(auStack_e0,0xffffffff821b476c);
  fn_828E3AE0(puVar18,auStack_e0);
  fn_82230300(auStack_e0,1,0);
  fn_828E2680(puVar18,1);
  iVar13 = fn_82365BD8(auStack_1f0,auStack_1d0);
  cVar15 = fn_828E2688(puVar18);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x4a,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,auStack_1d0);
  cVar15 = fn_828E2688(puVar18);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x4c,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,auStack_1d0);
  cVar15 = fn_828E2688(puVar18);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x4e,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1c0);
  cVar15 = fn_828E2688(puVar18);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x50,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1a8);
  cVar15 = fn_828E2688(puVar18);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x52,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1b8);
  cVar15 = fn_828E2688(puVar18);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x54,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  puStack_1e0 = (undefined4 *)0x0;
  puStack_1dc = (undefined4 *)0x0;
  puVar22 = (undefined4 *)0x0;
  if ((puVar9 != (undefined4 *)0x0) && (cVar15 = fn_8223AAC0(puVar9), cVar15 != '\0')) {
    puStack_1e0 = puVar16;
    puStack_1dc = puVar9;
    puVar22 = puVar9;
  }
  cVar15 = fn_828E2688(puVar18);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x56,&puStack_1e0);
    puVar22 = puStack_1dc;
  }
  if (puVar22 != (undefined4 *)0x0) {
    fn_822315A0(puVar22);
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1c0);
  cVar15 = fn_828E2688(puVar18);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x58,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  fn_82230110(auStack_120,0xffffffff821b4780);
  fn_828E3AE0(puVar23,auStack_120);
  fn_82230300(auStack_120,1,0);
  fn_828E2680(puVar23,1);
  uVar10 = 0;
  iVar13 = 0;
  if ((iStack_174 != 0) && (cVar15 = fn_8223AAC0(iStack_174), cVar15 != '\0')) {
    uVar10 = uStack_178;
    iVar13 = iStack_174;
  }
  cVar15 = fn_828E2688(puVar23);
  if (cVar15 == '\0') {
    iVar14 = param_1[0x75];
    param_1[0x75] = iVar13;
    iVar13 = 0;
    param_1[0x74] = uVar10;
    if (iVar14 == 0) goto LAB_82390268;
    fn_822315A0();
  }
  if (iVar13 != 0) {
    fn_822315A0(iVar13);
  }
LAB_82390268:
  fn_82230110(auStack_100,0xffffffff821b478c);
  fn_828E3AE0(puVar7,auStack_100);
  fn_82230300(auStack_100,1,0);
  fn_828E2680(puVar7,1);
  iVar13 = fn_82365BD8(auStack_1f0,auStack_1d0);
  cVar15 = fn_828E2688(puVar7);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x90,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,auStack_1d0);
  cVar15 = fn_828E2688(puVar7);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x92,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,auStack_1d0);
  cVar15 = fn_828E2688(puVar7);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x94,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1c0);
  cVar15 = fn_828E2688(puVar7);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x96,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1a8);
  cVar15 = fn_828E2688(puVar7);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0x98,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  fn_82230110(auStack_c0,0xffffffff821b479c);
  fn_828E3AE0(puVar6,auStack_c0);
  fn_82230300(auStack_c0,1,0);
  fn_828E2680(puVar6,1);
  iVar13 = fn_82365BD8(auStack_1f0,auStack_1d0);
  cVar15 = fn_828E2688(puVar6);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0xb4,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,auStack_1d0);
  cVar15 = fn_828E2688(puVar6);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0xb6,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,auStack_1d0);
  cVar15 = fn_828E2688(puVar6);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0xb8,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1c0);
  cVar15 = fn_828E2688(puVar6);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0xba,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1a8);
  cVar15 = fn_828E2688(puVar6);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0xbc,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1b8);
  cVar15 = fn_828E2688(puVar6);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0xbe,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  puStack_1b8 = (undefined4 *)0x0;
  puStack_1b4 = (undefined4 *)0x0;
  puVar23 = (undefined4 *)0x0;
  if ((puVar9 != (undefined4 *)0x0) && (cVar15 = fn_8223AAC0(puVar9), cVar15 != '\0')) {
    puStack_1b8 = puVar16;
    puStack_1b4 = puVar9;
    puVar23 = puVar9;
  }
  cVar15 = fn_828E2688(puVar6);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0xc0,&puStack_1b8);
    puVar23 = puStack_1b4;
  }
  if (puVar23 != (undefined4 *)0x0) {
    fn_822315A0(puVar23);
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1c0);
  cVar15 = fn_828E2688(puVar6);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0xc2,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  iVar13 = fn_82365BD8(auStack_1f0,&puStack_1c0);
  cVar15 = fn_828E2688(puVar6);
  if (cVar15 == '\0') {
    fn_823F2E20(param_1 + 0xc4,iVar13);
  }
  if (*(int *)(iVar13 + 4) != 0) {
    fn_822315A0();
  }
  if (iStack_174 != 0) {
    fn_822315A0(iStack_174);
  }
  if (iVar17 != 0) {
    fn_822315A0(iVar17);
  }
  if (iVar12 != 0) {
    fn_822315A0(iVar12);
  }
  if (apuStack_1d8[0] != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_180 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puVar9 != (undefined4 *)0x0) {
    fn_822315A0(puVar9);
  }
  if (puStack_190 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (apuStack_1e8[0] != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (iStack_1a4 != 0) {
    fn_822315A0();
  }
  if (puStack_17c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (iStack_16c != 0) {
    fn_822315A0();
  }
  if (iStack_1cc != 0) {
    fn_822315A0();
  }
  return puStack00000014;
}

