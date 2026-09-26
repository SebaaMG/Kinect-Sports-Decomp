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
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_140;
extern unsigned int fStack_148;
extern unsigned int fStack_150;
extern int fn_825D6CB0();
extern int fn_825D6EA8();
extern int fn_825D7200();
extern int fn_825F1A58();
extern int fn_82F6A514();
extern int fn_82F6A560();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191564;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82191F78;
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_82192568;
extern unsigned int lbl_82192734;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_82195644;
extern unsigned int lbl_8219581C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;
extern unsigned int uStack_134;
extern unsigned int uStack_13c;
extern unsigned int uStack_144;
extern unsigned int uStack_14c;
extern V16 loadVectorLeftIndexed128();


void fn_82615B30(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined8 in_r0;
  ulonglong uVar10;
  int iVar11;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar12;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double extraout_f1;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float in_register_000100d0;
  float in_register_000100d4;
  float fVar48;
  float in_register_000100d8;
  float fVar49;
  float in_vr13;
  float fStack_150;
  uint uStack_14c;
  float fStack_148;
  uint uStack_144;
  float fStack_140;
  uint uStack_13c;
  uint uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  
  uVar10 = ZEXT48(&stack0x00000000);
  iVar11 = fn_82F6A514();
  iVar4 = *(int *)(iVar11 + 4);
  dVar28 = extraout_f1;
  if (((*(char *)(iVar4 + 0xe2) != '\0') || (*(char *)(iVar4 + 0xe0) != '\0')) &&
     (*(int *)(iVar4 + 400) != 0)) {
    iVar5 = *(int *)(iVar11 + 8);
    dVar27 = (double)(float)(extraout_f1 - (double)*(float *)(iVar11 + 0xc));
    if ((((double)*(float *)(iVar5 + 8) < dVar27) && ((double)*(float *)(iVar5 + 0x38) < dVar27)) &&
       (((double)*(float *)(iVar5 + 100) < dVar27 && ((double)*(float *)(iVar5 + 0x88) < dVar27))))
    {
      *(undefined4 *)(iVar4 + 400) = 0;
      goto LAB_82616a04;
    }
    dVar32 = (double)lbl_82195644;
    dVar30 = (double)lbl_8218E8E8;
    dVar35 = (double)lbl_82192D74;
    dVar38 = (double)lbl_821CA460;
    dVar37 = (double)lbl_821916FC;
    dVar31 = (double)lbl_82191FCC;
    uVar18 = (ulonglong)
             ((float)(extraout_f1 - (double)*(float *)(iVar11 + 0x14)) * *(float *)(iVar5 + 4));
    uVar19 = (ulonglong)
             ((float)(extraout_f1 - (double)*(float *)(iVar11 + 0x18)) * *(float *)(iVar5 + 0x34));
    uVar20 = (ulonglong)
             ((float)(extraout_f1 - (double)*(float *)(iVar11 + 0x1c)) * *(float *)(iVar5 + 0x60));
    uVar21 = (ulonglong)
             ((float)(extraout_f1 - (double)*(float *)(iVar11 + 0x20)) * *(float *)(iVar5 + 0x84));
    dVar36 = (double)lbl_82191FC8;
    uStack_13c = (uint)uVar18;
    dVar29 = (double)lbl_82192568;
    uStack_144 = (uint)uVar19;
    dVar33 = (double)lbl_821CC160;
    uStack_14c = (uint)uVar20;
    dVar34 = (double)lbl_82192734;
    uStack_134 = (uint)uVar21;
    if (dVar27 < (double)*(float *)(iVar5 + 8)) {
      uVar17 = 0;
      if (uStack_13c != 0) {
        do {
          puVar6 = (undefined4 *)(*(int *)(iVar11 + 4) + 0xb0U & 0xfffffff0);
          uVar41 = puVar6[1];
          uVar44 = puVar6[2];
          uVar47 = puVar6[3];
          pfVar7 = (float *)(*(int *)(iVar11 + 4) + 0xa0U & 0xfffffff0);
          fVar39 = *pfVar7;
          fVar40 = pfVar7[1];
          fVar43 = pfVar7[2];
          fVar46 = pfVar7[3];
          fVar1 = *(float *)(*(int *)(iVar11 + 8) + 0x10);
          iVar5 = (int)in_r0;
          puVar8 = (undefined4 *)((int)&fStack_120 + iVar5 & 0xfffffff0);
          *puVar8 = *puVar6;
          puVar8[1] = uVar41;
          puVar8[2] = uVar44;
          puVar8[3] = uVar47;
          fVar3 = -fVar1;
          uVar14 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          pfVar7 = (float *)((int)&fStack_130 + iVar5 & 0xfffffff0);
          *pfVar7 = fVar39;
          pfVar7[1] = fVar40;
          pfVar7[2] = fVar43;
          pfVar7[3] = fVar46;
          uVar13 = uVar14 * 0x19660d + 0x3c6ef35f;
          fStack_150 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          fVar2 = *(float *)(*(int *)(iVar11 + 8) + 0x10);
          uVar14 = uVar13 * 0x19660d + 0x3c6ef35f;
          fStack_148 = (float)(uVar13 & 0x7fffff | 0x3f800000);
          fStack_130 = (fVar1 - fVar3) * (float)((double)fStack_150 - dVar38) + fVar3 + fStack_130;
          uVar13 = uVar14 * 0x19660d + 0x3c6ef35f;
          fStack_150 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          dVar24 = (double)fStack_148;
          uVar14 = uVar13 * 0x19660d + 0x3c6ef35f;
          fStack_148 = (float)(uVar13 & 0x7fffff | 0x3f800000);
          fVar3 = -fVar2;
          fVar1 = *(float *)(*(int *)(iVar11 + 8) + 0x10);
          fVar48 = -fVar1;
          dVar25 = (double)fStack_150;
          uVar13 = uVar14 * 0x19660d + 0x3c6ef35f;
          fStack_150 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          fStack_12c = (fVar2 - fVar3) * (float)(dVar24 - dVar38) + fVar3 + fStack_12c;
          fStack_128 = (fVar1 - fVar48) * (float)(dVar25 - dVar38) + fVar48 + fStack_128;
          fStack_120 = (float)((double)(float)((double)(float)((double)fStack_148 - dVar38) * dVar35
                                              + (double)fStack_120) - dVar36);
          fStack_148 = (float)(uVar13 & 0x7fffff | 0x3f800000);
          uVar14 = (uVar13 * 0x19660d + 0x3c6ef35f) * 0x19660d + 0x3c6ef35f;
          dVar25 = (double)fStack_148;
          fStack_11c = (float)((double)(float)((double)(float)((double)fStack_150 - dVar38) * dVar35
                                              + (double)fStack_11c) - dVar36);
          lbl_83265A28 = uVar14 * 0x19660d + 0x3c6ef35f;
          fVar1 = *(float *)(*(int *)(iVar11 + 8) + 0x24);
          fStack_148 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
          dVar24 = (double)fStack_148;
          fStack_148 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          iVar4 = *(int *)(iVar11 + 8);
          fStack_118 = (float)((double)(float)((double)(float)(dVar25 - dVar38) * dVar35 +
                                              (double)fStack_118) - dVar36);
          pfVar7 = (float *)((int)&fStack_120 + iVar5 & 0xfffffff0);
          in_register_000100d0 = *pfVar7;
          in_register_000100d4 = pfVar7[1];
          in_register_000100d8 = pfVar7[2];
          in_vr13 = pfVar7[3];
          fVar2 = *(float *)(iVar11 + 0x14);
          fVar3 = *(float *)(iVar4 + 0xc);
          uVar41 = *(undefined4 *)(iVar11 + 0x34);
          fVar48 = *(float *)(iVar4 + 0x18);
          fVar45 = -fVar1;
          fVar49 = *(float *)(iVar4 + 0x14);
          loadVectorLeftIndexed128(in_r0,uVar10 - 0x148);
          fVar42 = *(float *)(iVar11 + 0x24);
          pfVar7 = (float *)(iVar5 + (int)(uVar10 - 0x120) & 0xfffffff0);
          *pfVar7 = in_register_000100d0 * fVar39;
          pfVar7[1] = in_register_000100d4 * fVar40;
          pfVar7[2] = in_register_000100d8 * fVar43;
          pfVar7[3] = in_vr13 * fVar46;
          fn_825D6EA8((double)((fVar1 - fVar45) * (float)((double)fStack_148 - dVar38) +
                                    fVar45),(double)(float)((double)fVar49 * dVar36),
                            (double)(float)((double)fVar48 * dVar36),(double)fVar49,(double)fVar48,
                            (double)(float)((double)fVar3 * dVar31),
                            (double)(float)((double)fVar3 * dVar29),dVar35,dVar33,
                            (double)((float)uVar17 * fVar42 + fVar2),dVar34,uVar41,uVar10 - 0x130,
                            uVar10 - 0x120,(int)((double)(float)(dVar24 - dVar38) * dVar32) & 0xff,
                            uVar10 - 0x120,uVar10 - 0x148);
          uVar17 = uVar17 + 1;
        } while (uVar17 < uStack_13c);
      }
      if ((dVar27 < (double)*(float *)(*(int *)(iVar11 + 8) + 0x38)) &&
         (uVar17 = 0, uStack_13c != 0)) {
        dVar25 = (double)lbl_82191FB0;
        dVar24 = (double)lbl_82191F78;
        do {
          pfVar7 = (float *)(*(int *)(iVar11 + 4) + 0xa0U & 0xfffffff0);
          fVar39 = *pfVar7;
          fVar40 = pfVar7[1];
          fVar43 = pfVar7[2];
          fVar46 = pfVar7[3];
          fVar1 = *(float *)(*(int *)(iVar11 + 8) + 0x10);
          iVar5 = (int)in_r0;
          pfVar7 = (float *)((int)&fStack_130 + iVar5 & 0xfffffff0);
          *pfVar7 = fVar39;
          pfVar7[1] = fVar40;
          pfVar7[2] = fVar43;
          pfVar7[3] = fVar46;
          fVar3 = -fVar1;
          uVar13 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          uVar14 = uVar13 * 0x19660d + 0x3c6ef35f;
          fStack_148 = (float)(uVar13 & 0x7fffff | 0x3f800000);
          fVar2 = *(float *)(*(int *)(iVar11 + 8) + 0x10);
          fVar48 = -fVar2;
          uVar13 = uVar14 * 0x19660d + 0x3c6ef35f;
          fStack_150 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          fStack_130 = (fVar1 - fVar3) * (float)((double)fStack_148 - dVar38) + fVar3 + fStack_130;
          uVar14 = uVar13 * 0x19660d + 0x3c6ef35f;
          fStack_148 = (float)(uVar13 & 0x7fffff | 0x3f800000);
          dVar26 = (double)fStack_150;
          fVar1 = *(float *)(*(int *)(iVar11 + 8) + 0x10);
          fVar3 = -fVar1;
          uVar13 = uVar14 * 0x19660d + 0x3c6ef35f;
          fStack_150 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          uVar14 = uVar13 * 0x19660d + 0x3c6ef35f;
          fStack_12c = (fVar2 - fVar48) * (float)(dVar26 - dVar38) + fVar48 + fStack_12c;
          fStack_128 = (fVar1 - fVar3) * (float)((double)fStack_148 - dVar38) + fVar3 + fStack_128;
          fStack_120 = (float)((double)(float)((double)fStack_150 - dVar38) * dVar37 - dVar38);
          uVar15 = (uVar14 * 0x19660d + 0x3c6ef35f) * 0x19660d + 0x3c6ef35f;
          fVar1 = *(float *)(*(int *)(iVar11 + 8) + 0x24);
          lbl_83265A28 = uVar15 * 0x19660d + 0x3c6ef35f;
          fVar45 = -fVar1;
          fStack_148 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          dVar23 = (double)fStack_148;
          iVar4 = *(int *)(iVar11 + 8);
          fStack_148 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
          dVar22 = (double)fStack_148;
          fStack_148 = (float)(uVar13 & 0x7fffff | 0x3f800000);
          dVar26 = (double)fStack_148;
          fStack_148 = (float)(uVar15 & 0x7fffff | 0x3f800000);
          fVar2 = *(float *)(iVar4 + 0x14);
          fVar3 = *(float *)(iVar4 + 0x18);
          uVar41 = *(undefined4 *)(iVar11 + 0x34);
          fVar48 = *(float *)(iVar11 + 0x24);
          fVar49 = *(float *)(iVar11 + 0x14);
          fVar42 = *(float *)(iVar4 + 0xc);
          fStack_11c = (float)((double)(float)(dVar26 - dVar38) * dVar37 - dVar38);
          loadVectorLeftIndexed128(in_r0,uVar10 - 0x148);
          fStack_118 = (float)((double)(float)(dVar23 - dVar38) * dVar37 - dVar38);
          pfVar7 = (float *)((int)&fStack_120 + iVar5 & 0xfffffff0);
          in_register_000100d0 = *pfVar7;
          in_register_000100d4 = pfVar7[1];
          in_register_000100d8 = pfVar7[2];
          in_vr13 = pfVar7[3];
          pfVar7 = (float *)((int)&fStack_120 + iVar5 & 0xfffffff0);
          *pfVar7 = in_register_000100d0 * fVar39;
          pfVar7[1] = in_register_000100d4 * fVar40;
          pfVar7[2] = in_register_000100d8 * fVar43;
          pfVar7[3] = in_vr13 * fVar46;
          fn_825D6EA8((double)((fVar1 - fVar45) * (float)((double)fStack_148 - dVar38) +
                                    fVar45),(double)(float)((double)fVar2 * dVar36),
                            (double)(float)((double)fVar3 * dVar36),(double)fVar2,(double)fVar3,
                            (double)(float)((double)fVar42 * dVar30),
                            (double)(float)((double)fVar42 * dVar25),dVar24,dVar33,
                            (double)((float)uVar17 * fVar48 + fVar49),dVar34,uVar41,uVar10 - 0x130,
                            uVar10 - 0x120,(int)((double)(float)(dVar22 - dVar38) * dVar32) & 0xff);
          uVar17 = uVar17 + 1;
        } while (uVar17 < uStack_13c);
      }
    }
    if (dVar27 < (double)*(float *)(*(int *)(iVar11 + 8) + 0x38)) {
      uVar17 = 0;
      if (uStack_144 != 0) {
        dVar24 = (double)lbl_82191564;
        do {
          pfVar7 = (float *)(*(int *)(iVar11 + 4) + 0xa0U & 0xfffffff0);
          fVar39 = *pfVar7;
          fVar40 = pfVar7[1];
          fVar43 = pfVar7[2];
          fVar46 = pfVar7[3];
          fVar1 = *(float *)(*(int *)(iVar11 + 8) + 0x40);
          iVar5 = (int)in_r0;
          pfVar7 = (float *)((int)&fStack_130 + iVar5 & 0xfffffff0);
          *pfVar7 = fVar39;
          pfVar7[1] = fVar40;
          pfVar7[2] = fVar43;
          pfVar7[3] = fVar46;
          fVar3 = -fVar1;
          uVar13 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          uVar14 = uVar13 * 0x19660d + 0x3c6ef35f;
          fStack_148 = (float)(uVar13 & 0x7fffff | 0x3f800000);
          fVar2 = *(float *)(*(int *)(iVar11 + 8) + 0x40);
          fVar48 = -fVar2;
          uVar13 = uVar14 * 0x19660d + 0x3c6ef35f;
          fStack_150 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          fStack_130 = (fVar1 - fVar3) * (float)((double)fStack_148 - dVar38) + fVar3 + fStack_130;
          uVar14 = uVar13 * 0x19660d + 0x3c6ef35f;
          fVar1 = *(float *)(*(int *)(iVar11 + 8) + 0x40);
          uVar15 = uVar14 * 0x19660d + 0x3c6ef35f;
          fStack_148 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          fVar3 = -fVar1;
          uVar16 = uVar15 * 0x19660d + 0x3c6ef35f;
          fStack_120 = (float)((double)(float)((double)fStack_148 - dVar38) * dVar37 - dVar38);
          fStack_12c = (fVar2 - fVar48) * (float)((double)fStack_150 - dVar38) + fVar48 + fStack_12c
          ;
          fStack_128 = (fVar1 - fVar3) *
                       (float)((double)(float)(uVar13 & 0x7fffff | 0x3f800000) - dVar38) + fVar3 +
                       fStack_128;
          uVar13 = (uVar16 * 0x19660d + 0x3c6ef35f) * 0x19660d + 0x3c6ef35f;
          fVar1 = *(float *)(*(int *)(iVar11 + 8) + 0x54);
          fVar45 = -fVar1;
          lbl_83265A28 = uVar13 * 0x19660d + 0x3c6ef35f;
          uVar14 = lbl_83265A28 & 0x7fffff;
          iVar4 = *(int *)(iVar11 + 8);
          fVar2 = *(float *)(iVar4 + 0x48);
          fVar3 = *(float *)(iVar11 + 0x28);
          fVar48 = *(float *)(iVar4 + 0x44);
          fVar49 = *(float *)(iVar4 + 0x3c);
          fVar42 = *(float *)(iVar11 + 0x18);
          uVar41 = *(undefined4 *)(iVar11 + 0x38);
          fStack_118 = (float)((double)(float)((double)(float)(uVar16 & 0x7fffff | 0x3f800000) -
                                              dVar38) * dVar37 - dVar38);
          fStack_11c = (float)((double)(float)((double)(float)(uVar15 & 0x7fffff | 0x3f800000) -
                                              dVar38) * dVar37 - dVar38);
          loadVectorLeftIndexed128(in_r0,uVar10 - 0x140);
          pfVar7 = (float *)((int)&fStack_120 + iVar5 & 0xfffffff0);
          in_register_000100d0 = *pfVar7;
          in_register_000100d4 = pfVar7[1];
          in_register_000100d8 = pfVar7[2];
          in_vr13 = pfVar7[3];
          pfVar7 = (float *)((int)&fStack_120 + iVar5 & 0xfffffff0);
          *pfVar7 = in_register_000100d0 * fVar39;
          pfVar7[1] = in_register_000100d4 * fVar40;
          pfVar7[2] = in_register_000100d8 * fVar43;
          pfVar7[3] = in_vr13 * fVar46;
          fn_825D7200((double)((fVar1 - fVar45) *
                                     (float)((double)(float)(uVar13 & 0x7fffff | 0x3f800000) -
                                            dVar38) + fVar45),
                            (double)(float)((double)fVar48 * dVar36),
                            (double)(float)((double)fVar2 * dVar36),(double)fVar48,(double)fVar2,
                            (double)(float)((double)fVar49 * dVar35),
                            (double)(float)((double)fVar49 * dVar24),dVar31,
                            (double)((float)uVar17 * fVar3 + fVar42),dVar34,uVar41,uVar10 - 0x130,
                            uVar10 - 0x120,
                            (int)((double)(float)((double)(float)(uVar14 | 0x3f800000) - dVar38) *
                                 dVar32) & 0xff);
          uVar17 = uVar17 + 1;
        } while (uVar17 < uStack_144);
      }
    }
    if ((dVar27 < (double)*(float *)(*(int *)(iVar11 + 8) + 100)) && (uVar17 = 0, uStack_14c != 0))
    {
      dVar32 = (double)lbl_8219581C;
      do {
        fStack_110 = (float)dVar33;
        fStack_10c = (float)dVar32;
        fStack_108 = (float)dVar33;
        puVar6 = (undefined4 *)(*(int *)(iVar11 + 4) + 0xa0U & 0xfffffff0);
        uVar41 = puVar6[1];
        uVar44 = puVar6[2];
        uVar47 = puVar6[3];
        fVar1 = *(float *)(*(int *)(iVar11 + 8) + 0x6c);
        fVar48 = -fVar1;
        iVar5 = (int)in_r0;
        puVar8 = (undefined4 *)((int)&fStack_130 + iVar5 & 0xfffffff0);
        *puVar8 = *puVar6;
        puVar8[1] = uVar41;
        puVar8[2] = uVar44;
        puVar8[3] = uVar47;
        uVar14 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        uVar13 = uVar14 * 0x19660d + 0x3c6ef35f;
        fStack_140 = (float)(uVar14 & 0x7fffff | 0x3f800000);
        dVar35 = (double)fStack_140;
        fVar2 = *(float *)(*(int *)(iVar11 + 8) + 0x6c);
        uVar14 = uVar13 * 0x19660d + 0x3c6ef35f;
        fStack_148 = (float)(uVar13 & 0x7fffff | 0x3f800000);
        fVar49 = -fVar2;
        uVar13 = uVar14 * 0x19660d + 0x3c6ef35f;
        fStack_140 = (float)(uVar14 & 0x7fffff | 0x3f800000);
        uVar14 = uVar13 * 0x19660d + 0x3c6ef35f;
        dVar36 = (double)fStack_148;
        fVar3 = *(float *)(*(int *)(iVar11 + 8) + 0x6c);
        fStack_148 = (float)(uVar13 & 0x7fffff | 0x3f800000);
        fVar42 = -fVar3;
        fStack_130 = (fVar1 - fVar48) * (float)(dVar35 - dVar38) + fVar48 + fStack_130;
        dVar35 = (double)fStack_140;
        uVar13 = uVar14 * 0x19660d + 0x3c6ef35f;
        fStack_140 = (float)(uVar14 & 0x7fffff | 0x3f800000);
        fStack_12c = (fVar2 - fVar49) * (float)(dVar36 - dVar38) + fVar49 + fStack_12c;
        fStack_150 = (float)(uVar13 & 0x7fffff | 0x3f800000);
        fStack_120 = (float)((double)(float)((double)fStack_148 - dVar38) * dVar37 - dVar38);
        fStack_128 = (fVar3 - fVar42) * (float)(dVar35 - dVar38) + fVar42 + fStack_128;
        lbl_83265A28 = uVar13 * 0x19660d + 0x3c6ef35f;
        fStack_11c = (float)((double)(float)((double)fStack_140 - dVar38) * dVar37 - dVar38);
        iVar4 = *(int *)(iVar11 + 8);
        fVar1 = *(float *)(iVar11 + 0x1c);
        fStack_118 = (float)((double)(float)((double)fStack_150 - dVar38) * dVar37 - dVar38);
        uVar41 = *(undefined4 *)(iVar11 + 0x3c);
        pfVar7 = (float *)((int)&fStack_120 + iVar5 & 0xfffffff0);
        fVar42 = pfVar7[1];
        fVar45 = pfVar7[2];
        fVar39 = pfVar7[3];
        fVar2 = *(float *)(iVar11 + 0x2c);
        loadVectorLeftIndexed128(in_r0,uVar10 - 0x140);
        fVar3 = *(float *)(iVar4 + 0x68);
        fVar48 = *(float *)(iVar4 + 0x74);
        fVar49 = *(float *)(iVar4 + 0x70);
        pfVar9 = (float *)((int)&fStack_120 + iVar5 & 0xfffffff0);
        *pfVar9 = *pfVar7 * in_register_000100d0;
        pfVar9[1] = fVar42 * in_register_000100d4;
        pfVar9[2] = fVar45 * in_register_000100d8;
        pfVar9[3] = fVar39 * in_vr13;
        fn_825D6CB0((double)fVar49,(double)fVar48,(double)(float)((double)fVar3 * dVar31),
                          (double)(float)((double)fVar3 * dVar29),dVar38,dVar33,
                          (double)((float)uVar17 * fVar2 + fVar1),dVar34,uVar41,uVar10 - 0x130,
                          uVar10 - 0x120,uVar10 - 0x110,uVar10 - 0x140);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uStack_14c);
    }
    if (dVar27 < (double)*(float *)(*(int *)(iVar11 + 8) + 0x88)) {
      uVar17 = 0;
      if (uStack_134 != 0) {
        do {
          fVar1 = (float)((double)*(float *)(*(int *)(iVar11 + 8) + 0x94) * dVar30);
          uVar14 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          uVar13 = uVar14 * 0x19660d + 0x3c6ef35f;
          fStack_140 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          fStack_148 = (float)(uVar13 & 0x7fffff | 0x3f800000);
          dVar32 = (double)(((float)((double)*(float *)(*(int *)(iVar11 + 8) + 0x98) * dVar30) -
                            fVar1) * (float)((double)fStack_140 - dVar38) + fVar1);
          fVar1 = *(float *)(*(int *)(iVar11 + 8) + 0xa4);
          lVar12 = (longlong)(int)uVar13 * 0x19660d + 0x3c6ef35f;
          dVar27 = (double)((*(float *)(*(int *)(iVar11 + 8) + 0xa8) - fVar1) *
                            (float)((double)fStack_148 - dVar38) + fVar1);
          if (lVar12 < 1) {
            dVar27 = -dVar27;
          }
          pfVar7 = (float *)(*(int *)(iVar11 + 4) + 0xa0U & 0xfffffff0);
          fVar45 = *pfVar7;
          fVar39 = pfVar7[1];
          fVar40 = pfVar7[2];
          fVar43 = pfVar7[3];
          fVar1 = *(float *)(*(int *)(iVar11 + 8) + 0x90);
          fVar48 = -fVar1;
          uVar13 = (int)lVar12 * 0x19660d + 0x3c6ef35f;
          iVar4 = (int)in_r0;
          pfVar7 = (float *)((int)&fStack_130 + iVar4 & 0xfffffff0);
          *pfVar7 = fVar45;
          pfVar7[1] = fVar39;
          pfVar7[2] = fVar40;
          pfVar7[3] = fVar43;
          uVar14 = uVar13 * 0x19660d + 0x3c6ef35f;
          fStack_140 = (float)(uVar13 & 0x7fffff | 0x3f800000);
          fVar2 = *(float *)(*(int *)(iVar11 + 8) + 0x90);
          fVar49 = -fVar2;
          uVar13 = uVar14 * 0x19660d + 0x3c6ef35f;
          fStack_148 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          dVar33 = (double)fStack_140;
          uVar14 = uVar13 * 0x19660d + 0x3c6ef35f;
          fStack_140 = (float)(uVar13 & 0x7fffff | 0x3f800000);
          dVar34 = (double)fStack_148;
          fVar3 = *(float *)(*(int *)(iVar11 + 8) + 0x90);
          fVar42 = -fVar3;
          uVar13 = uVar14 * 0x19660d + 0x3c6ef35f;
          fStack_130 = (fVar1 - fVar48) * (float)(dVar33 - dVar38) + fVar48 + fStack_130;
          fStack_148 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          dVar33 = (double)fStack_140;
          uVar14 = uVar13 * 0x19660d + 0x3c6ef35f;
          fStack_140 = (float)(uVar13 & 0x7fffff | 0x3f800000);
          fStack_12c = (fVar2 - fVar49) * (float)(dVar34 - dVar38) + fVar49 + fStack_12c;
          fStack_128 = (fVar3 - fVar42) * (float)(dVar33 - dVar38) + fVar42 + fStack_128;
          fStack_120 = (float)((double)(float)((double)fStack_148 - dVar38) * dVar37 - dVar38);
          dVar33 = (double)fStack_140;
          fStack_140 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          fStack_11c = (float)((double)(float)(dVar33 - dVar38) * dVar37 - dVar38);
          fStack_118 = (float)((double)(float)((double)fStack_140 - dVar38) * dVar37 - dVar38);
          dVar33 = (double)*(float *)(*(int *)(iVar11 + 8) + 0x8c);
          fVar1 = (float)(dVar33 * dVar31);
          lbl_83265A28 = (uVar14 * 0x19660d + 0x3c6ef35f) * 0x19660d + 0x3c6ef35f;
          uVar41 = *(undefined4 *)(iVar11 + 0x40);
          pfVar7 = (float *)((int)&fStack_120 + iVar4 & 0xfffffff0);
          fVar48 = pfVar7[1];
          fVar49 = pfVar7[2];
          fVar42 = pfVar7[3];
          loadVectorLeftIndexed128(in_r0,uVar10 - 0x140);
          fStack_140 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
          fVar2 = *(float *)(iVar11 + 0x30);
          fVar3 = *(float *)(iVar11 + 0x20);
          pfVar9 = (float *)((int)&fStack_120 + iVar4 & 0xfffffff0);
          *pfVar9 = *pfVar7 * fVar45;
          pfVar9[1] = fVar48 * fVar39;
          pfVar9[2] = fVar49 * fVar40;
          pfVar9[3] = fVar42 * fVar43;
          fn_825F1A58(dVar27,dVar32,dVar32,(double)((float)uVar17 * fVar2 + fVar3),
                        (double)(((float)(dVar33 * dVar29) - fVar1) *
                                 (float)((double)fStack_140 - dVar38) + fVar1),uVar41,uVar10 - 0x130
                        ,uVar10 - 0x120);
          uVar17 = uVar17 + 1;
        } while (uVar17 < uStack_134);
      }
    }
    *(float *)(iVar11 + 0x14) =
         *(float *)(iVar11 + 0x24) * (float)(uVar18 & 0xffffffff) + *(float *)(iVar11 + 0x14);
    *(float *)(iVar11 + 0x20) =
         *(float *)(iVar11 + 0x30) * (float)(uVar21 & 0xffffffff) + *(float *)(iVar11 + 0x20);
    *(float *)(iVar11 + 0x18) =
         *(float *)(iVar11 + 0x28) * (float)(uVar19 & 0xffffffff) + *(float *)(iVar11 + 0x18);
    *(float *)(iVar11 + 0x1c) =
         *(float *)(iVar11 + 0x2c) * (float)(uVar20 & 0xffffffff) + *(float *)(iVar11 + 0x1c);
  }
  *(float *)(iVar11 + 0x10) = (float)dVar28;
LAB_82616a04:
  fn_82F6A560();
  return;
}

