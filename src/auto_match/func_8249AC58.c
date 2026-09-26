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
extern unsigned int *auStack_60;
extern int fn_82275128();
extern int fn_82381BC0();
extern int fn_8249ABC0();
extern int fn_8249B9D0();
extern int fn_8249BC10();
extern int fn_8249BDC0();
extern int fn_8249BF48();
extern int fn_8249C0A0();
extern int fn_8249C1A8();
extern int fn_8249C418();
extern int fn_8249C5E8();
extern int fn_8249C720();
extern int fn_8249CB58();
extern int fn_8249D600();
extern int fn_8249D748();
extern int fn_8249D878();
extern int fn_8249DC50();
extern int fn_8249DDE8();
extern int fn_8249DF58();
extern int fn_8249E860();
extern int fn_8249EA90();
extern int fn_82512A48();
extern int fn_82672C20();
extern int fn_829C79C8();
extern int fn_82A1E928();
extern int fn_82F4DC10();
extern int fn_82F4DE10();
extern unsigned int lbl_821BF094;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;
extern unsigned int lbl_8326B4C8;
extern unsigned int lbl_8326B4D8;
extern unsigned int lbl_832766F6;
extern int (*lbl_83276794)();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8249AC58(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  char cVar6;
  int in_r0;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  byte bVar16;
  uint uVar17;
  bool bVar18;
  uint *puVar19;
  longlong lVar20;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_60 [96];
  
  puVar11 = *(undefined4 **)(param_1 + 0x1c);
  piVar13 = (int *)(param_1 + 0x14);
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  puVar11[5] = *(undefined4 *)(param_1 + 0x70);
  puVar11[2] = uVar8;
  puVar11[1] = uVar1;
  iVar7 = fn_82F4DC10();
  if (iVar7 == 0) {
    fn_8249EA90(*puVar11);
  }
  fn_8249DC50(puVar11);
  iVar7 = fn_8249ABC0();
  iVar7 = *(int *)(iVar7 + 0x20);
  if (iVar7 == 1) {
    uVar8 = puVar11[2];
  }
  else {
    uVar8 = puVar11[1];
  }
  puVar11[3] = uVar8;
  if (iVar7 == 1) {
    uVar8 = puVar11[1];
  }
  else {
    uVar8 = puVar11[2];
  }
  puVar11[4] = uVar8;
  fn_8249DDE8(puVar11);
  fn_8249DF58(puVar11);
  fn_8249E860(puVar11);
  puVar11[1] = 0;
  puVar14 = puVar11 + 0x2d;
  puVar11[2] = 0;
  puVar15 = puVar11 + 0x1c;
  lVar20 = 2;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[8] = 0;
  uVar8 = lbl_821CC160;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0x34] = 0xffffffff;
  do {
    puVar4 = (undefined4 *)(in_r0 + (int)puVar15 & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    puVar15 = puVar15 + 4;
    puVar14[-1] = uVar8;
    puVar14 = puVar14 + 1;
    *puVar14 = uVar8;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  puVar11[0x31] = 0;
  puVar11[0x32] = 0;
  puVar11[0x33] = 0xffffffff;
  puVar11[0x39] = 0;
  fn_8249BF48(param_1);
  lVar20 = 2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x50);
  do {
    piVar2 = *(int **)(param_1 + 0x38);
    uVar17 = 0;
    iVar7 = *piVar13;
    piVar3 = (int *)*piVar2;
    while (piVar3 != piVar2) {
      iVar9 = (*(code *)**(undefined4 **)piVar3[4])((undefined4 *)piVar3[4],iVar7);
      if (iVar9 == 0) {
        uVar17 = piVar3[3] | uVar17;
      }
      fn_82381BC0(auStack_60);
      piVar2 = *(int **)(param_1 + 0x38);
    }
    *(uint *)(iVar7 + 0x24) = uVar17;
    fn_8249C0A0(param_1,iVar7);
    lVar20 = lVar20 + -1;
    piVar13 = piVar13 + 1;
  } while (lVar20 != 0);
  uVar8 = fn_8249C1A8(param_1);
  *(undefined4 *)(param_1 + 0x50) = uVar8;
  if (*(int *)(param_1 + 0x80) != 0) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      if (lbl_83276794 == (code *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (*lbl_83276794)();
      }
      if (iVar7 == 0) goto LAB_8249ae58;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      fn_82512A48();
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
LAB_8249ae58:
  uVar17 = *(uint *)(param_1 + 8);
  if (uVar17 == 0) {
    iVar7 = fn_8249D600(*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 4));
    if (iVar7 != 0) {
      if ((*(uint *)(param_1 + 0x5c) & *(uint *)(param_1 + 0x50)) == 0) {
        if (*(int *)(param_1 + 0x88) == 0) {
          iVar7 = *(int *)(*(int *)(param_1 + 0x110) + 0x2c);
          if (*(int *)(param_1 + 8) == 0) {
            iVar9 = fn_8249D600(*(int *)(param_1 + 0x110),*(undefined4 *)(param_1 + 4));
            bVar16 = 0;
            if (iVar9 != 0) goto LAB_8249af30;
          }
          else {
LAB_8249af30:
            bVar16 = 1;
          }
          if ((bool)(iVar7 == 0 & bVar16)) {
            *(undefined4 *)(param_1 + 0x8c) = 1;
          }
        }
      }
      else {
        uVar12 = 1;
LAB_8249aee8:
        fn_8249B9D0(param_1,uVar12);
      }
    }
  }
  else if (uVar17 == 1) {
    fn_8249BC10(param_1);
  }
  else if (uVar17 < 3) {
    if (*(int *)(param_1 + 0x88) == 0) {
      uVar17 = *(uint *)(param_1 + 0x60);
    }
    else {
      uVar17 = *(uint *)(param_1 + 100);
    }
    if ((*(uint *)(param_1 + 0x50) & uVar17) == 0) {
      uVar12 = 3;
      goto LAB_8249aee8;
    }
  }
  else if (uVar17 == 3) {
    fn_8249BDC0(param_1,0);
  }
  iVar7 = *(int *)(param_1 + 8);
  if ((iVar7 == 0) || (bVar16 = 0, iVar7 == 2)) {
    bVar16 = 1;
  }
  iVar9 = *(int *)(param_1 + 0xb4);
  if ((lbl_83265A58 == 1) || (bVar5 = false, lbl_83265A5C != 0)) {
    bVar5 = true;
  }
  puVar19 = &lbl_821BF094;
  bVar18 = iVar7 == 3;
  lVar20 = 5;
  do {
    iVar7 = fn_8249C418(param_1,*puVar19,bVar18,iVar9 == 0 & bVar16 & !bVar5,
                              (*(uint *)(param_1 + 0x6c) & *puVar19) == 0);
    if (iVar7 == 0) {
      bVar18 = true;
    }
    lVar20 = lVar20 + -1;
    puVar19 = puVar19 + 1;
  } while (lVar20 != 0);
  if (*(int *)(param_1 + 0xe8) != 0) {
    if (((*(int *)(param_1 + 8) != 2) || (*(int *)(param_1 + 0x88) != 0)) ||
       (uVar8 = 0, *(int *)(param_1 + 0xb4) != 0)) {
      uVar8 = 1;
    }
    iVar7 = fn_82275128();
    *(undefined4 *)(iVar7 + 0x1c) = uVar8;
    iVar7 = fn_82275128();
    *(undefined4 *)(iVar7 + 0x20) = uVar8;
  }
  cVar6 = lbl_832766F6;
  iVar7 = fn_82F4DE10();
  if (((iVar7 == 0) || (cVar6 == '\0')) || (*(int *)(param_1 + 0xac) != 0)) {
    iVar7 = fn_82F4DE10();
    if (((iVar7 == 0) || (cVar6 == '\0')) && (*(int *)(param_1 + 0xac) != 0)) {
      fn_82672C20(*(undefined4 *)(param_1 + 0xa0),0xffffffff821bf074,0,0);
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  else {
    fn_82672C20(*(undefined4 *)(param_1 + 0xa0),0xffffffff821bf064,0,0);
    *(undefined4 *)(param_1 + 0xac) = 1;
  }
  if ((*(int *)(param_1 + 8) == 2) || (*(int *)(param_1 + 8) == 1)) {
    iVar7 = fn_8249D748(*(undefined4 *)(param_1 + 0x110));
    if (iVar7 == 0) {
      fn_8249B9D0(param_1,3);
    }
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  if ((*(uint *)(param_1 + 0x50) & 8) != 0) {
    iVar7 = *(int *)(param_1 + 0x110);
    iVar10 = fn_8249D878(0);
    iVar9 = *(int *)(iVar7 + 0x14);
    if (*(int *)(iVar7 + 0x10) != iVar9) {
      iVar10 = *(int *)(iVar9 + -8);
    }
    if ((iVar10 == 0) && (*(int *)(param_1 + 0xb0) != 0)) {
      puVar11 = (undefined4 *)fn_8249CB58(param_1 + 0x34,auStack_60);
      (**(code **)(*(int *)*puVar11 + 0xc))((int *)*puVar11,*(undefined4 *)(param_1 + 0xb0));
    }
  }
  uVar17 = 0;
  if (lbl_8326B4D8 == 0) {
    piVar13 = &lbl_8326B4C8;
    lVar20 = 4;
    do {
      iVar7 = *piVar13;
      if (iVar7 != 0) {
        uVar17 = *(uint *)(*(int *)(iVar7 + 0x34) * 0x28 + iVar7 + 0x38) & 0x8000 | uVar17;
      }
      piVar13 = piVar13 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    if (uVar17 != 0) {
      fn_829C79C8();
      goto LAB_8249b1f4;
    }
  }
  fn_82A1E928(0xff,0xc,auStack_60);
LAB_8249b1f4:
  fn_8249C5E8(param_1);
  fn_8249C720(param_1);
  return;
}

