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
extern int fn_82A1EFC0();
extern int fn_82A1F2F8();
extern int fn_82BD7B10();
extern int fn_82BDA7C0();
extern int fn_82BDBD58();
extern int fn_82BDBE00();
extern int fn_82BDBFE0();
extern int fn_82F68CC0();


undefined8 fn_82BDC1F0(int *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  undefined2 *puVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  
  uVar10 = 0;
  uVar17 = 0;
  iVar3 = fn_82A1F2F8();
  piVar16 = (int *)param_1[0x1d];
  piVar8 = param_1 + 0x1d;
  param_1[5] = param_1[5] + (iVar3 - param_1[4]);
  while (piVar16 != (int *)0x0) {
    piVar4 = (int *)*piVar16;
    if ((((*piVar4 == 0x103) || (piVar4[6] != 0)) || ((uint)param_1[3] <= uVar17)) ||
       (param_1[5] < 0x14)) break;
    iVar18 = piVar4[5];
    if (*piVar4 != 0) {
      if ((iVar18 == 1) || (iVar18 == 2)) {
        piVar4[5] = 0;
        piVar4[3] = piVar4[3] << 2;
      }
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(piVar4[2],0,piVar4[3]);
    }
    if (iVar18 == 1) {
      uVar13 = (ulonglong)(uint)piVar4[2];
      uVar2 = piVar4[3] << 1;
      uVar7 = uVar2 | (uint)piVar4[3] >> 0x1f;
      uVar14 = (longlong)((int)uVar7 >> 2) + (ulonglong)((int)uVar7 < 0 && (uVar2 & 2) != 0);
      lVar12 = uVar14 * 3 + uVar13;
      fn_82F68CC0(lVar12,uVar13,uVar14);
      lVar11 = uVar14 * 7 + uVar13;
      fn_82F68CC0(lVar11,uVar14 + uVar13,uVar14);
      lVar9 = (uVar14 & 0x7fffffff) << 1;
      fn_82BDA7C0(1,lVar12,uVar13,lVar9,param_1 + 6);
      fn_82BDA7C0(1,lVar11,(uVar14 & 0x3fffffff) * 4 + uVar13,lVar9,param_1 + 6);
LAB_82bdc398:
      iVar18 = piVar4[3];
      piVar4[5] = 0;
      piVar4[3] = iVar18 << 2;
      piVar4[1] = iVar18 << 2;
    }
    else if (iVar18 == 2) {
      iVar18 = piVar4[3];
      pbVar5 = (byte *)(piVar4[2] + iVar18);
      puVar6 = (undefined2 *)(iVar18 * 4 + piVar4[2]);
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        pbVar5 = pbVar5 + -1;
        uVar1 = *(undefined2 *)((uint)*pbVar5 * 2 + -0x7ce8e1b8);
        puVar6[-1] = uVar1;
        puVar6 = puVar6 + -2;
        *puVar6 = uVar1;
      }
      goto LAB_82bdc398;
    }
    fn_82BDBD58(param_1,piVar4);
    fn_82BDBE00(param_1,piVar4,0);
    if ((param_1[0x24] == 1) && (param_1[0x22] != 0)) {
      uVar17 = ((int)piVar4 - param_1[0x21]) / 0x1c;
      if (uVar17 < (uint)param_1[3]) {
        puVar15 = (undefined4 *)(uVar17 * 8 + param_1[0x16]);
      }
      else {
        puVar15 = (undefined4 *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(*puVar15,0,0x18);
    }
    iVar18 = *piVar8;
    if (iVar18 != 0) {
      if (iVar18 == param_1[0x1e]) {
        param_1[0x1e] = 0;
      }
      *piVar8 = *(int *)(iVar18 + 4);
      *(undefined4 *)(iVar18 + 4) = 0;
    }
    if (piVar4[6] == 0) {
      fn_82BDBFE0(param_1,piVar16);
    }
    uVar7 = param_1[5];
    uVar17 = uVar17 + 1;
    param_1[4] = iVar3;
    param_1[5] = (int)((ulonglong)uVar7 - 0x14);
    if ((longlong)((ulonglong)uVar7 - 0x14) < 0) {
      param_1[5] = 0;
    }
    piVar16 = (int *)*piVar8;
  }
  uVar17 = 0;
  if (param_1[0x22] != 0) {
    piVar16 = param_1 + 0x14;
    do {
      iVar3 = *(int *)param_1[1] * 3 + *(int *)(*(int *)(*piVar16 + 0x18) + 0xc);
      uVar10 = fn_82BD7B10(*piVar16,*(undefined4 *)((iVar3 + 0x56) * 4 + *param_1),
                             *(undefined4 *)((iVar3 + 0x4a) * 4 + *param_1));
      uVar7 = 0;
      piVar8 = (int *)(*piVar16 + 0x10);
      do {
        if ((piVar8[-2] != 0) && (*piVar8 == 1)) goto LAB_82bdc568;
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (uVar7 < 2);
      param_1[0x24] = 0;
LAB_82bdc568:
      uVar17 = uVar17 + 1;
      piVar16 = piVar16 + 1;
    } while (uVar17 < (uint)param_1[0x22]);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
  }
  uVar17 = 0;
  if (param_1[0x22] != 0) {
    do {
      piVar8 = param_1 + uVar17 * 2 + 0x19;
      piVar16 = (int *)param_1[uVar17 * 2 + 0x19];
      while (piVar16 != (int *)0x0) {
        piVar16 = (int *)*piVar16;
        if (uVar17 == 2) {
          uVar7 = ((int)piVar16 - param_1[0x21]) / 0x1c;
        }
        else {
          uVar7 = ((int)piVar16 - param_1[uVar17 + 0x1f]) / 0x18;
        }
        if (uVar7 < (uint)param_1[3]) {
          piVar4 = (int *)(uVar7 * 8 + param_1[0x18]);
        }
        else {
          piVar4 = (int *)0x0;
        }
        iVar3 = *piVar4;
        if ((*piVar16 == 0x103) || (*(int *)(iVar3 + 0x18) == 0)) break;
        iVar18 = *piVar8;
        if (iVar18 != 0) {
          if (iVar18 == param_1[uVar17 * 2 + 0x1a]) {
            param_1[uVar17 * 2 + 0x1a] = 0;
          }
          *piVar8 = *(int *)(iVar18 + 4);
          *(undefined4 *)(iVar18 + 4) = 0;
        }
        lVar9 = (ulonglong)*(uint *)(iVar3 + 0x18) - 1;
        *(int *)(iVar3 + 0x18) = (int)lVar9;
        if (lVar9 == 0) {
          fn_82BDBFE0(param_1);
        }
        piVar16 = (int *)*piVar8;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < (uint)param_1[0x22]);
  }
  return uVar10;
}

