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
extern int fn_822B7480();
extern int fn_822B8030();
extern int fn_822C67A0();
extern int fn_822C8D28();
extern int fn_8234B238();
extern int fn_8234B338();
extern int fn_8234B968();
extern int fn_8234D950();
extern int fn_8234EDA8();
extern int fn_82535F50();
extern int fn_825529B0();
extern int fn_8255F788();
extern int fn_8255FA88();
extern int fn_827EF828();
extern int fn_827F4968();
extern int fn_827F5730();
extern int fn_827F58E8();
extern int fn_8288B760();
extern int fn_82F63108();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_822B6198(double param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  char cVar6;
  int iVar4;
  uint uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0x14) == 0) || (cVar6 = fn_8288B760(), cVar6 != '\0')) {
      uVar5 = *(uint *)(iVar1 + 0xd4);
    }
    else {
      iVar4 = (**(code **)(**(int **)(iVar1 + 0x14) + 4))();
      uVar5 = (**(code **)(*(int *)(iVar4 + 0x7d4) + 0x3c))();
      uVar5 = uVar5 & 0xff;
    }
    if (uVar5 != 0) {
      uVar10 = *(undefined4 *)(iVar1 + 0x20);
      goto LAB_822b6220;
    }
  }
  uVar10 = 0;
LAB_822b6220:
  (**(code **)(**(int **)(param_2 + 0x110) + 4))(param_1);
  iVar1 = *(int *)(param_2 + 0x114);
  fn_822C8D28(iVar1);
  iVar12 = iVar1 + 0x50;
  piVar2 = *(int **)(iVar1 + 0x20);
  (**(code **)(*piVar2 + 0xc))(param_1,piVar2,iVar12);
  iVar4 = piVar2[9];
  iVar9 = iVar4 + 0x30;
  iVar7 = iVar4 + 0x20;
  puVar11 = (undefined4 *)((int)in_r0 + iVar7 & 0xfffffff0);
  uVar15 = *puVar11;
  uVar16 = puVar11[1];
  uVar17 = puVar11[2];
  uVar18 = puVar11[3];
  fn_822C67A0((double)*(float *)(iVar4 + 0x4c),param_1);
  puVar11 = (undefined4 *)((int)in_r0 + iVar7 & 0xfffffff0);
  *puVar11 = uVar15;
  puVar11[1] = uVar16;
  puVar11[2] = uVar17;
  puVar11[3] = uVar18;
  iVar8 = iVar4 + 0x10;
  puVar11 = (undefined4 *)((int)in_r0 + iVar4 & 0xfffffff0);
  uVar15 = *puVar11;
  uVar16 = puVar11[1];
  uVar17 = puVar11[2];
  uVar18 = puVar11[3];
  fn_822C67A0((double)*(float *)(iVar4 + 0x44));
  iVar7 = (int)in_r0;
  puVar11 = (undefined4 *)(iVar7 + iVar9 & 0xfffffff0);
  *puVar11 = in_register_000104d0;
  puVar11[1] = in_register_000104d4;
  puVar11[2] = in_register_000104d8;
  puVar11[3] = in_vr77;
  puVar11 = (undefined4 *)(iVar7 + iVar4 & 0xfffffff0);
  *puVar11 = uVar15;
  puVar11[1] = uVar16;
  puVar11[2] = uVar17;
  puVar11[3] = uVar18;
  puVar11 = (undefined4 *)(iVar7 + iVar8 & 0xfffffff0);
  *puVar11 = in_register_000104d0;
  puVar11[1] = in_register_000104d4;
  puVar11[2] = in_register_000104d8;
  puVar11[3] = in_vr77;
  (**(code **)(*piVar2 + 0x10))(param_1,piVar2);
  iVar4 = (int)in_r0;
  puVar3 = (undefined4 *)piVar2[0xd];
  for (puVar11 = (undefined4 *)piVar2[0xc]; puVar11 != puVar3; puVar11 = puVar11 + 2) {
    (**(code **)(*(int *)*puVar11 + 4))(param_1,(int *)*puVar11,piVar2,iVar12);
    iVar4 = (int)in_r0;
  }
  puVar11 = (undefined4 *)(iVar4 + iVar12 & 0xfffffff0);
  *puVar11 = in_register_000104d0;
  puVar11[1] = in_register_000104d4;
  puVar11[2] = in_register_000104d8;
  puVar11[3] = in_vr77;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  puVar11 = (undefined4 *)(iVar1 + 0x60U & 0xfffffff0);
  *puVar11 = in_register_000104d0;
  puVar11[1] = in_register_000104d4;
  puVar11[2] = in_register_000104d8;
  puVar11[3] = in_vr77;
  iVar1 = *(int *)(param_2 + 0x118);
  fn_8234EDA8(iVar1 + 0x28,uVar10);
  fn_8234D950(param_1,iVar1 + 0x70);
  fn_8234B968(iVar1 + 0x150);
  if (*(int *)(iVar1 + 0x2e0) != 0) {
    fn_8234B238(param_1,iVar1 + 0x2c0);
    fn_8234B338();
  }
  dVar14 = (double)lbl_821CC160;
  if ((*(int *)(*(int *)(iVar1 + 0x32c) + 0x114) != 0) && (iVar4 = fn_8255FA88(), iVar4 != 0))
  {
    dVar13 = (double)fn_827F4968(*(undefined4 *)(iVar1 + 0x334));
    if (dVar13 == dVar14) {
      cVar6 = fn_827F58E8();
      if (cVar6 != '\0') {
        fn_8255F788(dVar14,*(undefined4 *)(iVar1 + 0x32c));
      }
    }
    else {
      fn_827F5730(dVar14,(double)*(float *)(iVar1 + 0x33c),*(undefined4 *)(iVar1 + 0x334));
    }
  }
  fn_827EF828(param_1,*(undefined4 *)(iVar1 + 4));
  fn_822B8030(iVar1);
  (**(code **)(**(int **)(param_2 + 0x110) + 8))(param_1);
  if (*(int *)(param_2 + 0x150) != 0) {
    if (*(int *)(param_2 + 0x150) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(code **)(**(int **)(param_2 + 0x150) + 4))(param_1);
  }
  fn_822B7480(param_2);
  iVar1 = *(int *)(param_2 + 0x18);
  dVar13 = (double)(float)((double)*(float *)(iVar1 + 0xc) - param_1);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar13 < dVar14) << 2) | (uint)(NAN(dVar13) || NAN(dVar14)) << 2)) <
      0.0) {
    dVar13 = dVar14;
  }
  *(float *)(iVar1 + 0xc) = (float)dVar13;
  iVar4 = fn_825529B0((undefined4 *)(iVar1 + 0x10));
  if (iVar4 != 0) {
    fn_82535F50(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x34));
  }
  return;
}

