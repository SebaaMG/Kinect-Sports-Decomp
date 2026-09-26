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
extern int fn_82CE63B0();
extern int fn_82D2C1E8();
extern int fn_82D2E758();


void fn_82D2E9B8(int param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  
  if (*(int *)(param_1 + 0x24c) == 0) {
    fn_82D2E758();
  }
  uVar7 = (ulonglong)(uint)param_2[1];
  puVar1 = *(uint **)(param_1 + 0x24c);
  uVar2 = puVar1[1];
  iVar5 = *(int *)((int)((uVar7 + 2 & 0xffffffff) << 2) + *param_2);
  iVar9 = *(int *)((int)(((-(ulonglong)(uVar7 != 2) & uVar7 + 1) + 2 & 0xffffffff) << 2) + *param_2)
  ;
  trapWord(6,(ulonglong)uVar2,0);
  iVar6 = 0;
  uVar8 = *(int *)(iVar5 + 0xc) * 0x3442a5 + *(int *)(iVar5 + 8) * 0x21528000 ^
          *(int *)(iVar9 + 0xc) * 0x1958e9 + *(int *)(iVar9 + 8) * -0x538b8000;
  piVar12 = (int *)((uVar8 - (uVar8 / uVar2) * uVar2) * 0xc + *puVar1);
  iVar4 = piVar12[1];
  if (iVar4 < 1) {
LAB_82d2eae0:
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = (int *)*piVar12;
    piVar11 = piVar12;
    do {
      if ((*piVar11 == iVar5) && (piVar11[1] == iVar9)) {
        if (iVar6 == -1) goto LAB_82d2eae0;
        piVar12 = piVar12 + iVar6 * 3;
        goto LAB_82d2eaf8;
      }
      iVar6 = iVar6 + 1;
      piVar11 = piVar11 + 3;
    } while (iVar6 < iVar4);
    piVar12 = (int *)0x0;
  }
LAB_82d2eaf8:
  if (piVar12 == (int *)0x0) {
    uVar2 = puVar1[1];
    uVar7 = (longlong)(*(int *)(iVar9 + 8) * 0x8000 + *(int *)(iVar9 + 0xc)) * 0x1958e9 ^
            (longlong)(*(int *)(iVar5 + 8) * 0x8000 + *(int *)(iVar5 + 0xc)) * 0x3442a5;
    puVar1[3] = puVar1[3] + 1;
    trapWord(6,(ulonglong)uVar2,0);
    uVar7 = uVar7 - (longlong)(int)((uVar7 & 0xffffffff) / (ulonglong)uVar2) * (longlong)(int)uVar2;
    lVar13 = (uVar7 + (uVar7 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + (ulonglong)*puVar1;
    iVar4 = fn_82CE5410();
    piVar12 = (int *)lVar13;
    if (piVar12[1] == (piVar12[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),lVar13,0xc);
    }
    puVar10 = (undefined4 *)(piVar12[1] * 0xc + *piVar12);
    if (puVar10 != (undefined4 *)0x0) {
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[2] = 0;
    }
    iVar4 = piVar12[1];
    piVar12[1] = iVar4 + 1;
    piVar11 = (int *)(iVar4 * 0xc + *piVar12);
    *piVar11 = iVar5;
    piVar11[1] = iVar9;
    piVar11[2] = 0;
    iVar4 = piVar12[1] * 0xc + *piVar12;
    piVar12 = (int *)(iVar4 + -0xc);
    if ((*(int *)(param_1 + 0x254) == 0) ||
       (iVar5 = **(int **)(param_1 + 0x250), *(int *)(iVar5 + 0x380) == 0)) {
      iVar5 = fn_82D2C1E8();
    }
    puVar10 = *(undefined4 **)(iVar5 + 0x380);
    uVar3 = *puVar10;
    *(int *)(iVar5 + 900) = *(int *)(iVar5 + 900) + 1;
    *(undefined4 *)(iVar5 + 0x380) = uVar3;
    *puVar10 = puVar10 + 3;
    puVar10[1] = 0;
    puVar10[2] = 0x80000004;
    *(undefined4 **)(iVar4 + -4) = puVar10;
  }
  iVar4 = 0;
  piVar12 = (int *)piVar12[2];
  if (0 < param_3[1]) {
    iVar5 = 0;
    do {
      iVar9 = 0;
      if (0 < piVar12[1]) {
        piVar11 = (int *)*piVar12;
        do {
          if (*piVar11 == *(int *)(iVar5 + *param_3)) {
            if (iVar9 != -1) goto LAB_82d2ecf4;
            break;
          }
          iVar9 = iVar9 + 1;
          piVar11 = piVar11 + 1;
        } while (iVar9 < piVar12[1]);
      }
      iVar9 = *param_3;
      iVar6 = fn_82CE5410();
      if (piVar12[1] == (piVar12[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),piVar12,4);
      }
      *(undefined4 *)(piVar12[1] * 4 + *piVar12) = *(undefined4 *)(iVar5 + iVar9);
      piVar12[1] = piVar12[1] + 1;
LAB_82d2ecf4:
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < param_3[1]);
  }
  return;
}

