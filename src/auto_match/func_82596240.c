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
extern int fn_82520218();
extern int fn_82522ED8();
extern int fn_82530948();
extern int fn_82531118();
extern int fn_825315E0();
extern int fn_8254B590();
extern int fn_8254C1A0();
extern int fn_8254C3A8();
extern int fn_825602B8();
extern int fn_8257ECD0();
extern int fn_825F2A38();
extern int fn_825F98C8();
extern int fn_82A1DD38();
extern int fn_82A1EFC0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831BF284;
extern unsigned int lbl_831C01B8;
extern unsigned int lbl_8320A898;
extern int (*lbl_83265A04)();
extern unsigned int lbl_8326B900;
extern float lbl_8327F894;
extern unsigned int lbl_83280B98;
extern unsigned int lbl_8328114C;
extern unsigned int lbl_83296960;
extern unsigned int lbl_83296AE0;
extern unsigned int lbl_83296BAC;
extern unsigned int lbl_83296BB0;
extern unsigned int lbl_83296BB4;
extern unsigned int lbl_83296BB8;
extern unsigned int lbl_83296BBC;
extern V16 loadVectorLeftIndexed128();


void fn_82596240(longlong param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  double dVar12;
  double dVar13;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x1e4) != 0) {
    loadVectorLeftIndexed128(param_1 + 0x1b0,0x30);
    iVar6 = (int)(param_1 + 0x1b0);
    pfVar2 = (float *)(iVar6 + 0x10U & 0xfffffff0);
    fVar14 = pfVar2[1];
    fVar15 = pfVar2[2];
    fVar16 = pfVar2[3];
    pfVar3 = (float *)(iVar6 + 0x20U & 0xfffffff0);
    *pfVar3 = *pfVar2 * in_register_00010000;
    pfVar3[1] = fVar14 * in_ACC;
    pfVar3[2] = fVar15 * in_register_00010008;
    pfVar3[3] = fVar16 * in_vr0;
  }
  iVar6 = *(int *)(*(int *)(iVar1 + 0x88c) * 0xc + iVar1 + 0x860);
  if ((iVar6 != 0) && (*(int *)(iVar1 + 0x5c) == 0)) {
    piVar11 = *(int **)(iVar6 + 8);
    for (piVar10 = *(int **)(iVar6 + 4); piVar10 < piVar11; piVar10 = piVar10 + 7) {
      (*(code *)(&lbl_831BF284)[*piVar10 * 2])(param_1,piVar10);
    }
  }
  fn_8257ECD0(param_1 + 0x7a4);
  dVar13 = (double)lbl_821CC160;
  piVar10 = *(int **)(iVar1 + 0x304);
  dVar12 = dVar13;
  if ((double)*(float *)(iVar1 + 0x838) <= dVar13) {
    dVar12 = (double)(*(float *)(iVar1 + 0x820) * lbl_8327F894);
  }
  while (piVar11 = piVar10, piVar11 != (int *)0x0) {
    piVar10 = (int *)piVar11[1];
    if (((double)(float)piVar11[8] != dVar13) &&
       (fVar14 = (float)((double)(float)piVar11[8] - dVar12), piVar11[8] = (int)fVar14,
       (double)fVar14 < dVar13)) {
      if (*piVar11 != 0) {
        *(int **)(*piVar11 + 4) = piVar10;
      }
      if ((int *)piVar11[1] != (int *)0x0) {
        *(int *)piVar11[1] = *piVar11;
      }
      *piVar11 = 0;
      piVar11[1] = 0;
      fn_82522ED8();
    }
  }
  lVar9 = -0x7cd7f460;
  lVar7 = 0;
  puVar8 = &lbl_83280B98;
  do {
    iVar6 = fn_825602B8(lVar7);
    uVar4 = lbl_8320A898;
    if (iVar6 == 0) {
      fn_82A1EFC0(lVar9,0,0xa8);
    }
    else {
      lbl_83296AE0 = (undefined *)*puVar8;
      if (lbl_83296AE0 == (undefined *)0x0) {
        lbl_83296AE0 = &lbl_83296960;
      }
      else {
        lbl_83296BAC = 0;
        lbl_83296BB0 = 1;
        lbl_83296BB4 = 1;
        lbl_83296BB8 = 1;
        lbl_83296BBC = 1;
      }
      fn_82530948(lbl_8320A898);
      fn_825315E0(uVar4);
      fn_82531118();
      fn_82A1DD38(lVar9,0xffffffff83296ae4,0xa8);
    }
    puVar8 = puVar8 + 1;
    lVar7 = lVar7 + 1;
    lVar9 = lVar9 + 0xa8;
  } while ((int)puVar8 < -0x7cd7f460);
  if (lbl_83265A04 != (code *)0x0) {
    (*lbl_83265A04)(param_1);
  }
  fn_8257ECD0(param_1 + 0x7a4);
  fn_82520218();
  iVar6 = lbl_831C01B8;
  *(undefined4 *)(iVar1 + 0xd1c) = 1;
  if (iVar6 != 0) {
    *(undefined4 *)(iVar1 + 0xd1c) = *(undefined4 *)(iVar1 + 0xd20);
  }
  dVar12 = dVar13;
  if ((double)*(float *)(iVar1 + 0x838) <= dVar13) {
    dVar12 = (double)(*(float *)(iVar1 + 0x820) * lbl_8327F894);
  }
  if (*(int *)(iVar1 + 0x92c) != 0) {
    fn_825F98C8(dVar12);
  }
  for (iVar6 = *(int *)(iVar1 + 0x9b0); iVar5 = lbl_8326B900, iVar6 != 0;
      iVar6 = *(int *)(iVar6 + 0x24)) {
    fn_825F2A38(iVar6);
  }
  if (*(int *)(iVar1 + 0x8d0) != 0) {
    piVar10 = (int *)(*(int *)(*(ushort **)(iVar1 + 0x8cc) + 4) - (uint)**(ushort **)(iVar1 + 0x8cc)
                     );
    if ((lbl_8328114C == 0) || (*(char *)(piVar10 + 0xc) != '\0')) {
      for (iVar6 = *piVar10; iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
        (**(code **)(iVar6 + 0x180))(iVar6);
      }
    }
    else {
      for (iVar6 = *piVar10; iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
        (**(code **)(iVar6 + 0x17c))(iVar6);
      }
    }
    piVar10[10] = iVar5;
    for (piVar11 = *(int **)(*(int *)(iVar1 + 0x8cc) + 4); piVar11 < piVar10;
        piVar11 = piVar11 + 0xd) {
      for (iVar6 = *piVar11; iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
        (**(code **)(iVar6 + 0x17c))(iVar6);
      }
      piVar11[10] = iVar5;
    }
  }
  iVar6 = *(int *)(iVar1 + 0x8c8);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 4) != 0)) {
    if ((double)*(float *)(iVar1 + 0x838) <= dVar13) {
      dVar13 = (double)(*(float *)(iVar1 + 0x820) * lbl_8327F894);
    }
    fn_8254B590(dVar13,iVar6);
    fn_8254C1A0(iVar6);
    fn_8254C3A8(dVar13,iVar6);
  }
  return;
}

