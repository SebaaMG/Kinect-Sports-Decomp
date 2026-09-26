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
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_2a0;
extern unsigned int iStack_1a4;
extern unsigned int iStack_2dc;
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
extern unsigned int lbl_82161650;
extern unsigned int lbl_82161654;
extern unsigned int lbl_82161658;
extern unsigned int lbl_8216165C;
extern unsigned int lbl_82161660;
extern unsigned int lbl_82161664;
extern unsigned int lbl_82161668;
extern unsigned int lbl_8216166C;
extern unsigned int lbl_82161670;
extern unsigned int lbl_82161674;
extern unsigned int lbl_82161678;
extern unsigned int lbl_8216167C;
extern unsigned int lbl_82161680;
extern unsigned int lbl_82161684;
extern unsigned int lbl_82161688;
extern unsigned int lbl_8216168C;
extern unsigned int lbl_82161750;
extern unsigned int lbl_82161754;
extern unsigned int lbl_82161758;
extern unsigned int lbl_8216175C;
extern unsigned int lbl_82161760;
extern unsigned int lbl_82161764;
extern unsigned int lbl_82161768;
extern unsigned int lbl_8216176C;
extern unsigned int lbl_821617D0;
extern unsigned int lbl_821617D4;
extern unsigned int lbl_821617D8;
extern unsigned int lbl_821617DC;
extern unsigned int lbl_821617E0;
extern unsigned int lbl_821617E4;
extern unsigned int lbl_821617E8;
extern unsigned int lbl_821617EC;
extern unsigned int uStack_2d4;


