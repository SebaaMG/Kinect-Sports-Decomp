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
extern unsigned int *auStack_260;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82292268();
extern int fn_8229A000();
extern int fn_8229ACA0();
extern int fn_8229F618();
extern int fn_822ABA88();
extern int fn_82337B90();
extern int fn_82337BE0();
extern int fn_82359928();
extern int fn_8242C1B8();
extern int fn_8242C348();
extern int fn_8242C410();
extern int fn_8242CFE0();
extern int fn_8242D468();
extern int fn_8242E3E0();
extern int fn_8242E5C0();
extern int fn_824329A8();
extern int fn_82435E88();
extern int fn_82437558();
extern int fn_824376F8();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_82522588();
extern int fn_82672C20();
extern unsigned int iStack_25c;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D44F8;
extern unsigned int lbl_831D4508;
extern unsigned int lbl_831D450C;
extern unsigned int uStack_24c;
extern unsigned int uStack_250;


void fn_824356C8(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  bool bVar11;
  double dVar12;
  undefined1 auStack_260 [4];
  int iStack_25c;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  
  lVar8 = 0;
  iVar3 = **(int **)(param_1 + 0x40);
  iVar2 = fn_8242C410(iVar3);
  if (0 < iVar2) {
    lVar7 = 0;
    do {
      piVar4 = *(int **)(**(int **)(iVar3 + 8) + (int)lVar7);
      iVar3 = fn_822ABA88(*(undefined4 *)(piVar4[4] * 4 + *piVar4),0);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 4;
      *(int *)(*(int *)(iVar3 + 0x1a0) + 8) = param_3;
      iVar3 = **(int **)(param_1 + 0x40);
      iVar2 = fn_8242C410(iVar3);
    } while ((int)lVar8 < iVar2);
  }
  uVar10 = (ulonglong)*(uint *)(iVar3 + 0x30);
  dVar12 = (double)lbl_821CC160;
  if (uVar10 != *(uint *)(iVar3 + 0x34)) {
    do {
      piVar4 = (int *)fn_82522588(auStack_260,uVar10);
      iVar2 = *piVar4;
      if (*(int *)(*(int *)(iVar2 + 0x244) + 0xc) != param_3) {
        *(int *)(*(int *)(iVar2 + 0x244) + 0xc) = param_3;
        *(float *)(*(int *)(iVar2 + 0x244) + 0x10) = (float)dVar12;
        *(float *)(*(int *)(iVar2 + 0x244) + 0x14) = (float)dVar12;
      }
      if (iStack_25c != 0) {
        fn_822315A0();
      }
      uVar10 = uVar10 + 8;
    } while ((uVar10 & 0xffffffff) != (ulonglong)*(uint *)(iVar3 + 0x34));
  }
  uVar1 = lbl_821CA460;
  switch(param_3) {
  case 2:
    lVar8 = 2;
    puVar9 = (undefined4 *)
             (*(int *)(*(int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x9c) + 0x1a8) + 0xc)
    ;
    do {
      puVar9 = puVar9 + 0x7c;
      *puVar9 = uVar1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    lbl_831D4508 = 0;
    lbl_831D44F8 = (float)dVar12;
    lbl_831D450C = 0xff;
    iVar3 = fn_8242E5C0(**(undefined4 **)(param_1 + 0x40));
    if (iVar3 == 0) {
      iVar3 = **(int **)(param_1 + 0x40);
      if (*(int *)(iVar3 + 0xac) != 1) {
        iVar2 = fn_8249ABC0();
        if (*(int *)(iVar3 + 0xb4) != -1) {
          fn_8249D980(*(undefined4 *)(iVar2 + 0x110));
          *(undefined4 *)(iVar3 + 0xb4) = 0xffffffff;
        }
        *(undefined4 *)(iVar3 + 0xac) = 1;
      }
      fn_82359928(**(undefined4 **)(param_1 + 0x40),1);
    }
    iVar3 = *(int *)(**(int **)(param_1 + 0x40) + 0x174);
    *(uint *)(iVar3 + 0x68) = *(uint *)(iVar3 + 0x68) | 1;
    iVar3 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x40) + 0x98))
                      ((int *)**(undefined4 **)(param_1 + 0x40),1);
    if (iVar3 == 0) {
      *(undefined4 *)(**(int **)(param_1 + 0x40) + 0x110) = 1;
    }
    else {
      piVar4 = (int *)**(int **)(param_1 + 0x40);
      (**(code **)(*piVar4 + 0x90))(piVar4,0);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1c8) = 1;
    piVar4 = *(int **)(param_1 + 0x40);
    if (*(int *)(*(int *)(param_1 + 0x40) + 0xf8) == 0) {
      if (piVar4[0x53] == 0) {
        *(uint *)(*(int *)(*piVar4 + 0x174) + 0x68) =
             *(uint *)(*(int *)(*piVar4 + 0x174) + 0x68) | 0x20;
      }
                    /* WARNING: Subroutine does not return */
      fn_8242C1B8(**(undefined4 **)(param_1 + 0x40));
    }
    *(uint *)(*(int *)(*piVar4 + 0x174) + 0x68) = *(uint *)(*(int *)(*piVar4 + 0x174) + 0x68) | 0x10
    ;
    iVar2 = 0;
    uVar10 = (ulonglong)**(uint **)(param_1 + 0x40);
    iVar3 = fn_8242C410(uVar10);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        piVar4 = *(int **)(**(int **)((int)uVar10 + 8) + iVar3);
        iVar6 = fn_822ABA88(*(undefined4 *)(piVar4[4] * 4 + *piVar4),0);
        iVar5 = fn_82337B90();
        if ((iVar5 != 0) ||
           ((iVar5 = fn_8242C348(**(undefined4 **)(param_1 + 0x40)), iVar5 != 0 &&
            (iVar5 = fn_82337BE0(iVar6), iVar5 != 0)))) {
          *(undefined4 *)(*(int *)(iVar6 + 0x1a0) + 0x18c) = 1;
          *(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x1d0) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
        uVar10 = (ulonglong)**(uint **)(param_1 + 0x40);
        iVar6 = fn_8242C410(uVar10);
      } while (iVar2 < iVar6);
    }
    break;
  case 4:
    fn_82435E88(param_1,(ulonglong)*(uint *)(param_1 + 0x40) + 0xe4);
    iVar2 = **(int **)(param_1 + 0x40);
    iVar3 = (*(int **)(param_1 + 0x40))[0x81];
    if (iVar3 < *(int *)(*(int *)(iVar2 + 0x174) + 0xbc)) {
      iVar6 = iVar3 << 2;
      do {
        piVar4 = *(int **)(**(int **)(iVar2 + 8) + iVar6);
        iVar2 = fn_822ABA88(*(undefined4 *)(piVar4[4] * 4 + *piVar4),0);
        iVar5 = fn_82337B90();
        if ((iVar5 != 0) || (iVar5 = fn_82337BE0(iVar2), iVar5 != 0)) {
          *(undefined4 *)(*(int *)(iVar2 + 0x1a0) + 0x18c) = 1;
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 4;
        iVar2 = **(int **)(param_1 + 0x40);
      } while (iVar3 < *(int *)(*(int *)(iVar2 + 0x174) + 0xbc));
    }
    break;
  case 5:
    iVar3 = *(int *)(**(int **)(param_1 + 0x40) + 0x174);
    *(uint *)(iVar3 + 0x68) = *(uint *)(iVar3 + 0x68) | 0x100000;
    break;
  case 6:
    iVar3 = *(int *)(**(int **)(param_1 + 0x40) + 0xa0);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x40) == 1)) {
      fn_8229ACA0(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0xd4),
                        *(undefined4 *)(**(int **)(param_1 + 0x40) + 0xd0));
    }
    iVar3 = *(int *)(**(int **)(param_1 + 0x40) + 0x174);
    *(uint *)(iVar3 + 0x68) = *(uint *)(iVar3 + 0x68) | 2;
    *(undefined4 *)(**(int **)(param_1 + 0x40) + 0xf0) = 1;
    break;
  case 10:
    *(undefined4 *)(**(int **)(param_1 + 0x40) + 0x100) = 1;
  case 0xe:
    *(undefined4 *)(**(int **)(param_1 + 0x40) + 0xf0) = 0;
    break;
  case 0x10:
    *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0x90) + 0x510) = 0;
    iVar3 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    fn_8229A000(*(undefined4 *)(iVar3 + 0x4c));
    fn_8229A000(*(undefined4 *)(iVar3 + 0x58));
    iVar3 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    fn_8229A000(*(undefined4 *)(iVar3 + 0x50));
    fn_8229A000(*(undefined4 *)(iVar3 + 0x5c));
    iVar3 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    fn_8229A000(*(undefined4 *)(iVar3 + 0x54));
    fn_8229A000(*(undefined4 *)(iVar3 + 0x60));
    fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 100));
    fn_82292268(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0xd4));
    iVar3 = *(int *)(**(int **)(param_1 + 0x40) + 0x174);
    *(uint *)(iVar3 + 0x68) = *(uint *)(iVar3 + 0x68) | 4;
    fn_8229F618(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc));
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x1a0) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x198) = 0;
      fn_824376F8(param_1);
    }
    if ((*(int **)(param_1 + 0x40))[0x3e] == 0) {
      fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x20));
    }
    iVar3 = fn_8242E3E0(**(undefined4 **)(param_1 + 0x40));
    if (iVar3 == 0) {
      *(float *)(*(int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 100) + 8) = (float)dVar12;
    }
    break;
  case 0x11:
    piVar4 = *(int **)(param_1 + 0x40);
    iVar3 = *(int *)(*(int *)(*piVar4 + 0x174) + 0x5c);
    if ((*(int *)(iVar3 + 0x1c8) - *(int *)(iVar3 + 0x1c4) & 0xfffffffcU) == 4) {
      if (piVar4[0x3e] != 0) {
        if (piVar4[0x53] + 1U < (uint)piVar4[0x56]) {
          bVar11 = true;
        }
        else {
          bVar11 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x40) + 0x148) + 1 <
                   (ulonglong)*(uint *)(*(int *)(param_1 + 0x40) + 0x154);
        }
        if (bVar11) goto LAB_82435e24;
      }
      fn_8242D468();
    }
