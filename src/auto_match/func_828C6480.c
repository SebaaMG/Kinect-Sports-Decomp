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
extern int fn_82230040();
extern int fn_82381BC0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82883118();
extern int fn_828A1C98();
extern int fn_828A24F8();
extern int fn_828C5120();
extern int fn_828C5200();
extern int fn_828C5CC0();
extern int fn_828C62E0();
extern int fn_828EA790();
extern int fn_82F622E0();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int iStack_90;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_820260B8;
extern unsigned int lbl_820260C8;
extern unsigned int uRam83214379;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_8c;


void fn_828C6480(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 **ppuVar15;
  ulonglong uVar13;
  longlong lVar14;
  int iVar17;
  ulonglong uVar16;
  bool bVar18;
  int iStack_90;
  uint uStack_8c;
  undefined4 *apuStack_88 [2];
  int iStack_80;
  int iStack_7c;
  undefined **ppuStack_78;
  undefined4 uStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  
  *(undefined4 *)(param_1 + 4) = 0;
  iVar10 = param_1 + 0xc;
  fn_828A24F8(iVar10,*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
  *(int *)(*(int *)(param_1 + 0x10) + 4) = *(int *)(param_1 + 0x10);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(*(int *)(param_1 + 0x10) + 8) = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar3 = *(undefined4 **)(param_1 + 8);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  iStack_90 = **(int **)(param_2 + 4);
  if ((int *)iStack_90 != *(int **)(param_2 + 4)) {
    do {
      iVar9 = iStack_90;
      puVar3 = (undefined4 *)fn_8265C9E0(0x10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        ppuVar15 = (undefined4 **)(iVar9 + 0x10);
        apuStack_88[0] = (undefined4 *)0x1;
        if (*(int *)(iVar9 + 0x10) == 0) {
          ppuVar15 = apuStack_88;
        }
        puVar4 = *ppuVar15;
        uVar1 = *(undefined4 *)(iVar9 + 0xc);
        puVar3[1] = 0;
        *puVar3 = &lbl_820260B8;
        puVar3[2] = puVar4;
        puVar3[3] = uVar1;
      }
      puVar4 = (undefined4 *)fn_82883118(iVar10,iVar9 + 0xc);
      *puVar4 = puVar3;
      fn_82381BC0(&iStack_90);
    } while (iStack_90 != *(int *)(param_2 + 4));
  }
  if (param_3 != '\0') {
    puVar3 = (undefined4 *)0x0;
    while( true ) {
      apuStack_88[0] = puVar3;
      fn_828A1C98(&iStack_80,iVar10,apuStack_88);
      iVar9 = iStack_7c;
      iVar17 = 0;
      iStack_90 = iStack_80;
      if (iStack_80 == iStack_7c) break;
      do {
        iVar17 = iVar17 + 1;
        fn_828EA790(&iStack_90);
      } while (iStack_90 != iVar9);
      if (iVar17 == 0) break;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    puVar4 = (undefined4 *)fn_8265C9E0(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[3] = puVar3;
      *puVar4 = &lbl_820260B8;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
    apuStack_88[0] = puVar3;
    puVar5 = (undefined4 *)fn_82883118(iVar10,apuStack_88);
    *puVar5 = puVar4;
    apuStack_88[0] = puVar3;
    puVar3 = (undefined4 *)fn_82883118(iVar10,apuStack_88);
    *(undefined4 *)(param_1 + 4) = *puVar3;
  }
  piStack_70 = (int *)0x0;
  piVar6 = (int *)fn_8265C9E0(8);
  if (piVar6 == (int *)0x0) {
    uStack_74 = 0;
    ppuStack_78 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_78);
  }
  iStack_80 = 0;
  iStack_7c = 0;
  piVar6[0] = 0;
  piVar6[1] = 0;
  *piVar6 = (int)&piStack_70;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  piStack_70 = piVar6;
  fn_828C5CC0(&piStack_70,*(undefined4 *)(param_1 + 0x14));
  uVar16 = 0;
  iStack_90 = **(int **)(param_1 + 0x10);
  uVar7 = uStack_8c;
  uVar8 = uStack_64;
  if ((int *)iStack_90 != *(int **)(param_1 + 0x10)) {
    do {
      if ((ulonglong)uStack_60 <= (uVar16 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ad08c);
      }
      piVar6 = (int *)0x0;
      if ((piStack_70 != (int *)0x0) && ((undefined4 *)*piStack_70 != (undefined4 *)0x0)) {
        piVar6 = *(int **)*piStack_70;
      }
      uVar12 = uStack_64 + uVar16;
      if (((piVar6 == (int *)0x0) || ((int *)*piVar6 == (int *)0x0)) ||
         (piVar6 = *(int **)*piVar6, piVar6 == (int *)0x0)) {
        iVar10 = 0;
      }
      else {
        iVar10 = *piVar6;
      }
      uVar13 = (uVar12 & 0xffffffff) >> 2;
      if (*(uint *)(iVar10 + 8) <= uVar13) {
        uVar13 = uVar13 - *(uint *)(iVar10 + 8);
      }
      uVar16 = uVar16 + 1;
      *(undefined4 *)
       (*(int *)((int)((uVar13 & 0xffffffff) << 2) + *(int *)(iVar10 + 4)) +
       (int)((uVar12 & 3) << 2)) = *(undefined4 *)(iStack_90 + 0x10);
      fn_828EA790(&iStack_90);
      uVar7 = uStack_8c;
      uVar8 = uStack_64;
    } while (iStack_90 != *(int *)(param_1 + 0x10));
  }
  do {
    uStack_8c = uVar8;
    uStack_64 = uStack_8c;
    if ((ulonglong)uStack_60 < 2) {
      iVar10 = 0;
      if (piStack_70 != (int *)0x0) {
        iVar10 = *piStack_70;
      }
      uVar8 = uStack_8c >> 2;
      if (*(uint *)(iVar10 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar10 + 8);
      }
      *(undefined4 *)(param_1 + 8) =
           *(undefined4 *)(*(int *)(*(int *)(iVar10 + 4) + uVar8 * 4) + (uStack_8c & 3) * 4);
      uStack_8c = uVar7;
      fn_828C5200(&piStack_70);
      fn_8265CA20(piStack_70);
      return;
    }
    lVar14 = (ulonglong)uStack_60 + (ulonglong)uStack_8c;
    if (((piStack_70 == (int *)0x0) || ((int *)*piStack_70 == (int *)0x0)) ||
       (piVar6 = *(int **)*piStack_70, piVar6 == (int *)0x0)) {
      iStack_80 = 0;
    }
    else {
      iStack_80 = *piVar6;
    }
    iStack_7c = (int)lVar14;
    if (((piStack_70 == (int *)0x0) || ((undefined4 *)*piStack_70 == (undefined4 *)0x0)) ||
       (iStack_90 = *(undefined4 *)*piStack_70, (int *)iStack_90 == (int *)0x0)) {
      iStack_90 = 0;
    }
    else {
      iStack_90 = *(int *)iStack_90;
    }
    fn_828C62E0(CONCAT44(iStack_90,uStack_8c),CONCAT44(iStack_80,iStack_7c),
                  lVar14 - (ulonglong)uStack_8c,uRam83214379);
    iVar10 = 0;
    if (piStack_70 != (int *)0x0) {
      iVar10 = *piStack_70;
    }
    uVar16 = (ulonglong)uStack_64;
    uVar7 = uStack_64 >> 2;
    if (*(uint *)(iVar10 + 8) <= uVar7) {
      uVar7 = uVar7 - *(uint *)(iVar10 + 8);
    }
    uVar12 = (ulonglong)uStack_68;
    piVar6 = *(int **)(*(int *)(*(int *)(iVar10 + 4) + uVar7 * 4) + (uStack_64 & 3) * 4);
    if (uStack_60 != 0) {
      uStack_60 = uStack_60 - 1;
      uVar16 = -(ulonglong)(uStack_60 != 0) &
               -(ulonglong)(uVar16 + 1 < ((ulonglong)uStack_68 & 0x3fffffff) << 2) & uVar16 + 1;
      uStack_64 = (uint)uVar16;
    }
    iVar10 = 0;
    if (piStack_70 != (int *)0x0) {
      iVar10 = *piStack_70;
    }
    uVar13 = (uVar16 & 0xffffffff) >> 2;
    if (*(uint *)(iVar10 + 8) <= uVar13) {
      uVar13 = uVar13 - *(uint *)(iVar10 + 8);
    }
    lVar11 = (uVar13 & 0x3fffffff) << 2;
    lVar14 = (uVar16 & 3) << 2;
    iVar10 = *(int *)(*(int *)(iVar10 + 4) + (int)lVar11);
    piVar2 = *(int **)(iVar10 + (int)lVar14);
    if (uStack_60 != 0) {
      uVar16 = uVar16 + 1;
      uStack_60 = uStack_60 - 1;
      lVar11 = uVar16 + ((ulonglong)uStack_68 & 0x3fffffff) * -4;
      uVar12 = -(ulonglong)(uVar16 < ((ulonglong)uStack_68 & 0x3fffffff) * 4);
      iVar10 = -uStack_60;
      uStack_64 = -(uint)(uStack_60 != 0) & (uint)uVar12 & (uint)uVar16;
    }
    uVar7 = (**(code **)(*piVar2 + 0xc))(piVar2,iVar10,uVar12,lVar14,lVar11);
    uVar8 = (**(code **)(*piVar6 + 0xc))(piVar6);
    if (uVar7 < uVar8) {
      bVar18 = true;
    }
    else {
      iVar10 = (**(code **)(*piVar2 + 0xc))(piVar2);
      iVar9 = (**(code **)(*piVar6 + 0xc))(piVar6);
      if (iVar9 == iVar10) {
        bVar18 = (uint)piVar6[2] < (uint)piVar2[2];
      }
      else {
        bVar18 = false;
      }
    }
    if (bVar18) {
      puVar3 = (undefined4 *)fn_8265C9E0(0x18);
      if (puVar3 == (undefined4 *)0x0) {
LAB_828c6a54:
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar10 = piVar6[2];
        iVar9 = piVar2[2];
        *puVar3 = &lbl_820260C8;
        puVar3[1] = 0;
        puVar3[2] = iVar10 + iVar9;
        iVar10 = (**(code **)(*piVar6 + 0xc))(piVar6);
        puVar3[4] = piVar2;
        puVar3[5] = piVar6;
        puVar3[3] = iVar10 + 1;
        piVar2[1] = (int)puVar3;
        piVar6[1] = (int)puVar3;
      }
    }
    else {
      puVar3 = (undefined4 *)fn_8265C9E0(0x18);
      if (puVar3 == (undefined4 *)0x0) goto LAB_828c6a54;
      iVar10 = piVar6[2];
      iVar9 = piVar2[2];
      puVar3[1] = 0;
      *puVar3 = &lbl_820260C8;
      puVar3[2] = iVar10 + iVar9;
      iVar10 = (**(code **)(*piVar2 + 0xc))(piVar2);
      puVar3[4] = piVar6;
      puVar3[5] = piVar2;
      puVar3[3] = iVar10 + 1;
      piVar6[1] = (int)puVar3;
      piVar2[1] = (int)puVar3;
    }
    apuStack_88[0] = puVar3;
    fn_828C5120(&piStack_70,apuStack_88);
    uVar7 = uStack_8c;
    uVar8 = uStack_64;
  } while( true );
}