void fn_82F0AC28(short *param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  short *psVar31;
  longlong lVar32;
  int iVar33;
  short *psVar34;
  int *piVar35;
  uint *puVar36;
  int iVar37;
  int iVar38;
  longlong lVar39;
  undefined1 *puVar40;
  longlong lVar41;
  int iVar42;
  int iVar43;
  ulonglong uVar44;
  int iVar45;
  int iVar46;
  ulonglong uVar47;
  int iVar48;
  int iVar49;
  ulonglong uVar50;
  int iVar51;
  ulonglong uVar52;
  longlong lVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  longlong lVar60;
  ulonglong uVar61;
  longlong lVar62;
  uint uVar64;
  int iVar65;
  ulonglong uVar63;
  longlong lVar66;
  int iStack_2dc;
  undefined1 *puStack_2d8;
  uint uStack_2d4;
  undefined1 auStack_2a0 [220];
  int aiStack_1c4 [8];
  int iStack_1a4;
  undefined1 auStack_1a0 [416];
  
  lVar66 = 8;
  piVar35 = &iStack_1a4;
  uVar44 = param_2 * 0xe;
  while( true ) {
    lVar28 = (longlong)*(short *)((int)((param_2 & 0x3fffffff) << 2) + (int)param_1);
    lVar26 = (longlong)
             *(short *)((int)((param_2 + (param_2 & 0x3fffffff) * 4 & 0x7fffffff) << 1) +
                       (int)param_1);
    lVar60 = (longlong)
             *(short *)((int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0x3fffffff) << 2) +
                       (int)param_1);
    lVar62 = (longlong)*(short *)((int)((param_2 & 0xffffffff) << 1) + (int)param_1);
    lVar21 = (longlong)
             *(short *)((int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0x7fffffff) << 1) +
                       (int)param_1);
    lVar29 = (longlong)*(short *)((int)uVar44 + (int)param_1);
    lVar20 = (longlong)*(short *)((int)((param_2 & 0x1fffffff) << 3) + (int)param_1);
    lVar32 = (longlong)*param_1;
    uVar58 = lVar32 - lVar29;
    uVar52 = lVar20 - lVar21;
    uVar55 = (lVar28 - lVar26) - (lVar60 - lVar62);
    uVar54 = (lVar60 - lVar62) + (lVar28 - lVar26);
    lVar39 = lVar60 + lVar62 + lVar26 + lVar28;
    uVar50 = (lVar26 + lVar28) - (lVar60 + lVar62);
    iVar24 = (int)uVar55 + (int)((uVar55 & 0xffffffff) << 1) + (int)((uVar58 & 0xffffffff) << 2);
    lVar41 = lVar20 + lVar21 + lVar29 + lVar32;
    uVar47 = (lVar20 + lVar21) - (lVar29 + lVar32);
    uVar56 = (uVar54 & 0x7fffffff) * 2 - (uVar52 + (uVar52 & 0x7fffffff) * 2);
    uVar44 = lVar39 + lVar41;
    uVar55 = uVar58 + (uVar58 & 0x7fffffff) * 2 + (uVar55 & 0x7fffffff) * -2;
    lVar53 = uVar54 + (uVar54 & 0x7fffffff) * 2 + (uVar52 & 0x3fffffff) * 4;
    piVar35[-0x3f] = (int)uVar44 + (int)((uVar44 & 0xffffffff) << 1) + 1 >> 1;
    piVar35[-0x3e] = (iVar24 + 1) * 4 - (int)lVar53 >> 3;
    piVar35[-0x3d] =
         ((int)((-uVar47 & 0xffffffff) << 3) - ((int)uVar50 + (int)((uVar50 & 0xffffffff) << 1))) +
         2 >> 2;
    uVar44 = lVar41 - lVar39;
    piVar35[-0x3c] =
         (((int)uVar55 + (int)((uVar55 & 0xffffffff) << 2)) -
         ((int)uVar56 + (int)((uVar56 & 0xffffffff) << 1))) + 4 >> 3;
    uVar52 = lVar28 + lVar62 + lVar21 + lVar32;
    uVar54 = (lVar21 + lVar32) - (lVar28 + lVar62);
    iVar22 = (int)(lVar32 - lVar21);
    piVar35[-0x3b] = (int)uVar44 + (int)((uVar44 & 0xffffffff) << 1) + 1 >> 1;
    piVar35[-0x3a] =
         (int)uVar55 + (int)((uVar55 & 0xffffffff) << 1) +
         (int)uVar56 + (int)((uVar56 & 0xffffffff) << 2) + 4 >> 3;
    piVar35[-0x39] =
         ((int)((uVar50 & 0xffffffff) << 3) - ((int)uVar47 + (int)((uVar47 & 0xffffffff) << 1))) + 2
         >> 2;
    iVar48 = (int)(lVar62 - lVar28);
    uVar44 = (lVar29 + lVar20) - (lVar60 + lVar26);
    uVar47 = lVar60 + lVar26 + lVar29 + lVar20;
    piVar35[-0x38] = (int)((lVar53 + 1U & 0xffffffff) << 2) + iVar24 >> 3;
    piVar35[1] = (int)((uVar52 & 0xffffffff) << 4) + (int)uVar52 + 4 >> 3;
    iVar24 = (int)(lVar26 - lVar60);
    iVar33 = (int)(lVar20 - lVar29);
    piVar35[2] = iVar48 + (int)((lVar62 - lVar28 & 0xffffffffU) << 2) + iVar22 * 0xb + 2 >> 2;
    piVar35[3] = (int)((uVar54 & 0xffffffff) << 4) + (int)uVar54 + 4 >> 3;
    piVar35[4] = iVar22 + (int)((lVar32 - lVar21 & 0xffffffffU) << 2) + iVar48 * -0xb + 2 >> 2;
    piVar35[5] = (int)((uVar47 & 0xffffffff) << 4) + (int)uVar47 + 4 >> 3;
    piVar35[6] = iVar24 + (int)((lVar26 - lVar60 & 0xffffffffU) << 2) + iVar33 * 0xb + 2 >> 2;
    piVar35[7] = (int)((uVar44 & 0xffffffff) << 4) + (int)uVar44 + 4 >> 3;
    param_1 = param_1 + 1;
    piVar35 = piVar35 + 8;
    *piVar35 = iVar33 + (int)((lVar20 - lVar29 & 0xffffffffU) << 2) + iVar24 * -0xb + 2 >> 2;
    lVar66 = lVar66 + -1;
    if (lVar66 == 0) break;
    uVar44 = param_2 * 0xe & 0xffffffff;
  }
  puVar40 = auStack_2a0;
  iVar24 = param_3 + 0x100;
  lVar66 = 2;
  do {
    puVar36 = (uint *)(puVar40 + 0x5c);
    psVar34 = (short *)(iVar24 + 0x2e);
    uVar30 = 0xfffffffe;
    do {
      uVar18 = (uVar30 - 2) * 0x20 & 0x60;
      lVar21 = (ulonglong)puVar36[-0xf] - (ulonglong)puVar36[-7];
      uVar64 = puVar36[-0x16];
      lVar26 = (ulonglong)puVar36[-0x17] - (ulonglong)puVar36[1];
      uVar1 = puVar36[2];
      uVar2 = puVar36[-0xe];
      uVar52 = lVar26 - lVar21;
      uVar3 = puVar36[-6];
      lVar28 = (ulonglong)puVar36[-7] + (ulonglong)puVar36[-0xf];
      lVar20 = (ulonglong)puVar36[1] + (ulonglong)puVar36[-0x17];
      uVar47 = lVar21 + lVar26;
      uVar54 = lVar28 + lVar20;
      uVar44 = lVar20 - lVar28;
      iVar48 = *(int *)(&lbl_82161754 + uVar18);
      iVar22 = *(int *)(&lbl_82161758 + uVar18);
      iVar33 = *(int *)(&lbl_82161750 + uVar18);
      lVar28 = (longlong)
               ((int)uVar52 + (int)((uVar52 & 0xffffffff) << 1) + *(int *)(&lbl_82161768 + uVar18)
               >> 2) + (uVar47 & 0x7fffffff) * 2;
      lVar26 = (longlong)(*(int *)(&lbl_82161764 + uVar18) + (int)uVar44 >> 3) +
               (uVar44 & 0x7fffffff) * 2;
      lVar20 = (uVar52 & 0x7fffffff) * 2 -
               (longlong)
               ((int)uVar47 + (int)((uVar47 & 0xffffffff) << 1) + *(int *)(&lbl_8216176C + uVar18)
               >> 2);
      lVar21 = (longlong)(*(int *)(&lbl_82161760 + uVar18) + (int)uVar54 >> 3) +
               (uVar54 & 0x7fffffff) * 2;
      uVar19 = (uVar30 - 1) * 0x20 & 0x60;
      psVar34[1] = (short)((uint)(*(int *)(&lbl_8216175C + uVar18) * (int)lVar20) >> 0x10) +
                   (short)lVar20;
      psVar34[-0xf] = (short)((uint)(iVar48 * (int)lVar28) >> 0x10) + (short)lVar28;
      lVar28 = (ulonglong)uVar64 - (ulonglong)uVar1;
      psVar34[-7] = (short)((uint)(iVar22 * (int)lVar26) >> 0x10) + (short)lVar26;
      psVar34[-0x17] = (short)((uint)(iVar33 * (int)lVar21) >> 0x10) + (short)lVar21;
      lVar21 = (ulonglong)uVar2 - (ulonglong)uVar3;
      iVar33 = *(int *)(&lbl_82161750 + uVar19);
      lVar20 = (ulonglong)uVar1 + (ulonglong)uVar64;
      lVar26 = (ulonglong)uVar3 + (ulonglong)uVar2;
      uVar52 = lVar28 - lVar21;
      uVar54 = lVar26 + lVar20;
      uVar47 = lVar21 + lVar28;
      uVar44 = lVar20 - lVar26;
      iVar48 = *(int *)(&lbl_82161754 + uVar19);
      iVar22 = *(int *)(&lbl_8216175C + uVar19);
      uVar64 = puVar36[-0xd];
      uVar1 = puVar36[-5];
      uVar2 = puVar36[-0x15];
      uVar3 = puVar36[3];
      lVar28 = (longlong)
               ((int)uVar52 + (int)((uVar52 & 0xffffffff) << 1) + *(int *)(&lbl_82161768 + uVar19)
               >> 2) + (uVar47 & 0x7fffffff) * 2;
      lVar26 = (longlong)(*(int *)(&lbl_82161764 + uVar19) + (int)uVar44 >> 3) +
               (uVar44 & 0x7fffffff) * 2;
      lVar20 = (uVar52 & 0x7fffffff) * 2 -
               (longlong)
               ((int)uVar47 + (int)((uVar47 & 0xffffffff) << 1) + *(int *)(&lbl_8216176C + uVar19)
               >> 2);
      lVar21 = (longlong)(*(int *)(&lbl_82161760 + uVar19) + (int)uVar54 >> 3) +
               (uVar54 & 0x7fffffff) * 2;
      psVar34[-6] = (short)((uint)(*(int *)(&lbl_82161758 + uVar19) * (int)lVar26) >> 0x10) +
                    (short)lVar26;
      psVar34[2] = (short)((uint)(iVar22 * (int)lVar20) >> 0x10) + (short)lVar20;
      psVar34[-0xe] = (short)((uint)(iVar48 * (int)lVar28) >> 0x10) + (short)lVar28;
      iVar49 = (uVar30 & 3) * 0x20;
      lVar28 = (ulonglong)uVar2 - (ulonglong)uVar3;
      psVar34[-0x16] = (short)((uint)(iVar33 * (int)lVar21) >> 0x10) + (short)lVar21;
      lVar21 = (ulonglong)uVar3 + (ulonglong)uVar2;
      lVar20 = (ulonglong)uVar1 + (ulonglong)uVar64;
      lVar26 = (ulonglong)uVar64 - (ulonglong)uVar1;
      uVar44 = lVar20 + lVar21;
      uVar54 = lVar21 - lVar20;
      uVar52 = lVar28 - lVar26;
      uVar47 = lVar26 + lVar28;
      iVar48 = *(int *)(&lbl_82161758 + iVar49);
      iVar22 = *(int *)(&lbl_8216175C + iVar49);
      lVar20 = (longlong)(*(int *)(&lbl_82161760 + iVar49) + (int)uVar44 >> 3) +
               (uVar44 & 0x7fffffff) * 2;
      iVar33 = *(int *)(&lbl_82161750 + iVar49);
      lVar28 = (longlong)(*(int *)(&lbl_82161764 + iVar49) + (int)uVar54 >> 3) +
               (uVar54 & 0x7fffffff) * 2;
      uVar64 = puVar36[-0x14];
      uVar1 = puVar36[-0xc];
      uVar2 = puVar36[-4];
      lVar26 = (longlong)
               ((int)uVar52 + (int)((uVar52 & 0xffffffff) << 1) + *(int *)(&lbl_82161768 + iVar49)
               >> 2) + (uVar47 & 0x7fffffff) * 2;
      puVar36 = puVar36 + 4;
      uVar3 = *puVar36;
      lVar21 = (uVar52 & 0x7fffffff) * 2 -
               (longlong)
               ((int)uVar47 + (int)((uVar47 & 0xffffffff) << 1) + *(int *)(&lbl_8216176C + iVar49)
               >> 2);
      psVar34[-0xd] =
           (short)((uint)(*(int *)(&lbl_82161754 + iVar49) * (int)lVar26) >> 0x10) + (short)lVar26;
      psVar34[-0x15] = (short)((uint)(iVar33 * (int)lVar20) >> 0x10) + (short)lVar20;
      psVar34[-5] = (short)((uint)(iVar48 * (int)lVar28) >> 0x10) + (short)lVar28;
      psVar34[3] = (short)((uint)(iVar22 * (int)lVar21) >> 0x10) + (short)lVar21;
      lVar26 = (ulonglong)uVar1 - (ulonglong)uVar2;
      uVar18 = (uVar30 + 1) * 0x20 & 0x60;
      lVar21 = (ulonglong)uVar64 - (ulonglong)uVar3;
      lVar28 = (ulonglong)uVar2 + (ulonglong)uVar1;
      lVar20 = (ulonglong)uVar3 + (ulonglong)uVar64;
      uVar52 = lVar21 - lVar26;
      uVar47 = lVar26 + lVar21;
      uVar54 = lVar28 + lVar20;
      uVar44 = lVar20 - lVar28;
      iVar48 = *(int *)(&lbl_82161758 + uVar18);
      iVar22 = *(int *)(&lbl_8216175C + uVar18);
      iVar33 = *(int *)(&lbl_82161750 + uVar18);
      lVar21 = (longlong)
               ((int)uVar52 + (int)((uVar52 & 0xffffffff) << 1) + *(int *)(&lbl_82161768 + uVar18)
               >> 2) + (uVar47 & 0x7fffffff) * 2;
      lVar26 = (longlong)(*(int *)(&lbl_82161764 + uVar18) + (int)uVar44 >> 3) +
               (uVar44 & 0x7fffffff) * 2;
      lVar20 = (uVar52 & 0x7fffffff) * 2 -
               (longlong)
               ((int)uVar47 + (int)((uVar47 & 0xffffffff) << 1) + *(int *)(&lbl_8216176C + uVar18)
               >> 2);
      lVar28 = (longlong)(*(int *)(&lbl_82161760 + uVar18) + (int)uVar54 >> 3) +
               (uVar54 & 0x7fffffff) * 2;
      psVar34[-0xc] =
           (short)((uint)(*(int *)(&lbl_82161754 + uVar18) * (int)lVar21) >> 0x10) + (short)lVar21;
      psVar34[-0x14] = (short)((uint)(iVar33 * (int)lVar28) >> 0x10) + (short)lVar28;
      iVar33 = uVar30 + 6;
      psVar34[-4] = (short)((uint)(iVar48 * (int)lVar26) >> 0x10) + (short)lVar26;
      psVar34 = psVar34 + 4;
      *psVar34 = (short)((uint)(iVar22 * (int)lVar20) >> 0x10) + (short)lVar20;
      uVar30 = uVar30 + 4;
    } while (iVar33 < 8);
    iVar24 = iVar24 + 0x40;
    puVar40 = puVar40 + 0x80;
    lVar66 = lVar66 + -1;
  } while (lVar66 != 0);
  uVar30 = 0;
  psVar34 = (short *)(param_3 + 0x6e);
  piVar35 = aiStack_1c4;
  lVar66 = 8;
  do {
    piVar4 = piVar35 + -0x2f;
    iVar38 = (uVar30 & 3) * 0x40;
    piVar5 = piVar35 + -0x27;
    piVar6 = piVar35 + -0x1f;
    piVar7 = piVar35 + -0x17;
    piVar8 = piVar35 + -0xf;
    piVar9 = piVar35 + -7;
    iVar25 = *piVar7 + *piVar6;
    piVar10 = piVar35 + -0x37;
    iVar23 = *piVar8 + *piVar5;
    piVar35 = piVar35 + 1;
    iVar42 = *piVar9 + *piVar4;
    iVar49 = *piVar5 - *piVar8;
    iVar51 = *piVar35 + *piVar10;
    iVar22 = *piVar10 - *piVar35;
    iVar24 = *(int *)(&lbl_82161554 + iVar38);
    iVar43 = iVar23 - iVar42;
    iVar48 = *piVar9 - *piVar4;
    iVar27 = *piVar7 - *piVar6;
    iVar33 = iVar49 - iVar48;
    iVar48 = iVar48 + iVar49;
    uVar64 = iVar25 - iVar51;
    iVar37 = ((*(int *)(&lbl_82161578 + iVar38) + iVar22 >> 1) - iVar33) + iVar22;
    iVar49 = (iVar48 - (*(int *)(&lbl_82161574 + iVar38) + iVar48 >> 2)) + iVar27;
    iVar27 = (iVar48 - (*(int *)(&lbl_82161570 + iVar38) + iVar27 >> 1)) - iVar27;
    iVar22 = (iVar33 - (*(int *)(&lbl_8216157C + iVar38) + iVar33 >> 2)) + iVar22;
    iVar25 = iVar25 + iVar51;
    iVar42 = iVar42 + iVar23;
    iVar23 = iVar42 + iVar25;
    iVar25 = iVar25 - iVar42;
    iVar45 = ((*(int *)(&lbl_82161568 + iVar38) + iVar43 >> 2) + (uVar64 & 0x7fffffff) * -2) -
             iVar43;
    iVar46 = (((int)(*(int *)(&lbl_8216156C + iVar38) + uVar64) >> 2) + iVar43 * 2) - uVar64;
    iVar42 = (*(int *)(&lbl_82161584 + iVar38) + iVar22 >> 1) + iVar49 * 2;
    iVar65 = ((*(int *)(&lbl_82161588 + iVar38) + iVar37 + iVar27 >> 2) - iVar27) + iVar37;
    iVar48 = *(int *)(&lbl_82161564 + iVar38);
    iVar43 = iVar22 * 2 - (*(int *)(&lbl_82161580 + iVar38) + iVar49 >> 1);
    iVar22 = *(int *)(&lbl_82161558 + iVar38);
    iVar33 = *(int *)(&lbl_8216155C + iVar38);
    iVar49 = *(int *)(&lbl_82161550 + iVar38);
    iVar51 = *(int *)(&lbl_82161560 + iVar38);
    iVar27 = (iVar37 - ((*(int *)(&lbl_8216158C + iVar38) - iVar27) + iVar37 >> 2)) + iVar27;
    psVar34[-0x27] = (short)((uint)(iVar22 * iVar45) >> 0x10) + (short)iVar45;
    psVar34[-0x37] = (short)((uint)((iVar51 + iVar23) * iVar49) >> 0x10) + (short)iVar23;
    psVar34[-0x2f] = (short)((uint)(iVar24 * iVar43) >> 0x10) + (short)iVar43;
    psVar34[-0x1f] = (short)((uint)(iVar33 * iVar65) >> 0x10) + (short)iVar65;
    psVar34[-0x17] = (short)((uint)((iVar48 + iVar25) * iVar49) >> 0x10) + (short)iVar25;
    psVar34[-0xf] = (short)((uint)(iVar24 * iVar27) >> 0x10) + (short)iVar27;
    psVar34[-7] = (short)((uint)(iVar22 * iVar46) >> 0x10) + (short)iVar46;
    uVar30 = uVar30 + 1;
    psVar34 = psVar34 + 1;
    *psVar34 = (short)((uint)(iVar33 * iVar42) >> 0x10) + (short)iVar42;
    lVar66 = lVar66 + -1;
  } while (lVar66 != 0);
  puStack_2d8 = auStack_1a0;
  iStack_2dc = param_3 + 0x80;
  uStack_2d4 = 2;
  do {
    psVar31 = (short *)(iStack_2dc + 0x136);
    puVar36 = (uint *)(puStack_2d8 + 0xdc);
    psVar34 = (short *)(iStack_2dc + 0x36);
    uVar30 = 0;
    lVar66 = 4;
    do {
      puVar11 = puVar36 + -0x2f;
      uVar57 = (ulonglong)*puVar11;
      puVar12 = puVar36 + -0x27;
      uVar56 = (ulonglong)*puVar12;
      iVar23 = (uVar30 & 3) * 0x40;
      puVar13 = puVar36 + -0xf;
      uVar58 = (ulonglong)*puVar13;
      puVar14 = puVar36 + -7;
      uVar59 = (ulonglong)*puVar14;
      puVar15 = puVar36 + -0x1f;
      uVar63 = (ulonglong)*puVar15;
      puVar16 = puVar36 + -0x17;
      uVar44 = (ulonglong)*puVar16;
      puVar17 = puVar36 + -0x37;
      uVar61 = (ulonglong)*puVar17;
      uVar55 = (uVar59 - uVar57) + (uVar56 - uVar58);
      puVar36 = puVar36 + 1;
      uVar50 = (ulonglong)*puVar36;
      uVar52 = (uVar58 + uVar56) - (uVar59 + uVar57);
      uVar54 = (uVar56 - uVar58) - (uVar59 - uVar57);
      uVar47 = (uVar44 + uVar63) - (uVar50 + uVar61);
      iVar42 = (int)(uVar61 - uVar50);
      iVar24 = *(int *)(&lbl_82161654 + iVar23);
      iVar48 = (int)uVar54;
      iVar27 = (*(int *)(&lbl_82161670 + iVar23) + (int)((uVar55 & 0xffffffff) << 1)) -
               ((int)(uVar44 - uVar63) + (int)((uVar44 - uVar63 & 0xffffffff) << 1)) >> 2;
      iVar25 = (*(int *)(&lbl_82161678 + iVar23) - (int)((uVar54 & 0xffffffff) << 1)) +
               iVar42 + (int)((uVar61 - uVar50 & 0xffffffff) << 1) >> 2;
      iVar42 = (iVar48 - (*(int *)(&lbl_8216167C + iVar23) + iVar48 >> 2)) + iVar42;
      uVar54 = (uVar55 - (longlong)(*(int *)(&lbl_82161674 + iVar23) + (int)uVar55 >> 2)) +
               (uVar44 - uVar63);
      iVar48 = *(int *)(&lbl_82161660 + iVar23);
      iVar43 = *puVar16 + *puVar15 + *puVar36 + *puVar17;
      iVar45 = *puVar14 + *puVar11 + *puVar13 + *puVar12;
      lVar20 = ((longlong)(*(int *)(&lbl_82161668 + iVar23) + (int)uVar52 >> 2) +
               (uVar47 & 0x7fffffff) * -2) - uVar52;
      iVar38 = iVar42 * 2 - (*(int *)(&lbl_82161680 + iVar23) + (int)uVar54 >> 1);
      iVar46 = iVar45 + iVar43;
      lVar21 = ((ulonglong)(uint)(*(int *)(&lbl_8216166C + iVar23) + (int)uVar47 >> 2) +
               (uVar52 & 0x7fffffff) * 2) - uVar47;
      iVar22 = *(int *)(&lbl_82161658 + iVar23);
      iVar33 = *(int *)(&lbl_8216165C + iVar23);
      iVar49 = *(int *)(&lbl_82161650 + iVar23);
      iVar51 = *(int *)(&lbl_82161664 + iVar23);
      iVar37 = (*(int *)(&lbl_82161688 + iVar23) + iVar25 + iVar27 >> 1) + (iVar25 - iVar27) * 2;
      iVar43 = iVar43 - iVar45;
      iVar25 = (iVar25 + iVar27) * 2 - ((*(int *)(&lbl_8216168C + iVar23) - iVar27) + iVar25 >> 1);
      iVar42 = (*(int *)(&lbl_82161684 + iVar23) + iVar42 >> 1) + (int)((uVar54 & 0xffffffff) << 1);
      psVar34[-0xf] = (short)((uint)(iVar33 * iVar37) >> 0x10) + (short)iVar37;
      psVar34[-0x1b] = (short)((uint)((iVar48 + iVar46) * iVar49) >> 0x10) + (short)iVar46;
      psVar34[-0x17] = (short)((uint)(iVar24 * iVar38) >> 0x10) + (short)iVar38;
      iVar27 = (uVar30 & 3) * 0x20;
      psVar34[-3] = (short)((uint)(iVar22 * (int)lVar21) >> 0x10) + (short)lVar21;
      psVar34[-7] = (short)((uint)(iVar24 * iVar25) >> 0x10) + (short)iVar25;
      psVar34[-0xb] = (short)((uint)((iVar51 + iVar43) * iVar49) >> 0x10) + (short)iVar43;
      psVar34[-0x13] = (short)((uint)(iVar22 * (int)lVar20) >> 0x10) + (short)lVar20;
      psVar34 = psVar34 + 1;
      *psVar34 = (short)((uint)(iVar33 * iVar42) >> 0x10) + (short)iVar42;
      uVar54 = (uVar63 + uVar61) - (uVar56 + uVar57);
      uVar55 = uVar56 + uVar57 + uVar63 + uVar61;
      uVar52 = (uVar61 - uVar63) - (uVar57 - uVar56);
      uVar47 = (uVar57 - uVar56) + (uVar61 - uVar63);
      iVar24 = *(int *)(&lbl_821617D8 + iVar27);
      iVar48 = *(int *)(&lbl_821617DC + iVar27);
      iVar22 = *(int *)(&lbl_821617D4 + iVar27);
      iVar33 = *(int *)(&lbl_821617D0 + iVar27);
      lVar39 = (longlong)((int)uVar54 + *(int *)(&lbl_821617E4 + iVar27) >> 3) +
               (uVar54 & 0x7fffffff) * 2;
      lVar41 = (longlong)((int)uVar55 + *(int *)(&lbl_821617E0 + iVar27) >> 3) +
               (uVar55 & 0x7fffffff) * 2;
      uVar54 = (uVar44 - uVar50) - (uVar58 - uVar59);
      uVar55 = (uVar58 - uVar59) + (uVar44 - uVar50);
      lVar21 = (longlong)
               ((int)uVar52 + (int)((uVar52 & 0xffffffff) << 1) + *(int *)(&lbl_821617E8 + iVar27)
               >> 2) + (uVar47 & 0x7fffffff) * 2;
      uVar56 = uVar59 + uVar58 + uVar50 + uVar44;
      lVar32 = (uVar52 & 0x7fffffff) * 2 -
               (longlong)
               ((int)uVar47 + (int)((uVar47 & 0xffffffff) << 1) + *(int *)(&lbl_821617EC + iVar27)
               >> 2);
      uVar44 = (uVar50 + uVar44) - (uVar59 + uVar58);
      lVar29 = (longlong)((int)uVar56 + *(int *)(&lbl_821617E0 + iVar27) >> 3) +
               (uVar56 & 0x7fffffff) * 2;
      lVar26 = (longlong)((int)uVar44 + *(int *)(&lbl_821617E4 + iVar27) >> 3) +
               (uVar44 & 0x7fffffff) * 2;
      lVar28 = (longlong)
               ((int)uVar54 + (int)((uVar54 & 0xffffffff) << 1) + *(int *)(&lbl_821617E8 + iVar27)
               >> 2) + (uVar55 & 0x7fffffff) * 2;
      lVar20 = (uVar54 & 0x7fffffff) * 2 -
               (longlong)
               ((int)uVar55 + (int)((uVar55 & 0xffffffff) << 1) + *(int *)(&lbl_821617EC + iVar27)
               >> 2);
      psVar31[-0x17] = (short)((uint)((int)lVar21 * iVar22) >> 0x10) + (short)lVar21;
      psVar31[-0x13] = (short)((uint)((int)lVar39 * iVar24) >> 0x10) + (short)lVar39;
      psVar31[-0xf] = (short)((uint)((int)lVar32 * iVar48) >> 0x10) + (short)lVar32;
      psVar31[-0x1b] = (short)((uint)((int)lVar41 * iVar33) >> 0x10) + (short)lVar41;
      psVar31[-0xb] = (short)((uint)((int)lVar29 * iVar33) >> 0x10) + (short)lVar29;
      psVar31[-7] = (short)((uint)((int)lVar28 * iVar22) >> 0x10) + (short)lVar28;
      psVar31[-3] = (short)((uint)((int)lVar26 * iVar24) >> 0x10) + (short)lVar26;
      uVar30 = uVar30 + 1;
      psVar31 = psVar31 + 1;
      *psVar31 = (short)((uint)((int)lVar20 * iVar48) >> 0x10) + (short)lVar20;
      lVar66 = lVar66 + -1;
    } while (lVar66 != 0);
    uVar44 = (ulonglong)uStack_2d4;
    iStack_2dc = iStack_2dc + 0x40;
    puStack_2d8 = puStack_2d8 + 0x10;
    uStack_2d4 = (uint)(uVar44 - 1);
  } while (uVar44 - 1 != 0);
  return;
}

