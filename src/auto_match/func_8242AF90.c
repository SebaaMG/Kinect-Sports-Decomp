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
extern unsigned int *auStack_280;
extern unsigned int *auStack_480;
extern unsigned int *auStack_680;
extern unsigned int *auStack_6a0;
extern unsigned int *auStack_6b0;
extern unsigned int *auStack_6c0;
extern unsigned int *auStack_6d0;
extern unsigned int *auStack_6e0;
extern unsigned int *auStack_710;
extern unsigned int *auStack_720;
extern unsigned int *auStack_730;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_82273C88();
extern int fn_822902E8();
extern int fn_82290458();
extern int fn_822ABA88();
extern int fn_82336C10();
extern int fn_82337020();
extern int fn_823400C8();
extern int fn_82358FD8();
extern int fn_82365BD8();
extern int fn_823B7660();
extern int fn_823F2E20();
extern int fn_8242D178();
extern int fn_8242D540();
extern int fn_8242D8F8();
extern int fn_8242DB38();
extern int fn_82439AD0();
extern int fn_82439F38();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern int fn_82672C20();
extern int fn_828EA608();
extern int fn_82F622E0();
extern int fn_82F68CC0();
extern unsigned int iStack_6ac;
extern unsigned int lbl_821B907C;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_832975B0;
extern unsigned int stack0x00000000;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8242AF90(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char cVar10;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined1 auStack_730 [16];
  undefined1 auStack_720 [16];
  undefined1 auStack_710 [16];
  int aiStack_700 [8];
  undefined1 auStack_6e0 [16];
  undefined1 auStack_6d0 [16];
  undefined1 auStack_6c0 [16];
  undefined1 auStack_6b0 [4];
  int iStack_6ac;
  undefined1 auStack_6a0 [32];
  undefined1 auStack_680 [512];
  undefined1 auStack_480 [512];
  undefined1 auStack_280 [640];
  
  fn_8242D8F8();
  piVar5 = (int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x5c) + 0x2a4);
  if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
    uVar12 = *(uint *)(*(int *)(param_1 + 0xd4) + 0x48);
    uVar3 = fn_8266EC60();
    uVar3 = fn_8266EE08(&stack0x00000000 + -0x6b0,uVar3,piVar5,0,1,0);
    fn_823F2E20((ulonglong)uVar12 + 0x28,uVar3);
    if (iStack_6ac != 0) {
      fn_822315A0();
    }
  }
  fn_82358FD8(param_1,&stack0x00000000 + -0x480,0x100,0xffffffff821b8cb8);
  fn_82358FD8(param_1,&stack0x00000000 + -0x280,0x100,0xffffffff821b8cd0);
  fn_82358FD8(param_1,&stack0x00000000 + -0x680,0x100,0xffffffff821b8ce8);
  iVar4 = *(int *)(param_1 + 0xd4);
  if (*(int *)(*(int *)(iVar4 + 0x48) + 0x28) != 0) {
    fn_82290458(&stack0x00000000 + -0x720,&stack0x00000000 + -0x6c0);
    fn_82273C88(&stack0x00000000 + -0x6c0);
    fn_82290458(&stack0x00000000 + -0x720,&stack0x00000000 + -0x6e0);
    fn_82273C88(&stack0x00000000 + -0x6e0);
    fn_82290458(&stack0x00000000 + -0x720,&stack0x00000000 + -0x6d0);
    fn_82273C88(&stack0x00000000 + -0x6d0);
    fn_82672C20(*(undefined4 *)(*(int *)(iVar4 + 0x48) + 0x28),0xffffffff821ac26c,0,0);
    fn_822902E8(&stack0x00000000 + -0x720);
  }
  iVar4 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0xbc) = 0;
  if (((*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) & 0xfffffffcU) != 0) {
    iVar11 = 0;
    do {
      iVar4 = iVar4 + 1;
      piVar5 = *(int **)(*(int *)(param_1 + 0x20) + iVar11);
      iVar11 = iVar11 + 4;
      *(int *)(*(int *)(param_1 + 0x174) + 0xbc) =
           (piVar5[1] - *piVar5 >> 2) + *(int *)(*(int *)(param_1 + 0x174) + 0xbc);
    } while (iVar4 < (*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 2);
  }
  if (1 < *(uint *)(*(int *)(param_1 + 0x174) + 0xbc)) {
    iVar4 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar4 = fn_82250A18();
    }
    uVar9 = 1;
    if (*(char *)(iVar4 + 4) == '\0') goto LAB_8242b1c4;
  }
  uVar9 = 0;
