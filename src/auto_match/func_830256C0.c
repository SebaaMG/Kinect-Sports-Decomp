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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F6A534();
extern int fn_82F6A580();
extern int fn_8301E550();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_820570E0;
extern unsigned int lbl_8217C590;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_830256C0(undefined8 param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float *in_r6;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar4 = (double)fn_82F6A534();
  dVar6 = (double)lbl_821AAD20;
  in_r6[5] = lbl_821AAD20;
  fVar2 = lbl_8217C590;
  fVar1 = lbl_820570E0;
  dVar5 = (double)SQRT((float)(dVar4 * dVar4 + (double)(float)(param_2 * param_2)));
  if (dVar5 == dVar6) {
    in_r6[2] = lbl_8217C590;
    *in_r6 = fVar1;
    in_r6[1] = fVar1;
    in_r6[3] = fVar1;
    in_r6[4] = fVar1;
  }
  else {
    dVar3 = (double)lbl_82002AE0;
    dVar5 = (double)(float)(dVar3 / dVar5);
    dVar7 = (double)lbl_8217C590;
    in_r6[2] = lbl_8217C590;
    dVar11 = (double)(float)(dVar5 * dVar4);
    dVar5 = (double)(float)(dVar5 * param_2);
    if (dVar4 <= dVar6) {
      if (dVar6 < param_2) {
        dVar4 = (double)fn_8301E550(dVar5);
        in_r6[1] = (float)dVar7;
        dVar5 = (double)lbl_8200571C;
        *in_r6 = (float)(dVar4 * dVar5);
        dVar4 = (double)fn_8301E550(-dVar11);
        in_r6[3] = (float)(dVar4 * dVar5);
        in_r6[4] = (float)dVar7;
        goto code_r0x830258e4;
      }
      *in_r6 = fVar2;
      in_r6[1] = fVar2;
      dVar4 = (double)fn_8301E550(-dVar11);
      dVar6 = (double)lbl_8200571C;
      in_r6[3] = (float)(dVar4 * dVar6);
    }
    else {
      if (dVar6 < param_2) {
        if (param_3 <= dVar6) {
          dVar4 = (double)fn_8301E550(dVar5);
          dVar5 = (double)lbl_8200571C;
          *in_r6 = (float)(dVar4 * dVar5);
          dVar4 = (double)fn_8301E550(dVar11);
          in_r6[1] = (float)(dVar4 * dVar5);
          in_r6[3] = (float)dVar7;
          in_r6[4] = (float)dVar7;
        }
        else {
          dVar10 = (double)(float)(dVar3 - param_3);
          fVar1 = (float)((double)(float)(dVar11 * dVar11) * (double)lbl_82005344 - dVar3);
          dVar8 = (double)(float)SQRT(dVar10);
          dVar9 = (double)(fVar1 * fVar1);
          dVar6 = (double)fn_8301E550((double)(SQRT((float)(dVar3 - dVar9)) *
                                                  (float)SQRT(param_3)));
          dVar3 = (double)lbl_8200571C;
          in_r6[2] = (float)(dVar6 * dVar3);
          if (dVar4 <= param_2) {
            dVar4 = (double)fn_8301E550((double)SQRT((float)((double)(float)(dVar10 * dVar5) *
                                                                 dVar5 + (double)(float)(dVar9 * 
                                                  param_3))));
            *in_r6 = (float)(dVar4 * dVar3);
            dVar4 = (double)fn_8301E550((double)(float)(dVar8 * dVar11));
            in_r6[1] = (float)(dVar4 * dVar3);
            in_r6[3] = (float)dVar7;
            in_r6[4] = (float)dVar7;
          }
          else {
            dVar4 = (double)fn_8301E550((double)(float)(dVar8 * dVar5));
            *in_r6 = (float)(dVar4 * dVar3);
            dVar4 = (double)fn_8301E550((double)SQRT((float)((double)(float)(dVar10 * dVar11) *
                                                                 dVar11 + (double)(float)(dVar9 * 
                                                  param_3))));
            in_r6[3] = (float)dVar7;
            in_r6[4] = (float)dVar7;
            in_r6[1] = (float)(dVar4 * dVar3);
          }
        }
        goto code_r0x830258e4;
      }
      *in_r6 = fVar2;
      dVar4 = (double)fn_8301E550(dVar11);
      in_r6[3] = (float)dVar7;
      dVar6 = (double)lbl_8200571C;
      in_r6[1] = (float)(dVar4 * dVar6);
    }
    dVar4 = (double)fn_8301E550(-dVar5);
    in_r6[4] = (float)(dVar4 * dVar6);
  }
code_r0x830258e4:
  fn_82F6A580();
  return;
}

