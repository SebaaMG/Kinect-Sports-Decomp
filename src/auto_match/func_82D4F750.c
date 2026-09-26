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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern unsigned int lbl_82138934;
extern unsigned int lbl_8323B1A0;


void fn_82D4F750(int param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar18;
  longlong lVar17;
  int *piVar19;
  
  piVar19 = (int *)(param_1 + 0x34);
  iVar4 = fn_82CE5410();
  if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),piVar19,0x38);
  }
  iVar4 = *(int *)(param_1 + 0x38) * 0x38 + *piVar19;
  if (iVar4 != 0) {
    *(undefined1 *)(iVar4 + 0x11) = 1;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    *(undefined4 *)(iVar4 + 0x30) = 1;
    *(undefined4 *)(iVar4 + 0x28) = 0;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x18) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar4 + 1;
  piVar19 = (int *)(iVar4 * 0x38 + *piVar19);
  iVar4 = fn_82CE5410();
  puVar5 = (undefined4 *)(**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x50);
  *(undefined2 *)((int)puVar5 + 6) = 1;
  *(undefined2 *)(puVar5 + 1) = 0x50;
  *puVar5 = &lbl_82138934;
  puVar5[2] = 0;
  piVar18 = (int *)(param_1 + 0x60);
  puVar5[3] = 0;
  puVar5[4] = 0x80000000;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0x80000000;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0x80000000;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0x80000000;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0x80000000;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0x80000000;
  iVar4 = fn_82CE5410();
  if (*(uint *)(param_1 + 100) != (*(uint *)(param_1 + 0x68) & 0x3fffffff)) {
    *(undefined4 **)(*(int *)(param_1 + 100) * 4 + *piVar18) = puVar5;
    iVar4 = *(int *)(param_1 + 100) + 1;
    *(int *)(param_1 + 100) = iVar4;
    iVar4 = *(int *)(iVar4 * 4 + *piVar18 + -4);
    piVar18 = (int *)(iVar4 + 8);
    lVar17 = (ulonglong)(uint)param_2[2] + ((ulonglong)(uint)param_2[2] & 0x7fffffff) * 2;
    iVar6 = fn_82CE5410();
    uVar1 = *(uint *)(iVar4 + 0xc);
    lVar13 = lVar17 + (ulonglong)uVar1;
    iVar8 = (int)lVar13;
    if ((int)(*(uint *)(iVar4 + 0x10) & 0x3fffffff) < iVar8) {
      lVar2 = ((ulonglong)*(uint *)(iVar4 + 0x10) & 0x3fffffff) << 1;
      if (iVar8 < (int)lVar2) {
        lVar13 = lVar2;
      }
      fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),piVar18,lVar13,4);
    }
    iVar6 = 0;
    *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + (int)lVar17;
    puVar5 = (undefined4 *)*param_2;
    if (0 < (int)param_2[2]) {
      puVar10 = (undefined4 *)(uVar1 * 4 + *piVar18 + -4);
      do {
        iVar6 = iVar6 + 1;
        puVar10[1] = *puVar5;
        puVar10[2] = puVar5[1];
        puVar10 = puVar10 + 3;
        *puVar10 = puVar5[2];
        puVar5 = (undefined4 *)(param_2[1] + (int)puVar5);
      } while (iVar6 < (int)param_2[2]);
    }
    iVar6 = *piVar18;
    piVar19[1] = 0xc;
    *piVar19 = iVar6;
    piVar19[2] = param_2[2];
    if (*(char *)(param_2 + 4) == '\x01') {
      uVar1 = (uint)param_2[5] >> 1;
      uVar14 = uVar1;
      if (2 < uVar1) {
        uVar14 = 3;
      }
      piVar19[5] = uVar14 << 1;
      uVar14 = param_2[7];
      if (uVar1 == 1) {
        lVar13 = (ulonglong)uVar14 + 2;
      }
      else if (uVar1 == 2) {
        lVar13 = ((ulonglong)uVar14 & 0x7fffffff) * 2 + 1;
      }
      else {
        lVar13 = (ulonglong)uVar14 + ((ulonglong)uVar14 & 0x7fffffff) * 2;
      }
      iVar6 = fn_82CE5410();
      uVar1 = *(uint *)(iVar4 + 0x18);
      lVar17 = (ulonglong)uVar1 + lVar13;
      iVar8 = (int)lVar17;
      if ((int)(*(uint *)(iVar4 + 0x1c) & 0x3fffffff) < iVar8) {
        lVar2 = ((ulonglong)*(uint *)(iVar4 + 0x1c) & 0x3fffffff) << 1;
        if (iVar8 < (int)lVar2) {
          lVar17 = lVar2;
        }
        fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),(int *)(iVar4 + 0x14),lVar17,2);
      }
      iVar6 = 0;
      puVar15 = (undefined4 *)(uVar1 * 2 + *(int *)(iVar4 + 0x14));
      *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + (int)lVar13;
      puVar11 = (undefined2 *)param_2[3];
      puVar5 = puVar15;
      if (0 < (int)param_2[7]) {
        do {
          iVar6 = iVar6 + 1;
          *(undefined2 *)puVar5 = *puVar11;
          *(undefined2 *)((int)puVar5 + 2) = puVar11[1];
          *(undefined2 *)(puVar5 + 1) = puVar11[2];
          puVar11 = (undefined2 *)((int)puVar11 + param_2[5]);
          puVar5 = (undefined4 *)(piVar19[5] + (int)puVar5);
        } while (iVar6 < (int)param_2[7]);
      }
    }
    else {
      uVar1 = (uint)param_2[5] >> 2;
      uVar14 = uVar1;
      if (2 < uVar1) {
        uVar14 = 3;
      }
      piVar19[5] = uVar14 << 2;
      uVar14 = param_2[7];
      if (uVar1 == 1) {
        lVar13 = (ulonglong)uVar14 + 2;
      }
      else if (uVar1 == 2) {
        lVar13 = ((ulonglong)uVar14 & 0x7fffffff) * 2 + 1;
      }
      else {
        lVar13 = (ulonglong)uVar14 + ((ulonglong)uVar14 & 0x7fffffff) * 2;
      }
      iVar6 = fn_82CE5410();
      uVar1 = *(uint *)(iVar4 + 0x24);
      lVar17 = (ulonglong)uVar1 + lVar13;
      iVar8 = (int)lVar17;
      if ((int)(*(uint *)(iVar4 + 0x28) & 0x3fffffff) < iVar8) {
        lVar2 = ((ulonglong)*(uint *)(iVar4 + 0x28) & 0x3fffffff) << 1;
        if (iVar8 < (int)lVar2) {
          lVar17 = lVar2;
        }
        fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),(int *)(iVar4 + 0x20),lVar17,4);
      }
      iVar6 = 0;
      puVar15 = (undefined4 *)(uVar1 * 4 + *(int *)(iVar4 + 0x20));
      *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + (int)lVar13;
      puVar5 = (undefined4 *)param_2[3];
      puVar10 = puVar15;
      if (0 < (int)param_2[7]) {
        do {
          iVar6 = iVar6 + 1;
          *puVar10 = *puVar5;
          puVar10[1] = puVar5[1];
          puVar10[2] = puVar5[2];
          puVar10 = (undefined4 *)(piVar19[5] + (int)puVar10);
          puVar5 = (undefined4 *)((int)puVar5 + param_2[5]);
        } while (iVar6 < (int)param_2[7]);
      }
    }
    *(undefined1 *)(piVar19 + 4) = *(undefined1 *)(param_2 + 4);
    piVar19[7] = param_2[7];
    iVar6 = param_2[6];
    piVar19[3] = (int)puVar15;
    piVar19[6] = iVar6;
    *(undefined1 *)((int)piVar19 + 0x11) = *(undefined1 *)((int)param_2 + 0x11);
    puVar11 = (undefined2 *)param_2[8];
    if (puVar11 == (undefined2 *)0x0) {
      piVar19[9] = 0;
      piVar19[8] = 0;
    }
    else {
      if (*(char *)((int)param_2 + 0x11) == '\x01') {
        piVar18 = (int *)(iVar4 + 0x2c);
        if (param_2[9] == 0) {
          iVar6 = fn_82CE5410();
          if (*(uint *)(iVar4 + 0x30) == (*(uint *)(iVar4 + 0x34) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),piVar18,1);
          }
          *(undefined1 *)(*(int *)(iVar4 + 0x30) + *piVar18) = *(undefined1 *)puVar11;
          iVar6 = *(int *)(iVar4 + 0x30);
          *(int *)(iVar4 + 0x30) = iVar6 + 1;
          piVar19[8] = iVar6 + *piVar18;
        }
        else {
          iVar6 = param_2[7];
          iVar7 = fn_82CE5410();
          iVar8 = *(int *)(iVar4 + 0x30);
          iVar16 = iVar8 + iVar6;
          if ((int)(*(uint *)(iVar4 + 0x34) & 0x3fffffff) < iVar16) {
            iVar3 = (*(uint *)(iVar4 + 0x34) & 0x3fffffff) << 1;
            if (iVar16 < iVar3) {
              iVar16 = iVar3;
            }
            fn_82CE6310(*(undefined4 *)(iVar7 + 0x10),piVar18,iVar16,1);
          }
          iVar16 = 0;
          iVar8 = *piVar18 + iVar8;
          *(int *)(iVar4 + 0x30) = iVar6 + *(int *)(iVar4 + 0x30);
          piVar19[8] = iVar8;
          puVar12 = (undefined1 *)param_2[8];
          if (0 < (int)param_2[7]) {
            do {
              *(undefined1 *)(iVar16 + iVar8) = *puVar12;
              iVar16 = iVar16 + 1;
              puVar12 = puVar12 + param_2[9];
            } while (iVar16 < (int)param_2[7]);
          }
        }
      }
      else {
        piVar18 = (int *)(iVar4 + 0x44);
        if (param_2[9] == 0) {
          iVar6 = fn_82CE5410();
          if (*(uint *)(iVar4 + 0x48) == (*(uint *)(iVar4 + 0x4c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),piVar18,2);
          }
          *(undefined2 *)(*(int *)(iVar4 + 0x48) * 2 + *piVar18) = *puVar11;
          iVar6 = *(int *)(iVar4 + 0x48);
          *(int *)(iVar4 + 0x48) = iVar6 + 1;
          piVar19[8] = (iVar6 + 1) * 2 + *piVar18 + -2;
        }
        else {
          uVar1 = param_2[7];
          iVar6 = fn_82CE5410();
          uVar14 = *(uint *)(iVar4 + 0x48);
          lVar13 = (ulonglong)uVar14 + (ulonglong)uVar1;
          iVar8 = (int)lVar13;
          if ((int)(*(uint *)(iVar4 + 0x4c) & 0x3fffffff) < iVar8) {
            lVar17 = ((ulonglong)*(uint *)(iVar4 + 0x4c) & 0x3fffffff) << 1;
            if (iVar8 < (int)lVar17) {
              lVar13 = lVar17;
            }
            fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),piVar18,lVar13,2);
          }
          iVar6 = uVar14 * 2 + *piVar18;
          *(uint *)(iVar4 + 0x48) = *(int *)(iVar4 + 0x48) + uVar1;
          iVar8 = 0;
          piVar19[8] = iVar6;
          puVar11 = (undefined2 *)param_2[8];
          if (0 < (int)param_2[7]) {
            puVar9 = (undefined2 *)(iVar6 + -2);
            do {
              iVar8 = iVar8 + 1;
              puVar9 = puVar9 + 1;
              *puVar9 = *puVar11;
              puVar11 = (undefined2 *)(param_2[9] + (int)puVar11);
            } while (iVar8 < (int)param_2[7]);
          }
        }
      }
      iVar6 = param_2[9];
      piVar19[9] = iVar6;
      if (iVar6 != 0) {
        if (*(char *)((int)piVar19 + 0x11) == '\x01') {
          piVar19[9] = 1;
        }
        else if (*(char *)((int)piVar19 + 0x11) == '\x02') {
          piVar19[9] = 2;
        }
      }
    }
    if (piVar19[8] == 0) {
      piVar19[0xc] = 1;
      piVar19[0xb] = 0;
      piVar19[10] = (int)&lbl_8323B1A0;
      piVar19[8] = (int)&lbl_8323B1A0;
      piVar19[0xd] = param_2[0xd];
    }
    else {
      piVar18 = (int *)(iVar4 + 0x38);
      if (param_2[0xb] == 0) {
        puVar5 = (undefined4 *)param_2[10];
        iVar6 = fn_82CE5410();
        if (*(uint *)(iVar4 + 0x3c) == (*(uint *)(iVar4 + 0x40) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),piVar18,4);
        }
        *(undefined4 *)(*(int *)(iVar4 + 0x3c) * 4 + *piVar18) = *puVar5;
        *(int *)(iVar4 + 0x3c) = *(int *)(iVar4 + 0x3c) + 1;
        piVar19[0xb] = 0;
        piVar19[0xc] = 1;
        piVar19[10] = *piVar18;
        piVar19[0xd] = param_2[0xd];
      }
      else {
        uVar1 = param_2[0xc];
        iVar6 = fn_82CE5410();
        uVar14 = *(uint *)(iVar4 + 0x3c);
        lVar13 = (ulonglong)uVar14 + (ulonglong)uVar1;
        iVar8 = (int)lVar13;
        if ((int)(*(uint *)(iVar4 + 0x40) & 0x3fffffff) < iVar8) {
          lVar17 = ((ulonglong)*(uint *)(iVar4 + 0x40) & 0x3fffffff) << 1;
          if (iVar8 < (int)lVar17) {
            lVar13 = lVar17;
          }
          fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),piVar18,lVar13,4);
        }
        iVar6 = 0;
        *(uint *)(iVar4 + 0x3c) = *(int *)(iVar4 + 0x3c) + uVar1;
        puVar5 = (undefined4 *)param_2[10];
        if (0 < (int)param_2[0xc]) {
          puVar10 = (undefined4 *)(uVar14 * 4 + *piVar18 + -4);
          do {
            iVar6 = iVar6 + 1;
            puVar10 = puVar10 + 1;
            *puVar10 = *puVar5;
            puVar5 = (undefined4 *)(param_2[0xb] + (int)puVar5);
          } while (iVar6 < (int)param_2[0xc]);
        }
        piVar19[0xb] = 4;
        piVar19[0xc] = param_2[0xc];
        piVar19[10] = *piVar18;
        piVar19[0xd] = param_2[0xd];
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),piVar18,4);
}

