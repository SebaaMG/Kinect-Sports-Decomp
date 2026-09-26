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
#define TBLr 0
extern int fn_82BA02A8();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA480();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DA8F88();
extern int fn_83089E78();
extern unsigned int iStack_98;
extern unsigned int iStack_a8;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_c0;


void fn_82DA9B48(int param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 uStack_c0;
  int *piStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  int iStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  int iStack_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtRecollide PSI";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0xffffffff;
  iVar4 = fn_82CE5410();
  fn_82CEAB00(&uStack_88,*(undefined4 *)(iVar4 + 0x10),0);
  iVar4 = param_3[2];
  iStack_a8 = 0;
  uVar14 = 0;
  uStack_a4 = 0;
  piStack_b8 = (int *)0x0;
  iVar9 = 0;
  uStack_b4 = 0;
  uStack_a0 = 0x80000000;
  uStack_b0 = 0x80000000;
  if (-1 < iVar4) {
    piVar8 = (int *)*param_3;
    do {
      if (*piVar8 != -1) break;
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 2;
    } while (iVar9 <= iVar4);
  }
  if (iVar9 <= iVar4) {
    dVar15 = (double)lbl_821AAD20;
    do {
      uVar11 = *(uint *)(iVar9 * 8 + *param_3 + 4);
      iStack_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0x80000000;
      fn_83089E78(uVar11 + 0x10,&iStack_98);
      uVar12 = (ulonglong)uStack_94;
      if (0 < (int)uStack_94) {
        iVar4 = 0;
        do {
          iVar7 = *(int *)(iVar4 + iStack_98);
          iVar5 = fn_82CEA280(&uStack_88,iVar7,0);
          if (iVar5 == 0) {
            iVar5 = *(char *)(iVar7 + 0xc) * 0x40 + *(int *)(*(int *)(param_1 + 0xc) + 0x80);
            if ((*(int *)(iVar5 + 0x1c30) == 0) ||
               ((*(char *)(iVar5 + 0x1c34) != '\0' && ((double)*(float *)(uVar11 + 0x14c) == dVar15)
                ))) {
              iVar5 = *(int *)(uVar11 + 0xcc);
              if (*(char *)(uVar11 + 0xe8) == '\x05') {
                iVar5 = *(int *)(((int)*(char *)(*(int *)(iVar7 + 0x10) + 0x10) +
                                  *(int *)(iVar7 + 0x10) ^
                                  (int)*(char *)(*(int *)(iVar7 + 0x14) + 0x10) +
                                  *(int *)(iVar7 + 0x14) ^ uVar11) + 0xcc);
              }
              iVar6 = fn_82CE5410();
              fn_82CEA160(&uStack_88,*(undefined4 *)(iVar6 + 0x10),iVar7,1);
              iVar6 = fn_82CE5410();
              if (uStack_a4 == (uStack_a0 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),&iStack_a8,8);
              }
              iVar6 = uStack_a4 * 8;
              uStack_a4 = uStack_a4 + 1;
              piVar8 = (int *)(iVar6 + iStack_a8);
              iVar6 = 0;
              *piVar8 = iVar7;
              piVar8[1] = iVar5;
              piVar8 = piStack_b8;
              if (0 < (int)uStack_b4) {
                do {
                  if (iVar5 == *piVar8) {
                    piVar8 = piStack_b8 + iVar6 * 6;
                    goto LAB_82da9e8c;
                  }
                  iVar6 = iVar6 + 1;
                  piVar8 = piVar8 + 6;
                } while (iVar6 < (int)uStack_b4);
              }
              iVar7 = fn_82CE5410();
              if (uStack_b4 == (uStack_b0 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),&piStack_b8,0x18);
              }
              piVar8 = piStack_b8 + uStack_b4 * 6;
              if (piVar8 != (int *)0x0) {
                *piVar8 = 0;
                piVar8[1] = 0;
                piVar8[2] = 0;
                piVar8[3] = 0;
                piVar8[4] = 0;
                piVar8[5] = 0;
              }
              uVar10 = uStack_b4 + 1;
              piVar8 = piStack_b8 + uStack_b4 * 6;
              if (piVar8 != (int *)0x0) {
                piVar8[2] = 0;
                piVar8[3] = 0;
                piVar8[4] = 0;
                piVar8[5] = 0;
                piVar8[1] = 0;
                *piVar8 = 0;
              }
              piStack_b8[uVar10 * 6 + -6] = iVar5;
              piVar8 = piStack_b8 + uVar10 * 6 + -6;
              uStack_b4 = uVar10;
LAB_82da9e8c:
              uVar14 = uVar14 + 1;
              piVar8[1] = piVar8[1] + 1;
            }
          }
          uVar12 = uVar12 - 1;
          iVar4 = iVar4 + 8;
        } while (uVar12 != 0);
      }
      fn_82CE4118(uVar11);
      iVar9 = iVar9 + 1;
      if (iVar9 <= param_3[2]) {
        piVar8 = (int *)(iVar9 * 8 + *param_3);
        do {
          if (*piVar8 != -1) break;
          iVar9 = iVar9 + 1;
          piVar8 = piVar8 + 2;
        } while (iVar9 <= param_3[2]);
      }
      iVar4 = fn_82CE5410();
      uStack_94 = 0;
      if ((uStack_90 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                  (*(int **)(iVar4 + 0x10),iStack_98,uStack_90 & 0x3fffffff,8);
      }
      iStack_98 = 0;
      uStack_90 = 0x80000000;
    } while (iVar9 <= param_3[2]);
  }
  fn_82CEA480(param_3);
  iVar9 = 0;
  iVar4 = 0;
  if (0 < (int)uStack_b4) {
    piVar8 = piStack_b8;
    iVar7 = 0;
    do {
      piVar8[2] = iVar9;
      iVar4 = iVar4 + 1;
      *(int *)((int)piStack_b8 + iVar7 + 0xc) = iVar9;
      piVar8 = (int *)(iVar7 + 0x18 + (int)piStack_b8);
      iVar9 = *(int *)((int)piStack_b8 + iVar7 + 4) + iVar9;
      iVar7 = iVar7 + 0x18;
    } while (iVar4 < (int)uStack_b4);
  }
  piVar8 = (int *)fn_82CE5410();
  iVar4 = *piVar8;
  iVar9 = 0;
  *piVar8 = ((int)((uVar14 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + iVar4;
  if (0 < (int)uStack_a4) {
    iVar7 = 0;
    do {
      uVar2 = *(undefined4 *)(iVar7 + iStack_a8);
      iVar6 = 0;
      iVar5 = *(int *)(iVar7 + iStack_a8 + 4);
      piVar8 = piStack_b8;
      if (0 < (int)uStack_b4) {
        do {
          if (iVar5 == *piVar8) {
            piVar8 = piStack_b8 + iVar6 * 6;
            goto LAB_82daa0dc;
          }
          iVar6 = iVar6 + 1;
          piVar8 = piVar8 + 6;
        } while (iVar6 < (int)uStack_b4);
      }
      iVar6 = fn_82CE5410();
      if (uStack_b4 == (uStack_b0 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),&piStack_b8,0x18);
      }
      piVar8 = piStack_b8 + uStack_b4 * 6;
      if (piVar8 != (int *)0x0) {
        piVar8[1] = 0;
        piVar8[2] = 0;
        piVar8[3] = 0;
        piVar8[5] = 0;
        piVar8[4] = 0;
        *piVar8 = 0;
      }
      uVar11 = uStack_b4 + 1;
      piVar8 = piStack_b8 + uStack_b4 * 6;
      if (piVar8 != (int *)0x0) {
        *piVar8 = 0;
        piVar8[1] = 0;
        piVar8[2] = 0;
        piVar8[3] = 0;
        piVar8[4] = 0;
        piVar8[5] = 0;
      }
      piStack_b8[uVar11 * 6 + -6] = iVar5;
      piVar8 = piStack_b8 + uVar11 * 6 + -6;
      uStack_b4 = uVar11;
LAB_82daa0dc:
      iVar5 = piVar8[3];
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 8;
      piVar8[3] = iVar5 + 1;
      *(undefined4 *)(iVar5 * 4 + iVar4) = uVar2;
    } while (iVar9 < (int)uStack_a4);
  }
  fn_82DA8F88(param_1,iVar4,uVar14,piStack_b8,uStack_b4,
                    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x78),uStack_c0);
  iVar9 = *(int *)(param_1 + 0xc);
  lVar13 = (ulonglong)*(uint *)(iVar9 + 0x94) - 1;
  *(int *)(iVar9 + 0x94) = (int)lVar13;
  if ((lVar13 == 0) && (*(char *)(iVar9 + 0x9c) == '\0')) {
    if (*(int *)(iVar9 + 0x8c) != 0) {
      fn_82D80C18(iVar9);
    }
    if ((*(int *)(iVar9 + 0xa4) == 1) && (*(int *)(iVar9 + 0x90) != 0)) {
      fn_82D80C30(iVar9);
    }
  }
  iVar9 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar9 + 4);
  if (puVar1 < *(undefined4 **)(iVar9 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar9 + 4) = puVar1 + 3;
  }
  piVar8 = (int *)fn_82CE5410();
  *piVar8 = iVar4;
  iVar4 = fn_82CE5410();
  uStack_b4 = 0;
  if ((uStack_b0 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),piStack_b8,uStack_b0 & 0x3fffffff,0x18);
  }
  piStack_b8 = (int *)0x0;
  uStack_b0 = 0x80000000;
  iVar4 = fn_82CE5410();
  uStack_a4 = 0;
  if ((uStack_a0 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_a8,uStack_a0 & 0x3fffffff,8);
  }
  iStack_a8 = 0;
  uStack_a0 = 0x80000000;
  iVar4 = fn_82CE5410();
  fn_82CEA4B8(&uStack_88,*(undefined4 *)(iVar4 + 0x10));
  fn_82BA02A8(&uStack_88);
  return;
}

