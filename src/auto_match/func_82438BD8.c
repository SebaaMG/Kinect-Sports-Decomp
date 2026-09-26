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
extern int fn_82260950();
extern int fn_82260E68();
extern int fn_822ABA88();
extern int fn_82340AF0();
extern int fn_82437DA8();
extern int fn_8243BBA0();
extern int fn_8243C188();
extern int fn_8243E578();
extern int fn_82522ED8();
extern unsigned int lbl_821B9554;
extern unsigned int lbl_83276580;


void fn_82438BD8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar10;
  ulonglong uVar9;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  undefined4 *puStack00000014;
  
  *param_1 = &lbl_821B9554;
  puVar1 = *(undefined4 **)(param_1[0x10] + 0x2ac);
  puStack00000014 = param_1;
  if ((puVar1 != (undefined4 *)0x0) &&
     (iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1[0x10] + 0x1d8) + 0x174) + 0x9c) + 0x93c),
     iVar3 != 0)) {
    piVar10 = *(int **)(iVar3 + 0xc);
    piVar11 = (int *)0x0;
    while (piVar2 = piVar10, piVar2 != (int *)0x0) {
      if ((undefined4 *)*piVar2 == puVar1) {
        if (piVar11 == (int *)0x0) {
          *(int *)(iVar3 + 0xc) = piVar2[1];
        }
        else {
          piVar11[1] = piVar2[1];
        }
        fn_82522ED8();
        (**(code **)*puVar1)(puVar1,1);
        break;
      }
      piVar11 = piVar2;
      piVar10 = (int *)piVar2[1];
    }
    *(undefined4 *)(param_1[0x10] + 0x2ac) = 0;
  }
  piVar10 = param_1 + 0x10;
  iVar3 = *(int *)(*piVar10 + 0x1d4);
  if ((iVar3 != -1) &&
     (piVar11 = *(int **)(iVar3 * 4 + *(int *)(*piVar10 + 0x1c4)), piVar11 != (int *)0x0)) {
    if (*(char *)(piVar11[0x10] + 8) != '\0') {
      (**(code **)(*piVar11 + 0x14))();
    }
    *(undefined4 *)(*piVar10 + 0x1d4) = 0xffffffff;
  }
  iVar3 = *piVar10;
  piVar10 = *(int **)(iVar3 + 0x1c4);
  if ((uint)(*(int *)(iVar3 + 0x1c8) - (int)piVar10 >> 2) < 2) {
    piVar10 = *(int **)(iVar3 + 0x1c4);
    if ((*(int *)(iVar3 + 0x1c8) - (int)piVar10 & 0xfffffffcU) == 4) {
      uVar6 = 0;
      iVar3 = *(int *)(*(int *)(*piVar10 + 0x40) + 0x114);
      if (iVar3 == 1) {
        uVar6 = 0;
      }
      else if (iVar3 == 2) {
        uVar6 = 1;
      }
      else if (iVar3 == 3) {
        uVar6 = 4;
      }
      else if (iVar3 == 4) {
        uVar6 = 3;
      }
      else if (iVar3 == 5) {
        uVar6 = 2;
      }
      fn_82260E68(uVar6,lbl_83276580);
    }
  }
  else {
    lVar22 = (ulonglong)*(uint *)(piVar10[4] + 0x40) + 0x120;
    fn_8243E578(lVar22,3);
    lVar26 = (ulonglong)*(uint *)(piVar10[3] + 0x40) + 0x120;
    fn_8243E578(lVar26,3);
    lVar7 = (ulonglong)*(uint *)(piVar10[2] + 0x40) + 0x120;
    fn_8243E578(lVar7,3);
    lVar13 = (ulonglong)*(uint *)(piVar10[1] + 0x40) + 0x120;
    fn_8243E578(lVar13,3);
    lVar14 = (ulonglong)*(uint *)(*piVar10 + 0x40) + 0x120;
    fn_8243E578(lVar14,3);
    fn_8243E578(lVar22,2);
    fn_8243E578(lVar26,2);
    iVar3 = fn_8243E578(lVar7,2);
    if (iVar3 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = *(uint *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar13,2);
    if (iVar3 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(uint *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar14,2);
    if (iVar3 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(uint *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar22,1);
    if (iVar3 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(uint *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar26,1);
    if (iVar3 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(uint *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar7,1);
    if (iVar3 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(uint *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar13,1);
    if (iVar3 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(uint *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar14,1);
    if (iVar3 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = *(uint *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar22,0);
    if (iVar3 == 0) {
      uVar23 = 0;
    }
    else {
      uVar23 = *(uint *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar26,0);
    if (iVar3 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(uint *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar7,0);
    if (iVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (ulonglong)*(uint *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar13,0);
    if (iVar3 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (ulonglong)*(uint *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar14,0);
    if (iVar3 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(uint *)(iVar3 + 0x44);
    }
    fn_82260950((double)uVar12,(double)(uVar9 & 0xffffffff),(double)(uVar8 & 0xffffffff),
                      (double)uVar27,(double)uVar23,(double)uVar21,(double)uVar20,(double)uVar19,
                      (double)uVar18,(double)uVar17,(double)uVar16,(double)uVar15,(double)uVar25,
                      lbl_83276580);
    param_1 = puStack00000014;
  }
  iVar3 = param_1[0x10];
  piVar10 = param_1 + 0x10;
  iVar4 = *(int *)(*(int *)(iVar3 + 0x1d8) + 0xa0);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x40) != 1)) {
    iVar24 = 0;
    iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 0x1d8) + 0x174) + 0xbc);
    if ((uint)(*(int *)(iVar3 + 0x1c8) - *(int *)(iVar3 + 0x1c4) >> 2) < 2) {
      if (0 < iVar4) {
        iVar3 = 0;
        do {
          iVar4 = *piVar10;
          piVar11 = *(int **)(**(int **)(*(int *)(iVar4 + 0x1d8) + 8) + iVar3);
          iVar5 = fn_822ABA88(*(undefined4 *)(piVar11[4] * 4 + *piVar11),0);
          iVar4 = *(int *)(*(int *)(**(int **)(iVar4 + 0x1c4) + 0x40) + 0x114);
          if (iVar4 == 1) {
            uVar6 = 0x24;
LAB_824393c4:
            fn_82340AF0((ulonglong)*(uint *)(iVar5 + 0x1a0) + 0x194,uVar6,1);
          }
          else {
            if (iVar4 == 2) {
              uVar6 = 0x26;
              goto LAB_824393c4;
            }
            if (iVar4 == 3) {
              uVar6 = 0x28;
              goto LAB_824393c4;
            }
            if (iVar4 == 4) {
              uVar6 = 0x25;
              goto LAB_824393c4;
            }
            if (iVar4 == 5) {
              uVar6 = 0x27;
              goto LAB_824393c4;
            }
          }
          iVar24 = iVar24 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar24 < *(int *)(*(int *)(*(int *)(*piVar10 + 0x1d8) + 0x174) + 0xbc));
      }
    }
    else if (0 < iVar4) {
      iVar3 = 0;
      do {
        piVar11 = *(int **)(**(int **)(*(int *)(*piVar10 + 0x1d8) + 8) + iVar3);
        iVar4 = fn_822ABA88(*(undefined4 *)(piVar11[4] * 4 + *piVar11),0);
        fn_82340AF0((ulonglong)*(uint *)(iVar4 + 0x1a0) + 0x194,0x27,1);
        fn_82340AF0((ulonglong)*(uint *)(iVar4 + 0x1a0) + 0x194,0x25,1);
        fn_82340AF0((ulonglong)*(uint *)(iVar4 + 0x1a0) + 0x194,0x24,1);
        fn_82340AF0((ulonglong)*(uint *)(iVar4 + 0x1a0) + 0x194,0x28,1);
        fn_82340AF0((ulonglong)*(uint *)(iVar4 + 0x1a0) + 0x194,0x26,1);
        iVar24 = iVar24 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar24 < *(int *)(*(int *)(*(int *)(*piVar10 + 0x1d8) + 0x174) + 0xbc));
    }
    fn_8243BBA0(param_1);
  }
  uVar25 = 0;
  if (*(int *)(*piVar10 + 0x1c8) - *(int *)(*piVar10 + 0x1c4) >> 2 != 0) {
    iVar3 = 0;
    do {
      puVar1 = *(undefined4 **)(*(int *)(*piVar10 + 0x1c4) + iVar3);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar25 = uVar25 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar25 < (uint)(*(int *)(*piVar10 + 0x1c8) - *(int *)(*piVar10 + 0x1c4) >> 2));
  }
  fn_8243C188(piVar10);
  fn_82437DA8(param_1);
  return;
}

