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
extern unsigned int fStack_14;
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_82539560();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821955C8;
extern unsigned int lbl_82195900;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_8226CFE8(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int in_r0;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 in_vs32 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar15 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar16 [16];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar5 = lbl_821CA460;
  fVar4 = lbl_821955C8;
  fStack_20 = *param_2;
  fStack_1c = param_2[1];
  fStack_18 = param_2[2];
  pfVar2 = (float *)(param_1 + 0xe0U & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar13, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar16, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar11, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar15, &_vt3, 16); }
  dVar8 = (double)lbl_821CA460;
  fStack_14 = lbl_821CA460;
  pfVar3 = (float *)((int)&fStack_20 + in_r0 & 0xfffffff0);{ V16 _vt4 = vectorMergeHighWord(auVar13,auVar11); memcpy(auVar14, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(auVar13,auVar11); memcpy(auVar13, &_vt5, 16); }
  vectorMergeHighWord(auVar16,auVar15);
  vectorMergeLowWord(auVar16,auVar15);
  fVar1 = *pfVar3 * *pfVar2 + pfVar3[1] * pfVar2[1] + pfVar3[2] * pfVar2[2] + pfVar3[3] * pfVar2[3];{ V16 _vt6 = vectorMergeHighWord(auVar15,auVar13); memcpy(auVar16, &_vt6, 16); }{ V16 _vt7 = vectorMergeHighWord(auVar14,in_vs32); memcpy(auVar11, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(auVar16,auVar11); memcpy(auVar11, &_vt8, 16); }
  pfVar2 = (float *)((int)&fStack_20 + in_r0 & 0xfffffff0);
  *pfVar2 = fVar1;
  pfVar2[1] = fVar1;
  pfVar2[2] = fVar1;
  pfVar2[3] = fVar1;
  if (fStack_18 <= fVar4) {
    pfVar2 = (float *)(in_r0 + param_1 + 0x100 & 0xfffffff0);{ V16 _vt9 = vectorMergeHighWord(auVar16,auVar15); memcpy(auVar12, &_vt9, 16); }{ V16 _vt10 = vectorMergeLowWord(auVar16,auVar15); memcpy(auVar16, &_vt10, 16); }
    dVar10 = (double)lbl_821CC160;{ V16 _vt11 = vectorMergeHighWord(auVar13,auVar14); memcpy(auVar15, &_vt11, 16); }{ V16 _vt12 = vectorMergeLowWord(auVar13,auVar14); memcpy(auVar14, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(auVar12,auVar15); memcpy(auVar13, &_vt13, 16); }{ V16 _vt14 = vectorMergeLowWord(auVar12,auVar15); memcpy(auVar15, &_vt14, 16); }
    vectorMergeHighWord(auVar16,auVar14);
    vectorMergeLowWord(auVar16,auVar14);
    fVar1 = fVar1 * *pfVar2 + fVar1 * pfVar2[1] + fVar1 * pfVar2[2] + fVar1 * pfVar2[3];{ V16 _vt15 = vectorMergeHighWord(auVar14,auVar13); memcpy(auVar13, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(auVar15,auVar11); memcpy(auVar11, &_vt16, 16); }
    vectorMergeHighWord(auVar13,auVar11);
    pfVar2 = (float *)((int)&fStack_20 + in_r0 & 0xfffffff0);
    *pfVar2 = fVar1;
    pfVar2[1] = fVar1;
    pfVar2[2] = fVar1;
    pfVar2[3] = fVar1;
    dVar7 = dVar10;
    dVar9 = dVar10;
    if ((double)fVar5 != dVar10) {
      fVar1 = (float)(dVar8 / (double)fVar5);
      dVar7 = (double)(fVar1 * fStack_20);
      dVar9 = (double)(fVar1 * fStack_1c);
    }
    dVar8 = (double)fn_82539560(dVar7,(double)lbl_82192734,dVar8,dVar10,(double)lbl_82195900);
    *param_3 = (float)dVar8;
    dVar8 = (double)fn_82539560(dVar9);
    param_3[1] = (float)dVar8;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

