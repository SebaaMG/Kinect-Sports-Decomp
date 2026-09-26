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
extern unsigned int *auStack_13b0;
extern unsigned int *auStack_1bd0;
extern unsigned int *auStack_20d0;
extern unsigned int *auStack_25a0;
extern unsigned int *auStack_25b0;
extern unsigned int *auStack_25d0;
extern unsigned int *auStack_2710;
extern unsigned int *auStack_2850;
extern unsigned int *auStack_2890;
extern unsigned int *auStack_600;
extern unsigned int *auStack_e20;
extern unsigned int fStack_28c4;
extern unsigned int fStack_28d4;
extern unsigned int fStack_28d8;
extern unsigned int fStack_28dc;
extern unsigned int fStack_28e0;
extern int fn_82A1DD38();
extern int fn_82BA02A8();
extern int fn_82F534D8();
extern int fn_82F53548();
extern int fn_82F59488();
extern int fn_82F5A3A0();
extern int fn_82F5AA88();
extern int fn_82F5E6A8();
extern int fn_82F5E778();
extern int fn_82F5E7C8();
extern int fn_82F5E8C0();
extern int fn_82F600B0();
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832628C3;
extern unsigned int uStack_2898;
extern unsigned int uStack_28a0;
extern unsigned int uStack_28a8;
extern unsigned int uStack_28b0;
extern unsigned int uStack_28b8;
extern unsigned int uStack_28c0;
extern unsigned int uStack_28c8;
extern unsigned int uStack_28d0;


