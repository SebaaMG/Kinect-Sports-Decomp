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
extern int fn_82588BB8();
extern unsigned int stack0x00000010;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int stack0x00000050;
extern unsigned int stack0x00000080;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_826228F0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int in_r0;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 auVar13 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs41 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_vs42 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar19 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  undefined8 uStack00000010;
  undefined8 uStack00000018;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  uint in_stack_00000094;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  
  pfVar4 = (float *)((uint)(&stack0x00000050 + in_r0) & 0xfffffff0);
  pfVar5 = (float *)((uint)((int)&stack0x00000020 + in_r0) & 0xfffffff0);
  pfVar6 = (float *)((uint)(&stack0x00000080 + in_r0) & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs42,in_vs41); memcpy(auVar13, &_vt0, 16); }
  pfVar7 = (float *)((uint)((int)&stack0x00000030 + in_r0) & 0xfffffff0);{ V16 _vt1 = vectorMergeLowWord(in_vs42,in_vs41); memcpy(auVar17, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs40,in_vs39); memcpy(auVar15, &_vt2, 16); }
  pfVar8 = (float *)((uint)((int)&stack0x00000010 + in_r0) & 0xfffffff0);{ V16 _vt3 = vectorMergeLowWord(in_vs40,in_vs39); memcpy(auVar14, &_vt3, 16); }
  uVar10 = (ulonglong)in_stack_00000094;
  vectorMergeHighWord(auVar13,auVar15);{ V16 _vt4 = vectorMergeLowWord(auVar13,auVar15); memcpy(auVar16, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar17,auVar14); memcpy(auVar15, &_vt5, 16); }{ V16 _vt6 = vectorMergeLowWord(auVar17,auVar14); memcpy(auVar18, &_vt6, 16); }
  fVar1 = *pfVar8 * *pfVar4 + pfVar8[1] * pfVar4[1] + pfVar8[2] * pfVar4[2] + pfVar8[3] * pfVar4[3];
  fVar2 = *pfVar7 * *pfVar6 + pfVar7[1] * pfVar6[1] + pfVar7[2] * pfVar6[2] + pfVar7[3] * pfVar6[3];
  fVar3 = *pfVar5 * *pfVar6 + pfVar5[1] * pfVar6[1] + pfVar5[2] * pfVar6[2] + pfVar5[3] * pfVar6[3];{ V16 _vt7 = vectorMergeHighWord(auVar14,in_vs36); memcpy(auVar17, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs37,in_vs32); memcpy(auVar13, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar14, &_vt9, 16); }
  vectorMergeHighWord(auVar17,auVar13);{ V16 _vt10 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar13, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(in_vs44,in_vs61); memcpy(auVar19, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(auVar16,auVar18); memcpy(auVar17, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs45,in_vs33); memcpy(auVar16, &_vt13, 16); }
  pfVar4 = (float *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *pfVar4 = fVar1;
  pfVar4[1] = fVar1;
  pfVar4[2] = fVar1;
  pfVar4[3] = fVar1;{ V16 _vt14 = vectorMergeHighWord(in_vs43,auVar15); memcpy(auVar15, &_vt14, 16); }
  vectorMergeHighWord(auVar19,auVar13);
  vectorMergeHighWord(auVar16,auVar14);
  vectorMergeHighWord(auVar15,auVar17);
  pfVar4 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *pfVar4 = fVar1;
  pfVar4[1] = fVar1;
  pfVar4[2] = fVar1;
  pfVar4[3] = fVar1;
  pfVar4 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *pfVar4 = fVar3;
  pfVar4[1] = fVar3;
  pfVar4[2] = fVar3;
  pfVar4[3] = fVar3;
  pfVar4 = (float *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *pfVar4 = fVar2;
  pfVar4[1] = fVar2;
  pfVar4[2] = fVar2;
  pfVar4[3] = fVar2;
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  fn_82588BB8(auStack_50);
  lVar11 = uVar10 + 0x44;
  lVar12 = 6;
  do {
    iVar9 = (int)lVar11;
    lVar11 = lVar11 + 0x10;
    *(float *)lVar11 = -*(float *)(iVar9 + 0x10);
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return;
}

