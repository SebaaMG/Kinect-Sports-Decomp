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
extern unsigned int lbl_82005730;
extern unsigned int lbl_82110F68;
extern unsigned int lbl_82110F70;
extern unsigned int lbl_82110F78;


void fn_82CC1E70(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5,int param_6,ulonglong param_7,ulonglong param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar17;
  longlong lVar16;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  lVar7 = fn_82F6A53C();
  iVar5 = (int)param_2;
  uVar6 = (uint)lVar7;
  dVar31 = (double)(longlong)in_stack_0000006c;
  iVar4 = (int)uVar6 >> 1;
  lVar12 = (longlong)iVar4;
  uVar14 = (ulonglong)in_stack_00000054;
  dVar27 = -((double)(longlong)in_stack_00000074 * lbl_82110F70 - (double)(longlong)(int)(uVar6 - 1)
            );
  dVar26 = (dVar27 - (double)(longlong)(int)(uVar6 - 1)) + (double)(longlong)(iVar5 + -1);
  uVar8 = (uint)((dVar26 + dVar27) - dVar31 * lbl_82110F78);
  uVar1 = (uint)(dVar31 * lbl_82110F78 + dVar26 + dVar27);
  uVar10 = (ulonglong)uVar8;
  dVar30 = lbl_82110F70;
  if (0 < iVar5) {
    lVar18 = lVar7 - (ulonglong)uVar1;
    lVar19 = uVar10 + 1;
    uVar15 = param_2;
    do {
      lVar16 = lVar19;
      if ((int)uVar6 <= (int)lVar19) {
        lVar16 = lVar7;
      }
      if (0 < (int)lVar16) {
        fn_82F68CC0(uVar14);
      }
      lVar16 = lVar18;
      if ((int)uVar6 <= (int)lVar18) {
        lVar16 = lVar7;
      }
      if (0 < (int)lVar16) {
        fn_82F68CC0((lVar7 - lVar16) + uVar14);
      }
      uVar15 = uVar15 - 1;
      lVar19 = lVar19 + -1;
      uVar14 = uVar14 + lVar7;
      lVar18 = lVar18 + 1;
    } while (uVar15 != 0);
  }
  iVar9 = 0;
  if (0 < iVar5) {
    uVar17 = uVar1;
    do {
      lVar18 = (longlong)((int)((uVar8 - uVar1) + uVar17) >> 1) + 1;
      if (iVar4 <= (int)lVar18) {
        lVar18 = lVar12;
      }
      if (0 < (int)lVar18) {
        lVar19 = (longlong)(iVar9 >> 1) * (longlong)iVar4;
        fn_82F68CC0(lVar19 + (ulonglong)in_stack_0000005c,lVar19 + param_4,lVar18);
        fn_82F68CC0(lVar19 + (ulonglong)in_stack_00000064,lVar19 + param_5,lVar18);
      }
      lVar18 = lVar12 - ((int)uVar17 >> 1);
      if (iVar4 <= (int)lVar18) {
        lVar18 = lVar12;
      }
      if (0 < (int)lVar18) {
        lVar19 = (longlong)((iVar9 >> 1) + 1) * (longlong)iVar4 - lVar18;
        fn_82F68CC0(lVar19 + (ulonglong)in_stack_0000005c,lVar19 + param_7,lVar18);
        fn_82F68CC0(lVar19 + (ulonglong)in_stack_00000064,lVar19 + param_8,lVar18);
      }
      iVar9 = iVar9 + 2;
      uVar17 = uVar17 - 2;
    } while (iVar9 < iVar5);
  }
  iVar9 = iVar4 + -1;
  in_stack_00000054 = in_stack_00000054 - (int)param_3;
  uVar8 = param_6 - (int)param_3;
  uVar20 = -(ulonglong)(uVar10 + 1 < 0xffffffff80000000) & uVar10 + 1;
  uVar14 = param_7;
  uVar15 = param_4;
  uVar11 = param_3;
  uVar13 = param_2;
  dVar25 = lbl_82110F68;
  dVar28 = lbl_82005730;
  while( true ) {
    uVar17 = uVar1;
    if ((int)uVar6 <= (int)uVar1) {
      uVar17 = uVar6;
    }
    iVar21 = (int)uVar20;
    if ((int)uVar17 <= iVar21) break;
    dVar29 = (((double)(longlong)iVar21 - dVar27) - dVar26) * dVar30;
    dVar24 = (double)fn_82F65D50(dVar29 / dVar31);
    lVar18 = uVar20 + uVar11;
    uVar17 = (uint)((dVar24 * dVar31 - dVar29) * dVar30 + dVar28);
    uVar2 = (uint)(((dVar25 - dVar24) * dVar31 - dVar29) * dVar30 + dVar28);
    fn_82CC1AA8(dVar29,lVar18 + (ulonglong)in_stack_00000054,
                  (longlong)(int)(uVar6 + 1) * (longlong)(int)uVar17 + uVar20 + uVar11,
                  (longlong)(int)(uVar6 + 1) * (longlong)(int)uVar2 + uVar20 + uVar11,lVar18,
                  lVar18 + (ulonglong)uVar8,lVar7 + -1,uVar13 - uVar2,
                  ((ulonglong)uVar17 - lVar7) + uVar20 + 1);
    if ((uVar20 & 1) == 0) {
      lVar22 = (longlong)(iVar21 >> 1);
      lVar16 = (longlong)(iVar4 + 1) * (longlong)((int)uVar17 >> 1) + lVar22;
      lVar19 = (longlong)(iVar4 + 1) * (longlong)((int)uVar2 >> 1) + lVar22;
      lVar18 = (((int)uVar17 >> 1) - lVar12) + lVar22;
      fn_82CC1AA8(dVar29,lVar22 + (ulonglong)in_stack_0000005c,lVar16 + uVar15,lVar19 + uVar15,
                    lVar22 + uVar15,lVar22 + uVar14,iVar9,lVar18,lVar18 + 1);
      fn_82CC1AA8(dVar29,lVar22 + (ulonglong)in_stack_00000064,lVar16 + param_5,lVar19 + param_5,
                    lVar22 + param_5,lVar22 + (param_8 & 0xffffffff));
      uVar13 = param_2 & 0xffffffff;
      uVar11 = param_3 & 0xffffffff;
      uVar14 = param_7 & 0xffffffff;
      uVar15 = param_4 & 0xffffffff;
    }
    uVar20 = uVar20 + 1;
  }
  lVar12 = (uVar10 - lVar7) + 2;
  if ((int)lVar12 < 1) {
    lVar12 = 1;
  }
  lVar18 = (longlong)(int)lVar12 * (longlong)(int)uVar6 + lVar7 + -1;
  uVar14 = ((ulonglong)uVar1 - lVar7) + 2;
  lVar19 = lVar18 + uVar11;
  uVar10 = uVar14;
  while( true ) {
    lVar16 = lVar12 + 1;
    iVar21 = (int)uVar13;
    if ((int)uVar10 <= (int)uVar13) {
      iVar21 = (int)uVar10;
    }
    if (iVar21 <= (int)lVar12) break;
    uVar15 = lVar16 + lVar7 + -2;
    dVar29 = (((double)(longlong)(int)uVar15 - dVar27) - dVar26) * dVar30;
    dVar24 = (double)fn_82F65D50(dVar29 / dVar31);
    iVar21 = (int)((dVar24 * dVar31 - dVar29) * dVar30 + dVar28);
    iVar3 = (int)(((dVar25 - dVar24) * dVar31 - dVar29) * dVar30 + dVar28);
    fn_82CC1AA8(dVar29,lVar19 + (ulonglong)in_stack_00000054,
                  (longlong)(int)(uVar6 + 1) * (longlong)iVar21 + lVar18 + (param_3 & 0xffffffff),
                  (longlong)(int)(uVar6 + 1) * (longlong)iVar3 + lVar18 + (param_3 & 0xffffffff),
                  lVar19,lVar19 + (ulonglong)uVar8,lVar7 + -1,(ulonglong)uVar8,iVar21);
    if ((uVar15 & 1) == 0) {
      iVar21 = iVar21 >> 1;
      iVar3 = iVar3 >> 1;
      lVar23 = (longlong)((int)lVar16 >> 1) * (longlong)iVar4 + (longlong)((int)(lVar7 + -2) >> 1);
      lVar22 = (longlong)iVar21 * (longlong)iVar4 + lVar23 + (longlong)iVar21;
      uVar10 = param_4 & 0xffffffff;
      lVar12 = (longlong)iVar3 * (longlong)iVar4 + lVar23 + (longlong)iVar3;
      fn_82CC1AA8(dVar29,lVar23 + (ulonglong)in_stack_0000005c,lVar22 + uVar10,lVar12 + uVar10,
                    lVar23 + uVar10,lVar23 + (param_7 & 0xffffffff),iVar9,
                    (longlong)(iVar5 >> 1) - (longlong)iVar3,(longlong)iVar21);
      fn_82CC1AA8(dVar29,lVar23 + (ulonglong)in_stack_00000064,lVar22 + param_5,lVar12 + param_5,
                    lVar23 + param_5,lVar23 + (param_8 & 0xffffffff),iVar9);
      uVar13 = param_2 & 0xffffffff;
      uVar10 = uVar14 & 0xffffffff;
    }
    lVar18 = lVar18 + lVar7;
    lVar19 = lVar19 + lVar7;
    lVar12 = lVar16;
  }
  fn_82F6A588();
  return;
}

