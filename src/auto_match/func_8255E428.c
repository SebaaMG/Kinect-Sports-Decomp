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
extern unsigned int *auStack_b0;
extern int fn_8255E530();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8255E428(undefined8 param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int in_r0;
  undefined8 uVar4;
  int iVar5;
  undefined1 in_vs32 [16];
  undefined1 auVar6 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs41 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar11 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float in_register_000100a0;
  float in_register_000100a4;
  float in_register_000100a8;
  float in_vr10;
  float fVar12;
  float fVar13;
  undefined1 auStack_b0 [176];
  
  uVar4 = fn_82F6DA24();
  fVar13 = *(float *)((in_r0 + param_2 + 0xf0 & 0xfffffff0U) + 4);
  fVar12 = *(float *)((param_2 + 0x110U & 0xfffffff0) + 4);
  iVar5 = fn_8255E530(auStack_b0);
  vectorMergeHighWord(in_vs32,in_vs45);{ V16 _vt0 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar6, &_vt0, 16); }
  pfVar2 = (float *)(iVar5 + 0x10U & 0xfffffff0);{ V16 _vt1 = vectorMergeHighWord(in_vs44,in_vs43); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorMergeLowWord(in_vs44,in_vs43); memcpy(auVar11, &_vt2, 16); }
  pfVar3 = (float *)(iVar5 + 0x30U & 0xfffffff0);
  fVar12 = *pfVar3 * 0.0 + pfVar3[1] * 0.0 + pfVar3[2] * fVar13 + pfVar3[3] * fVar12;
  fVar13 = *pfVar2 * in_register_000100a0 + pfVar2[1] * in_register_000100a4 +
           pfVar2[2] * in_register_000100a8 + pfVar2[3] * in_vr10;
  fVar1 = *pfVar3 * in_register_000100a0 + pfVar3[1] * in_register_000100a4 +
          pfVar3[2] * in_register_000100a8 + pfVar3[3] * in_vr10;{ V16 _vt3 = vectorMergeHighWord(in_vs38,in_vs36); memcpy(auVar10, &_vt3, 16); }{ V16 _vt4 = vectorMergeHighWord(in_vs37,in_vs41); memcpy(auVar9, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar7, &_vt5, 16); }
  vectorMergeHighWord(auVar10,auVar9);{ V16 _vt6 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar9, &_vt6, 16); }{ V16 _vt7 = vectorMergeHighWord(auVar6,auVar11); memcpy(auVar6, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs45,in_vs33); memcpy(auVar11, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs43,auVar8); memcpy(auVar10, &_vt9, 16); }
  iVar5 = (int)uVar4;
  pfVar2 = (float *)(in_r0 + iVar5 & 0xfffffff0);
  *pfVar2 = in_register_000100a0;
  pfVar2[1] = in_register_000100a4;
  pfVar2[2] = in_register_000100a8;
  pfVar2[3] = in_vr10;{ V16 _vt10 = vectorMergeHighWord(in_vs39,in_vs61); memcpy(auVar8, &_vt10, 16); }
  vectorMergeHighWord(auVar11,auVar7);
  vectorMergeHighWord(auVar10,auVar6);
  vectorMergeHighWord(auVar8,auVar9);
  pfVar2 = (float *)(iVar5 + 0x10U & 0xfffffff0);
  *pfVar2 = fVar13;
  pfVar2[1] = fVar13;
  pfVar2[2] = fVar13;
  pfVar2[3] = fVar13;
  pfVar2 = (float *)(iVar5 + 0x30U & 0xfffffff0);
  *pfVar2 = fVar12;
  pfVar2[1] = fVar12;
  pfVar2[2] = fVar12;
  pfVar2[3] = fVar12;
  pfVar2 = (float *)(iVar5 + 0x20U & 0xfffffff0);
  *pfVar2 = fVar1;
  pfVar2[1] = fVar1;
  pfVar2[2] = fVar1;
  pfVar2[3] = fVar1;
  fn_82F6DCBC(uVar4);
  return;
}

