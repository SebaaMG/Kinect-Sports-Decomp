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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern unsigned int uRam8329f138;
extern unsigned int uStack_a0;


void fn_82CA0E40(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,int param_7,int param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint in_stack_00000054;
  int in_stack_0000005c;
  uint in_stack_00000064;
  undefined4 uStack_a0;
  
  iVar12 = (int)param_3;
  lVar16 = param_2 + param_6;
  uVar23 = (ulonglong)in_stack_00000064;
  param_3 = param_3 + param_6;
  uVar14 = (ulonglong)uRam8329f138;
  lVar19 = lVar16 - uVar14;
  uStack_a0 = 0;
  lVar20 = param_3 - uVar14;
  lVar21 = param_3 + (ulonglong)in_stack_00000054 + -1;
  lVar22 = lVar16 + (ulonglong)in_stack_00000054 + -1;
  uVar15 = uVar14;
  uVar18 = in_stack_00000064;
  if (in_stack_00000064 - in_stack_0000005c != 0x10) {
    uVar15 = (longlong)((int)uRam8329f138 >> 1) + 1;
    uVar18 = (int)in_stack_00000064 >> 1;
    param_2 = param_2 - uVar23;
    iVar12 = iVar12 - in_stack_00000064;
    if ((param_5 & 7) != 0) {
      uStack_a0 = 8 - ((uint)param_5 & 7);
    }
  }
  iVar6 = (int)lVar20;
  iVar5 = (int)lVar19;
  lVar11 = lVar20;
  if ((int)param_4 < (int)(uint)param_5) {
    param_4 = param_5 - param_4;
    do {
      iVar3 = (int)lVar11;
      uVar1 = *(undefined1 *)(((int)lVar16 - iVar6) + iVar3);
      iVar13 = 0;
      uVar2 = *(undefined1 *)(((int)param_3 - iVar6) + iVar3);
      uVar7 = CONCAT11(uVar1,uVar1);
      uVar8 = CONCAT11(*(undefined1 *)lVar21,*(undefined1 *)lVar21);
      uVar9 = CONCAT11(uVar2,uVar2);
      uVar10 = CONCAT11(*(undefined1 *)lVar22,*(undefined1 *)lVar22);
      if (0 < (int)uVar14) {
        lVar17 = lVar11;
        do {
          puVar4 = (undefined4 *)lVar17;
          *(uint *)(((int)lVar19 - iVar3) + (int)puVar4) = CONCAT22(uVar7,uVar7);
          iVar13 = iVar13 + 4;
          *puVar4 = CONCAT22(uVar9,uVar9);
          *(uint *)(((iVar5 - iVar6) - iVar3) + iVar3 + in_stack_0000005c + (int)puVar4) =
               CONCAT22(uVar10,uVar10);
          *(uint *)(((iVar3 + in_stack_0000005c) - iVar3) + (int)puVar4) = CONCAT22(uVar8,uVar8);
          lVar17 = lVar17 + 4;
          uVar14 = (ulonglong)uRam8329f138;
        } while (iVar13 < (int)uRam8329f138);
      }
      lVar19 = lVar19 + uVar23;
      lVar11 = lVar11 + uVar23;
      lVar22 = lVar22 + uVar23;
      lVar21 = lVar21 + uVar23;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  iVar3 = (int)uVar18 >> 2;
  if ((param_7 != 0) && (0 < (int)uVar15)) {
    lVar20 = lVar20 - param_2;
    iVar13 = (int)param_2;
    uVar14 = uVar15;
    do {
      if (0 < iVar3) {
        lVar16 = param_2;
        lVar21 = (longlong)iVar3;
        do {
          puVar4 = (undefined4 *)lVar16;
          *puVar4 = *(undefined4 *)((int)lVar20 + (iVar5 - iVar6) + (int)puVar4);
          *(undefined4 *)((iVar12 - iVar13) + (int)puVar4) =
               *(undefined4 *)((int)lVar20 + (int)puVar4);
          lVar16 = lVar16 + 4;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      uVar14 = uVar14 - 1;
      param_2 = param_2 + uVar23;
      lVar20 = lVar20 - uVar23;
    } while (uVar14 != 0);
  }
  if (param_8 != 0) {
    iVar12 = (int)lVar19;
    lVar16 = lVar11 - uVar23;
    lVar20 = uVar15 + uStack_a0;
    if (0 < lVar20) {
      lVar21 = lVar16 - lVar19;
      do {
        if (0 < iVar3) {
          lVar22 = lVar19;
          lVar17 = (longlong)iVar3;
          do {
            puVar4 = (undefined4 *)lVar22;
            *puVar4 = *(undefined4 *)
                       ((int)puVar4 + ((iVar12 - in_stack_00000064) - (int)lVar16) + (int)lVar21);
            *(undefined4 *)((int)puVar4 + ((int)lVar11 - (int)lVar19)) =
                 *(undefined4 *)((int)puVar4 + (int)lVar21);
            lVar22 = lVar22 + 4;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        lVar20 = lVar20 + -1;
        lVar19 = lVar19 + uVar23;
        lVar21 = lVar21 - uVar23;
        lVar11 = lVar11 + uVar23;
      } while (lVar20 != 0);
    }
  }
  return;
}

