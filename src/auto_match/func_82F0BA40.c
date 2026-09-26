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
extern unsigned int iStack_1c4;
extern unsigned int iStack_2a4;
extern unsigned int lbl_82161550;
extern unsigned int lbl_82161554;
extern unsigned int lbl_82161558;
extern unsigned int lbl_8216155C;
extern unsigned int lbl_82161560;
extern unsigned int lbl_82161564;
extern unsigned int lbl_82161568;
extern unsigned int lbl_8216156C;
extern unsigned int lbl_82161570;
extern unsigned int lbl_82161574;
extern unsigned int lbl_82161578;
extern unsigned int lbl_8216157C;
extern unsigned int lbl_82161580;
extern unsigned int lbl_82161584;
extern unsigned int lbl_82161588;
extern unsigned int lbl_8216158C;


void fn_82F0BA40(short *param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  short *psVar29;
  int *piVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  int iVar34;
  longlong lVar35;
  longlong lVar36;
  int iVar37;
  longlong lVar38;
  longlong lVar39;
  int iVar40;
  int iVar41;
  ulonglong uVar42;
  uint uVar43;
  longlong lVar44;
  int iStack_2a4;
  int aiStack_2a0 [16];
  int aiStack_260 [8];
  int aiStack_240 [8];
  int aiStack_220 [8];
  int aiStack_200 [8];
  int aiStack_1e0 [7];
  int iStack_1c4;
  int aiStack_1c0 [112];
  
  lVar44 = 8;
  piVar30 = &iStack_2a4;
  do {
    lVar33 = (longlong)*(short *)((int)((param_2 & 0xffffffff) << 1) + (int)param_1);
    lVar39 = (longlong)*(short *)((int)((param_2 & 0xffffffff) << 2) + (int)param_1);
    lVar38 = (longlong)
             *(short *)((int)((param_2 + (param_2 & 0x3fffffff) * 4 & 0xffffffff) << 1) +
                       (int)param_1);
    lVar32 = (longlong)
             *(short *)((int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
                       (int)param_1);
    lVar19 = lVar39 - lVar38;
    lVar11 = lVar32 - lVar33;
    lVar36 = (longlong)
             *(short *)((int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0xffffffff) << 1) +
                       (int)param_1);
    lVar35 = (longlong)*(short *)((int)((param_2 & 0xffffffff) << 3) + (int)param_1);
    uVar23 = lVar19 - lVar11;
    uVar28 = (longlong)*param_1 - (longlong)param_1[(int)param_2 * 7];
    uVar16 = lVar35 - lVar36;
    uVar20 = lVar11 + lVar19;
    lVar11 = (longlong)param_1[(int)param_2 * 7] + (longlong)*param_1;
    lVar38 = lVar38 + lVar39;
    lVar32 = lVar32 + lVar33;
    lVar35 = lVar35 + lVar36;
    lVar33 = lVar35 + lVar11;
    lVar19 = lVar32 + lVar38;
    uVar9 = lVar35 - lVar11;
    uVar42 = lVar19 + lVar33;
    uVar12 = lVar38 - lVar32;
    lVar38 = uVar23 + (uVar23 & 0x7fffffff) * 2 + (uVar28 & 0x3fffffff) * 4;
    uVar24 = (uVar20 & 0x7fffffff) * 2 - (uVar16 + (uVar16 & 0x7fffffff) * 2);
    uVar23 = uVar28 + (uVar28 & 0x7fffffff) * 2 + (uVar23 & 0x7fffffff) * -2;
    lVar11 = uVar20 + (uVar20 & 0x7fffffff) * 2 + (uVar16 & 0x3fffffff) * 4;
    piVar30[1] = (int)uVar42 + (int)((uVar42 & 0xffffffff) << 1) + 1 >> 1;
    piVar30[2] = (int)((lVar38 + 1U & 0xffffffff) << 2) - (int)lVar11 >> 3;
    uVar16 = lVar33 - lVar19;
    piVar30[3] = ((int)((-uVar9 & 0xffffffff) << 3) -
                 ((int)uVar12 + (int)((uVar12 & 0xffffffff) << 1))) + 2 >> 2;
    piVar30[4] = (((int)uVar23 + (int)((uVar23 & 0xffffffff) << 2)) -
                 ((int)uVar24 + (int)((uVar24 & 0xffffffff) << 1))) + 4 >> 3;
    piVar30[5] = (int)uVar16 + (int)((uVar16 & 0xffffffff) << 1) + 1 >> 1;
    piVar30[6] = (int)uVar23 + (int)((uVar23 & 0xffffffff) << 1) +
                 (int)uVar24 + (int)((uVar24 & 0xffffffff) << 2) + 4 >> 3;
    piVar30[7] = ((int)((uVar12 & 0xffffffff) << 3) -
                 ((int)uVar9 + (int)((uVar9 & 0xffffffff) << 1))) + 2 >> 2;
    param_1 = param_1 + 1;
    piVar30 = piVar30 + 8;
    *piVar30 = (int)((lVar11 + 1U & 0xffffffff) << 2) + (int)lVar38 >> 3;
    lVar44 = lVar44 + -1;
  } while (lVar44 != 0);
  uVar43 = 0;
  psVar29 = (short *)(param_3 + 0x6e);
  piVar30 = &iStack_1c4;
  lVar44 = 8;
  do {
    iVar31 = (uVar43 & 3) * 0x40;
    piVar2 = piVar30 + -0x2f;
    piVar3 = piVar30 + -0x27;
    piVar4 = piVar30 + -0x1f;
    piVar5 = piVar30 + -0x17;
    piVar6 = piVar30 + -0xf;
    piVar7 = piVar30 + -7;
    iVar40 = *piVar5 + *piVar4;
    piVar8 = piVar30 + -0x37;
    iVar18 = *piVar6 + *piVar3;
    piVar30 = piVar30 + 1;
    iVar37 = *piVar7 + *piVar2;
    iVar21 = *piVar3 - *piVar6;
    iVar14 = *piVar30 + *piVar8;
    iVar17 = *piVar8 - *piVar30;
    iVar1 = *(int *)(&lbl_82161554 + iVar31);
    iVar34 = *piVar7 - *piVar2;
    iVar10 = iVar18 - iVar37;
    uVar13 = iVar40 - iVar14;
    iVar15 = *piVar5 - *piVar4;
    iVar25 = iVar34 + iVar21;
    iVar21 = iVar21 - iVar34;
    iVar22 = (iVar25 - (*(int *)(&lbl_82161570 + iVar31) + iVar15 >> 1)) - iVar15;
    iVar26 = ((*(int *)(&lbl_82161578 + iVar31) + iVar17 >> 1) - iVar21) + iVar17;
    iVar15 = (iVar25 - (*(int *)(&lbl_82161574 + iVar31) + iVar25 >> 2)) + iVar15;
    iVar17 = (iVar21 - (*(int *)(&lbl_8216157C + iVar31) + iVar21 >> 2)) + iVar17;
    iVar40 = iVar40 + iVar14;
    iVar37 = iVar37 + iVar18;
    iVar18 = iVar37 + iVar40;
    iVar40 = iVar40 - iVar37;
    iVar34 = ((*(int *)(&lbl_82161568 + iVar31) + iVar10 >> 2) + (uVar13 & 0x7fffffff) * -2) -
             iVar10;
    iVar14 = (((int)(*(int *)(&lbl_8216156C + iVar31) + uVar13) >> 2) + iVar10 * 2) - uVar13;
    iVar41 = iVar17 * 2 - (*(int *)(&lbl_82161580 + iVar31) + iVar15 >> 1);
    iVar37 = (*(int *)(&lbl_82161584 + iVar31) + iVar17 >> 1) + iVar15 * 2;
    iVar27 = ((*(int *)(&lbl_82161588 + iVar31) + iVar26 + iVar22 >> 2) - iVar22) + iVar26;
    iVar10 = *(int *)(&lbl_82161564 + iVar31);
    iVar22 = (iVar26 - ((*(int *)(&lbl_8216158C + iVar31) - iVar22) + iVar26 >> 2)) + iVar22;
    uVar43 = uVar43 + 1;
    iVar15 = *(int *)(&lbl_82161558 + iVar31);
    iVar17 = *(int *)(&lbl_8216155C + iVar31);
    iVar21 = *(int *)(&lbl_82161550 + iVar31);
    iVar25 = *(int *)(&lbl_82161560 + iVar31);
    psVar29[-0x2f] = (short)((uint)(iVar1 * iVar41) >> 0x10) + (short)iVar41;
    psVar29[-0x37] = (short)((uint)((iVar25 + iVar18) * iVar21) >> 0x10) + (short)iVar18;
    psVar29[-0x27] = (short)((uint)(iVar15 * iVar34) >> 0x10) + (short)iVar34;
    psVar29[-0x1f] = (short)((uint)(iVar17 * iVar27) >> 0x10) + (short)iVar27;
    psVar29[-0x17] = (short)((uint)((iVar10 + iVar40) * iVar21) >> 0x10) + (short)iVar40;
    psVar29[-0xf] = (short)((uint)(iVar1 * iVar22) >> 0x10) + (short)iVar22;
    psVar29[-7] = (short)((uint)(iVar15 * iVar14) >> 0x10) + (short)iVar14;
    psVar29 = psVar29 + 1;
    *psVar29 = (short)((uint)(iVar17 * iVar37) >> 0x10) + (short)iVar37;
    lVar44 = lVar44 + -1;
  } while (lVar44 != 0);
  return;
}

