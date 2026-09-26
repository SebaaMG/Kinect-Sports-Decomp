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
extern int fn_828C4B90();
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;


undefined8 * fn_828C52A0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar20;
  undefined8 uVar19;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 uStack00000018;
  undefined8 uStack00000020;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  uStack00000020 = ((((U64)(uStack00000020)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)param_3)) & ((U64)0xFFFFFFFF)) << 32));
  uVar8 = (((U64)(uStack00000020) >> 32) & 0xFFFFFFFF);
  uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)((ulonglong)param_3 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  uStack_c0 = CONCAT44((((U64)(uStack_c0) >> 0) & 0xFFFFFFFF),(((U64)(uStack00000020) >> 32) & 0xFFFFFFFF) - 1);
  uStack00000018 = ((((U64)(uStack00000018)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)param_2)) & ((U64)0xFFFFFFFF)) << 32));
  uVar7 = (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  uStack00000020 = ((((U64)(uStack00000020)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((((U64)(uStack00000020) >> 32) & 0xFFFFFFFF) - (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF))) & ((U64)0xFFFFFFFF)) << 32));
  uVar21 = ((int)(((U64)(uStack00000020) >> 32) & 0xFFFFFFFF) >> 1) +
           (uint)((int)(((U64)(uStack00000020) >> 32) & 0xFFFFFFFF) < 0 && ((((U64)(uStack00000020) >> 32) & 0xFFFFFFFF) & 1) != 0) +
           (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  uStack_b8 = ((((U64)(uStack_b8)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)((ulonglong)param_2 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  iVar9 = (((U64)(uStack_b8) >> 0) & 0xFFFFFFFF);
  uStack_b8 = CONCAT44((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar21);
  uVar23 = uStack_b8;
  uStack00000018 = param_2;
  uStack00000020 = param_3;
  fn_828C4B90(param_2,uStack_b8,uStack_c0);
  uVar24 = uVar21 + 1;
  uStack_c0 = CONCAT44(iVar9,uVar24);
  uStack_d0 = uVar23;
  uStack_c8 = uStack_c0;
  if (uVar7 < uVar21) {
    uVar25 = (ulonglong)*(uint *)((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8);
    while( true ) {
      uVar17 = (ulonglong)(uVar21 >> 2);
      uVar18 = uVar17;
      if (uVar25 <= uVar17) {
        uVar18 = uVar17 - uVar25;
      }
      uStack_a8 = uStack_d0;
      uVar23 = uStack_a8;
      uStack_a8 = ((((U64)(uStack_a8)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)((ulonglong)uStack_d0 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
      iVar10 = (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF);
      uVar16 = uVar21 - 1;
      uVar22 = uVar16 >> 2;
      if (*(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8) <= uVar22) {
        uVar22 = uVar22 - *(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
      }
      piVar14 = (int *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4);
      uStack_a8 = uVar23;
      if (*(uint *)(*(int *)(*(int *)(*piVar14 + uVar22 * 4) + (uVar16 & 3) * 4) + 8) <
          *(uint *)(*(int *)(*(int *)((int)((uVar18 & 0xffffffff) << 2) +
                                     *(int *)((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 4)) +
                            (int)(((ulonglong)uVar21 & 3) << 2)) + 8)) break;
      uStack_a8 = uStack_d0;
      uVar22 = uVar16 >> 2;
      if (*(uint *)(iVar10 + 8) <= uVar22) {
        uVar22 = uVar22 - *(uint *)(iVar10 + 8);
      }
      if (uVar25 <= uVar17) {
        uVar17 = uVar17 - uVar25;
      }
      if ((*(uint *)(*(int *)(*(int *)((int)((uVar17 & 0xffffffff) << 2) +
                                      *(int *)((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 4)) +
                             (int)(((ulonglong)uVar21 & 3) << 2)) + 8) <
           *(uint *)(*(int *)(*(int *)(*(int *)(iVar10 + 4) + uVar22 * 4) + (uVar16 & 3) * 4) + 8))
         || (uStack_d0 = CONCAT44(iVar10,uVar16), uVar21 = uVar16, uVar16 <= uVar7)) break;
    }
  }
  if (uVar24 < uVar8) {
    uVar25 = (ulonglong)*(uint *)(iVar9 + 8);
    piVar14 = (int *)fn_825AEE38(&uStack_d0);
    uVar24 = (((U64)(uStack_c8) >> 32) & 0xFFFFFFFF);
    do {
      uVar17 = (ulonglong)(uVar24 >> 2);
      uVar18 = uVar17;
      if (uVar25 <= uVar17) {
        uVar18 = uVar17 - uVar25;
      }
      if (*(uint *)(*(int *)(*(int *)((int)((uVar18 & 0xffffffff) << 2) + *(int *)(iVar9 + 4)) +
                            (int)(((ulonglong)uVar24 & 3) << 2)) + 8) < *(uint *)(*piVar14 + 8))
      break;
      if (uVar25 <= uVar17) {
        uVar17 = uVar17 - uVar25;
      }
      if (*(uint *)(*piVar14 + 8) <
          *(uint *)(*(int *)(*(int *)((int)((uVar17 & 0xffffffff) << 2) + *(int *)(iVar9 + 4)) +
                            (int)(((ulonglong)uVar24 & 3) << 2)) + 8)) break;
      uVar24 = uVar24 + 1;
      uStack_c8 = CONCAT44((((U64)(uStack_c8) >> 0) & 0xFFFFFFFF),uVar24);
    } while (uVar24 < uVar8);
  }
  iVar9 = (((U64)(uStack_d0) >> 0) & 0xFFFFFFFF);
  iVar10 = (((U64)(uStack_c8) >> 0) & 0xFFFFFFFF);
  uStack_b8 = uStack_c8;
  uVar12 = uStack_b8;
  uStack_c0 = uStack_d0;
  uVar23 = uStack_c0;
  uStack_b8 = ((((U64)(uStack_b8)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uStack_c8)) & ((U64)0xFFFFFFFF)) << 32));
  uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uStack_d0)) & ((U64)0xFFFFFFFF)) << 32));
  uVar16 = (((U64)(uStack_b8) >> 32) & 0xFFFFFFFF);
  uVar22 = (((U64)(uStack_c0) >> 32) & 0xFFFFFFFF);
  uStack_c0 = uVar23;
  uStack_b8 = uVar12;
LAB_828c54e0:
  uVar19 = uVar23;
  uVar12 = uStack_d0;
  uVar6 = uStack_c0;
  if (uVar16 < uVar8) {
    do {
      uVar26 = (ulonglong)*(uint *)(iVar10 + 8);
      uVar25 = (ulonglong)(uVar16 >> 2);
      uVar17 = (ulonglong)uVar16 & 3;
      uVar18 = uVar25;
      if (uVar26 <= uVar25) {
        uVar18 = uVar25 - uVar26;
      }
      piVar14 = (int *)fn_825AEE38(&uStack_d0);
      uVar23 = uStack_c8;
      iVar1 = *(int *)(iVar10 + 4);
      uVar12 = uStack_d0;
      uVar6 = uStack_c0;
      if (*(uint *)(*(int *)(*(int *)((int)((uVar18 & 0xffffffff) << 2) + iVar1) +
                            (int)(uVar17 << 2)) + 8) <= *(uint *)(*piVar14 + 8)) {
        uVar18 = uVar25;
        if (uVar26 <= uVar25) {
          uVar18 = uVar25 - uVar26;
        }
        if (*(uint *)(*(int *)(*(int *)((int)((uVar18 & 0xffffffff) << 2) + iVar1) +
                              (int)(uVar17 << 2)) + 8) < *(uint *)(*piVar14 + 8)) break;
        uVar24 = uVar24 + 1;
        uStack_c8 = CONCAT44((((U64)(uStack_c8) >> 0) & 0xFFFFFFFF),uVar24);
        uStack_b0 = uVar23;
        if (uVar26 <= uVar25) {
          uVar25 = uVar25 - uVar26;
        }
        uStack_b0 = ((((U64)(uStack_b0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar23)) & ((U64)0xFFFFFFFF)) << 32));
        uVar20 = (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) >> 2;
        if (*(uint *)((((U64)(uStack_c8) >> 0) & 0xFFFFFFFF) + 8) <= uVar20) {
          uVar20 = uVar20 - *(uint *)((((U64)(uStack_c8) >> 0) & 0xFFFFFFFF) + 8);
        }
        iVar5 = ((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 3) * 4;
        iVar1 = *(int *)((int)((uVar25 & 0xffffffff) << 2) + iVar1);
        iVar2 = *(int *)(*(int *)((((U64)(uStack_c8) >> 0) & 0xFFFFFFFF) + 4) + uVar20 * 4);
        iVar4 = (int)(((ulonglong)uVar16 & 3) << 2);
        uVar3 = *(undefined4 *)(iVar2 + iVar5);
        *(undefined4 *)(iVar2 + iVar5) = *(undefined4 *)(iVar1 + iVar4);
        *(undefined4 *)(iVar1 + iVar4) = uVar3;
        uStack_b0 = uVar23;
      }
      uVar16 = uVar16 + 1;
      uStack_b8 = CONCAT44((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar16);
    } while (uVar16 < uVar8);
  }
  do {
    uVar23 = uVar19;
    uVar11 = uStack_b0;
    uVar19 = uStack_b8;
    uStack_d0 = ((((U64)(uStack_d0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)((ulonglong)uVar12 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)((ulonglong)uVar6 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    uVar13 = uStack_a8;
    if (uVar22 <= uVar7) break;
    uVar18 = (ulonglong)*(uint *)(iVar9 + 8);
    uVar25 = (ulonglong)(uVar21 >> 2);
    uVar17 = uVar25;
    if (uVar18 <= uVar25) {
      uVar17 = uVar25 - uVar18;
    }
    uStack_a8 = ((((U64)(uStack_a8)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)((ulonglong)uVar23 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    uVar15 = uVar22 - 1;
    iVar1 = *(int *)(iVar9 + 4);
    uVar20 = uVar15 >> 2;
    if (*(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8) <= uVar20) {
      uVar20 = uVar20 - *(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
    }
    if (*(uint *)(*(int *)(*(int *)((int)((uVar17 & 0xffffffff) << 2) + iVar1) +
                          (int)(((ulonglong)uVar21 & 3) << 2)) + 8) <=
        *(uint *)(*(int *)(*(int *)(*(int *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4) + uVar20 * 4) + (uVar15 & 3) * 4)
                 + 8)) {
      uVar20 = uVar15 >> 2;
      if (*(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8) <= uVar20) {
        uVar20 = uVar20 - *(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
      }
      if (uVar18 <= uVar25) {
        uVar25 = uVar25 - uVar18;
      }
      uVar13 = uVar23;
      if (*(uint *)(*(int *)(*(int *)((int)((uVar25 & 0xffffffff) << 2) + iVar1) +
                            (int)(((ulonglong)uVar21 & 3) << 2)) + 8) <
          *(uint *)(*(int *)(*(int *)(*(int *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4) + uVar20 * 4) + (uVar15 & 3) * 4
                            ) + 8)) break;
      uVar21 = uVar21 - 1;
      uVar22 = uVar15 >> 2;
      uStack_d0 = CONCAT44((((U64)(uStack_d0) >> 0) & 0xFFFFFFFF),uVar21);
      if (*(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8) <= uVar22) {
        uVar22 = uVar22 - *(uint *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
      }
      uVar25 = (ulonglong)(uVar21 >> 2);
      if (uVar18 <= uVar25) {
        uVar25 = uVar25 - uVar18;
      }
      iVar4 = (uVar21 & 3) * 4;
      iVar5 = (uVar15 & 3) * 4;
      iVar2 = *(int *)(*(int *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4) + uVar22 * 4);
      iVar1 = *(int *)((int)((uVar25 & 0xffffffff) << 2) + iVar1);
      uVar3 = *(undefined4 *)(iVar1 + iVar4);
      *(undefined4 *)(iVar1 + iVar4) = *(undefined4 *)(iVar2 + iVar5);
      *(undefined4 *)(iVar2 + iVar5) = uVar3;
      uVar12 = uStack_d0;
    }
    uStack_d0 = uVar12;
    uStack_c0 = CONCAT44((((U64)(uStack_c0) >> 0) & 0xFFFFFFFF),uVar15);
    uVar19 = uStack_c0;
    uVar22 = uVar15;
    uVar12 = uStack_d0;
    uVar6 = uStack_c0;
    uStack_a8 = uVar23;
  } while( true );
  uStack_a8 = uVar13;
  uStack_b0 = ((((U64)(uStack_b0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uStack_b8)) & ((U64)0xFFFFFFFF)) << 32));
  if (uVar22 == uVar7) {
    if (uVar16 == uVar8) {
      *param_1 = uVar12;
      param_1[1] = uStack_c8;
      return param_1;
    }
    if (uVar24 != uVar16) {
      uVar20 = uVar24 >> 2;
      if (*(uint *)(iVar10 + 8) <= uVar20) {
        uVar20 = uVar20 - *(uint *)(iVar10 + 8);
      }
      uVar15 = uVar21 >> 2;
      if (*(uint *)(iVar9 + 8) <= uVar15) {
        uVar15 = uVar15 - *(uint *)(iVar9 + 8);
      }
      iVar4 = (uVar21 & 3) * 4;
      iVar5 = (uVar24 & 3) * 4;
      iVar1 = *(int *)(uVar20 * 4 + *(int *)(iVar10 + 4));
      iVar2 = *(int *)(uVar15 * 4 + *(int *)(iVar9 + 4));
      uVar3 = *(undefined4 *)(iVar2 + iVar4);
      *(undefined4 *)(iVar2 + iVar4) = *(undefined4 *)(iVar1 + iVar5);
      *(undefined4 *)(iVar1 + iVar5) = uVar3;
    }
    uVar24 = uVar24 + 1;
    uVar16 = uVar16 + 1;
    uVar21 = uVar21 + 1;
    uStack_c8 = CONCAT44((((U64)(uStack_c8) >> 0) & 0xFFFFFFFF),uVar24);
    uStack_b8 = CONCAT44((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar16);
    uStack_d0 = CONCAT44((((U64)(uStack_d0) >> 0) & 0xFFFFFFFF),uVar21);
    uVar20 = (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) >> 2;
    if (*(uint *)((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8) <= uVar20) {
      uVar20 = uVar20 - *(uint *)((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8);
    }
    uStack_a8 = ((((U64)(uStack_a8)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar12)) & ((U64)0xFFFFFFFF)) << 32));
    uVar15 = (((U64)(uStack_a8) >> 32) & 0xFFFFFFFF) >> 2;
    if (*(uint *)((((U64)(uStack_d0) >> 0) & 0xFFFFFFFF) + 8) <= uVar15) {
      uVar15 = uVar15 - *(uint *)((((U64)(uStack_d0) >> 0) & 0xFFFFFFFF) + 8);
    }
    iVar4 = ((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 3) * 4;
    iVar5 = ((((U64)(uStack_a8) >> 32) & 0xFFFFFFFF) & 3) * 4;
    iVar1 = *(int *)(*(int *)((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 4) + uVar20 * 4);
    iVar2 = *(int *)(*(int *)((((U64)(uStack_d0) >> 0) & 0xFFFFFFFF) + 4) + uVar15 * 4);
    uVar3 = *(undefined4 *)(iVar2 + iVar5);
    *(undefined4 *)(iVar2 + iVar5) = *(undefined4 *)(iVar1 + iVar4);
    *(undefined4 *)(iVar1 + iVar4) = uVar3;
    uStack_c0 = uVar6;
    uStack_b0 = uVar19;
    uStack_a8 = uVar12;
  }
  else {
    uVar22 = uVar22 - 1;
    uStack_c0 = CONCAT44((((U64)(uStack_c0) >> 0) & 0xFFFFFFFF),uVar22);
    uVar23 = uStack_c0;
    uStack_b0 = uVar11;
    if (uVar16 == uVar8) {
      uVar21 = uVar21 - 1;
      uStack_d0 = CONCAT44((((U64)(uStack_d0) >> 0) & 0xFFFFFFFF),uVar21);
      if (uVar22 != uVar21) {
        uVar20 = uVar21 >> 2;
        if (*(uint *)(iVar9 + 8) <= uVar20) {
          uVar20 = uVar20 - *(uint *)(iVar9 + 8);
        }
        uVar15 = uVar22 >> 2;
        if (*(uint *)(iVar9 + 8) <= uVar15) {
          uVar15 = uVar15 - *(uint *)(iVar9 + 8);
        }
        iVar4 = (uVar22 & 3) * 4;
        iVar5 = (uVar21 & 3) * 4;
        iVar1 = *(int *)(uVar20 * 4 + *(int *)(iVar9 + 4));
        iVar2 = *(int *)(*(int *)(iVar9 + 4) + uVar15 * 4);
        uVar3 = *(undefined4 *)(iVar2 + iVar4);
        *(undefined4 *)(iVar2 + iVar4) = *(undefined4 *)(iVar1 + iVar5);
        *(undefined4 *)(iVar1 + iVar5) = uVar3;
      }
      uVar24 = uVar24 - 1;
      uVar20 = uVar24 >> 2;
      uStack_c8 = CONCAT44((((U64)(uStack_c8) >> 0) & 0xFFFFFFFF),uVar24);
      if (*(uint *)(iVar10 + 8) <= uVar20) {
        uVar20 = uVar20 - *(uint *)(iVar10 + 8);
      }
      uVar15 = uVar21 >> 2;
      if (*(uint *)(iVar9 + 8) <= uVar15) {
        uVar15 = uVar15 - *(uint *)(iVar9 + 8);
      }
      iVar4 = (uVar21 & 3) * 4;
      iVar5 = (uVar24 & 3) * 4;
      iVar1 = *(int *)(uVar20 * 4 + *(int *)(iVar10 + 4));
      iVar2 = *(int *)(uVar15 * 4 + *(int *)(iVar9 + 4));
      uVar3 = *(undefined4 *)(iVar2 + iVar4);
      *(undefined4 *)(iVar2 + iVar4) = *(undefined4 *)(iVar1 + iVar5);
      *(undefined4 *)(iVar1 + iVar5) = uVar3;
    }
    else {
      uVar16 = uVar16 + 1;
      uVar20 = uVar22 >> 2;
      uStack_b8 = CONCAT44((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar16);
      uStack_a8 = uVar19;
      if (*(uint *)(iVar9 + 8) <= uVar20) {
        uVar20 = uVar20 - *(uint *)(iVar9 + 8);
      }
      uVar15 = (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) >> 2;
      if (*(uint *)((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8) <= uVar15) {
        uVar15 = uVar15 - *(uint *)((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8);
      }
      iVar4 = (uVar22 & 3) * 4;
      iVar5 = ((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 3) * 4;
      iVar1 = *(int *)(*(int *)(iVar9 + 4) + uVar20 * 4);
      iVar2 = *(int *)(*(int *)((((U64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 4) + uVar15 * 4);
      uVar3 = *(undefined4 *)(iVar2 + iVar5);
      *(undefined4 *)(iVar2 + iVar5) = *(undefined4 *)(iVar1 + iVar4);
      *(undefined4 *)(iVar1 + iVar4) = uVar3;
      uStack_d0 = uVar12;
    }
  }
  goto LAB_828c54e0;
}

