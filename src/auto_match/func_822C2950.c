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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_160;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_e0;
extern int fn_822315A0();
extern int fn_822C5BC8();
extern int fn_822C5CB8();
extern int fn_822C5D40();
extern int fn_822C64E0();
extern int fn_822FF900();
extern int fn_823000E0();
extern int fn_82308E90();
extern int fn_8230C318();
extern int fn_82311AD0();
extern int fn_82314208();
extern int fn_82314970();
extern int fn_82315250();
extern int fn_8231A110();
extern int fn_82365BD8();
extern int fn_823E1410();
extern int fn_823E2AC0();
extern int fn_8265C9E0();
extern int fn_82F63108();
extern unsigned int iStack_14c;
extern unsigned int iStack_154;
extern unsigned int iStack_a4;
extern unsigned int iStack_ac;
extern unsigned int iStack_b4;
extern unsigned int iStack_bc;
extern unsigned int iStack_c4;
extern unsigned int iStack_cc;
extern unsigned int iStack_d4;
extern unsigned int iStack_dc;
extern unsigned int iStack_e4;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AEF1C;
extern unsigned int lbl_821AEF6C;
extern unsigned int lbl_821AF0C0;
extern unsigned int lbl_821AF148;
extern unsigned int lbl_821AF168;
extern unsigned int lbl_821AF188;
extern unsigned int lbl_821AF1A8;
extern unsigned int lbl_821AF1C8;
extern unsigned int lbl_821AF404;
extern unsigned int lbl_821AF49C;
extern unsigned int lbl_821AF7C8;
extern unsigned int lbl_821AF994;
extern unsigned int lbl_821AF9B4;
extern unsigned int lbl_821AF9D4;
extern unsigned int lbl_821B6A5C;
extern unsigned int lbl_821B6A78;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_101;
extern unsigned int uStack_150;
extern unsigned int uStack_158;
extern unsigned int uStack_e8;
extern unsigned int uStack_fc;


