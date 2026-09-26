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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_160;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern unsigned int uStack_c4;


void fn_82F09EE0(short *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  int aiStack_1d0 [12];
  uint auStack_1a0 [16];
  uint auStack_160 [8];
  uint auStack_140 [8];
  uint auStack_120 [8];
  uint auStack_100 [8];
  uint auStack_e0 [7];
  uint uStack_c4;
  uint auStack_c0 [48];
  
  aiStack_1d0[4] = 0xca4;
  aiStack_1d0[5] = 0xc99;
  uVar21 = 0;
  lVar31 = 8;
  aiStack_1d0[9] = 0;
  aiStack_1d0[8] = 0xc6d;
  aiStack_1d0[0] = 0;
  aiStack_1d0[6] = 0xc8e;
  aiStack_1d0[7] = 0xc78;
  aiStack_1d0[10] = 0xc4c;
  puVar15 = auStack_1a0;
  aiStack_1d0[1] = 1;
  aiStack_1d0[2] = 3;
  aiStack_1d0[3] = 1;
  do {
    lVar6 = (longlong)param_1[1];
    lVar10 = (longlong)param_1[2];
    lVar12 = (longlong)*param_1;
    lVar29 = (longlong)param_1[5];
    lVar5 = (longlong)param_1[3];
    lVar8 = (longlong)param_1[7];
    lVar4 = (longlong)param_1[4];
    lVar27 = (longlong)param_1[6];
    uVar19 = lVar10 + lVar6 + lVar5 + lVar12;
    uVar17 = lVar27 + lVar29 + lVar8 + lVar4;
    uVar16 = (lVar5 + lVar12) - (lVar10 + lVar6);
    uVar26 = lVar6 - lVar10;
    uVar22 = lVar4 - lVar8;
    uVar23 = lVar29 - lVar27;
    uVar20 = (lVar8 + lVar4) - (lVar27 + lVar29);
    uVar9 = lVar12 - lVar8;
    uVar24 = lVar12 - lVar5;
    uVar13 = lVar5 - lVar4;
    uVar11 = lVar10 - lVar29;
    uVar7 = lVar6 - lVar27;
    *puVar15 = (int)((uVar17 + (uVar17 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
               (int)((uVar19 + (uVar19 & 0x7fffffff) * 2 & 0xffffffff) << 2) + 4 >> 3;
    puVar15[1] = (int)(((uVar9 & 0x3fffffff) * 4 + uVar13 + 1 & 0xffffffff) << 2) +
                 (int)uVar11 + (int)((uVar11 & 0xffffffff) << 3) +
                 ((int)((uVar7 & 0xffffffff) << 4) - (int)uVar7) >> 3;
    puVar15[2] = ((int)((-uVar22 & 0xffffffff) << 4) -
                 (int)((uVar23 + (uVar23 & 0x7fffffff) * 2 & 0xffffffff) << 1)) +
                 (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 1) +
                 (int)((uVar24 & 0xffffffff) << 4) + 4 >> 3;
    puVar15[3] = ((int)((((uVar11 & 0x3fffffff) * -4 + 1) - uVar7 & 0xffffffff) << 2) -
                 ((int)uVar13 + (int)((uVar13 & 0xffffffff) << 3))) +
                 ((int)((uVar9 & 0xffffffff) << 4) - (int)uVar9) >> 3;
    puVar15[4] = (int)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
                 (int)((uVar16 + (uVar16 & 0x7fffffff) * 2 & 0xffffffff) << 2) + 4 >> 3;
    param_1 = param_1 + param_2;
    puVar15[5] = (int)((uVar11 + (uVar7 & 0x3fffffff) * -4 + 1 & 0xffffffff) << 2) +
                 ((int)((uVar13 & 0xffffffff) << 4) - (int)uVar13) +
                 (int)uVar9 + (int)((uVar9 & 0xffffffff) << 3) >> 3;
    puVar15[6] = ((int)((uVar23 & 0xffffffff) << 4) -
                 (int)((uVar22 + (uVar22 & 0x7fffffff) * 2 & 0xffffffff) << 1)) +
                 ((int)((uVar24 + (uVar24 & 0x7fffffff) * 2 & 0xffffffff) << 1) -
                 (int)((uVar26 & 0xffffffff) << 4)) + 4 >> 3;
    puVar15[7] = ((int)((uVar9 + (uVar13 & 0x3fffffff) * -4 + 1 & 0xffffffff) << 2) +
                 ((int)((uVar11 & 0xffffffff) << 4) - (int)uVar11)) -
                 ((int)uVar7 + (int)((uVar7 & 0xffffffff) << 3)) >> 3;
    puVar15 = puVar15 + 8;
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  puVar14 = (undefined2 *)(param_3 + 0x5e);
  puVar15 = &uStack_c4;
  lVar31 = 8;
  do {
    uVar25 = (ulonglong)puVar15[-0x37];
    uVar17 = (ulonglong)puVar15[-0x1f];
    uVar24 = (ulonglong)puVar15[-0x27];
    uVar22 = (ulonglong)puVar15[-0x2f];
    uVar28 = (ulonglong)puVar15[-0x17];
    uVar11 = uVar25 - uVar17;
    uVar30 = (ulonglong)puVar15[-0xf];
    uVar7 = (ulonglong)puVar15[-7];
    puVar15 = puVar15 + 1;
    uVar26 = (ulonglong)*puVar15;
    uVar18 = (uVar17 + uVar25) - (uVar24 + uVar22);
    iVar3 = aiStack_1d0[uVar21 & 3];
    uVar13 = uVar24 + uVar22 + uVar17 + uVar25;
    uVar19 = uVar7 + uVar30 + uVar26 + uVar28;
    uVar20 = uVar28 - uVar26;
    iVar1 = aiStack_1d0[iVar3 + 4];
    iVar2 = aiStack_1d0[iVar3 + 5];
    iVar3 = aiStack_1d0[iVar3 + 7];
    uVar23 = (uVar26 + uVar28) - (uVar7 + uVar30);
    uVar9 = uVar22 - uVar24;
    uVar16 = uVar30 - uVar7;
    uVar17 = uVar17 - uVar28;
    uVar25 = uVar25 - uVar26;
    puVar14[-0x2f] =
         (short)(iVar1 * ((int)((uVar19 + (uVar19 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
                         (int)((uVar13 + (uVar13 & 0x7fffffff) * 2 & 0xffffffff) << 2)) + 0x4000 >>
                0xf);
    uVar24 = uVar24 - uVar30;
    uVar22 = uVar22 - uVar7;
    puVar14[-0x27] =
         (short)(((int)(((uVar25 & 0x3fffffff) * 4 + uVar17 & 0xffffffff) << 2) +
                  (int)uVar24 + (int)((uVar24 & 0xffffffff) << 3) +
                 ((int)((uVar22 & 0xffffffff) << 4) - (int)uVar22)) * iVar2 + 0x4000 >> 0xf);
    puVar14[-0x17] =
         (short)((((int)uVar17 * -9 - (int)(((uVar24 & 0x3fffffff) * 4 + uVar22 & 0xffffffff) << 2))
                 + ((int)((uVar25 & 0xffffffff) << 4) - (int)uVar25)) * iVar2 + 0x4000 >> 0xf);
    puVar14[-0xf] =
         (short)(iVar1 * ((int)((uVar23 + (uVar23 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
                         (int)((uVar18 + (uVar18 & 0x7fffffff) * 2 & 0xffffffff) << 2)) + 0x4000 >>
                0xf);
    puVar14[-7] = (short)(((int)((uVar24 + (uVar22 & 0x3fffffff) * -4 & 0xffffffff) << 2) +
                           ((int)((uVar17 & 0xffffffff) << 4) - (int)uVar17) +
                          (int)uVar25 + (int)((uVar25 & 0xffffffff) << 3)) * iVar2 + 0x4000 >> 0xf);
    puVar14[9] = (short)((((int)((uVar25 + (uVar17 & 0x3fffffff) * -4 & 0xffffffff) << 2) +
                          ((int)((uVar24 & 0xffffffff) << 4) - (int)uVar24)) -
                         ((int)uVar22 + (int)((uVar22 & 0xffffffff) << 3))) * iVar2 + 0x4000 >> 0xf)
    ;
    puVar14[-0x1f] =
         (short)(iVar3 * (((int)uVar20 * -0x10 -
                          (int)((uVar16 + (uVar16 & 0x7fffffff) * 2 & 0xffffffff) << 1)) +
                         (int)((uVar9 + (uVar9 & 0x7fffffff) * 2 & 0xffffffff) << 1) +
                         (int)((uVar11 & 0xffffffff) << 4)) + 0x4000 >> 0xf);
    uVar21 = uVar21 + 1;
    puVar14 = puVar14 + 1;
    *puVar14 = (short)(iVar3 * (((int)((uVar16 & 0xffffffff) << 4) -
                                (int)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0xffffffff) << 1)) +
                               ((int)((uVar11 + (uVar11 & 0x7fffffff) * 2 & 0xffffffff) << 1) -
                               (int)((uVar9 & 0xffffffff) << 4))) + 0x4000 >> 0xf);
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  return;
}