LAB_8242b1c4:
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0xc4) = uVar9;
  fn_82439F38((ulonglong)*(uint *)(param_1 + 0x174) + 0x1c);
  for (puVar18 = *(undefined4 **)(param_1 + 0x20); puVar18 != *(undefined4 **)(param_1 + 0x24);
      puVar18 = puVar18 + 1) {
    puVar1 = (undefined4 *)*puVar18;
    for (puVar16 = (uint *)*puVar1; puVar16 != (uint *)puVar1[1]; puVar16 = puVar16 + 1) {
      uVar13 = (ulonglong)*puVar16;
      piVar5 = *(int **)(*(int *)(*puVar16 + 0x2c) * 4 + **(int **)(param_1 + 8));
      piVar5 = (int *)fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),0);
      if ((ulonglong)(uint)piVar5[9] != (uVar13 & 0xffffffff)) {
        piVar5[9] = (int)uVar13;
        if ((uVar13 & 0xffffffff) == 0) {
          *(undefined4 *)(*(int *)(piVar5[5] + 0x8c0) + 0x90) = 0;
        }
        else {
          *(undefined4 *)(*(int *)(piVar5[5] + 0x8c0) + 0x90) = 1;
        }
        (**(code **)(*piVar5 + 0x24))(piVar5,uVar13);
      }
      puVar1 = (undefined4 *)*puVar18;
    }
  }
  fn_8242D178(param_1);
  piVar5 = *(int **)(param_1 + 8);
  iVar4 = 0;
  if ((piVar5[1] - *piVar5 & 0xfffffffcU) != 0) {
    iVar11 = 0;
    do {
      iVar6 = fn_822ABA88(*(undefined4 *)
                            ((*(int **)(iVar11 + *piVar5))[4] * 4 + **(int **)(iVar11 + *piVar5)),0)
      ;
      *(int *)(*(int *)(iVar6 + 0x1a0) + 0xc) = param_1;
      fn_82337020();
      fn_82336C10(iVar6);
      piVar5 = *(int **)(param_1 + 8);
      iVar4 = iVar4 + 1;
      iVar11 = iVar11 + 4;
    } while (iVar4 < piVar5[1] - *piVar5 >> 2);
  }
  iVar4 = *(int *)(param_1 + 0x174);
  fn_82439AD0(iVar4 + 0x1c,iVar4 + 0xac,*(undefined4 *)(iVar4 + 0xbc));
  iVar4 = *(int *)(param_1 + 0x174);
  iVar6 = fn_8225F160();
  iVar11 = *(int *)(iVar4 + 0x5c);
  if ((uint)(*(int *)(iVar11 + 0x1c8) - *(int *)(iVar11 + 0x1c4) >> 2) < 2) {
    iVar11 = *(int *)((int)(((ulonglong)*(uint *)(iVar6 + 0x68) + 0x82 & 0xffffffff) << 2) +
                     *(int *)(**(int **)(iVar11 + 0x1c4) + 0x40));
  }
  else {
    iVar11 = *(int *)((int)(((ulonglong)*(uint *)(iVar6 + 0x68) + 0x38 & 0xffffffff) << 2) + iVar11)
    ;
  }
  if (iVar11 != 0) {
    uVar3 = fn_8251F720(&stack0x00000000 + -0x730,0);
    fn_82F68CC0(*(undefined4 *)(iVar4 + 0x5c),uVar3,0xe4);
    iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x5c) + 0x1d8) + 0x90);
    if (*(int *)(iVar4 + 0x544) == 0) {
      fn_82F68CC0(iVar4 + 0x90,uVar3,0x34);
      *(int *)(iVar4 + 0x514) = iVar11;
    }
    fn_8251FA58(uVar3);
  }
  piVar5 = *(int **)(param_1 + 8);
  iVar4 = 0;
  if ((piVar5[1] - *piVar5 & 0xfffffffcU) != 0) {
    iVar11 = 0;
    do {
      iVar6 = fn_822ABA88(*(undefined4 *)
                            ((*(int **)(iVar11 + *piVar5))[4] * 4 + **(int **)(iVar11 + *piVar5)),0)
      ;
      iVar6 = *(int *)(iVar6 + 0x1a0);
      iVar14 = *(int *)(*(int *)(*(int *)(iVar6 + 0xc) + 0x174) + 0x5c);
      *(uint *)(*(int *)(iVar6 + 0x194) + 0x1c) =
           (uint)LZCOUNT((*(int *)(iVar14 + 0x1c8) - *(int *)(iVar14 + 0x1c4) & 0xfffffffcU) - 4) >>
           5;
      iVar14 = *(int *)(*(int *)(*(int *)(iVar6 + 0x194) + 0x10) + 0x74);
      if ((iVar14 == 0) || (cVar10 = fn_828EA608(iVar14), cVar10 == '\0')) {
        iVar14 = 0;
      }
      if (iVar14 != 0) {
        piVar5 = *(int **)(iVar6 + 0x194);
        for (iVar19 = *piVar5; iVar19 != piVar5[1]; iVar19 = iVar19 + 0x1c) {
          if (piVar5[7] == 0) {
            iVar7 = fn_823400C8(iVar19);
          }
          else {
            iVar7 = *(int *)(iVar19 + 0x14);
          }
          *(undefined4 *)(iVar19 + 0x18) = *(undefined4 *)(iVar7 * 4 + *(int *)(iVar14 + 0x100));
          piVar5 = *(int **)(iVar6 + 0x194);
        }
      }
      iVar4 = iVar4 + 1;
      iVar11 = iVar11 + 4;
      *(undefined4 *)(*(int *)(iVar6 + 0x194) + 0x18) = 1;
      piVar5 = *(int **)(param_1 + 8);
    } while (iVar4 < piVar5[1] - *piVar5 >> 2);
  }
  fn_8242D540(param_1,0);
  iVar4 = *(int *)(param_1 + 0x174);
  (**(code **)(*(int *)(iVar4 + 0x10) + 4))
            (iVar4 + 0x10,*(undefined4 *)(iVar4 + 0x9c),lbl_821CA1A0,
             (ulonglong)lbl_821CA1A8 << 0x20);
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  if (*(char *)(iVar4 + 4) != '\0') {
    iVar4 = *(int *)(param_1 + 0x20);
    uVar13 = 0;
    uVar12 = 0;
    if (*(int *)(param_1 + 0x24) - iVar4 >> 2 != 0) {
      iVar11 = 0;
      do {
        piVar5 = *(int **)(iVar4 + iVar11);
        uVar15 = 0;
        iVar4 = *piVar5;
        iVar6 = piVar5[1] - iVar4 >> 2;
        if (iVar6 != 0) {
          iVar14 = 0;
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F622E0(0xffffffff821ae698);
          }
          do {
            iVar4 = *(int *)(iVar4 + iVar14);
            if ((uVar13 & 0xffffffff) < 2) {
              iVar6 = iVar4 + 0xf0;
              if (iVar4 == 0) {
                iVar6 = 0;
              }
              uVar9 = *(undefined4 *)(param_1 + 0x8c);
              uVar3 = fn_82365BD8(&stack0x00000000 + -0x720,
                                        (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0x308) + 0x38);
              fn_823B7660(uVar9,iVar6,uVar13,uVar3);
              uVar13 = uVar13 + 1;
              piVar8 = (int *)fn_8265C9E0(0x28);
              if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                fn_82230040(&stack0x00000000 + -0x710);
              }
              *piVar8 = (int)&lbl_821B907C;
              fn_82F68CC0(piVar8 + 2,&stack0x00000000 + -0x6a0,0x20);
              iVar4 = *(int *)(iVar4 + 0xfc);
              piVar17 = (int *)(iVar4 + 0x70);
              if ((undefined1 *)(iVar4 + 0x70) != &stack0x00000000 + -0x700) {
                piVar2 = *(int **)(iVar4 + 0x80);
                if (piVar2 != (int *)0x0) {
                  (**(code **)(*piVar2 + 0xc))(piVar2,piVar17 != piVar2);
                  *(undefined4 *)(iVar4 + 0x80) = 0;
                }
                if (piVar8 == (int *)0x0) {
                  *(undefined4 *)(iVar4 + 0x80) = 0;
                }
                else {
                  if (piVar8 != (int *)(&stack0x00000000 + -0x700)) {
                    piVar17 = (int *)0x0;
                  }
                  uVar9 = (**(code **)*piVar8)(piVar8,piVar17);
                  *(undefined4 *)(iVar4 + 0x80) = uVar9;
                }
              }
              if (piVar8 != (int *)0x0) {
                (**(code **)(*piVar8 + 0xc))(piVar8,(int *)(&stack0x00000000 + -0x700) != piVar8);
              }
            }
            iVar4 = *piVar5;
            uVar15 = uVar15 + 1;
            iVar14 = iVar14 + 4;
          } while (uVar15 < (uint)(piVar5[1] - iVar4 >> 2));
        }
        iVar4 = *(int *)(param_1 + 0x20);
        uVar12 = uVar12 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar12 < (uint)(*(int *)(param_1 + 0x24) - iVar4 >> 2));
    }
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
  if (((uint)(*(int *)(iVar4 + 0x1c8) - *(int *)(iVar4 + 0x1c4) >> 2) < 2) &&
     (*(char *)(*(int *)(param_1 + 0x174) + 0xcb) == '\0')) {
    fn_8242DB38(param_1);
    *(undefined1 *)(*(int *)(param_1 + 0x174) + 0xcb) = 1;
  }
  return;
}

