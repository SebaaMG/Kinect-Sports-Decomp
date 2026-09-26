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
extern int fn_826EBD10();
extern int fn_82F64318();
extern int fn_82F65018();
extern int fn_82F65E18();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82015468;
extern unsigned int uStack_70;


void fn_82779FD8(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  float *pfVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_70;
  
  iVar1 = fn_82F6A538();
  dVar4 = extraout_f1;
  dVar3 = (double)fn_82F65018(param_4,param_3);
  dVar5 = (double)(float)dVar3;
  dVar3 = (double)fn_82F65018(param_6,param_5);
  pfVar2 = (float *)param_8;
  dVar6 = (double)(float)dVar3;
  dVar3 = (double)fn_82F65E18((double)(*(float *)(iVar1 + 4) /
                                       (*pfVar2 * lbl_82002C28 + *(float *)(iVar1 + 4))));
  uStack_70 = CONCAT44((float)(dVar4 + param_3),(float)(param_2 + param_4));
  dVar3 = (double)((float)dVar3 * lbl_82005344);
  fn_826EBD10(param_8 + 8,&uStack_70);
  *(int *)((int)pfVar2[10] + 4) = *(int *)((int)pfVar2[10] + 4) + 1;
  if (dVar6 < dVar5) {
    dVar6 = (double)(float)(dVar6 + (double)lbl_82015468);
  }
  iVar1 = (int)((double)(float)(dVar6 - dVar5) / dVar3);
  uStack_70 = (longlong)(iVar1 + 1);
  if (0 < iVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82F64318((double)(float)((double)(float)((double)(float)(dVar6 - dVar5) /
                                                     (double)uStack_70) + dVar5));
  }
  uStack_70 = CONCAT44((float)(dVar4 + param_5),(float)(param_2 + param_6));
  fn_826EBD10(param_8 + 8,&uStack_70);
  *(int *)((int)pfVar2[10] + 4) = *(int *)((int)pfVar2[10] + 4) + 1;
  fn_82F6A584();
  return;
}

