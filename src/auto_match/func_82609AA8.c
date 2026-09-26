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
extern int fn_8260A120();
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CED6A8();
extern int fn_82D94B58();
extern int fn_82D962A8();
extern unsigned int iStack_90;
extern unsigned int iStack_a0;
extern unsigned int iStack_b0;
extern unsigned int iStack_c0;
extern unsigned int lbl_821CA9D8;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


undefined4 * fn_82609AA8(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar3;
  int iVar8;
  int iVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar10;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined4 uVar17;
  int iStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_a0;
  uint uStack_9c;
  uint uStack_98;
  int iStack_90;
  uint uStack_8c;
  uint uStack_88;
  
  iVar4 = fn_82CE5410();
  puVar5 = (undefined4 *)(**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x44);
  *(undefined2 *)(puVar5 + 1) = 0x44;
  fn_82D94B58();
  *puVar5 = &lbl_821CA9D8;
  fn_82CED6A8(puVar5 + 0xe,param_1 + 0x38);
  piVar14 = puVar5 + 2;
  puVar5[0xf] = *(undefined4 *)(param_1 + 0x3c);
  *(undefined1 *)(puVar5 + 0x10) = *(undefined1 *)(param_1 + 0x40);
  iVar4 = *(int *)(param_1 + 0xc);
  iVar6 = fn_82CE5410();
  if ((int)(puVar5[4] & 0x3fffffff) < iVar4) {
    iVar8 = (puVar5[4] & 0x3fffffff) << 1;
    if (iVar8 <= iVar4) {
      iVar8 = iVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),piVar14,iVar8,4);
  }
  puVar5[3] = iVar4;
  piVar15 = puVar5 + 0xb;
  iVar4 = *(int *)(param_1 + 0x30);
  iVar6 = fn_82CE5410();
  if ((int)(puVar5[0xd] & 0x3fffffff) < iVar4) {
    iVar8 = (puVar5[0xd] & 0x3fffffff) << 1;
    if (iVar8 <= iVar4) {
      iVar8 = iVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),piVar15,iVar8,4);
  }
  puVar5[0xc] = iVar4;
  iVar4 = *(int *)(param_1 + 0x18);
  iVar6 = fn_82CE5410();
  if ((int)(puVar5[7] & 0x3fffffff) < iVar4) {
    iVar8 = (puVar5[7] & 0x3fffffff) << 1;
    if (iVar8 <= iVar4) {
      iVar8 = iVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),puVar5 + 5,iVar8,4);
  }
  puVar5[6] = iVar4;
  piVar16 = puVar5 + 8;
  iVar4 = *(int *)(param_1 + 0x24);
  iVar6 = fn_82CE5410();
  if ((int)(puVar5[10] & 0x3fffffff) < iVar4) {
    iVar8 = (puVar5[10] & 0x3fffffff) << 1;
    if (iVar8 <= iVar4) {
      iVar8 = iVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),piVar16,iVar8,4);
  }
  puVar5[9] = iVar4;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar6 = 0;
    do {
      iVar8 = *piVar14;
      uVar7 = (**(code **)(**(int **)(iVar6 + *(int *)(param_1 + 8)) + 0x18))();
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar6 + iVar8) = uVar7;
      iVar6 = iVar6 + 4;
    } while (iVar4 < *(int *)(param_1 + 0xc));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar6 = 0;
    do {
      iVar8 = *piVar15;
      uVar7 = (**(code **)(**(int **)(iVar6 + *(int *)(param_1 + 0x2c)) + 0x2c))();
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar6 + iVar8) = uVar7;
      iVar6 = iVar6 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x30));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar6 = 0;
    do {
      iVar13 = 0;
      iVar8 = *(int *)(param_1 + 0xc);
      iVar9 = *(int *)(iVar6 + *(int *)(param_1 + 0x14));
      if (0 < iVar8) {
        iVar11 = 0;
        do {
          if (*(int *)(iVar11 + *(int *)(param_1 + 8)) == *(int *)(iVar9 + 0x14)) goto LAB_82609d0c;
          iVar13 = iVar13 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar13 < iVar8);
      }
      iVar13 = -1;
LAB_82609d0c:
      iVar11 = 0;
      if (0 < iVar8) {
        iVar12 = 0;
        do {
          if (*(int *)(iVar12 + *(int *)(param_1 + 8)) == *(int *)(iVar9 + 0x18)) goto LAB_82609d44;
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar11 < iVar8);
      }
      iVar11 = -1;
LAB_82609d44:
      uVar7 = 0;
      uVar17 = 0;
      if (-1 < iVar13) {
        uVar7 = *(undefined4 *)(iVar13 * 4 + *piVar14);
      }
      if (-1 < iVar11) {
        uVar17 = *(undefined4 *)(iVar11 * 4 + *piVar14);
      }
      uVar3 = fn_8260A120(param_1,*(undefined4 *)(iVar9 + 0xc));
      if (uVar3 == 0) {
        uVar3 = (ulonglong)*(uint *)(iVar9 + 0xc);
        fn_82CE4040(uVar3);
      }
      iVar8 = fn_82CE5410();
      iVar8 = (**(code **)(**(int **)(iVar8 + 0x10) + 4))(*(int **)(iVar8 + 0x10),0x38);
      *(undefined2 *)(iVar8 + 4) = 0x38;
      uVar7 = fn_82D962A8(iVar8,uVar7,uVar17,uVar3,*(undefined1 *)(iVar9 + 0x1c));
      fn_82CE4118(uVar3);
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar6 + puVar5[5]) = uVar7;
      iVar6 = iVar6 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x18));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar6 = 0;
    do {
      piVar1 = *(int **)(iVar6 + *(int *)(param_1 + 0x20));
      if (piVar1 == (int *)0x0) {
        *(undefined4 *)(*piVar16 + iVar6) = 0;
      }
      else {
        iStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0x80000000;
        (**(code **)(*piVar1 + 0x10))(piVar1,&iStack_90);
        uVar2 = uStack_8c;
        iStack_b0 = 0;
        uStack_ac = 0;
        uStack_a8 = 0x80000000;
        uVar3 = (ulonglong)uStack_8c;
        iVar8 = fn_82CE5410();
        if ((int)(uStack_a8 & 0x3fffffff) < (int)uVar2) {
          uVar10 = ((ulonglong)uStack_a8 & 0x3fffffff) << 1;
          if ((int)uVar10 <= (int)uVar2) {
            uVar10 = uVar3;
          }
          fn_82CE6310(*(undefined4 *)(iVar8 + 0x10),&iStack_b0,uVar10,4);
        }
        uStack_ac = uVar2;
        if (0 < (int)uVar2) {
          iVar8 = 0;
          do {
            iVar9 = 0;
            if (0 < *(int *)(param_1 + 0xc)) {
              iVar13 = 0;
              do {
                if (*(int *)(iVar13 + *(int *)(param_1 + 8)) == *(int *)(iStack_90 + iVar8))
                goto LAB_82609eec;
                iVar9 = iVar9 + 1;
                iVar13 = iVar13 + 4;
              } while (iVar9 < *(int *)(param_1 + 0xc));
            }
            iVar9 = -1;
LAB_82609eec:
            *(undefined4 *)(iStack_b0 + iVar8) = *(undefined4 *)(iVar9 * 4 + *piVar14);
            iVar8 = iVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        uStack_9c = 0;
        uStack_98 = 0x80000000;
        iStack_a0 = 0;
        (**(code **)(*piVar1 + 0x14))(piVar1,&iStack_a0);
        uVar2 = uStack_9c;
        iStack_c0 = 0;
        uStack_bc = 0;
        uStack_b8 = 0x80000000;
        uVar3 = (ulonglong)uStack_9c;
        iVar8 = fn_82CE5410();
        if ((int)(uStack_b8 & 0x3fffffff) < (int)uVar2) {
          uVar10 = ((ulonglong)uStack_b8 & 0x3fffffff) << 1;
          if ((int)uVar10 <= (int)uVar2) {
            uVar10 = uVar3;
          }
          fn_82CE6310(*(undefined4 *)(iVar8 + 0x10),&iStack_c0,uVar10,4);
        }
        uStack_bc = uVar2;
        if (0 < (int)uVar2) {
          iVar8 = 0;
          do {
            iVar9 = 0;
            if (0 < *(int *)(param_1 + 0x30)) {
              iVar13 = 0;
              do {
                if (*(int *)(*(int *)(param_1 + 0x2c) + iVar13) == *(int *)(iStack_a0 + iVar8))
                goto LAB_82609fcc;
                iVar9 = iVar9 + 1;
                iVar13 = iVar13 + 4;
              } while (iVar9 < *(int *)(param_1 + 0x30));
            }
            iVar9 = -1;
LAB_82609fcc:
            *(undefined4 *)(iStack_c0 + iVar8) = *(undefined4 *)(iVar9 * 4 + *piVar15);
            iVar8 = iVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        iVar8 = *piVar16;
        uVar7 = (**(code **)(*piVar1 + 0x1c))(piVar1,&iStack_b0,&iStack_c0);
        *(undefined4 *)(iVar8 + iVar6) = uVar7;
        iVar8 = fn_82CE5410();
        uStack_bc = 0;
        if ((uStack_b8 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
                    (*(int **)(iVar8 + 0x10),iStack_c0,uStack_b8 & 0x3fffffff,4);
        }
        iStack_c0 = 0;
        uStack_b8 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_9c = 0;
        if ((uStack_98 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
                    (*(int **)(iVar8 + 0x10),iStack_a0,uStack_98 & 0x3fffffff,4);
        }
        iStack_a0 = 0;
        uStack_98 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_ac = 0;
        if ((uStack_a8 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
                    (*(int **)(iVar8 + 0x10),iStack_b0,uStack_a8 & 0x3fffffff,4);
        }
        iStack_b0 = 0;
        uStack_a8 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_8c = 0;
        if ((uStack_88 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
                    (*(int **)(iVar8 + 0x10),iStack_90,uStack_88 & 0x3fffffff,4);
        }
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x24));
  }
  return puVar5;
}

