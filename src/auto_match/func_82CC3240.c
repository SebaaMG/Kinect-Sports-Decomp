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
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82110F68;
extern unsigned int lbl_82110F70;
extern unsigned int lbl_82110F78;


void fn_82CC3240(undefined8 param_1,ulonglong param_2,ulonglong param_3,uint param_4,
                  longlong param_5,longlong param_6,uint param_7,ulonglong param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  lVar8 = fn_82F6A538();
  iVar4 = (int)param_2;
  dVar33 = (double)(longlong)in_stack_00000074 * lbl_82110F70;
  dVar37 = (double)(longlong)in_stack_0000006c;
  dVar32 = (double)(longlong)(iVar4 + -1) - dVar33;
  iVar19 = (int)lVar8;
  iVar3 = iVar19 >> 1;
  lVar18 = (longlong)iVar3;
  uVar10 = (uint)((dVar33 - dVar32) - dVar37 * lbl_82110F78);
  uVar16 = (ulonglong)uVar10;
  uVar1 = (uint)((dVar33 - dVar32) + dVar37 * lbl_82110F78);
  uVar17 = (ulonglong)uVar1;
  if ((int)uVar10 < 0) {
    uVar16 = uVar16 - 1;
  }
  if ((int)uVar1 < 0) {
    uVar17 = uVar17 - 1;
  }
  uVar21 = (ulonglong)in_stack_00000054;
  lVar28 = 0;
  dVar38 = lbl_82110F70;
  if (0 < iVar4) {
    lVar27 = 0;
    lVar24 = lVar8 - uVar17;
    uVar25 = uVar21;
    do {
      lVar12 = uVar16 + 1 + lVar28;
      if (iVar19 < (int)lVar12) {
        lVar12 = lVar8;
      }
      if (0 < (int)lVar12) {
        fn_82F68CC0(uVar25,(param_6 - uVar21) + uVar25,lVar12);
      }
      lVar12 = lVar8;
      if ((int)lVar24 <= iVar19) {
        lVar12 = lVar24;
      }
      if (0 < (int)lVar12) {
        uVar13 = lVar28 + uVar17;
        lVar12 = ((((uVar13 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(uVar13 == 0) & uVar13) +
                 lVar27;
        fn_82F68CC0(lVar12 + uVar21,lVar12 + param_3);
      }
      lVar28 = lVar28 + 1;
      lVar24 = lVar24 + -1;
      lVar27 = lVar27 + lVar8;
      uVar25 = uVar25 + lVar8;
    } while ((int)lVar28 < iVar4);
  }
  uVar21 = (ulonglong)in_stack_0000005c;
  iVar26 = 0;
  iVar20 = (int)uVar17;
  if (0 < iVar4) {
    uVar25 = uVar17;
    do {
      lVar28 = (longlong)(((int)uVar16 - iVar20) + (int)uVar25 >> 1) + 1;
      if (iVar3 <= (int)lVar28) {
        lVar28 = lVar18;
      }
      if (0 < (int)lVar28) {
        lVar24 = (longlong)(iVar26 >> 1) * (longlong)iVar3;
        fn_82F68CC0(lVar24 + uVar21,lVar24 + (ulonglong)param_7,lVar28);
        fn_82F68CC0(lVar24 + (ulonglong)in_stack_00000064,lVar24 + param_8,lVar28);
      }
      uVar10 = (int)uVar25 >> 1;
      uVar13 = (ulonglong)(int)uVar10;
      lVar28 = lVar18 - uVar13;
      if (iVar3 <= (int)(lVar18 - uVar13)) {
        lVar28 = lVar18;
      }
      if (0 < (int)lVar28) {
        lVar24 = (longlong)(iVar26 >> 1) * (longlong)iVar3 +
                 (((ulonglong)(uVar10 >> 0x1f) - 1) + (ulonglong)(uVar13 == 0) & uVar13);
        fn_82F68CC0(lVar24 + uVar21,lVar24 + (ulonglong)param_4,lVar28);
        fn_82F68CC0(lVar24 + (ulonglong)in_stack_00000064,lVar24 + param_5,lVar28);
      }
      iVar26 = iVar26 + 2;
      uVar25 = uVar25 + 2;
    } while (iVar26 < iVar4);
  }
  in_stack_00000054 = in_stack_00000054 - (int)param_3;
  uVar10 = (int)param_6 - (int)param_3;
  lVar28 = lVar18 + 1;
  uVar13 = -(ulonglong)(uVar16 + 1 < 0xffffffff80000000) & uVar16 + 1;
  uVar25 = param_3;
  dVar31 = lbl_82110F68;
  dVar34 = lbl_82005730;
  while( true ) {
    iVar26 = iVar20;
    if (iVar19 <= iVar20) {
      iVar26 = iVar19;
    }
    iVar23 = (int)uVar13;
    if (iVar26 <= iVar23) break;
    dVar35 = ((dVar33 - (double)(longlong)iVar23) - dVar32) * dVar38;
    dVar30 = (double)fn_82F65D50(dVar35 / dVar37);
    uVar1 = (uint)((dVar30 * dVar37 - dVar35) * dVar38 + dVar34);
    lVar12 = -(ulonglong)uVar1;
    uVar2 = (uint)(((dVar31 - dVar30) * dVar37 - dVar35) * dVar38 + dVar34);
    lVar27 = -(ulonglong)uVar2;
    lVar24 = uVar13 + uVar25;
    fn_82CC1AA8(dVar35,lVar24 + (ulonglong)in_stack_00000054,
                  (longlong)(int)uVar1 * (longlong)iVar19 + lVar12 + uVar13 + uVar25,
                  (longlong)(int)uVar2 * (longlong)iVar19 + lVar27 + uVar13 + uVar25,lVar24,
                  lVar24 + (ulonglong)uVar10,lVar8 + 1,lVar12 + (param_2 & 0xffffffff),
                  -(lVar12 + uVar13));
    if ((uVar13 & 1) == 0) {
      lVar29 = (longlong)(iVar23 >> 1);
      iVar26 = (int)lVar12 >> 1;
      lVar27 = (longlong)(1 - iVar3) * (longlong)((int)lVar27 >> 1) + lVar29;
      uVar25 = (ulonglong)param_4;
      lVar12 = (longlong)(1 - iVar3) * (longlong)iVar26 + lVar29;
      lVar24 = lVar18 - lVar29;
      if (iVar4 >> 1 <= (int)(lVar18 - lVar29)) {
        lVar24 = (longlong)(iVar4 >> 1);
      }
      lVar22 = -(iVar26 + lVar29);
      fn_82CC1AA8(dVar35,lVar29 + uVar21,lVar12 + uVar25,lVar27 + uVar25,lVar29 + uVar25,
                    lVar29 + (ulonglong)param_7,lVar28,lVar24,lVar22);
      fn_82CC1AA8(dVar35,lVar29 + (ulonglong)in_stack_00000064,lVar12 + param_5,lVar27 + param_5,
                    lVar29 + param_5,lVar29 + (param_8 & 0xffffffff),lVar28,param_8 & 0xffffffff,
                    lVar22);
      uVar25 = param_3 & 0xffffffff;
    }
    uVar13 = uVar13 + 1;
  }
  uVar17 = 1 - uVar17;
  if ((int)uVar17 < 2) {
    uVar17 = 1;
  }
  iVar20 = -(int)uVar16;
  param_3 = param_3 & 0xffffffff;
  lVar18 = (longlong)(int)uVar17 * (longlong)iVar19;
  lVar24 = lVar18 + param_3;
  dVar30 = lbl_82005710;
  do {
    iVar26 = iVar20;
    if (iVar4 <= iVar20) {
      iVar26 = iVar4;
    }
    iVar23 = (int)uVar17;
    if (iVar26 <= iVar23) {
      fn_82F6A584();
      return;
    }
    dVar36 = (((double)(longlong)iVar23 + dVar33) - dVar32) * dVar38;
    dVar35 = (double)fn_82F65D50(dVar36 / dVar37);
    uVar1 = (uint)((dVar35 * dVar37 - dVar36) * dVar38 + dVar34);
    uVar2 = (uint)(((dVar31 - dVar35) * dVar37 - dVar36) * dVar38 + dVar34);
    uVar16 = (ulonglong)uVar1;
    lVar27 = -uVar16;
    lVar12 = -(ulonglong)uVar2;
    fn_82CC1AA8(dVar36,lVar24 + (ulonglong)in_stack_00000054,
                  (longlong)(int)uVar1 * (longlong)iVar19 + lVar18 + lVar27 + param_3,
                  (longlong)(int)uVar2 * (longlong)iVar19 + lVar18 + lVar12 + param_3,lVar24,
                  lVar24 + (ulonglong)uVar10,lVar8 + 1,(lVar12 - uVar17) + (param_2 & 0xffffffff),
                  uVar16);
    if ((uVar17 & 1) == 0) {
      lVar29 = (longlong)(iVar23 >> 1) * (longlong)iVar3;
      iVar26 = 0;
      if (0 < iVar19) {
        iVar7 = (int)param_5;
        iVar5 = param_4 - iVar7;
        lVar14 = lVar29 + uVar21;
        lVar22 = uVar16 + uVar17;
        lVar11 = (longlong)((int)uVar1 >> 1) * (longlong)iVar3 + (longlong)((int)lVar27 >> 1) +
                 lVar29 + param_5;
        lVar29 = (longlong)((int)uVar2 >> 1) * (longlong)iVar3 + (longlong)((int)lVar12 >> 1) +
                 lVar29 + param_5;
        iVar6 = iVar7 - in_stack_0000005c;
        do {
          if (iVar4 <= (int)(iVar23 + uVar1 + (int)lVar27)) break;
          puVar15 = (undefined1 *)lVar14;
          if (((longlong)(lVar12 + uVar16 + lVar27) < 0) ||
             (iVar4 <= (int)((uVar2 - uVar1) + (int)lVar22))) {
            if (((int)lVar27 < 0) || (iVar4 <= (int)lVar22)) {
              *puVar15 = puVar15[iVar6 + (param_7 - iVar7)];
              uVar9 = puVar15[(int)param_8 - in_stack_0000005c];
            }
            else if (dVar36 < dVar30) {
              *puVar15 = puVar15[iVar5 + iVar6];
              uVar9 = puVar15[iVar6];
            }
            else {
              *puVar15 = ((undefined1 *)lVar11)[iVar5];
              uVar9 = *(undefined1 *)lVar11;
            }
          }
          else {
            *puVar15 = ((undefined1 *)lVar29)[iVar5];
            uVar9 = *(undefined1 *)lVar29;
          }
          iVar26 = iVar26 + 2;
          puVar15[in_stack_00000064 - in_stack_0000005c] = uVar9;
          lVar14 = lVar14 + lVar28;
          lVar11 = lVar11 + lVar28;
          lVar29 = lVar29 + lVar28;
          lVar27 = lVar27 + 2;
          lVar22 = lVar22 + 2;
        } while (iVar26 < iVar19);
      }
    }
    uVar17 = uVar17 + 1;
    lVar18 = lVar18 + lVar8;
    lVar24 = lVar24 + lVar8;
  } while( true );
}

