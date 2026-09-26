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
extern int fn_82CC1A78();
extern int fn_82F65D50();
extern int fn_82F68CC0();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82110F68;


void fn_82CC0E98(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  lVar6 = fn_82F6A540();
  iVar5 = (int)lVar6;
  iVar9 = iVar5 >> 1;
  lVar11 = (longlong)iVar9;
  dVar25 = (double)(longlong)in_stack_0000006c;
  dVar23 = (double)(longlong)(iVar5 + -1) - (double)(longlong)in_stack_00000074;
  iVar7 = (int)param_2;
  iVar4 = iVar7 >> 1;
  uVar1 = (uint)(dVar23 - dVar25);
  uVar12 = (ulonglong)uVar1;
  uVar2 = (uint)(dVar23 + dVar25);
  if ((dVar23 - dVar25) - (double)(longlong)(int)uVar1 == lbl_82005710) {
    uVar12 = uVar12 - 1;
  }
  uVar10 = (ulonglong)in_stack_00000054;
  dVar21 = lbl_82005710;
  if (0 < iVar7) {
    lVar14 = (lVar6 - (ulonglong)uVar2) + -1;
    lVar16 = param_2;
    uVar18 = uVar10;
    do {
      lVar8 = uVar12 + 1;
      if (iVar5 <= (int)(uVar12 + 1)) {
        lVar8 = lVar6;
      }
      if (0 < (int)lVar8) {
        fn_82F68CC0(uVar18,(param_3 - uVar10) + uVar18);
      }
      lVar8 = lVar14;
      if (iVar5 <= (int)lVar14) {
        lVar8 = lVar6;
      }
      if (0 < (int)lVar8) {
        lVar8 = ((lVar6 - uVar10) - lVar8) + uVar18;
        fn_82F68CC0(lVar8 + uVar10,lVar8 + param_6);
      }
      lVar16 = lVar16 + -1;
      uVar18 = uVar18 + lVar6;
    } while (lVar16 != 0);
  }
  uVar13 = (ulonglong)in_stack_00000064;
  iVar17 = 0;
  uVar18 = (ulonglong)in_stack_0000005c;
  if (0 < iVar7) {
    lVar14 = (longlong)((int)uVar12 >> 1) + 1;
    lVar16 = (lVar11 - ((int)uVar2 >> 1)) + -1;
    do {
      lVar8 = lVar14;
      if (iVar9 <= (int)lVar14) {
        lVar8 = lVar11;
      }
      if (0 < (int)lVar8) {
        lVar19 = (longlong)(iVar17 >> 1) * (longlong)iVar9;
        fn_82F68CC0(lVar19 + uVar18,lVar19 + param_4,lVar8);
        fn_82F68CC0(lVar19 + uVar13,lVar19 + param_5,lVar8);
      }
      lVar8 = lVar16;
      if (iVar9 <= (int)lVar16) {
        lVar8 = lVar11;
      }
      if (0 < (int)lVar8) {
        lVar19 = (longlong)((iVar17 >> 1) + 1) * (longlong)iVar9 - lVar8;
        fn_82F68CC0(lVar19 + uVar18,lVar19 + (ulonglong)param_7,lVar8);
        fn_82F68CC0(lVar19 + uVar13,lVar19 + (ulonglong)param_8,lVar8);
      }
      iVar17 = iVar17 + 2;
    } while (iVar17 < iVar7);
  }
  uVar15 = (ulonglong)(longlong)(int)uVar2 >> 0x20;
  uVar12 = -(ulonglong)(uVar12 + 1 < 0xffffffff80000000) & uVar12 + 1;
  dVar22 = lbl_82110F68;
  dVar24 = lbl_82005730;
  do {
    iVar9 = uVar2 + 1;
    if (iVar5 <= (int)(uVar2 + 1)) {
      iVar9 = iVar5;
    }
    iVar7 = (int)uVar12;
    if (iVar9 <= iVar7) {
      fn_82F6A58C();
      return;
    }
    dVar26 = (double)(longlong)iVar7 - dVar23;
    dVar20 = (double)fn_82F65D50(dVar26 / dVar25);
    uVar1 = (uint)((dVar20 * dVar25 - dVar26) + dVar24);
    uVar3 = (uint)(((dVar22 - dVar20) * dVar25 - dVar26) + dVar24);
    lVar16 = uVar3 + uVar12;
    if ((int)lVar16 < iVar5) {
LAB_82cc1150:
      iVar9 = 1;
      uVar15 = (longlong)((int)uVar3 >> 1) + (longlong)(iVar7 >> 1);
      lVar16 = lVar16 + param_3;
    }
    else {
      lVar16 = uVar1 + uVar12;
      if ((int)lVar16 < iVar5) {
        uVar3 = uVar1;
        if (dVar21 < dVar26) goto LAB_82cc1150;
        iVar9 = 0;
        lVar16 = (param_6 - uVar10) + (param_3 - param_6) + uVar12 + uVar10;
      }
      else {
        iVar9 = 2;
        lVar16 = (param_6 - uVar10) + uVar12 + uVar10;
      }
    }
    fn_82CC1A78(uVar12 + uVar10,lVar16,lVar6,param_2);
    if ((uVar12 & 1) == 0) {
      lVar16 = (longlong)(iVar7 >> 1);
      if (iVar9 == 0) {
        fn_82CC1A78(lVar16 + uVar18,lVar16 + param_4,lVar11,iVar4);
        lVar14 = lVar16 + param_5;
      }
      else if (iVar9 == 1) {
        fn_82CC1A78(lVar16 + uVar18,uVar15 + param_4,lVar11,iVar4);
        lVar14 = uVar15 + param_5;
      }
      else {
        if (iVar9 != 2) goto LAB_82cc1240;
        fn_82CC1A78(lVar16 + uVar18,lVar16 + (ulonglong)param_7,lVar11,iVar4);
        lVar14 = lVar16 + (ulonglong)param_8;
      }
      fn_82CC1A78(lVar16 + uVar13,lVar14,lVar11,iVar4);
    }
LAB_82cc1240:
    uVar12 = uVar12 + 1;
  } while( true );
}

