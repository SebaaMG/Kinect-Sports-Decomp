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
extern unsigned int *auStack_d0;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern int fn_82230040();
extern int fn_82230300();
extern int fn_82292828();
extern int fn_8251E370();
extern int fn_8251F720();
extern int fn_82520158();
extern int fn_82522D98();
extern int fn_82522DF8();
extern int fn_82523148();
extern int fn_825269D0();
extern int fn_82530448();
extern int fn_82536CC8();
extern int fn_8253C910();
extern int fn_8254AB00();
extern int fn_82553138();
extern int fn_82561778();
extern int fn_8256EAC0();
extern int fn_825746C0();
extern int fn_8257DAA0();
extern int fn_82598B10();
extern int fn_825A1580();
extern int fn_825A23C0();
extern int fn_825B1A20();
extern int fn_825C8418();
extern int fn_825CE658();
extern int fn_825CF9B0();
extern int fn_825F3C00();
extern int fn_825F59E0();
extern int fn_825F7A58();
extern int fn_825F8118();
extern int fn_825F9020();
extern int fn_8260DC90();
extern int fn_8260DE38();
extern int fn_8265C9E0();
extern int fn_828647D8();
extern int fn_828647F0();
extern int fn_82864898();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_b4;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_8218E1AC;
extern unsigned int lbl_8218E210;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218ECE0;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82191F78;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82192510;
extern unsigned int lbl_82193D04;
extern unsigned int lbl_82195504;
extern unsigned int lbl_8219557C;
extern unsigned int lbl_82195580;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831DB300;
extern int (*lbl_832659F8)();
extern unsigned int lbl_83265A54;
extern unsigned int lbl_83266104;
extern unsigned int lbl_8326F970;
extern unsigned int lbl_8326F974;
extern unsigned int lbl_8326F978;
extern unsigned int lbl_8326F97C;
extern unsigned int lbl_8326F980;
extern unsigned int lbl_8326F984;
extern unsigned int lbl_8326F988;
extern unsigned int lbl_8326F98C;
extern unsigned int lbl_8326F990;
extern unsigned int lbl_8326F994;
extern unsigned int lbl_8326F9C0;
extern unsigned int lbl_8326F9EC;
extern unsigned int lbl_8327F874;
extern unsigned int lbl_832967A4;
extern unsigned int lbl_832967A8;
extern unsigned int lbl_832967AC;
extern unsigned int lbl_832967B0;
extern unsigned int lbl_832967B8;
extern unsigned int lbl_83296820;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c4;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Type propagation algorithm not settling */

