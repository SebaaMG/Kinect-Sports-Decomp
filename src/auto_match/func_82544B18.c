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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_826310E0();
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82544B18(undefined8 param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int in_r0;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 in_vs32 [16];
  undefined1 auVar6 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs38 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar9 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar12 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar13 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_vs60 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float in_register_00010060;
  float in_register_00010064;
  float in_register_00010068;
  float in_vr6;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float in_register_000100a0;
  float in_register_000100a4;
  float in_register_000100a8;
  float fVar24;
  float in_vr10;
  float fVar25;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  if (param_2 == 0) {
    puVar5 = &lbl_83296890;
    puVar4 = (undefined8 *)(&lbl_83296BE0 + param_3 * 0x2c);
    if ((&lbl_83296C80)[param_3 * 0x2c] == 0) {
      puVar4 = &lbl_832968D0;
    }
    pfVar1 = (float *)(in_r0 + (int)puVar4 & 0xfffffff0);
    fVar16 = *pfVar1;
    fVar17 = pfVar1[1];
    fVar18 = pfVar1[2];
    fVar19 = pfVar1[3];
    if ((&lbl_83296C80)[param_3 * 0x2c] != 0) {
      puVar5 = &lbl_83296C20 + param_3 * 0x16;
    }{ V16 _vt0 = vectorMergeHighWord(in_vs45,in_vs43); memcpy(auVar9, &_vt0, 16); }
    pfVar1 = (float *)(in_r0 + (int)puVar5 & 0xfffffff0);{ V16 _vt1 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar10, &_vt1, 16); }{ V16 _vt2 = vectorMergeLowWord(in_vs45,in_vs43); memcpy(auVar13, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar6, &_vt3, 16); }
    vectorMergeHighWord(auVar10,auVar9);{ V16 _vt4 = vectorMergeLowWord(auVar10,auVar9); memcpy(auVar11, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar6,auVar13); memcpy(auVar10, &_vt5, 16); }
    vectorMergeLowWord(auVar6,auVar13);
    fVar21 = *pfVar1 * in_register_00010060 + pfVar1[1] * in_register_00010064 +
             pfVar1[2] * in_register_00010068 + pfVar1[3] * in_vr6;
    fVar24 = *(float *)(puVar5 + 6) * in_register_000100a0 +
             *(float *)((int)puVar5 + 0x34) * in_register_000100a4 +
             *(float *)(puVar5 + 7) * in_register_000100a8 +
             *(float *)((int)puVar5 + 0x3c) * in_vr10;
    fVar25 = *(float *)(puVar5 + 4) * in_register_00010060 +
             *(float *)((int)puVar5 + 0x24) * in_register_00010064 +
             *(float *)(puVar5 + 5) * in_register_00010068 + *(float *)((int)puVar5 + 0x2c) * in_vr6
    ;
    fVar20 = *(float *)(puVar5 + 6) * in_register_00010060 +
             *(float *)((int)puVar5 + 0x34) * in_register_00010064 +
             *(float *)(puVar5 + 7) * in_register_00010068 + *(float *)((int)puVar5 + 0x3c) * in_vr6
    ;{ V16 _vt6 = vectorMergeHighWord(auVar13,in_vs36); memcpy(auVar6, &_vt6, 16); }{ V16 _vt7 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar9, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs37,in_vs41); memcpy(auVar15, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar13, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(auVar11,in_vs60); memcpy(auVar11, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(in_vs44,in_vs61); memcpy(auVar12, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(in_vs43,auVar10); memcpy(auVar14, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs39,in_vs33); memcpy(auVar10, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(auVar6,auVar15); memcpy(auVar6, &_vt14, 16); }{ V16 _vt15 = vectorMergeHighWord(auVar12,auVar9); memcpy(auVar12, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(auVar14,auVar11); memcpy(auVar9, &_vt16, 16); }{ V16 _vt17 = vectorMergeHighWord(auVar10,auVar13); memcpy(auVar10, &_vt17, 16); }
    pfVar1 = (float *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *pfVar1 = fVar16;
    pfVar1[1] = fVar17;
    pfVar1[2] = fVar18;
    pfVar1[3] = fVar19;
    pfVar1 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *pfVar1 = fVar25;
    pfVar1[1] = fVar25;
    pfVar1[2] = fVar25;
    pfVar1[3] = fVar25;
    pfVar1 = (float *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
    *pfVar1 = fVar20;
    pfVar1[1] = fVar20;
    pfVar1[2] = fVar20;
    pfVar1[3] = fVar20;
    pfVar1 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *pfVar1 = fVar21;
    pfVar1[1] = fVar21;
    pfVar1[2] = fVar21;
    pfVar1[3] = fVar21;
  }
  else {
    puVar5 = &lbl_83296890;
    if ((&lbl_83296C80)[param_3 * 0x2c] != 0) {
      puVar5 = &lbl_83296C20 + param_3 * 0x16;
    }
    pfVar1 = (float *)(in_r0 + (int)puVar5 & 0xfffffff0);
    pfVar2 = (float *)(in_r0 + param_2 & 0xfffffff0);
    puVar4 = (undefined8 *)(&lbl_83296BE0 + param_3 * 0x2c);{ V16 _vt18 = vectorMergeHighWord(in_vs32,in_vs43); memcpy(auVar10, &_vt18, 16); }{ V16 _vt19 = vectorMergeHighWord(in_vs44,in_vs42); memcpy(auVar9, &_vt19, 16); }{ V16 _vt20 = vectorMergeLowWord(in_vs32,in_vs43); memcpy(auVar6, &_vt20, 16); }
    pfVar3 = (float *)(param_2 + 0x30U & 0xfffffff0);{ V16 _vt21 = vectorMergeLowWord(in_vs44,in_vs42); memcpy(auVar13, &_vt21, 16); }
    vectorMergeHighWord(auVar10,auVar9);{ V16 _vt22 = vectorMergeLowWord(auVar10,auVar9); memcpy(auVar11, &_vt22, 16); }{ V16 _vt23 = vectorMergeHighWord(auVar6,auVar13); memcpy(auVar10, &_vt23, 16); }
    vectorMergeLowWord(auVar6,auVar13);
    fVar18 = *pfVar2 * *(float *)(puVar5 + 6) + pfVar2[1] * *(float *)((int)puVar5 + 0x34) +
             pfVar2[2] * *(float *)(puVar5 + 7) + pfVar2[3] * *(float *)((int)puVar5 + 0x3c);
    fVar17 = *pfVar2 * *pfVar1 + pfVar2[1] * pfVar1[1] + pfVar2[2] * pfVar1[2] +
             pfVar2[3] * pfVar1[3];
    fVar16 = *pfVar3 * *(float *)(puVar5 + 6) + pfVar3[1] * *(float *)((int)puVar5 + 0x34) +
             pfVar3[2] * *(float *)(puVar5 + 7) + pfVar3[3] * *(float *)((int)puVar5 + 0x3c);{ V16 _vt24 = vectorMergeHighWord(auVar13,in_vs36); memcpy(auVar6, &_vt24, 16); }{ V16 _vt25 = vectorMergeHighWord(in_vs37,in_vs45); memcpy(auVar14, &_vt25, 16); }{ V16 _vt26 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar13, &_vt26, 16); }{ V16 _vt27 = vectorMergeHighWord(in_vs40,in_vs33); memcpy(auVar9, &_vt27, 16); }{ V16 _vt28 = vectorMergeHighWord(auVar6,auVar14); memcpy(auVar6, &_vt28, 16); }{ V16 _vt29 = vectorMergeHighWord(auVar9,auVar13); memcpy(auVar15, &_vt29, 16); }{ V16 _vt30 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar13, &_vt30, 16); }{ V16 _vt31 = vectorMergeHighWord(auVar11,in_vs60); memcpy(auVar14, &_vt31, 16); }{ V16 _vt32 = vectorMergeHighWord(in_vs43,auVar10); memcpy(auVar12, &_vt32, 16); }{ V16 _vt33 = vectorMergeHighWord(in_vs38,in_vs61); memcpy(auVar9, &_vt33, 16); }{ V16 _vt34 = vectorMergeHighWord(auVar12,auVar14); memcpy(auVar12, &_vt34, 16); }{ V16 _vt35 = vectorMergeHighWord(auVar9,auVar13); memcpy(auVar9, &_vt35, 16); }
    if ((&lbl_83296C80)[param_3 * 0x2c] == 0) {
      puVar4 = &lbl_832968D0;
    }
    fVar20 = *(float *)(puVar4 + 4);
    fVar21 = *(float *)((int)puVar4 + 0x24);
    fVar22 = *(float *)(puVar4 + 5);
    fVar23 = *(float *)((int)puVar4 + 0x2c);
    pfVar2 = (float *)(in_r0 + (int)puVar4 & 0xfffffff0);{ V16 _vt36 = vectorMergeHighWord(auVar14,auVar13); memcpy(auVar8, &_vt36, 16); }{ V16 _vt37 = vectorMergeHighWord(auVar11,auVar10); memcpy(auVar7, &_vt37, 16); }{ V16 _vt38 = vectorMergeLowWord(auVar11,auVar10); memcpy(auVar11, &_vt38, 16); }{ V16 _vt39 = vectorMergeLowWord(auVar14,auVar13); memcpy(auVar14, &_vt39, 16); }
    vectorMergeHighWord(auVar8,auVar7);{ V16 _vt40 = vectorMergeLowWord(auVar8,auVar7); memcpy(auVar13, &_vt40, 16); }{ V16 _vt41 = vectorMergeHighWord(auVar14,auVar11); memcpy(auVar10, &_vt41, 16); }{ V16 _vt42 = vectorMergeLowWord(auVar14,auVar11); memcpy(auVar8, &_vt42, 16); }
    fVar19 = *pfVar1 * *pfVar2 + pfVar1[1] * pfVar2[1] + pfVar1[2] * pfVar2[2] +
             pfVar1[3] * pfVar2[3];
    fVar24 = fVar16 * *pfVar2 + fVar16 * pfVar2[1] + fVar16 * pfVar2[2] + fVar16 * pfVar2[3];
    fVar17 = fVar17 * fVar20 + fVar17 * fVar21 + fVar17 * fVar22 + fVar17 * fVar23;
    fVar25 = fVar18 * fVar20 + fVar18 * fVar21 + fVar18 * fVar22 + fVar18 * fVar23;
    fVar20 = fVar16 * fVar20 + fVar16 * fVar21 + fVar16 * fVar22 + fVar16 * fVar23;{ V16 _vt43 = vectorMergeHighWord(auVar11,in_vs36); memcpy(auVar14, &_vt43, 16); }{ V16 _vt44 = vectorMergeHighWord(auVar7,auVar6); memcpy(auVar6, &_vt44, 16); }{ V16 _vt45 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar11, &_vt45, 16); }{ V16 _vt46 = vectorMergeHighWord(auVar14,auVar6); memcpy(auVar6, &_vt46, 16); }{ V16 _vt47 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar14, &_vt47, 16); }{ V16 _vt48 = vectorMergeHighWord(auVar13,auVar8); memcpy(auVar13, &_vt48, 16); }{ V16 _vt49 = vectorMergeHighWord(auVar15,in_vs33); memcpy(auVar7, &_vt49, 16); }{ V16 _vt50 = vectorMergeHighWord(auVar9,in_vs61); memcpy(auVar15, &_vt50, 16); }
    pfVar1 = (float *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *pfVar1 = fVar19;
    pfVar1[1] = fVar19;
    pfVar1[2] = fVar19;
    pfVar1[3] = fVar19;{ V16 _vt51 = vectorMergeHighWord(auVar12,auVar10); memcpy(auVar9, &_vt51, 16); }{ V16 _vt52 = vectorMergeHighWord(auVar7,auVar11); memcpy(auVar10, &_vt52, 16); }{ V16 _vt53 = vectorMergeHighWord(auVar15,auVar14); memcpy(auVar12, &_vt53, 16); }{ V16 _vt54 = vectorMergeHighWord(auVar9,auVar13); memcpy(auVar9, &_vt54, 16); }
    pfVar1 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *pfVar1 = fVar17;
    pfVar1[1] = fVar17;
    pfVar1[2] = fVar17;
    pfVar1[3] = fVar17;
    pfVar1 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *pfVar1 = fVar25;
    pfVar1[1] = fVar25;
    pfVar1[2] = fVar25;
    pfVar1[3] = fVar25;
    pfVar1 = (float *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
    *pfVar1 = fVar20;
    pfVar1[1] = fVar20;
    pfVar1[2] = fVar20;
    pfVar1[3] = fVar20;
    fVar18 = fVar19;
    fVar17 = fVar19;
    fVar16 = fVar19;
  }{ V16 _vt55 = vectorMergeHighWord(auVar6,auVar12); memcpy(auVar11, &_vt55, 16); }{ V16 _vt56 = vectorMergeHighWord(auVar10,auVar9); memcpy(auVar13, &_vt56, 16); }{ V16 _vt57 = vectorMergeLowWord(auVar6,auVar12); memcpy(auVar6, &_vt57, 16); }{ V16 _vt58 = vectorMergeLowWord(auVar10,auVar9); memcpy(auVar9, &_vt58, 16); }
  vectorMergeHighWord(auVar11,auVar13);
  vectorMergeLowWord(auVar11,auVar13);
  vectorMergeHighWord(auVar6,auVar9);
  vectorMergeLowWord(auVar6,auVar9);
  pfVar1 = (float *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *pfVar1 = fVar25;
  pfVar1[1] = fVar25;
  pfVar1[2] = fVar25;
  pfVar1[3] = fVar25;
  pfVar1 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *pfVar1 = fVar20;
  pfVar1[1] = fVar20;
  pfVar1[2] = fVar20;
  pfVar1[3] = fVar20;
  pfVar1 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *pfVar1 = fVar24;
  pfVar1[1] = fVar24;
  pfVar1[2] = fVar24;
  pfVar1[3] = fVar24;
  pfVar1 = (float *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *pfVar1 = fVar16;
  pfVar1[1] = fVar17;
  pfVar1[2] = fVar18;
  pfVar1[3] = fVar19;
  fn_826310E0(param_1,0,auStack_50,4,0x8000000000000000);
  return;
}

