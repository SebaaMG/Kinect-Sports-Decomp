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
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern float lbl_8200D8DC;
extern unsigned int lbl_821AAD20;


void fn_82786A30(undefined8 param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float fVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  
  iVar4 = fn_82F6A540();
  cVar1 = *(char *)((int)param_4 + 0xda);
  cVar2 = *(char *)((int)param_4 + 0xd9);
  dVar18 = (double)lbl_821AAD20;
  if (*(char *)((int)param_4 + 0xd7) == '\0') {
    if (cVar1 == '\0' && cVar2 == '\0') {
      fVar9 = param_4[0x22];
    }
    else {
      fVar9 = *param_2 - param_4[2];
    }
    dVar14 = (double)fVar9;
    if (cVar1 == '\0' && cVar2 == '\0') {
      fVar9 = param_4[0x23];
    }
    else {
      fVar9 = param_2[1] - param_4[3];
    }
    dVar15 = (double)fVar9;
    dVar12 = (double)*param_2;
    dVar17 = (double)(float)((double)(float)(dVar14 - dVar12) * (double)param_3[7] + dVar12);
    dVar16 = (double)(float)((double)(float)(dVar15 - (double)param_2[1]) * (double)param_3[7] +
                            (double)param_2[1]);
    if (param_5 == 0) {
      fVar9 = param_4[0x1a];
      dVar11 = (double)(param_4[0x33] - fVar9);
      if ((double)(param_4[0x33] - fVar9) == dVar18) {
        dVar11 = (double)lbl_82002AE0;
      }
      dVar13 = (double)(((param_3[0xc] - fVar9) - param_3[4]) + param_3[1]);
      if (dVar11 < dVar13) {
        dVar13 = dVar11;
      }
      bVar10 = (double)(param_4[0x27] - param_4[0x1b]) == dVar18;
      dVar18 = (double)((float)((double)(param_3[10] - fVar9) + dVar13) /
                       (float)(dVar11 * (double)lbl_82005344));
      dVar11 = (double)(param_4[0x27] - param_4[0x1b]);
      if (bVar10) {
        dVar11 = (double)lbl_82002AE0;
      }
      fStack_a8 = *(float *)(iVar4 + 0x14);
      fStack_b0 = (float)((double)(float)((double)param_4[0x30] -
                                         (double)(float)((double)param_4[0xc] + dVar12)) * dVar18 +
                         (double)(float)((double)param_4[0xc] + dVar12));
      fStack_ac = (float)((double)(float)((double)param_4[0x31] -
                                         (double)(param_4[0xd] + param_2[1])) * dVar18 +
                         (double)(param_4[0xd] + param_2[1]));
      dVar12 = (double)(((((param_3[10] - param_4[0x1b]) + param_3[4]) - param_3[1]) +
                        (param_3[0xc] - param_4[0x1b])) / (float)(dVar11 * (double)lbl_82005344));
      fn_827856F0(iVar4 + 0x40,&fStack_b0);
      iVar3 = *(int *)(iVar4 + 0x40);
    }
    else {
      fStack_a8 = *(float *)(iVar4 + 0x14);
      fStack_b0 = (float)((double)param_4[0xc] + dVar12);
      fStack_ac = param_4[0xd] + param_2[1];
      fn_827856F0(iVar4 + 0x40,&fStack_b0);
      iVar3 = *(int *)(iVar4 + 0x40);
      dVar12 = (double)(param_4[0x27] - param_4[0x1b]);
      if (dVar12 == dVar18) {
        dVar12 = (double)lbl_82002AE0;
      }
      dVar12 = (double)(float)((double)(((param_4[0x1a] + param_3[4]) - param_3[1]) - param_4[0x1b])
                              / dVar12);
    }
    fVar5 = (float)(iVar3 + -1);
    piVar8 = (int *)(iVar4 + 0x40);
    fVar9 = fVar5;
    if (*(char *)((int)param_3 + 0x37) != '\0') {
      fStack_a8 = -(_seed_nan);
      fStack_b0 = (float)((double)(float)((double)param_4[0x24] - (double)(param_4[0xe] + *param_2))
                          * dVar12 + (double)(param_4[0xe] + *param_2));
      fStack_ac = (float)((double)(float)((double)param_4[0x25] -
                                         (double)(param_4[0xf] + param_2[1])) * dVar12 +
                         (double)(param_4[0xf] + param_2[1]));
      fn_827856F0(piVar8,&fStack_b0);
      fVar9 = (float)(*piVar8 + -1);
    }
    fVar7 = fVar5;
    if (*(char *)(param_3 + 0xe) != '\0') {
      fStack_a8 = *(float *)(iVar4 + 0x10);
      fStack_b0 = (float)dVar17;
      fStack_ac = (float)dVar16;
      fn_827856F0(piVar8,&fStack_b0);
      fVar7 = (float)(*piVar8 + -1);
    }
    fVar6 = fVar7;
    if (*(char *)((int)param_3 + 0x36) != '\0') {
      fStack_b0 = (float)dVar14;
      fStack_a8 = -(_seed_nan);
      fStack_ac = (float)dVar15;
      fn_827856F0(piVar8,&fStack_b0);
      fVar6 = (float)(*piVar8 + -1);
    }
    if ((*(char *)(param_3 + 0xd) != '\0') || (*(char *)((int)param_3 + 0x35) != '\0')) {
      fStack_b0 = *(float *)(iVar4 + 100);
      fStack_ac = fVar5;
      fStack_a8 = fVar7;
      fn_827856F0(iVar4 + 0x50,&fStack_b0);
      fStack_b0 = *(float *)(iVar4 + 100);
      fStack_a8 = *(float *)(iVar4 + 0x60);
      fStack_ac = fVar7;
      fn_827856F0(iVar4 + 0x50,&fStack_b0);
    }
    if (*(char *)((int)param_3 + 0x37) != '\0') {
      fStack_a8 = *(float *)(iVar4 + 100);
      fStack_b0 = *(float *)(iVar4 + 0x6c);
      fStack_ac = fVar5;
      fn_827856F0(iVar4 + 0x50,&fStack_b0);
      fStack_b0 = *(float *)(iVar4 + 0x6c);
      fStack_ac = fVar9;
      fStack_a8 = fVar5;
      fn_827856F0(iVar4 + 0x50,&fStack_b0);
    }
    if (*(char *)((int)param_3 + 0x36) != '\0') {
      fStack_b0 = *(float *)(iVar4 + 0x60);
      fStack_ac = fVar7;
      fStack_a8 = fVar6;
      fn_827856F0(iVar4 + 0x50,&fStack_b0);
      fStack_b0 = *(float *)(iVar4 + 0x60);
      fStack_a8 = *(float *)(iVar4 + 0x68);
      fStack_ac = fVar6;
      fn_827856F0(iVar4 + 0x50,&fStack_b0);
    }
    *(float *)(iVar4 + 0x60) = fVar7;
    *(float *)(iVar4 + 0x68) = fVar6;
    *(float *)(iVar4 + 100) = fVar5;
    *(float *)(iVar4 + 0x6c) = fVar9;
    if (cVar1 != '\0' || cVar2 != '\0') {
      fStack_a8 = *(float *)(iVar4 + 0x10);
      fStack_b0 = *param_2 - param_4[4];
      fStack_ac = param_2[1] - param_4[5];
      fn_827856F0(piVar8,&fStack_b0);
      *(int *)(iVar4 + 0x60) = *piVar8 + -1;
      if (*(char *)((int)param_3 + 0x36) != '\0') {
        fStack_a8 = -(_seed_nan);
        fStack_b0 = *param_2 - param_4[6];
        fStack_ac = param_2[1] - param_4[7];
        fn_827856F0(piVar8,&fStack_b0);
        fVar7 = (float)(*piVar8 + -1);
      }
      *(float *)(iVar4 + 0x68) = fVar7;
    }
    if (*(float *)(iVar4 + 0x28) * lbl_8200D8DC < param_3[4] - param_4[0x1b]) {
      if (*(char *)(param_3 + 0xe) != '\0') {
        fStack_a8 = *(float *)(iVar4 + 0x14);
        fStack_b0 = param_4[0x10] + *param_2;
        fStack_ac = param_4[0x11] + param_2[1];
        if (param_5 == 0) {
          fStack_b0 = (float)((double)(float)((double)param_4[0x30] - (double)fStack_b0) * dVar18 +
                             (double)fStack_b0);
          fStack_ac = (float)((double)(float)((double)param_4[0x31] - (double)fStack_ac) * dVar18 +
                             (double)fStack_ac);
        }
        fn_827856F0(piVar8,&fStack_b0);
        fVar5 = (float)(*piVar8 + -1);
      }
      fVar9 = fVar5;
      if (*(char *)((int)param_3 + 0x37) != '\0') {
        fStack_a8 = -(_seed_nan);
        fStack_b0 = (float)((double)(float)((double)param_4[0x24] -
                                           (double)(param_4[0x12] + *param_2)) * dVar12 +
                           (double)(param_4[0x12] + *param_2));
        fStack_ac = (float)((double)(float)((double)param_4[0x25] -
                                           (double)(param_4[0x13] + param_2[1])) * dVar12 +
                           (double)(param_4[0x13] + param_2[1]));
        fn_827856F0(piVar8,&fStack_b0);
        fVar9 = (float)(*piVar8 + -1);
      }
      if (*(char *)((int)param_3 + 0x35) != '\0') {
        fStack_b0 = *(float *)(iVar4 + 0x60);
        fStack_ac = *(float *)(iVar4 + 100);
        fStack_a8 = fVar5;
        fn_827856F0(iVar4 + 0x50,&fStack_b0);
      }
      if (*(char *)((int)param_3 + 0x37) != '\0') {
        fStack_b0 = *(float *)(iVar4 + 100);
        fStack_ac = *(float *)(iVar4 + 0x6c);
        fStack_a8 = fVar5;
        fn_827856F0(iVar4 + 0x50,&fStack_b0);
        fStack_b0 = *(float *)(iVar4 + 0x6c);
        fStack_ac = fVar9;
        fStack_a8 = fVar5;
        fn_827856F0(iVar4 + 0x50,&fStack_b0);
      }
      *(float *)(iVar4 + 100) = fVar5;
      *(float *)(iVar4 + 0x6c) = fVar9;
    }
  }
  else {
    if (cVar1 == '\0' && cVar2 == '\0') {
      fVar9 = param_4[0x24];
    }
    else {
      fVar9 = param_4[0xe] + *param_2;
    }
    dVar14 = (double)fVar9;
    if (cVar1 == '\0' && cVar2 == '\0') {
      fVar9 = param_4[0x25];
    }
    else {
      fVar9 = param_4[0xf] + param_2[1];
    }
    dVar15 = (double)fVar9;
    dVar12 = (double)*param_2;
    dVar17 = (double)(float)((double)(float)(dVar14 - dVar12) * (double)param_3[8] + dVar12);
    dVar16 = (double)(float)((double)(float)(dVar15 - (double)param_2[1]) * (double)param_3[8] +
                            (double)param_2[1]);
    if (param_5 == 0) {
      fVar9 = param_4[0x18];
      dVar11 = (double)(param_4[0x32] - fVar9);
      if ((double)(param_4[0x32] - fVar9) == dVar18) {
        dVar11 = (double)lbl_82002AE0;
      }
      dVar13 = (double)(((param_3[0xb] - fVar9) - param_3[3]) + *param_3);
      if (dVar11 < dVar13) {
        dVar13 = dVar11;
      }
      bVar10 = (double)(param_4[0x26] - param_4[0x19]) == dVar18;
      dVar18 = (double)((float)((double)(param_3[9] - fVar9) + dVar13) /
                       (float)(dVar11 * (double)lbl_82005344));
      dVar11 = (double)(param_4[0x26] - param_4[0x19]);
      if (bVar10) {
        dVar11 = (double)lbl_82002AE0;
      }
      fStack_a8 = *(float *)(iVar4 + 0x10);
      fStack_b0 = (float)((double)(float)((double)param_4[0x2e] -
                                         (double)(float)(dVar12 - (double)*param_4)) * dVar18 +
                         (double)(float)(dVar12 - (double)*param_4));
      fStack_ac = (float)((double)(float)((double)param_4[0x2f] - (double)(param_2[1] - param_4[1]))
                          * dVar18 + (double)(param_2[1] - param_4[1]));
      dVar12 = (double)(((((param_3[9] - param_4[0x19]) + param_3[3]) - *param_3) +
                        (param_3[0xb] - param_4[0x19])) / (float)(dVar11 * (double)lbl_82005344));
      fn_827856F0(iVar4 + 0x40,&fStack_b0);
      iVar3 = *(int *)(iVar4 + 0x40);
    }
    else {
      fStack_a8 = *(float *)(iVar4 + 0x10);
      fStack_b0 = (float)(dVar12 - (double)*param_4);
      fStack_ac = param_2[1] - param_4[1];
      fn_827856F0(iVar4 + 0x40,&fStack_b0);
      iVar3 = *(int *)(iVar4 + 0x40);
      dVar12 = (double)(param_4[0x26] - param_4[0x19]);
      if (dVar12 == dVar18) {
        dVar12 = (double)lbl_82002AE0;
      }
      dVar12 = (double)(float)((double)(((param_4[0x18] + param_3[3]) - *param_3) - param_4[0x19]) /
                              dVar12);
    }
    fVar5 = (float)(iVar3 + -1);
    piVar8 = (int *)(iVar4 + 0x40);
    fVar9 = fVar5;
    if (*(char *)((int)param_3 + 0x36) != '\0') {
      fStack_a8 = -(_seed_nan);
      fStack_b0 = (float)((double)(float)((double)param_4[0x22] - (double)(*param_2 - param_4[2])) *
                          dVar12 + (double)(*param_2 - param_4[2]));
      fStack_ac = (float)((double)(float)((double)param_4[0x23] - (double)(param_2[1] - param_4[3]))
                          * dVar12 + (double)(param_2[1] - param_4[3]));
      fn_827856F0(piVar8,&fStack_b0);
      fVar9 = (float)(*piVar8 + -1);
    }
    fVar7 = fVar5;
    if (*(char *)(param_3 + 0xe) != '\0') {
      fStack_a8 = *(float *)(iVar4 + 0x14);
      fStack_b0 = (float)dVar17;
      fStack_ac = (float)dVar16;
      fn_827856F0(piVar8,&fStack_b0);
      fVar7 = (float)(*piVar8 + -1);
    }
    fVar6 = fVar7;
    if (*(char *)((int)param_3 + 0x37) != '\0') {
      fStack_b0 = (float)dVar14;
      fStack_a8 = -(_seed_nan);
      fStack_ac = (float)dVar15;
      fn_827856F0(piVar8,&fStack_b0);
      fVar6 = (float)(*piVar8 + -1);
    }
    if ((*(char *)(param_3 + 0xd) != '\0') || (*(char *)((int)param_3 + 0x35) != '\0')) {
      fStack_b0 = *(float *)(iVar4 + 0x60);
      fStack_ac = fVar7;
      fStack_a8 = fVar5;
      fn_827856F0(iVar4 + 0x50,&fStack_b0);
      fStack_b0 = *(float *)(iVar4 + 0x60);
      fStack_ac = *(float *)(iVar4 + 100);
      fStack_a8 = fVar7;
      fn_827856F0(iVar4 + 0x50,&fStack_b0);
    }
    if (*(char *)((int)param_3 + 0x36) != '\0') {
      fStack_ac = *(float *)(iVar4 + 0x60);
      fStack_b0 = *(float *)(iVar4 + 0x68);
      fStack_a8 = fVar5;
      fn_827856F0(iVar4 + 0x50,&fStack_b0);
      fStack_b0 = *(float *)(iVar4 + 0x68);
      fStack_ac = fVar5;
      fStack_a8 = fVar9;
      fn_827856F0(iVar4 + 0x50,&fStack_b0);
    }
    if (*(char *)((int)param_3 + 0x37) != '\0') {
      fStack_b0 = *(float *)(iVar4 + 100);
      fStack_ac = fVar6;
      fStack_a8 = fVar7;
      fn_827856F0(iVar4 + 0x50,&fStack_b0);
      fStack_b0 = *(float *)(iVar4 + 100);
      fStack_ac = *(float *)(iVar4 + 0x6c);
      fStack_a8 = fVar6;
      fn_827856F0(iVar4 + 0x50,&fStack_b0);
    }
    *(float *)(iVar4 + 0x60) = fVar5;
    *(float *)(iVar4 + 0x68) = fVar9;
    *(float *)(iVar4 + 100) = fVar7;
    *(float *)(iVar4 + 0x6c) = fVar6;
    if (cVar1 != '\0' || cVar2 != '\0') {
      fStack_a8 = *(float *)(iVar4 + 0x14);
      fStack_b0 = param_4[0x10] + *param_2;
      fStack_ac = param_4[0x11] + param_2[1];
      fn_827856F0(piVar8,&fStack_b0);
      *(int *)(iVar4 + 100) = *piVar8 + -1;
      if (*(char *)((int)param_3 + 0x37) != '\0') {
        fStack_a8 = -(_seed_nan);
        fStack_b0 = param_4[0x12] + *param_2;
        fStack_ac = param_4[0x13] + param_2[1];
        fn_827856F0(piVar8,&fStack_b0);
        fVar7 = (float)(*piVar8 + -1);
      }
      *(float *)(iVar4 + 0x6c) = fVar7;
    }
    if (*(float *)(iVar4 + 0x28) * lbl_8200D8DC < param_3[3] - param_4[0x19]) {
      if (*(char *)(param_3 + 0xe) != '\0') {
        fStack_a8 = *(float *)(iVar4 + 0x10);
        fStack_b0 = *param_2 - param_4[4];
        fStack_ac = param_2[1] - param_4[5];
        if (param_5 == 0) {
          fStack_b0 = (float)((double)(float)((double)param_4[0x2e] - (double)fStack_b0) * dVar18 +
                             (double)fStack_b0);
          fStack_ac = (float)((double)(float)((double)param_4[0x2f] - (double)fStack_ac) * dVar18 +
                             (double)fStack_ac);
        }
        fn_827856F0(piVar8,&fStack_b0);
        fVar5 = (float)(*piVar8 + -1);
      }
      fVar9 = fVar5;
      if (*(char *)((int)param_3 + 0x36) != '\0') {
        fStack_a8 = -(_seed_nan);
        fStack_b0 = (float)((double)(float)((double)param_4[0x22] - (double)(*param_2 - param_4[6]))
                            * dVar12 + (double)(*param_2 - param_4[6]));
        fStack_ac = (float)((double)(float)((double)param_4[0x23] -
                                           (double)(param_2[1] - param_4[7])) * dVar12 +
                           (double)(param_2[1] - param_4[7]));
        fn_827856F0(piVar8,&fStack_b0);
        fVar9 = (float)(*piVar8 + -1);
      }
      if (*(char *)(param_3 + 0xd) != '\0') {
        fStack_b0 = *(float *)(iVar4 + 100);
        fStack_a8 = *(float *)(iVar4 + 0x60);
        fStack_ac = fVar5;
        fn_827856F0(iVar4 + 0x50,&fStack_b0);
      }
      if (*(char *)((int)param_3 + 0x36) != '\0') {
        fStack_b0 = *(float *)(iVar4 + 0x60);
        fStack_a8 = *(float *)(iVar4 + 0x68);
        fStack_ac = fVar5;
        fn_827856F0(iVar4 + 0x50,&fStack_b0);
        fStack_b0 = *(float *)(iVar4 + 0x68);
        fStack_ac = fVar5;
        fStack_a8 = fVar9;
        fn_827856F0(iVar4 + 0x50,&fStack_b0);
      }
      *(float *)(iVar4 + 0x60) = fVar5;
      *(float *)(iVar4 + 0x68) = fVar9;
    }
  }
  fn_82F6A58C();
  return;
}

