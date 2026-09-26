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
extern int fn_82D41960();
extern int fn_82D41D58();
extern int fn_82D43098();
extern int fn_82D43AA0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821388B0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323BF84;


longlong fn_82D4DE48(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined2 *puVar18;
  longlong lVar19;
  undefined2 *puVar20;
  undefined4 *puVar21;
  int *piVar23;
  ulonglong uVar22;
  
  iVar10 = fn_82D43098();
  iVar11 = fn_82CE5410();
  puVar12 = (undefined4 *)
            (**(code **)(**(int **)(iVar11 + 0x10) + 4))(*(int **)(iVar11 + 0x10),0x2c);
  *(undefined2 *)(puVar12 + 1) = 0x2c;
  *puVar12 = &lbl_821388B0;
  *(undefined2 *)((int)puVar12 + 6) = 1;
  puVar12[2] = 0;
  puVar12[3] = 0;
  piVar23 = (int *)(param_1 + 0xfc);
  puVar12[4] = 0x80000000;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0x80000000;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0x80000000;
  iVar11 = fn_82CE5410();
  if (*(uint *)(param_1 + 0x100) == (*(uint *)(param_1 + 0x104) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar11 + 0x10),piVar23,4);
  }
  *(undefined4 **)(*(int *)(param_1 + 0x100) * 4 + *piVar23) = puVar12;
  iVar11 = *(int *)(param_1 + 0x100) + 1;
  *(int *)(param_1 + 0x100) = iVar11;
  iVar11 = *(int *)(iVar11 * 4 + *piVar23 + -4);
  fn_82D43AA0(iVar10,param_2);
  *(undefined1 *)(iVar10 + 1) = *(undefined1 *)(param_2 + 1);
  puVar20 = *(undefined2 **)(param_2 + 4);
  if (puVar20 == (undefined2 *)0x0) {
    *(undefined2 *)(iVar10 + 8) = 0;
    *(undefined4 *)(iVar10 + 4) = 0;
  }
  else {
    if (*(char *)(param_2 + 1) == '\x01') {
      piVar23 = (int *)(iVar11 + 8);
      if (*(short *)(param_2 + 8) == 0) {
        iVar13 = fn_82CE5410();
        if (*(uint *)(iVar11 + 0xc) == (*(uint *)(iVar11 + 0x10) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar13 + 0x10),piVar23,1);
        }
        *(undefined1 *)(*piVar23 + *(int *)(iVar11 + 0xc)) = *(undefined1 *)puVar20;
        iVar13 = *(int *)(iVar11 + 0xc);
        *(int *)(iVar11 + 0xc) = iVar13 + 1;
        *(int *)(iVar10 + 4) = iVar13 + *piVar23;
      }
      else {
        iVar13 = *(int *)(param_2 + 0x18);
        iVar14 = fn_82CE5410();
        iVar16 = *(int *)(iVar11 + 0xc);
        iVar15 = iVar16 + iVar13;
        if ((int)(*(uint *)(iVar11 + 0x10) & 0x3fffffff) < iVar15) {
          iVar6 = (*(uint *)(iVar11 + 0x10) & 0x3fffffff) << 1;
          if (iVar15 < iVar6) {
            iVar15 = iVar6;
          }
          fn_82CE6310(*(undefined4 *)(iVar14 + 0x10),piVar23,iVar15,1);
        }
        iVar15 = 0;
        iVar16 = *piVar23 + iVar16;
        *(int *)(iVar11 + 0xc) = *(int *)(iVar11 + 0xc) + iVar13;
        *(int *)(iVar10 + 4) = iVar16;
        puVar17 = *(undefined1 **)(param_2 + 4);
        if (0 < iVar13) {
          do {
            *(undefined1 *)(iVar15 + iVar16) = *puVar17;
            iVar15 = iVar15 + 1;
            puVar17 = puVar17 + *(ushort *)(param_2 + 8);
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
    }
    else {
      piVar23 = (int *)(iVar11 + 0x20);
      if (*(short *)(param_2 + 8) == 0) {
        iVar13 = fn_82CE5410();
        if (*(uint *)(iVar11 + 0x24) == (*(uint *)(iVar11 + 0x28) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar13 + 0x10),piVar23,2);
        }
        *(undefined2 *)(*(int *)(iVar11 + 0x24) * 2 + *piVar23) = *puVar20;
        iVar13 = *(int *)(iVar11 + 0x24) + 1;
        *(int *)(iVar11 + 0x24) = iVar13;
        *(int *)(iVar10 + 4) = iVar13 * 2 + *piVar23 + -2;
      }
      else {
        uVar3 = *(uint *)(param_2 + 0x18);
        uVar22 = (ulonglong)uVar3;
        iVar13 = fn_82CE5410();
        uVar4 = *(uint *)(iVar11 + 0x24);
        lVar19 = uVar4 + uVar22;
        iVar16 = (int)lVar19;
        if ((int)(*(uint *)(iVar11 + 0x28) & 0x3fffffff) < iVar16) {
          lVar7 = ((ulonglong)*(uint *)(iVar11 + 0x28) & 0x3fffffff) << 1;
          if (iVar16 < (int)lVar7) {
            lVar19 = lVar7;
          }
          fn_82CE6310(*(undefined4 *)(iVar13 + 0x10),piVar23,lVar19,2);
        }
        iVar13 = uVar4 * 2 + *piVar23;
        *(uint *)(iVar11 + 0x24) = *(int *)(iVar11 + 0x24) + uVar3;
        *(int *)(iVar10 + 4) = iVar13;
        puVar20 = *(undefined2 **)(param_2 + 4);
        if (0 < (int)uVar3) {
          puVar18 = (undefined2 *)(iVar13 + -2);
          do {
            puVar18 = puVar18 + 1;
            *puVar18 = *puVar20;
            puVar20 = (undefined2 *)((uint)*(ushort *)(param_2 + 8) + (int)puVar20);
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
      }
    }
    sVar1 = *(short *)(param_2 + 8);
    *(short *)(iVar10 + 8) = sVar1;
    if (sVar1 != 0) {
      if (*(char *)(iVar10 + 1) == '\x01') {
        *(undefined2 *)(iVar10 + 8) = 1;
      }
      else if (*(char *)(iVar10 + 1) == '\x02') {
        *(undefined2 *)(iVar10 + 8) = 2;
      }
    }
  }
  if (*(int *)(iVar10 + 4) != 0) {
    uVar2 = *(ushort *)(param_2 + 10);
    piVar23 = (int *)(iVar11 + 0x14);
    iVar15 = fn_82CE5410();
    iVar13 = *(int *)(iVar11 + 0x18);
    iVar16 = iVar13 + (uint)uVar2;
    if ((int)(*(uint *)(iVar11 + 0x1c) & 0x3fffffff) < iVar16) {
      iVar14 = (*(uint *)(iVar11 + 0x1c) & 0x3fffffff) << 1;
      if (iVar16 < iVar14) {
        iVar16 = iVar14;
      }
      fn_82CE6310(*(undefined4 *)(iVar15 + 0x10),piVar23,iVar16,0xc);
    }
    iVar16 = 0;
    *(uint *)(iVar11 + 0x18) = (uint)uVar2 + *(int *)(iVar11 + 0x18);
    uVar9 = lbl_821AAD20;
    uVar8 = lbl_82002AE0;
    puVar21 = (undefined4 *)(iVar13 * 0xc + *piVar23);
    puVar12 = *(undefined4 **)(param_2 + 0xc);
    if (*(short *)(param_2 + 10) != 0) {
      do {
        puVar5 = *(undefined **)(param_2 + 0x10);
        *puVar21 = *puVar12;
        if (puVar5 == &lbl_8323BF84) {
          puVar21[1] = puVar12[1];
          puVar21[2] = puVar12[2];
        }
        else {
          *(short *)((int)puVar21 + 6) = (short)((uint)uVar8 >> 0x10);
          *(short *)(puVar21 + 1) = (short)((uint)uVar9 >> 0x10);
        }
        iVar16 = iVar16 + 1;
        puVar21 = puVar21 + 3;
        puVar12 = (undefined4 *)((int)*(short *)(param_2 + 2) + (int)puVar12);
      } while (iVar16 < (int)(uint)*(ushort *)(param_2 + 10));
    }
    if (*(short *)(param_2 + 2) == 0) {
      *(undefined2 *)(iVar10 + 2) = 0;
      *(undefined2 *)(iVar10 + 10) = 1;
    }
    else {
      *(undefined2 *)(iVar10 + 2) = 0xc;
      *(undefined2 *)(iVar10 + 10) = *(undefined2 *)(param_2 + 10);
    }
    *(int *)(iVar10 + 0xc) = *piVar23;
  }
  fn_82D41D58(param_1);
  iVar10 = fn_82D41960(param_1,iVar10);
  *(int *)(param_1 + 0xe0) = iVar10 + *(int *)(param_1 + 0xe0);
  return (ulonglong)*(uint *)(param_1 + 0xc4) - 1;
}

