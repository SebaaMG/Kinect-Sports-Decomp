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
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_827856F0();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;


void fn_827875E0(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,
                  float *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float fVar6;
  double extraout_f1;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  iVar1 = fn_82F6A540();
  fStack_88 = *(float *)(iVar1 + 0x10);
  piVar5 = (int *)(iVar1 + 0x40);
  fVar3 = (*param_2 - *param_3) * (float)((double)lbl_82002AE0 / extraout_f1);
  fVar2 = (param_3[1] - param_2[1]) * (float)((double)lbl_82002AE0 / extraout_f1);
  dVar9 = (double)(param_5[1] * fVar2);
  dVar11 = (double)(param_5[3] * fVar2);
  dVar8 = (double)(param_5[4] * fVar2);
  dVar10 = (double)(param_5[1] * fVar3);
  dVar12 = (double)(param_5[3] * fVar3);
  dVar7 = (double)(param_5[4] * fVar3);
  fStack_8c = param_3[1] - *param_5 * fVar3;
  fStack_90 = *param_3 - *param_5 * fVar2;
  fn_827856F0(piVar5,&fStack_90);
  fVar3 = (float)(*(int *)(iVar1 + 0x40) + -1);
  fVar2 = fVar3;
  if (*(char *)((int)param_5 + 0x36) != '\0') {
    fStack_88 = -(_seed_nan);
    fStack_90 = (float)((double)*param_3 - dVar11);
    fStack_8c = (float)((double)param_3[1] - dVar12);
    fn_827856F0(piVar5,&fStack_90);
    fVar2 = (float)(*piVar5 + -1);
  }
  fVar4 = fVar3;
  if (*(char *)(param_5 + 0xe) != '\0') {
    fStack_88 = *(float *)(iVar1 + 0x14);
    fStack_90 = (float)((double)*param_3 + dVar9);
    fStack_8c = (float)(dVar10 + (double)param_3[1]);
    fn_827856F0(piVar5,&fStack_90);
    fVar4 = (float)(*piVar5 + -1);
  }
  fVar6 = fVar4;
  if (*(char *)((int)param_5 + 0x37) != '\0') {
    fStack_88 = -(_seed_nan);
    fStack_90 = (float)((double)*param_3 + dVar8);
    fStack_8c = (float)(dVar7 + (double)param_3[1]);
    fn_827856F0(piVar5,&fStack_90);
    fVar6 = (float)(*piVar5 + -1);
  }
  if ((*(char *)(param_5 + 0xd) != '\0') || (*(char *)((int)param_5 + 0x35) != '\0')) {
    fStack_90 = *(float *)(iVar1 + 0x60);
    fStack_8c = fVar4;
    fStack_88 = fVar3;
    fn_827856F0(iVar1 + 0x50,&fStack_90);
    fStack_90 = *(float *)(iVar1 + 0x60);
    fStack_8c = *(float *)(iVar1 + 100);
    fStack_88 = fVar4;
    fn_827856F0(iVar1 + 0x50,&fStack_90);
  }
  if (*(char *)((int)param_5 + 0x36) != '\0') {
    fStack_90 = *(float *)(iVar1 + 0x68);
    fStack_8c = *(float *)(iVar1 + 0x60);
    fStack_88 = fVar3;
    fn_827856F0(iVar1 + 0x50,&fStack_90);
    fStack_90 = *(float *)(iVar1 + 0x68);
    fStack_8c = fVar3;
    fStack_88 = fVar2;
    fn_827856F0(iVar1 + 0x50,&fStack_90);
  }
  if (*(char *)((int)param_5 + 0x37) != '\0') {
    fStack_90 = *(float *)(iVar1 + 100);
    fStack_8c = fVar6;
    fStack_88 = fVar4;
    fn_827856F0(iVar1 + 0x50,&fStack_90);
    fStack_90 = *(float *)(iVar1 + 100);
    fStack_8c = *(float *)(iVar1 + 0x6c);
    fStack_88 = fVar6;
    fn_827856F0(iVar1 + 0x50,&fStack_90);
  }
  *(float *)(iVar1 + 0x60) = fVar3;
  *(float *)(iVar1 + 0x68) = fVar2;
  *(float *)(iVar1 + 100) = fVar4;
  *(float *)(iVar1 + 0x6c) = fVar6;
  fn_82F6A58C();
  return;
}

