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
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_826EBD10();
extern int fn_82F64318();
extern int fn_82F65018();
extern int fn_82F65E18();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82015458;
extern unsigned int lbl_821AAD20;


void fn_8277A4D8(undefined8 param_1,longlong param_2,float *param_3,float *param_4,
                  undefined8 param_5,int param_6)

{
  float *pfVar1;
  int iVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fStack_70;
  float fStack_6c;
  longlong lStack_68;
  
  iVar2 = fn_82F6A540();
  dVar7 = (double)((float)((double)*param_3 - (double)*param_4) *
                   (float)((double)lbl_82002AE0 / extraout_f1) * *(float *)(iVar2 + 4));
  dVar6 = (double)((float)((double)param_4[1] - (double)param_3[1]) *
                   (float)((double)lbl_82002AE0 / extraout_f1) * *(float *)(iVar2 + 4));
  pfVar1 = (float *)param_2;
  if (param_6 == 2) {
    dVar3 = (double)fn_82F65018(-dVar7,-dVar6);
    dVar4 = (double)(float)dVar3;
    dVar5 = (double)(float)((double)(float)(dVar4 + (double)lbl_82015458) - dVar4);
    dVar3 = (double)fn_82F65E18((double)(*(float *)(iVar2 + 4) /
                                         (*pfVar1 * lbl_82002C28 + *(float *)(iVar2 + 4))));
    fStack_70 = (float)((double)*param_3 - dVar6);
    fStack_6c = (float)((double)param_3[1] - dVar7);
    iVar2 = (int)(dVar5 / (double)((float)dVar3 * lbl_82005344));
    lStack_68 = (longlong)(iVar2 + 1);
    dVar3 = (double)(float)((double)(float)(dVar5 / (double)lStack_68) + dVar4);
    fn_826EBD10(param_2 + 8,&fStack_70);
    *(int *)((int)pfVar1[10] + 4) = *(int *)((int)pfVar1[10] + 4) + 1;
    if (0 < iVar2) {
                    /* WARNING: Subroutine does not return */
      fn_82F64318(dVar3);
    }
    dVar6 = (double)*param_3 + dVar6;
    dVar3 = (double)param_3[1] + dVar7;
  }
  else {
    dVar3 = (double)lbl_821AAD20;
    dVar4 = (double)lbl_821AAD20;
    if (param_6 == 1) {
      dVar3 = dVar6;
      dVar4 = dVar7;
    }
    fStack_70 = (float)((double)(float)((double)*param_3 - dVar6) + dVar4);
    fStack_6c = (float)((double)(float)((double)param_3[1] - dVar7) - dVar3);
    fn_826EBD10(param_2 + 8,&fStack_70);
    *(int *)((int)pfVar1[10] + 4) = *(int *)((int)pfVar1[10] + 4) + 1;
    dVar3 = (double)(float)((double)param_3[1] + dVar7) - dVar3;
    dVar6 = (double)(float)((double)*param_3 + dVar4) + dVar6;
  }
  fStack_6c = (float)dVar3;
  fStack_70 = (float)dVar6;
  fn_826EBD10(param_2 + 8,&fStack_70);
  *(int *)((int)pfVar1[10] + 4) = *(int *)((int)pfVar1[10] + 4) + 1;
  fn_82F6A58C();
  return;
}

