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
extern int fn_827856F0();
extern int fn_82F643F8();
extern int fn_82F65018();
extern int fn_82F65E18();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern unsigned int lbl_82002AE0;
extern float lbl_82002C28;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8201559C;
extern unsigned int uStack_118;
extern unsigned int uStack_120;


void fn_82785BF8(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,
                  float *param_5,ulonglong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_120;
  undefined4 uStack_118;
  
  iVar5 = fn_82F6A530();
  if ((param_6 & 0xff) == 0) {
    fVar1 = *param_5;
    fVar2 = param_5[3];
  }
  else {
    fVar1 = param_5[1];
    fVar2 = param_5[4];
  }
  fVar3 = (*param_2 - *param_3) * (float)((double)lbl_82002AE0 / extraout_f1);
  fVar4 = (param_3[1] - param_2[1]) * (float)((double)lbl_82002AE0 / extraout_f1);
  dVar15 = (double)(fVar3 * fVar2);
  dVar14 = (double)(fVar4 * fVar2);
  dVar13 = (double)(fVar3 * fVar1);
  dVar12 = (double)(fVar4 * fVar1);
  dVar9 = (double)fn_82F65018(-dVar15,-dVar14);
  dVar11 = (double)(float)dVar9;
  dVar10 = (double)(float)((double)(float)(dVar11 + (double)lbl_8201559C) - dVar11);
  dVar9 = (double)fn_82F65E18((double)(param_5[5] /
                                       (*(float *)(iVar5 + 0x28) * lbl_82002C28 + param_5[5])));
  iVar7 = (int)(dVar10 / (double)((float)dVar9 * lbl_82005344)) + 1;
  uStack_120 = (longlong)iVar7;
  dVar9 = (double)(float)((double)(float)(dVar10 / (double)uStack_120) + dVar11);
  if ((param_6 & 0xff) == 0) {
    uStack_118 = *(undefined4 *)(iVar5 + 0x10);
    uStack_120 = CONCAT44((float)((double)*param_2 - dVar12),(float)((double)param_2[1] - dVar13));
    piVar8 = (int *)(iVar5 + 0x40);
    fn_827856F0(piVar8,&uStack_120);
    iVar6 = *(int *)(iVar5 + 0x40) + -1;
    *(int *)(iVar5 + 100) = iVar6;
    *(int *)(iVar5 + 0x60) = iVar6;
    if ((*(char *)((int)param_5 + 0x36) != '\0') || (*(char *)((int)param_5 + 0x37) != '\0')) {
      uStack_118 = 0xffffffff;
      uStack_120 = CONCAT44((float)((double)*param_2 - dVar14),(float)((double)param_2[1] - dVar15))
      ;
      fn_827856F0(piVar8,&uStack_120);
      iVar6 = *piVar8 + -1;
    }
    *(int *)(iVar5 + 0x6c) = iVar6;
    *(int *)(iVar5 + 0x68) = iVar6;
  }
  else {
    *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(iVar5 + 100);
    *(undefined4 *)(iVar5 + 0x68) = *(undefined4 *)(iVar5 + 0x6c);
  }
  if (iVar7 < 1) {
    fn_82F6A57C();
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F643F8(dVar9);
}

