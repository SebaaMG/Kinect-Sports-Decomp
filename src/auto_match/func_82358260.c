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
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8225C590();
extern int fn_8225F160();
extern int fn_8249ABC0();
extern int fn_8249B598();
extern int fn_824CCD80();
extern int fn_824CD148();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82536690();
extern int fn_825603C8();
extern int fn_825604A0();
extern int fn_82566018();
extern int fn_8258E3A8();
extern int fn_8265CA20();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_828AD740();
extern int fn_82A1DD38();
extern int fn_82F622E0();
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_a8;


void fn_82358260(int *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar7;
  int iVar8;
  char cVar12;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  int iStack_d0;
  int iStack_cc;
  undefined4 *apuStack_c8 [2];
  int iStack_c0;
  int iStack_bc;
  int *piStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [160];
  
  lVar18 = 0;
  if ((((int *)param_1[2])[1] - *(int *)param_1[2] & 0xfffffffcU) != 0) {
    do {
      iStack_d0 = (**(code **)(*param_1 + 0xc4))(param_1,param_2 + 0x24,lVar18);
      fn_82536690(param_1 + 3,&iStack_d0);
      lVar18 = lVar18 + 1;
    } while ((int)lVar18 < ((int *)param_1[2])[1] - *(int *)param_1[2] >> 2);
  }
  iVar7 = fn_8225C590();
  *(undefined4 *)(iVar7 + 0x30) = 0;
  piStack_b0 = (int *)0x0;
  piStack_ac = (int *)0x0;
  uStack_a8 = 0;
  iVar16 = 0;
  iVar7 = 0;
  iVar15 = 0;
  bVar4 = false;
  (**(code **)(*param_1 + 0x68))(param_1,&piStack_b0,param_2 + 0x28);
  piVar11 = piStack_b0;
  if (piStack_b0 != piStack_ac) {
    do {
      if (*piVar11 != 0) {
        uVar19 = 1;
        uVar1 = piVar11[1];
        uVar17 = (ulonglong)uVar1;
        iVar8 = lbl_832975B0;
        if (lbl_832975B0 == 0) {
          iVar8 = fn_82250A18();
        }
        if (*(char *)(iVar8 + 4) != '\0') {
          cVar12 = fn_828AD740(param_1[1]);
          if (cVar12 == '\0') {
            uVar19 = (-uVar17 & ~uVar17 & 0xffffffff) >> 0x1f;
          }
          else {
            uVar19 = (ulonglong)(uVar1 == 0);
          }
        }
        iVar8 = 0;
        uVar5 = fn_8251F720(piVar11,0);
        if (uVar5 != 0) {
          uVar6 = fn_8251FBA8(uVar5);
          iVar8 = fn_8265CA60();
          fn_82A1DD38(iVar8,uVar5,uVar6);
        }
        iVar9 = fn_8225F160();
        if (*(int *)(iVar9 + 0x40) == 2) {
          iVar9 = fn_8225F160();
          bVar3 = true;
          if (*(int *)(iVar9 + 0x5c) < 2) goto code_r0x823583f8;
        }
        else {
code_r0x823583f8:
          bVar3 = false;
        }
        if (uVar19 == 0) {
          *(int *)(iVar8 + 0x2c) = iVar15;
          if (!bVar3) {
            uVar13 = iVar15 + 1;
            iVar15 = uVar13 + (((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0) &
                              0x7fffffff) * -2;
          }
        }
        else {
          *(int *)(iVar8 + 0x2c) = iVar7;
          if (!bVar3) {
            uVar13 = iVar7 + 1;
            iVar7 = uVar13 + (((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0) &
                             0x7fffffff) * -2;
          }
        }
        *(uint *)(iVar8 + 0x28) = uVar1;
        uVar14 = *(undefined4 *)(iVar8 + 0x2c);
        uVar6 = fn_8249ABC0();
        iVar9 = fn_8249B598(uVar6,uVar14);
        *(int *)(iVar8 + 0x24) = iVar9;
        if (uVar19 == 0) {
          *(int *)(iVar8 + 0x24) = iVar9 + 6;
        }
        iVar9 = fn_824CD148();
        uVar6 = fn_82230110(auStack_a0,iVar8);
        fn_8258E3A8(&iStack_cc,iVar9 + 8,uVar6);
        fn_82230300(auStack_a0,1,0);
        if ((iStack_cc == *(int *)(iVar9 + 0xc)) ||
           (*(int *)(iStack_cc + 0x2c) != *(int *)(iVar8 + 0x20))) {
          iVar9 = 0;
        }
        else {
          iVar9 = (**(code **)(iStack_cc + 0x28))(iVar8);
        }
        iStack_d0 = iVar9;
        if (uVar19 != 0) {
          iVar10 = fn_8225C590();
          uVar13 = *(uint *)(iVar10 + 0x30);
          if (uVar13 < (uint)(*(int *)(iVar10 + 0x14) - *(int *)(iVar10 + 0x10) >> 2)) {
            uVar14 = *(undefined4 *)(uVar13 * 4 + *(int *)(iVar10 + 0x10));
            *(uint *)(iVar10 + 0x30) = uVar13 + 1;
          }
          else {
            uVar14 = 0;
          }
          *(undefined4 *)(iVar9 + 0x34) = uVar14;
        }
        if ((uint)(param_1[9] - param_1[8] >> 2) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          fn_82F622E0(0xffffffff821ae698);
        }
        fn_82536690(*(undefined4 *)(uVar1 * 4 + param_1[8]),&iStack_d0);
        if (param_1[1] != 0) {
          *(int *)(iStack_d0 + 0x10) = param_1[1];
        }
        *(int *)(iStack_d0 + 0x1c) = iVar16;
        *(uint *)(iStack_d0 + 0x18) = uVar1;
        (**(code **)(*param_1 + 0xcc))(&iStack_c0,param_1);
        if (iStack_c0 != 0) {
          if ((uVar19 == 0) || (bVar4)) {
            puVar20 = (undefined4 *)(iStack_c0 + 0x22c);
            if (*(int *)(iStack_c0 + 0x22c) != 0) {
              fn_825604A0(iStack_c0 + 0x20);
              *puVar20 = 0;
            }
          }
          else {
            puVar20 = (undefined4 *)(iStack_c0 + 0x22c);
            if (*(int *)(iStack_c0 + 0x22c) != 1) {
              iVar9 = iStack_c0 + 0x20;
              uVar6 = fn_824CCD80(*(undefined4 *)(iStack_c0 + 0x10));
              fn_825603C8(uVar6,iVar9,1);
              *puVar20 = 1;
            }
            bVar4 = true;
          }
          fn_82566018(param_1 + 0xc,&iStack_c0);
        }
        if (iStack_bc != 0) {
          fn_822315A0();
        }
        fn_8265CAA0(iVar8);
        if ((uVar5 & 0xffffffff) != 0) {
          fn_8251FA58(uVar5);
        }
      }
      piVar11 = piVar11 + 2;
      iVar16 = iVar16 + 1;
    } while (piVar11 != piStack_ac);
  }
  puVar20 = (undefined4 *)param_1[0xc];
  if (puVar20 != (undefined4 *)param_1[0xd]) {
    do {
      if (lbl_8329618C == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)(lbl_8329618C + 4);
      }
      (**(code **)(*(int *)*puVar20 + 8))((int *)*puVar20,uVar14);
      puVar20 = puVar20 + 2;
    } while (puVar20 != (undefined4 *)param_1[0xd]);
  }
  piVar11 = (int *)(**(code **)(*param_1 + 0xc0))(apuStack_c8,param_1,param_2);
  param_1 = param_1 + 0x35;
  if (param_1 != piVar11) {
    puVar20 = (undefined4 *)*piVar11;
    *piVar11 = 0;
    puVar2 = (undefined4 *)*param_1;
    if (puVar20 != puVar2) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *param_1 = (int)puVar20;
    }
  }
  if (apuStack_c8[0] != (undefined4 *)0x0) {
    (**(code **)*apuStack_c8[0])(apuStack_c8[0],1);
  }
  if (piStack_b0 != (int *)0x0) {
    fn_8265CA20();
  }
  return;
}

