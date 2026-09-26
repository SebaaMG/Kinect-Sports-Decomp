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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_60;
extern int fn_82230040();
extern int fn_8235A028();
extern int fn_82365BD8();
extern int fn_823915C8();
extern int fn_823BAC60();
extern int fn_823BADB0();
extern int fn_8265C9E0();
extern unsigned int iStack_70;
extern unsigned int iStack_74;
extern unsigned int iStack_88;
extern unsigned int iStack_98;
extern unsigned int lbl_82002B04;
extern unsigned int uStack_64;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;


void fn_823BA308(int *param_1,int param_2,int *param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  undefined8 uStack_a0;
  int iStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  undefined **ppuStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [96];
  
  uVar1 = param_1[4];
  uVar14 = *(int *)(param_2 + 8) - param_1[3];
  if (param_3[2] != *(int *)(param_4 + 8)) {
    if (uVar1 >> 1 < uVar14) {
      do {
        iVar10 = 0;
        if ((int *)*param_3 != (int *)0x0) {
          iVar10 = *(int *)*param_3;
        }
        uVar9 = param_3[2];
        if (*(uint *)(iVar10 + 8) <= uVar9) {
          uVar9 = uVar9 - *(uint *)(iVar10 + 8);
        }
        puVar5 = *(undefined8 **)(uVar9 * 4 + *(int *)(iVar10 + 4));
        if ((uint)param_1[2] <= param_1[4] + 1U) {
          fn_823915C8(param_1);
        }
        uVar9 = param_1[4] + param_1[3];
        if ((uint)param_1[2] <= uVar9) {
          uVar9 = uVar9 - param_1[2];
        }
        iVar10 = uVar9 * 4;
        if (*(int *)(param_1[1] + iVar10) == 0) {
          iVar4 = fn_8265C9E0(0x18);
          if (iVar4 == 0) {
            uStack_64 = 0;
            ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
            fn_82230040(&ppuStack_68);
          }
          *(int *)(param_1[1] + iVar10) = iVar4;
        }
        puVar6 = *(undefined8 **)(param_1[1] + iVar10);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = *puVar5;
          fn_82365BD8(puVar6 + 1,puVar5 + 1);
          fn_8235A028(puVar6 + 2,puVar5 + 2);
        }
        param_1[4] = param_1[4] + 1;
        iVar10 = param_3[2];
        param_3[2] = iVar10 + 1;
      } while (iVar10 + 1 != *(int *)(param_4 + 8));
      piVar11 = (int *)*param_1;
      piVar13 = (int *)0x0;
      iStack_88 = param_1[3];
      iStack_98 = iStack_88 + param_1[4];
      if ((piVar11 != (int *)0x0) && ((undefined4 *)*piVar11 != (undefined4 *)0x0)) {
        piVar13 = *(int **)*piVar11;
      }
      iStack_70 = iStack_88 + uVar1;
      uStack_78 = 0;
      if ((piVar13 != (int *)0x0) && ((undefined4 *)*piVar13 != (undefined4 *)0x0)) {
        uStack_78 = *(undefined4 *)*piVar13;
      }
      piVar13 = (int *)0x0;
      if ((piVar11 != (int *)0x0) && ((undefined4 *)*piVar11 != (undefined4 *)0x0)) {
        piVar13 = *(int **)*piVar11;
      }
      iStack_88 = iStack_88 + uVar14;
      uStack_90 = 0;
      if ((piVar13 != (int *)0x0) && ((uint *)*piVar13 != (uint *)0x0)) {
        uStack_90 = (ulonglong)*(uint *)*piVar13 << 0x20;
      }
      puVar7 = &uStack_a0;
      puVar6 = (undefined8 *)&uStack_78;
      puVar5 = &uStack_90;
    }
    else {
      do {
        iVar10 = 0;
        if ((int *)*param_3 != (int *)0x0) {
          iVar10 = *(int *)*param_3;
        }
        uVar9 = param_3[2];
        if (*(uint *)(iVar10 + 8) <= uVar9) {
          uVar9 = uVar9 - *(uint *)(iVar10 + 8);
        }
        puVar5 = *(undefined8 **)(uVar9 * 4 + *(int *)(iVar10 + 4));
        if ((uint)param_1[2] <= param_1[4] + 1U) {
          fn_823915C8(param_1);
        }
        iVar10 = param_1[3];
        if (iVar10 == 0) {
          iVar10 = param_1[2];
        }
        iVar4 = (iVar10 + -1) * 4;
        if (*(int *)(param_1[1] + iVar4) == 0) {
          iVar3 = fn_8265C9E0(0x18);
          if (iVar3 == 0) {
            uStack_7c = 0;
            ppuStack_80 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
            fn_82230040(&ppuStack_80);
          }
          *(int *)(param_1[1] + iVar4) = iVar3;
        }
        puVar6 = *(undefined8 **)(param_1[1] + iVar4);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = *puVar5;
          fn_82365BD8(puVar6 + 1,puVar5 + 1);
          fn_8235A028(puVar6 + 2,puVar5 + 2);
        }
        param_1[3] = iVar10 + -1;
        param_1[4] = param_1[4] + 1;
        iVar10 = param_3[2];
        param_3[2] = iVar10 + 1;
      } while (iVar10 + 1 != *(int *)(param_4 + 8));
      piVar13 = (int *)*param_1;
      piVar11 = (int *)0x0;
      iVar10 = param_1[3];
      iVar4 = param_1[4] - uVar1;
      if ((piVar13 != (int *)0x0) && ((undefined4 *)*piVar13 != (undefined4 *)0x0)) {
        piVar11 = *(int **)*piVar13;
      }
      iVar3 = iVar10 + iVar4;
      piVar8 = (int *)0x0;
      if ((piVar11 != (int *)0x0) && ((undefined4 *)*piVar11 != (undefined4 *)0x0)) {
        piVar8 = *(int **)*piVar11;
      }
      if (((piVar8 == (int *)0x0) || ((int *)*piVar8 == (int *)0x0)) ||
         (puVar2 = *(undefined4 **)*piVar8, puVar2 == (undefined4 *)0x0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *puVar2;
      }
      uStack_90 = CONCAT44(uVar12,iVar3);
      if (((piVar13 == (int *)0x0) || ((int *)*piVar13 == (int *)0x0)) ||
         (puVar2 = *(undefined4 **)*piVar13, puVar2 == (undefined4 *)0x0)) {
        uStack_78 = 0;
      }
      else {
        uStack_78 = *puVar2;
      }
      uStack_a0 = uStack_90;
      uStack_90 = CONCAT44(uStack_78,iVar10);
      iStack_74 = iVar10;
      if (iVar10 != iVar3) {
        do {
          iVar3 = iVar3 + -1;
          uStack_a0 = CONCAT44((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF),iVar3);
          if (iVar10 == iVar3) break;
          fn_823BADB0(uStack_90,uStack_a0);
          iVar10 = iVar10 + 1;
          uStack_90 = CONCAT44((((U64)(uStack_90) >> 0) & 0xFFFFFFFF),iVar10);
        } while (iVar10 != iVar3);
      }
      piVar11 = (int *)*param_1;
      piVar13 = (int *)0x0;
      iStack_98 = param_1[3];
      if ((piVar11 != (int *)0x0) && ((undefined4 *)*piVar11 != (undefined4 *)0x0)) {
        piVar13 = *(int **)*piVar11;
      }
      piVar8 = (int *)0x0;
      if ((piVar13 != (int *)0x0) && ((undefined4 *)*piVar13 != (undefined4 *)0x0)) {
        piVar8 = *(int **)*piVar13;
      }
      piVar13 = (int *)0x0;
      if ((piVar8 != (int *)0x0) && ((undefined4 *)*piVar8 != (undefined4 *)0x0)) {
        piVar13 = *(int **)*piVar8;
      }
      iStack_70 = iStack_98 + iVar4 + uVar14;
      uStack_78 = 0;
      if ((piVar13 != (int *)0x0) && ((undefined4 *)*piVar13 != (undefined4 *)0x0)) {
        uStack_78 = *(undefined4 *)*piVar13;
      }
      piVar13 = (int *)0x0;
      if ((piVar11 != (int *)0x0) && ((undefined4 *)*piVar11 != (undefined4 *)0x0)) {
        piVar13 = *(int **)*piVar11;
      }
      iStack_88 = iStack_98 + iVar4;
      uStack_90 = 0;
      if ((piVar13 != (int *)0x0) && ((uint *)*piVar13 != (uint *)0x0)) {
        uStack_90 = (ulonglong)*(uint *)*piVar13 << 0x20;
      }
      puVar7 = (undefined8 *)&uStack_78;
      puVar6 = &uStack_90;
      puVar5 = &uStack_a0;
    }
    uStack_a0 = ZEXT48(piVar11) << 0x20;
    iStack_74 = 0;
    fn_823BAC60(auStack_60,puVar5,puVar6,puVar7);
  }
  return;
}

