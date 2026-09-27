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
#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_827856F0();
extern int fn_82F643F8();
extern int fn_82F65018();
extern int fn_82F65E18();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_d8;
extern float lbl_82002C28;
extern unsigned int lbl_82005344;
extern float lbl_8200D8DC;
extern unsigned int lbl_82015468;
extern unsigned int uStack_e0;


void fn_82786028(undefined8 param_1,float *param_2,int param_3,float *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  int *piVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_e0;
  int iStack_d8;
  struct { float first; float second; } stack_pair_a0;

  float fStack_98;
  
  iVar3 = fn_82F6A548();
  cVar1 = *(char *)((int)param_4 + 0xda);
  cVar2 = *(char *)((int)param_4 + 0xd9);
  if (*(char *)((int)param_4 + 0xd7) == '\0') {
    if (cVar1 == '\0' && cVar2 == '\0') {
      fVar8 = param_4[0x22];
    }
    else {
      fVar8 = *param_2 - param_4[2];
    }
    dVar16 = (double)fVar8;
    if (cVar1 == '\0' && cVar2 == '\0') {
      fVar8 = param_4[0x23];
    }
    else {
      fVar8 = param_2[1] - param_4[3];
    }
    dVar17 = (double)fVar8;
    fStack_98 = *(float *)(iVar3 + 0x14);
    dVar14 = (double)*param_2;
    dVar15 = (double)param_2[1];
    stack_pair_a0.first = (float)((double)param_4[0xc] + dVar14);
    stack_pair_a0.second = (float)((double)param_4[0xd] + dVar15);
    piVar13 = (int *)(iVar3 + 0x40);
    dVar18 = (double)(float)((double)(float)(dVar16 - dVar14) * (double)*(float *)(param_3 + 0x1c) +
                            dVar14);
    dVar14 = (double)(float)((double)(float)(dVar17 - dVar15) * (double)*(float *)(param_3 + 0x1c) +
                            dVar15);
    fn_827856F0(piVar13,&stack_pair_a0.first);
    fVar6 = (float)(*(int *)(iVar3 + 0x40) + -1);
    fVar8 = fVar6;
    if (*(char *)(param_3 + 0x37) != '\0') {
      fStack_98 = -(_seed_nan);
      stack_pair_a0.first = param_4[0xe] + *param_2;
      stack_pair_a0.second = param_4[0xf] + param_2[1];
      fn_827856F0(piVar13,&stack_pair_a0.first);
      fVar8 = (float)(*piVar13 + -1);
    }
    fVar12 = fVar6;
    if (*(char *)(param_3 + 0x38) != '\0') {
      fStack_98 = *(float *)(iVar3 + 0x10);
      stack_pair_a0.first = (float)dVar18;
      stack_pair_a0.second = (float)dVar14;
      fn_827856F0(piVar13,&stack_pair_a0.first);
      fVar12 = (float)(*piVar13 + -1);
    }
    fVar10 = fVar12;
    if (*(char *)(param_3 + 0x36) != '\0') {
      stack_pair_a0.first = (float)dVar16;
      fStack_98 = -(_seed_nan);
      stack_pair_a0.second = (float)dVar17;
      fn_827856F0(piVar13,&stack_pair_a0.first);
      fVar10 = (float)(*piVar13 + -1);
    }
    if ((*(char *)(param_3 + 0x34) != '\0') || (*(char *)(param_3 + 0x35) != '\0')) {
      stack_pair_a0.first = *(float *)(iVar3 + 100);
      stack_pair_a0.second = fVar6;
      fStack_98 = fVar12;
      fn_827856F0(iVar3 + 0x50,&stack_pair_a0.first);
      stack_pair_a0.first = *(float *)(iVar3 + 100);
      fStack_98 = *(float *)(iVar3 + 0x60);
      stack_pair_a0.second = fVar12;
      fn_827856F0(iVar3 + 0x50,&stack_pair_a0.first);
    }
    if (*(char *)(param_3 + 0x37) != '\0') {
      fStack_98 = *(float *)(iVar3 + 100);
      stack_pair_a0.first = *(float *)(iVar3 + 0x6c);
      stack_pair_a0.second = fVar6;
      fn_827856F0(iVar3 + 0x50,&stack_pair_a0.first);
      stack_pair_a0.first = *(float *)(iVar3 + 0x6c);
      stack_pair_a0.second = fVar8;
      fStack_98 = fVar6;
      fn_827856F0(iVar3 + 0x50,&stack_pair_a0.first);
    }
    if (*(char *)(param_3 + 0x36) != '\0') {
      stack_pair_a0.first = *(float *)(iVar3 + 0x60);
      stack_pair_a0.second = fVar12;
      fStack_98 = fVar10;
      fn_827856F0(iVar3 + 0x50,&stack_pair_a0.first);
      stack_pair_a0.first = *(float *)(iVar3 + 0x60);
      fStack_98 = *(float *)(iVar3 + 0x68);
      stack_pair_a0.second = fVar10;
      fn_827856F0(iVar3 + 0x50,&stack_pair_a0.first);
    }
    *(float *)(iVar3 + 0x60) = fVar12;
    *(float *)(iVar3 + 0x68) = fVar10;
    *(float *)(iVar3 + 100) = fVar6;
    *(float *)(iVar3 + 0x6c) = fVar8;
    if (cVar1 != '\0' || cVar2 != '\0') {
      fStack_98 = *(float *)(iVar3 + 0x10);
      stack_pair_a0.first = *param_2 - param_4[4];
      stack_pair_a0.second = param_2[1] - param_4[5];
      fn_827856F0(piVar13,&stack_pair_a0.first);
      *(int *)(iVar3 + 0x60) = *piVar13 + -1;
      if (*(char *)(param_3 + 0x36) != '\0') {
        fStack_98 = -(_seed_nan);
        stack_pair_a0.first = *param_2 - param_4[6];
        stack_pair_a0.second = param_2[1] - param_4[7];
        fn_827856F0(piVar13,&stack_pair_a0.first);
        fVar12 = (float)(*piVar13 + -1);
      }
      *(float *)(iVar3 + 0x68) = fVar12;
    }
    if (*(float *)(iVar3 + 0x28) * lbl_8200D8DC < *(float *)(param_3 + 0x10) - param_4[0x1b]) {
      dVar16 = (double)fn_82F65018((double)param_4[0xf],(double)param_4[0xe]);
      dVar14 = (double)(float)dVar16;
      dVar16 = (double)fn_82F65018((double)param_4[0x13],(double)param_4[0x12]);
      dVar16 = (double)(float)dVar16;
      if (dVar16 < dVar14) {
        dVar16 = (double)(float)(dVar16 + (double)lbl_82015468);
      }
      dVar15 = (double)(float)(dVar16 - dVar14);
      dVar16 = (double)fn_82F65E18((double)(*(float *)(param_3 + 0x10) /
                                            (*(float *)(iVar3 + 0x28) * lbl_82002C28 +
                                            *(float *)(param_3 + 0x10))));
      lVar4 = (ulonglong)(uint)(int)(dVar15 / (double)((float)dVar16 * lbl_82005344)) + 1;
      uStack_e0 = (longlong)(int)lVar4;
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F643F8((double)(float)((double)(float)(dVar15 / (double)uStack_e0) + dVar14));
      }
    }
  }
  else {
    if (cVar1 == '\0' && cVar2 == '\0') {
      fVar8 = param_4[0x24];
    }
    else {
      fVar8 = param_4[0xe] + *param_2;
    }
    dVar16 = (double)fVar8;
    if (cVar1 == '\0' && cVar2 == '\0') {
      fVar8 = param_4[0x25];
    }
    else {
      fVar8 = param_4[0xf] + param_2[1];
    }
    dVar17 = (double)fVar8;
    iStack_d8 = *(int *)(iVar3 + 0x10);
    dVar14 = (double)*param_2;
    dVar15 = (double)param_2[1];
    uStack_e0 = CONCAT44((float)(dVar14 - (double)*param_4),(float)(dVar15 - (double)param_4[1]));
    piVar13 = (int *)(iVar3 + 0x40);
    dVar18 = (double)(float)((double)(float)(dVar16 - dVar14) * (double)*(float *)(param_3 + 0x20) +
                            dVar14);
    dVar14 = (double)(float)((double)(float)(dVar17 - dVar15) * (double)*(float *)(param_3 + 0x20) +
                            dVar15);
    fn_827856F0(piVar13,&uStack_e0);
    iVar5 = *(int *)(iVar3 + 0x40) + -1;
    iVar7 = iVar5;
    if (*(char *)(param_3 + 0x36) != '\0') {
      iStack_d8 = -1;
      uStack_e0 = CONCAT44(*param_2 - param_4[2],param_2[1] - param_4[3]);
      fn_827856F0(piVar13,&uStack_e0);
      iVar7 = *piVar13 + -1;
    }
    iVar11 = iVar5;
    if (*(char *)(param_3 + 0x38) != '\0') {
      iStack_d8 = *(int *)(iVar3 + 0x14);
      uStack_e0 = CONCAT44((float)dVar18,(float)dVar14);
      fn_827856F0(piVar13,&uStack_e0);
      iVar11 = *piVar13 + -1;
    }
    iVar9 = iVar11;
    if (*(char *)(param_3 + 0x37) != '\0') {
      iStack_d8 = -1;
      uStack_e0 = CONCAT44((float)dVar16,(float)dVar17);
      fn_827856F0(piVar13,&uStack_e0);
      iVar9 = *piVar13 + -1;
    }
    if ((*(char *)(param_3 + 0x34) != '\0') || (*(char *)(param_3 + 0x35) != '\0')) {
      uStack_e0 = CONCAT44(*(undefined4 *)(iVar3 + 0x60),iVar11);
      iStack_d8 = iVar5;
      fn_827856F0(iVar3 + 0x50,&uStack_e0);
      uStack_e0 = *(longlong *)(iVar3 + 0x60);
      iStack_d8 = iVar11;
      fn_827856F0(iVar3 + 0x50,&uStack_e0);
    }
    if (*(char *)(param_3 + 0x36) != '\0') {
      uStack_e0 = CONCAT44(*(undefined4 *)(iVar3 + 0x68),*(undefined4 *)(iVar3 + 0x60));
      iStack_d8 = iVar5;
      fn_827856F0(iVar3 + 0x50,&uStack_e0);
      uStack_e0 = CONCAT44(*(undefined4 *)(iVar3 + 0x68),iVar5);
      iStack_d8 = iVar7;
      fn_827856F0(iVar3 + 0x50,&uStack_e0);
    }
    if (*(char *)(param_3 + 0x37) != '\0') {
      uStack_e0 = CONCAT44(*(undefined4 *)(iVar3 + 100),iVar9);
      iStack_d8 = iVar11;
      fn_827856F0(iVar3 + 0x50,&uStack_e0);
      uStack_e0 = CONCAT44(*(undefined4 *)(iVar3 + 100),*(undefined4 *)(iVar3 + 0x6c));
      iStack_d8 = iVar9;
      fn_827856F0(iVar3 + 0x50,&uStack_e0);
    }
    *(int *)(iVar3 + 0x60) = iVar5;
    *(int *)(iVar3 + 0x68) = iVar7;
    *(int *)(iVar3 + 100) = iVar11;
    *(int *)(iVar3 + 0x6c) = iVar9;
    if (cVar1 != '\0' || cVar2 != '\0') {
      iStack_d8 = *(int *)(iVar3 + 0x14);
      uStack_e0 = CONCAT44(param_4[0x10] + *param_2,param_4[0x11] + param_2[1]);
      fn_827856F0(piVar13,&uStack_e0);
      *(int *)(iVar3 + 100) = *piVar13 + -1;
      if (*(char *)(param_3 + 0x37) != '\0') {
        iStack_d8 = -1;
        uStack_e0 = CONCAT44(param_4[0x12] + *param_2,param_4[0x13] + param_2[1]);
        fn_827856F0(piVar13,&uStack_e0);
        iVar11 = *piVar13 + -1;
      }
      *(int *)(iVar3 + 0x6c) = iVar11;
    }
    if (*(float *)(iVar3 + 0x28) * lbl_8200D8DC < *(float *)(param_3 + 0xc) - param_4[0x19]) {
      dVar16 = (double)fn_82F65018(-(double)param_4[3],-(double)param_4[2]);
      dVar14 = (double)(float)dVar16;
      dVar16 = (double)fn_82F65018(-(double)param_4[7],-(double)param_4[6]);
      dVar16 = (double)(float)dVar16;
      if (dVar14 < dVar16) {
        dVar16 = (double)(float)(dVar16 - (double)lbl_82015468);
      }
      dVar15 = (double)(float)(dVar14 - dVar16);
      dVar16 = (double)fn_82F65E18((double)(*(float *)(param_3 + 0xc) /
                                            (*(float *)(iVar3 + 0x28) * lbl_82002C28 +
                                            *(float *)(param_3 + 0xc))));
      lVar4 = (ulonglong)(uint)(int)(dVar15 / (double)((float)dVar16 * lbl_82005344)) + 1;
      uStack_e0 = (longlong)(int)lVar4;
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F643F8((double)(float)(dVar14 - (double)(float)(dVar15 / (double)uStack_e0)));
      }
    }
  }
  fn_82F6A594();
  return;
}

