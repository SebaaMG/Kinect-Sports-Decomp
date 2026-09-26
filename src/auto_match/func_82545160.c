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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_826310E0();
extern int fn_8263FB88();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_832968D8;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82545160(uint param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int in_r0;
  undefined4 *puVar13;
  undefined1 in_vs32 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float in_register_00010060;
  float in_register_00010064;
  float in_register_00010068;
  float in_vr6;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  iVar12 = lbl_8320A898;
  pfVar5 = (float *)(in_r0 + param_2 & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar17, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar14, &_vt1, 16); }
  pfVar6 = (float *)(param_2 + 0x10U & 0xfffffff0);{ V16 _vt2 = vectorMergeHighWord(in_vs44,in_vs43); memcpy(auVar15, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs44,in_vs43); memcpy(auVar19, &_vt3, 16); }
  pfVar7 = (float *)(param_2 + 0x30U & 0xfffffff0);
  vectorMergeHighWord(auVar17,auVar15);{ V16 _vt4 = vectorMergeLowWord(auVar17,auVar15); memcpy(auVar18, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar14,auVar19); memcpy(auVar16, &_vt5, 16); }{ V16 _vt6 = vectorMergeLowWord(auVar14,auVar19); memcpy(auVar14, &_vt6, 16); }
  fVar1 = *pfVar5 * (((U64)(lbl_832968D0) >> 0) & 0xFFFFFFFF) + pfVar5[1] * (((U64)(lbl_832968D0) >> 32) & 0xFFFFFFFF) +
          pfVar5[2] * (((U64)(lbl_832968D8) >> 0) & 0xFFFFFFFF) + pfVar5[3] * (((U64)(lbl_832968D8) >> 32) & 0xFFFFFFFF);
  fVar2 = *pfVar7 * (((U64)(lbl_832968D0) >> 0) & 0xFFFFFFFF) + pfVar7[1] * (((U64)(lbl_832968D0) >> 32) & 0xFFFFFFFF) +
          pfVar7[2] * (((U64)(lbl_832968D8) >> 0) & 0xFFFFFFFF) + pfVar7[3] * (((U64)(lbl_832968D8) >> 32) & 0xFFFFFFFF);
  fVar3 = *pfVar6 * in_register_00010060 + pfVar6[1] * in_register_00010064 +
          pfVar6[2] * in_register_00010068 + pfVar6[3] * in_vr6;
  fVar4 = *pfVar7 * in_register_00010060 + pfVar7[1] * in_register_00010064 +
          pfVar7[2] * in_register_00010068 + pfVar7[3] * in_vr6;{ V16 _vt7 = vectorMergeHighWord(auVar19,in_vs36); memcpy(auVar17, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs37,in_vs42); memcpy(auVar15, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(auVar17,auVar15); memcpy(auVar20, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar19, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar15, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(in_vs39,in_vs61); memcpy(auVar17, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(auVar18,auVar14); memcpy(auVar14, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(in_vs45,in_vs33); memcpy(auVar18, &_vt14, 16); }{ V16 _vt15 = vectorMergeHighWord(in_vs43,auVar16); memcpy(auVar16, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(auVar17,auVar19); memcpy(auVar17, &_vt16, 16); }{ V16 _vt17 = vectorMergeHighWord(auVar18,auVar15); memcpy(auVar18, &_vt17, 16); }{ V16 _vt18 = vectorMergeHighWord(auVar16,auVar14); memcpy(auVar14, &_vt18, 16); }{ V16 _vt19 = vectorMergeHighWord(auVar20,auVar17); memcpy(auVar16, &_vt19, 16); }{ V16 _vt20 = vectorMergeLowWord(auVar20,auVar17); memcpy(auVar17, &_vt20, 16); }{ V16 _vt21 = vectorMergeHighWord(auVar18,auVar14); memcpy(auVar15, &_vt21, 16); }{ V16 _vt22 = vectorMergeLowWord(auVar18,auVar14); memcpy(auVar14, &_vt22, 16); }
  vectorMergeHighWord(auVar16,auVar15);
  vectorMergeLowWord(auVar16,auVar15);
  vectorMergeHighWord(auVar17,auVar14);
  vectorMergeLowWord(auVar17,auVar14);
  pfVar5 = (float *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *pfVar5 = fVar3;
  pfVar5[1] = fVar3;
  pfVar5[2] = fVar3;
  pfVar5[3] = fVar3;
  pfVar5 = (float *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *pfVar5 = fVar4;
  pfVar5[1] = fVar4;
  pfVar5[2] = fVar4;
  pfVar5[3] = fVar4;
  pfVar5 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *pfVar5 = fVar1;
  pfVar5[1] = fVar1;
  pfVar5[2] = fVar1;
  pfVar5[3] = fVar1;
  pfVar5 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *pfVar5 = fVar2;
  pfVar5[1] = fVar2;
  pfVar5[2] = fVar2;
  pfVar5[3] = fVar2;
  fn_826310E0(iVar12,0,auStack_60,4,0x8000000000000000);
  puVar13 = (undefined4 *)fn_8263FB88(lbl_8320A898,0xd,4,0x14);
  if (-1 < (longlong)-(ulonglong)(puVar13 == (undefined4 *)0x0)) {
    uVar8 = param_1 << 0x18 | param_1 >> 8;
    puVar13[7] = uVar8;
    puVar13[0xc] = uVar8;
    puVar13[2] = uVar8;
    puVar13[0x11] = uVar8;
    uVar11 = lbl_821CC160;
    uVar10 = lbl_821CA460;
    uVar9 = lbl_82192734;
    *puVar13 = lbl_82192734;
    puVar13[1] = uVar10;
    puVar13[3] = uVar11;
    puVar13[4] = uVar10;
    puVar13[5] = uVar10;
    puVar13[6] = uVar10;
    puVar13[8] = uVar10;
    puVar13[9] = uVar10;
    puVar13[10] = uVar10;
    puVar13[0xb] = uVar9;
    puVar13[0xd] = uVar10;
    puVar13[0xe] = uVar11;
    puVar13[0xf] = uVar9;
    puVar13[0x10] = uVar9;
    puVar13[0x12] = uVar11;
    puVar13[0x13] = uVar11;
    *(undefined4 *)(lbl_8320A898 + 0x30) = *(undefined4 *)(lbl_8320A898 + 0x3554);
  }
  return;
}

