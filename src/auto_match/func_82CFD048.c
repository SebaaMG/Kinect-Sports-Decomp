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
extern unsigned int *auStack_90;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82F68CC0();
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int uStack_70;
extern unsigned int uStack_80;


void fn_82CFD048(uint *param_1,char param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar8;
  longlong lVar7;
  longlong lVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint auStack_90 [2];
  int iStack_88;
  int iStack_84;
  uint uStack_80;
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  
  uVar2 = (ulonglong)param_1[1];
  lVar9 = 0;
  lVar5 = 0;
  if (0 < (longlong)(uVar2 - 1)) {
    do {
      iVar1 = (int)lVar5;
      if (0x7ffffffe < iVar1) break;
      uVar3 = *param_1;
      if (*(char *)(uVar3 + iVar1) == param_2) goto joined_r0x82cfd0c0;
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)(uVar2 - 1));
  }
LAB_82cfd2f8:
  uVar3 = *param_1;
  if (*(char *)(uVar3 + (int)lVar9) != '\0') {
    lVar7 = (uVar2 - lVar9) + -1;
    lVar5 = 0x7fffffff;
    if ((int)lVar7 < 0x7fffffff) {
      lVar5 = lVar7;
    }
    iStack_78 = 0;
    iStack_74 = 0;
    uStack_70 = 0x80000000;
    iVar1 = fn_82CE5410();
    iVar10 = (int)(lVar5 + 1);
    if ((int)(uStack_70 & 0x3fffffff) < iVar10) {
      lVar7 = ((ulonglong)uStack_70 & 0x3fffffff) << 1;
      if ((int)lVar7 <= iVar10) {
        lVar7 = lVar5 + 1;
      }
      fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),&iStack_78,lVar7,1);
    }
    iStack_74 = iVar10;
    fn_82F68CC0(iStack_78,(ulonglong)uVar3 + lVar9,lVar5);
    *(undefined1 *)(iStack_78 + (int)lVar5) = 0;
    iVar1 = fn_82CE5410();
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),param_3,0xc);
    }
    piVar12 = (int *)(param_3[1] * 0xc + *param_3);
    if (piVar12 != (int *)0x0) {
      *piVar12 = 0;
      piVar12[1] = 0;
      piVar12[2] = -0x80000000;
      auStack_90[0] = 1;
      iVar1 = fn_82CE5410();
      iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0xc))(*(int **)(iVar1 + 0x10),auStack_90,1);
      uVar2 = (ulonglong)auStack_90[0];
      uVar3 = auStack_90[0];
      if (auStack_90[0] == 0) {
        uVar3 = 0x80000000;
      }
      *piVar12 = iVar1;
      piVar12[1] = auStack_90[0];
      piVar12[2] = uVar3;
      if ((0 < (int)auStack_90[0]) && (puVar4 = (undefined1 *)(iVar1 + -1), auStack_90[0] != 0)) {
        do {
          puVar4 = puVar4 + 1;
          *puVar4 = 0;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    iVar10 = iStack_74;
    iVar1 = param_3[1];
    param_3[1] = iVar1 + 1;
    puVar11 = (undefined4 *)(iVar1 * 0xc + *param_3);
    iVar1 = fn_82CE5410();
    if ((int)(puVar11[2] & 0x3fffffff) < iVar10) {
      iVar8 = (puVar11[2] & 0x3fffffff) << 1;
      if (iVar8 <= iVar10) {
        iVar8 = iVar10;
      }
      fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),puVar11,iVar8,1);
    }
    puVar11[1] = iVar10;
    fn_82F68CC0(*puVar11,iStack_78,iVar10);
    iVar1 = fn_82CE5410();
    iStack_74 = 0;
    if ((uStack_70 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar1 + 0x10) + 0x10))
                (*(int **)(iVar1 + 0x10),iStack_78,uStack_70 & 0x3fffffff,1);
    }
  }
  return;
joined_r0x82cfd0c0:
  while (iVar1 != -1) {
    lVar6 = (uVar2 - lVar9) + -1;
    lVar7 = lVar5 - lVar9;
    if ((int)lVar6 < (int)(lVar5 - lVar9)) {
      lVar7 = lVar6;
    }
    iStack_88 = 0;
    iStack_84 = 0;
    uStack_80 = 0x80000000;
    iVar1 = fn_82CE5410();
    iVar10 = (int)(lVar7 + 1);
    if ((int)(uStack_80 & 0x3fffffff) < iVar10) {
      lVar6 = ((ulonglong)uStack_80 & 0x3fffffff) << 1;
      if ((int)lVar6 <= iVar10) {
        lVar6 = lVar7 + 1;
      }
      fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),&iStack_88,lVar6,1);
    }
    iStack_84 = iVar10;
    fn_82F68CC0(iStack_88,(ulonglong)uVar3 + lVar9,lVar7);
    *(undefined1 *)(iStack_88 + (int)lVar7) = 0;
    iVar1 = fn_82CE5410();
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),param_3,0xc);
    }
    piVar12 = (int *)(param_3[1] * 0xc + *param_3);
    if (piVar12 != (int *)0x0) {
      *piVar12 = 0;
      piVar12[1] = 0;
      piVar12[2] = -0x80000000;
      auStack_90[0] = 1;
      iVar1 = fn_82CE5410();
      iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0xc))(*(int **)(iVar1 + 0x10),auStack_90,1);
      uVar2 = (ulonglong)auStack_90[0];
      uVar3 = auStack_90[0];
      if (auStack_90[0] == 0) {
        uVar3 = 0x80000000;
      }
      *piVar12 = iVar1;
      piVar12[1] = auStack_90[0];
      piVar12[2] = uVar3;
      if ((0 < (int)auStack_90[0]) && (puVar4 = (undefined1 *)(iVar1 + -1), auStack_90[0] != 0)) {
        do {
          puVar4 = puVar4 + 1;
          *puVar4 = 0;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    iVar10 = iStack_84;
    iVar1 = param_3[1];
    param_3[1] = iVar1 + 1;
    puVar11 = (undefined4 *)(iVar1 * 0xc + *param_3);
    iVar1 = fn_82CE5410();
    if ((int)(puVar11[2] & 0x3fffffff) < iVar10) {
      iVar8 = (puVar11[2] & 0x3fffffff) << 1;
      if (iVar8 <= iVar10) {
        iVar8 = iVar10;
      }
      fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),puVar11,iVar8,1);
    }
    puVar11[1] = iVar10;
    fn_82F68CC0(*puVar11,iStack_88,iVar10);
    iVar1 = fn_82CE5410();
    iStack_84 = 0;
    if ((uStack_80 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar1 + 0x10) + 0x10))
                (*(int **)(iVar1 + 0x10),iStack_88,uStack_80 & 0x3fffffff,1);
    }
    uVar2 = (ulonglong)param_1[1];
    lVar9 = lVar5 + 1;
    iStack_88 = 0;
    uStack_80 = 0x80000000;
    iVar1 = (int)lVar9;
    lVar5 = lVar9;
    while( true ) {
      if (((int)(param_1[1] - 1) <= iVar1) || (iVar1 = (int)lVar5, 0x7ffffffe < iVar1))
      goto LAB_82cfd2f8;
      uVar3 = *param_1;
      if (*(char *)(uVar3 + iVar1) == param_2) break;
      lVar5 = lVar5 + 1;
      iVar1 = (int)lVar5;
    }
  }
  goto LAB_82cfd2f8;
}

