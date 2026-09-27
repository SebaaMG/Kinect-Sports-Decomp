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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82CE5458();
extern int fn_82CEAC20();
extern int fn_82D41968();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_82193CC0;
extern float lbl_8219570C;
extern unsigned int lbl_82195860;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8323BB14;
extern unsigned int lbl_8323BCE4;
extern unsigned int *lbl_8323FD9C;


void fn_825A46E0(undefined8 param_1,int *param_2)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  char *pcVar19;
  char *pcVar20;
  int iVar21;
  undefined *puVar22;
  char cVar23;
  char cVar25;
  int iVar24;
  undefined1 uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  bool bVar31;
  bool bVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  longlong alStack_80 [2];
  int *piVar8;
  
  iVar17 = fn_82F6A548();
  piVar15 = lbl_8323FD9C;
  piVar18 = (int *)*param_2;
  piVar6 = (int *)piVar18[3];
  piVar5 = piVar18;
  while (piVar7 = piVar6, piVar7 != (int *)0x0) {
    piVar5 = piVar7;
    piVar6 = (int *)piVar7[3];
  }
  cVar3 = *(char *)(piVar5 + 4);
  piVar6 = (int *)param_2[1];
  piVar16 = (int *)piVar6[3];
  piVar7 = piVar6;
  while (piVar8 = piVar16, piVar8 != (int *)0x0) {
    piVar7 = piVar8;
    piVar16 = (int *)piVar8[3];
  }
  cVar4 = *(char *)(piVar7 + 4);
  dVar36 = (double)*(float *)((int)piVar5 + cVar3 + 0x90);
  dVar34 = (double)*(float *)((int)piVar5 + cVar3 + 0x94);
  uVar29 = 0;
  uVar30 = 0;
  uVar28 = 0;
  uVar27 = 0;
  dVar38 = (double)*(float *)((int)piVar7 + cVar4 + 0x90);
  dVar35 = (double)*(float *)((int)piVar7 + cVar4 + 0x94);
  if (*(int *)(*piVar18 + 0xc) == 3) {
    piVar18 = (int *)(**(code **)(*lbl_8323FD9C + 0x14))(lbl_8323FD9C);
    (**(code **)(*piVar18 + 0x10))(piVar18,**(undefined4 **)(*param_2 + 0xc));
    pcVar19 = (char *)fn_82CEAC20();
    cVar23 = 'h';
    cVar25 = *pcVar19;
    if (cVar25 == 'h') {
      cVar25 = 'h';
      pcVar20 = pcVar19;
      do {
        pcVar20 = pcVar20 + 1;
        if (cVar25 == '\0') goto LAB_825a4808;
        cVar23 = "hkpExtendedMeshShape"[(int)pcVar20 - (int)pcVar19];
        cVar25 = *pcVar20;
      } while (cVar25 == cVar23);
    }
    if (cVar25 == cVar23) {
LAB_825a4808:
      iVar21 = **(int **)(*param_2 + 0xc);
      piVar18 = (int *)(**(code **)(*piVar15 + 0x14))(piVar15);
      (**(code **)(*piVar18 + 0x10))(piVar18,*(undefined4 *)(iVar21 + 0x34));
      pcVar19 = (char *)fn_82CEAC20();
      cVar25 = *pcVar19;
      cVar23 = 'h';
      if (cVar25 == 'h') {
        cVar25 = 'h';
        pcVar20 = pcVar19;
        do {
          pcVar20 = pcVar20 + 1;
          if (cVar25 == '\0') goto LAB_825a4880;
          cVar23 = "hkpExtendedMeshShape"[(int)pcVar20 - (int)pcVar19];
          cVar25 = *pcVar20;
        } while (cVar25 == cVar23);
      }
      if (cVar25 == cVar23) {
LAB_825a4880:
        iVar21 = fn_82D41968(*(undefined4 *)(iVar21 + 0x34),*(undefined4 *)(*param_2 + 4));
        uVar29 = (uint)*(byte *)(iVar21 + 4);
        uVar28 = *(uint *)(iVar21 + 8);
      }
    }
    iVar17 = uVar29 * 8 + iVar17;
    dVar36 = (double)*(float *)(iVar17 + 4);
    dVar34 = (double)*(float *)(iVar17 + 8);
  }
  else if (*(int *)(*piVar6 + 0xc) == 3) {
    piVar18 = (int *)(**(code **)(*lbl_8323FD9C + 0x14))(lbl_8323FD9C);
    puVar22 = (undefined *)
              (**(code **)(*piVar18 + 0x10))(piVar18,**(undefined4 **)(param_2[1] + 0xc));
    if (puVar22 == &lbl_8323BCE4) {
      iVar21 = **(int **)(param_2[1] + 0xc);
      piVar18 = (int *)(**(code **)(*piVar15 + 0x14))(piVar15);
      puVar22 = (undefined *)(**(code **)(*piVar18 + 0x10))(piVar18,*(undefined4 *)(iVar21 + 0x34));
      if (puVar22 == &lbl_8323BB14) {
        iVar21 = fn_82D41968(*(undefined4 *)(iVar21 + 0x34),*(undefined4 *)(param_2[1] + 4));
        uVar30 = (uint)*(byte *)(iVar21 + 4);
        uVar27 = *(uint *)(iVar21 + 8);
      }
    }
    iVar17 = uVar30 * 8 + iVar17;
    dVar38 = (double)*(float *)(iVar17 + 4);
    dVar35 = (double)*(float *)(iVar17 + 8);
  }
  dVar33 = (double)lbl_821CC160;
  bVar31 = dVar34 == dVar33;
  bVar32 = dVar35 == dVar33;
  if ((uVar28 & 0x1000000) != 0) {
    iVar17 = *(int *)((int)piVar7 + cVar4 + 0x7c);
    iVar21 = 0;
    if (0 < iVar17) {
      iVar24 = 0;
      do {
        if (*(int *)(*(int *)((int)piVar7 + cVar4 + 0x78) + iVar24) == 0x200a) {
          bVar9 = true;
          goto LAB_825a4a0c;
        }
        iVar21 = iVar21 + 1;
        iVar24 = iVar24 + 0x10;
      } while (iVar21 < iVar17);
    }
    bVar9 = false;
LAB_825a4a0c:
    if (bVar9) goto LAB_825a4a24;
LAB_825a4a14:
    param_2[8] = 1;
    goto LAB_825a4bc0;
  }
