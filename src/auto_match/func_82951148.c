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
extern int fn_82950FD0();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern int iRam00000010;
extern unsigned int uRam0000000c;


/* WARNING: Removing unreachable block (ram,0x82951518) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
fn_82951148(int *param_1,int *param_2,undefined8 param_3,int *param_4,undefined8 param_5,
             uint *param_6,int param_7,int param_8)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int aiStack_90 [4];
  int aiStack_80 [32];
  
  uVar2 = *param_6;
  uVar7 = uVar2 & 0xfffff;
  aiStack_90[2] = 0;
  aiStack_90[3] = 0;
  bVar1 = (uVar2 & 0xfffff) != 0;
  if ((param_1[0x1b] & 0x20U) == 0) {
    uVar11 = 0;
    if (bVar1) {
      iVar9 = 0;
      do {
        uVar8 = fn_82950FD0(param_1,*(undefined4 *)(iVar9 + (int)param_2),(int)aiStack_90 + iVar9,
                              (int)aiStack_80 + iVar9);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        uVar11 = uVar11 + 1;
        iVar9 = iVar9 + 4;
      } while (uVar11 < uVar7);
    }
    uVar11 = 0;
    if ((uVar2 & 0xfffff) != 0) {
      piVar12 = param_4;
      do {
        if (((*(int *)(*(int *)(*(int *)(((int)aiStack_80 - (int)param_4) + (int)piVar12) * 4 +
                               param_1[5]) + 0x38) != *piVar12) ||
            ((*(uint *)(*(int *)(*piVar12 * 4 + param_1[5]) + 0x3c) & 0x1f0000) != 0)) ||
           (*(int *)(((int)aiStack_90 - (int)param_4) + (int)piVar12) != 0)) goto LAB_82951534;
        uVar11 = uVar11 + 1;
        piVar12 = piVar12 + 1;
      } while (uVar11 < uVar7);
    }
    uVar11 = 0;
    if (uRam0000000c != 0) {
      iVar9 = 0;
      do {
        bVar1 = true;
        if ((uVar2 & 0xfffff) == 0) goto LAB_82951534;
        piVar12 = param_2;
        uVar13 = uVar7;
        do {
          iVar10 = *piVar12;
          piVar12 = piVar12 + 1;
          bVar1 = (bool)(iVar10 != *(int *)(iRam00000010 + iVar9) & bVar1);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        if (bVar1) goto LAB_82951534;
        uVar11 = uVar11 + 1;
        iVar9 = iVar9 + 4;
      } while (uVar11 < uRam0000000c);
    }
  }
  else {
    uVar11 = 0;
    if (bVar1) {
      piVar12 = param_4;
      do {
        iVar9 = *(int *)(*(int *)(((int)param_2 - (int)param_4) + (int)piVar12) * 4 + param_1[5]);
        if ((*(int *)(iVar9 + 0x38) != *piVar12) ||
           ((*(uint *)(iVar9 + 0x3c) & 0x1f0000) != 0x10000)) goto LAB_82951534;
        puVar3 = *(uint **)(*piVar12 * 4 + param_1[5]);
        uVar13 = puVar3[0xf];
        if (((uVar13 & 0x1f0000) != 0) ||
           (((uVar13 & 0x200) == 0 &&
            ((uVar13 = *puVar3, (uVar13 & 4) == 0 || ((uVar13 & 0x10) == 0)))))) goto LAB_82951534;
        uVar11 = uVar11 + 1;
        piVar12 = piVar12 + 1;
      } while (uVar11 < uVar7);
    }
  }
  iVar9 = fn_82963998(0x74);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = fn_829632A0();
  }
  if (iVar9 == 0) {
    uVar8 = 0xffffffff8007000e;
  }
  else {
    uVar8 = fn_82963A30(iVar9,uVar7 | 0x70100000,uVar7 * 3,uVar7,0);
    if ((-1 < (int)uVar8) && (uVar8 = fn_829632F0(iVar9,param_6), -1 < (int)uVar8)) {
      iVar10 = (uVar2 & 0xfffff) * 4;
      fn_82F68CC0(*(undefined4 *)(iVar9 + 0x10),*(undefined4 *)(param_7 + 0x10),iVar10);
      fn_82F68CC0(*(undefined4 *)(iVar9 + 8),param_4,iVar10);
      fn_82F68CC0((uVar2 & 0xfffff) * 8 + *(int *)(iVar9 + 8),param_3,iVar10);
      fn_82F68CC0(iVar10 + *(int *)(iVar9 + 8),param_5,iVar10);
      bVar1 = false;
      iVar10 = param_1[5];
      iVar4 = *(int *)(**(int **)(iVar9 + 8) * 4 + iVar10);
      iVar5 = *(int *)(**(int **)(iVar9 + 0x10) * 4 + iVar10);
      iVar6 = *(int *)((*(int **)(iVar9 + 8))[(uVar2 & 0xfffff) * 2] * 4 + iVar10);
      iVar10 = *(int *)(iVar5 + 4);
      if ((((iVar10 == *(int *)(iVar4 + 4)) && (*(int *)(iVar5 + 0xc) == *(int *)(iVar4 + 0xc))) ||
          (((iVar10 == *(int *)(iVar6 + 4) && (*(int *)(iVar5 + 0xc) == *(int *)(iVar6 + 0xc))) ||
           (iVar10 != param_1[0x22])))) && ((param_1[0x1b] & 0x20U) == 0)) {
        bVar1 = true;
      }
      iVar10 = (**(code **)(*param_1 + 0x20))(param_1,iVar9,0);
      if ((iVar10 != 0) ||
         ((((*(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + param_1[4]) + 4) & 0x20) != 0 || (bVar1))
          && ((param_1[0x1b] & 0x20U) == 0)))) {
        fn_82BA02A8(iVar9);
        fn_829639F0(iVar9);
LAB_82951534:
        uVar8 = 1;
      }
      else {
        uVar8 = fn_82963D50(*(undefined4 *)(param_1[6] + param_8 * 4),iVar9);
        if (-1 < (int)uVar8) {
          fn_82BA02A8(iVar9);
          fn_829639F0(iVar9);
          *param_6 = 0;
          uVar8 = 0;
        }
      }
    }
  }
  return uVar8;
}

