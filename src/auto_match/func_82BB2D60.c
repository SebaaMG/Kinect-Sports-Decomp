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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82AB15D0();
extern int fn_82BB2C20();
extern int fn_82BB9E50();
extern int fn_82BBA368();
extern int fn_82F68CC0();


void fn_82BB2D60(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 auStack_60 [4];
  undefined4 auStack_50 [20];
  
  piVar10 = *(int **)(param_1 + 0x10);
  iVar6 = 1;
  *(int *)(param_1 + 0x14) = piVar10[6];
  *(uint *)(param_1 + 0x18) = (uint)*(byte *)(piVar10 + 0x29);
  iVar3 = (**(code **)(*piVar10 + 4))();
  if (0 < iVar3) {
    iVar3 = 0xcc;
    puVar11 = (uint *)(param_1 + 0x20);
    do {
      puVar11[1] = (uint)*(byte *)(iVar6 + *(int *)(param_1 + 0x10) + 0x98);
      iVar4 = iVar6 + *(int *)(param_1 + 0x10);
      iVar6 = iVar6 + 1;
      puVar11 = puVar11 + 2;
      *puVar11 = (uint)*(byte *)(iVar4 + 0x9e);
      *(undefined4 *)(param_1 + -0x7c + iVar3) = *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x10));
      iVar3 = iVar3 + 4;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 4))();
    } while (iVar6 <= iVar4);
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))();
  if (iVar3 == 0) {
    lVar14 = 1;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 4))();
    if (0 < iVar3) {
      lVar12 = 0x1d;
      do {
        iVar3 = **(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + (int)lVar12 + 3) + 0x2c) + 4
                          );
        uVar5 = fn_82BB9E50(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x80));
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc) = uVar5;
        auStack_60[0] =
             fn_82BBA368(*(undefined4 *)(param_1 + 0x10),lVar14,
                               *(undefined4 *)(*(int *)(param_1 + 0x104) + 0xab0));
        lVar13 = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc) = 0;
        do {
          iVar6 = fn_82BB2C20(auStack_60,lVar13);
          if (iVar6 == 0) {
            *(undefined4 *)((int)((lVar12 + lVar13 & 0xffffffffU) << 2) + param_1) = 0;
          }
          else {
            iVar6 = (**(code **)(**(int **)(param_1 + 0x10) + 0x50))
                              (*(int **)(param_1 + 0x10),lVar14,lVar13);
            *(undefined4 *)((int)((lVar12 + lVar13 & 0xffffffffU) << 2) + param_1) =
                 *(undefined4 *)(iVar6 * 4 + iVar3);
          }
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < 4);
        lVar14 = lVar14 + 1;
        lVar12 = lVar12 + 4;
        iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 4))();
      } while ((int)lVar14 <= iVar3);
    }
    iVar3 = *(int *)(param_1 + 0x10);
    if ((*(uint *)(iVar3 + 0xe4) >> 9 & 1) != 0) {
      iVar3 = **(int **)(*(int *)(*(int *)((*(int *)(iVar3 + 0x14) + 7) * 4 + iVar3) + 0x2c) + 4);
      auStack_50[1] = *(undefined4 *)(iVar3 + 4);
      auStack_50[2] = *(undefined4 *)(iVar3 + 8);
      auStack_50[3] = *(undefined4 *)(iVar3 + 0xc);
    }
    iVar3 = 0;
    piVar10 = (int *)(param_1 + 100);
    do {
      iVar6 = (**(code **)(**(int **)(param_1 + 0x10) + 0x50))(*(int **)(param_1 + 0x10),0,iVar3);
      if (iVar6 == 1) {
        piVar1 = *(int **)(param_1 + 0x10);
        iVar6 = piVar1[5];
        iVar4 = (**(code **)(*piVar1 + 0x50))(piVar1,iVar6,iVar3);
        *(undefined4 *)((iVar6 * 4 + iVar3 + 0x19) * 4 + param_1) = auStack_50[iVar4];
      }
      else if (iVar6 == 2) {
        *piVar10 = 2;
      }
      else if (iVar6 == 3) {
        *piVar10 = 1;
      }
      else if ((3 < iVar6) && (iVar6 < 8)) {
        *piVar10 = iVar6;
      }
      iVar3 = iVar3 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar3 < 4);
  }
  else {
    iVar6 = 1;
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x14);
    if (0 < iVar3) {
      piVar10 = (int *)(*(int *)(param_1 + 0x10) + 0xec);
      do {
        if (*piVar10 == 0) {
          bVar2 = false;
          goto LAB_82bb2e58;
        }
        iVar6 = iVar6 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar6 <= iVar3);
    }
    bVar2 = true;
LAB_82bb2e58:
    if (!bVar2) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfe38,0xffffffff820dfe60,0x2a5);
    }
    iVar3 = 1;
    if (0 < *(int *)(*(int *)(param_1 + 0x10) + 0x14)) {
      iVar6 = 4;
      do {
        iVar4 = 0;
        lVar14 = 4;
        do {
          iVar9 = iVar6 + iVar4;
          iVar8 = iVar6 + 0x19 + iVar4;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(iVar8 * 4 + param_1) =
               *(undefined4 *)((iVar9 + 0x5b) * 4 + *(int *)(param_1 + 0x10));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar3 <= *(int *)(*(int *)(param_1 + 0x10) + 0x14));
    }
  }
  fn_82F68CC0(param_1 + 0xc4,(ulonglong)*(uint *)(param_1 + 0x10) + 0xa8,0x20);
  cVar7 = (**(code **)(**(int **)(param_1 + 0x10) + 0x20))();
  if (cVar7 != '\0') {
    *(undefined4 *)(param_1 + 0xd4) = 0;
    fn_82F68CC0(param_1 + 0xe4,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xb8),0x1e);
  }
  *(undefined1 *)(param_1 + 0x108) = 1;
  return;
}