LAB_825a4a24:
  if ((uVar27 & 0x1000000) != 0) {
    iVar17 = *(int *)((int)piVar5 + cVar3 + 0x7c);
    iVar21 = 0;
    if (0 < iVar17) {
      iVar24 = 0;
      do {
        if (*(int *)(*(int *)((int)piVar5 + cVar3 + 0x78) + iVar24) == 0x200a) {
          bVar9 = true;
          goto LAB_825a4a64;
        }
        iVar21 = iVar21 + 1;
        iVar24 = iVar24 + 0x10;
      } while (iVar21 < iVar17);
    }
    bVar9 = false;
LAB_825a4a64:
    if (!bVar9) goto LAB_825a4a14;
  }
  bVar9 = (uVar28 & 0x2000000) != 0;
  bVar11 = (uVar28 & 0xffff800) != 0;
  bVar12 = (uVar28 & 0x8000800) != 0;
  bVar13 = bVar11 || bVar12;
  dVar37 = dVar36;
  if (bVar13) {
    dVar37 = (double)lbl_82193CC0;
  }
  bVar14 = (uVar27 & 0xffff800) != 0 || (uVar27 & 0x8000800) != 0;
  dVar39 = dVar38;
  if (bVar14) {
    dVar39 = (double)lbl_82193CC0;
  }
  bVar14 = bVar14 || ((uVar27 & 0x2000000) != 0 || dVar38 == dVar33);
  bVar10 = (uVar28 & 0x800000) != 0;
  bVar1 = (uVar27 & 0x800000) != 0;
  if ((bVar11 || bVar12) || (bVar9 || dVar36 == dVar33)) {
    if (bVar14) {
LAB_825a4afc:
      if (bVar13 || (bVar9 || dVar36 == dVar33)) goto LAB_825a4b10;
      fVar2 = (float)(dVar39 + (double)lbl_8218EC10);
    }
    else {
      fVar2 = (float)(dVar37 + (double)lbl_8218EC10);
    }
  }
  else {
    if (bVar14) goto LAB_825a4afc;
LAB_825a4b10:
    fVar2 = SQRT((float)(dVar39 * dVar37));
  }
  alStack_80[0] = CONCAT44(fVar2,((uint)(alStack_80[0])));
  fn_82CE5458((ulonglong)(uint)param_2[6] + 0xc,alStack_80);
  if (bVar10 || bVar31) {
    if (bVar1 || bVar32) {
LAB_825a4b68:
      if (bVar10 || bVar31) goto LAB_825a4b94;
      iVar17 = (int)(dVar35 * (double)lbl_8219570C + (double)lbl_82195860);
      alStack_80[0] = (longlong)iVar17;
      uVar26 = (undefined1)iVar17;
    }
    else {
      iVar17 = (int)(dVar34 * (double)lbl_8219570C + (double)lbl_82195860);
      alStack_80[0] = (longlong)iVar17;
      uVar26 = (undefined1)iVar17;
    }
  }
  else {
    if (bVar1 || bVar32) goto LAB_825a4b68;
LAB_825a4b94:
    iVar17 = (int)(SQRT((float)(dVar35 * dVar34)) * lbl_8219570C);
    alStack_80[0] = (longlong)iVar17;
    uVar26 = (undefined1)iVar17;
  }
  *(undefined1 *)(param_2[6] + 0xd) = uVar26;
LAB_825a4bc0:
  fn_82F6A594();
  return;
}

