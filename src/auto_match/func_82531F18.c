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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern float fRam832968bc;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_825308E8();
extern int fn_82530948();
extern int fn_82531118();
extern int fn_825315E0();
extern int fn_82531E50();
extern int fn_82539560();
extern int fn_82A1BB18();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821955C8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_832968B0;
extern unsigned int lbl_832968B4;
extern unsigned int lbl_832968B8;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_832968D8;
extern unsigned int uStack_70;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82531F18(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  ulonglong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_r0;
  float *pfVar8;
  ulonglong uVar6;
  uint *puVar9;
  undefined8 uVar7;
  undefined4 uVar10;
  uint uVar11;
  undefined8 extraout_f1;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 in_vs32 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar19 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar20 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  
  pfVar8 = (float *)fn_82F6A540();
  uVar11 = *(uint *)(lbl_8320A898 + 0x2a88);
  uVar7 = extraout_f1;
  uVar6 = fn_82A1BB18();
  uVar11 = -(uint)(uVar6 == uVar11) & lbl_8320A898;
  fn_82530948(uVar11);
  fn_825315E0(uVar11);
  fn_82531118();
  puVar9 = (uint *)fn_825308E8();
  fVar5 = lbl_821CA460;
  fVar4 = lbl_821955C8;
  fVar1 = *pfVar8;
  fVar2 = pfVar8[1];
  uStack_70 = *(ulonglong *)pfVar8;
  fStack_68 = pfVar8[2];{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar18, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar21, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs44,in_vs43); memcpy(auVar16, &_vt2, 16); }
  dVar13 = (double)lbl_821CA460;{ V16 _vt3 = vectorMergeLowWord(in_vs44,in_vs43); memcpy(auVar20, &_vt3, 16); }
  fStack_64 = lbl_821CA460;
  pfVar8 = (float *)((int)&uStack_70 + in_r0 & 0xfffffff0);{ V16 _vt4 = vectorMergeHighWord(auVar18,auVar16); memcpy(auVar19, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(auVar18,auVar16); memcpy(auVar18, &_vt5, 16); }
  vectorMergeHighWord(auVar21,auVar20);
  vectorMergeLowWord(auVar21,auVar20);
  fVar3 = *pfVar8 * lbl_832968B0 + pfVar8[1] * lbl_832968B4 + pfVar8[2] * lbl_832968B8 +
          pfVar8[3] * fRam832968bc;{ V16 _vt6 = vectorMergeHighWord(auVar20,auVar18); memcpy(auVar21, &_vt6, 16); }{ V16 _vt7 = vectorMergeHighWord(auVar19,in_vs32); memcpy(auVar16, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(auVar21,auVar16); memcpy(auVar16, &_vt8, 16); }
  pfVar8 = (float *)((int)&uStack_70 + in_r0 & 0xfffffff0);
  *pfVar8 = fVar3;
  pfVar8[1] = fVar3;
  pfVar8[2] = fVar3;
  pfVar8[3] = fVar3;
  if (fStack_68 <= fVar4) {{ V16 _vt9 = vectorMergeHighWord(auVar21,auVar20); memcpy(auVar17, &_vt9, 16); }{ V16 _vt10 = vectorMergeLowWord(auVar21,auVar20); memcpy(auVar21, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(auVar19,auVar18); memcpy(auVar20, &_vt11, 16); }
    dVar12 = (double)lbl_821CC160;{ V16 _vt12 = vectorMergeLowWord(auVar19,auVar18); memcpy(auVar19, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(auVar17,auVar20); memcpy(auVar18, &_vt13, 16); }{ V16 _vt14 = vectorMergeLowWord(auVar17,auVar20); memcpy(auVar20, &_vt14, 16); }
    vectorMergeHighWord(auVar21,auVar19);
    vectorMergeLowWord(auVar21,auVar19);
    fVar3 = fVar3 * (((U64)(lbl_832968D0) >> 0) & 0xFFFFFFFF) + fVar3 * (((U64)(lbl_832968D0) >> 32) & 0xFFFFFFFF) + fVar3 * (((U64)(lbl_832968D8) >> 0) & 0xFFFFFFFF) +
            fVar3 * (((U64)(lbl_832968D8) >> 32) & 0xFFFFFFFF);{ V16 _vt15 = vectorMergeHighWord(auVar19,auVar18); memcpy(auVar18, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(auVar20,auVar16); memcpy(auVar16, &_vt16, 16); }
    vectorMergeHighWord(auVar18,auVar16);
    pfVar8 = (float *)((int)&uStack_70 + in_r0 & 0xfffffff0);
    *pfVar8 = fVar3;
    pfVar8[1] = fVar3;
    pfVar8[2] = fVar3;
    pfVar8[3] = fVar3;
    dVar14 = dVar12;
    dVar15 = dVar12;
    if ((double)fVar5 != dVar12) {
      fVar3 = (float)(dVar13 / (double)fVar5);
      dVar14 = (double)(fVar3 * fVar2);
      dVar15 = (double)(fVar3 * fVar1);
    }
    if ((param_5 & 0xffffffff) != 0) {
      uStack_70 = CONCAT44((float)dVar15,(float)dVar14);
      uVar10 = fn_82531E50(uVar7,param_2,uStack_70);
      *(undefined4 *)param_5 = uVar10;
    }
    uStack_70 = (ulonglong)puVar9[2];
    dVar13 = (double)fn_82539560(dVar15,(double)lbl_82192734,dVar13,dVar12,(double)uStack_70);
    *param_4 = (float)dVar13;
    uStack_70 = (ulonglong)puVar9[3];
    dVar13 = (double)fn_82539560(dVar14);
    param_4[1] = (float)dVar13;
    uVar7 = 1;
    *param_4 = (float)*puVar9 + *param_4;
    uStack_70 = (ulonglong)puVar9[1];
    param_4[1] = (float)((double)uStack_70 + dVar13);
  }
  else {
    if ((param_5 & 0xffffffff) != 0) {
      *(undefined4 *)param_5 = 0;
    }
    uVar7 = 0;
  }
  fn_82F6A58C(uVar7);
  return;
}

