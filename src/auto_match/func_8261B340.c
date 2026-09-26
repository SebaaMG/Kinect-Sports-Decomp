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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_825C2E68();
extern int fn_82CE5040();
extern int fn_82D41968();
extern int fn_82D80A40();
extern int fn_82D93168();


void fn_8261B340(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int in_r0;
  int iVar11;
  longlong lVar10;
  undefined4 uVar12;
  undefined1 uVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [144];
  uint *puVar4;
  
  if (*(float *)(param_2 + 0x1c) < *(float *)(param_1 + 4)) {
    piVar16 = *(int **)(param_2 + 0x24);
    iVar11 = *(int *)(*piVar16 + 0xc);
    piVar15 = (int *)piVar16[3];
    while (piVar1 = piVar15, piVar1 != (int *)0x0) {
      piVar16 = piVar1;
      piVar15 = (int *)piVar1[3];
    }
    if (*(char *)(piVar16 + 6) == '\x01') {
      iVar18 = (int)*(char *)(piVar16 + 4) + (int)piVar16;
    }
    else {
      iVar18 = 0;
    }
    if ((iVar18 != 0) && (0 < iVar11)) {
      if (2 < iVar11) {
        if (iVar11 == 3) {
          piVar16 = *(int **)(*(int *)(param_2 + 0x24) + 0xc);
          if (*(int *)(*piVar16 + 0xc) == 10) {
            uVar19 = (**(code **)(*(int *)*piVar16 + 0x10))();
            lVar10 = uVar19 - 0x10;
            if ((uVar19 & 0xffffffff) == 0) {
              lVar10 = 0;
            }
            iVar11 = fn_82D41968(lVar10,*(undefined4 *)(*(int *)(param_2 + 0x24) + 4));
            puVar2 = *(uint **)(param_2 + 0x24);
            puVar9 = (uint *)puVar2[3];
            puVar3 = puVar2;
            while (puVar4 = puVar9, puVar4 != (uint *)0x0) {
              puVar3 = puVar4;
              puVar9 = (uint *)puVar4[3];
            }
            if (*(char *)(puVar3 + 6) == '\x01') {
              iVar14 = (int)*(char *)(puVar3 + 4) + (int)puVar3;
            }
            else {
              iVar14 = 0;
            }
            iVar17 = 0;
            if (iVar14 != 0) {
              iVar17 = *(int *)(iVar14 + 0xc);
            }
            uVar5 = *(uint *)(iVar11 + 8);
            if ((*(uint *)(param_1 + 0x14) & uVar5) == 0) {
              return;
            }
            uVar6 = *(uint *)(param_1 + 0x18);
            if (((uVar6 & 0xfef1bfff) != 0) && ((uVar6 & uVar5) != 0)) {
              return;
            }
            if (((uVar5 & 0x10e4000) != 0) && ((uVar5 & ~uVar6 & 0x10e4000) == 0)) {
              return;
            }
            for (piVar16 = *(int **)(param_1 + 8); piVar16 < *(int **)(param_1 + 0xc);
                piVar16 = piVar16 + 1) {
              if (iVar17 == *piVar16) {
                return;
              }
              if (iVar18 == *piVar16) {
                return;
              }
            }
            uVar19 = (ulonglong)*puVar2;
            fn_82D80A40(*(undefined4 *)(iVar18 + 8));
            fn_82D93168(iVar18 + 0xe0);
            fn_82CE5040(auStack_130,auStack_90,uVar19 + 0x20);
            fn_82CE5040(auStack_120,auStack_90,uVar19 + 0x30);
            fn_82CE5040(auStack_100,auStack_90,uVar19 + 0x40);
            iVar14 = *(int *)(param_1 + 0x10);
            *(undefined4 *)(iVar14 + 0x34) = 0x40;
            *(undefined4 *)(iVar14 + 0x30) = 0;
            *(undefined4 *)(iVar14 + 0x38) = 1;
            puVar7 = (undefined4 *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (undefined4 *)(iVar14 + 0x40U & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            puVar7 = (undefined4 *)((uint)(auStack_120 + in_r0) & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (undefined4 *)(iVar14 + 0x50U & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            puVar7 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
            uVar12 = *puVar7;
            uVar20 = puVar7[1];
            uVar21 = puVar7[2];
            uVar22 = puVar7[3];
            *(undefined4 *)(iVar14 + 0x34) = 0x40;
            puVar7 = (undefined4 *)(iVar14 + 0x60U & 0xfffffff0);
            *puVar7 = uVar12;
            puVar7[1] = uVar20;
            puVar7[2] = uVar21;
            puVar7[3] = uVar22;
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x23) = *(undefined1 *)(iVar11 + 4);
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24) = *(undefined4 *)(iVar11 + 8);
            *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x20) = 0;
            puVar7 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x10U & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            puVar7 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (undefined4 *)(in_r0 + *(int *)(param_1 + 0x10) & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x1c);
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x22) = 1;
            *(int *)(*(int *)(param_1 + 0x10) + 0x74) = iVar18;
            *(int *)(*(int *)(param_1 + 0x10) + 0x28) = iVar17;
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x78) =
                 *(undefined4 *)(*(int *)(param_2 + 0x24) + 4);
            iVar11 = *(int *)(*(int *)(param_2 + 0x24) + 4);
          }
          else {
            if (*(int *)(*piVar16 + 0xc) != 0xe) {
              return;
            }
            iVar11 = fn_82D41968(**(undefined4 **)(*(int *)(param_2 + 0x24) + 0xc),
                                  *(undefined4 *)(*(int *)(param_2 + 0x24) + 4));
            puVar2 = *(uint **)(param_2 + 0x24);
            puVar9 = (uint *)puVar2[3];
            puVar3 = puVar2;
            while (puVar4 = puVar9, puVar4 != (uint *)0x0) {
              puVar3 = puVar4;
              puVar9 = (uint *)puVar4[3];
            }
            if (*(char *)(puVar3 + 6) == '\x01') {
              iVar14 = (int)*(char *)(puVar3 + 4) + (int)puVar3;
            }
            else {
              iVar14 = 0;
            }
            iVar17 = 0;
            if (iVar14 != 0) {
              iVar17 = *(int *)(iVar14 + 0xc);
            }
            uVar5 = *(uint *)(iVar11 + 8);
            if ((*(uint *)(param_1 + 0x14) & uVar5) == 0) {
              return;
            }
            uVar6 = *(uint *)(param_1 + 0x18);
            if (((uVar6 & 0xfef1bfff) != 0) && ((uVar6 & uVar5) != 0)) {
              return;
            }
            if (((uVar5 & 0x10e4000) != 0) && ((uVar5 & ~uVar6 & 0x10e4000) == 0)) {
              return;
            }
            for (piVar15 = *(int **)(param_1 + 8); piVar15 < *(int **)(param_1 + 0xc);
                piVar15 = piVar15 + 1) {
              if (iVar17 == *piVar15) {
                return;
              }
              if (iVar18 == *piVar15) {
                return;
              }
            }
            uVar19 = (ulonglong)*puVar2;
            fn_82D80A40(*(undefined4 *)(iVar18 + 8));
            fn_82D93168(iVar18 + 0xe0);
            fn_82CE5040(auStack_f0,auStack_d0,uVar19 + 0x20);
            fn_82CE5040(auStack_110,auStack_d0,uVar19 + 0x30);
            fn_82CE5040(auStack_e0,auStack_d0,uVar19 + 0x40);
            iVar14 = *(int *)(param_1 + 0x10);
            *(undefined4 *)(iVar14 + 0x34) = 0x40;
            *(undefined4 *)(iVar14 + 0x30) = 0;
            *(undefined4 *)(iVar14 + 0x38) = 1;
            puVar7 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (undefined4 *)(iVar14 + 0x40U & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            puVar7 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (undefined4 *)(iVar14 + 0x50U & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            puVar7 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
            uVar12 = *puVar7;
            uVar20 = puVar7[1];
            uVar21 = puVar7[2];
            uVar22 = puVar7[3];
            *(undefined4 *)(iVar14 + 0x34) = 0x40;
            puVar7 = (undefined4 *)(iVar14 + 0x60U & 0xfffffff0);
            *puVar7 = uVar12;
            puVar7[1] = uVar20;
            puVar7[2] = uVar21;
            puVar7[3] = uVar22;
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x23) = *(undefined1 *)(iVar11 + 4);
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24) = *(undefined4 *)(iVar11 + 8);
            *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x20) = 0;
            puVar7 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x10U & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            puVar7 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
            uVar12 = puVar7[1];
            uVar20 = puVar7[2];
            uVar21 = puVar7[3];
            puVar8 = (undefined4 *)(in_r0 + *(int *)(param_1 + 0x10) & 0xfffffff0);
            *puVar8 = *puVar7;
            puVar8[1] = uVar12;
            puVar8[2] = uVar20;
            puVar8[3] = uVar21;
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x1c);
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x22) = 1;
            *(int *)(*(int *)(param_1 + 0x10) + 0x74) = iVar18;
            *(int *)(*(int *)(param_1 + 0x10) + 0x28) = iVar17;
            if (((int *)piVar16[3] == (int *)0x0) || (*(int *)(*(int *)piVar16[3] + 0xc) != 9)) {
              *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x78) =
                   *(undefined4 *)(*(int *)(param_2 + 0x24) + 4);
              iVar11 = *(int *)(*(int *)(param_2 + 0x24) + 4);
            }
            else {
              *(int *)(*(int *)(param_1 + 0x10) + 0x78) = piVar16[1];
              iVar11 = piVar16[1];
            }
          }
          uVar13 = 1;
          uVar12 = fn_825C2E68(iVar18,iVar11);
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c) = uVar12;
          *(undefined1 *)(param_1 + 0x1c) = uVar13;
          return;
        }
        if (iVar11 < 4) {
          return;
        }
        if (6 < iVar11) {
          if (iVar11 < 0xb) {
            return;
          }
          if (0xc < iVar11) {
            return;
          }
        }
      }
      iVar14 = *(int *)(*(int *)(param_2 + 0x24) + 0xc);
      iVar11 = *(int *)(param_2 + 0x24);
      while (iVar17 = iVar14, iVar17 != 0) {
        iVar11 = iVar17;
        iVar14 = *(int *)(iVar17 + 0xc);
      }
      if (*(char *)(iVar11 + 0x18) == '\x01') {
        iVar11 = *(char *)(iVar11 + 0x10) + iVar11;
      }
      else {
        iVar11 = 0;
      }
      iVar14 = 0;
      if (iVar11 != 0) {
        iVar14 = *(int *)(iVar11 + 0xc);
      }
      for (piVar16 = *(int **)(param_1 + 8); piVar16 < *(int **)(param_1 + 0xc);
          piVar16 = piVar16 + 1) {
        if (iVar14 == *piVar16) {
          return;
        }
        if (iVar18 == *piVar16) {
          return;
        }
      }
      *(undefined1 *)(param_1 + 0x1c) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x23) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24) = 4;
      *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x20) = 0;
      puVar7 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
      uVar12 = puVar7[1];
      uVar20 = puVar7[2];
      uVar21 = puVar7[3];
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x10U & 0xfffffff0);
      *puVar8 = *puVar7;
      puVar8[1] = uVar12;
      puVar8[2] = uVar20;
      puVar8[3] = uVar21;
      puVar7 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
      uVar12 = puVar7[1];
      uVar20 = puVar7[2];
      uVar21 = puVar7[3];
      puVar8 = (undefined4 *)(in_r0 + *(int *)(param_1 + 0x10) & 0xfffffff0);
      *puVar8 = *puVar7;
      puVar8[1] = uVar12;
      puVar8[2] = uVar20;
      puVar8[3] = uVar21;
      iVar11 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(iVar11 + 0x34) = 0x30;
      *(undefined4 *)(iVar11 + 0x30) = 5;
      *(undefined4 *)(iVar11 + 0x38) = 1;
      puVar7 = (undefined4 *)(in_r0 + iVar11 & 0xfffffff0);
      uVar12 = puVar7[1];
      uVar20 = puVar7[2];
      uVar21 = puVar7[3];
      puVar8 = (undefined4 *)(iVar11 + 0x40U & 0xfffffff0);
      *puVar8 = *puVar7;
      puVar8[1] = uVar12;
      puVar8[2] = uVar20;
      puVar8[3] = uVar21;
      puVar7 = (undefined4 *)(in_r0 + iVar11 + 0x10 & 0xfffffff0);
      uVar12 = *puVar7;
      uVar20 = puVar7[1];
      uVar21 = puVar7[2];
      uVar22 = puVar7[3];
      *(undefined4 *)(iVar11 + 0x34) = 0x40;
      puVar7 = (undefined4 *)(iVar11 + 0x50U & 0xfffffff0);
      *puVar7 = uVar12;
      puVar7[1] = uVar20;
      puVar7[2] = uVar21;
      puVar7[3] = uVar22;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x22) = 1;
      *(int *)(*(int *)(param_1 + 0x10) + 0x74) = iVar18;
      *(int *)(*(int *)(param_1 + 0x10) + 0x28) = iVar14;
      piVar16 = *(int **)(*(int *)(param_2 + 0x24) + 0xc);
      if (piVar16 == (int *)0x0) {
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x78) = 0xffffffff;
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c) = 0;
      }
      else {
        iVar11 = *(int *)(*piVar16 + 0xc);
        if (((iVar11 == 0xb) || (iVar11 == 0xc)) || (iVar11 == 0xf)) {
          *(int *)(*(int *)(param_1 + 0x10) + 0x78) = piVar16[1];
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x78) =
               *(undefined4 *)(*(int *)(param_2 + 0x24) + 4);
          piVar16 = *(int **)(param_2 + 0x24);
        }
        uVar12 = fn_825C2E68(iVar18,piVar16[1]);
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c) = uVar12;
      }
    }
  }
  return;
}

