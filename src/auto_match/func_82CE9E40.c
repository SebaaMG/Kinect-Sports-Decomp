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
extern unsigned int *auStack_70;
extern int fn_82CE5410();
extern int fn_82CE6310();


undefined4 * fn_82CE9E40(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  uint *puVar17;
  longlong lVar16;
  uint auStack_70 [28];
  
  puVar11 = param_1 + 2;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar3 = fn_82CE5410();
  uVar5 = param_1[3];
  uVar1 = param_2[3];
  uVar12 = (ulonglong)uVar1;
  uVar10 = (ulonglong)uVar5;
  if ((int)uVar1 <= (int)uVar5) {
    uVar10 = uVar12;
  }
  if ((int)(param_1[4] & 0x3fffffff) < (int)uVar1) {
    uVar13 = ((ulonglong)(uint)param_1[4] & 0x3fffffff) << 1;
    if ((int)uVar13 <= (int)uVar1) {
      uVar13 = uVar12;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),puVar11,uVar13,0xc);
  }
  lVar8 = uVar5 - uVar12;
  if (0 < lVar8) {
    lVar15 = (uVar12 + ((ulonglong)uVar1 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + (ulonglong)*puVar11 +
             -4;
    do {
      iVar4 = fn_82CE5410();
      iVar3 = (int)lVar15;
      piVar2 = *(int **)(iVar4 + 0x10);
      *(undefined4 *)(iVar3 + 8) = 0;
      if ((*(uint *)(iVar3 + 0xc) & 0x80000000) == 0) {
        (**(code **)(*piVar2 + 0x10))
                  (piVar2,*(undefined4 *)(iVar3 + 4),*(uint *)(iVar3 + 0xc) & 0x3fffffff,4);
      }
      *(undefined4 *)(iVar3 + 4) = 0;
      lVar8 = lVar8 + -1;
      lVar15 = lVar15 + 0xc;
      *(undefined4 *)lVar15 = 0x80000000;
    } while (lVar8 != 0);
  }
  if (0 < (int)uVar10) {
    puVar14 = (uint *)(param_2[2] + 4);
    puVar17 = (uint *)(*puVar11 + 8);
    uVar13 = uVar10;
    do {
      iVar3 = fn_82CE5410();
      uVar5 = *puVar17 & 0x3fffffff;
      piVar2 = *(int **)(iVar3 + 0x10);
      if ((int)uVar5 < (int)*puVar14) {
        if ((*puVar17 & 0x80000000) == 0) {
          (**(code **)(*piVar2 + 0x10))(piVar2,puVar17[-2],uVar5,4);
        }
        auStack_70[0] = *puVar14;
        uVar5 = (**(code **)(*piVar2 + 0xc))(piVar2,auStack_70,4);
        puVar17[-2] = uVar5;
        *puVar17 = auStack_70[0];
      }
      uVar5 = *puVar14;
      uVar7 = (ulonglong)uVar5;
      puVar6 = (undefined4 *)puVar17[-2];
      puVar17[-1] = uVar5;
      if (0 < (int)uVar5) {
        iVar3 = puVar14[-1] - (int)puVar6;
        do {
          *puVar6 = *(undefined4 *)(iVar3 + (int)puVar6);
          puVar6 = puVar6 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      uVar13 = uVar13 - 1;
      puVar14 = puVar14 + 3;
      puVar17 = puVar17 + 3;
    } while (uVar13 != 0);
  }
  lVar15 = uVar12 - uVar10;
  lVar9 = (uVar10 + (uVar10 & 0x7fffffff) * 2 & 0x3fffffff) * 4;
  lVar8 = lVar9 + (ulonglong)(uint)param_2[2];
  lVar9 = lVar9 + (ulonglong)*puVar11;
  if (0 < lVar15) {
    lVar16 = lVar9 + 4;
    iVar3 = (int)lVar8;
    do {
      if (lVar16 != 4) {
        piVar2 = (int *)lVar16;
        piVar2[-1] = 0;
        *piVar2 = 0;
        piVar2[1] = -0x80000000;
        auStack_70[0] = *(uint *)((iVar3 - (int)lVar9) + (int)piVar2);
        if (auStack_70[0] == 0) {
          puVar6 = (undefined4 *)0x0;
          uVar10 = 0;
LAB_82cea088:
          auStack_70[0] = 0x80000000;
        }
        else {
          iVar4 = fn_82CE5410();
          puVar6 = (undefined4 *)
                   (**(code **)(**(int **)(iVar4 + 0x10) + 0xc))
                             (*(int **)(iVar4 + 0x10),auStack_70,4);
          uVar10 = (ulonglong)auStack_70[0];
          if (auStack_70[0] == 0) goto LAB_82cea088;
        }
        piVar2[1] = auStack_70[0];
        piVar2[-1] = (int)puVar6;
        *piVar2 = (int)uVar10;
        if (0 < (int)uVar10) {
          iVar4 = *(int *)lVar8 - (int)puVar6;
          do {
            *puVar6 = *(undefined4 *)(iVar4 + (int)puVar6);
            puVar6 = puVar6 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      lVar15 = lVar15 + -1;
      lVar16 = lVar16 + 0xc;
      lVar8 = lVar8 + 0xc;
    } while (lVar15 != 0);
  }
  param_1[3] = uVar1;
  return param_1;
}

