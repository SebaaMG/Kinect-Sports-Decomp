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
extern int fn_825AEE38();
extern int fn_828D54B8();
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


void fn_828D6150(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined8 *puStack00000014;
  undefined8 uStack00000018;
  undefined8 uStack00000020;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  uStack00000020 = ((((U64)(uStack00000020)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)param_3)) & ((U64)0xFFFFFFFF)) << 32));
  uVar10 = (((U64)(uStack00000020) >> 32) & 0xFFFFFFFF);
  uStack_b0 = ((((U64)(uStack_b0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)((ulonglong)param_3 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  uStack_b0 = CONCAT44((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF),(((U64)(uStack00000020) >> 32) & 0xFFFFFFFF) - 1);
  uStack00000018 = ((((U64)(uStack00000018)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)param_2)) & ((U64)0xFFFFFFFF)) << 32));
  uVar9 = (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  uStack00000020 = ((((U64)(uStack00000020)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((((U64)(uStack00000020) >> 32) & 0xFFFFFFFF) - (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF))) & ((U64)0xFFFFFFFF)) << 32));
  uVar23 = ((int)(((U64)(uStack00000020) >> 32) & 0xFFFFFFFF) >> 1) +
           (uint)((int)(((U64)(uStack00000020) >> 32) & 0xFFFFFFFF) < 0 && ((((U64)(uStack00000020) >> 32) & 0xFFFFFFFF) & 1) != 0) +
           (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  uStack_a8 = ((((U64)(uStack_a8)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)((ulonglong)param_2 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  iVar1 = (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF);
  uStack_a8 = CONCAT44((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF),uVar23);
  uVar25 = uStack_a8;
  puStack00000014 = param_1;
  uStack00000018 = param_2;
  uStack00000020 = param_3;
  fn_828D54B8(param_2,uStack_a8,uStack_b0);
  uVar26 = uVar23 + 1;
  uStack_b0 = CONCAT44(iVar1,uVar26);
  uStack_c0 = uVar25;
  uStack_b8 = uStack_b0;
  if (uVar9 < uVar23) {
    uVar15 = (ulonglong)*(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
    while( true ) {
      uVar18 = uVar23 - 1;
      uVar24 = uVar18 >> 2;
      uStack_a0 = uStack_c0;
      uVar25 = uStack_a0;
      uStack_a0 = ((((U64)(uStack_a0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)((ulonglong)uStack_c0 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
      iVar11 = (((U64)(uStack_a0) >> 0) & 0xFFFFFFFF);
      if (*(uint *)((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8) <= uVar24) {
        uVar24 = uVar24 - *(uint *)((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8);
      }
      uVar20 = (ulonglong)(uVar23 >> 2);
      uVar19 = uVar20;
      if (uVar15 <= uVar20) {
        uVar19 = uVar20 - uVar15;
      }
      piVar5 = (int *)((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 4);
      uStack_a0 = uVar25;
      if (*(uint *)(*(int *)(*piVar5 + uVar24 * 4) + (uVar18 & 3) * 4) <
          *(uint *)(*(int *)((int)((uVar19 & 0xffffffff) << 2) + *(int *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4)) +
                   (int)(((ulonglong)uVar23 & 3) << 2))) break;
      if (uVar15 <= uVar20) {
        uVar20 = uVar20 - uVar15;
      }
      uStack_a0 = uStack_c0;
      uVar24 = uVar18 >> 2;
      if (*(uint *)(iVar11 + 8) <= uVar24) {
        uVar24 = uVar24 - *(uint *)(iVar11 + 8);
      }
      if ((*(uint *)(*(int *)((int)((uVar20 & 0xffffffff) << 2) + *(int *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4)) +
                    (int)(((ulonglong)uVar23 & 3) << 2)) <
           *(uint *)(*(int *)(*(int *)(iVar11 + 4) + uVar24 * 4) + (uVar18 & 3) * 4)) ||
         (uStack_c0 = CONCAT44(iVar11,uVar18), uVar23 = uVar18, uVar18 <= uVar9)) break;
    }
  }
  if (uVar26 < uVar10) {
    uVar15 = (ulonglong)*(uint *)(iVar1 + 8);
    iVar1 = *(int *)(iVar1 + 4);
    puVar16 = (uint *)fn_825AEE38(&uStack_c0);
    uVar26 = (((U64)(uStack_b8) >> 32) & 0xFFFFFFFF);
    do {
      uVar20 = (ulonglong)(uVar26 >> 2);
      uVar19 = uVar20;
      if (uVar15 <= uVar20) {
        uVar19 = uVar20 - uVar15;
      }
      if (*(uint *)(*(int *)((int)((uVar19 & 0xffffffff) << 2) + iVar1) +
                   (int)(((ulonglong)uVar26 & 3) << 2)) < *puVar16) break;
      if (uVar15 <= uVar20) {
        uVar20 = uVar20 - uVar15;
      }
      if (*puVar16 <
          *(uint *)(*(int *)((int)((uVar20 & 0xffffffff) << 2) + iVar1) +
                   (int)(((ulonglong)uVar26 & 3) << 2))) break;
      uVar26 = uVar26 + 1;
      uStack_b8 = CONCAT44((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar26);
    } while (uVar26 < uVar10);
  }
  iVar1 = (((U64)(uStack_c0) >> 0) & 0xFFFFFFFF);
  iVar11 = (((U64)(uStack_b8) >> 0) & 0xFFFFFFFF);
  uStack_a8 = uStack_b8;
  uVar12 = uStack_a8;
  uStack_b0 = uStack_c0;
  uVar25 = uStack_b0;
  uStack_a8 = ((((U64)(uStack_a8)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uStack_b8)) & ((U64)0xFFFFFFFF)) << 32));
  uStack_b0 = ((((U64)(uStack_b0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uStack_c0)) & ((U64)0xFFFFFFFF)) << 32));
  uVar18 = (((U64)(uStack_a8) >> 32) & 0xFFFFFFFF);
  uVar24 = (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF);
  uStack_b0 = uVar25;
  uStack_a8 = uVar12;
LAB_828d6370:
  uVar14 = uVar25;
  uVar12 = uStack_c0;
  uVar8 = uStack_b0;
  if (uVar18 < uVar10) {
    do {
      uVar27 = (ulonglong)*(uint *)(iVar11 + 8);
      uVar15 = (ulonglong)(uVar18 >> 2);
      uVar20 = (ulonglong)uVar18 & 3;
      uVar19 = uVar15;
      if (uVar27 <= uVar15) {
        uVar19 = uVar15 - uVar27;
      }
      iVar2 = *(int *)(iVar11 + 4);
      puVar16 = (uint *)fn_825AEE38(&uStack_c0);
      uVar25 = uStack_b8;
      uVar12 = uStack_c0;
      uVar8 = uStack_b0;
      if (*(uint *)(*(int *)((int)((uVar19 & 0xffffffff) << 2) + iVar2) + (int)(uVar20 << 2)) <=
          *puVar16) {
        uVar19 = uVar15;
        if (uVar27 <= uVar15) {
          uVar19 = uVar15 - uVar27;
        }
        if (*(uint *)(*(int *)((int)((uVar19 & 0xffffffff) << 2) + iVar2) + (int)(uVar20 << 2)) <
            *puVar16) break;
        uVar26 = uVar26 + 1;
        uStack_b8 = CONCAT44((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar26);
        uStack_a0 = uVar25;
        if (uVar27 <= uVar15) {
          uVar15 = uVar15 - uVar27;
        }
        uStack_a0 = ((((U64)(uStack_a0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar25)) & ((U64)0xFFFFFFFF)) << 32));
        uVar21 = (((U64)(uStack_a0) >> 32) & 0xFFFFFFFF) >> 2;
        if (*(uint *)((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8) <= uVar21) {
          uVar21 = uVar21 - *(uint *)((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8);
        }
        iVar7 = ((((U64)(uStack_a0) >> 32) & 0xFFFFFFFF) & 3) * 4;
        iVar2 = *(int *)((int)((uVar15 & 0xffffffff) << 2) + iVar2);
        iVar3 = *(int *)(*(int *)((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 4) + uVar21 * 4);
        iVar6 = (int)(((ulonglong)uVar18 & 3) << 2);
        uVar4 = *(undefined4 *)(iVar3 + iVar7);
        *(undefined4 *)(iVar3 + iVar7) = *(undefined4 *)(iVar2 + iVar6);
        *(undefined4 *)(iVar2 + iVar6) = uVar4;
        uStack_a0 = uVar25;
      }
      uVar18 = uVar18 + 1;
      uStack_a8 = CONCAT44((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF),uVar18);
    } while (uVar18 < uVar10);
  }
  do {
    uVar25 = uVar14;
    uVar14 = uStack_a8;
    uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)((ulonglong)uVar12 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    uStack_b0 = ((((U64)(uStack_b0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)((ulonglong)uVar8 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    uVar13 = uStack_a0;
    if (uVar24 <= uVar9) break;
    uVar17 = uVar24 - 1;
    uVar21 = uVar17 >> 2;
    uStack_a0 = ((((U64)(uStack_a0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)((ulonglong)uVar25 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    if (*(uint *)((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8) <= uVar21) {
      uVar21 = uVar21 - *(uint *)((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8);
    }
    uVar19 = (ulonglong)*(uint *)(iVar1 + 8);
    uVar15 = (ulonglong)(uVar23 >> 2);
    uVar20 = uVar15;
    if (uVar19 <= uVar15) {
      uVar20 = uVar15 - uVar19;
    }
    iVar2 = *(int *)(iVar1 + 4);
    if (*(uint *)(*(int *)((int)((uVar20 & 0xffffffff) << 2) + iVar2) +
                 (int)(((ulonglong)uVar23 & 3) << 2)) <=
        *(uint *)(*(int *)(*(int *)((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 4) + uVar21 * 4) + (uVar17 & 3) * 4)) {
      if (uVar19 <= uVar15) {
        uVar15 = uVar15 - uVar19;
      }
      uVar21 = uVar17 >> 2;
      if (*(uint *)((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8) <= uVar21) {
        uVar21 = uVar21 - *(uint *)((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8);
      }
      uVar13 = uVar25;
      if (*(uint *)(*(int *)((int)((uVar15 & 0xffffffff) << 2) + iVar2) +
                   (int)(((ulonglong)uVar23 & 3) << 2)) <
          *(uint *)(*(int *)(*(int *)((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 4) + uVar21 * 4) + (uVar17 & 3) * 4)) break;
      uVar23 = uVar23 - 1;
      uVar24 = uVar17 >> 2;
      uStack_c0 = CONCAT44((((U64)(uStack_c0) >> 0) & 0xFFFFFFFF),uVar23);
      if (*(uint *)((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8) <= uVar24) {
        uVar24 = uVar24 - *(uint *)((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8);
      }
      uVar15 = (ulonglong)(uVar23 >> 2);
      if (uVar19 <= uVar15) {
        uVar15 = uVar15 - uVar19;
      }
      iVar6 = (uVar23 & 3) * 4;
      iVar7 = (uVar17 & 3) * 4;
      iVar3 = *(int *)(*(int *)((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 4) + uVar24 * 4);
      iVar2 = *(int *)((int)((uVar15 & 0xffffffff) << 2) + iVar2);
      uVar4 = *(undefined4 *)(iVar2 + iVar6);
      *(undefined4 *)(iVar2 + iVar6) = *(undefined4 *)(iVar3 + iVar7);
      *(undefined4 *)(iVar3 + iVar7) = uVar4;
      uVar12 = uStack_c0;
    }
    uStack_c0 = uVar12;
    uStack_b0 = CONCAT44((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF),uVar17);
    uVar14 = uStack_b0;
    uVar24 = uVar17;
    uVar12 = uStack_c0;
    uVar8 = uStack_b0;
    uStack_a0 = uVar25;
  } while( true );
  uStack_a0 = uVar13;
  uVar13 = uStack_a0;
  uStack_a0 = ((((U64)(uStack_a0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uStack_a8)) & ((U64)0xFFFFFFFF)) << 32));
  uVar21 = (((U64)(uStack_a0) >> 32) & 0xFFFFFFFF);
  if (uVar24 == uVar9) {
    if (uVar18 == uVar10) {
      *puStack00000014 = uVar12;
      puStack00000014[1] = uStack_b8;
      return;
    }
    if (uVar26 != uVar18) {
      uVar17 = uVar26 >> 2;
      if (*(uint *)(iVar11 + 8) <= uVar17) {
        uVar17 = uVar17 - *(uint *)(iVar11 + 8);
      }
      uVar22 = uVar23 >> 2;
      if (*(uint *)(iVar1 + 8) <= uVar22) {
        uVar22 = uVar22 - *(uint *)(iVar1 + 8);
      }
      iVar6 = (uVar23 & 3) * 4;
      iVar7 = (uVar26 & 3) * 4;
      iVar2 = *(int *)(uVar17 * 4 + *(int *)(iVar11 + 4));
      iVar3 = *(int *)(uVar22 * 4 + *(int *)(iVar1 + 4));
      uVar4 = *(undefined4 *)(iVar3 + iVar6);
      *(undefined4 *)(iVar3 + iVar6) = *(undefined4 *)(iVar2 + iVar7);
      *(undefined4 *)(iVar2 + iVar7) = uVar4;
    }
    uVar26 = uVar26 + 1;
    uVar18 = uVar18 + 1;
    uVar23 = uVar23 + 1;
    uStack_b8 = CONCAT44((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar26);
    uStack_a8 = CONCAT44((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF),uVar18);
    uStack_c0 = CONCAT44((((U64)(uStack_c0) >> 0) & 0xFFFFFFFF),uVar23);
    uVar17 = (((U64)(uStack_a0) >> 32) & 0xFFFFFFFF) >> 2;
    if (*(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8) <= uVar17) {
      uVar17 = uVar17 - *(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
    }
    uStack_a0 = ((((U64)(uStack_a0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar12)) & ((U64)0xFFFFFFFF)) << 32));
    uVar22 = (((U64)(uStack_a0) >> 32) & 0xFFFFFFFF) >> 2;
    if (*(uint *)((((U64)(uStack_c0) >> 0) & 0xFFFFFFFF) + 8) <= uVar22) {
      uVar22 = uVar22 - *(uint *)((((U64)(uStack_c0) >> 0) & 0xFFFFFFFF) + 8);
    }
    iVar6 = (uVar21 & 3) * 4;
    iVar7 = ((((U64)(uStack_a0) >> 32) & 0xFFFFFFFF) & 3) * 4;
    iVar2 = *(int *)(*(int *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4) + uVar17 * 4);
    iVar3 = *(int *)(*(int *)((((U64)(uStack_c0) >> 0) & 0xFFFFFFFF) + 4) + uVar22 * 4);
    uVar4 = *(undefined4 *)(iVar3 + iVar7);
    *(undefined4 *)(iVar3 + iVar7) = *(undefined4 *)(iVar2 + iVar6);
    *(undefined4 *)(iVar2 + iVar6) = uVar4;
    uStack_b0 = uVar8;
    uStack_a0 = uVar12;
  }
  else {
    uVar24 = uVar24 - 1;
    uStack_b0 = CONCAT44((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF),uVar24);
    uVar25 = uStack_b0;
    if (uVar18 == uVar10) {
      uVar23 = uVar23 - 1;
      uStack_c0 = CONCAT44((((U64)(uStack_c0) >> 0) & 0xFFFFFFFF),uVar23);
      if (uVar24 != uVar23) {
        uVar21 = uVar23 >> 2;
        if (*(uint *)(iVar1 + 8) <= uVar21) {
          uVar21 = uVar21 - *(uint *)(iVar1 + 8);
        }
        uVar17 = uVar24 >> 2;
        if (*(uint *)(iVar1 + 8) <= uVar17) {
          uVar17 = uVar17 - *(uint *)(iVar1 + 8);
        }
        iVar6 = (uVar24 & 3) * 4;
        iVar7 = (uVar23 & 3) * 4;
        iVar2 = *(int *)(uVar21 * 4 + *(int *)(iVar1 + 4));
        iVar3 = *(int *)(*(int *)(iVar1 + 4) + uVar17 * 4);
        uVar4 = *(undefined4 *)(iVar3 + iVar6);
        *(undefined4 *)(iVar3 + iVar6) = *(undefined4 *)(iVar2 + iVar7);
        *(undefined4 *)(iVar2 + iVar7) = uVar4;
      }
      uVar26 = uVar26 - 1;
      uVar21 = uVar26 >> 2;
      uStack_b8 = CONCAT44((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar26);
      if (*(uint *)(iVar11 + 8) <= uVar21) {
        uVar21 = uVar21 - *(uint *)(iVar11 + 8);
      }
      uVar17 = uVar23 >> 2;
      if (*(uint *)(iVar1 + 8) <= uVar17) {
        uVar17 = uVar17 - *(uint *)(iVar1 + 8);
      }
      iVar6 = (uVar23 & 3) * 4;
      iVar7 = (uVar26 & 3) * 4;
      iVar2 = *(int *)(uVar21 * 4 + *(int *)(iVar11 + 4));
      iVar3 = *(int *)(uVar17 * 4 + *(int *)(iVar1 + 4));
      uVar4 = *(undefined4 *)(iVar3 + iVar6);
      *(undefined4 *)(iVar3 + iVar6) = *(undefined4 *)(iVar2 + iVar7);
      *(undefined4 *)(iVar2 + iVar7) = uVar4;
      uStack_a0 = uVar13;
    }
    else {
      uVar18 = uVar18 + 1;
      uVar17 = uVar24 >> 2;
      uStack_a8 = CONCAT44((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF),uVar18);
      uStack_a0 = uVar14;
      if (*(uint *)(iVar1 + 8) <= uVar17) {
        uVar17 = uVar17 - *(uint *)(iVar1 + 8);
      }
      uVar22 = uVar21 >> 2;
      if (*(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8) <= uVar22) {
        uVar22 = uVar22 - *(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
      }
      iVar6 = (uVar24 & 3) * 4;
      iVar7 = (uVar21 & 3) * 4;
      iVar2 = *(int *)(*(int *)(iVar1 + 4) + uVar17 * 4);
      iVar3 = *(int *)(*(int *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4) + uVar22 * 4);
      uVar4 = *(undefined4 *)(iVar3 + iVar7);
      *(undefined4 *)(iVar3 + iVar7) = *(undefined4 *)(iVar2 + iVar6);
      *(undefined4 *)(iVar2 + iVar6) = uVar4;
      uStack_c0 = uVar12;
    }
  }
  goto LAB_828d6370;
}

