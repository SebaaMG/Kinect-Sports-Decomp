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
extern int fn_82CC1AA8();
extern int fn_82F65D50();
extern int fn_82F68CC0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82110F68;
extern unsigned int lbl_82110F70;
extern unsigned int lbl_82110F78;
extern unsigned int lbl_82110F80;


void fn_82CC2BD8(undefined8 param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6,uint param_7,ulonglong param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar13;
  int iVar14;
  longlong lVar12;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  lVar4 = fn_82F6A53C();
  dVar28 = (double)(longlong)in_stack_0000006c;
  iVar5 = (int)param_2;
  uVar10 = (ulonglong)in_stack_00000054;
  uVar8 = (uint)lVar4;
  iVar3 = (int)uVar8 >> 1;
  lVar9 = (longlong)iVar3;
  dVar25 = (double)(longlong)in_stack_00000074 * lbl_82110F70;
  uVar1 = (uint)(dVar25 * lbl_82002C40 - dVar28 * lbl_82110F78);
  uVar2 = (uint)(dVar25 * lbl_82002C40 + dVar28 * lbl_82110F78);
  dVar26 = lbl_82110F70;
  if (0 < iVar5) {
    lVar15 = lVar4 - (ulonglong)uVar2;
    lVar18 = (ulonglong)uVar1 + 1;
    uVar11 = param_2;
    uVar19 = uVar10;
    do {
      lVar6 = lVar18;
      if ((int)uVar8 <= (int)lVar18) {
        lVar6 = lVar4;
      }
      if (0 < (int)lVar6) {
        fn_82F68CC0(uVar19,uVar19 + (param_6 - uVar10));
      }
      lVar6 = lVar15;
      if ((int)uVar8 <= (int)lVar15) {
        lVar6 = lVar4;
      }
      if (0 < (int)lVar6) {
        lVar6 = (uVar19 - lVar6) + (lVar4 - uVar10);
        fn_82F68CC0(lVar6 + uVar10,lVar6 + param_3);
      }
      uVar11 = uVar11 - 1;
      lVar18 = lVar18 + -1;
      uVar19 = uVar19 + lVar4;
      lVar15 = lVar15 + 1;
    } while (uVar11 != 0);
    param_2 = param_2 & 0xffffffff;
  }
  iVar7 = 0;
  if (0 < (int)param_2) {
    uVar13 = uVar2;
    do {
      lVar15 = (longlong)((int)((uVar1 - uVar2) + uVar13) >> 1) + 1;
      if (iVar3 <= (int)lVar15) {
        lVar15 = lVar9;
      }
      if (0 < (int)lVar15) {
        lVar18 = (longlong)(iVar7 >> 1) * (longlong)iVar3;
        fn_82F68CC0(lVar18 + (ulonglong)in_stack_0000005c,lVar18 + (ulonglong)param_7,lVar15);
        fn_82F68CC0(lVar18 + (ulonglong)in_stack_00000064,lVar18 + param_8);
      }
      lVar15 = lVar9 - ((int)uVar13 >> 1);
      if (iVar3 <= (int)lVar15) {
        lVar15 = lVar9;
      }
      if (0 < (int)lVar15) {
        lVar18 = (longlong)((iVar7 >> 1) + 1) * (longlong)iVar3 - lVar15;
        fn_82F68CC0(lVar18 + (ulonglong)in_stack_0000005c,lVar18 + param_4,lVar15);
        fn_82F68CC0(lVar18 + (ulonglong)in_stack_00000064,lVar18 + param_5);
      }
      iVar7 = iVar7 + 2;
      uVar13 = uVar13 - 2;
    } while (iVar7 < iVar5);
  }
  lVar15 = lVar4 + -1;
  uVar19 = -(ulonglong)((ulonglong)uVar1 + 1 < 0xffffffff80000000) & (ulonglong)uVar1 + 1;
  lVar9 = lVar9 + -1;
  uVar11 = param_3;
  dVar22 = lbl_82110F68;
  dVar23 = lbl_82110F80;
  dVar24 = lbl_82005730;
  while( true ) {
    uVar13 = uVar2;
    if ((int)uVar8 <= (int)uVar2) {
      uVar13 = uVar8;
    }
    iVar7 = (int)uVar19;
    if ((int)uVar13 <= iVar7) break;
    dVar27 = (((double)(longlong)iVar7 - dVar25) - dVar25) * dVar23;
    dVar21 = (double)fn_82F65D50(dVar27 / dVar28);
    lVar18 = uVar19 + uVar11;
    iVar17 = (int)((dVar21 * dVar28 - dVar27) * dVar26 + dVar24);
    iVar16 = -iVar17;
    lVar6 = -(ulonglong)(uint)(int)(((dVar22 - dVar21) * dVar28 - dVar27) * dVar26 + dVar24);
    iVar14 = (int)lVar6;
    fn_82CC1AA8(dVar27,lVar18 + (uVar10 - param_3),
                  (longlong)(int)(uVar8 + 1) * (longlong)iVar16 + uVar19 + uVar11,
                  (longlong)(int)(uVar8 + 1) * (longlong)iVar14 + uVar19 + uVar11,lVar18,
                  lVar18 + ((param_6 & 0xffffffff) - param_3),lVar15,lVar6 + uVar19 + 1,iVar17);
    if ((uVar19 & 1) == 0) {
      lVar20 = (longlong)(iVar7 >> 1);
      iVar16 = iVar16 >> 1;
      lVar12 = (longlong)(iVar3 + 1) * (longlong)iVar16 + lVar20;
      lVar6 = (longlong)(iVar3 + 1) * (longlong)(iVar14 >> 1) + lVar20;
      lVar18 = -(longlong)iVar16;
      fn_82CC1AA8(dVar27,lVar20 + (ulonglong)in_stack_0000005c,lVar12 + param_4,lVar6 + param_4,
                    lVar20 + param_4,lVar20 + (ulonglong)param_7,lVar9,iVar16 + lVar20,lVar18);
      fn_82CC1AA8(dVar27,lVar20 + (ulonglong)in_stack_00000064,lVar12 + param_5,lVar6 + param_5,
                    lVar20 + param_5,lVar20 + (param_8 & 0xffffffff),lVar9,param_8 & 0xffffffff,
                    lVar18);
      uVar11 = param_3 & 0xffffffff;
    }
    uVar19 = uVar19 + 1;
  }
  uVar10 = ((ulonglong)uVar1 - lVar4) + 2;
  if ((int)uVar10 < 1) {
    uVar10 = 1;
  }
  lVar18 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
  iVar7 = (uVar2 - uVar8) + 2;
  while( true ) {
    iVar17 = iVar5;
    if (iVar7 <= iVar5) {
      iVar17 = iVar7;
    }
    iVar16 = (int)uVar10;
    if (iVar17 <= iVar16) break;
    lVar12 = lVar18 + lVar15;
    dVar27 = (((double)(longlong)((int)lVar15 + iVar16) - dVar25) - dVar25) * dVar23;
    dVar21 = (double)fn_82F65D50(dVar27 / dVar28);
    lVar6 = -(ulonglong)(uint)(int)((dVar21 * dVar28 - dVar27) * dVar26 + dVar24);
    iVar14 = -(int)(((dVar22 - dVar21) * dVar28 - dVar27) * dVar26 + dVar24);
    iVar17 = (int)lVar6;
    lVar6 = lVar6 + uVar10;
    fn_82CC1AA8(dVar27,lVar12 + (ulonglong)in_stack_00000054,
                  (longlong)(int)(uVar8 + 1) * (longlong)iVar17 + lVar12 + uVar11,
                  (longlong)(int)(uVar8 + 1) * (longlong)iVar14 + lVar12 + uVar11,lVar12 + uVar11,
                  lVar12 + (param_6 & 0xffffffff),lVar15,lVar6,-lVar6);
    if ((uVar10 & 1) != 0) {
      iVar17 = iVar17 >> 1;
      iVar14 = iVar14 >> 1;
      iVar16 = iVar16 + 1 >> 1;
      lVar20 = (longlong)iVar16 * (longlong)iVar3 + (longlong)((int)(uVar8 - 2) >> 1);
      lVar12 = (longlong)(iVar3 + 1) * (longlong)iVar17 + lVar20;
      lVar6 = (longlong)(iVar3 + 1) * (longlong)iVar14 + lVar20;
      fn_82CC1AA8(dVar27,lVar20 + (ulonglong)in_stack_0000005c,lVar12 + param_4,lVar6 + param_4,
                    lVar20 + param_4,lVar20 + (ulonglong)param_7,lVar9,iVar14,
                    -((longlong)iVar17 + (longlong)iVar16));
      fn_82CC1AA8(dVar27,lVar20 + (ulonglong)in_stack_00000064,lVar12 + param_5,lVar6 + param_5,
                    lVar20 + param_5,lVar20 + (param_8 & 0xffffffff),lVar9);
      uVar11 = param_3 & 0xffffffff;
    }
    uVar10 = uVar10 + 1;
    lVar18 = lVar18 + lVar4;
  }
  fn_82F6A588();
  return;
}

