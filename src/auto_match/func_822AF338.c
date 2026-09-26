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
extern unsigned int *auStack_a8;
extern int fn_822315A0();
extern int fn_822AF0A8();
extern int fn_822C64E0();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AC578;
extern unsigned int lbl_821AC5E0;
extern unsigned int lbl_821AC71C;
extern unsigned int lbl_821AC738;
extern unsigned int lbl_821AC754;
extern unsigned int lbl_821AC770;
extern unsigned int lbl_821AC78C;
extern unsigned int lbl_821AC7A8;
extern unsigned int lbl_821AC7D4;
extern unsigned int lbl_821AC7F0;
extern unsigned int lbl_821AC80C;
extern unsigned int lbl_821AC828;
extern unsigned int lbl_821AC844;
extern unsigned int lbl_821AC860;
extern unsigned int lbl_821AC87C;
extern unsigned int lbl_821AD588;


undefined4 * fn_822AF338(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puStack_d0;
  undefined4 *puStack_cc;
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined1 auStack_a8 [168];
  
  fn_822AF0A8();
  *param_1 = &lbl_821AC578;
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  puStack_bc = (undefined4 *)fn_8265C9E0(0x1c);
  if (puStack_bc == (undefined4 *)0x0) {
    puStack_bc = (undefined4 *)0x0;
  }
  else {
    puStack_bc[1] = 1;
    puStack_bc[2] = 1;
    *puStack_bc = &lbl_821AD588;
    if (puStack_bc + 3 != (undefined4 *)0x0) {
      puStack_bc[4] = uVar1;
      puStack_bc[6] = uVar2;
      puStack_bc[5] = 5;
      puStack_bc[3] = &lbl_821AC5E0;
    }
  }
  puStack_c0 = puStack_bc + 3;
  puStack_b8 = puStack_bc;
  uVar5 = fn_82365BD8(&puStack_b0,&puStack_c0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puStack_c4 = (undefined4 *)fn_8265C9E0(0x20);
  if (puStack_c4 == (undefined4 *)0x0) {
    puStack_c4 = (undefined4 *)0x0;
  }
  else {
    puStack_c4[1] = 1;
    puStack_c4[2] = 1;
    *puStack_c4 = &lbl_821AD588;
    if (puStack_c4 + 3 != (undefined4 *)0x0) {
      puStack_c4[4] = uVar1;
      puStack_c4[6] = uVar2;
      puStack_c4[7] = uVar3;
      puStack_c4[5] = 0xb;
      puStack_c4[3] = &lbl_821AC80C;
    }
  }
  puStack_c8 = puStack_c4 + 3;
  puStack_c0 = puStack_c4;
  uVar5 = fn_82365BD8(&puStack_b0,&puStack_c8);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  uVar4 = (*(undefined4 **)(param_2 + 0x2c))[2];
  puStack_cc = (undefined4 *)fn_8265C9E0(0x34);
  if (puStack_cc == (undefined4 *)0x0) {
    puStack_cc = (undefined4 *)0x0;
  }
  else {
    puStack_cc[1] = 1;
    puStack_cc[2] = 1;
    *puStack_cc = &lbl_821AD588;
    if (puStack_cc + 3 != (undefined4 *)0x0) {
      puStack_cc[4] = uVar1;
      puStack_cc[6] = uVar2;
      puStack_cc[7] = uVar3;
      puStack_cc[5] = 0xc;
      puStack_cc[3] = &lbl_821AC828;
      puStack_cc[8] = uVar4;
    }
  }
  puStack_d0 = puStack_cc + 3;
  puStack_c8 = puStack_cc;
  uVar5 = fn_82365BD8(&puStack_b0,&puStack_d0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puStack_d0 = (undefined4 *)fn_8265C9E0(0x20);
  if (puStack_d0 == (undefined4 *)0x0) {
    puStack_d0 = (undefined4 *)0x0;
  }
  else {
    puStack_d0[1] = 1;
    puStack_d0[2] = 1;
    *puStack_d0 = &lbl_821AD588;
    if (puStack_d0 + 3 != (undefined4 *)0x0) {
      puStack_d0[4] = uVar1;
      puStack_d0[6] = uVar2;
      puStack_d0[7] = uVar3;
      puStack_d0[5] = 0xf;
      puStack_d0[3] = &lbl_821AC87C;
    }
  }
  puStack_b0 = puStack_d0 + 3;
  puStack_ac = puStack_d0;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar6 = (undefined4 *)fn_8265C9E0(0x24);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 1;
    puVar6[2] = 1;
    *puVar6 = &lbl_821AD588;
    if (puVar6 + 3 != (undefined4 *)0x0) {
      puVar6[4] = uVar1;
      puVar6[6] = uVar2;
      puVar6[7] = uVar3;
      puVar6[5] = 3;
      puVar6[3] = &lbl_821AC754;
    }
  }
  puStack_b0 = puVar6 + 3;
  puStack_ac = puVar6;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar7 = (undefined4 *)fn_8265C9E0(0x24);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[1] = 1;
    puVar7[2] = 1;
    *puVar7 = &lbl_821AD588;
    if (puVar7 + 3 != (undefined4 *)0x0) {
      puVar7[4] = uVar1;
      puVar7[6] = uVar2;
      puVar7[7] = uVar3;
      puVar7[5] = 4;
      puVar7[3] = &lbl_821AC770;
    }
  }
  puStack_b0 = puVar7 + 3;
  puStack_ac = puVar7;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar8 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8[1] = 1;
    puVar8[2] = 1;
    *puVar8 = &lbl_821AD588;
    if (puVar8 + 3 != (undefined4 *)0x0) {
      puVar8[4] = uVar1;
      puVar8[6] = uVar2;
      puVar8[7] = uVar3;
      puVar8[5] = 0x10;
      puVar8[3] = &lbl_821AC738;
    }
  }
  puStack_b0 = puVar8 + 3;
  puStack_ac = puVar8;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar9 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9[1] = 1;
    puVar9[2] = 1;
    *puVar9 = &lbl_821AD588;
    if (puVar9 + 3 != (undefined4 *)0x0) {
      puVar9[4] = uVar1;
      puVar9[6] = uVar2;
      puVar9[7] = uVar3;
      puVar9[5] = 0x11;
      puVar9[3] = &lbl_821AC738;
    }
  }
  puStack_b0 = puVar9 + 3;
  puStack_ac = puVar9;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar10 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10[1] = 1;
    puVar10[2] = 1;
    *puVar10 = &lbl_821AD588;
    if (puVar10 + 3 != (undefined4 *)0x0) {
      puVar10[4] = uVar1;
      puVar10[6] = uVar2;
      puVar10[7] = uVar3;
      puVar10[5] = 0xd;
      puVar10[3] = &lbl_821AC844;
    }
  }
  puStack_b0 = puVar10 + 3;
  puStack_ac = puVar10;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar11 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11[1] = 1;
    puVar11[2] = 1;
    *puVar11 = &lbl_821AD588;
    if (puVar11 + 3 != (undefined4 *)0x0) {
      puVar11[4] = uVar1;
      puVar11[6] = uVar2;
      puVar11[7] = uVar3;
      puVar11[5] = 0xe;
      puVar11[3] = &lbl_821AC860;
    }
  }
  puStack_b0 = puVar11 + 3;
  puStack_ac = puVar11;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar12 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12[1] = 1;
    puVar12[2] = 1;
    *puVar12 = &lbl_821AD588;
    if (puVar12 + 3 != (undefined4 *)0x0) {
      puVar12[4] = uVar1;
      puVar12[6] = uVar2;
      puVar12[7] = uVar3;
      puVar12[5] = 10;
      puVar12[3] = &lbl_821AC7F0;
    }
  }
  puStack_b0 = puVar12 + 3;
  puStack_ac = puVar12;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar13 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    puVar13[1] = 1;
    puVar13[2] = 1;
    *puVar13 = &lbl_821AD588;
    if (puVar13 + 3 != (undefined4 *)0x0) {
      puVar13[4] = uVar1;
      puVar13[6] = uVar2;
      puVar13[7] = uVar3;
      puVar13[5] = 9;
      puVar13[3] = &lbl_821AC7D4;
    }
  }
  puStack_b0 = puVar13 + 3;
  puStack_ac = puVar13;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar14 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14[1] = 1;
    puVar14[2] = 1;
    *puVar14 = &lbl_821AD588;
    if (puVar14 + 3 != (undefined4 *)0x0) {
      puVar14[4] = uVar1;
      puVar14[6] = uVar2;
      puVar14[7] = uVar3;
      puVar14[5] = 7;
      puVar14[3] = &lbl_821AC78C;
    }
  }
  puStack_b0 = puVar14 + 3;
  puStack_ac = puVar14;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar15 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    puVar15[1] = 1;
    puVar15[2] = 1;
    *puVar15 = &lbl_821AD588;
    if (puVar15 + 3 != (undefined4 *)0x0) {
      puVar15[4] = uVar1;
      puVar15[6] = uVar2;
      puVar15[7] = uVar3;
      puVar15[5] = 8;
      puVar15[3] = &lbl_821AC7A8;
    }
  }
  puStack_b0 = puVar15 + 3;
  puStack_ac = puVar15;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar16 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar16 == (undefined4 *)0x0) {
    puVar16 = (undefined4 *)0x0;
  }
  else {
    puVar16[1] = 1;
    puVar16[2] = 1;
    *puVar16 = &lbl_821AD588;
    if (puVar16 + 3 != (undefined4 *)0x0) {
      puVar16[4] = uVar1;
      puVar16[6] = uVar2;
      puVar16[7] = uVar3;
      puVar16[5] = 6;
      puVar16[3] = &lbl_821AC5E0;
    }
  }
  puStack_b0 = puVar16 + 3;
  puStack_ac = puVar16;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar17 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar17 == (undefined4 *)0x0) {
    puVar17 = (undefined4 *)0x0;
  }
  else {
    puVar17[1] = 1;
    puVar17[2] = 1;
    *puVar17 = &lbl_821AD588;
    if (puVar17 + 3 != (undefined4 *)0x0) {
      puVar17[4] = uVar1;
      puVar17[6] = uVar2;
      puVar17[7] = uVar3;
      puVar17[5] = 1;
      puVar17[3] = &lbl_821AC71C;
    }
  }
  puStack_b0 = puVar17 + 3;
  puStack_ac = puVar17;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(undefined4 **)(param_2 + 0x2c);
  puVar18 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar18 == (undefined4 *)0x0) {
    puVar18 = (undefined4 *)0x0;
  }
  else {
    puVar18[1] = 1;
    puVar18[2] = 1;
    *puVar18 = &lbl_821AD588;
    if (puVar18 + 3 != (undefined4 *)0x0) {
      puVar18[4] = uVar1;
      puVar18[6] = uVar2;
      puVar18[7] = uVar3;
      puVar18[5] = 2;
      puVar18[3] = &lbl_821AC738;
    }
  }
  puStack_b0 = puVar18 + 3;
  puStack_ac = puVar18;
  uVar5 = fn_82365BD8(auStack_a8,&puStack_b0);
  fn_822C64E0(param_1,uVar5);
  if (puVar18 != (undefined4 *)0x0) {
    fn_822315A0(puVar18);
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
  if (puVar10 != (undefined4 *)0x0) {
    fn_822315A0(puVar10);
  }
  if (puVar9 != (undefined4 *)0x0) {
    fn_822315A0(puVar9);
  }
  if (puVar8 != (undefined4 *)0x0) {
    fn_822315A0(puVar8);
  }
  if (puVar7 != (undefined4 *)0x0) {
    fn_822315A0(puVar7);
  }
  if (puVar6 != (undefined4 *)0x0) {
    fn_822315A0(puVar6);
  }
  if (puStack_d0 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_c8 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_c0 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_b8 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  return param_1;
}

