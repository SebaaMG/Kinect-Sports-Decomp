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
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82540FA0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 auVar9 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 auVar10 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_vs42 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar16 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar17 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_vs57 [16];
  undefined1 in_vs59 [16];
  undefined1 in_vs60 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float in_register_00010030;
  float in_register_00010034;
  float in_register_00010038;
  float in_vr3;
  float in_register_00010060;
  float in_register_00010064;
  float in_register_00010068;
  float in_vr6;
  float fVar24;
  float in_register_000100a0;
  float in_register_000100a4;
  float in_register_000100a8;
  float fVar25;
  float in_vr10;
  float fVar26;
  float fVar27;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  
  if (param_2 == 0) {
    pfVar3 = (float *)((int)param_1 + in_r0 + 0xa900 & 0xfffffff0);
    fVar20 = *pfVar3;
    fVar21 = pfVar3[1];
    fVar22 = pfVar3[2];
    fVar23 = pfVar3[3];{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar9, &_vt1, 16); }
    pfVar3 = (float *)((uint)(param_1 + 0x2a2c) & 0xfffffff0);{ V16 _vt2 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar18, &_vt2, 16); }
    pfVar4 = (float *)((uint)(param_1 + 0x2a28) & 0xfffffff0);{ V16 _vt3 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar12, &_vt3, 16); }
    pfVar5 = (float *)((int)param_1 + in_r0 + 0xa880 & 0xfffffff0);
    vectorMergeHighWord(auVar8,auVar9);{ V16 _vt4 = vectorMergeLowWord(auVar8,auVar9); memcpy(auVar11, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar12,auVar18); memcpy(auVar8, &_vt5, 16); }
    vectorMergeLowWord(auVar12,auVar18);
    fVar27 = *pfVar5 * in_register_00010060 + pfVar5[1] * in_register_00010064 +
             pfVar5[2] * in_register_00010068 + pfVar5[3] * in_vr6;
    fVar2 = *pfVar5 * fVar20 + pfVar5[1] * fVar21 + pfVar5[2] * fVar22 + pfVar5[3] * fVar23;
    fVar26 = *pfVar4 * in_register_00010060 + pfVar4[1] * in_register_00010064 +
             pfVar4[2] * in_register_00010068 + pfVar4[3] * in_vr6;
    fVar25 = *pfVar3 * in_register_000100a0 + pfVar3[1] * in_register_000100a4 +
             pfVar3[2] * in_register_000100a8 + pfVar3[3] * in_vr10;{ V16 _vt6 = vectorMergeHighWord(auVar18,auVar9); memcpy(auVar12, &_vt6, 16); }{ V16 _vt7 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar10, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs36,in_vs45); memcpy(auVar9, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs40,in_vs33); memcpy(auVar18, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(auVar12,auVar9); memcpy(auVar12, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar9, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(auVar18,auVar10); memcpy(auVar14, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs43,in_vs61); memcpy(auVar10, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(auVar11,in_vs60); memcpy(auVar18, &_vt14, 16); }{ V16 _vt15 = vectorMergeHighWord(in_vs39,auVar8); memcpy(auVar8, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(auVar10,auVar9); memcpy(auVar9, &_vt16, 16); }
    pfVar3 = (float *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *pfVar3 = fVar20;
    pfVar3[1] = fVar21;
    pfVar3[2] = fVar22;
    pfVar3[3] = fVar23;
    pfVar3 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *pfVar3 = fVar2;
    pfVar3[1] = fVar2;
    pfVar3[2] = fVar2;
    pfVar3[3] = fVar2;{ V16 _vt17 = vectorMergeHighWord(auVar8,auVar18); memcpy(auVar8, &_vt17, 16); }
    pfVar3 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *pfVar3 = fVar27;
    pfVar3[1] = fVar27;
    pfVar3[2] = fVar27;
    pfVar3[3] = fVar27;
    pfVar3 = (float *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
    *pfVar3 = fVar26;
    pfVar3[1] = fVar26;
    pfVar3[2] = fVar26;
    pfVar3[3] = fVar26;
  }
  else {
    pfVar3 = (float *)(in_r0 + param_2 & 0xfffffff0);
    pfVar4 = (float *)(param_2 + 0x30U & 0xfffffff0);
    pfVar5 = (float *)((int)param_1 + in_r0 + 0xa880 & 0xfffffff0);{ V16 _vt18 = vectorMergeHighWord(in_vs45,in_vs44); memcpy(auVar12, &_vt18, 16); }
    pfVar6 = (float *)((uint)(param_1 + 0x2a48) & 0xfffffff0);
    fVar22 = *pfVar6;
    fVar21 = pfVar6[1];
    fVar20 = pfVar6[2];
    fVar24 = pfVar6[3];{ V16 _vt19 = vectorMergeHighWord(in_vs42,in_vs43); memcpy(auVar11, &_vt19, 16); }{ V16 _vt20 = vectorMergeLowWord(in_vs45,in_vs44); memcpy(auVar18, &_vt20, 16); }{ V16 _vt21 = vectorMergeLowWord(in_vs42,in_vs43); memcpy(auVar16, &_vt21, 16); }
    pfVar6 = (float *)((int)param_1 + in_r0 + 0xa900 & 0xfffffff0);
    pfVar7 = (float *)(param_2 + 0x10U & 0xfffffff0);{ V16 _vt22 = vectorMergeHighWord(auVar12,auVar11); memcpy(auVar9, &_vt22, 16); }{ V16 _vt23 = vectorMergeLowWord(auVar12,auVar11); memcpy(auVar13, &_vt23, 16); }{ V16 _vt24 = vectorMergeHighWord(auVar18,auVar16); memcpy(auVar8, &_vt24, 16); }{ V16 _vt25 = vectorMergeLowWord(auVar18,auVar16); memcpy(auVar19, &_vt25, 16); }{ V16 _vt26 = vectorMergeHighWord(in_vs42,in_vs39); memcpy(auVar18, &_vt26, 16); }
    fVar26 = *pfVar3 * in_register_00010030 + pfVar3[1] * in_register_00010034 +
             pfVar3[2] * in_register_00010038 + pfVar3[3] * in_vr3;{ V16 _vt27 = vectorMergeLowWord(in_vs42,in_vs39); memcpy(auVar14, &_vt27, 16); }{ V16 _vt28 = vectorMergeHighWord(in_vs37,in_vs38); memcpy(auVar12, &_vt28, 16); }
    fVar23 = *pfVar3 * *pfVar5 + pfVar3[1] * pfVar5[1] + pfVar3[2] * pfVar5[2] +
             pfVar3[3] * pfVar5[3];{ V16 _vt29 = vectorMergeLowWord(in_vs37,in_vs38); memcpy(auVar10, &_vt29, 16); }
    vectorMergeLowWord(auVar18,auVar12);
    fVar27 = *pfVar7 * in_register_00010030 + pfVar7[1] * in_register_00010034 +
             pfVar7[2] * in_register_00010038 + pfVar7[3] * in_vr3;
    vectorMergeLowWord(auVar14,auVar10);{ V16 _vt30 = vectorMergeHighWord(auVar14,auVar10); memcpy(auVar15, &_vt30, 16); }
    vectorMergeHighWord(auVar18,auVar12);
    fVar2 = *pfVar4 * *pfVar5 + pfVar4[1] * pfVar5[1] + pfVar4[2] * pfVar5[2] +
            pfVar4[3] * pfVar5[3];{ V16 _vt31 = vectorMergeHighWord(auVar16,auVar11); memcpy(auVar11, &_vt31, 16); }{ V16 _vt32 = vectorMergeHighWord(in_vs62,in_vs32); memcpy(auVar12, &_vt32, 16); }{ V16 _vt33 = vectorMergeHighWord(in_vs61,in_vs37); memcpy(auVar14, &_vt33, 16); }{ V16 _vt34 = vectorMergeHighWord(in_vs44,in_vs59); memcpy(auVar17, &_vt34, 16); }{ V16 _vt35 = vectorMergeHighWord(auVar11,auVar12); memcpy(auVar12, &_vt35, 16); }{ V16 _vt36 = vectorMergeHighWord(auVar18,auVar10); memcpy(auVar16, &_vt36, 16); }{ V16 _vt37 = vectorMergeHighWord(auVar17,auVar14); memcpy(auVar17, &_vt37, 16); }{ V16 _vt38 = vectorMergeHighWord(in_vs34,in_vs57); memcpy(auVar11, &_vt38, 16); }{ V16 _vt39 = vectorMergeHighWord(auVar13,auVar19); memcpy(auVar19, &_vt39, 16); }
    fVar23 = fVar23 * fVar22 + fVar23 * fVar21 + fVar23 * fVar20 + fVar23 * fVar24;{ V16 _vt40 = vectorMergeHighWord(auVar9,auVar8); memcpy(auVar13, &_vt40, 16); }{ V16 _vt41 = vectorMergeHighWord(auVar11,auVar16); memcpy(auVar16, &_vt41, 16); }
    vectorMergeHighWord(auVar13,auVar19);
    fVar27 = fVar27 * fVar22 + fVar27 * fVar21 + fVar27 * fVar20 + fVar27 * fVar24;
    fVar25 = fVar2 * *pfVar6 + fVar2 * pfVar6[1] + fVar2 * pfVar6[2] + fVar2 * pfVar6[3];
    fVar26 = fVar26 * fVar22 + fVar26 * fVar21 + fVar26 * fVar20 + fVar26 * fVar24;{ V16 _vt42 = vectorMergeHighWord(auVar14,auVar10); memcpy(auVar10, &_vt42, 16); }{ V16 _vt43 = vectorMergeHighWord(auVar12,auVar18); memcpy(auVar12, &_vt43, 16); }{ V16 _vt44 = vectorMergeHighWord(auVar11,auVar9); memcpy(auVar9, &_vt44, 16); }{ V16 _vt45 = vectorMergeHighWord(auVar12,auVar10); memcpy(auVar12, &_vt45, 16); }{ V16 _vt46 = vectorMergeHighWord(auVar17,in_vs34); memcpy(auVar14, &_vt46, 16); }{ V16 _vt47 = vectorMergeHighWord(auVar8,auVar13); memcpy(auVar11, &_vt47, 16); }{ V16 _vt48 = vectorMergeHighWord(auVar16,in_vs63); memcpy(auVar18, &_vt48, 16); }{ V16 _vt49 = vectorMergeHighWord(in_vs61,in_vs62); memcpy(auVar8, &_vt49, 16); }{ V16 _vt50 = vectorMergeHighWord(auVar14,auVar9); memcpy(auVar14, &_vt50, 16); }
    pfVar3 = (float *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *pfVar3 = fVar23;
    pfVar3[1] = fVar23;
    pfVar3[2] = fVar23;
    pfVar3[3] = fVar23;{ V16 _vt51 = vectorMergeHighWord(auVar18,auVar11); memcpy(auVar9, &_vt51, 16); }{ V16 _vt52 = vectorMergeHighWord(auVar10,auVar15); memcpy(auVar18, &_vt52, 16); }{ V16 _vt53 = vectorMergeHighWord(auVar18,auVar8); memcpy(auVar8, &_vt53, 16); }
    pfVar3 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *pfVar3 = fVar2;
    pfVar3[1] = fVar2;
    pfVar3[2] = fVar2;
    pfVar3[3] = fVar2;
    pfVar3 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *pfVar3 = fVar27;
    pfVar3[1] = fVar27;
    pfVar3[2] = fVar27;
    pfVar3[3] = fVar27;
    pfVar3 = (float *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
    *pfVar3 = fVar26;
    pfVar3[1] = fVar26;
    pfVar3[2] = fVar26;
    pfVar3[3] = fVar26;
    fVar22 = fVar23;
    fVar21 = fVar23;
    fVar20 = fVar23;
  }{ V16 _vt54 = vectorMergeHighWord(auVar12,auVar9); memcpy(auVar11, &_vt54, 16); }{ V16 _vt55 = vectorMergeHighWord(auVar14,auVar8); memcpy(auVar18, &_vt55, 16); }{ V16 _vt56 = vectorMergeLowWord(auVar12,auVar9); memcpy(auVar12, &_vt56, 16); }{ V16 _vt57 = vectorMergeLowWord(auVar14,auVar8); memcpy(auVar8, &_vt57, 16); }
  uVar1 = *param_1;
  vectorMergeHighWord(auVar11,auVar18);
  vectorMergeLowWord(auVar11,auVar18);
  vectorMergeHighWord(auVar12,auVar8);
  vectorMergeLowWord(auVar12,auVar8);
  pfVar3 = (float *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *pfVar3 = fVar27;
  pfVar3[1] = fVar27;
  pfVar3[2] = fVar27;
  pfVar3[3] = fVar27;
  pfVar3 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *pfVar3 = fVar26;
  pfVar3[1] = fVar26;
  pfVar3[2] = fVar26;
  pfVar3[3] = fVar26;
  pfVar3 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *pfVar3 = fVar25;
  pfVar3[1] = fVar25;
  pfVar3[2] = fVar25;
  pfVar3[3] = fVar25;
  pfVar3 = (float *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *pfVar3 = fVar20;
  pfVar3[1] = fVar21;
  pfVar3[2] = fVar22;
  pfVar3[3] = fVar23;
  fn_826310E0(uVar1,0,auStack_50,4,0x8000000000000000);
  return;
}

