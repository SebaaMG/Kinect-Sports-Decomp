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
#define NAN(x) ((x) != (x))
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82274768();
extern int fn_82275128();
extern int fn_82275470();
extern int fn_822771E8();
extern int fn_8227DED0();
extern int fn_8227E820();
extern int fn_8227EB10();
extern int fn_8265CA20();
extern int fn_8266F628();
extern int fn_82672C20();
extern int fn_82F4D690();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;
extern unsigned int lbl_8327F894;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82274A80(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  float fVar8;
  int *piVar9;
  char cVar11;
  int iVar10;
  undefined8 uVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  byte bVar17;
  byte bVar18;
  int *piVar19;
  undefined4 *puVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  int aiStack_80 [4];
  int *piStack_70;
  
  piVar9 = (int *)fn_82275128();
  piVar19 = (int *)0x0;
  bVar17 = 0;
  dVar24 = (double)lbl_8327F894;
  bVar18 = 0;
  cVar11 = fn_82F4D690();
  uVar14 = piVar9[2];
  if (*(char *)(piVar9[uVar14] + 0x42) == '\0') {
    if (*(char *)(piVar9[uVar14 ^ 1] + 0x42) != '\0') {
      piVar9[2] = uVar14 ^ 1;
    }
  }
  if ((piVar9[9] == piVar9[10]) || (piVar9[7] == 0)) {
LAB_82274b1c:
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if (cVar11 == '\0') goto LAB_82274b1c;
  }
  if ((piVar9[0xd] == piVar9[0xe]) || (piVar9[8] == 0)) {
LAB_82274b48:
    bVar7 = false;
  }
  else {
    bVar7 = true;
    if (cVar11 == '\0') goto LAB_82274b48;
  }
  if ((!bVar5) && (!bVar7)) goto LAB_82274ecc;
  piVar15 = piVar9 + -1;
  lVar21 = 2;
  do {
    fn_822771E8(dVar24,piVar15[1]);
    piVar15 = piVar15 + 1;
    lVar21 = lVar21 + -1;
    *(undefined4 *)(*piVar15 + 0x3c) = 0;
  } while (lVar21 != 0);
  if (bVar5) {
    if (piVar9[6] != 0) {
      iVar10 = piVar9[10];
      piVar19 = *(int **)(iVar10 + -8);
      if (piVar9[9] != iVar10) {
        aiStack_80[0] = 0;
        piStack_70 = aiStack_80;
        aiStack_80[1] = 0;
        aiStack_80[2] = 0;
        uVar14 = (iVar10 - piVar9[9] >> 3) + 1;
        aiStack_80[3] = ((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0);
        fn_82275470();
        if (aiStack_80[0] != 0) {
          fn_8265CA20();
        }
      }
      if (((piVar19 != (int *)0x0) && (*(int **)(piVar9[10] + -8) != (int *)0x0)) &&
         (piVar19 != *(int **)(piVar9[10] + -8))) {
        fn_8227EB10(piVar19,0);
        (**(code **)(*piVar19 + 0x18))(piVar19);
        piVar19[0xc] = 0;
        (**(code **)(*piVar19 + 0xc))(piVar19,piVar9,2);
      }
    }
    piVar19 = *(int **)(piVar9[10] + -8);
    if (piVar9[6] != 0) {
      piVar19[0xc] = 1;
      (**(code **)(*piVar19 + 8))(piVar19,piVar9,2);
      piVar9[6] = 0;
    }
    (**(code **)(*piVar19 + 4))(piVar19);
    iVar10 = fn_82275128();
    fn_8227DED0(dVar24,piVar19,*(undefined4 *)(*(int *)(iVar10 + 8) * 4 + iVar10));
    for (piVar15 = (int *)piVar19[3]; piVar15 != (int *)piVar19[4]; piVar15 = piVar15 + 1) {
      if ((~*(uint *)(*piVar15 + 0x6c) & 1) != 0) {
        bVar5 = true;
        goto LAB_82274cf0;
      }
    }
    bVar5 = false;
LAB_82274cf0:
    bVar18 = 1;
    bVar17 = bVar5 + (bVar5 + 1U & 1 ^ !bVar5);
    if ((!bVar7) || (piVar19[2] != 0)) {
      bVar7 = false;
      goto LAB_82274d14;
    }
LAB_82274d1c:
    puVar20 = (undefined4 *)piVar9[0xd];
    piVar16 = piVar19;
    piVar15 = piVar19;
    if (puVar20 != (undefined4 *)piVar9[0xe]) {
      do {
        piVar15 = (int *)*puVar20;
        if ((piVar16 != (int *)0x0) && (piVar15 != (int *)0x0)) {
          if (piVar16[0x10] == 0) {
            if (piVar15[0x11] == 0) goto LAB_82274d94;
            piVar15[0xd] = 0;
            uVar12 = 1;
            piVar15[0x10] = 0;
            piVar15[0x11] = 0;
          }
          else {
            piVar16[0xd] = 0;
            uVar12 = 0;
            piVar16[0x10] = 0;
            piVar16[0x11] = 0;
            piVar16 = piVar15;
          }
          fn_8227E820(piVar16,1,uVar12);
        }
LAB_82274d94:
        (**(code **)(*piVar15 + 4))(piVar15);
        iVar10 = fn_82275128();
        fn_8227DED0(dVar24,piVar15,*(undefined4 *)(*(int *)(iVar10 + 8) * 4 + iVar10));
        piVar16 = (int *)piVar15[3];
        piVar13 = piVar16;
        if (piVar16 != (int *)piVar15[4]) {
          do {
            if ((~*(uint *)(*piVar13 + 0x6c) & 1) != 0) {
              bVar5 = true;
              bVar6 = 1;
              goto LAB_82274e08;
            }
            piVar13 = piVar13 + 1;
          } while (piVar13 != (int *)piVar15[4]);
        }
        bVar5 = false;
        bVar6 = 0;
LAB_82274e08:
        bVar17 = bVar6 ^ bVar6 ^ 1 ^ !bVar5 | bVar17;
        if (piVar16 != (int *)piVar15[4]) {
          do {
            if ((~*(uint *)(*piVar16 + 0x6c) & 1) != 0) {
              bVar6 = 1;
              goto LAB_82274e44;
            }
            piVar16 = piVar16 + 1;
          } while (piVar16 != (int *)piVar15[4]);
        }
        bVar6 = 0;
LAB_82274e44:
        puVar20 = puVar20 + 2;
        bVar18 = bVar6 | bVar18;
        piVar16 = piVar15;
      } while (puVar20 != (undefined4 *)piVar9[0xe]);
    }
  }
  else {
LAB_82274d14:
    piVar15 = piVar19;
    if (bVar7) goto LAB_82274d1c;
  }
  if ((piVar15 != (int *)0x0) && (piVar19 != (int *)0x0)) {
    if (piVar15[0x10] == 0) {
      if (piVar19[0x11] == 0) goto LAB_82274ecc;
      piVar19[0xd] = 0;
      uVar12 = 1;
      piVar19[0x10] = 0;
      piVar19[0x11] = 0;
    }
    else {
      piVar15[0xd] = 0;
      uVar12 = 0;
      piVar15[0x10] = 0;
      piVar15[0x11] = 0;
      piVar15 = piVar19;
    }
    fn_8227E820(piVar15,1,uVar12);
  }
LAB_82274ecc:
  fVar8 = lbl_82192734;
  fVar4 = lbl_821922D0;
  if ((lbl_83265A58 == 1) || (lbl_83265A5C != 0)) {
    bVar17 = 0;
    bVar18 = 0;
  }
  dVar22 = (double)lbl_821CC160;
  if (dVar22 < (double)(float)piVar9[3]) {
    bVar17 = 0;
  }
  fVar1 = (float)((double)(float)piVar9[3] - dVar24);
  dVar23 = (double)(fVar1 - lbl_82192734);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar23 < dVar22) << 2) | (uint)(NAN(dVar23) || NAN(dVar22)) << 2)) <
      0.0) {
    fVar1 = lbl_82192734;
  }
  fVar3 = lbl_821922D0;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((double)(fVar1 - lbl_821922D0) < dVar22) << 2) |
                (uint)(NAN((double)(fVar1 - lbl_821922D0)) || NAN(dVar22)) << 2)) < 0.0) {
    fVar3 = fVar1;
  }
  piVar9[3] = (int)fVar3;
  if (dVar22 < (double)(float)piVar9[4]) {
    bVar18 = 0;
  }
  fVar1 = (float)((double)(float)piVar9[4] - dVar24);
  lVar21 = 2;
  dVar24 = (double)(fVar1 - fVar8);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar24 < dVar22) << 2) | (uint)(NAN(dVar24) || NAN(dVar22)) << 2)) <
      0.0) {
    fVar1 = fVar8;
  }
  dVar24 = (double)(fVar1 - fVar4);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar24 < dVar22) << 2) | (uint)(NAN(dVar24) || NAN(dVar22)) << 2)) <
      0.0) {
    fVar4 = fVar1;
  }
  piVar9[4] = (int)fVar4;
  piVar19 = piVar9;
  do {
    *(byte *)(*piVar19 + 0x40) = bVar17;
    iVar10 = *piVar19;
    *(byte *)(iVar10 + 0x41) = bVar18;
    if (bVar18 == 0) {
      fn_8266F628(*(undefined4 *)(iVar10 + 4),1);
    }
    lVar21 = lVar21 + -1;
    piVar19 = piVar19 + 1;
  } while (lVar21 != 0);
  iVar10 = fn_82275128();
  lVar21 = 2;
  iVar10 = *(int *)(*(int *)(iVar10 + 8) * 4 + iVar10);
  piVar19 = piVar9;
  do {
    iVar2 = *piVar19;
    if (iVar2 == iVar10) {
      uStack_a0 = 0;
      uStack_9c = 0;
      *(undefined1 *)(iVar2 + 0x43) = 1;
      fn_82273CD8(&uStack_a0,2);
      uStack_98 = 1;
      fn_82672C20(*(undefined4 *)(iVar2 + 4),0xffffffff821a8174,&uStack_a0,1);
      puVar20 = &uStack_a0;
    }
    else {
      uStack_90 = 0;
      uStack_8c = 0;
      *(undefined1 *)(iVar2 + 0x43) = 0;
      fn_82273CD8(&uStack_90,2);
      uStack_88 = 0;
      fn_82672C20(*(undefined4 *)(iVar2 + 4),0xffffffff821a8174,&uStack_90,1);
      puVar20 = &uStack_90;
    }
    fn_82273C88(puVar20);
    lVar21 = lVar21 + -1;
    piVar19 = piVar19 + 1;
  } while (lVar21 != 0);
  fn_82274768(piVar9);
  return;
}

