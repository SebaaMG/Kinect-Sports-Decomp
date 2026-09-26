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
extern int fn_8251CA00();
extern int fn_825269D0();
extern int fn_82530948();
extern int fn_82531118();
extern int fn_825315E0();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82545E20();
extern int fn_82545F78();
extern int fn_825460F0();
extern int fn_825463B0();
extern int fn_82560218();
extern int fn_82580138();
extern unsigned int lbl_831D44F0;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8327F8A8;
extern unsigned int lbl_832960A4;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968A0;
extern unsigned int lbl_832968A4;
extern unsigned int lbl_832968A8;
extern unsigned int lbl_832968B0;
extern unsigned int lbl_832968B4;
extern unsigned int lbl_832968B8;
extern unsigned int lbl_832968C0;
extern unsigned int lbl_832968C4;
extern unsigned int lbl_832968C8;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_832968D8;
extern unsigned int lbl_832968E0;
extern unsigned int lbl_832968E4;
extern unsigned int lbl_832968E8;
extern unsigned int lbl_832968EC;
extern unsigned int lbl_832968F0;
extern unsigned int lbl_832968F4;
extern unsigned int lbl_832968F8;
extern unsigned int lbl_832968FC;
extern unsigned int lbl_83296900;
extern unsigned int lbl_83296904;
extern unsigned int lbl_83296908;
extern unsigned int lbl_8329690C;
extern unsigned int lbl_83296950;
extern unsigned int lbl_83296954;
extern unsigned int lbl_83296958;
extern unsigned int lbl_83296AE0;
extern unsigned int lbl_83296BB8;
extern unsigned int lbl_83296C00;
extern unsigned int lbl_83296C80;
extern unsigned int uRam832968ac;
extern unsigned int uRam832968bc;
extern unsigned int uRam832968cc;
extern unsigned int uRam8329695c;


