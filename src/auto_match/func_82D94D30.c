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
extern unsigned int *auStack_b0;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CED6A8();
extern int fn_82D94B58();
extern int fn_82D95968();
extern int fn_82D963E0();
extern unsigned int iStack_78;
extern unsigned int iStack_88;
extern unsigned int iStack_98;
extern unsigned int iStack_a8;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;


int fn_82D94D30(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar12;
  ulonglong uVar11;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  ulonglong uVar16;
  undefined1 auStack_b0 [8];
  int iStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  int iStack_98;
  uint uStack_94;
  uint uStack_90;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  int iStack_78;
  uint uStack_74;
  uint uStack_70;
  
  iVar2 = fn_82CE5410();
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x44);
  *(undefined2 *)(iVar2 + 4) = 0x44;
  iVar3 = fn_82D94B58();
  fn_82CED6A8(iVar3 + 0x38,param_1 + 0x38);
  piVar14 = (int *)(iVar3 + 8);
  *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined1 *)(iVar3 + 0x40) = *(undefined1 *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = fn_82CE5410();
  if ((int)(*(uint *)(iVar3 + 0x10) & 0x3fffffff) < iVar2) {
    iVar7 = (*(uint *)(iVar3 + 0x10) & 0x3fffffff) << 1;
    if (iVar7 <= iVar2) {
      iVar7 = iVar2;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),piVar14,iVar7,4);
  }
  *(int *)(iVar3 + 0xc) = iVar2;
  piVar13 = (int *)(iVar3 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar4 = fn_82CE5410();
  if ((int)(*(uint *)(iVar3 + 0x34) & 0x3fffffff) < iVar2) {
    iVar7 = (*(uint *)(iVar3 + 0x34) & 0x3fffffff) << 1;
    if (iVar7 <= iVar2) {
      iVar7 = iVar2;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),piVar13,iVar7,4);
  }
  *(int *)(iVar3 + 0x30) = iVar2;
  iVar2 = *(int *)(param_1 + 0x18);
  iVar4 = fn_82CE5410();
  if ((int)(*(uint *)(iVar3 + 0x1c) & 0x3fffffff) < iVar2) {
    iVar7 = (*(uint *)(iVar3 + 0x1c) & 0x3fffffff) << 1;
    if (iVar7 <= iVar2) {
      iVar7 = iVar2;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),(int *)(iVar3 + 0x14),iVar7,4);
  }
  *(int *)(iVar3 + 0x18) = iVar2;
  piVar15 = (int *)(iVar3 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  iVar4 = fn_82CE5410();
  if ((int)(*(uint *)(iVar3 + 0x28) & 0x3fffffff) < iVar2) {
    iVar7 = (*(uint *)(iVar3 + 0x28) & 0x3fffffff) << 1;
    if (iVar7 <= iVar2) {
      iVar7 = iVar2;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),piVar15,iVar7,4);
  }
  *(int *)(iVar3 + 0x24) = iVar2;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar4 = 0;
    do {
      iVar7 = *piVar14;
      uVar5 = (**(code **)(**(int **)(iVar4 + *(int *)(param_1 + 8)) + 0x18))();
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar7 + iVar4) = uVar5;
      iVar4 = iVar4 + 4;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar4 = 0;
    do {
      iVar7 = *piVar13;
      uVar5 = (**(code **)(**(int **)(iVar4 + *(int *)(param_1 + 0x2c)) + 0x2c))();
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar7 + iVar4) = uVar5;
      iVar4 = iVar4 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x30));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar4 = 0;
    do {
      iVar12 = 0;
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iVar4);
      if (0 < *(int *)(param_1 + 0xc)) {
        piVar9 = *(int **)(param_1 + 8);
        do {
          if (*piVar9 == *(int *)(iVar7 + 0x14)) goto LAB_82d94f80;
          iVar12 = iVar12 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar12 < *(int *)(param_1 + 0xc));
      }
      iVar12 = -1;
