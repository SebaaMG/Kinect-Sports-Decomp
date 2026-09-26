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
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825B3AB8(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int in_r0;
  int in_r6;
  int in_r8;
  int in_r9;
  undefined1 in_vs32 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_vs34 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar9 [16];
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
  undefined1 in_vs57 [16];
  undefined1 in_vs59 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  float in_register_00010030;
  float in_register_00010034;
  float in_register_00010038;
  float in_vr3;
  float in_register_00010080;
  float in_register_00010084;
  float in_register_00010088;
  float in_vr8;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pfVar3 = (float *)(in_r0 + in_r8 & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar10, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar5, &_vt1, 16); }
  pfVar4 = (float *)(in_r0 + in_r6 + 0x40 & 0xfffffff0);
  fVar16 = *pfVar4;
  fVar17 = pfVar4[1];
  fVar18 = pfVar4[2];
  fVar19 = pfVar4[3];{ V16 _vt2 = vectorMergeHighWord(in_vs42,in_vs43); memcpy(auVar9, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs42,in_vs43); memcpy(auVar12, &_vt3, 16); }{ V16 _vt4 = vectorMergeHighWord(in_vs45,in_vs42); memcpy(auVar8, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar10,auVar9); memcpy(auVar7, &_vt5, 16); }{ V16 _vt6 = vectorMergeHighWord(auVar5,auVar12); memcpy(auVar6, &_vt6, 16); }
  pfVar4 = (float *)(in_r6 + 0x70U & 0xfffffff0);{ V16 _vt7 = vectorMergeLowWord(auVar10,auVar9); memcpy(auVar11, &_vt7, 16); }{ V16 _vt8 = vectorMergeLowWord(auVar5,auVar12); memcpy(auVar5, &_vt8, 16); }{ V16 _vt9 = vectorMergeLowWord(in_vs45,in_vs42); memcpy(auVar14, &_vt9, 16); }
  fVar1 = fVar16 * in_register_00010030 + fVar17 * in_register_00010034 +
          fVar18 * in_register_00010038 + fVar19 * in_vr3;
  fVar2 = fVar16 * in_register_00010010 + fVar17 * in_register_00010014 +
          fVar18 * in_register_00010018 + fVar19 * in_vr1;{ V16 _vt10 = vectorMergeHighWord(in_vs37,in_vs38); memcpy(auVar10, &_vt10, 16); }{ V16 _vt11 = vectorMergeLowWord(in_vs37,in_vs38); memcpy(auVar9, &_vt11, 16); }
  fVar16 = fVar16 * *pfVar3 + fVar17 * pfVar3[1] + fVar18 * pfVar3[2] + fVar19 * pfVar3[3];
  vectorMergeLowWord(auVar8,auVar10);
  vectorMergeLowWord(auVar14,auVar9);{ V16 _vt12 = vectorMergeHighWord(auVar14,auVar9); memcpy(auVar15, &_vt12, 16); }
  vectorMergeHighWord(auVar8,auVar10);
  fVar17 = *pfVar4 * *pfVar3 + pfVar4[1] * pfVar3[1] + pfVar4[2] * pfVar3[2] + pfVar4[3] * pfVar3[3]
  ;{ V16 _vt13 = vectorMergeHighWord(auVar12,in_vs42); memcpy(auVar14, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(in_vs62,in_vs44); memcpy(auVar13, &_vt14, 16); }{ V16 _vt15 = vectorMergeHighWord(in_vs61,in_vs37); memcpy(auVar12, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(in_vs39,in_vs59); memcpy(auVar10, &_vt16, 16); }{ V16 _vt17 = vectorMergeHighWord(auVar14,auVar13); memcpy(auVar13, &_vt17, 16); }{ V16 _vt18 = vectorMergeHighWord(auVar8,auVar9); memcpy(auVar14, &_vt18, 16); }{ V16 _vt19 = vectorMergeHighWord(auVar10,auVar12); memcpy(auVar12, &_vt19, 16); }{ V16 _vt20 = vectorMergeHighWord(in_vs34,in_vs57); memcpy(auVar9, &_vt20, 16); }{ V16 _vt21 = vectorMergeHighWord(auVar11,auVar5); memcpy(auVar5, &_vt21, 16); }
  fVar16 = fVar16 * in_register_00010080 + fVar16 * in_register_00010084 +
           fVar16 * in_register_00010088 + fVar16 * in_vr8;{ V16 _vt22 = vectorMergeHighWord(auVar7,auVar6); memcpy(auVar8, &_vt22, 16); }{ V16 _vt23 = vectorMergeHighWord(auVar9,auVar14); memcpy(auVar14, &_vt23, 16); }
  fVar2 = fVar2 * in_register_00010080 + fVar2 * in_register_00010084 + fVar2 * in_register_00010088
          + fVar2 * in_vr8;{ V16 _vt24 = vectorMergeHighWord(auVar8,auVar5); memcpy(auVar5, &_vt24, 16); }
  fVar1 = fVar1 * in_register_00010080 + fVar1 * in_register_00010084 + fVar1 * in_register_00010088
          + fVar1 * in_vr8;{ V16 _vt25 = vectorMergeHighWord(in_vs37,auVar10); memcpy(auVar10, &_vt25, 16); }{ V16 _vt26 = vectorMergeHighWord(auVar13,auVar11); memcpy(auVar11, &_vt26, 16); }{ V16 _vt27 = vectorMergeHighWord(auVar9,auVar7); memcpy(auVar7, &_vt27, 16); }{ V16 _vt28 = vectorMergeHighWord(auVar12,in_vs34); memcpy(auVar9, &_vt28, 16); }
  vectorMergeHighWord(auVar11,auVar10);
  fVar17 = fVar17 * in_register_00010080 + fVar17 * in_register_00010084 +
           fVar17 * in_register_00010088 + fVar17 * in_vr8;
  vectorMergeHighWord(auVar9,auVar7);
  pfVar3 = (float *)(in_r0 + in_r9 & 0xfffffff0);
  *pfVar3 = fVar16;
  pfVar3[1] = fVar16;
  pfVar3[2] = fVar16;
  pfVar3[3] = fVar16;{ V16 _vt29 = vectorMergeHighWord(auVar6,auVar8); memcpy(auVar6, &_vt29, 16); }{ V16 _vt30 = vectorMergeHighWord(auVar14,in_vs63); memcpy(auVar7, &_vt30, 16); }{ V16 _vt31 = vectorMergeHighWord(in_vs61,in_vs62); memcpy(auVar8, &_vt31, 16); }
  vectorMergeHighWord(auVar7,auVar6);
  pfVar3 = (float *)(in_r9 + 0x10U & 0xfffffff0);
  *pfVar3 = fVar2;
  pfVar3[1] = fVar2;
  pfVar3[2] = fVar2;
  pfVar3[3] = fVar2;
  pfVar3 = (float *)(in_r9 + 0x20U & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;{ V16 _vt32 = vectorMergeHighWord(auVar5,auVar15); memcpy(auVar5, &_vt32, 16); }
  vectorMergeHighWord(auVar5,auVar8);
  pfVar3 = (float *)(in_r9 + 0x30U & 0xfffffff0);
  *pfVar3 = fVar17;
  pfVar3[1] = fVar17;
  pfVar3[2] = fVar17;
  pfVar3[3] = fVar17;
  return;
}