int * fn_82596960(int *param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 in_r0;
  int *piVar11;
  longlong lVar9;
  int iVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  int *piVar15;
  ulonglong uVar10;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 in_vr11 [16];
  undefined1 auVar24 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  undefined1 auVar25 [16];
  undefined1 in_vr69 [16];
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_d0 [1];
  undefined **ppuStack_c8;
  undefined4 uStack_c4;
  undefined **ppuStack_c0;
  undefined4 uStack_bc;
  undefined **ppuStack_b8;
  int iStack_b4;
  struct { undefined4 first; uint second; } stack_pair_b0;

  float fStack_a8;
  float fStack_a4;
  float fStack_a0;

  piVar11 = (int *)fn_82522DF8(0xd60);
  iVar12 = *param_1;
  piVar11[10] = 0;
  *piVar11 = iVar12;
  piVar11[4] = 0;
  piVar11[5] = 0;
  piVar11[6] = 0;
  piVar11[7] = 0;
  piVar11[8] = 0;
  piVar11[9] = 0;
  piVar11[3] = param_2;
  piVar11[0x10] = 0;
  piVar11[0x11] = 0;
  piVar11[0x12] = 3;
  lVar9 = fn_8265C9E0(0x1c);
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    fn_82230300(lVar9,0,0);
  }
  piVar11[0x354] = (int)lVar9;
  fn_8253C910(piVar11 + 0x7c);
  iVar12 = fn_8256EAC0(piVar11);
  piVar11[0x225] = iVar12;
  piVar11[0x15] = (int)piVar11;
  piVar16 = piVar11 + 0x28;
  piVar11[0x2b] = (int)piVar11;
  if (piVar16 != (int *)0x0) {
    piVar11[0x29] = 0;
    iVar12 = fn_8265C9E0(0xc);
    if (iVar12 == 0) {
      uStack_c4 = 0;
      ppuStack_c8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_c8);
    }
    *piVar16 = iVar12;
    *(int *)iVar12 = iVar12;
    *(int *)(*piVar16 + 4) = *piVar16;
  }
  piVar11[0x6c] = (int)piVar11;
  fVar2 = lbl_821CA460;
  dVar23 = (double)lbl_821CA460;
  piVar11[0x79] = 1;
  piVar11[0x78] = (int)fVar2;
  memcpy((void *)((const void *)((uint)(piVar11 + 0x70) & 0xfffffff0)), in_vr69, 16);
  memcpy((void *)((const void *)((uint)(piVar11 + 0x74) & 0xfffffff0)), in_vr69, 16);
  memcpy((void *)(auVar24), in_vr69, 16);
  iVar12 = fn_8257DAA0(piVar11);
  piVar11[0x2e] = iVar12;
  piVar11[0x30] = (int)piVar11;
  piVar11[0xba] = (int)piVar11;
  puVar13 = (undefined4 *)fn_82522DF8(0x4670);
  fn_82553138();
  *puVar13 = piVar11;
  piVar11[0x6a] = (int)puVar13;
  puVar14 = (undefined1 *)fn_8265C9E0(0x18);
  if (puVar14 == (undefined1 *)0x0) {
    puVar14 = (undefined1 *)0x0;
  }
  else {
    *puVar14 = 0;
    *(undefined4 *)(puVar14 + 8) = 0;
    iVar12 = fn_8265C9E0(0x10);
    if (iVar12 == 0) {
      uStack_bc = 0;
      ppuStack_c0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_c0);
    }
    *(int *)(puVar14 + 4) = iVar12;
    *(int *)iVar12 = iVar12;
    *(int *)(*(int *)(puVar14 + 4) + 4) = *(int *)(puVar14 + 4);
    *(int **)(puVar14 + 0x14) = piVar11;
  }
  piVar11[0x352] = (int)puVar14;
  iVar12 = fn_825B1A20();
  piVar11[0x6b] = iVar12;
  puVar13 = (undefined4 *)fn_82522DF8(0x2c);
  *puVar13 = piVar11;
  puVar13[1] = 0;
  piVar11[0xbd] = (int)puVar13;
  iVar12 = fn_82522DF8(0x44);
  piVar11[0xbe] = iVar12;
  iVar12 = fn_82522DF8(0xc);
  *(int **)(iVar12 + 8) = piVar11;
  piVar11[0xbf] = iVar12;
  iVar12 = fn_82522D98(0x28);
  piVar11[0xc2] = iVar12;
  *(undefined4 *)(iVar12 + 0x24) = 0;
  fn_8260DC90(piVar11[0xc2]);
  piVar11[0xc3] = (int)piVar11;
  fn_8251E370(piVar11 + 0xc4,8,0x80);
  fn_8251E370(piVar11 + 0xe7,4,0x80);
  iVar12 = 0;
  do {
    iVar19 = 0;
    do {
      fn_8251E370(piVar11 + (iVar19 + iVar12) * 5 + 0xc9,0xc,0x80);
      iVar19 = iVar19 + 1;
    } while (iVar19 < 2);
    iVar12 = iVar12 + 2;
  } while (iVar12 < 6);
  iVar12 = fn_82522DF8(0x804);
  piVar11[0x102] = iVar12;
  fVar2 = lbl_821CC160;
  iVar7 = lbl_82195580;
  iVar6 = lbl_8219557C;
  iVar19 = lbl_821922D0;
  iVar12 = lbl_8218E1AC;
  dVar21 = (double)lbl_821CC160;
  piVar11[0x103] = lbl_821922D4;
  piVar11[0x104] = iVar12;
  piVar11[0x105] = iVar6;
  piVar11[0x106] = iVar7;
  piVar11[0x107] = iVar19;
  piVar11[0x108] = (int)fVar2;
  puVar13 = (undefined4 *)((int)piVar11 + (int)in_r0 + 0x430 & 0xfffffff0);
  *puVar13 = in_register_000104d0;
  puVar13[1] = in_register_000104d4;
  puVar13[2] = in_register_000104d8;
  puVar13[3] = in_vr77;
  memcpy((void *)((const void *)((uint)(piVar11 + 0x110) & 0xfffffff0)), auVar24, 16);
  fn_82F691F0(piVar11 + 0x116,0,0x20);
  fn_82F691F0(piVar11 + 0x11e,0,0x20);
  fn_82F691F0(piVar11 + 0x126,0,0x20);
  piVar11[0x130] = 0;
  fn_82520158(0xffffffff821c52e4,auStack_d0,0);
  iVar12 = fn_8251F720(auStack_d0,0);
  piVar11[0x19d] = iVar12;
  fn_82561778(piVar11 + 0x134,0xffffffff821c5304,0);
  fVar2 = lbl_821916FC;
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
  dVar22 = (double)lbl_821916FC;{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr11,in_vr69,4,3); memcpy(auVar24, &_vt0, 16); }
  loadVectorLeftIndexed128(0xffffffff821ca45c,4);
  piVar11[0x1b1] = 0;{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr12,4,3); memcpy(auVar25, &_vt1, 16); }
  piVar11[0x19c] = (int)fVar2;
  piVar11[0x1b2] = 0;
  piVar11[0x1b3] = 0;{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar25,auVar24,3,2); memcpy(auVar24, &_vt2, 16); }
  memcpy((void *)((const void *)((uint)(piVar11 + 0x198) & 0xfffffff0)), auVar24, 16);
  puVar13 = (undefined4 *)fn_82522DF8(0x3484);
  iVar12 = 0;
  *puVar13 = piVar11;
  piVar16 = puVar13 + 99;
  do {
    piVar16[-0x62] = (int)piVar11;
    *piVar16 = iVar12;
    fn_8251E370(piVar16 + 1,4,0x10);
    iVar12 = iVar12 + 1;
    piVar16 = piVar16 + 0x69;
  } while (iVar12 < 0x20);
  piVar11[0x1b4] = (int)puVar13;
  piVar11[0x1b5] = (int)piVar11;
  iVar12 = 0;
  lVar9 = 0x20;
  do {
    *(undefined1 *)((int)piVar11 + iVar12 + 0x754) = 0;
    iVar12 = iVar12 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  piVar11[0x1dd] = (int)piVar11;
  fn_8251E370(piVar11 + 0x1de,0x50,6);
  fn_8251E370(piVar11 + 0x1e3,0x50,6);
  piVar11[0x1e9] = (int)piVar11;
  fn_8251E370(piVar11 + 0x1ea,4,8);
  fn_8251E370(piVar11 + 0x1ef,0xc,0);
  fn_8260DE38(piVar11 + 0x1f5);
  piVar11[0x1f6] = 0;
  puVar13 = (undefined4 *)fn_82522DF8(0xc4);
  *puVar13 = piVar11;
  piVar11[0x1f9] = (int)puVar13;
  fn_8251E370(piVar11 + 0x1fa,8,0x20);
  piVar11[0x20a] = (int)(float)dVar21;
  piVar11[0x20e] = (int)(float)dVar21;
  piVar11[0x207] = (int)piVar11;
  piVar11[0x20b] = (int)(float)dVar21;
  piVar11[0x20d] = 0;
  piVar11[0x210] = (int)(float)dVar21;
  piVar11[0x20c] = 0;
  piVar11[0x208] = (int)(float)dVar23;
  piVar11[0x20f] = 0;
  piVar11[0x206] = (int)piVar11;
  lVar9 = 6;
  piVar16 = piVar11 + 0x1ff;
  do {
    iVar12 = *(int *)(&lbl_8218ECE0 + ((int)piVar16 - (int)(piVar11 + 0x1ff)));
    piVar15 = (int *)fn_82522DF8(iVar12 * 0xc + 0xc);
    *piVar15 = iVar12;
    piVar15[1] = (int)(piVar15 + 3);
    lVar9 = lVar9 + -1;
    piVar15[2] = (int)(piVar15 + iVar12 + 3);
    *piVar16 = (int)piVar15;
    piVar16 = piVar16 + 1;
  } while (lVar9 != 0);
  piVar11[0x205] = -1;
  puVar13 = (undefined4 *)fn_82522DF8(0x380);
  *puVar13 = piVar11;
  puVar13[1] = 0;
  fn_8251E370(puVar13 + 4,0x10,0);
  fn_82561778(puVar13 + 0xc,0xffffffff821c51c4,0x200);
  fn_82561778(puVar13 + 0x70,0xffffffff821c51d0,0);
  *(undefined1 *)(puVar13 + 0xd1) = 0;
  puVar13[0xdb] = 0;
  puVar13[0xdc] = 0;
  piVar11[0x211] = (int)puVar13;
  lVar9 = fn_8265C9E0(0x1b0);
  if (lVar9 == 0) {
    iVar12 = 0;
  }
  else {
    puVar13 = (undefined4 *)lVar9;
    *puVar13 = piVar11;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[4] = 0;
    fn_82561778(lVar9 + 0x20,0xffffffff821c53a8,4);
    iVar12 = (int)lVar9;
    *(undefined4 *)(iVar12 + 0x1a0) = 0;
  }
  iVar19 = *piVar11;
  piVar11[0x212] = iVar12;
  if (iVar19 == 0) {
    iVar19 = 3;
  }
  fn_828647F0(&stack_pair_b0.first,iVar19);
  uVar10 = (ulonglong)lbl_8327F874;
  if (uVar10 == 0) {
    uVar10 = fn_82536CC8();
    lbl_8327F874 = (uint)uVar10;
  }
  fn_82292828(uVar10,&stack_pair_b0.first);
  piVar11[0x214] = 0;
  piVar11[0x215] = 0;
  iVar12 = fn_828647D8(&stack_pair_b0.first);
  piVar11[0x213] = iVar12;
  fn_82864898(&stack_pair_b0.first);
  piVar16 = (int *)fn_82522DF8(0x290);
  if (*piVar11 == 0) {
    *piVar16 = 3;
  }
  else {
    *piVar16 = *piVar11;
  }
  piVar16[0x9f] = 0;
  fn_825F8118(piVar16);
  piVar16[0xa3] = 0;
  fStack_a8 = (float)dVar23;
  fStack_a4 = (float)dVar23;
  stack_pair_b0.second = stack_pair_b0.second & 0xffffff | 0xfd000000;
  fStack_a0 = (float)dVar23;
  piVar11[0x216] = (int)piVar16;
  piVar15 = piVar11 + 0x225;
  lVar9 = 5;
  stack_pair_b0.first = 1;
  piVar16 = &iStack_b4;
  do {
    piVar16 = piVar16 + 1;
    piVar15 = piVar15 + 1;
    *piVar15 = *piVar16;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  fn_825269D0(0x54,piVar11);
  iVar12 = fn_825A1580();
  piVar11[0x22c] = iVar12;
  iVar12 = fn_825A1580();
  piVar11[0x22d] = iVar12;
  piVar11[0x22e] = 0x200000;
  piVar11[0x22f] = 1;
  puVar17 = (undefined4 *)fn_82522DF8(0x74);
  uVar8 = lbl_831DB300;
  uVar5 = lbl_82193D04;
  uVar4 = lbl_82192510;
  uVar3 = lbl_82191F78;
  uVar1 = lbl_8218E8E8;
  uVar18 = lbl_8218E210;
  puVar13 = puVar17 + 2;
  *puVar17 = 1;
  puVar17[0x12] = uVar8;
  puVar17[1] = piVar11;
  puVar17[0x13] = uVar3;
  puVar17[0x10] = 8;
  puVar17[0x14] = uVar5;
  lVar9 = 8;
  puVar17[0x15] = (float)dVar23;
  puVar17[0x11] = 4;
  puVar17[0x16] = uVar1;
  puVar17[2] = 0;
  puVar17[0x17] = uVar4;
  puVar17[0x18] = (float)dVar23;
  puVar17[0x19] = uVar1;
  puVar17[0x1b] = (float)dVar22;
  puVar17[0x1a] = (float)dVar22;
  puVar17[0x1c] = uVar18;
  do {
    puVar13 = puVar13 + 1;
    *puVar13 = 0;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  uVar18 = fn_825A23C0(0x280,1);
  puVar17[0xd] = uVar18;
  uVar18 = fn_825A23C0(0x1c,1);
  puVar17[0xe] = uVar18;
  piVar11[0x231] = (int)puVar17;
  iVar12 = fn_825F9020();
  piVar11[0x24b] = iVar12;
  uVar10 = fn_8265C9E0(0xb4);
  if ((uVar10 & 0xffffffff) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = fn_825746C0(uVar10,piVar11);
  }
  piVar11[0x24f] = iVar12;
  uVar10 = fn_8265C9E0(0x1ec);
  if ((uVar10 & 0xffffffff) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = fn_8254AB00(uVar10,piVar11);
  }
  piVar11[0x232] = iVar12;
  puVar13 = &lbl_8326F994;
  lVar9 = 10;
  lbl_8326F974 = lbl_82195504;
  lbl_8326F970 = 0;
  lbl_8326F980 = (float)dVar23;
  lbl_8326F988 = 0;
  lbl_8326F984 = (float)dVar23;
  lbl_8326F994 = 0;
  lbl_8326F97C = (float)dVar23;
  lbl_8326F990 = (float)dVar23;
  lbl_8326F98C = (float)dVar23;
  lbl_8326F978 = lbl_821917D4;
  do {
    puVar13 = puVar13 + 1;
    *puVar13 = 0x3f000000;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  lbl_8326F9C0 = (float)dVar23;
  lbl_8326F9EC = 0;
  iVar12 = fn_825F7A58();
  piVar11[0x24d] = iVar12;
  fn_825CE658(piVar11 + 0x2d8);
  fn_825C8418(piVar11 + 0x2e6);
  piVar11[0x2e4] = 0;
  piVar11[0x2e5] = 0;
  iVar12 = fn_82520158(0xffffffff821c8e68,auStack_d0,0);
  if (iVar12 != 0) {
    iVar12 = fn_8251F720(auStack_d0,0);
    piVar11[0x2ef] = iVar12;
  }
  fn_825F59E0(piVar11 + 0x313);
  fn_825CF9B0(piVar11,piVar11 + 0x318);
  fn_825F3C00(piVar11 + 0x343);
  piVar11[0x330] = (int)piVar11;
  fn_8251E370(piVar11 + 0x331,0x20,5);
  fn_8251E370(piVar11 + 0x336,0x14,5);
  piVar11[0x33b] = (int)piVar11;
  piVar11[0x341] = 1;
  fn_8251E370(piVar11 + 0x33c,0x100,0);
  piVar11[0x346] = (int)piVar11;
  piVar11[0x34f] = 0;
  piVar11[0x34e] = 0;
  piVar11[0x347] = 1;
  piVar11[0x348] = 1;
  fn_8251E370(piVar11 + 0x349,8,0);
  piVar11[0x350] = (int)piVar11;
  if (lbl_83265A54 != 0) {
    while (lbl_83266104 != 0) {
      fn_82523148();
    }
    lbl_83265A54 = 0;
  }
  iVar12 = fn_825A23C0(0x34,4);
  piVar11[0x233] = iVar12;
  piVar11[0x234] = 0;
  piVar11[0x236] = 0;
  fn_8260DC90(piVar11 + 0x14);
  fn_82598B10(piVar11,piVar11[0x14]);
  if (lbl_832659F8 != (code *)0x0) {
    iVar12 = (*lbl_832659F8)(piVar11);
    piVar11[0x355] = iVar12;
  }
  fn_825269D0(0x4c,piVar11);
  if (lbl_832967A8 <= lbl_832967B0 + 1U) {
    fn_82530448();
  }
  uVar20 = lbl_832967B0 + lbl_832967AC;
  if (lbl_832967A8 <= uVar20) {
    uVar20 = uVar20 - lbl_832967A8;
  }
  iVar12 = uVar20 * 4;
  if (*(int *)(iVar12 + lbl_832967A4) == 0) {
    iVar19 = fn_8265C9E0(0x68);
    if (iVar19 == 0) {
      iStack_b4 = 0;
      ppuStack_b8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_b8);
    }
    *(int *)(iVar12 + lbl_832967A4) = iVar19;
  }
  if (*(int *)(iVar12 + lbl_832967A4) != 0) {
    fn_82F68CC0(*(int *)(iVar12 + lbl_832967A4),0xffffffff832967b8,0x68);
  }
  lbl_832967B8 = 0;
  lbl_832967B0 = lbl_832967B0 + 1;
  lbl_83296820 = 0;
  piVar11[0x356] = 0;
  return piVar11;
}
