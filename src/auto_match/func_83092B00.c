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
extern unsigned int *auStack_b0;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_8308B6C0();
extern int fn_8308B7A0();
extern unsigned int iStack_d8;
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;


void fn_83092B00(int param_1,int param_2,int param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  ushort uVar14;
  int in_r0;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined2 *puVar20;
  int iVar21;
  ushort *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  ushort *puVar25;
  ushort *puVar26;
  short *psVar27;
  uint uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort *puVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  int iStack_ec;
  int iStack_e8;
  struct { int first; uint second; } stack_pair_d8;

  uint uStack_d0;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  ulonglong auStack_b0 [22];
  
  puVar23 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar33 = puVar23[1];
  uVar34 = puVar23[2];
  uVar35 = puVar23[3];
  fVar1 = *(float *)(param_1 + 100);
  fVar2 = *(float *)(param_1 + 0x60);
  fVar3 = *(float *)(param_1 + 0x68);
  puVar13 = (undefined4 *)((int)&fStack_c0 + in_r0 & 0xfffffff0);
  *puVar13 = *puVar23;
  puVar13[1] = uVar33;
  puVar13[2] = uVar34;
  puVar13[3] = uVar35;
  uStack_d0 = 0x80000000;
  stack_pair_d8.first = 0;
  stack_pair_d8.second = 0;
  auStack_b0[1] = (longlong)(fStack_bc * fVar1) & 0xfffffffffffffffe;
  auStack_b0[0] = (longlong)(fStack_c0 * fVar2) & 0xfffffffffffffffe;
  iStack_e8 = 0;
  auStack_b0[2] = (longlong)(fStack_b8 * fVar3) & 0xfffffffffffffffe;
  fStack_bc = (float)(longlong)auStack_b0[1] / fVar1;
  fStack_c0 = (float)(longlong)auStack_b0[0] / fVar2;
  fStack_b8 = (float)(longlong)auStack_b0[2] / fVar3;
  puVar23 = (undefined4 *)((int)&fStack_c0 + in_r0 & 0xfffffff0);
  uVar33 = puVar23[1];
  uVar34 = puVar23[2];
  uVar35 = puVar23[3];
  puVar13 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar13 = *puVar23;
  puVar13[1] = uVar33;
  puVar13[2] = uVar34;
  puVar13[3] = uVar35;
  do {
    uVar19 = auStack_b0[iStack_e8];
    iVar16 = iStack_e8 * 0xc + param_1;
    if ((int)uVar19 < 0) {
      iVar21 = 1;
      iVar17 = *(int *)(iVar16 + 0xb0) + -1;
      iStack_ec = 1;
    }
    else {
      iVar17 = 0;
      iVar21 = *(int *)(iVar16 + 0xb0) + -2;
      iStack_ec = -1;
    }
    for (; iVar21 != iVar17; iVar21 = iVar21 + iStack_ec) {
      puVar20 = (undefined2 *)(iVar21 * 4 + *(int *)(iVar16 + 0xac));
      uVar5 = *(ushort *)(iVar21 * 4 + *(int *)(iVar16 + 0xac));
      if ((1 < uVar5) && (uVar5 < 0xfffc)) {
        uVar11 = uVar5 & 1;
        uVar24 = (uint)uVar5 + (int)uVar19 & 0xfffffffe | uVar11;
        puVar22 = (ushort *)((uint)(ushort)puVar20[1] * 0x10 + *(int *)(param_1 + 0xa0));
        uVar28 = uVar11;
        if ((-1 < (int)uVar24) && (uVar28 = uVar24, 0xfffb < (int)uVar24)) {
          uVar28 = uVar11 | 0xfffc;
        }
        *puVar20 = (short)uVar28;
        if ((uVar28 == 0) || (uVar28 == 0xfffd)) {
          iVar10 = *(int *)(param_1 + 0xa0);
          uVar11 = **(uint **)(puVar22 + 6);
          puVar25 = (ushort *)(uVar11 * 0x10 + iVar10);
          iVar15 = *(int *)(param_1 + 0xac);
          uVar28 = (uint)puVar25[4];
          uVar31 = *(ushort *)((uint)puVar22[4] * 4 + iVar15);
          uVar6 = *(ushort *)((uint)*puVar22 * 4 + *(int *)(param_1 + 0xb8));
          uVar7 = *(ushort *)((uint)puVar22[1] * 4 + *(int *)(param_1 + 0xc4));
          puVar32 = (ushort *)(uVar28 * 4 + iVar15);
          uVar30 = *(ushort *)((uint)puVar22[5] * 4 + iVar15);
          uVar8 = *(ushort *)((uint)puVar22[2] * 4 + *(int *)(param_1 + 0xb8));
          uVar9 = *(ushort *)((uint)puVar22[3] * 4 + *(int *)(param_1 + 0xc4));
          uVar5 = puVar32[-2];
          puVar22 = puVar32;
          while (uVar29 = (ushort)uVar28, uVar31 < uVar5) {
            piVar18 = (int *)((uint)puVar22[-1] * 0x10 + iVar10);
            *(undefined4 *)puVar32 = *(undefined4 *)(puVar22 + -2);
            puVar32 = puVar32 + -2;
            if ((uVar5 & 1) == 0) {
              *(ushort *)(piVar18 + 2) = uVar29;
            }
            else {
              iVar15 = *(int *)puVar25;
              iVar12 = *(int *)(puVar25 + 2);
              *(ushort *)((int)piVar18 + 10) = uVar29;
              if (((piVar18[1] - iVar15 | iVar12 - *piVar18) & 0x80008000U) == 0) {
                fn_8308B6C0(*(undefined4 *)(param_1 + 0xd8),puVar25,uVar11,piVar18,param_4);
              }
            }
            uVar28 = uVar28 - 1;
            uVar5 = puVar22[-4];
            puVar22 = puVar22 + -2;
          }
          puVar22 = puVar32 + -2;
          uVar5 = puVar32[-2];
          while (uVar31 == uVar5) {
            uVar29 = (ushort)uVar28;
            uVar5 = puVar22[1];
            if (uVar5 <= uVar11) break;
            uVar28 = uVar28 - 1;
            *(undefined4 *)puVar32 = *(undefined4 *)puVar22;
            puVar32 = puVar32 + -2;
            *(ushort *)((uint)uVar5 * 0x10 + iVar10 + 8) = uVar29;
            puVar22 = puVar22 + -2;
            uVar29 = (ushort)uVar28;
            uVar5 = *puVar22;
          }
          uVar14 = (ushort)uVar11;
          puVar32[1] = uVar14;
          *puVar32 = uVar31;
          puVar25[4] = uVar29;
          uVar28 = (uint)puVar25[5];
          puVar22 = (ushort *)(uVar28 * 4 + *(int *)(param_1 + 0xac));
          uVar5 = puVar22[2];
          puVar32 = puVar22;
          while (uVar5 < uVar30) {
            uVar28 = uVar28 + 1;
            *(undefined4 *)puVar22 = *(undefined4 *)(puVar32 + 2);
            puVar22 = puVar22 + 2;
            piVar18 = (int *)((uint)puVar32[3] * 0x10 + iVar10);
            if ((uVar5 & 1) == 0) {
              iVar15 = *(int *)(puVar25 + 2);
              iVar12 = *(int *)puVar25;
              *(short *)(piVar18 + 2) = *(short *)(piVar18 + 2) + -1;
              if (((piVar18[1] - iVar12 | iVar15 - *piVar18) & 0x80008000U) == 0) {
                fn_8308B6C0(*(undefined4 *)(param_1 + 0xd8),puVar25,uVar11,piVar18,param_4);
              }
            }
            else {
              *(short *)((int)piVar18 + 10) = *(short *)((int)piVar18 + 10) + -1;
            }
            uVar5 = puVar32[4];
            puVar32 = puVar32 + 2;
          }
          puVar32 = puVar22 + 2;
          uVar5 = puVar22[2];
          while (uVar30 == uVar5) {
            uVar5 = puVar32[1];
            if ((uVar11 <= uVar5) || (uVar5 == 0)) break;
            uVar28 = uVar28 + 1;
            iVar15 = (uint)uVar5 * 0x10 + iVar10;
            *(undefined4 *)puVar22 = *(undefined4 *)puVar32;
            puVar22 = puVar22 + 2;
            *(short *)(iVar15 + 10) = *(short *)(iVar15 + 10) + -1;
            puVar32 = puVar32 + 2;
            uVar5 = *puVar32;
          }
          uVar5 = puVar22[-2];
          if (uVar30 < uVar5) {
            puVar32 = puVar22 + 1;
            do {
              uVar29 = puVar32[-2];
              uVar28 = uVar28 - 1;
              *(undefined4 *)puVar22 = *(undefined4 *)(puVar32 + -3);
              piVar18 = (int *)((uint)uVar29 * 0x10 + iVar10);
              puVar22 = puVar22 + -2;
              if ((uVar5 & 1) == 0) {
                iVar15 = *(int *)puVar25;
                iVar12 = *(int *)(puVar25 + 2);
                *(short *)(piVar18 + 2) = *(short *)(piVar18 + 2) + 1;
                if (((piVar18[1] - iVar15 | iVar12 - *piVar18) & 0x80008000U) == 0) {
                  fn_8308B7A0(*(undefined4 *)(param_1 + 0xd8),puVar25,uVar11,piVar18,
                                    &stack_pair_d8.first);
                }
              }
              else {
                *(short *)((int)piVar18 + 10) = *(short *)((int)piVar18 + 10) + 1;
              }
              uVar5 = puVar32[-5];
              puVar32 = puVar32 + -2;
            } while (uVar30 < uVar5);
          }
          uVar29 = (ushort)uVar28;
          puVar32 = puVar22 + -2;
          uVar5 = puVar22[-2];
          while (uVar30 == uVar5) {
            uVar29 = (ushort)uVar28;
            if (puVar32[1] <= uVar11) break;
            uVar28 = uVar28 - 1;
            uVar29 = (ushort)uVar28;
            iVar15 = (uint)puVar32[1] * 0x10 + iVar10;
            *(undefined4 *)puVar22 = *(undefined4 *)puVar32;
            puVar22 = puVar22 + -2;
            *(short *)(iVar15 + 10) = *(short *)(iVar15 + 10) + 1;
            puVar32 = puVar32 + -2;
            uVar5 = *puVar32;
          }
          puVar25[5] = uVar29;
          puVar22[1] = uVar14;
          *puVar22 = uVar30;
          uVar28 = (uint)puVar25[4];
          puVar22 = (ushort *)(uVar28 * 4 + *(int *)(param_1 + 0xac));
          uVar5 = puVar22[2];
          puVar32 = puVar22;
          while (uVar5 < uVar31) {
            uVar28 = uVar28 + 1;
            piVar18 = (int *)((uint)puVar32[3] * 0x10 + iVar10);
            *(undefined4 *)puVar22 = *(undefined4 *)(puVar32 + 2);
            puVar22 = puVar22 + 2;
            if ((uVar5 & 1) == 0) {
              *(short *)(piVar18 + 2) = *(short *)(piVar18 + 2) + -1;
            }
            else {
              iVar15 = *(int *)(puVar25 + 2);
              iVar12 = *(int *)puVar25;
              *(short *)((int)piVar18 + 10) = *(short *)((int)piVar18 + 10) + -1;
              if (((piVar18[1] - iVar12 | iVar15 - *piVar18) & 0x80008000U) == 0) {
                fn_8308B7A0(*(undefined4 *)(param_1 + 0xd8),puVar25,uVar11,piVar18,&stack_pair_d8.first)
                ;
              }
            }
            uVar5 = puVar32[4];
            puVar32 = puVar32 + 2;
          }
          uVar30 = (ushort)uVar28;
          puVar32 = puVar22 + 2;
          uVar5 = puVar22[2];
          while (uVar31 == uVar5) {
            uVar30 = (ushort)uVar28;
            if (uVar11 <= puVar32[1]) break;
            uVar28 = uVar28 + 1;
            uVar30 = (ushort)uVar28;
            iVar15 = (uint)puVar32[1] * 0x10 + iVar10;
            *(undefined4 *)puVar22 = *(undefined4 *)puVar32;
            puVar22 = puVar22 + 2;
            *(short *)(iVar15 + 8) = *(short *)(iVar15 + 8) + -1;
            puVar32 = puVar32 + 2;
            uVar5 = *puVar32;
          }
          puVar25[4] = uVar30;
          *puVar22 = uVar31;
          puVar22[1] = uVar14;
          uVar28 = (uint)*puVar25;
          puVar22 = (ushort *)(uVar28 * 4 + *(int *)(param_1 + 0xb8));
          uVar5 = puVar22[-2];
          puVar32 = puVar22;
          while (uVar31 = (ushort)uVar28, uVar6 < uVar5) {
            puVar26 = (ushort *)((uint)puVar32[-1] * 0x10 + iVar10);
            *(undefined4 *)puVar22 = *(undefined4 *)(puVar32 + -2);
            puVar22 = puVar22 + -2;
            if ((uVar5 & 1) == 0) {
              *puVar26 = uVar31;
            }
            else {
              uVar5 = puVar25[1];
              uVar30 = puVar25[3];
              uVar29 = puVar25[5];
              uVar4 = puVar25[4];
              puVar26[2] = uVar31;
              if ((((longlong)(short)puVar26[3] - (longlong)(short)uVar5 |
                    (longlong)(short)uVar30 - (longlong)(short)puVar26[1] |
                    (longlong)(short)uVar29 - (longlong)(short)puVar26[4] |
                   (longlong)(short)puVar26[5] - (longlong)(short)uVar4) & 0x8000U) == 0) {
                iVar15 = fn_82CE5410();
                if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                  fn_82CE63B0(*(undefined4 *)(iVar15 + 0x10),param_4,8);
                }
                iVar15 = param_4[1];
                param_4[1] = iVar15 + 1;
                puVar23 = (undefined4 *)(iVar15 * 8 + *param_4);
                *puVar23 = *(undefined4 *)(puVar25 + 6);
                puVar23[1] = *(undefined4 *)(puVar26 + 6);
              }
            }
            uVar28 = uVar28 - 1;
            uVar5 = puVar32[-4];
            puVar32 = puVar32 + -2;
          }
          puVar32 = puVar22 + -2;
          uVar5 = puVar22[-2];
          while (uVar6 == uVar5) {
            uVar31 = (ushort)uVar28;
            uVar5 = puVar32[1];
            if (uVar5 <= uVar11) break;
            uVar28 = uVar28 - 1;
            *(undefined4 *)puVar22 = *(undefined4 *)puVar32;
            puVar22 = puVar22 + -2;
            *(ushort *)((uint)uVar5 * 0x10 + iVar10) = uVar31;
            puVar32 = puVar32 + -2;
            uVar31 = (ushort)uVar28;
            uVar5 = *puVar32;
          }
          puVar22[1] = uVar14;
          *puVar22 = uVar6;
          *puVar25 = uVar31;
          uVar28 = (uint)puVar25[2];
          puVar22 = (ushort *)(uVar28 * 4 + *(int *)(param_1 + 0xb8));
          uVar5 = puVar22[2];
          puVar32 = puVar22;
          while (uVar5 < uVar8) {
            uVar28 = uVar28 + 1;
            *(undefined4 *)puVar22 = *(undefined4 *)(puVar32 + 2);
            puVar22 = puVar22 + 2;
            psVar27 = (short *)((uint)puVar32[3] * 0x10 + iVar10);
            if ((uVar5 & 1) == 0) {
              uVar5 = puVar25[1];
              uVar31 = puVar25[3];
              uVar30 = puVar25[5];
              uVar29 = puVar25[4];
              *psVar27 = *psVar27 + -1;
              if ((((longlong)psVar27[3] - (longlong)(short)uVar5 |
                    (longlong)(short)uVar31 - (longlong)psVar27[1] |
                    (longlong)(short)uVar30 - (longlong)psVar27[4] |
                   (longlong)psVar27[5] - (longlong)(short)uVar29) & 0x8000U) == 0) {
                iVar15 = fn_82CE5410();
                if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                  fn_82CE63B0(*(undefined4 *)(iVar15 + 0x10),param_4,8);
                }
                iVar15 = param_4[1];
                param_4[1] = iVar15 + 1;
                puVar23 = (undefined4 *)(iVar15 * 8 + *param_4);
                *puVar23 = *(undefined4 *)(puVar25 + 6);
                puVar23[1] = *(undefined4 *)(psVar27 + 6);
              }
            }
            else {
              psVar27[2] = psVar27[2] + -1;
            }
            uVar5 = puVar32[4];
            puVar32 = puVar32 + 2;
          }
          puVar32 = puVar22 + 2;
          uVar5 = puVar22[2];
          while (uVar8 == uVar5) {
            uVar5 = puVar32[1];
            if ((uVar11 <= uVar5) || (uVar5 == 0)) break;
            uVar28 = uVar28 + 1;
            iVar15 = (uint)uVar5 * 0x10 + iVar10;
            *(undefined4 *)puVar22 = *(undefined4 *)puVar32;
            puVar22 = puVar22 + 2;
            *(short *)(iVar15 + 4) = *(short *)(iVar15 + 4) + -1;
            puVar32 = puVar32 + 2;
            uVar5 = *puVar32;
          }
          uVar5 = puVar22[-2];
          if (uVar8 < uVar5) {
            puVar32 = puVar22 + 1;
            do {
              uVar31 = puVar32[-2];
              uVar28 = uVar28 - 1;
              *(undefined4 *)puVar22 = *(undefined4 *)(puVar32 + -3);
              psVar27 = (short *)((uint)uVar31 * 0x10 + iVar10);
              puVar22 = puVar22 + -2;
              if ((uVar5 & 1) == 0) {
                uVar5 = puVar25[1];
                uVar31 = puVar25[3];
                uVar30 = puVar25[5];
                uVar29 = puVar25[4];
                *psVar27 = *psVar27 + 1;
                if ((((longlong)psVar27[3] - (longlong)(short)uVar5 |
                      (longlong)(short)uVar31 - (longlong)psVar27[1] |
                      (longlong)(short)uVar30 - (longlong)psVar27[4] |
                     (longlong)psVar27[5] - (longlong)(short)uVar29) & 0x8000U) == 0) {
                  iVar15 = fn_82CE5410();
                  if (stack_pair_d8.second == (uStack_d0 & 0x3fffffff)) {
                    fn_82CE63B0(*(undefined4 *)(iVar15 + 0x10),&stack_pair_d8.first,8);
                  }
                  puVar23 = (undefined4 *)(stack_pair_d8.second * 8 + stack_pair_d8.first);
                  *puVar23 = *(undefined4 *)(puVar25 + 6);
                  puVar23[1] = *(undefined4 *)(psVar27 + 6);
                  stack_pair_d8.second = stack_pair_d8.second + 1;
                }
              }
              else {
                psVar27[2] = psVar27[2] + 1;
              }
              uVar5 = puVar32[-5];
              puVar32 = puVar32 + -2;
            } while (uVar8 < uVar5);
          }
          uVar31 = (ushort)uVar28;
          puVar32 = puVar22 + -2;
          uVar5 = puVar22[-2];
          while (uVar8 == uVar5) {
            uVar31 = (ushort)uVar28;
            if (puVar32[1] <= uVar11) break;
            uVar28 = uVar28 - 1;
            uVar31 = (ushort)uVar28;
            iVar15 = (uint)puVar32[1] * 0x10 + iVar10;
            *(undefined4 *)puVar22 = *(undefined4 *)puVar32;
            puVar22 = puVar22 + -2;
            *(short *)(iVar15 + 4) = *(short *)(iVar15 + 4) + 1;
            puVar32 = puVar32 + -2;
            uVar5 = *puVar32;
          }
          puVar25[2] = uVar31;
          *puVar22 = uVar8;
          puVar22[1] = uVar14;
          uVar28 = (uint)*puVar25;
          puVar22 = (ushort *)(uVar28 * 4 + *(int *)(param_1 + 0xb8));
          uVar5 = puVar22[2];
          puVar32 = puVar22;
          while (uVar5 < uVar6) {
            uVar28 = uVar28 + 1;
            psVar27 = (short *)((uint)puVar32[3] * 0x10 + iVar10);
            *(undefined4 *)puVar22 = *(undefined4 *)(puVar32 + 2);
            puVar22 = puVar22 + 2;
            if ((uVar5 & 1) == 0) {
              *psVar27 = *psVar27 + -1;
            }
            else {
              uVar5 = puVar25[1];
              uVar31 = puVar25[3];
              uVar30 = puVar25[5];
              uVar8 = puVar25[4];
              psVar27[2] = psVar27[2] + -1;
              if ((((longlong)psVar27[3] - (longlong)(short)uVar5 |
                    (longlong)(short)uVar31 - (longlong)psVar27[1] |
                    (longlong)(short)uVar30 - (longlong)psVar27[4] |
                   (longlong)psVar27[5] - (longlong)(short)uVar8) & 0x8000U) == 0) {
                iVar15 = fn_82CE5410();
                if (stack_pair_d8.second == (uStack_d0 & 0x3fffffff)) {
                  fn_82CE63B0(*(undefined4 *)(iVar15 + 0x10),&stack_pair_d8.first,8);
                }
                puVar23 = (undefined4 *)(stack_pair_d8.second * 8 + stack_pair_d8.first);
                *puVar23 = *(undefined4 *)(puVar25 + 6);
                puVar23[1] = *(undefined4 *)(psVar27 + 6);
                stack_pair_d8.second = stack_pair_d8.second + 1;
              }
            }
            uVar5 = puVar32[4];
            puVar32 = puVar32 + 2;
          }
          uVar31 = (ushort)uVar28;
          puVar32 = puVar22 + 2;
          uVar5 = puVar22[2];
          while (uVar6 == uVar5) {
            uVar31 = (ushort)uVar28;
            if (uVar11 <= puVar32[1]) break;
            iVar15 = (uint)puVar32[1] * 0x10;
            uVar28 = uVar28 + 1;
            uVar31 = (ushort)uVar28;
            *(undefined4 *)puVar22 = *(undefined4 *)puVar32;
            puVar22 = puVar22 + 2;
            *(short *)(iVar15 + iVar10) = *(short *)(iVar15 + iVar10) + -1;
            puVar32 = puVar32 + 2;
            uVar5 = *puVar32;
          }
          *puVar25 = uVar31;
          puVar22[1] = uVar14;
          *puVar22 = uVar6;
          uVar28 = (uint)puVar25[1];
          puVar22 = (ushort *)(uVar28 * 4 + *(int *)(param_1 + 0xc4));
          uVar5 = puVar22[-2];
          puVar32 = puVar22;
          while (uVar31 = (ushort)uVar28, uVar7 < uVar5) {
            psVar27 = (short *)((uint)puVar32[-1] * 0x10 + iVar10);
            *(undefined4 *)puVar22 = *(undefined4 *)(puVar32 + -2);
            puVar22 = puVar22 + -2;
            if ((uVar5 & 1) == 0) {
              psVar27[1] = uVar31;
            }
            else {
              uVar5 = puVar25[5];
              uVar6 = *puVar25;
              uVar30 = puVar25[4];
              uVar8 = puVar25[2];
              psVar27[3] = uVar31;
              if (((uVar5 - psVar27[4] | psVar27[2] - uVar6 | psVar27[5] - uVar30 | uVar8 - *psVar27
                   ) & 0x8000) == 0) {
                iVar15 = fn_82CE5410();
                if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                  fn_82CE63B0(*(undefined4 *)(iVar15 + 0x10),param_4,8);
                }
                iVar15 = param_4[1];
                param_4[1] = iVar15 + 1;
                puVar23 = (undefined4 *)(iVar15 * 8 + *param_4);
                *puVar23 = *(undefined4 *)(puVar25 + 6);
                puVar23[1] = *(undefined4 *)(psVar27 + 6);
              }
            }
            uVar28 = uVar28 - 1;
            uVar5 = puVar32[-4];
            puVar32 = puVar32 + -2;
          }
          puVar32 = puVar22 + -2;
          uVar5 = puVar22[-2];
          while (uVar7 == uVar5) {
            uVar31 = (ushort)uVar28;
            uVar5 = puVar32[1];
            if (uVar5 <= uVar11) break;
            uVar28 = uVar28 - 1;
            *(undefined4 *)puVar22 = *(undefined4 *)puVar32;
            puVar22 = puVar22 + -2;
            *(ushort *)((uint)uVar5 * 0x10 + iVar10 + 2) = uVar31;
            puVar32 = puVar32 + -2;
            uVar31 = (ushort)uVar28;
            uVar5 = *puVar32;
          }
          puVar22[1] = uVar14;
          *puVar22 = uVar7;
          puVar25[1] = uVar31;
          uVar28 = (uint)puVar25[3];
          puVar22 = (ushort *)(uVar28 * 4 + *(int *)(param_1 + 0xc4));
          uVar5 = puVar22[2];
          puVar32 = puVar22;
          while (uVar5 < uVar9) {
            uVar28 = uVar28 + 1;
            *(undefined4 *)puVar22 = *(undefined4 *)(puVar32 + 2);
            puVar22 = puVar22 + 2;
            psVar27 = (short *)((uint)puVar32[3] * 0x10 + iVar10);
            if ((uVar5 & 1) == 0) {
              uVar5 = puVar25[5];
              uVar31 = *puVar25;
              uVar6 = puVar25[4];
              uVar30 = puVar25[2];
              psVar27[1] = psVar27[1] + -1;
              if (((uVar5 - psVar27[4] | psVar27[2] - uVar31 | psVar27[5] - uVar6 |
                   uVar30 - *psVar27) & 0x8000) == 0) {
                iVar15 = fn_82CE5410();
                if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                  fn_82CE63B0(*(undefined4 *)(iVar15 + 0x10),param_4,8);
                }
                iVar15 = param_4[1];
                param_4[1] = iVar15 + 1;
                puVar23 = (undefined4 *)(iVar15 * 8 + *param_4);
                *puVar23 = *(undefined4 *)(puVar25 + 6);
                puVar23[1] = *(undefined4 *)(psVar27 + 6);
              }
            }
            else {
              psVar27[3] = psVar27[3] + -1;
            }
            uVar5 = puVar32[4];
            puVar32 = puVar32 + 2;
          }
          uVar5 = puVar22[2];
          puVar32 = puVar22 + 2;
          while (((uVar9 == uVar5 && (uVar24 = (uint)puVar32[1], uVar24 < uVar11)) && (uVar24 != 0))
                ) {
            uVar28 = uVar28 + 1;
            iVar15 = uVar24 * 0x10 + iVar10;
            *(undefined4 *)puVar22 = *(undefined4 *)puVar32;
            puVar22 = puVar22 + 2;
            *(short *)(iVar15 + 6) = *(short *)(iVar15 + 6) + -1;
            puVar32 = puVar32 + 2;
            uVar5 = *puVar32;
          }
          uVar5 = puVar22[-2];
          if (uVar9 < uVar5) {
            puVar32 = puVar22 + 1;
            do {
              uVar31 = puVar32[-2];
              uVar28 = uVar28 - 1;
              *(undefined4 *)puVar22 = *(undefined4 *)(puVar32 + -3);
              psVar27 = (short *)((uint)uVar31 * 0x10 + iVar10);
              puVar22 = puVar22 + -2;
              if ((uVar5 & 1) == 0) {
                uVar5 = puVar25[5];
                uVar31 = *puVar25;
                uVar6 = puVar25[4];
                uVar30 = puVar25[2];
                psVar27[1] = psVar27[1] + 1;
                if (((uVar5 - psVar27[4] | psVar27[2] - uVar31 | psVar27[5] - uVar6 |
                     uVar30 - *psVar27) & 0x8000) == 0) {
                  iVar15 = fn_82CE5410();
                  if (stack_pair_d8.second == (uStack_d0 & 0x3fffffff)) {
                    fn_82CE63B0(*(undefined4 *)(iVar15 + 0x10),&stack_pair_d8.first,8);
                  }
                  puVar23 = (undefined4 *)(stack_pair_d8.second * 8 + stack_pair_d8.first);
                  *puVar23 = *(undefined4 *)(puVar25 + 6);
                  puVar23[1] = *(undefined4 *)(psVar27 + 6);
                  stack_pair_d8.second = stack_pair_d8.second + 1;
                }
              }
              else {
                psVar27[3] = psVar27[3] + 1;
              }
              uVar5 = puVar32[-5];
              puVar32 = puVar32 + -2;
            } while (uVar9 < uVar5);
          }
          uVar31 = (ushort)uVar28;
          puVar32 = puVar22 + -2;
          uVar5 = puVar22[-2];
          while (uVar9 == uVar5) {
            uVar31 = (ushort)uVar28;
            if (puVar32[1] <= uVar11) break;
            uVar28 = uVar28 - 1;
            uVar31 = (ushort)uVar28;
            iVar15 = (uint)puVar32[1] * 0x10 + iVar10;
            *(undefined4 *)puVar22 = *(undefined4 *)puVar32;
            puVar22 = puVar22 + -2;
            *(short *)(iVar15 + 6) = *(short *)(iVar15 + 6) + 1;
            puVar32 = puVar32 + -2;
            uVar5 = *puVar32;
          }
          puVar25[3] = uVar31;
          *puVar22 = uVar9;
          puVar22[1] = uVar14;
          uVar28 = (uint)puVar25[1];
          puVar22 = (ushort *)(uVar28 * 4 + *(int *)(param_1 + 0xc4));
          uVar5 = puVar22[2];
          puVar32 = puVar22;
          while (uVar5 < uVar7) {
            uVar28 = uVar28 + 1;
            psVar27 = (short *)((uint)puVar32[3] * 0x10 + iVar10);
            *(undefined4 *)puVar22 = *(undefined4 *)(puVar32 + 2);
            puVar22 = puVar22 + 2;
            if ((uVar5 & 1) == 0) {
              psVar27[1] = psVar27[1] + -1;
            }
            else {
              uVar5 = puVar25[5];
              uVar31 = *puVar25;
              uVar6 = puVar25[4];
              uVar30 = puVar25[2];
              psVar27[3] = psVar27[3] + -1;
              if (((uVar5 - psVar27[4] | psVar27[2] - uVar31 | psVar27[5] - uVar6 |
                   uVar30 - *psVar27) & 0x8000) == 0) {
                iVar15 = fn_82CE5410();
                if (stack_pair_d8.second == (uStack_d0 & 0x3fffffff)) {
                  fn_82CE63B0(*(undefined4 *)(iVar15 + 0x10),&stack_pair_d8.first,8);
                }
                puVar23 = (undefined4 *)(stack_pair_d8.second * 8 + stack_pair_d8.first);
                *puVar23 = *(undefined4 *)(puVar25 + 6);
                puVar23[1] = *(undefined4 *)(psVar27 + 6);
                stack_pair_d8.second = stack_pair_d8.second + 1;
              }
            }
            uVar5 = puVar32[4];
            puVar32 = puVar32 + 2;
          }
          uVar31 = (ushort)uVar28;
          puVar32 = puVar22 + 2;
          uVar5 = puVar22[2];
          while (uVar7 == uVar5) {
            uVar31 = (ushort)uVar28;
            if (uVar11 <= puVar32[1]) break;
            uVar28 = uVar28 + 1;
            uVar31 = (ushort)uVar28;
            iVar15 = (uint)puVar32[1] * 0x10 + iVar10;
            *(undefined4 *)puVar22 = *(undefined4 *)puVar32;
            puVar22 = puVar22 + 2;
            *(short *)(iVar15 + 2) = *(short *)(iVar15 + 2) + -1;
            puVar32 = puVar32 + 2;
            uVar5 = *puVar32;
          }
          puVar25[1] = uVar31;
          puVar22[1] = uVar14;
          *puVar22 = uVar7;
        }
      }
    }
    iStack_e8 = iStack_e8 + 1;
    if (2 < iStack_e8) {
      iVar16 = fn_82CE5410();
      stack_pair_d8.second = 0;
      if ((uStack_d0 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar16 + 0x10) + 0x10))
                  (*(int **)(iVar16 + 0x10),stack_pair_d8.first,uStack_d0 & 0x3fffffff,8);
      }
      stack_pair_d8.first = 0;
      uStack_d0 = 0x80000000;
      fn_82CE5410();
      return;
    }
  } while( true );
}

