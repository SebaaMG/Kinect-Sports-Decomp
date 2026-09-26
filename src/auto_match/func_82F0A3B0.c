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


void fn_82F0A3B0(short *param_1,ulonglong param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ulonglong uVar9;
  short *psVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  short sVar14;
  ulonglong uVar13;
  short sVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  short sVar25;
  longlong lVar26;
  int aiStack_150 [12];
  short asStack_120 [15];
  short sStack_102;
  short asStack_100 [8];
  short asStack_f0 [8];
  short asStack_e0 [112];
  
  aiStack_150[9] = 0;
  aiStack_150[0] = 0;
  aiStack_150[1] = 1;
  aiStack_150[3] = 1;
  aiStack_150[5] = 0xc99;
  lVar26 = 8;
  aiStack_150[4] = 0xca4;
  aiStack_150[6] = 0xc8e;
  aiStack_150[8] = 0xc6d;
  aiStack_150[10] = 0xc4c;
  aiStack_150[7] = 0xc78;
  aiStack_150[2] = 3;
  psVar10 = asStack_120;
  uVar9 = param_2 * 0xe;
  while( true ) {
    sVar15 = *(short *)((int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0x3fffffff) << 2) +
                       (int)param_1);
    sVar7 = *(short *)((int)uVar9 + (int)param_1);
    sVar25 = *(short *)((int)((param_2 & 0xffffffff) << 1) + (int)param_1);
    sVar14 = *(short *)((int)((param_2 & 0xffffffff) << 2) + (int)param_1);
    sVar1 = *(short *)((int)((param_2 & 0xffffffff) << 3) + (int)param_1);
    sVar2 = *(short *)((int)((param_2 + (param_2 & 0x3fffffff) * 4 & 0xffffffff) << 1) +
                      (int)param_1);
    sVar6 = *(short *)((int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0xffffffff) << 1) +
                      (int)param_1);
    sVar8 = *param_1;
    uVar24 = (ulonglong)(short)(sVar25 - sVar14);
    uVar19 = (longlong)(short)(sVar1 + sVar7) + (longlong)(short)(sVar2 + sVar15);
    uVar17 = (longlong)(short)(sVar1 + sVar7) - (longlong)(short)(sVar2 + sVar15);
    uVar20 = (longlong)(short)(sVar8 + sVar6) + (longlong)(short)(sVar25 + sVar14);
    uVar18 = (longlong)(short)(sVar8 + sVar6) - (longlong)(short)(sVar25 + sVar14);
    uVar21 = (ulonglong)(short)(sVar8 - sVar6);
    uVar22 = (ulonglong)(short)(sVar1 - sVar7);
    sVar8 = sVar8 - sVar7;
    sVar6 = sVar6 - sVar1;
    uVar11 = (ulonglong)sVar8;
    sVar14 = sVar14 - sVar2;
    sVar25 = sVar25 - sVar15;
    uVar9 = (ulonglong)sVar6;
    uVar12 = (ulonglong)sVar14;
    uVar13 = (ulonglong)sVar25;
    *psVar10 = (short)((short)((short)((uVar19 + (uVar19 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
                              (short)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0xffffffff) << 2)) + 4
                      >> 5);
    psVar10[1] = (short)((short)((short)(((uVar11 & 0x3fffffff) * 4 + uVar9 & 0xffffffff) << 2) +
                                 sVar14 + (short)((uVar12 & 0xffffffff) << 3) +
                                ((short)((uVar13 & 0xffffffff) << 4) - sVar25)) + 4 >> 5);
    psVar10[2] = (short)((short)(((sVar2 - sVar15) * -6 - (short)((uVar22 & 0xffffffff) << 4)) +
                                (short)((uVar21 & 0xffffffff) << 4) +
                                (short)((uVar24 + (uVar24 & 0x7fffffff) * 2 & 0xffffffff) << 1)) + 4
                        >> 5);
    psVar10[3] = (short)((short)((sVar6 * -9 -
                                 (short)(((uVar12 & 0x3fffffff) * 4 + uVar13 & 0xffffffff) << 2)) +
                                ((short)((uVar11 & 0xffffffff) << 4) - sVar8)) + 4 >> 5);
    psVar10[4] = (short)((short)((short)((uVar17 + (uVar17 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
                                (short)((uVar18 + (uVar18 & 0x7fffffff) * 2 & 0xffffffff) << 2)) + 4
                        >> 5);
    psVar10[5] = (short)((short)((short)((uVar12 + (uVar13 & 0x3fffffff) * -4 & 0xffffffff) << 2) +
                                 ((short)((uVar9 & 0xffffffff) << 4) - sVar6) +
                                sVar8 + (short)((uVar11 & 0xffffffff) << 3)) + 4 >> 5);
    psVar10[6] = (short)((short)(((sVar2 - sVar15) * 0x10 -
                                 (short)((uVar22 + (uVar22 & 0x7fffffff) * 2 & 0xffffffff) << 1)) +
                                ((short)((uVar21 + (uVar21 & 0x7fffffff) * 2 & 0xffffffff) << 1) -
                                (short)((uVar24 & 0xffffffff) << 4))) + 4 >> 5);
    param_1 = param_1 + 1;
    psVar10[7] = (short)((short)(((short)((uVar11 + (uVar9 & 0x3fffffff) * -4 & 0xffffffff) << 2) +
                                 ((short)((uVar12 & 0xffffffff) << 4) - sVar14)) -
                                (sVar25 + (short)((uVar13 & 0xffffffff) << 3))) + 4 >> 5);
    psVar10 = psVar10 + 8;
    lVar26 = lVar26 + -1;
    if (lVar26 == 0) break;
    uVar9 = param_2 * 0xe & 0xffffffff;
  }
  lVar26 = 8;
  uVar23 = 0;
  psVar10 = &sStack_102;
  puVar16 = (undefined2 *)(param_3 + 0x30);
  do {
    sVar25 = *(short *)(((int)asStack_f0 - param_3) + (int)puVar16);
    sVar8 = psVar10[-0xf];
    sVar15 = psVar10[-7];
    sVar14 = *(short *)(((int)asStack_100 - param_3) + (int)puVar16);
    psVar10 = psVar10 + 1;
    sVar7 = *psVar10;
    sVar1 = *(short *)((int)asStack_120 + (0x10 - param_3) + (int)puVar16);
    sVar2 = *(short *)(((int)asStack_e0 - param_3) + (int)puVar16);
    sVar6 = *(short *)(((int)asStack_120 - param_3) + (int)puVar16);
    uVar24 = (ulonglong)(short)(sVar15 - sVar7);
    uVar19 = (longlong)(short)(sVar1 + sVar2) + (longlong)(short)(sVar14 + sVar25);
    uVar17 = (longlong)(short)(sVar1 + sVar2) - (longlong)(short)(sVar14 + sVar25);
    uVar20 = (longlong)(short)(sVar8 + sVar6) + (longlong)(short)(sVar15 + sVar7);
    uVar18 = (longlong)(short)(sVar8 + sVar6) - (longlong)(short)(sVar15 + sVar7);
    uVar21 = (ulonglong)(short)(sVar8 - sVar6);
    uVar22 = (ulonglong)(short)(sVar1 - sVar2);
    sVar7 = sVar7 - sVar14;
    sVar15 = sVar15 - sVar25;
    sVar8 = sVar8 - sVar2;
    sVar6 = sVar6 - sVar1;
    uVar11 = (ulonglong)sVar7;
    uVar12 = (ulonglong)sVar15;
    uVar13 = (ulonglong)sVar8;
    uVar9 = (ulonglong)sVar6;
    iVar5 = aiStack_150[uVar23 & 3];
    iVar3 = aiStack_150[iVar5 + 4];
    iVar4 = aiStack_150[iVar5 + 5];
    iVar5 = aiStack_150[iVar5 + 7];
    puVar16[-0x18] =
         (short)((short)((short)((uVar19 + (uVar19 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
                        (short)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0xffffffff) << 2)) * iVar3 +
                 0x1000 >> 0xd);
    puVar16[-0x10] =
         (short)((short)((short)(((uVar13 & 0x3fffffff) * 4 + uVar9 & 0xffffffff) << 2) +
                         sVar7 + (short)((uVar11 & 0xffffffff) << 3) +
                        ((short)((uVar12 & 0xffffffff) << 4) - sVar15)) * iVar4 + 0x1000 >> 0xd);
    *puVar16 = (short)((short)((sVar6 * -9 -
                               (short)(((uVar11 & 0x3fffffff) * 4 + uVar12 & 0xffffffff) << 2)) +
                              ((short)((uVar13 & 0xffffffff) << 4) - sVar8)) * iVar4 + 0x1000 >> 0xd
                      );
    puVar16[8] = (short)((short)((short)((uVar17 + (uVar17 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
                                (short)((uVar18 + (uVar18 & 0x7fffffff) * 2 & 0xffffffff) << 2)) *
                         iVar3 + 0x1000 >> 0xd);
    puVar16[0x10] =
         (short)((short)((short)((uVar11 + (uVar12 & 0x3fffffff) * -4 & 0xffffffff) << 2) +
                         ((short)((uVar9 & 0xffffffff) << 4) - sVar6) +
                        sVar8 + (short)((uVar13 & 0xffffffff) << 3)) * iVar4 + 0x1000 >> 0xd);
    puVar16[0x20] =
         (short)((short)(((short)((uVar13 + (uVar9 & 0x3fffffff) * -4 & 0xffffffff) << 2) +
                         ((short)((uVar11 & 0xffffffff) << 4) - sVar7)) -
                        (sVar15 + (short)((uVar12 & 0xffffffff) << 3))) * iVar4 + 0x1000 >> 0xd);
    puVar16[-8] = (short)((short)(((sVar14 - sVar25) * -6 - (short)((uVar22 & 0xffffffff) << 4)) +
                                 (short)((uVar21 & 0xffffffff) << 4) +
                                 (short)((uVar24 + (uVar24 & 0x7fffffff) * 2 & 0xffffffff) << 1)) *
                          iVar5 + 0x1000 >> 0xd);
    uVar23 = uVar23 + 1;
    puVar16[0x18] =
         (short)((short)(((sVar14 - sVar25) * 0x10 -
                         (short)((uVar22 + (uVar22 & 0x7fffffff) * 2 & 0xffffffff) << 1)) +
                        ((short)((uVar21 + (uVar21 & 0x7fffffff) * 2 & 0xffffffff) << 1) -
                        (short)((uVar24 & 0xffffffff) << 4))) * iVar5 + 0x1000 >> 0xd);
    puVar16 = puVar16 + 1;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  return;
}

