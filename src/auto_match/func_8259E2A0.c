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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_825207D0();
extern int fn_82543C70();
extern int fn_8259E8C0();
extern int fn_826310E0();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637DE0();
extern int fn_82637E50();
extern int fn_82637EC0();
extern int fn_82639F78();
extern int fn_8263A120();
extern int fn_82640A98();
extern int fn_82A1DD38();
extern unsigned int lbl_82195B98;
extern unsigned int lbl_82196290;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_158;
extern unsigned int uStack_160;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


undefined8
fn_8259E2A0(int *param_1,int param_2,longlong param_3,int param_4,int param_5,int param_6,
             longlong param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int in_r0;
  int iVar14;
  undefined8 uVar13;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  double dVar25;
  undefined1 in_vs32 [16];
  undefined1 auVar26 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 auVar27 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar31 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar32 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float in_register_00010060;
  float in_register_00010064;
  float in_register_00010068;
  float in_vr6;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  int in_stack_00000054;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [160];
  
  if (((int)*(uint *)(param_8 + 0x48) < 0) ||
     (uVar2 = *(uint *)((int)((((ulonglong)*(uint *)(param_8 + 0x48) & 0x3fffffff) * 4 + param_7 +
                               0x2b1 & 0xffffffff) << 2) + param_1[1]), uVar2 == 0)) {
    uVar23 = (ulonglong)*(uint *)((int)((param_7 + 0x20U & 0xffffffff) << 2) + param_1[1]);
    if (in_stack_00000054 == 0) {
      lVar19 = uVar23 + 0xc;
    }
    else {
      lVar19 = uVar23 + 0x74;
    }
  }
  else {
    lVar19 = (ulonglong)uVar2 + 0xc;
  }
  pfVar7 = (float *)(in_r0 + param_5 & 0xfffffff0);
  pfVar8 = (float *)(in_r0 + param_4 & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar29, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar26, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs42,in_vs43); memcpy(auVar28, &_vt2, 16); }
  pfVar9 = (float *)(param_4 + 0x10U & 0xfffffff0);{ V16 _vt3 = vectorMergeLowWord(in_vs42,in_vs43); memcpy(auVar31, &_vt3, 16); }
  pfVar10 = (float *)(param_4 + 0x30U & 0xfffffff0);
  vectorMergeHighWord(auVar29,auVar28);{ V16 _vt4 = vectorMergeHighWord(auVar26,auVar31); memcpy(auVar27, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(auVar29,auVar28); memcpy(auVar30, &_vt5, 16); }{ V16 _vt6 = vectorMergeLowWord(auVar26,auVar31); memcpy(auVar26, &_vt6, 16); }
  fVar3 = *pfVar8 * in_register_00010060 + pfVar8[1] * in_register_00010064 +
          pfVar8[2] * in_register_00010068 + pfVar8[3] * in_vr6;
  fVar4 = *pfVar10 * *pfVar7 + pfVar10[1] * pfVar7[1] + pfVar10[2] * pfVar7[2] +
          pfVar10[3] * pfVar7[3];
  fVar5 = *pfVar9 * in_register_00010060 + pfVar9[1] * in_register_00010064 +
          pfVar9[2] * in_register_00010068 + pfVar9[3] * in_vr6;
  fVar6 = *pfVar10 * in_register_00010060 + pfVar10[1] * in_register_00010064 +
          pfVar10[2] * in_register_00010068 + pfVar10[3] * in_vr6;{ V16 _vt7 = vectorMergeHighWord(auVar31,auVar28); memcpy(auVar28, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs36,in_vs45); memcpy(auVar29, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(auVar28,auVar29); memcpy(auVar32, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar31, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar29, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(in_vs39,in_vs61); memcpy(auVar28, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(auVar30,auVar26); memcpy(auVar26, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(in_vs44,in_vs33); memcpy(auVar30, &_vt14, 16); }{ V16 _vt15 = vectorMergeHighWord(in_vs42,auVar27); memcpy(auVar27, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(auVar28,auVar31); memcpy(auVar28, &_vt16, 16); }{ V16 _vt17 = vectorMergeHighWord(auVar30,auVar29); memcpy(auVar29, &_vt17, 16); }{ V16 _vt18 = vectorMergeHighWord(auVar27,auVar26); memcpy(auVar26, &_vt18, 16); }{ V16 _vt19 = vectorMergeHighWord(auVar32,auVar28); memcpy(auVar27, &_vt19, 16); }{ V16 _vt20 = vectorMergeLowWord(auVar32,auVar28); memcpy(auVar31, &_vt20, 16); }{ V16 _vt21 = vectorMergeHighWord(auVar29,auVar26); memcpy(auVar28, &_vt21, 16); }{ V16 _vt22 = vectorMergeLowWord(auVar29,auVar26); memcpy(auVar26, &_vt22, 16); }{ V16 _vt23 = vectorMergeHighWord(auVar27,auVar28); memcpy(auVar30, &_vt23, 16); }{ V16 _vt24 = vectorMergeLowWord(auVar27,auVar28); memcpy(auVar29, &_vt24, 16); }
  vectorMergeHighWord(auVar31,auVar26);{ V16 _vt25 = vectorMergeLowWord(auVar31,auVar26); memcpy(auVar26, &_vt25, 16); }
  pfVar7 = (float *)((uint)(auStack_150 + in_r0) & 0xfffffff0);
  *pfVar7 = fVar5;
  pfVar7[1] = fVar5;
  pfVar7[2] = fVar5;
  pfVar7[3] = fVar5;
  pfVar7 = (float *)((uint)(auStack_140 + in_r0) & 0xfffffff0);
  *pfVar7 = fVar3;
  pfVar7[1] = fVar3;
  pfVar7[2] = fVar3;
  pfVar7[3] = fVar3;
  pfVar7 = (float *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
  *pfVar7 = fVar6;
  pfVar7[1] = fVar6;
  pfVar7[2] = fVar6;
  pfVar7[3] = fVar6;
  pfVar7 = (float *)((uint)(auStack_120 + in_r0) & 0xfffffff0);
  *pfVar7 = fVar4;
  pfVar7[1] = fVar4;
  pfVar7[2] = fVar4;
  pfVar7[3] = fVar4;
  piVar15 = (int *)param_3;
  iVar1 = *piVar15;
  puVar11 = (undefined4 *)(param_6 + 0x20U & 0xfffffff0);
  uVar33 = *puVar11;
  uVar34 = puVar11[1];
  uVar35 = puVar11[2];
  uVar36 = puVar11[3];
  puVar11 = (undefined4 *)(param_6 + 0x30U & 0xfffffff0);
  uVar41 = puVar11[1];
  uVar42 = puVar11[2];
  uVar43 = puVar11[3];
  puVar12 = (undefined4 *)(param_6 + 0x10U & 0xfffffff0);
  uVar37 = *puVar12;
  uVar38 = puVar12[1];
  uVar39 = puVar12[2];
  uVar40 = puVar12[3];{ V16 _vt26 = vectorMergeHighWord(auVar29,auVar30); memcpy(auVar28, &_vt26, 16); }{ V16 _vt27 = vectorMergeHighWord(auVar31,auVar26); memcpy(auVar27, &_vt27, 16); }{ V16 _vt28 = vectorMergeLowWord(auVar31,auVar26); memcpy(auVar26, &_vt28, 16); }{ V16 _vt29 = vectorMergeLowWord(auVar29,auVar30); memcpy(auVar31, &_vt29, 16); }{ V16 _vt30 = vectorMergeHighWord(auVar27,auVar28); memcpy(auVar30, &_vt30, 16); }{ V16 _vt31 = vectorMergeLowWord(auVar27,auVar28); memcpy(auVar29, &_vt31, 16); }
  vectorMergeHighWord(auVar26,auVar31);{ V16 _vt32 = vectorMergeLowWord(auVar26,auVar31); memcpy(auVar26, &_vt32, 16); }
  puVar12 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
  *puVar12 = *puVar11;
  puVar12[1] = uVar41;
  puVar12[2] = uVar42;
  puVar12[3] = uVar43;
  puVar11 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar11 = uVar37;
  puVar11[1] = uVar38;
  puVar11[2] = uVar39;
  puVar11[3] = uVar40;
  pfVar7 = (float *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
  *pfVar7 = fVar6;
  pfVar7[1] = fVar6;
  pfVar7[2] = fVar6;
  pfVar7[3] = fVar6;
  puVar11 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
  *puVar11 = uVar33;
  puVar11[1] = uVar34;
  puVar11[2] = uVar35;
  puVar11[3] = uVar36;
  puVar11 = (undefined4 *)(param_4 + 0x30U & 0xfffffff0);
  uVar41 = puVar11[1];
  uVar42 = puVar11[2];
  uVar43 = puVar11[3];
  puVar12 = (undefined4 *)(param_4 + 0x10U & 0xfffffff0);
  uVar37 = *puVar12;
  uVar38 = puVar12[1];
  uVar39 = puVar12[2];
  uVar40 = puVar12[3];
  puVar12 = (undefined4 *)(param_4 + 0x20U & 0xfffffff0);
  uVar33 = *puVar12;
  uVar34 = puVar12[1];
  uVar35 = puVar12[2];
  uVar36 = puVar12[3];{ V16 _vt33 = vectorMergeHighWord(auVar31,auVar26); memcpy(auVar27, &_vt33, 16); }{ V16 _vt34 = vectorMergeHighWord(auVar29,auVar30); memcpy(auVar28, &_vt34, 16); }{ V16 _vt35 = vectorMergeLowWord(auVar31,auVar26); memcpy(auVar26, &_vt35, 16); }{ V16 _vt36 = vectorMergeLowWord(auVar29,auVar30); memcpy(auVar29, &_vt36, 16); }
  vectorMergeHighWord(auVar27,auVar28);
  vectorMergeLowWord(auVar27,auVar28);
  vectorMergeHighWord(auVar26,auVar29);
  vectorMergeLowWord(auVar26,auVar29);
  puVar12 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
  *puVar12 = *puVar11;
  puVar12[1] = uVar41;
  puVar12[2] = uVar42;
  puVar12[3] = uVar43;
  puVar11 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar11 = uVar37;
  puVar11[1] = uVar38;
  puVar11[2] = uVar39;
  puVar11[3] = uVar40;
  pfVar7 = (float *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
  *pfVar7 = fVar6;
  pfVar7[1] = fVar6;
  pfVar7[2] = fVar6;
  pfVar7[3] = fVar6;
  puVar11 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar11 = uVar33;
  puVar11[1] = uVar34;
  puVar11[2] = uVar35;
  puVar11[3] = uVar36;
  iVar14 = fn_825207D0(param_3 + 0x8d00,auStack_150,0x40);
  if (iVar14 != 0) {
    fn_82A1DD38(param_3 + 0x8d00,auStack_150);
    fn_826310E0(*piVar15,0xca,auStack_150,4,0x3000);
  }
  lVar16 = param_3 + 0x8d40;
  iVar14 = fn_825207D0(lVar16,auStack_110,0x40);
  if (iVar14 != 0) {
    fn_82A1DD38(lVar16,auStack_110);
    fn_826310E0(*piVar15,0xce,auStack_110,4,0x1800);
  }
  lVar16 = param_3 + 0x8d80;
  iVar14 = fn_825207D0(lVar16,auStack_d0,0x40);
  if (iVar14 != 0) {
    fn_82A1DD38(lVar16,auStack_d0);
    fn_826310E0(*piVar15,0xd2,auStack_d0,4,0xc00);
  }
  if (*(int *)(param_1[1] + 0x60) == 0) {
    puVar18 = &lbl_82196290;
  }
  else {
    puVar18 = (undefined8 *)(param_1[1] + 0x20);
  }
  uStack_160 = *puVar18;
  uStack_158 = puVar18[1];
  dVar25 = (double)(**(code **)(*(int *)param_1[1] + 0x80))
                             ((int *)param_1[1],*(undefined4 *)(param_8 + 0xc));
  if (dVar25 < (double)lbl_821CA460) {
    uStack_158 = CONCAT44((((U64)(uStack_158) >> 0) & 0xFFFFFFFF),(float)dVar25);
  }
  iVar14 = (**(code **)(*param_1 + 8))(param_1);
  if (iVar14 == 0) {
    if (*(int *)(param_8 + 4) == 4) {
      *(undefined4 *)(iVar1 + 0x2f04) = 0xf;
      *(uint *)(iVar1 + 0x28dc) =
           -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 0xf | *(uint *)(iVar1 + 0x28dc) & 0xfffffff0;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
      fn_82637B30(iVar1,1);
      fn_82637EC0();
      uVar13 = fn_82637C50();
      fn_82637CE0(uVar13,0);
      fn_82637DE0();
      fn_82637E50();
      goto LAB_8259e6d4;
    }
    *(undefined4 *)(iVar1 + 0x2f04) = 7;
    *(uint *)(iVar1 + 0x28dc) =
         *(uint *)(iVar1 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 7;
  }
  else {
    *(undefined4 *)(iVar1 + 0x2f04) = 0xf;
    *(uint *)(iVar1 + 0x28dc) =
         -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 0xf | *(uint *)(iVar1 + 0x28dc) & 0xfffffff0;
  }
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
LAB_8259e6d4:
  fn_82543C70(param_3,200,&uStack_160,1);
  uStack_170 = lbl_82195B98;
  uStack_16c = lbl_82195B98;
  uStack_168 = 0;
  fn_82543C70(param_3,199,&uStack_170,1);
  uVar2 = param_1[1];
  uVar23 = 0;
  iVar14 = *(int *)(uVar2 + 0xa18);
  if (*(int *)(iVar14 + 8) != 0) {
    iVar21 = 0;
    lVar16 = 0x1f60;
    do {
      iVar14 = *(int *)(iVar14 + 0x10) + iVar21;
      if (*(int *)(iVar14 + 0x10) == 0) {
        return 0;
      }
      uVar20 = 0;
      if (*(int *)(iVar14 + 0x14) != 0) {
        iVar22 = 0;
        do {
          iVar24 = *(int *)(iVar14 + 0x2c) + iVar22;
          if (*(int *)(*(int *)(iVar14 + 0x2c) + iVar22) == param_2) {
            if ((int)*(uint *)(param_8 + 0x48) < 0) {
              lVar17 = (ulonglong)(uint)param_1[1] + 0x18e0;
            }
            else {
              lVar17 = (ulonglong)*(uint *)(param_8 + 0x48) * 0x14 + (ulonglong)(uint)param_1[1] +
                       0x18f4;
            }
            fn_8259E8C0(param_1,param_3,uVar23,iVar24,*(undefined4 *)(iVar14 + 0x30),lVar17);
            fn_82639F78(iVar1,0,(ulonglong)uVar2 + lVar16 + -0x1a0,
                              (ulonglong)*(uint *)(iVar24 + 0x1f8) -
                              (ulonglong)*(uint *)(iVar14 + 0x24),*(undefined4 *)(iVar24 + 0x1f0),1)
            ;
            fn_82639F78(iVar1,1,lVar19,0,0x40,1);
            fn_8263A120(iVar1,(ulonglong)uVar2 + lVar16);
            fn_82640A98(iVar1,4,0,*(int *)(iVar24 + 0x1fc) - *(int *)(iVar14 + 0x28) >> 1,
                              (ulonglong)*(uint *)(iVar24 + 0x1e4) * 3);
          }
          uVar20 = uVar20 + 1;
          iVar22 = iVar22 + 0x200;
        } while (uVar20 < *(uint *)(iVar14 + 0x14));
      }
      uVar2 = param_1[1];
      uVar23 = uVar23 + 1;
      lVar16 = lVar16 + 0x20;
      iVar21 = iVar21 + 0x34;
      iVar14 = *(int *)(uVar2 + 0xa18);
    } while ((uVar23 & 0xffffffff) < (ulonglong)*(uint *)(iVar14 + 8));
  }
  *(undefined4 *)(iVar1 + 0x2f04) = 0xf;
  *(uint *)(iVar1 + 0x28dc) =
       *(uint *)(iVar1 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 0xf;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
  if (*(int *)(param_8 + 4) == 4) {
    fn_82637B30(iVar1,0);
    fn_82637EC0();
  }
  return 0;
}

