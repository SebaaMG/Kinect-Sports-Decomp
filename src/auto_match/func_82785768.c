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
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_827856F0();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern unsigned int lbl_82002AE0;
extern float lbl_82002C5C;


void fn_82785768(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,
                  float *param_5,ulonglong param_6)

{
  char cVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int *piVar15;
  double extraout_f1;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  
  iVar9 = fn_82F6A530();
  param_6 = param_6 & 0xff;
  if (param_6 == 0) {
    fVar14 = *param_5;
    fVar3 = param_5[1];
    fVar4 = param_5[3];
    fVar5 = param_5[4];
  }
  else {
    fVar14 = param_5[1];
    fVar3 = *param_5;
    fVar4 = param_5[4];
    fVar5 = param_5[3];
  }
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar8 = (float)((double)*param_2 - (double)*param_3) * (float)((double)lbl_82002AE0 / extraout_f1)
  ;
  fVar7 = (float)((double)param_3[1] - (double)param_2[1]) *
          (float)((double)lbl_82002AE0 / extraout_f1);
  dVar21 = (double)(fVar8 * fVar4);
  dVar17 = (double)(fVar7 * fVar5);
  dVar16 = (double)(fVar8 * fVar5);
  dVar23 = (double)(fVar8 * fVar14);
  dVar19 = (double)(fVar8 * fVar3);
  dVar22 = (double)(fVar7 * fVar14);
  dVar20 = (double)(fVar7 * fVar4);
  dVar18 = (double)(fVar7 * fVar3);
  dVar24 = (double)(((float)(dVar16 - dVar19) + (float)(dVar21 - dVar23)) * lbl_82002C5C);
  dVar25 = (double)(((float)(dVar18 - dVar17) + (float)(dVar22 - dVar20)) * lbl_82002C5C);
  if (param_6 == 0) {
    cVar1 = *(char *)((int)param_5 + 0x36);
    cVar2 = *(char *)((int)param_5 + 0x37);
  }
  else {
    cVar1 = *(char *)((int)param_5 + 0x37);
    cVar2 = *(char *)((int)param_5 + 0x36);
  }
  if ((*(char *)((int)param_5 + 0x36) != '\0') ||
     (fVar14 = 0.0, *(char *)((int)param_5 + 0x37) != '\0')) {
    fStack_c8 = -(_seed_nan);
    piVar15 = (int *)(iVar9 + 0x40);
    fStack_d0 = (float)((double)(float)((double)*param_2 - dVar22) + dVar24);
    fStack_cc = (float)((double)(float)((double)param_2[1] - dVar23) + dVar25);
    fn_827856F0(piVar15,&fStack_d0);
    fVar11 = (float)(*(int *)(iVar9 + 0x40) + -1);
    fVar12 = fVar11;
    if (*(char *)(param_5 + 0xe) != '\0') {
      fStack_c8 = -(_seed_nan);
      fStack_d0 = (float)((double)(float)((double)*param_2 + dVar18) + dVar24);
      fStack_cc = (float)((double)(float)((double)param_2[1] + dVar19) + dVar25);
      fn_827856F0(piVar15,&fStack_d0);
      fVar12 = (float)(*piVar15 + -1);
    }
    fVar13 = fVar11;
    if (cVar1 != '\0') {
      fStack_c8 = -(_seed_nan);
      fStack_d0 = (float)((double)(float)((double)*param_2 - dVar20) + dVar24);
      fStack_cc = (float)((double)(float)((double)param_2[1] - dVar21) + dVar25);
      fn_827856F0(piVar15,&fStack_d0);
      fVar13 = (float)(*piVar15 + -1);
    }
    fVar14 = fVar12;
    if (cVar2 != '\0') {
      fStack_c8 = -(_seed_nan);
      fStack_d0 = (float)((double)(float)((double)*param_2 + dVar17) + dVar24);
      fStack_cc = (float)((double)(float)((double)param_2[1] + dVar16) + dVar25);
      fn_827856F0(piVar15,&fStack_d0);
      fVar14 = (float)(*piVar15 + -1);
    }
  }
  if (param_6 == 0) {
    fStack_c8 = *(float *)(iVar9 + 0x10);
    fStack_d0 = (float)((double)*param_2 - dVar22);
    fStack_cc = (float)((double)param_2[1] - dVar23);
    piVar15 = (int *)(iVar9 + 0x40);
    fn_827856F0(piVar15,&fStack_d0);
    iVar10 = *(int *)(iVar9 + 0x40) + -1;
    *(int *)(iVar9 + 0x60) = iVar10;
    if (*(char *)((int)param_5 + 0x36) != '\0') {
      fStack_c8 = -(_seed_nan);
      fStack_d0 = (float)((double)*param_2 - dVar20);
      fStack_cc = (float)((double)param_2[1] - dVar21);
      fn_827856F0(piVar15,&fStack_d0);
      iVar10 = *piVar15 + -1;
    }
    *(int *)(iVar9 + 0x68) = iVar10;
    if (*(char *)(param_5 + 0xe) == '\0') {
      iVar10 = *(int *)(iVar9 + 0x60);
    }
    else {
      fStack_c8 = *(float *)(iVar9 + 0x14);
      fStack_d0 = (float)((double)*param_2 + dVar18);
      fStack_cc = (float)((double)param_2[1] + dVar19);
      fn_827856F0(piVar15,&fStack_d0);
      iVar10 = *piVar15 + -1;
    }
    *(int *)(iVar9 + 100) = iVar10;
    if (*(char *)((int)param_5 + 0x37) != '\0') {
      fStack_c8 = -(_seed_nan);
      fStack_d0 = (float)((double)*param_2 + dVar17);
      fStack_cc = (float)((double)param_2[1] + dVar16);
      fn_827856F0(piVar15,&fStack_d0);
      iVar10 = *piVar15 + -1;
    }
    *(int *)(iVar9 + 0x6c) = iVar10;
  }
  else {
    uVar6 = *(undefined4 *)(iVar9 + 0x68);
    *(undefined4 *)(iVar9 + 0x68) = *(undefined4 *)(iVar9 + 0x6c);
    *(undefined4 *)(iVar9 + 0x6c) = uVar6;
    uVar6 = *(undefined4 *)(iVar9 + 0x60);
    *(undefined4 *)(iVar9 + 0x60) = *(undefined4 *)(iVar9 + 100);
    *(undefined4 *)(iVar9 + 100) = uVar6;
  }
  if (((*(char *)((int)param_5 + 0x36) != '\0') || (*(char *)((int)param_5 + 0x37) != '\0')) &&
     ((*(char *)(param_5 + 0xd) != '\0' || (*(char *)((int)param_5 + 0x35) != '\0')))) {
    fStack_c8 = *(float *)(iVar9 + 0x60);
    fStack_d0 = fVar11;
    fStack_cc = fVar12;
    fn_827856F0(iVar9 + 0x50,&fStack_d0);
    fStack_d0 = *(float *)(iVar9 + 0x60);
    fStack_c8 = *(float *)(iVar9 + 100);
    fStack_cc = fVar12;
    fn_827856F0(iVar9 + 0x50,&fStack_d0);
  }
  if (cVar1 != '\0') {
    fStack_d0 = *(float *)(iVar9 + 0x60);
    fStack_cc = *(float *)(iVar9 + 0x68);
    fStack_c8 = fVar13;
    fn_827856F0(iVar9 + 0x50,&fStack_d0);
    fStack_d0 = *(float *)(iVar9 + 0x60);
    fStack_cc = fVar13;
    fStack_c8 = fVar11;
    fn_827856F0(iVar9 + 0x50,&fStack_d0);
  }
  if (cVar2 != '\0') {
    fStack_d0 = *(float *)(iVar9 + 100);
    fStack_c8 = *(float *)(iVar9 + 0x6c);
    fStack_cc = fVar14;
    fn_827856F0(iVar9 + 0x50,&fStack_d0);
    fStack_d0 = *(float *)(iVar9 + 100);
    fStack_cc = fVar12;
    fStack_c8 = fVar14;
    fn_827856F0(iVar9 + 0x50,&fStack_d0);
  }
  fn_82F6A57C();
  return;
}

