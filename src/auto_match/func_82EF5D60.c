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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_c0;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


ulonglong fn_82EF5D60(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                       longlong param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar12;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uStack0000001c;
  uint uStack00000024;
  uint in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  undefined4 *in_stack_00000074;
  int *in_stack_0000007c;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined1 auStack_c0 [20];
  int aiStack_ac [43];
  
  uVar1 = *(uint *)(param_1 + 0x6dd0);
  uStack0000001c = (uint)param_2;
  uStack00000024 = (uint)param_3;
  (**(code **)(param_1 + 0x6f3c))(param_2,param_3,param_4,param_5,&uStack_f0);
  uVar23 = ZEXT48(in_stack_00000074);
  uVar18 = ZEXT48(in_stack_0000007c);
  *in_stack_00000074 = uStack_f0;
  *in_stack_0000007c = iStack_dc;
  in_stack_00000074[0x40] = 0;
  in_stack_00000074[0x20] = 0;
  in_stack_0000007c[0x40] = 0;
  in_stack_0000007c[0x20] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_00000074[*(int *)(param_1 + 0x6dd0) + 0x40] = 0;
    in_stack_00000074[*(int *)(param_1 + 0x6dd0) + 0x20] = 0;
    in_stack_0000007c[*(int *)(param_1 + 0x6dd0) + 0x40] = 0;
    in_stack_0000007c[*(int *)(param_1 + 0x6dd0) + 0x20] = 0;
  }
  in_stack_00000074[0x60] = uStack_ec;
  in_stack_0000007c[0x60] = iStack_d8;
  in_stack_00000074[0xa0] = 0;
  in_stack_00000074[0x80] = 0;
  in_stack_0000007c[0x80] = 0;
  in_stack_0000007c[0xa0] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_00000074[*(int *)(param_1 + 0x6dd0) + 0xa0] = 0;
    in_stack_00000074[*(int *)(param_1 + 0x6dd0) + 0x80] = 0;
    in_stack_0000007c[*(int *)(param_1 + 0x6dd0) + 0xa0] = 0;
    in_stack_0000007c[*(int *)(param_1 + 0x6dd0) + 0x80] = 0;
  }
  in_stack_00000074[0xc0] = uStack_e8;
  in_stack_0000007c[0xc0] = iStack_d4;
  in_stack_00000074[0x100] = 0;
  in_stack_00000074[0xe0] = 0;
  in_stack_0000007c[0x100] = 0;
  in_stack_0000007c[0xe0] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_00000074[*(int *)(param_1 + 0x6dd0) + 0x100] = 0;
    in_stack_00000074[*(int *)(param_1 + 0x6dd0) + 0xe0] = 0;
    in_stack_0000007c[*(int *)(param_1 + 0x6dd0) + 0x100] = 0;
    in_stack_0000007c[*(int *)(param_1 + 0x6dd0) + 0xe0] = 0;
  }
  in_stack_00000074[0x120] = uStack_e4;
  in_stack_0000007c[0x120] = iStack_d0;
  in_stack_00000074[0x160] = 0;
  in_stack_00000074[0x140] = 0;
  in_stack_0000007c[0x160] = 0;
  in_stack_0000007c[0x140] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_00000074[*(int *)(param_1 + 0x6dd0) + 0x160] = 0;
    in_stack_00000074[*(int *)(param_1 + 0x6dd0) + 0x140] = 0;
    in_stack_0000007c[*(int *)(param_1 + 0x6dd0) + 0x160] = 0;
    in_stack_0000007c[*(int *)(param_1 + 0x6dd0) + 0x140] = 0;
  }
  in_stack_00000074[0x180] = iStack_e0;
  in_stack_0000007c[0x180] = iStack_cc;
  in_stack_00000074[0x1c0] = 0;
  in_stack_00000074[0x1a0] = 0;
  in_stack_0000007c[0x1c0] = 0;
  in_stack_0000007c[0x1a0] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_00000074[*(int *)(param_1 + 0x6dd0) + 0x1c0] = 0;
    in_stack_00000074[*(int *)(param_1 + 0x6dd0) + 0x1a0] = 0;
    in_stack_0000007c[*(int *)(param_1 + 0x6dd0) + 0x1c0] = 0;
    in_stack_0000007c[*(int *)(param_1 + 0x6dd0) + 0x1a0] = 0;
  }
  iVar12 = 1;
  if (1 < *(int *)(param_1 + 0x6dd0)) {
    lVar13 = uVar23 + 0x600;
    lVar15 = uVar18 + 0x184;
    do {
      iVar2 = (int)lVar13;
      *(undefined4 *)(iVar2 + -0x5fc) = 0xfffffff;
      iVar12 = iVar12 + 1;
      puVar4 = (undefined4 *)lVar15;
      puVar4[-0x60] = 0xfffffff;
      *(undefined4 *)(((int)in_stack_00000074 - (int)in_stack_0000007c) + (int)puVar4) = 0xfffffff;
      *puVar4 = 0xfffffff;
      *(undefined4 *)(iVar2 + -0x2fc) = 0xfffffff;
      puVar4[0x60] = 0xfffffff;
      *(undefined4 *)(iVar2 + -0x17c) = 0xfffffff;
      puVar4[0xc0] = 0xfffffff;
      lVar13 = lVar13 + 4;
      *(undefined4 *)lVar13 = 0xfffffff;
      puVar4[0x120] = 0xfffffff;
      lVar15 = lVar15 + 4;
    } while (iVar12 < *(int *)(param_1 + 0x6dd0));
  }
  uVar21 = 1;
  uVar22 = 1;
  if ((*(int *)(param_1 + 0x6dd8) < iStack_e0) || (*(int *)(param_1 + 0x6dd8) < iStack_cc)) {
    param_4 = (longlong)(int)param_5 * (longlong)in_stack_00000064 + param_4;
    for (; in_stack_00000064 <= in_stack_0000006c; in_stack_00000064 = in_stack_00000064 + 1) {
      uVar19 = (ulonglong)in_stack_00000054;
      uVar20 = in_stack_00000054;
      while ((int)uVar20 <= in_stack_0000005c) {
        iVar12 = (int)uVar19;
        if ((in_stack_00000064 != 0) || (iVar12 != 0)) {
          (**(code **)(param_1 + 0x6f3c))(param_2,param_3,uVar19 + param_4,param_5,auStack_c0);
          lVar24 = (uVar22 & 0x3fffffff) << 2;
          lVar15 = (uVar21 & 0x3fffffff) << 2;
          piVar17 = aiStack_ac;
          lVar13 = 5;
          uVar25 = uVar23;
          do {
            iVar2 = piVar17[-5];
            piVar5 = (int *)uVar25;
            if (iVar2 < *(int *)((int)piVar5 + (int)lVar15)) {
              uVar10 = 0;
              iVar3 = *piVar5;
              uVar11 = uVar25;
              while (iVar3 < iVar2) {
                uVar11 = uVar11 + 4;
                uVar10 = uVar10 + 1;
                iVar3 = *(int *)uVar11;
              }
              iVar6 = (int)(uVar25 + 0x100);
              iVar3 = (int)(uVar25 + 0x80);
              if ((int)uVar10 < (int)uVar21) {
                lVar9 = uVar21 - uVar10;
                lVar16 = lVar15 + uVar25 + 0x100;
                lVar14 = lVar15 + uVar25 + 0x80;
                do {
                  puVar4 = (undefined4 *)(lVar14 + -4);
                  *(undefined4 *)((int)(undefined4 *)lVar16 + ((int)piVar5 - iVar6)) =
                       *(undefined4 *)((int)puVar4 + ((int)piVar5 - iVar3));
                  *(undefined4 *)lVar14 = *puVar4;
                  *(undefined4 *)lVar16 = *(undefined4 *)((iVar6 - iVar3) + (int)puVar4);
                  lVar16 = lVar16 + -4;
                  lVar9 = lVar9 + -1;
                  lVar14 = lVar14 + -4;
                } while (lVar9 != 0);
              }
              iVar7 = (int)((uVar10 & 0x3fffffff) << 2);
              *(int *)((int)piVar5 + iVar7) = iVar2;
              *(int *)(iVar7 + iVar3) = iVar12;
              *(int *)(iVar7 + iVar6) = in_stack_00000064;
              if ((int)uVar21 < *(int *)(param_1 + 0x6dd0) + -1) {
                uVar21 = uVar21 + 1;
                lVar15 = lVar15 + 4;
              }
            }
            lVar14 = (uVar18 - uVar23) + uVar25;
            iVar2 = *piVar17;
            piVar5 = (int *)lVar14;
            if (iVar2 < *(int *)((int)piVar5 + (int)lVar24)) {
              uVar11 = 0;
              lVar16 = lVar14 + 0x80;
              lVar9 = (uVar18 - uVar23) + uVar25 + 0x100;
              iVar3 = *piVar5;
              while (iVar3 < iVar2) {
                lVar14 = lVar14 + 4;
                uVar11 = uVar11 + 1;
                iVar3 = *(int *)lVar14;
              }
              iVar6 = (int)lVar9;
              iVar3 = (int)lVar16;
              if ((int)uVar11 < (int)uVar22) {
                lVar8 = uVar22 - uVar11;
                lVar9 = lVar24 + lVar9;
                lVar14 = lVar24 + lVar16;
                do {
                  puVar4 = (undefined4 *)(lVar14 + -4);
                  *(undefined4 *)(((int)piVar5 - iVar6) + (int)(undefined4 *)lVar9) =
                       *(undefined4 *)(((int)piVar5 - iVar3) + (int)puVar4);
                  *(undefined4 *)lVar14 = *puVar4;
                  *(undefined4 *)lVar9 = *(undefined4 *)((iVar6 - iVar3) + (int)puVar4);
                  lVar9 = lVar9 + -4;
                  lVar8 = lVar8 + -1;
                  lVar14 = lVar14 + -4;
                } while (lVar8 != 0);
              }
              iVar7 = (int)((uVar11 & 0x3fffffff) << 2);
              *(int *)(iVar7 + (int)piVar5) = iVar2;
              *(int *)(iVar7 + iVar3) = iVar12;
              *(int *)(iVar7 + iVar6) = in_stack_00000064;
              if ((int)uVar22 < *(int *)(param_1 + 0x6dd0) + -1) {
                uVar22 = uVar22 + 1;
                lVar24 = lVar24 + 4;
              }
            }
            lVar13 = lVar13 + -1;
            uVar25 = uVar25 + 0x180;
            piVar17 = piVar17 + 1;
          } while (lVar13 != 0);
          param_2 = (ulonglong)uStack0000001c;
          param_3 = (ulonglong)uStack00000024;
        }
        uVar19 = uVar19 + 1;
        uVar20 = (uint)uVar19;
      }
      param_4 = param_4 + param_5;
    }
    uVar23 = (ulonglong)uVar1;
    if (*(int *)(param_1 + 0x6da4) != 0) {
      iVar12 = 0;
      piVar17 = &iStack_dc;
      lVar13 = (uVar23 & 0x3fffffff) * 4 + uVar18 + -4;
      do {
        if ((*(int *)(((int)in_stack_00000074 - (int)in_stack_0000007c) + (int)(int *)lVar13) <
             piVar17[-5]) || (*(int *)lVar13 < *piVar17)) {
          return uVar23 + 1;
        }
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 0x180;
        piVar17 = piVar17 + 1;
      } while (iVar12 < 5);
    }
  }
  else {
    uVar23 = 1;
  }
  return uVar23;
}

