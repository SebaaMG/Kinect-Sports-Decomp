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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_826310E0();
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825415F8(undefined4 *param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar12 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float in_register_00010050;
  float in_register_00010054;
  float in_register_00010058;
  float in_vr5;
  float in_register_00010060;
  float in_register_00010064;
  float in_register_00010068;
  float in_vr6;
  float in_register_000100a0;
  float in_register_000100a4;
  undefined4 uVar19;
  float in_register_000100a8;
  undefined4 uVar20;
  float in_vr10;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  pfVar2 = (float *)((uint)(param_1 + 0x2a48) & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs45,in_vs32); memcpy(auVar10, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar9, &_vt1, 16); }
  pfVar3 = (float *)((uint)(param_1 + 0x2a2c) & 0xfffffff0);{ V16 _vt2 = vectorMergeLowWord(in_vs45,in_vs32); memcpy(auVar8, &_vt2, 16); }
  pfVar4 = (float *)((int)param_1 + in_r0 + 0xa880 & 0xfffffff0);{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar13, &_vt3, 16); }
  pfVar5 = (float *)((uint)(param_1 + 0x2a28) & 0xfffffff0);
  vectorMergeHighWord(auVar10,auVar9);{ V16 _vt4 = vectorMergeLowWord(auVar10,auVar9); memcpy(auVar11, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar8,auVar13); memcpy(auVar10, &_vt5, 16); }{ V16 _vt6 = vectorMergeLowWord(auVar8,auVar13); memcpy(auVar8, &_vt6, 16); }
  fVar24 = *pfVar4 * in_register_00010050 + pfVar4[1] * in_register_00010054 +
           pfVar4[2] * in_register_00010058 + pfVar4[3] * in_vr5;
  fVar23 = *pfVar4 * *pfVar2 + pfVar4[1] * pfVar2[1] + pfVar4[2] * pfVar2[2] + pfVar4[3] * pfVar2[3]
  ;
  fVar22 = *pfVar3 * *pfVar2 + pfVar3[1] * pfVar2[1] + pfVar3[2] * pfVar2[2] + pfVar3[3] * pfVar2[3]
  ;
  fVar1 = *pfVar3 * in_register_000100a0 + pfVar3[1] * in_register_000100a4 +
          pfVar3[2] * in_register_000100a8 + pfVar3[3] * in_vr10;
  fVar25 = *pfVar5 * in_register_00010060 + pfVar5[1] * in_register_00010064 +
           pfVar5[2] * in_register_00010068 + pfVar5[3] * in_vr6;{ V16 _vt7 = vectorMergeHighWord(auVar13,auVar9); memcpy(auVar9, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs36,in_vs45); memcpy(auVar13, &_vt8, 16); }
  vectorMergeHighWord(auVar9,auVar13);{ V16 _vt9 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar14, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar13, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(auVar11,auVar8); memcpy(auVar8, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(in_vs43,in_vs61); memcpy(auVar12, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs40,in_vs33); memcpy(auVar9, &_vt13, 16); }
  pfVar2 = (float *)((int)param_1 + in_r0 + 0xa980 & 0xfffffff0);
  *pfVar2 = fVar23;
  pfVar2[1] = fVar23;
  pfVar2[2] = fVar23;
  pfVar2[3] = fVar23;{ V16 _vt14 = vectorMergeHighWord(in_vs39,auVar10); memcpy(auVar11, &_vt14, 16); }{ V16 _vt15 = vectorMergeHighWord(auVar12,auVar14); memcpy(auVar12, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(auVar9,auVar13); memcpy(auVar10, &_vt16, 16); }
  vectorMergeHighWord(auVar11,auVar8);
  pfVar2 = (float *)((uint)(param_1 + 0x2a68) & 0xfffffff0);
  *pfVar2 = fVar23;
  pfVar2[1] = fVar23;
  pfVar2[2] = fVar23;
  pfVar2[3] = fVar23;
  pfVar2 = (float *)((uint)(param_1 + 0x2a64) & 0xfffffff0);
  *pfVar2 = fVar24;
  pfVar2[1] = fVar24;
  pfVar2[2] = fVar24;
  pfVar2[3] = fVar24;
  pfVar2 = (float *)((uint)(param_1 + 0x2a6c) & 0xfffffff0);
  *pfVar2 = fVar22;
  pfVar2[1] = fVar22;
  pfVar2[2] = fVar22;
  pfVar2[3] = fVar22;
  puVar6 = (undefined4 *)((uint)(param_1 + 0x2a6c) & 0xfffffff0);
  uVar15 = puVar6[1];
  uVar16 = puVar6[2];
  uVar17 = puVar6[3];{ V16 _vt17 = vectorMergeHighWord(auVar12,auVar12); memcpy(auVar9, &_vt17, 16); }{ V16 _vt18 = vectorMergeHighWord(auVar10,auVar14); memcpy(auVar13, &_vt18, 16); }{ V16 _vt19 = vectorMergeLowWord(auVar12,auVar12); memcpy(auVar8, &_vt19, 16); }{ V16 _vt20 = vectorMergeLowWord(auVar10,auVar14); memcpy(auVar12, &_vt20, 16); }{ V16 _vt21 = vectorMergeHighWord(auVar9,auVar13); memcpy(auVar11, &_vt21, 16); }
  vectorMergeLowWord(auVar9,auVar13);{ V16 _vt22 = vectorMergeHighWord(auVar8,auVar12); memcpy(auVar10, &_vt22, 16); }{ V16 _vt23 = vectorMergeLowWord(auVar8,auVar12); memcpy(auVar8, &_vt23, 16); }
  puVar7 = (undefined4 *)(in_r0 + (int)(param_1 + 0x2a70) & 0xfffffff0);
  *puVar7 = *puVar6;
  puVar7[1] = uVar15;
  puVar7[2] = uVar16;
  puVar7[3] = uVar17;
  pfVar2 = (float *)((uint)(param_1 + 0x2a74) & 0xfffffff0);
  *pfVar2 = fVar25;
  pfVar2[1] = fVar25;
  pfVar2[2] = fVar25;
  pfVar2[3] = fVar25;
  pfVar2 = (float *)((uint)(param_1 + 0x2a78) & 0xfffffff0);
  *pfVar2 = fVar1;
  pfVar2[1] = fVar1;
  pfVar2[2] = fVar1;
  pfVar2[3] = fVar1;
  pfVar2 = (float *)((uint)(param_1 + 0x2a7c) & 0xfffffff0);
  *pfVar2 = fVar22;
  pfVar2[1] = fVar22;
  pfVar2[2] = fVar22;
  pfVar2[3] = fVar22;
  fVar24 = fVar25;
  fVar23 = fVar25;
  fVar22 = fVar25;
  fn_826310E0(*param_1,0x72,param_1 + 0x2a70,4,0xc00000000);
  puVar6 = (undefined4 *)((int)param_1 + in_r0 + 0xa900 & 0xfffffff0);
  uVar26 = *puVar6;
  uVar27 = puVar6[1];
  uVar28 = puVar6[2];
  uVar29 = puVar6[3];
  puVar6 = (undefined4 *)((uint)(param_1 + 0x2a48) & 0xfffffff0);
  uVar15 = *puVar6;
  uVar16 = puVar6[1];
  uVar17 = puVar6[2];
  uVar18 = puVar6[3];
  puVar6 = (undefined4 *)((uint)(param_1 + 0x2a44) & 0xfffffff0);
  uVar19 = puVar6[1];
  uVar20 = puVar6[2];
  uVar21 = puVar6[3];{ V16 _vt24 = vectorMergeHighWord(auVar12,auVar8); memcpy(auVar9, &_vt24, 16); }{ V16 _vt25 = vectorMergeLowWord(auVar12,auVar8); memcpy(auVar8, &_vt25, 16); }{ V16 _vt26 = vectorMergeHighWord(auVar10,auVar11); memcpy(auVar13, &_vt26, 16); }{ V16 _vt27 = vectorMergeLowWord(auVar10,auVar11); memcpy(auVar10, &_vt27, 16); }
  vectorMergeHighWord(auVar9,auVar13);
  vectorMergeLowWord(auVar9,auVar13);
  vectorMergeHighWord(auVar8,auVar10);
  vectorMergeLowWord(auVar8,auVar10);
  puVar7 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar7 = *puVar6;
  puVar7[1] = uVar19;
  puVar7[2] = uVar20;
  puVar7[3] = uVar21;
  puVar6 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar6 = uVar26;
  puVar6[1] = uVar27;
  puVar6[2] = uVar28;
  puVar6[3] = uVar29;
  pfVar2 = (float *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *pfVar2 = fVar22;
  pfVar2[1] = fVar23;
  pfVar2[2] = fVar24;
  pfVar2[3] = fVar25;
  puVar6 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar6 = uVar15;
  puVar6[1] = uVar16;
  puVar6[2] = uVar17;
  puVar6[3] = uVar18;
  fn_826310E0(*param_1,0x6e,auStack_70,4,0x1800000000);
  return;
}