void fn_822C2950(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  ulonglong uVar8;
  int iVar10;
  undefined8 uVar9;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int iVar22;
  double dVar23;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 *puStack_180;
  undefined4 *puStack_17c;
  undefined4 *puStack_178;
  undefined4 *puStack_174;
  undefined4 *puStack_170;
  undefined4 *puStack_16c;
  undefined4 *puStack_168;
  undefined4 *puStack_164;
  undefined1 auStack_160 [8];
  undefined4 uStack_158;
  int iStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  undefined4 *apuStack_148 [2];
  undefined4 *puStack_140;
  undefined4 *puStack_13c;
  undefined4 *puStack_138;
  undefined4 *puStack_134;
  undefined4 *puStack_130;
  undefined4 *puStack_12c;
  undefined4 *puStack_128;
  undefined4 *puStack_124;
  undefined4 *puStack_120;
  undefined4 *puStack_11c;
  undefined4 *puStack_118;
  undefined4 *puStack_114;
  undefined4 *puStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined8 uStack_fc;
  undefined ***pppuStack_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined1 auStack_e0 [4];
  int iStack_dc;
  undefined1 auStack_d8 [4];
  int iStack_d4;
  undefined1 auStack_d0 [4];
  int iStack_cc;
  undefined1 auStack_c8 [4];
  int iStack_c4;
  undefined1 auStack_c0 [4];
  int iStack_bc;
  undefined1 auStack_b8 [4];
  int iStack_b4;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined1 auStack_a8 [4];
  int iStack_a4;
  
  uVar8 = fn_8265C9E0(0x580);
  if ((uVar8 & 0xffffffff) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = fn_822FF900(uVar8,param_1,param_1 + 0x26c);
  }
  *(int *)(param_1 + 0x1e8) = iVar10;
  *(undefined4 *)(iVar10 + 0x578) = 0;
  pppuStack_f0 = (undefined ***)0x0;
  fn_823000E0(*(undefined4 *)(param_1 + 0x1e8),&ppuStack_100);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puStack_140 = (undefined4 *)fn_8265C9E0(0x20);
  if (puStack_140 == (undefined4 *)0x0) {
    puStack_140 = (undefined4 *)0x0;
  }
  else {
    puStack_140[1] = 1;
    puStack_140[2] = 1;
    *puStack_140 = &lbl_821AD588;
    if (puStack_140 + 3 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      puStack_140[6] = param_1;
      puStack_140[7] = param_2;
      puStack_140[4] = 1;
      puStack_140[3] = &lbl_821AF1C8;
      puStack_140[5] = uVar2;
    }
  }
  puStack_170 = puStack_140 + 3;
  puStack_16c = puStack_140;
  uVar9 = fn_82365BD8(&uStack_150,&puStack_170);
  fn_822C64E0(uVar1,uVar9);
  uVar2 = *(undefined4 *)(param_3 + 4);
  uVar3 = *(undefined4 *)(param_3 + 8);
  puVar11 = (undefined4 *)fn_8265C9E0(0x6b0);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11[1] = 1;
    puVar11[2] = 1;
    *puVar11 = &lbl_821A8D8C;
    if (puVar11 + 4 != (undefined4 *)0x0) {
      fn_82315250(puVar11 + 4,param_1,param_2,uVar3,uVar2,param_1 + 0x264);
    }
  }
  puStack_16c = puVar11;
  puStack_170 = puStack_16c + 4;
  puStack_13c = puStack_16c;
  uVar9 = fn_82365BD8(&uStack_150,&puStack_170);
  fn_822C64E0(uVar1,uVar9);
  puVar11 = (undefined4 *)fn_8265C9E0(0x340);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11[1] = 1;
    puVar11[2] = 1;
    *puVar11 = &lbl_821A8D8C;
    if (puVar11 + 4 != (undefined4 *)0x0) {
      fn_8231A110(puVar11 + 4,param_1,param_2);
    }
  }
  puStack_16c = puVar11;
  puStack_170 = puStack_16c + 4;
  puStack_124 = puStack_16c;
  uVar9 = fn_82365BD8(&uStack_150,&puStack_170);
  fn_822C64E0(uVar1,uVar9);
  uVar2 = *(undefined4 *)(param_3 + 8);
  puStack_16c = (undefined4 *)fn_8265C9E0(0x50);
  if (puStack_16c == (undefined4 *)0x0) {
    puStack_16c = (undefined4 *)0x0;
  }
  else {
    puStack_16c[1] = 1;
    puStack_16c[2] = 1;
    *puStack_16c = &lbl_821A8D8C;
    if (puStack_16c + 4 != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)(param_1 + 0x114);
      puStack_16c[7] = param_1;
      puStack_16c[8] = param_2;
      puStack_16c[9] = uVar2;
      puStack_16c[4] = &lbl_821AF994;
      puVar11 = (undefined4 *)((uint)(puStack_16c + 0xc) & 0xfffffff0);
      *puVar11 = in_register_000104d0;
      puVar11[1] = in_register_000104d4;
      puVar11[2] = in_register_000104d8;
      puVar11[3] = in_vr77;
      puStack_16c[5] = 0x16;
      puStack_16c[6] = uVar3;
      puStack_16c[10] = 3;
      puStack_16c[0xb] = 8;
    }
  }
  puStack_170 = puStack_16c + 4;
  puStack_12c = puStack_16c;
  uVar9 = fn_82365BD8(&uStack_150,&puStack_170);
  fn_822C64E0(uVar1,uVar9);
  puStack_16c = (undefined4 *)fn_8265C9E0(0x24);
  if (puStack_16c == (undefined4 *)0x0) {
    puStack_16c = (undefined4 *)0x0;
  }
  else {
    *puStack_16c = &lbl_821AD588;
    puStack_16c[1] = 1;
    puStack_16c[2] = 1;
    if (puStack_16c + 3 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      puStack_16c[6] = param_1;
      puStack_16c[7] = param_2;
      puStack_16c[4] = 0x13;
      puStack_16c[3] = &lbl_821AF7C8;
      puStack_16c[5] = uVar2;
      puStack_16c[8] = 7;
    }
  }
  puStack_170 = puStack_16c + 3;
  puStack_110 = puStack_16c;
  uVar9 = fn_82365BD8(&uStack_150,&puStack_170);
  fn_822C64E0(uVar1,uVar9);
  puStack_16c = (undefined4 *)fn_8265C9E0(0x24);
  if (puStack_16c == (undefined4 *)0x0) {
    puStack_16c = (undefined4 *)0x0;
  }
  else {
    *puStack_16c = &lbl_821AD588;
    puStack_16c[1] = 1;
    puStack_16c[2] = 1;
    if (puStack_16c + 3 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      puStack_16c[6] = param_1;
      puStack_16c[7] = param_2;
      puStack_16c[4] = 0x1f;
      puStack_16c[3] = &lbl_821AF7C8;
      puStack_16c[5] = uVar2;
      puStack_16c[8] = 10;
    }
  }
  puStack_170 = puStack_16c + 3;
  puStack_118 = puStack_16c;
  uVar9 = fn_82365BD8(&uStack_150,&puStack_170);
  fn_822C64E0(uVar1,uVar9);
  puStack_164 = (undefined4 *)0xa;
  puStack_168 = (undefined4 *)0x2;
  puVar11 = (undefined4 *)
            fn_822C5BC8(auStack_e0,param_1,param_2,&puStack_164,0xffffffff82192ff8,
                              &puStack_168);
  puStack_170 = (undefined4 *)*puVar11;
  puStack_16c = (undefined4 *)puVar11[1];
  *puVar11 = 0;
  puVar11[1] = 0;
  if (iStack_dc != 0) {
    fn_822315A0();
  }
  uVar9 = fn_82365BD8(&uStack_150,&puStack_170);
  fn_822C64E0(uVar1,uVar9);
  puStack_168 = (undefined4 *)0x3;
  puStack_164 = (undefined4 *)0xb;
  puVar11 = (undefined4 *)
            fn_822C5BC8(auStack_b8,param_1,param_2,&puStack_164,0xffffffff82193000,
                              &puStack_168);
  uStack_150 = *puVar11;
  iStack_14c = puVar11[1];
  *puVar11 = 0;
  puVar11[1] = 0;
  if (iStack_b4 != 0) {
    fn_822315A0();
  }
  uVar9 = fn_82365BD8(&puStack_178,&uStack_150);
  fn_822C64E0(uVar1,uVar9);
  uVar2 = *(undefined4 *)(param_3 + 8);
  puStack_174 = (undefined4 *)fn_8265C9E0(0x80);
  if (puStack_174 == (undefined4 *)0x0) {
    puStack_174 = (undefined4 *)0x0;
  }
  else {
    puStack_174[1] = 1;
    puStack_174[2] = 1;
    *puStack_174 = &lbl_821A8D8C;
    if (puStack_174 + 4 != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)(param_1 + 0x114);
      puStack_174[7] = param_1;
      puStack_174[8] = param_2;
      puStack_174[0x18] = uVar2;
      puStack_174[5] = 2;
      puStack_174[6] = uVar3;
      puStack_174[4] = &lbl_821AEF6C;
    }
  }
  puStack_178 = puStack_174 + 4;
  puStack_168 = puStack_174;
  uVar9 = fn_82365BD8(&uStack_158,&puStack_178);
  fn_822C64E0(uVar1,uVar9);
  puVar11 = (undefined4 *)fn_8265C9E0(400);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11[1] = 1;
    puVar11[2] = 1;
    *puVar11 = &lbl_821A8D8C;
    if (puVar11 + 4 != (undefined4 *)0x0) {
      fn_82311AD0(puVar11 + 4,param_1,param_2);
    }
  }
  puStack_174 = puVar11;
  puStack_178 = puStack_174 + 4;
  puStack_164 = puStack_174;
  uVar9 = fn_82365BD8(&uStack_158,&puStack_178);
  fn_822C64E0(uVar1,uVar9);
  puStack_174 = (undefined4 *)fn_8265C9E0(0x20);
  if (puStack_174 == (undefined4 *)0x0) {
    puStack_174 = (undefined4 *)0x0;
  }
  else {
    puStack_174[1] = 1;
    puStack_174[2] = 1;
    *puStack_174 = &lbl_821AD588;
    if (puStack_174 + 3 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      puStack_174[6] = param_1;
      puStack_174[7] = param_2;
      puStack_174[4] = 0xf;
      puStack_174[3] = &lbl_821AF49C;
      puStack_174[5] = uVar2;
    }
  }
  puStack_178 = puStack_174 + 3;
  puStack_120 = puStack_174;
  uVar9 = fn_82365BD8(&uStack_158,&puStack_178);
  fn_822C64E0(uVar1,uVar9);
  uVar2 = *(undefined4 *)(param_3 + 4);
  puStack_174 = (undefined4 *)fn_8265C9E0(0xf0);
  if (puStack_174 == (undefined4 *)0x0) {
    puStack_174 = (undefined4 *)0x0;
  }
  else {
    puStack_174[1] = 1;
    puStack_174[2] = 1;
    *puStack_174 = &lbl_821A8D8C;
    if (puStack_174 + 4 != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)(param_1 + 0x114);
      puStack_174[7] = param_1;
      puStack_174[8] = param_2;
      puStack_174[9] = uVar2;
      puStack_174[5] = 3;
      puStack_174[6] = uVar3;
      puStack_174[4] = &lbl_821AF148;
      puStack_174[0x3b] = 0;
    }
  }
  puStack_178 = puStack_174 + 4;
  puStack_128 = puStack_174;
  uVar9 = fn_82365BD8(&uStack_158,&puStack_178);
  fn_822C64E0(uVar1,uVar9);
  puStack_174 = (undefined4 *)fn_8265C9E0(0x24);
  fVar7 = lbl_821CC160;
  dVar23 = (double)lbl_821CC160;
  if (puStack_174 == (undefined4 *)0x0) {
    puStack_174 = (undefined4 *)0x0;
  }
  else {
    puStack_174[1] = 1;
    puStack_174[2] = 1;
    *puStack_174 = &lbl_821AD588;
    if (puStack_174 + 3 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      puStack_174[8] = fVar7;
      puStack_174[6] = param_1;
      puStack_174[7] = param_2;
      puStack_174[4] = 4;
      puStack_174[5] = uVar2;
      puStack_174[3] = &lbl_821AF168;
    }
  }
  puStack_178 = puStack_174 + 3;
  puStack_130 = puStack_174;
  uVar9 = fn_82365BD8(&uStack_158,&puStack_178);
  fn_822C64E0(uVar1,uVar9);
  puStack_174 = (undefined4 *)fn_8265C9E0(0x60);
  if (puStack_174 == (undefined4 *)0x0) {
    puStack_174 = (undefined4 *)0x0;
  }
  else {
    puStack_174[1] = 1;
    puStack_174[2] = 1;
    *puStack_174 = &lbl_821A8D8C;
    if (puStack_174 + 4 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      puStack_174[7] = param_1;
      puStack_174[8] = param_2;
      puStack_174[5] = 0x10;
      puStack_174[4] = &lbl_821AF188;
      puStack_174[6] = uVar2;
      puStack_174[0x15] = 0;
      puStack_174[0x16] = 0;
    }
  }
  puStack_178 = puStack_174 + 4;
  puStack_114 = puStack_174;
  uVar9 = fn_82365BD8(&uStack_158,&puStack_178);
  fn_822C64E0(uVar1,uVar9);
  puStack_174 = (undefined4 *)fn_8265C9E0(0x24);
  if (puStack_174 == (undefined4 *)0x0) {
    puStack_174 = (undefined4 *)0x0;
  }
  else {
    puStack_174[1] = 1;
    puStack_174[2] = 1;
    *puStack_174 = &lbl_821AD588;
    if (puStack_174 + 3 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      puStack_174[8] = (float)dVar23;
      puStack_174[6] = param_1;
      puStack_174[7] = param_2;
      puStack_174[4] = 5;
      puStack_174[5] = uVar2;
      puStack_174[3] = &lbl_821AF1A8;
    }
  }
  puStack_178 = puStack_174 + 3;
  puStack_11c = puStack_174;
  uVar9 = fn_82365BD8(&uStack_158,&puStack_178);
  fn_822C64E0(uVar1,uVar9);
  iVar10 = param_1 + 0x260;
  apuStack_148[0] = (undefined4 *)0xc;
  puVar11 = (undefined4 *)fn_822C5CB8(auStack_a8,param_1,param_2,iVar10,apuStack_148);
  puStack_178 = (undefined4 *)*puVar11;
  puStack_174 = (undefined4 *)puVar11[1];
  *puVar11 = 0;
  puVar11[1] = 0;
  if (iStack_a4 != 0) {
    fn_822315A0();
  }
  uVar9 = fn_82365BD8(&uStack_158,&puStack_178);
  fn_822C64E0(uVar1,uVar9);
  apuStack_148[0] = (undefined4 *)0xd;
  puVar11 = (undefined4 *)fn_822C5CB8(auStack_d0,param_1,param_2,iVar10,apuStack_148);
  uStack_158 = *puVar11;
  iStack_154 = puVar11[1];
  *puVar11 = 0;
  puVar11[1] = 0;
  if (iStack_cc != 0) {
    fn_822315A0();
  }
  uVar9 = fn_82365BD8(&uStack_e8,&uStack_158);
  fn_822C64E0(uVar1,uVar9);
  apuStack_148[0] = (undefined4 *)0x1d;
  puVar11 = (undefined4 *)fn_822C5CB8(auStack_b0,param_1,param_2,iVar10,apuStack_148);
  uStack_e8 = *puVar11;
  iStack_e4 = puVar11[1];
  *puVar11 = 0;
  puVar11[1] = 0;
  if (iStack_ac != 0) {
    fn_822315A0();
  }
  uVar9 = fn_82365BD8(apuStack_148,&uStack_e8);
  fn_822C64E0(uVar1,uVar9);
  puVar11 = (undefined4 *)fn_8265C9E0(0x50);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11[1] = 1;
    puVar11[2] = 1;
    *puVar11 = &lbl_821A8D8C;
    if (puVar11 + 4 != (undefined4 *)0x0) {
      fn_8230C318(puVar11 + 4,param_1,param_2);
    }
  }
  apuStack_148[0] = puVar11;
  puStack_138 = apuStack_148[0] + 4;
  puStack_134 = apuStack_148[0];
  uVar9 = fn_82365BD8(&puStack_180,&puStack_138);
  fn_822C64E0(uVar1,uVar9);
  uVar2 = *(undefined4 *)(param_3 + 4);
  puStack_17c = (undefined4 *)fn_8265C9E0(0x80);
  if (puStack_17c == (undefined4 *)0x0) {
    puStack_17c = (undefined4 *)0x0;
  }
  else {
    puStack_17c[1] = 1;
    puStack_17c[2] = 1;
    *puStack_17c = &lbl_821A8D8C;
    if (puStack_17c + 4 != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)(param_1 + 0x114);
      puStack_17c[7] = param_1;
      puStack_17c[8] = param_2;
      puStack_17c[9] = uVar2;
      puStack_17c[5] = 0x17;
      puStack_17c[6] = uVar3;
      puStack_17c[4] = &lbl_821AF9B4;
    }
  }
  puStack_180 = puStack_17c + 4;
  puStack_138 = puStack_17c;
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  puVar11 = (undefined4 *)fn_8265C9E0(0x140);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11[1] = 1;
    puVar11[2] = 1;
    *puVar11 = &lbl_821A8D8C;
    if (puVar11 + 4 != (undefined4 *)0x0) {
      fn_82308E90(puVar11 + 4,param_1,param_2,8);
    }
  }
  puStack_180 = puVar11 + 4;
  puStack_17c = puVar11;
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  puVar12 = (undefined4 *)fn_8265C9E0(0x140);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12[1] = 1;
    puVar13 = puVar12 + 4;
    puVar12[2] = 1;
    *puVar12 = &lbl_821A8D8C;
    if (puVar13 != (undefined4 *)0x0) {
      fn_82308E90(puVar13,param_1,param_2,0x18);
      *puVar13 = &lbl_821AF9D4;
    }
  }
  puStack_180 = puVar12 + 4;
  puStack_17c = puVar12;
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  puVar13 = (undefined4 *)fn_8265C9E0(0x58);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    puVar13[1] = 1;
    puVar13[2] = 1;
    *puVar13 = &lbl_821A8D8C;
    if (puVar13 + 4 != (undefined4 *)0x0) {
      fn_82314970(puVar13 + 4,param_1,param_2);
    }
  }
  puStack_180 = puVar13 + 4;
  puStack_17c = puVar13;
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  uVar2 = *(undefined4 *)(param_3 + 4);
  puVar14 = (undefined4 *)fn_8265C9E0(0x160);
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    *puVar14 = &lbl_821A8D8C;
    puVar14[1] = 1;
    puVar14[2] = 1;
    if (puVar14 + 4 != (undefined4 *)0x0) {
      fn_82314208(puVar14 + 4,0x15,param_1,param_2,uVar2,1);
    }
  }
  puStack_180 = puVar14 + 4;
  puStack_17c = puVar14;
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  uVar2 = *(undefined4 *)(param_3 + 4);
  puVar15 = (undefined4 *)fn_8265C9E0(0x160);
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    *puVar15 = &lbl_821A8D8C;
    puVar15[1] = 1;
    puVar15[2] = 1;
    if (puVar15 + 4 != (undefined4 *)0x0) {
      fn_82314208(puVar15 + 4,0x1e,param_1,param_2,uVar2,2);
    }
  }
  puStack_180 = puVar15 + 4;
  puStack_17c = puVar15;
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  puVar16 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar16 == (undefined4 *)0x0) {
    puVar16 = (undefined4 *)0x0;
  }
  else {
    puVar16[1] = 1;
    puVar16[2] = 1;
    *puVar16 = &lbl_821AD588;
    if (puVar16 + 3 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      puVar16[6] = param_1;
      puVar16[7] = param_2;
      puVar16[4] = 6;
      puVar16[3] = &lbl_821AF1C8;
      puVar16[5] = uVar2;
    }
  }
  puStack_180 = puVar16 + 3;
  puStack_17c = puVar16;
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  puVar17 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar17 == (undefined4 *)0x0) {
    puVar17 = (undefined4 *)0x0;
  }
  else {
    puVar17[1] = 1;
    puVar17[2] = 1;
    *puVar17 = &lbl_821AD588;
    if (puVar17 + 3 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      puVar17[6] = param_1;
      puVar17[7] = param_2;
      puVar17[4] = 7;
      puVar17[3] = &lbl_821AF1C8;
      puVar17[5] = uVar2;
    }
  }
  puStack_180 = puVar17 + 3;
  puStack_17c = puVar17;
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  puStack_180 = (undefined4 *)0x19;
  puVar18 = (undefined4 *)fn_822C5D40(auStack_c0,param_1,param_2,&puStack_180);
  puStack_180 = (undefined4 *)*puVar18;
  *puVar18 = 0;
  iVar10 = puVar18[1];
  puVar18[1] = 0;
  puStack_17c = (undefined4 *)iVar10;
  if (iStack_bc != 0) {
    fn_822315A0();
  }
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  puStack_180 = (undefined4 *)0x1a;
  puVar18 = (undefined4 *)fn_822C5D40(auStack_d8,param_1,param_2,&puStack_180);
  puStack_180 = (undefined4 *)*puVar18;
  *puVar18 = 0;
  iVar4 = puVar18[1];
  puVar18[1] = 0;
  puStack_17c = (undefined4 *)iVar4;
  if (iStack_d4 != 0) {
    fn_822315A0();
  }
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  puVar18 = (undefined4 *)fn_8265C9E0(0x60);
  if (puVar18 == (undefined4 *)0x0) {
    puVar18 = (undefined4 *)0x0;
  }
  else {
    puVar18[1] = 1;
    puVar18[2] = 1;
    *puVar18 = &lbl_821A8D8C;
    if (puVar18 + 4 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      puVar18[7] = param_1;
      puVar18[8] = param_2;
      puVar18[5] = 0x1b;
      puVar19 = (undefined4 *)((uint)(puVar18 + 0xc) & 0xfffffff0);
      *puVar19 = in_register_000104d0;
      puVar19[1] = in_register_000104d4;
      puVar19[2] = in_register_000104d8;
      puVar19[3] = in_vr77;
      puVar18[4] = &lbl_821AEF1C;
      puVar18[6] = uVar2;
    }
  }
  puStack_180 = puVar18 + 4;
  puStack_17c = puVar18;
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  puVar19 = (undefined4 *)fn_8265C9E0(0x50);
  if (puVar19 == (undefined4 *)0x0) {
    puVar19 = (undefined4 *)0x0;
  }
  else {
    puVar19[1] = 1;
    puVar19[2] = 1;
    *puVar19 = &lbl_821A8D8C;
    if (puVar19 + 4 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      puVar19[7] = param_1;
      puVar19[8] = param_2;
      puVar19[5] = 0x1c;
      puVar19[4] = &lbl_821AF404;
      puVar19[6] = uVar2;
    }
  }
  puStack_180 = puVar19 + 4;
  puStack_17c = puVar19;
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  puVar20 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar20 == (undefined4 *)0x0) {
    puVar20 = (undefined4 *)0x0;
  }
  else {
    puVar20[1] = 1;
    puVar20[2] = 1;
    *puVar20 = &lbl_821AD588;
    if (puVar20 + 3 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      puVar20[6] = param_1;
      puVar20[7] = param_2;
      puVar20[4] = 0x20;
      puVar20[3] = &lbl_821AF0C0;
      puVar20[5] = uVar2;
    }
  }
  puStack_180 = puVar20 + 3;
  puStack_17c = puVar20;
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  puStack_180 = (undefined4 *)0x21;
  puVar21 = (undefined4 *)fn_822C5D40(auStack_c8,param_1,param_2,&puStack_180);
  puStack_180 = (undefined4 *)*puVar21;
  *puVar21 = 0;
  iVar5 = puVar21[1];
  puVar21[1] = 0;
  puStack_17c = (undefined4 *)iVar5;
  if (iStack_c4 != 0) {
    fn_822315A0();
  }
  uVar9 = fn_82365BD8(auStack_160,&puStack_180);
  fn_822C64E0(uVar1,uVar9);
  puStack_17c = (undefined4 *)(param_1 + 0x1a0);
  pppuStack_f0 = &ppuStack_100;
  uStack_fc = CONCAT44(param_1,puStack_17c);
  ppuStack_100 = &lbl_821B6A5C;
  iVar22 = *(int *)(param_2 + 0x4a0);
  piVar6 = *(int **)(iVar22 + 8);
  puStack_180 = (undefined4 *)*piVar6;
  if (puStack_180 == piVar6) {
LAB_822c3980:
    iVar22 = (int)&ppuStack_100 + -(int)pppuStack_f0;
    (*(code *)(*pppuStack_f0)[3])
              (pppuStack_f0,iVar22 - (int)(&uStack_101 + (uint)(iVar22 == 0) + -(int)pppuStack_f0));
  }
  else {
    do {
      if (pppuStack_f0 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (*(code *)(*pppuStack_f0)[1])(pppuStack_f0,puStack_180[3],puStack_180 + 4);
      fn_823E1410(&puStack_180);
    } while (puStack_180 != *(undefined4 **)(iVar22 + 8));
    if (pppuStack_f0 != (undefined ***)0x0) goto LAB_822c3980;
  }
  puStack_17c = (undefined4 *)(param_1 + 0x1b0);
  iVar22 = *(int *)(param_2 + 0x49c);
  pppuStack_f0 = &ppuStack_100;
  uStack_fc = CONCAT44(param_1,puStack_17c);
  ppuStack_100 = &lbl_821B6A78;
  piVar6 = *(int **)(iVar22 + 8);
  puStack_180 = (undefined4 *)*piVar6;
  if (puStack_180 != piVar6) {
    do {
      if (pppuStack_f0 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (*(code *)(*pppuStack_f0)[1])(pppuStack_f0,puStack_180[3],puStack_180 + 4);
      fn_823E2AC0(&puStack_180);
    } while (puStack_180 != *(undefined4 **)(iVar22 + 8));
    if (pppuStack_f0 == (undefined ***)0x0) goto LAB_822c3a50;
  }
  iVar22 = (int)&ppuStack_100 + -(int)pppuStack_f0;
  (*(code *)(*pppuStack_f0)[3])
            (pppuStack_f0,iVar22 - (int)(&uStack_101 + (uint)(iVar22 == 0) + -(int)pppuStack_f0));
LAB_822c3a50:
  if (iVar5 != 0) {
    fn_822315A0(iVar5);
  }
  if (puVar20 != (undefined4 *)0x0) {
    fn_822315A0(puVar20);
  }
  if (puVar19 != (undefined4 *)0x0) {
    fn_822315A0(puVar19);
  }
  if (puVar18 != (undefined4 *)0x0) {
    fn_822315A0(puVar18);
  }
  if (iVar4 != 0) {
    fn_822315A0(iVar4);
  }
  if (iVar10 != 0) {
    fn_822315A0(iVar10);
  }
  if (puVar17 != (undefined4 *)0x0) {
    fn_822315A0(puVar17);
  }
  if (puVar16 != (undefined4 *)0x0) {
    fn_822315A0(puVar16);
  }
  if (puVar15 != (undefined4 *)0x0) {
    fn_822315A0(puVar15);
  }
  if (puVar14 != (undefined4 *)0x0) {
    fn_822315A0(puVar14);
  }
  if (puVar13 != (undefined4 *)0x0) {
    fn_822315A0(puVar13);
  }
  if (puVar12 != (undefined4 *)0x0) {
    fn_822315A0(puVar12);
  }
  if (puVar11 != (undefined4 *)0x0) {
    fn_822315A0(puVar11);
  }
  if (puStack_138 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (apuStack_148[0] != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (iStack_e4 != 0) {
    fn_822315A0();
  }
  if (iStack_154 != 0) {
    fn_822315A0();
  }
  if (puStack_174 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_11c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_114 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_130 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_128 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_120 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_164 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_168 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (iStack_14c != 0) {
    fn_822315A0();
  }
  if (puStack_16c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_118 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_110 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_12c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_124 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_13c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_140 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  return;
}

