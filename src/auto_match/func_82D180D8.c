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
extern unsigned int *auStack_270;
extern unsigned int *auStack_280;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDCF0();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_288;
extern unsigned int uStack_28c;
extern unsigned int uStack_290;


void fn_82D180D8(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined8 in_r0;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  int iVar11;
  ulonglong uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int *piVar17;
  int iVar18;
  uint uStack_290;
  uint uStack_28c;
  uint uStack_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [624];
  
  if (*(char *)(param_1 + 0x1b5) == '\0') {
    fn_82CEE578(auStack_280,auStack_270,0x200);
    uVar1 = *(undefined4 *)(param_1 + 0x1b0);
    uVar2 = fn_82CEDB38(auStack_280,0xffffffff82134540);
    uVar2 = fn_82CEDCF0(uVar2,uVar1);
    fn_82CEDB38(uVar2,0xffffffff821c24f0);
    iVar3 = (**(code **)(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x79f9d886,auStack_270,0xffffffff8213450c,0x146);
    if (iVar3 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_280);
  }
  uVar8 = *(uint *)(param_1 + 0x28);
  uVar12 = (ulonglong)uVar8;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_288 = 0x80000000;
  iVar3 = fn_82CE5410();
  if ((int)(uStack_288 & 0x3fffffff) < (int)uVar8) {
    uVar9 = ((ulonglong)uStack_288 & 0x3fffffff) << 1;
    if ((int)uVar9 <= (int)uVar8) {
      uVar9 = uVar12;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),&uStack_290,uVar9);
  }
  uVar9 = (ulonglong)uStack_28c;
  lVar7 = uVar9 - uVar12;
  if (0 < lVar7) {
    lVar16 = (uVar12 + ((ulonglong)uVar8 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + (ulonglong)uStack_290
             + -4;
    do {
      iVar4 = fn_82CE5410();
      iVar3 = (int)lVar16;
      piVar13 = *(int **)(iVar4 + 0x10);
      *(undefined4 *)(iVar3 + 8) = 0;
      if ((*(uint *)(iVar3 + 0xc) & 0x80000000) == 0) {
        (**(code **)(*piVar13 + 0x10))
                  (piVar13,*(undefined4 *)(iVar3 + 4),*(uint *)(iVar3 + 0xc) & 0x3fffffff);
      }
      *(undefined4 *)(iVar3 + 4) = 0;
      lVar7 = lVar7 + -1;
      lVar16 = lVar16 + 0xc;
      *(undefined4 *)lVar16 = 0x80000000;
    } while (lVar7 != 0);
    uVar9 = (ulonglong)uStack_28c;
  }
  lVar7 = uVar12 - uVar9;
  uVar12 = (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + (ulonglong)uStack_290;
  if (0 < lVar7) {
    do {
      if ((uVar12 & 0xffffffff) != 0) {
        puVar10 = (undefined4 *)uVar12;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0x80000000;
      }
      uVar12 = uVar12 + 0xc;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  uStack_28c = uVar8;
  for (puVar10 = *(undefined4 **)(param_1 + 0x3c); puVar10 != (undefined4 *)0x0;
      puVar10 = (undefined4 *)*puVar10) {
    piVar13 = puVar10 + 2;
    uVar8 = 0;
    do {
      uVar15 = uVar8 + 1;
      piVar17 = (int *)(*(int *)(*piVar13 + 0x34) * 0xc + uStack_290);
      iVar3 = puVar10[(-(uint)(uVar8 != 2) & uVar15) + 2];
      iVar4 = fn_82CE5410();
      if (piVar17[1] == (piVar17[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),piVar17,4);
      }
      piVar13 = piVar13 + 1;
      *(undefined4 *)(piVar17[1] * 4 + *piVar17) = *(undefined4 *)(iVar3 + 0x34);
      piVar17[1] = piVar17[1] + 1;
      uVar8 = uVar15;
    } while ((int)uVar15 < 3);
  }
  param_2[1] = 0;
  lVar7 = (ulonglong)*(uint *)(param_1 + 0x40) +
          ((ulonglong)*(uint *)(param_1 + 0x40) & 0x7fffffff) * 2 +
          (ulonglong)*(uint *)(param_1 + 0x28);
  iVar3 = fn_82CE5410();
  iVar4 = (int)lVar7;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar4) {
    lVar16 = ((ulonglong)(uint)param_2[2] & 0x3fffffff) << 1;
    if ((int)lVar16 <= iVar4) {
      lVar16 = lVar7;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_2,lVar16,4);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = fn_82CE5410();
  if ((int)(param_3[2] & 0x3fffffffU) < iVar3) {
    iVar11 = (param_3[2] & 0x3fffffffU) << 1;
    if (iVar11 <= iVar3) {
      iVar11 = iVar3;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),param_3,iVar11,4);
  }
  iVar4 = 0;
  param_3[1] = iVar3;
  iVar3 = 0;
  if (0 < (int)uStack_28c) {
    iVar14 = 0;
    iVar11 = 0;
    uVar8 = uStack_290;
    do {
      uVar1 = *(undefined4 *)(uVar8 + 4);
      iVar5 = fn_82CE5410();
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),param_2,4);
      }
      iVar5 = 0;
      *(undefined4 *)(param_2[1] * 4 + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      if (0 < *(int *)(iVar14 + uStack_290 + 4)) {
        iVar18 = 0;
        do {
          puVar10 = (undefined4 *)(*(int *)(iVar14 + uStack_290) + iVar18);
          iVar6 = fn_82CE5410();
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),param_2,4);
          }
          iVar5 = iVar5 + 1;
          iVar18 = iVar18 + 4;
          *(undefined4 *)(param_2[1] * 4 + *param_2) = *puVar10;
          param_2[1] = param_2[1] + 1;
        } while (iVar5 < *(int *)(iVar14 + 4 + uStack_290));
      }
      iVar4 = iVar4 + 1;
      *(int *)(iVar11 + *param_3) = iVar3;
      iVar11 = iVar11 + 4;
      iVar5 = iVar14 + uStack_290;
      iVar14 = iVar14 + 0xc;
      uVar8 = iVar14 + uStack_290;
      iVar3 = *(int *)(iVar5 + 4) + iVar3 + 1;
    } while (iVar4 < (int)uStack_28c);
  }
  iVar3 = fn_82CE5410();
  uVar12 = (ulonglong)uStack_28c;
  piVar13 = *(int **)(iVar3 + 0x10);
  if (0 < (int)uStack_28c) {
    puVar10 = (undefined4 *)(uStack_290 - 4);
    do {
      iVar3 = fn_82CE5410();
      piVar17 = *(int **)(iVar3 + 0x10);
      puVar10[2] = 0;
      if ((puVar10[3] & 0x80000000) == 0) {
        (**(code **)(*piVar17 + 0x10))(piVar17,puVar10[1],puVar10[3] & 0x3fffffff,4);
      }
      puVar10[1] = 0;
      uVar12 = uVar12 - 1;
      puVar10 = puVar10 + 3;
      *puVar10 = 0x80000000;
    } while (uVar12 != 0);
  }
  uStack_28c = 0;
  if ((uStack_288 & 0x80000000) == 0) {
    (**(code **)(*piVar13 + 0x10))(piVar13,uStack_290,uStack_288 & 0x3fffffff,0xc);
  }
  return;
}

