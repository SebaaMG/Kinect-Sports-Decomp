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
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_8280A5D8();
extern int fn_8280A5E8();
extern int fn_82810328();
extern unsigned int lbl_82002AE0;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8285E970(double param_1,int param_2,undefined8 param_3,int param_4,longlong param_5,
                  float *param_6,int param_7,int *param_8)

{
  float fVar1;
  bool bVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar15 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  
  param_1 = -param_1;
  bVar2 = false;
  iVar4 = (int)param_5;
  if (0 < iVar4) {
    pfVar5 = (float *)(in_r0 + param_2 & 0xfffffff0);
    fVar17 = *pfVar5;
    fVar18 = pfVar5[1];
    fVar19 = pfVar5[2];
    fVar20 = pfVar5[3];{ V16 _vt0 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar13, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar14, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar16, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar15, &_vt3, 16); }
    vectorMergeHighWord(auVar14,auVar16);
    vectorMergeHighWord(auVar13,auVar15);
    vectorMergeLowWord(auVar14,auVar16);
    vectorMergeLowWord(auVar13,auVar15);
    pfVar5 = param_6;
    do {
      pfVar8 = (float *)((param_4 - (int)param_6) + (int)pfVar5 & 0xfffffff0);
      fVar1 = *pfVar8 * fVar17 + pfVar8[1] * fVar18 + pfVar8[2] * fVar19 + pfVar8[3] * fVar20;{ V16 _vt4 = vectorMergeHighWord(in_vs40,auVar13); memcpy(auVar13, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar14,in_vs39); memcpy(auVar14, &_vt5, 16); }{ V16 _vt6 = vectorMergeHighWord(auVar14,auVar13); memcpy(auVar14, &_vt6, 16); }
      pfVar8 = (float *)(in_r0 + (int)pfVar5 & 0xfffffff0);
      *pfVar8 = fVar1;
      pfVar8[1] = fVar1;
      pfVar8[2] = fVar1;
      pfVar8[3] = fVar1;
      pfVar5 = pfVar5 + 4;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if ((iVar4 != 0) && (bVar2 = true, param_1 < (double)param_6[2])) {
    bVar2 = false;
  }
  iVar7 = 0;
  *param_8 = 0;
  if (0 < iVar4) {
    dVar12 = (double)lbl_82002AE0;
    pfVar5 = param_6;
    do {
      iVar7 = iVar7 + 1;
      pfVar8 = (float *)(*param_8 * 0x10 + param_7);
      pfVar9 = param_6 + (iVar7 - (iVar7 / iVar4) * iVar4) * 4;
      fVar17 = pfVar9[2];
      bVar10 = (double)fVar17 <= param_1;
      if ((bVar2) && (bVar10)) {
        fVar18 = *pfVar9;
        fVar19 = pfVar9[1];
        fVar20 = pfVar9[3];
        *param_8 = *param_8 + 1;
        *pfVar8 = fVar18;
        pfVar8[1] = fVar19;
        pfVar8[2] = fVar17;
        pfVar8[3] = fVar20;
      }
      else if (bVar2) {
        if (bVar10) {
          if (!bVar2) goto LAB_8285eb48;
        }
        else {
          fn_82810328(pfVar9,pfVar5,&fStack_70);
          iVar3 = fn_8280A5E8((double)fStack_68);
          if (iVar3 == 0) {
            dVar11 = (double)fn_8280A5D8((double)fStack_68);
            fVar17 = pfVar5[2];
            fVar18 = *pfVar5;
            fVar19 = pfVar5[1];
            *param_8 = *param_8 + 1;
            fVar17 = (float)(dVar11 * (double)(float)(param_1 - (double)fVar17));
            *pfVar8 = fStack_70 * fVar17 + fVar18;
            pfVar8[1] = fStack_6c * fVar17 + fVar19;
            pfVar8[2] = (float)param_1;
            pfVar8[3] = (float)dVar12;
          }
        }
      }
      else {
LAB_8285eb48:
        if (bVar10) {
          fn_82810328(pfVar5,pfVar9,&fStack_70);
          iVar3 = fn_8280A5E8((double)fStack_68);
          if (iVar3 == 0) {
            dVar11 = (double)fn_8280A5D8((double)fStack_68);
            fVar17 = pfVar9[2];
            fVar18 = *pfVar9;
            fVar19 = pfVar9[1];
            *param_8 = *param_8 + 1;
            fVar17 = (float)(dVar11 * (double)(float)(param_1 - (double)fVar17));
            *pfVar8 = fStack_70 * fVar17 + fVar18;
            pfVar8[1] = fStack_6c * fVar17 + fVar19;
            pfVar8[2] = (float)param_1;
            pfVar8[3] = (float)dVar12;
          }
          fVar17 = *pfVar9;
          fVar18 = pfVar9[1];
          iVar3 = *param_8 * 0x10;
          fVar19 = pfVar9[2];
          fVar20 = pfVar9[3];
          iVar6 = iVar3 + param_7;
          *param_8 = *param_8 + 1;
          *(float *)(iVar3 + param_7) = fVar17;
          *(float *)(iVar6 + 4) = fVar18;
          *(float *)(iVar6 + 8) = fVar19;
          *(float *)(iVar6 + 0xc) = fVar20;
        }
      }
      pfVar5 = pfVar5 + 4;
      bVar2 = bVar10;
    } while (iVar7 < iVar4);
  }
  return;
}