LAB_82d94f80:
      uVar5 = *(undefined4 *)(iVar12 * 4 + *piVar14);
      pcVar6 = (char *)fn_82D95968(auStack_b0,iVar7);
      if (*pcVar6 == '\0') {
        iVar12 = 0;
        if (0 < *(int *)(param_1 + 0xc)) {
          piVar9 = *(int **)(param_1 + 8);
          do {
            if (*piVar9 == *(int *)(iVar7 + 0x18)) goto LAB_82d94fe4;
            iVar12 = iVar12 + 1;
            piVar9 = piVar9 + 1;
          } while (iVar12 < *(int *)(param_1 + 0xc));
        }
        iVar12 = -1;
LAB_82d94fe4:
        uVar8 = *(undefined4 *)(iVar12 * 4 + *piVar14);
      }
      else {
        uVar8 = 0;
      }
      iVar12 = *(int *)(iVar3 + 0x14);
      uVar5 = fn_82D963E0(iVar7,uVar5,uVar8,0);
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar12 + iVar4) = uVar5;
      iVar4 = iVar4 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar4 = 0;
    do {
      piVar9 = *(int **)(*(int *)(param_1 + 0x20) + iVar4);
      if (piVar9 == (int *)0x0) {
        *(undefined4 *)(iVar4 + *piVar15) = 0;
      }
      else {
        iStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0x80000000;
        (**(code **)(*piVar9 + 0x10))(piVar9,&iStack_78);
        uVar1 = uStack_74;
        iStack_98 = 0;
        uStack_94 = 0;
        uStack_90 = 0x80000000;
        uVar16 = (ulonglong)uStack_74;
        iVar7 = fn_82CE5410();
        if ((int)(uStack_90 & 0x3fffffff) < (int)uVar1) {
          uVar11 = ((ulonglong)uStack_90 & 0x3fffffff) << 1;
          if ((int)uVar11 <= (int)uVar1) {
            uVar11 = uVar16;
          }
          fn_82CE6310(*(undefined4 *)(iVar7 + 0x10),&iStack_98,uVar11,4);
        }
        uStack_94 = uVar1;
        if (0 < (int)uVar1) {
          iVar7 = 0;
          do {
            iVar12 = 0;
            if (0 < *(int *)(param_1 + 0xc)) {
              piVar10 = *(int **)(param_1 + 8);
              do {
                if (*piVar10 == *(int *)(iVar7 + iStack_78)) goto LAB_82d95110;
                iVar12 = iVar12 + 1;
                piVar10 = piVar10 + 1;
              } while (iVar12 < *(int *)(param_1 + 0xc));
            }
            iVar12 = -1;
LAB_82d95110:
            *(undefined4 *)(iVar7 + iStack_98) = *(undefined4 *)(iVar12 * 4 + *piVar14);
            iVar7 = iVar7 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        iStack_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0x80000000;
        (**(code **)(*piVar9 + 0x14))(piVar9,&iStack_88);
        uVar1 = uStack_84;
        iStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0x80000000;
        uVar16 = (ulonglong)uStack_84;
        iVar7 = fn_82CE5410();
        if ((int)(uStack_a0 & 0x3fffffff) < (int)uVar1) {
          uVar11 = ((ulonglong)uStack_a0 & 0x3fffffff) << 1;
          if ((int)uVar11 <= (int)uVar1) {
            uVar11 = uVar16;
          }
          fn_82CE6310(*(undefined4 *)(iVar7 + 0x10),&iStack_a8,uVar11,4);
        }
        uStack_a4 = uVar1;
        if (0 < (int)uVar1) {
          iVar7 = 0;
          do {
            iVar12 = 0;
            if (0 < *(int *)(param_1 + 0x30)) {
              piVar10 = *(int **)(param_1 + 0x2c);
              do {
                if (*piVar10 == *(int *)(iVar7 + iStack_88)) goto LAB_82d951ec;
                iVar12 = iVar12 + 1;
                piVar10 = piVar10 + 1;
              } while (iVar12 < *(int *)(param_1 + 0x30));
            }
            iVar12 = -1;
LAB_82d951ec:
            *(undefined4 *)(iVar7 + iStack_a8) = *(undefined4 *)(iVar12 * 4 + *piVar13);
            iVar7 = iVar7 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        iVar7 = *piVar15;
        uVar5 = (**(code **)(*piVar9 + 0x1c))(piVar9,&iStack_98,&iStack_a8);
        *(undefined4 *)(iVar4 + iVar7) = uVar5;
        iVar7 = fn_82CE5410();
        uStack_a4 = 0;
        if ((uStack_a0 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                    (*(int **)(iVar7 + 0x10),iStack_a8,uStack_a0 & 0x3fffffff,4);
        }
        iStack_a8 = 0;
        uStack_a0 = 0x80000000;
        iVar7 = fn_82CE5410();
        uStack_84 = 0;
        if ((uStack_80 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                    (*(int **)(iVar7 + 0x10),iStack_88,uStack_80 & 0x3fffffff,4);
        }
        iStack_88 = 0;
        uStack_80 = 0x80000000;
        iVar7 = fn_82CE5410();
        uStack_94 = 0;
        if ((uStack_90 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                    (*(int **)(iVar7 + 0x10),iStack_98,uStack_90 & 0x3fffffff,4);
        }
        iStack_98 = 0;
        uStack_90 = 0x80000000;
        iVar7 = fn_82CE5410();
        uStack_74 = 0;
        if ((uStack_70 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                    (*(int **)(iVar7 + 0x10),iStack_78,uStack_70 & 0x3fffffff,4);
        }
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return iVar3;
}

