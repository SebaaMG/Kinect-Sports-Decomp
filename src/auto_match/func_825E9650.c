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
extern int fn_825665B0();
extern int fn_82588BB8();
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825E9650(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int in_r0;
  float *pfVar6;
  longlong lVar7;
  undefined1 in_vs32 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 auVar9 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar13 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float in_register_00010060;
  float in_register_00010064;
  float in_register_00010068;
  float in_vr6;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float in_register_000100a0;
  float in_register_000100a4;
  float in_register_000100a8;
  float in_vr10;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  iVar1 = *param_1;
  param_1[0x329] = (uint)(*(int *)(*(int *)(iVar1 + 0x844) + 0x358) != 0);
  param_1[0x328] = *(int *)(iVar1 + 0x4c0);
  fn_825665B0(iVar1,iVar1 + 0x4c0,param_1 + 0x32c,param_1 + 0x33c);
  pfVar6 = (float *)((uint)(param_1 + 0x344) & 0xfffffff0);
  fVar15 = *pfVar6;
  fVar16 = pfVar6[1];
  fVar17 = pfVar6[2];
  fVar18 = pfVar6[3];{ V16 _vt0 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar10, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs45,in_vs32); memcpy(auVar11, &_vt1, 16); }
  pfVar6 = (float *)((uint)(param_1 + 0x338) & 0xfffffff0);
  fVar19 = *pfVar6;
  fVar20 = pfVar6[1];
  fVar21 = pfVar6[2];
  fVar22 = pfVar6[3];{ V16 _vt2 = vectorMergeLowWord(in_vs45,in_vs32); memcpy(auVar8, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar13, &_vt3, 16); }{ V16 _vt4 = vectorMergeHighWord(auVar11,auVar10); memcpy(auVar9, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(auVar11,auVar10); memcpy(auVar12, &_vt5, 16); }
  vectorMergeHighWord(auVar8,auVar13);{ V16 _vt6 = vectorMergeLowWord(auVar8,auVar13); memcpy(auVar8, &_vt6, 16); }
  pfVar6 = (float *)(in_r0 + (int)(param_1 + 0x32c) & 0xfffffff0);
  pfVar5 = (float *)((uint)(param_1 + 0x334) & 0xfffffff0);
  fVar2 = *pfVar6 * fVar15 + pfVar6[1] * fVar16 + pfVar6[2] * fVar17 + pfVar6[3] * fVar18;
  fVar3 = *pfVar5 * in_register_00010060 + pfVar5[1] * in_register_00010064 +
          pfVar5[2] * in_register_00010068 + pfVar5[3] * in_vr6;
  param_1[0x34c] = *(int *)(iVar1 + 0x6c4);
  fVar4 = fVar19 * in_register_000100a0 + fVar20 * in_register_000100a4 +
          fVar21 * in_register_000100a8 + fVar22 * in_vr10;
  param_1[0x34d] = *(int *)(iVar1 + 0x6c8);
  fVar15 = fVar19 * fVar15 + fVar20 * fVar16 + fVar21 * fVar17 + fVar22 * fVar18;{ V16 _vt7 = vectorMergeHighWord(auVar10,in_vs33); memcpy(auVar11, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs35,in_vs45); memcpy(auVar14, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(auVar13,in_vs43); memcpy(auVar13, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(in_vs34,in_vs63); memcpy(auVar10, &_vt10, 16); }
  vectorMergeHighWord(auVar11,auVar14);
  param_1[0x34e] = *(int *)(iVar1 + 0x6cc);{ V16 _vt11 = vectorMergeHighWord(auVar12,auVar8); memcpy(auVar8, &_vt11, 16); }
  pfVar6 = (float *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *pfVar6 = fVar2;
  pfVar6[1] = fVar2;
  pfVar6[2] = fVar2;
  pfVar6[3] = fVar2;{ V16 _vt12 = vectorMergeHighWord(in_vs36,in_vs40); memcpy(auVar11, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs62,in_vs61); memcpy(auVar12, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(auVar9,in_vs39); memcpy(auVar9, &_vt14, 16); }
  vectorMergeHighWord(auVar11,auVar10);
  vectorMergeHighWord(auVar13,auVar12);
  vectorMergeHighWord(auVar9,auVar8);
  pfVar6 = (float *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *pfVar6 = fVar4;
  pfVar6[1] = fVar4;
  pfVar6[2] = fVar4;
  pfVar6[3] = fVar4;
  pfVar6 = (float *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *pfVar6 = fVar3;
  pfVar6[1] = fVar3;
  pfVar6[2] = fVar3;
  pfVar6[3] = fVar3;
  pfVar6 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *pfVar6 = fVar15;
  pfVar6[1] = fVar15;
  pfVar6[2] = fVar15;
  pfVar6[3] = fVar15;
  fn_82588BB8(auStack_70,param_1 + 0x34f);
  pfVar6 = (float *)(param_1 + 0x360);
  lVar7 = 6;
  do {
    pfVar5 = pfVar6 + 4;
    pfVar6 = pfVar6 + 4;
    *pfVar6 = -*pfVar5;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