void fn_82F5AC80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 in_r0;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_register_00010010;
  undefined4 uVar15;
  undefined4 in_register_00010014;
  undefined4 uVar16;
  undefined4 in_register_00010018;
  undefined4 uVar17;
  undefined4 in_vr1;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fStack_28e0;
  float fStack_28dc;
  float fStack_28d8;
  float fStack_28d4;
  undefined8 uStack_28d0;
  undefined4 uStack_28c8;
  float fStack_28c4;
  undefined8 uStack_28c0;
  undefined8 uStack_28b8;
  undefined8 uStack_28b0;
  undefined8 uStack_28a8;
  undefined8 uStack_28a0;
  undefined8 uStack_2898;
  undefined1 auStack_2890 [64];
  undefined1 auStack_2850 [4];
  float afStack_284c [79];
  undefined1 auStack_2710 [320];
  undefined4 auStack_25d0 [8];
  undefined1 auStack_25b0 [16];
  undefined4 auStack_25a0 [308];
  undefined8 auStack_20d0 [160];
  undefined1 auStack_1bd0 [2080];
  undefined8 auStack_13b0 [178];
  undefined1 auStack_e20 [2080];
  undefined8 auStack_600 [192];
  
  puVar3 = (undefined4 *)(param_4 + -4);
  lVar8 = 0x14;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0x3f800000;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  dVar9 = (double)lbl_821AAD20;
  if (lbl_832628C3 == '\0') {
    lVar8 = 0;
    pfVar4 = afStack_284c;
    dVar10 = (double)lbl_8200DFF4;
    do {
      fn_82F5E6A8(lVar8);
      puVar3 = (undefined4 *)((uint)(pfVar4 + -1) & 0xfffffff0);
      *puVar3 = in_register_00010010;
      puVar3[1] = in_register_00010014;
      puVar3[2] = in_register_00010018;
      puVar3[3] = in_vr1;
      if ((double)*pfVar4 < dVar10) {
        dVar10 = (double)*pfVar4;
      }
      lVar8 = lVar8 + 1;
      pfVar4 = pfVar4 + 4;
    } while ((int)lVar8 < 0x14);
    fn_82F534D8(dVar9,dVar10,dVar9,dVar9);
    fn_82F5E7C8(&uStack_28d0);
    fn_82F5E8C0(auStack_1bd0);
    fn_82F600B0(auStack_1bd0,uStack_28d0,CONCAT44(uStack_28c8,fStack_28c4),uStack_28c0,
                      uStack_28b8,auStack_2850);
    uVar5 = 0;
    do {
      iVar2 = fn_82F59488(auStack_2890,*(undefined8 *)((int)auStack_13b0 + uVar5),
                           *(undefined8 *)((int)auStack_13b0 + uVar5 + 8),
                           *(undefined8 *)((int)auStack_13b0 + uVar5 + 0x10),
                           *(undefined8 *)((int)auStack_13b0 + uVar5 + 0x18),
                           *(undefined8 *)((int)auStack_13b0 + uVar5 + 0x20),
                           *(undefined8 *)((int)auStack_13b0 + uVar5 + 0x28),
                           *(undefined8 *)((int)auStack_13b0 + uVar5 + 0x30));
      puVar3 = (undefined4 *)((int)in_r0 + iVar2 & 0xfffffff0);
      uVar11 = puVar3[1];
      uVar12 = puVar3[2];
      uVar13 = puVar3[3];
      *(undefined4 *)((int)auStack_25d0 + uVar5) = *puVar3;
      *(undefined4 *)((int)auStack_25d0 + uVar5 + 4) = uVar11;
      *(undefined4 *)((int)auStack_25d0 + uVar5 + 8) = uVar12;
      *(undefined4 *)((int)auStack_25d0 + uVar5 + 0xc) = uVar13;
      uVar6 = uVar5 + 0x40;
      puVar3 = (undefined4 *)(iVar2 + 0x10U & 0xfffffff0);
      uVar18 = *puVar3;
      uVar19 = puVar3[1];
      uVar20 = puVar3[2];
      uVar21 = puVar3[3];
      puVar3 = (undefined4 *)(iVar2 + 0x20U & 0xfffffff0);
      uVar15 = puVar3[1];
      uVar16 = puVar3[2];
      uVar17 = puVar3[3];
      puVar1 = (undefined4 *)(iVar2 + 0x30U & 0xfffffff0);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      uVar13 = puVar1[2];
      uVar14 = puVar1[3];
      puVar1 = (undefined4 *)((uint)(auStack_25b0 + (int)in_r0 + uVar5) & 0xfffffff0);
      *puVar1 = *puVar3;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      *(undefined4 *)((int)auStack_25d0 + uVar5 + 0x10) = uVar18;
      *(undefined4 *)((int)auStack_25d0 + uVar5 + 0x14) = uVar19;
      *(undefined4 *)((int)auStack_25d0 + uVar5 + 0x18) = uVar20;
      *(undefined4 *)((int)auStack_25d0 + uVar5 + 0x1c) = uVar21;
      *(undefined4 *)((int)auStack_25a0 + uVar5) = uVar11;
      *(undefined4 *)((int)auStack_25a0 + uVar5 + 4) = uVar12;
      *(undefined4 *)((int)auStack_25a0 + uVar5 + 8) = uVar13;
      *(undefined4 *)((int)auStack_25a0 + uVar5 + 0xc) = uVar14;
      uVar5 = uVar6;
    } while (uVar6 < 0x500);
    fn_82F5AA88(auStack_25d0,0xffffffff83262b10);
    lbl_832628C3 = '\x01';
    fn_82BA02A8(auStack_1bd0);
  }
  puVar3 = (undefined4 *)((int)param_2 + 0x10U & 0xfffffff0);
  uVar11 = *puVar3;
  uVar12 = puVar3[1];
  uVar13 = puVar3[2];
  uVar14 = puVar3[3];
  iVar2 = (int)in_r0;
  puVar3 = (undefined4 *)((int)&fStack_28e0 + iVar2 & 0xfffffff0);
  *puVar3 = uVar11;
  puVar3[1] = uVar12;
  puVar3[2] = uVar13;
  puVar3[3] = uVar14;
  fStack_28d4 = (float)dVar9;
  puVar3 = (undefined4 *)((int)&fStack_28e0 + iVar2 & 0xfffffff0);
  uVar15 = *puVar3;
  uVar16 = puVar3[1];
  uVar17 = puVar3[2];
  uVar18 = puVar3[3];
  puVar3 = (undefined4 *)((int)&uStack_28d0 + iVar2 & 0xfffffff0);
  *puVar3 = uVar11;
  puVar3[1] = uVar12;
  puVar3[2] = uVar13;
  puVar3[3] = uVar14;
  fn_82F53548();
  puVar3 = (undefined4 *)((int)&fStack_28e0 + (int)in_r0 & 0xfffffff0);
  *puVar3 = uVar15;
  puVar3[1] = uVar16;
  puVar3[2] = uVar17;
  puVar3[3] = uVar18;
  fn_82F5E778((double)fStack_28e0,(double)fStack_28dc,(double)fStack_28d8,(double)fStack_28c4,
                    &uStack_28b0);
  fn_82A1DD38(auStack_2710,param_3 * 0x1c0 + param_2 + 0x50,0x140);
  fn_82F5E8C0(auStack_e20);
  fn_82F600B0(auStack_e20,uStack_28b0,uStack_28a8,uStack_28a0,uStack_2898,auStack_2710);
  uVar5 = 0;
  do {
    iVar2 = fn_82F59488(auStack_2890,*(undefined8 *)((int)auStack_600 + uVar5),
                         *(undefined8 *)((int)auStack_600 + uVar5 + 8),
                         *(undefined8 *)((int)auStack_600 + uVar5 + 0x10),
                         *(undefined8 *)((int)auStack_600 + uVar5 + 0x18),
                         *(undefined8 *)((int)auStack_600 + uVar5 + 0x20),
                         *(undefined8 *)((int)auStack_600 + uVar5 + 0x28),
                         *(undefined8 *)((int)auStack_600 + uVar5 + 0x30));
    puVar3 = (undefined4 *)((int)in_r0 + iVar2 & 0xfffffff0);
    uVar11 = puVar3[1];
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    puVar1 = (undefined4 *)(iVar2 + 0x10U & 0xfffffff0);
    uVar22 = *puVar1;
    uVar23 = puVar1[1];
    uVar24 = puVar1[2];
    uVar25 = puVar1[3];
    puVar1 = (undefined4 *)(iVar2 + 0x20U & 0xfffffff0);
    uVar18 = *puVar1;
    uVar19 = puVar1[1];
    uVar20 = puVar1[2];
    uVar21 = puVar1[3];
    puVar1 = (undefined4 *)(iVar2 + 0x30U & 0xfffffff0);
    uVar14 = *puVar1;
    uVar15 = puVar1[1];
    uVar16 = puVar1[2];
    uVar17 = puVar1[3];
    *(undefined4 *)((int)auStack_25d0 + uVar5) = *puVar3;
    *(undefined4 *)((int)auStack_25d0 + uVar5 + 4) = uVar11;
    *(undefined4 *)((int)auStack_25d0 + uVar5 + 8) = uVar12;
    *(undefined4 *)((int)auStack_25d0 + uVar5 + 0xc) = uVar13;
    uVar6 = uVar5 + 0x40;
    puVar3 = (undefined4 *)((uint)(auStack_25b0 + (int)in_r0 + uVar5) & 0xfffffff0);
    *puVar3 = uVar18;
    puVar3[1] = uVar19;
    puVar3[2] = uVar20;
    puVar3[3] = uVar21;
    *(undefined4 *)((int)auStack_25d0 + uVar5 + 0x10) = uVar22;
    *(undefined4 *)((int)auStack_25d0 + uVar5 + 0x14) = uVar23;
    *(undefined4 *)((int)auStack_25d0 + uVar5 + 0x18) = uVar24;
    *(undefined4 *)((int)auStack_25d0 + uVar5 + 0x1c) = uVar25;
    *(undefined4 *)((int)auStack_25a0 + uVar5) = uVar14;
    *(undefined4 *)((int)auStack_25a0 + uVar5 + 4) = uVar15;
    *(undefined4 *)((int)auStack_25a0 + uVar5 + 8) = uVar16;
    *(undefined4 *)((int)auStack_25a0 + uVar5 + 0xc) = uVar17;
    uVar5 = uVar6;
  } while (uVar6 < 0x500);
  fn_82F5AA88(auStack_25d0,auStack_20d0);
  pfVar4 = (float *)(param_4 + -4);
  puVar7 = auStack_20d0;
  uVar5 = 0;
  do {
    dVar9 = (double)fn_82F5A3A0(*puVar7,puVar7[1],puVar7[2],puVar7[3],puVar7[4],puVar7[5],
                                      puVar7[6],puVar7[7]);
    uVar5 = uVar5 + 0xc;
    pfVar4 = pfVar4 + 1;
    *pfVar4 = (float)dVar9;
    puVar7 = puVar7 + 8;
  } while (uVar5 < 0xf0);
  fn_82BA02A8(auStack_e20);
  return;
}

