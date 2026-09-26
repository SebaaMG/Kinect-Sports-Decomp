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
extern int fn_82809CB0();
extern int fn_8280A550();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200D8C0;
extern unsigned int lbl_8201DFFC;
extern unsigned int lbl_821AAD20;


void fn_8280D9D8(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  pfVar3 = (float *)fn_82F6A548();
  dVar8 = (double)(param_2[1] * pfVar3[1] + *pfVar3 * *param_2 + param_2[2] * pfVar3[2] +
                  lbl_82002AE0);
  dVar4 = (double)fn_82809CB0(dVar8);
  if ((double)lbl_8201DFFC <= dVar4) {
    dVar7 = (double)(param_2[2] * pfVar3[1] - param_2[1] * pfVar3[2]);
    dVar6 = (double)(param_2[1] * *pfVar3 - pfVar3[1] * *param_2);
    dVar5 = (double)(pfVar3[2] * *param_2 - param_2[2] * *pfVar3);
    dVar4 = (double)fn_8280A550(dVar8);
    dVar4 = (double)(float)(dVar4 * (double)lbl_8200D8C0);
    *param_3 = (float)(dVar4 * dVar7);
    param_3[1] = (float)(dVar4 * dVar5);
    param_3[2] = (float)(dVar4 * dVar6);
    param_3[3] = (float)(dVar4 * dVar8);
  }
  else {
    dVar4 = (double)fn_82809CB0((double)*pfVar3);
    fVar2 = lbl_821AAD20;
    dVar8 = (double)lbl_821AAD20;
    if (dVar4 <= (double)lbl_82002C5C) {
      *param_3 = lbl_821AAD20;
      fVar1 = -pfVar3[2];
      param_3[1] = fVar1;
      fVar2 = pfVar3[1];
      param_3[2] = fVar2;
      dVar4 = (double)fn_8280A550((double)(fVar1 * fVar1 + fVar2 * fVar2));
      param_3[1] = (float)(dVar4 * (double)param_3[1]);
    }
    else {
      fVar1 = pfVar3[2];
      *param_3 = fVar1;
      param_3[1] = fVar2;
      fVar2 = -*pfVar3;
      param_3[2] = fVar2;
      dVar4 = (double)fn_8280A550((double)(fVar1 * fVar1 + fVar2 * fVar2));
      *param_3 = (float)((double)*param_3 * dVar4);
    }
    param_3[2] = (float)((double)param_3[2] * dVar4);
    param_3[3] = (float)dVar8;
  }
  fn_82F6A594();
  return;
}

