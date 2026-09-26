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
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_826EBD10();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82015528;


void fn_827847F8(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  float fStack_60;
  float fStack_5c;
  
  iVar9 = fn_82F6A53C();
  dVar2 = param_4 - param_6;
  dVar3 = param_6 - param_2;
  dVar4 = param_5 - extraout_f1;
  dVar11 = (double)lbl_82002C5C;
  dVar5 = param_3 - param_5;
  dVar1 = extraout_f1 + param_3;
  param_2 = param_2 + param_4;
  param_3 = param_3 + param_5;
  param_4 = param_4 + param_6;
  dVar10 = extraout_f1;
  while( true ) {
    fVar7 = (float)dVar4;
    fVar6 = (float)dVar3;
    param_4 = (double)(float)((double)(float)param_4 * dVar11);
    param_3 = (double)(float)((double)(float)param_3 * dVar11);
    fVar8 = ABS((float)dVar5 * fVar6 - (float)dVar2 * fVar7);
    if (fVar8 <= lbl_82015528) break;
    if (fVar8 * fVar8 <= (fVar6 * fVar6 + fVar7 * fVar7) * *(float *)(iVar9 + 4)) break;
    param_2 = (double)(float)((double)(float)(param_4 +
                                             (double)(float)((double)(float)param_2 * dVar11)) *
                             dVar11);
    dVar1 = (double)(float)((double)(float)(param_3 + (double)(float)((double)(float)dVar1 * dVar11)
                                           ) * dVar11);
    ((int (*)())fn_827847F8)(dVar10,iVar9);
    dVar10 = dVar1;
    dVar2 = param_4 - param_6;
    dVar4 = param_5 - dVar10;
    dVar5 = param_3 - param_5;
    dVar3 = param_6 - param_2;
    dVar1 = dVar10 + param_3;
    param_2 = param_2 + param_4;
    param_3 = param_3 + param_5;
    param_4 = param_4 + param_6;
  }
  fStack_60 = (float)param_5;
  fStack_5c = (float)param_6;
  fn_826EBD10(iVar9 + 8,&fStack_60);
  *(int *)(*(int *)(iVar9 + 0x28) + 4) = *(int *)(*(int *)(iVar9 + 0x28) + 4) + 1;
  fn_82F6A588();
  return;
}

