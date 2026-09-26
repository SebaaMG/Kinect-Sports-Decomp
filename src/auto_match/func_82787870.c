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
#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_827856F0();
extern int fn_82786028();
extern int fn_82786A30();
extern int fn_82F6A540();
extern int fn_82F6A58C();


void fn_82787870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int *piVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  
  iVar8 = fn_82F6A540();
  iVar6 = (int)param_4;
  cVar4 = *(char *)(iVar6 + 0xda);
  pfVar9 = (float *)param_2;
  dVar15 = (double)*pfVar9;
  cVar5 = *(char *)(iVar6 + 0xd9);
  iVar7 = (int)param_3;
  if (*(char *)(iVar6 + 0xd7) == '\0') {
    dVar17 = (double)*(float *)(iVar6 + 0x90);
    dVar18 = (double)*(float *)(iVar6 + 0x94);
    dVar16 = (double)(float)(dVar17 - dVar15) * (double)*(float *)(iVar7 + 0x20);
    dVar3 = (double)(float)(dVar18 - (double)pfVar9[1]) * (double)*(float *)(iVar7 + 0x20) +
            (double)pfVar9[1];
    if (*(float *)(iVar7 + 0x30) < *(float *)(iVar6 + 0x9c)) {
      if (param_5 < 2) goto LAB_82787904;
      if (param_5 == 2) goto LAB_827878ec;
    }
    if (cVar4 == '\0' && cVar5 == '\0') {
      fVar10 = *(float *)(iVar6 + 0x88);
    }
    else {
      fVar10 = (float)(dVar15 - (double)*(float *)(iVar6 + 8));
    }
    dVar19 = (double)fVar10;
    if (cVar4 == '\0' && cVar5 == '\0') {
      fVar10 = *(float *)(iVar6 + 0x8c);
    }
    else {
      fVar10 = pfVar9[1] - *(float *)(iVar6 + 0xc);
    }
    dVar20 = (double)fVar10;
    dVar1 = (double)(float)(dVar19 - dVar15) * (double)*(float *)(iVar7 + 0x1c);
    dVar2 = (double)(float)(dVar20 - (double)pfVar9[1]) * (double)*(float *)(iVar7 + 0x1c) +
            (double)pfVar9[1];
  }
  else {
    dVar19 = (double)*(float *)(iVar6 + 0x88);
    dVar20 = (double)*(float *)(iVar6 + 0x8c);
    dVar1 = (double)(float)(dVar19 - dVar15) * (double)*(float *)(iVar7 + 0x1c);
    dVar2 = (double)(float)(dVar20 - (double)pfVar9[1]) * (double)*(float *)(iVar7 + 0x1c) +
            (double)pfVar9[1];
    if (*(float *)(iVar7 + 0x2c) < *(float *)(iVar6 + 0x98)) {
      if (param_5 < 2) {
LAB_82787904:
        fn_82786A30(iVar8,param_2,param_3,param_4);
        goto LAB_82787cf0;
      }
      if (param_5 == 2) {
LAB_827878ec:
        fn_82786028(iVar8,param_2,param_3,param_4);
        goto LAB_82787cf0;
      }
    }
    if (cVar4 == '\0' && cVar5 == '\0') {
      fVar10 = *(float *)(iVar6 + 0x90);
    }
    else {
      fVar10 = (float)((double)*(float *)(iVar6 + 0x38) + dVar15);
    }
    dVar17 = (double)fVar10;
    if (cVar4 == '\0' && cVar5 == '\0') {
      fVar10 = *(float *)(iVar6 + 0x94);
    }
    else {
      fVar10 = *(float *)(iVar6 + 0x3c) + pfVar9[1];
    }
    dVar18 = (double)fVar10;
    dVar16 = (double)(float)(dVar17 - dVar15) * (double)*(float *)(iVar7 + 0x20);
    dVar3 = (double)(float)(dVar18 - (double)pfVar9[1]) * (double)*(float *)(iVar7 + 0x20) +
            (double)pfVar9[1];
  }
  fStack_ac = (float)dVar2;
  fStack_b0 = (float)(dVar1 + dVar15);
  dVar16 = (double)(float)(dVar16 + dVar15);
  dVar15 = (double)(float)dVar3;
  fStack_a8 = *(float *)(iVar8 + 0x10);
  piVar14 = (int *)(iVar8 + 0x40);
  fn_827856F0(piVar14,&fStack_b0);
  fVar11 = (float)(*(int *)(iVar8 + 0x40) + -1);
  fVar10 = fVar11;
  if (*(char *)(iVar7 + 0x36) != '\0') {
    fStack_b0 = (float)dVar19;
    fStack_a8 = -(_seed_nan);
    fStack_ac = (float)dVar20;
    fn_827856F0(piVar14,&fStack_b0);
    fVar10 = (float)(*piVar14 + -1);
  }
  fVar12 = fVar11;
  if (*(char *)(iVar7 + 0x38) != '\0') {
    fStack_a8 = *(float *)(iVar8 + 0x14);
    fStack_b0 = (float)dVar16;
    fStack_ac = (float)dVar15;
    fn_827856F0(piVar14,&fStack_b0);
    fVar12 = (float)(*piVar14 + -1);
  }
  fVar13 = fVar12;
  if (*(char *)(iVar7 + 0x37) != '\0') {
    fStack_b0 = (float)dVar17;
    fStack_a8 = -(_seed_nan);
    fStack_ac = (float)dVar18;
    fn_827856F0(piVar14,&fStack_b0);
    fVar13 = (float)(*piVar14 + -1);
  }
  if ((*(char *)(iVar7 + 0x34) != '\0') || (*(char *)(iVar7 + 0x35) != '\0')) {
    fStack_b0 = *(float *)(iVar8 + 0x60);
    fStack_ac = fVar12;
    fStack_a8 = fVar11;
    fn_827856F0(iVar8 + 0x50,&fStack_b0);
    fStack_b0 = *(float *)(iVar8 + 0x60);
    fStack_ac = *(float *)(iVar8 + 100);
    fStack_a8 = fVar12;
    fn_827856F0(iVar8 + 0x50,&fStack_b0);
  }
  if (*(char *)(iVar7 + 0x36) != '\0') {
    fStack_ac = *(float *)(iVar8 + 0x60);
    fStack_b0 = *(float *)(iVar8 + 0x68);
    fStack_a8 = fVar11;
    fn_827856F0(iVar8 + 0x50,&fStack_b0);
    fStack_b0 = *(float *)(iVar8 + 0x68);
    fStack_ac = fVar11;
    fStack_a8 = fVar10;
    fn_827856F0(iVar8 + 0x50,&fStack_b0);
  }
  if (*(char *)(iVar7 + 0x37) != '\0') {
    fStack_b0 = *(float *)(iVar8 + 100);
    fStack_ac = fVar13;
    fStack_a8 = fVar12;
    fn_827856F0(iVar8 + 0x50,&fStack_b0);
    fStack_b0 = *(float *)(iVar8 + 100);
    fStack_ac = *(float *)(iVar8 + 0x6c);
    fStack_a8 = fVar13;
    fn_827856F0(iVar8 + 0x50,&fStack_b0);
  }
  *(float *)(iVar8 + 0x60) = fVar11;
  *(float *)(iVar8 + 0x68) = fVar10;
  *(float *)(iVar8 + 100) = fVar12;
  *(float *)(iVar8 + 0x6c) = fVar13;
  if (cVar4 != '\0' || cVar5 != '\0') {
    if (*(char *)(iVar6 + 0xd7) == '\0') {
      fStack_a8 = *(float *)(iVar8 + 0x10);
      fStack_b0 = *pfVar9 - *(float *)(iVar6 + 0x10);
      fStack_ac = pfVar9[1] - *(float *)(iVar6 + 0x14);
      fn_827856F0(piVar14,&fStack_b0);
      *(int *)(iVar8 + 0x60) = *piVar14 + -1;
      if (*(char *)(iVar7 + 0x36) != '\0') {
        fStack_a8 = -(_seed_nan);
        fStack_b0 = *pfVar9 - *(float *)(iVar6 + 0x18);
        fStack_ac = pfVar9[1] - *(float *)(iVar6 + 0x1c);
        fn_827856F0(piVar14,&fStack_b0);
        fVar11 = (float)(*piVar14 + -1);
      }
      *(float *)(iVar8 + 0x68) = fVar11;
    }
    else {
      fStack_a8 = *(float *)(iVar8 + 0x14);
      fStack_b0 = *(float *)(iVar6 + 0x40) + *pfVar9;
      fStack_ac = *(float *)(iVar6 + 0x44) + pfVar9[1];
      fn_827856F0(piVar14,&fStack_b0);
      *(int *)(iVar8 + 100) = *piVar14 + -1;
      if (*(char *)(iVar7 + 0x37) != '\0') {
        fStack_a8 = -(_seed_nan);
        fStack_b0 = *(float *)(iVar6 + 0x48) + *pfVar9;
        fStack_ac = *(float *)(iVar6 + 0x4c) + pfVar9[1];
        fn_827856F0(piVar14,&fStack_b0);
        fVar12 = (float)(*piVar14 + -1);
      }
      *(float *)(iVar8 + 0x6c) = fVar12;
    }
  }
LAB_82787cf0:
  fn_82F6A58C();
  return;
}

