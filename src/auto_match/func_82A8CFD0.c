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
extern unsigned int fStack_3c;
extern int fn_82F68CC0();
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


float * fn_82A8CFD0(double param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fStack_3c;
  
  iVar3 = *(int *)(param_3 + 0x5964);
  dVar10 = (double)(float)((double)param_4[1] * param_1);
  fVar6 = (float)(iVar3 + -1);
  dVar11 = (double)*(float *)(param_3 + 0x5968);
  dVar12 = (double)(float)((double)(uint)fVar6 / dVar11);
  fn_82F68CC0(param_2,param_4,0x20);
  fVar4 = param_4[4];
  fVar2 = *param_4;
  fVar5 = param_4[2];
  fVar1 = (float)((double)fVar2 + dVar10);
  dVar7 = (double)fVar1;
  *param_2 = fVar1;
  param_2[5] = fVar2;
  param_2[7] = (float)dVar10;
  param_2[6] = fVar4;
  if (fVar5 == 2.8026e-45) {
    dVar7 = (double)lbl_821AAD20;
    dVar10 = (double)lbl_82005344;
    while ((dVar8 = (double)*param_2, dVar8 < dVar7 || (dVar12 < dVar8))) {
      param_2[1] = -param_2[1];
      dVar9 = (double)(float)(dVar12 * dVar10 - dVar8);
      if (dVar8 < 0.0) {
        dVar9 = -dVar8;
      }
      *param_2 = (float)dVar9;
    }
    fStack_3c = (float)(longlong)(dVar8 * dVar11);
  }
  else {
    dVar10 = (double)lbl_821AAD20;
    if (dVar7 < dVar10) {
      if (fVar5 == 0.0) {
        *param_2 = lbl_821AAD20;
        param_2[4] = 0.0;
        return param_2;
      }
      if (fVar5 != 1.4013e-45) {
        return param_2;
      }
      do {
        dVar7 = (double)(float)((double)*param_2 + dVar12);
        *param_2 = (float)((double)*param_2 + dVar12);
      } while (dVar7 < dVar10);
      fStack_3c = (float)(longlong)(dVar7 * dVar11);
      if ((uint)fStack_3c <= iVar3 - 1U) {
        fStack_3c = (float)(longlong)(dVar7 * dVar11);
        fVar6 = fStack_3c;
      }
      goto LAB_82a8d18c;
    }
    if (dVar12 <= dVar7) {
      if (fVar5 == 0.0) {
        *param_2 = (float)dVar12;
      }
      else {
        if (fVar5 != 1.4013e-45) {
          return param_2;
        }
        do {
          dVar7 = (double)(float)((double)*param_2 - dVar12);
          *param_2 = (float)((double)*param_2 - dVar12);
        } while (dVar12 <= dVar7);
        fStack_3c = (float)(longlong)(dVar7 * dVar11);
        if ((uint)fStack_3c <= iVar3 - 1U) {
          fStack_3c = (float)(longlong)(dVar7 * dVar11);
          fVar6 = fStack_3c;
        }
      }
      goto LAB_82a8d18c;
    }
    fStack_3c = (float)(longlong)(dVar7 * dVar11);
  }
  if ((uint)fStack_3c <= iVar3 - 1U) {
    fVar6 = fStack_3c;
  }
LAB_82a8d18c:
  param_2[4] = fVar6;
  return param_2;
}

