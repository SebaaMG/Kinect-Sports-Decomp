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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82904370();
extern int fn_82F68CC0();
extern unsigned int uStack_84;


longlong fn_82907A18(int param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                      int param_5,ulonglong param_6)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  undefined4 uStack_84;
  int *apiStack_80 [32];
  
  if ((*(uint *)(*(int *)(param_1 + 8) + 0x70) & 0x40000) == 0) {
    lVar4 = fn_8265C940((param_6 & 0x1fffffff) << 3,0x24810000);
    if (lVar4 == 0) {
LAB_82907b90:
      lVar10 = -0x7ff8fff2;
      goto LAB_82907d24;
    }
    uVar9 = 0;
    if ((param_6 & 0x7fffffff) != 0) {
      lVar6 = lVar4 + -4;
      do {
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 4;
        *(undefined4 *)lVar6 = 0xffffffff;
      } while ((uVar9 & 0xffffffff) < (param_6 & 0x7fffffff) << 1);
    }
    lVar6 = (param_6 & 0x3fffffff) * 4;
    puVar8 = &uStack_84;
    lVar12 = 2;
    lVar10 = lVar4;
    do {
      puVar8 = puVar8 + 1;
      *puVar8 = (int)lVar10;
      lVar10 = lVar10 + lVar6;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    uVar7 = 4;
    if ((param_6 & 0xffffffff) == 0) {
LAB_82907ae8:
      uVar9 = param_6 & 0xfffff | 0x10000000;
      iVar5 = 0;
    }
    else {
      piVar11 = (int *)(param_5 + -4);
      uVar9 = param_6;
      do {
        piVar11 = piVar11 + 1;
        uVar7 = **(uint **)(*piVar11 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14)) & uVar7;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      if (uVar7 != 0) goto LAB_82907ae8;
      uVar9 = param_6 & 0xfffff | 0x20500000;
      iVar5 = param_5;
    }
    lVar10 = fn_82904370(param_1,param_2,uVar9,apiStack_80[0],param_5,iVar5,4);
    if (((int)lVar10 < 0) ||
       (lVar10 = fn_82904370(param_1,param_2,param_6 & 0xfffff | 0x10100000,apiStack_80[1],
                               apiStack_80[0],0,8), lVar10 < 0)) goto LAB_82907d24;
    apiStack_80[2] = apiStack_80[1];
    if ((param_3 & 0xffffffff) != 0) {
      fn_82F68CC0(param_3,apiStack_80[0],lVar6);
    }
  }
  else {
    lVar4 = fn_8265C940(param_6 * 0xc,0x24810000);
    if (lVar4 == 0) goto LAB_82907b90;
    uVar9 = 0;
    if ((param_6 * 3 & 0xffffffff) != 0) {
      lVar6 = lVar4 + -4;
      do {
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 4;
        *(undefined4 *)lVar6 = 0xffffffff;
      } while ((uVar9 & 0xffffffff) < (param_6 * 3 & 0xffffffff));
    }
    lVar6 = (param_6 & 0x3fffffff) * 4;
    puVar8 = &uStack_84;
    lVar12 = 3;
    lVar10 = lVar4;
    do {
      puVar8 = puVar8 + 1;
      *puVar8 = (int)lVar10;
      lVar10 = lVar10 + lVar6;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    uVar9 = param_6 & 0xfffff | 0x10100000;
    lVar10 = fn_82904370(param_1,param_2,uVar9,apiStack_80[0],param_5,0,0);
    if (((lVar10 < 0) ||
        (lVar10 = fn_82904370(param_1,param_2,param_6 & 0xfffff | 0x20100000,apiStack_80[1],
                                param_5,apiStack_80[0],4), lVar10 < 0)) ||
       (lVar10 = fn_82904370(param_1,param_2,uVar9,apiStack_80[2],apiStack_80[1],0,8), lVar10 < 0)
       ) goto LAB_82907d24;
    if ((param_6 & 0xffffffff) != 0) {
      piVar11 = apiStack_80[1];
      do {
        iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x14);
        puVar1 = *(uint **)(*(int *)((param_5 - (int)apiStack_80[1]) + (int)piVar11) * 4 + iVar5);
        puVar2 = *(uint **)(*piVar11 * 4 + iVar5);
        *puVar2 = *puVar1 & 0x17 | *puVar2;
        piVar3 = (int *)(((int)apiStack_80[2] - (int)apiStack_80[1]) + (int)piVar11);
        piVar11 = piVar11 + 1;
        puVar2 = *(uint **)(*piVar3 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
        *puVar2 = *puVar1 & 0x12 | *puVar2;
        param_6 = param_6 - 1;
      } while (param_6 != 0);
    }
    if ((param_3 & 0xffffffff) != 0) {
      fn_82F68CC0(param_3,apiStack_80[1],lVar6);
    }
  }
  if ((param_4 & 0xffffffff) != 0) {
    fn_82F68CC0(param_4,apiStack_80[2],lVar6);
  }
  lVar10 = 0;
LAB_82907d24:
  fn_8265C990(lVar4,0x24810000);
  return lVar10;
}