void fn_825B6458(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 in_r0;
  undefined8 uVar13;
  int iVar14;
  int *piVar15;
  undefined4 uVar16;
  longlong lVar17;
  int *piVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_d0 [208];
  
  if (lbl_8329618C == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined4 *)(lbl_8329618C + 4);
  }
  uVar13 = 0x30;
  if ((lbl_831D44F0 == 0) || (lbl_832960A4 != 0)) {
    uVar13 = 0x3f;
  }
  fn_82545E20(uVar13,0);
  fn_825269D0(0x1c,uVar16);
  lVar17 = 0;
  puVar19 = auStack_d0;
  piVar18 = &lbl_83296C80;
  do {
    iVar14 = fn_82560218(uVar16,lVar17);
    if (iVar14 != 0) {
      lbl_83296BB8 = 1;
      fn_825315E0(lbl_8320A898);
      uVar4 = lbl_8320A898;
      fn_82530948(lbl_8320A898);
      fn_825315E0(uVar4);
      fn_82531118();
      piVar15 = piVar18 + -0x28;
      if (*piVar18 == 0) {
        piVar15 = (int *)&lbl_832968D0;
      }
      uVar13 = fn_82540B48(lbl_8327F8A8,piVar15);
      piVar15 = piVar18 + -0x18;
      if (*piVar18 == 0) {
        piVar15 = (int *)&lbl_83296890;
      }
      fn_82540870(uVar13,piVar15);
      fn_8251CA00(0,lVar17);
      uVar4 = lbl_8320A898;
      fn_82530948(lbl_8320A898);
      fn_825315E0(uVar4);
      fn_82531118();
      uVar41 = lbl_8329690C;
      uVar42 = lbl_83296908;
      uVar43 = lbl_83296904;
      uVar7 = lbl_83296900;
      uVar6 = lbl_832968FC;
      uVar5 = lbl_832968F8;
      uVar4 = lbl_832968F4;
      *(undefined4 *)(puVar19 + -0x20) = (((U64)(lbl_832968D0) >> 0) & 0xFFFFFFFF);
      *(undefined4 *)(puVar19 + -0x1c) = (((U64)(lbl_832968D0) >> 32) & 0xFFFFFFFF);
      *(undefined4 *)(puVar19 + -0x18) = (((U64)(lbl_832968D8) >> 0) & 0xFFFFFFFF);
      *(undefined4 *)(puVar19 + -0x14) = (((U64)(lbl_832968D8) >> 32) & 0xFFFFFFFF);
      *(undefined4 *)(puVar19 + -0x10) = lbl_832968E0;
      *(undefined4 *)(puVar19 + -0xc) = lbl_832968E4;
      *(undefined4 *)(puVar19 + -8) = lbl_832968E8;
      *(undefined4 *)(puVar19 + -4) = lbl_832968EC;
      puVar2 = (undefined4 *)((uint)(puVar19 + (int)in_r0) & 0xfffffff0);
      *puVar2 = lbl_832968F0;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      *(undefined4 *)(puVar19 + 0x10) = uVar7;
      *(undefined4 *)(puVar19 + 0x14) = uVar43;
      *(undefined4 *)(puVar19 + 0x18) = uVar42;
      *(undefined4 *)(puVar19 + 0x1c) = uVar41;
    }
    piVar18 = piVar18 + 0x2c;
    lVar17 = lVar17 + 1;
    puVar19 = puVar19 + 0x40;
  } while ((int)piVar18 < -0x7cd69220);
  fn_82545F78();
  fn_825460F0(uVar16);
  lVar17 = 0;
  do {
    iVar14 = fn_82560218(uVar16,lVar17);
    if (iVar14 != 0) {
      fn_8251CA00(1,lVar17);
    }
    lVar17 = lVar17 + 1;
  } while ((int)lVar17 < 2);
  lVar17 = 0;
  do {
    iVar14 = fn_82560218(uVar16,lVar17);
    if (iVar14 != 0) {
      fn_8251CA00(2,lVar17);
    }
    lVar17 = lVar17 + 1;
  } while ((int)lVar17 < 2);
  lVar17 = 0;
  puVar19 = auStack_d0;
  puVar20 = &lbl_83296C00;
  do {
    iVar14 = fn_82560218(uVar16,lVar17);
    if (iVar14 != 0) {
      fn_8251CA00(3,lVar17);
      iVar12 = lbl_83296AE0;
      uVar11 = uRam832968cc;
      uVar10 = lbl_832968C8;
      uVar9 = lbl_832968C4;
      uVar8 = lbl_832968C0;
      uVar40 = uRam832968bc;
      uVar41 = lbl_832968B8;
      uVar42 = lbl_832968B4;
      uVar43 = lbl_832968B0;
      uVar7 = uRam832968ac;
      uVar6 = lbl_832968A8;
      uVar5 = lbl_832968A4;
      uVar4 = lbl_832968A0;
      iVar14 = (int)in_r0;
      puVar2 = (undefined4 *)((uint)(puVar19 + iVar14) & 0xfffffff0);
      uVar37 = puVar2[1];
      uVar38 = puVar2[2];
      uVar39 = puVar2[3];
      uVar33 = *(undefined4 *)(puVar19 + -0x20);
      uVar34 = *(undefined4 *)(puVar19 + -0x1c);
      uVar35 = *(undefined4 *)(puVar19 + -0x18);
      uVar36 = *(undefined4 *)(puVar19 + -0x14);
      uVar29 = *(undefined4 *)(puVar19 + -0x10);
      uVar30 = *(undefined4 *)(puVar19 + -0xc);
      uVar31 = *(undefined4 *)(puVar19 + -8);
      uVar32 = *(undefined4 *)(puVar19 + -4);
      uVar25 = *(undefined4 *)(puVar19 + 0x10);
      uVar26 = *(undefined4 *)(puVar19 + 0x14);
      uVar27 = *(undefined4 *)(puVar19 + 0x18);
      uVar28 = *(undefined4 *)(puVar19 + 0x1c);
      puVar3 = (undefined4 *)((int)&lbl_83296890 + iVar14 & 0xfffffff0);
      uVar21 = *puVar3;
      uVar22 = puVar3[1];
      uVar23 = puVar3[2];
      uVar24 = puVar3[3];
      bVar1 = lbl_83296AE0 != 0;
      puVar3 = (undefined4 *)((uint)(puVar20 + iVar14) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar37;
      puVar3[2] = uVar38;
      puVar3[3] = uVar39;
      *(undefined4 *)(puVar20 + -0x20) = uVar33;
      *(undefined4 *)(puVar20 + -0x1c) = uVar34;
      *(undefined4 *)(puVar20 + -0x18) = uVar35;
      *(undefined4 *)(puVar20 + -0x14) = uVar36;
      *(undefined4 *)(puVar20 + -0x10) = uVar29;
      *(undefined4 *)(puVar20 + -0xc) = uVar30;
      *(undefined4 *)(puVar20 + -8) = uVar31;
      *(undefined4 *)(puVar20 + -4) = uVar32;
      *(undefined4 *)(puVar20 + 0x10) = uVar25;
      *(undefined4 *)(puVar20 + 0x14) = uVar26;
      *(undefined4 *)(puVar20 + 0x18) = uVar27;
      *(undefined4 *)(puVar20 + 0x1c) = uVar28;
      *(undefined4 *)(puVar20 + 0x20) = uVar21;
      *(undefined4 *)(puVar20 + 0x24) = uVar22;
      *(undefined4 *)(puVar20 + 0x28) = uVar23;
      *(undefined4 *)(puVar20 + 0x2c) = uVar24;
      *(undefined4 *)(puVar20 + 0x30) = uVar4;
      *(undefined4 *)(puVar20 + 0x34) = uVar5;
      *(undefined4 *)(puVar20 + 0x38) = uVar6;
      *(undefined4 *)(puVar20 + 0x3c) = uVar7;
      *(undefined4 *)(puVar20 + 0x40) = uVar43;
      *(undefined4 *)(puVar20 + 0x44) = uVar42;
      *(undefined4 *)(puVar20 + 0x48) = uVar41;
      *(undefined4 *)(puVar20 + 0x4c) = uVar40;
      *(undefined4 *)(puVar20 + 0x50) = uVar8;
      *(undefined4 *)(puVar20 + 0x54) = uVar9;
      *(undefined4 *)(puVar20 + 0x58) = uVar10;
      *(undefined4 *)(puVar20 + 0x5c) = uVar11;
      uVar7 = uRam8329695c;
      uVar6 = lbl_83296958;
      uVar5 = lbl_83296954;
      uVar4 = lbl_83296950;
      uVar43 = in_vr77;
      uVar42 = in_register_000104d8;
      uVar41 = in_register_000104d4;
      uVar40 = in_register_000104d0;
      if (bVar1) {
        puVar2 = (undefined4 *)(iVar12 + 0x10U & 0xfffffff0);
        uVar43 = puVar2[3];
        uVar42 = puVar2[2];
        uVar41 = puVar2[1];
        uVar40 = *puVar2;
      }
      *(undefined4 *)(puVar20 + 0x80) = 1;
      *(undefined4 *)(puVar20 + 0x60) = uVar40;
      *(undefined4 *)(puVar20 + 100) = uVar41;
      *(undefined4 *)(puVar20 + 0x68) = uVar42;
      *(undefined4 *)(puVar20 + 0x6c) = uVar43;
      *(undefined4 *)(puVar20 + 0x70) = uVar4;
      *(undefined4 *)(puVar20 + 0x74) = uVar5;
      *(undefined4 *)(puVar20 + 0x78) = uVar6;
      *(undefined4 *)(puVar20 + 0x7c) = uVar7;
    }
    puVar20 = puVar20 + 0xb0;
    lVar17 = lVar17 + 1;
    puVar19 = puVar19 + 0x40;
  } while ((int)puVar20 < -0x7cd692a0);
  fn_825463B0();
  fn_8251CA00(4,0);
  fn_8251CA00(5,0);
  fn_82580138();
  return;
}

