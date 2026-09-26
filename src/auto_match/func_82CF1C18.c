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
extern unsigned int *auStack_b8;
extern int fn_82CE5410();
extern int fn_82CED958();
extern int fn_82CEDAE8();
extern int fn_82CEDB38();
extern int fn_82CEDE90();
extern int fn_82CEE1B0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;


void fn_82CF1C18(undefined8 param_1,float *param_2,longlong param_3,longlong param_4,
                  longlong param_5,uint *param_6)

{
  ushort *puVar1;
  undefined1 uVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_b8 [16];
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0x80000000;
  fn_82CEE1B0(auStack_b8,&uStack_a8);
  iVar14 = (int)(param_4 + param_5);
  if ((int)param_3 != 0) {
    if (*(char *)(param_6 + 4) != '\0') {
      if ((float *)param_6[5] == param_2) {
        uVar3 = *(undefined1 *)(param_6 + 6);
      }
      else {
        uVar3 = 0x20;
      }
      fn_82CEDAE8(auStack_b8,uVar3);
    }
    iVar10 = (int)param_3 + -1;
    lVar7 = (longlong)(int)param_6[2] * (longlong)iVar10;
    if (0 < lVar7) {
      do {
        fn_82CEDAE8(auStack_b8,0x20);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(char *)(param_6 + 4) != '\0') {
      if ((int)param_2[0xd] < 1) {
        uVar3 = 0x20;
      }
      else if (((uint)param_2[0x14] & 1) == 0) {
        uVar3 = *(undefined1 *)(param_6 + 6);
      }
      else {
        uVar3 = *(undefined1 *)((int)param_6 + 0x19);
      }
      fn_82CEDAE8(auStack_b8,uVar3);
    }
    lVar6 = 0;
    lVar7 = 0;
    uVar2 = 0;
    uVar4 = 0;
    if (1 < iVar14) {
      puVar8 = (ushort *)((int)param_2 + 0x1e);
      lVar5 = (((param_4 + param_5) - 2U & 0xffffffff) >> 1) + 1;
      uVar4 = lVar5 * 2 & 0xfffffffe;
      do {
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 2;
        lVar6 = (ulonglong)*puVar1 + lVar6;
        lVar7 = (ulonglong)*puVar8 + lVar7;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if ((int)uVar4 < iVar14) {
      uVar2 = (ulonglong)*(ushort *)((int)((uVar4 + 0x10 & 0xffffffff) << 1) + (int)param_2);
    }
    fn_82CEDE90(auStack_b8,0xffffffff82133048,param_2[0x13],lVar6 + lVar7 + uVar2);
    lVar6 = 0;
    lVar7 = 0;
    iVar13 = 0;
    dVar15 = (double)lbl_821AAD20;
    iVar9 = (int)param_4;
    dVar16 = dVar15;
    if (0 < iVar14) {
      pfVar12 = param_2 + 8;
      pfVar11 = param_2;
      do {
        lVar5 = (((longlong)iVar10 * (longlong)(int)param_6[3] +
                 (longlong)iVar13 * (longlong)(int)param_6[1]) - (ulonglong)uStack_a4) +
                (ulonglong)*param_6;
        if (0 < lVar5) {
          do {
            fn_82CEDAE8(auStack_b8,0x20);
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        fn_82CEDE90(auStack_b8,0xffffffff8213303c,(double)*pfVar11,*(undefined2 *)pfVar12);
        if (iVar13 < iVar9) {
          dVar16 = (double)(float)((double)*pfVar11 + dVar16);
          lVar6 = (ulonglong)*(ushort *)pfVar12 + lVar6;
        }
        else {
          dVar15 = (double)(float)((double)*pfVar11 + dVar15);
          lVar7 = (ulonglong)*(ushort *)pfVar12 + lVar7;
        }
        iVar13 = iVar13 + 1;
        pfVar12 = (float *)((int)pfVar12 + 2);
        pfVar11 = pfVar11 + 1;
      } while (iVar13 < iVar14);
    }
    if (1 < iVar9) {
      lVar5 = (((longlong)(int)param_6[3] * (longlong)iVar10 +
               (longlong)(int)param_6[1] * (longlong)iVar14) - (ulonglong)uStack_a4) +
              (ulonglong)*param_6;
      if (0 < lVar5) {
        do {
          fn_82CEDAE8(auStack_b8,0x20);
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      iVar14 = iVar14 + 1;
      fn_82CEDE90(auStack_b8,0xffffffff8213303c,(double)(float)(dVar16 / (double)(longlong)iVar9),
                    lVar6);
    }
    if (1 < (int)param_5) {
      lVar6 = (((longlong)(int)param_6[3] * (longlong)iVar10 +
               (longlong)(int)param_6[1] * (longlong)iVar14) - (ulonglong)uStack_a4) +
              (ulonglong)*param_6;
      if (0 < lVar6) {
        do {
          fn_82CEDAE8(auStack_b8,0x20);
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      fn_82CEDE90(auStack_b8,0xffffffff8213303c,
                    (double)(float)(dVar15 / (double)(longlong)(int)param_5),lVar7);
    }
    fn_82CEDB38(param_1,uStack_a8);
    fn_82CEDAE8(param_1,10);
  }
  if (((*(char *)(param_6 + 4) == '\0') || (((uint)param_2[0x14] & 1) != 0)) &&
     (iVar14 = 0, 0 < (int)param_2[0xd])) {
    iVar10 = 0;
    do {
      fn_82CF1C18(param_1,*(undefined4 *)(iVar10 + (int)param_2[0xc]),param_3 + 1,param_4,param_5,
                    param_6);
      iVar14 = iVar14 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar14 < (int)param_2[0xd]);
  }
  fn_82CED958(auStack_b8);
  iVar14 = fn_82CE5410();
  uStack_a4 = 0;
  if ((uStack_a0 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar14 + 0x10) + 0x10))
              (*(int **)(iVar14 + 0x10),uStack_a8,uStack_a0 & 0x3fffffff,1);
  }
  return;
}