LAB_82435e24:
    iVar3 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    if ((*(int *)(*(int *)(iVar3 + 0x48) + 0x54) != 0) &&
       (*(int *)(*(int *)(iVar3 + 0x48) + 0x28) != 0)) {
      uStack_24c = 0;
      uStack_250 = 0;
      fn_82672C20(*(undefined4 *)(*(int *)(iVar3 + 0x48) + 0x28),0xffffffff821ac32c,0,0);
      *(undefined4 *)(*(int *)(iVar3 + 0x48) + 0x54) = 0;
      fn_82273C88(&uStack_250);
    }
    break;
  case 0x12:
    fn_8242CFE0(**(undefined4 **)(param_1 + 0x40),0,1,0);
    piVar4 = *(int **)(param_1 + 0x40);
    lVar8 = 1;
    iVar3 = *piVar4;
    if (1 < *(int *)(*(int *)(iVar3 + 0x174) + 0xbc)) {
      do {
        fn_8242CFE0(iVar3,lVar8,0,0);
        piVar4 = *(int **)(param_1 + 0x40);
        lVar8 = lVar8 + 1;
        iVar3 = *piVar4;
      } while ((int)lVar8 < *(int *)(*(int *)(iVar3 + 0x174) + 0xbc));
    }
    if (piVar4[0x3c] == 0) {
      fn_82435E88(param_1,piVar4 + 0x3b);
    }
    fn_8242D468(**(undefined4 **)(param_1 + 0x40));
    fn_824329A8((ulonglong)*(uint *)(**(int **)(param_1 + 0x40) + 0x174) + 0x60,2);
    fn_82437558(param_1);
    break;
  case 0x13:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1c4) = 1;
    break;
  case 0x14:
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1d0) = 0;
  }
  return;
}

