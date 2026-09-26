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
extern unsigned int *auStack_240;
extern unsigned int *auStack_280;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_300;
extern unsigned int *auStack_f4;
extern unsigned int fStack_120;
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82540EF0();
extern int fn_8254C938();
extern int fn_825C7348();
extern int fn_826231D8();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_82F68CC0();
extern unsigned int iStack_304;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_2c8;
extern unsigned int uStack_2cc;
extern unsigned int uStack_2d0;
extern unsigned int uStack_2d4;
extern unsigned int uStack_2d8;
extern unsigned int uStack_2dc;
extern unsigned int uStack_2e0;
extern unsigned int uStack_2e8;
extern unsigned int uStack_2ec;
extern unsigned int uStack_2f0;
extern unsigned int uStack_308;
extern unsigned int uStack_30c;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825EF090(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int in_r0;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar18 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 auVar19 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float in_register_00010070;
  float in_register_00010074;
  float in_register_00010078;
  float in_vr7;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  int *piStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  int iStack_304;
  undefined1 auStack_300 [16];
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined1 auStack_2c0 [64];
  undefined1 auStack_280 [64];
  undefined1 auStack_240 [288];
  float fStack_120;
  undefined1 auStack_f4 [244];
  
  iVar1 = *(int *)(param_1 + 4);
  iStack_304 = *(int *)(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 0x18);
  uVar3 = *(uint *)(iVar1 + 0xaf0);
  iVar15 = iStack_304 * 0x200 + iVar1;
  uStack_308 = *(undefined4 *)(iVar1 + 0xae4);
  puVar7 = (undefined4 *)((uint)(auStack_300 + in_r0) & 0xfffffff0);
  *puVar7 = in_register_000104b0;
  puVar7[1] = in_register_000104b4;
  puVar7[2] = in_register_000104b8;
  puVar7[3] = in_vr75;
  uStack_2e8 = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2ec = lbl_821CC160;
  uStack_2dc = lbl_821CC160;
  uStack_30c = 4;
  uStack_2e0 = 0xffffffff;
  uStack_2c8 = 0xffffffff;
  uStack_2f0 = 1;
  iVar1 = **(int **)((uVar3 % 3 + 9) * 4 + param_1);
  piStack_310 = piVar2;
  fn_82F68CC0(auStack_280,iVar15 + 0x50,0x40);
  fn_82F68CC0(auStack_2c0,iVar15 + 0x90,0x40);
  *piVar2 = iVar1;
  fn_82540870(*(undefined4 *)(param_1 + 0x18),auStack_280);
  fn_82540B48(*(undefined4 *)(param_1 + 0x18),auStack_2c0);
  fn_82540EF0((double)*(float *)(*(int *)(param_1 + 4) + 0xaec),
                    *(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xabb8) = *(undefined4 *)(param_1 + 0x10);
  iVar14 = *(int *)(param_1 + 0x10) * 0x280 + *(int *)(param_1 + 4);
  iVar15 = *(int *)(param_1 + 0x18);
  pfVar8 = (float *)(in_r0 + iVar14 + 0x4a0 & 0xfffffff0);
  pfVar9 = (float *)(iVar14 + 0x510U & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs44,in_vs45); memcpy(auVar17, &_vt0, 16); }
  pfVar10 = (float *)(iVar14 + 0x4b0U & 0xfffffff0);
  pfVar11 = (float *)(iVar14 + 0x4d0U & 0xfffffff0);{ V16 _vt1 = vectorMergeLowWord(in_vs44,in_vs45); memcpy(auVar22, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs38,in_vs40); memcpy(auVar20, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs38,in_vs40); memcpy(auVar18, &_vt3, 16); }{ V16 _vt4 = vectorMergeHighWord(auVar20,auVar17); memcpy(auVar16, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(auVar20,auVar17); memcpy(auVar21, &_vt5, 16); }
  vectorMergeHighWord(auVar18,auVar22);{ V16 _vt6 = vectorMergeLowWord(auVar18,auVar22); memcpy(auVar23, &_vt6, 16); }
  fVar4 = *pfVar8 * *pfVar9 + pfVar8[1] * pfVar9[1] + pfVar8[2] * pfVar9[2] + pfVar8[3] * pfVar9[3];
  fVar5 = *pfVar10 * in_register_00010070 + pfVar10[1] * in_register_00010074 +
          pfVar10[2] * in_register_00010078 + pfVar10[3] * in_vr7;
  fVar6 = *pfVar11 * *pfVar9 + pfVar11[1] * pfVar9[1] + pfVar11[2] * pfVar9[2] +
          pfVar11[3] * pfVar9[3];{ V16 _vt7 = vectorMergeHighWord(auVar18,in_vs36); memcpy(auVar18, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs37,in_vs32); memcpy(auVar17, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs35,in_vs33); memcpy(auVar20, &_vt9, 16); }
  vectorMergeHighWord(auVar18,auVar17);{ V16 _vt10 = vectorMergeHighWord(in_vs63,in_vs61); memcpy(auVar22, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(in_vs34,in_vs43); memcpy(auVar17, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(in_vs62,in_vs42); memcpy(auVar19, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(auVar21,auVar23); memcpy(auVar18, &_vt13, 16); }
  pfVar8 = (float *)(in_r0 + iVar15 + 0xaa20 & 0xfffffff0);
  *pfVar8 = fVar4;
  pfVar8[1] = fVar4;
  pfVar8[2] = fVar4;
  pfVar8[3] = fVar4;{ V16 _vt14 = vectorMergeHighWord(auVar17,auVar20); memcpy(auVar21, &_vt14, 16); }{ V16 _vt15 = vectorMergeHighWord(auVar16,in_vs41); memcpy(auVar16, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(auVar19,auVar22); memcpy(auVar17, &_vt16, 16); }{ V16 _vt17 = vectorMergeHighWord(auVar16,auVar18); memcpy(auVar24, &_vt17, 16); }
  pfVar8 = (float *)(iVar15 + 0xaa30U & 0xfffffff0);
  *pfVar8 = fVar5;
  pfVar8[1] = fVar5;
  pfVar8[2] = fVar5;
  pfVar8[3] = fVar5;
  pfVar8 = (float *)(iVar15 + 0xaa40U & 0xfffffff0);
  *pfVar8 = fVar4;
  pfVar8[1] = fVar4;
  pfVar8[2] = fVar4;
  pfVar8[3] = fVar4;
  pfVar8 = (float *)(iVar15 + 0xaa50U & 0xfffffff0);
  *pfVar8 = fVar6;
  pfVar8[1] = fVar6;
  pfVar8[2] = fVar6;
  pfVar8[3] = fVar6;
  iVar14 = *(int *)(param_1 + 0x10) * 0x280 + *(int *)(param_1 + 4);
  iVar15 = *(int *)(param_1 + 0x18);
  pfVar8 = (float *)(in_r0 + iVar14 + 0x5e0 & 0xfffffff0);
  pfVar9 = (float *)(iVar14 + 0x5f0U & 0xfffffff0);
  pfVar10 = (float *)(in_r0 + iVar14 + 0x620 & 0xfffffff0);
  pfVar11 = (float *)(iVar14 + 0x650U & 0xfffffff0);
  pfVar12 = (float *)(iVar14 + 0x600U & 0xfffffff0);{ V16 _vt18 = vectorMergeHighWord(auVar20,auVar22); memcpy(auVar18, &_vt18, 16); }{ V16 _vt19 = vectorMergeLowWord(auVar20,auVar22); memcpy(auVar22, &_vt19, 16); }{ V16 _vt20 = vectorMergeHighWord(auVar21,auVar16); memcpy(auVar20, &_vt20, 16); }{ V16 _vt21 = vectorMergeLowWord(auVar21,auVar16); memcpy(auVar23, &_vt21, 16); }{ V16 _vt22 = vectorMergeLowWord(auVar18,auVar20); memcpy(auVar21, &_vt22, 16); }{ V16 _vt23 = vectorMergeLowWord(auVar22,auVar23); memcpy(auVar16, &_vt23, 16); }
  vectorMergeHighWord(auVar18,auVar20);{ V16 _vt24 = vectorMergeHighWord(auVar22,auVar23); memcpy(auVar23, &_vt24, 16); }
  fVar4 = *pfVar8 * *pfVar11 + pfVar8[1] * pfVar11[1] + pfVar8[2] * pfVar11[2] +
          pfVar8[3] * pfVar11[3];
  fVar5 = *pfVar9 * *pfVar10 + pfVar9[1] * pfVar10[1] + pfVar9[2] * pfVar10[2] +
          pfVar9[3] * pfVar10[3];
  fVar6 = *pfVar12 * *pfVar10 + pfVar12[1] * pfVar10[1] + pfVar12[2] * pfVar10[2] +
          pfVar12[3] * pfVar10[3];{ V16 _vt25 = vectorMergeHighWord(in_vs36,auVar17); memcpy(auVar17, &_vt25, 16); }{ V16 _vt26 = vectorMergeHighWord(auVar22,auVar18); memcpy(auVar22, &_vt26, 16); }{ V16 _vt27 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar20, &_vt27, 16); }{ V16 _vt28 = vectorMergeHighWord(auVar24,in_vs33); memcpy(auVar24, &_vt28, 16); }{ V16 _vt29 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar18, &_vt29, 16); }
  vectorMergeHighWord(auVar17,auVar22);{ V16 _vt30 = vectorMergeHighWord(auVar19,in_vs61); memcpy(auVar17, &_vt30, 16); }{ V16 _vt31 = vectorMergeHighWord(auVar21,auVar16); memcpy(auVar16, &_vt31, 16); }
  vectorMergeHighWord(auVar24,auVar20);
  vectorMergeHighWord(auVar17,auVar18);
  pfVar8 = (float *)(in_r0 + iVar15 + 0xaa60 & 0xfffffff0);
  *pfVar8 = fVar4;
  pfVar8[1] = fVar4;
  pfVar8[2] = fVar4;
  pfVar8[3] = fVar4;
  pfVar8 = (float *)(iVar15 + 0xaa70U & 0xfffffff0);
  *pfVar8 = fVar5;
  pfVar8[1] = fVar5;
  pfVar8[2] = fVar5;
  pfVar8[3] = fVar5;{ V16 _vt32 = vectorMergeHighWord(in_vs41,auVar23); memcpy(auVar17, &_vt32, 16); }
  pfVar8 = (float *)(iVar15 + 0xaa80U & 0xfffffff0);
  *pfVar8 = fVar6;
  pfVar8[1] = fVar6;
  pfVar8[2] = fVar6;
  pfVar8[3] = fVar6;
  vectorMergeHighWord(auVar17,auVar16);
  pfVar8 = (float *)(iVar15 + 0xaa90U & 0xfffffff0);
  *pfVar8 = fVar4;
  pfVar8[1] = fVar4;
  pfVar8[2] = fVar4;
  pfVar8[3] = fVar4;
  iVar15 = *(int *)(param_1 + 4);
  if (*(char *)(iVar15 + 0xbdc) == '\0') {
    fn_825C7348(3);
    uVar13 = fn_825C7348(2);
    fn_82623298(*(undefined4 *)((*(uint *)(iVar15 + 0xaf0) % 3 + 9) * 4 + param_1),uVar13);
  }
  else {
    fn_825C7348(3);
    uVar13 = fn_825C7348(2);
    fn_826231D8(*(undefined4 *)((*(uint *)(iVar15 + 0xaf0) % 3 + 9) * 4 + param_1),uVar13);
  }
  fn_82540438(((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                    (ulonglong)*(uint *)(param_1 + 4) + 0x174,*(undefined4 *)(param_1 + 0x18),4);
  fn_82639EA8(iVar1,((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                          (ulonglong)*(uint *)(param_1 + 4) + 0x174);
  *(undefined4 *)(iVar1 + 0x2f14) = 1;
  *(uint *)(iVar1 + 0x2934) =
       (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) | 4;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xffffff8f | 0x60;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
  *(undefined4 *)(iVar1 + 0x2f04) = 7;
  *(uint *)(iVar1 + 0x28dc) =
       *(uint *)(iVar1 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 7;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
  fn_82F68CC0(auStack_240,
               ((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
               (ulonglong)*(uint *)(param_1 + 4) + 0x40,0x200,0x20800,0x20800);
  iVar15 = *(int *)(**(int **)(param_1 + 4) + 0x8c8);
  if (*(int *)(iVar15 + 200) != 0) {
    fn_8254C938((double)fStack_120,iVar15,*(undefined4 *)(param_1 + 0x18),&piStack_310,auStack_f4)
    ;
  }
  *(undefined4 *)(iVar1 + 0x2f04) = 0xf;
  *(uint *)(iVar1 + 0x28dc) =
       *(uint *)(iVar1 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 0xf;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
  fn_82623338(*(undefined4 *)
                     ((*(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1));
  return;
}

