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
extern int fn_8280A550();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


void fn_8280EC58(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = param_1[5];
  fVar2 = *param_1;
  fVar3 = param_1[10];
  fVar4 = fVar2 + fVar1 + fVar3;
  if (lbl_821AAD20 <= fVar4) {
    dVar6 = (double)(fVar4 + lbl_82002AE0);
    dVar5 = (double)fn_8280A550(dVar6);
    dVar5 = (double)(float)(dVar5 * (double)lbl_82002C5C);
    param_2[3] = (float)(dVar5 * dVar6);
    *param_2 = (float)((double)(param_1[6] - param_1[9]) * dVar5);
    param_2[1] = (float)((double)(param_1[8] - param_1[2]) * dVar5);
    param_2[2] = (float)((double)(param_1[1] - param_1[4]) * dVar5);
    return;
  }
  if (fVar1 <= fVar2) {
    if (fVar2 < fVar3) goto LAB_8280ede8;
    dVar6 = (double)(((fVar2 - fVar1) - fVar3) + lbl_82002AE0);
    dVar5 = (double)fn_8280A550(dVar6);
    dVar5 = (double)(float)(dVar5 * (double)lbl_82002C5C);
    *param_2 = (float)(dVar5 * dVar6);
    param_2[1] = (float)((double)(param_1[4] + param_1[1]) * dVar5);
    param_2[2] = (float)((double)(param_1[8] + param_1[2]) * dVar5);
    fVar2 = param_1[9];
    fVar1 = param_1[6];
  }
  else {
    if (fVar3 <= fVar1) {
      dVar6 = (double)(((fVar1 - fVar3) - fVar2) + lbl_82002AE0);
      dVar5 = (double)fn_8280A550(dVar6);
      dVar5 = (double)(float)(dVar5 * (double)lbl_82002C5C);
      param_2[1] = (float)(dVar5 * dVar6);
      param_2[2] = (float)((double)(param_1[9] + param_1[6]) * dVar5);
      *param_2 = (float)((double)(param_1[4] + param_1[1]) * dVar5);
      fVar1 = param_1[8] - param_1[2];
      goto LAB_8280ee4c;
    }
LAB_8280ede8:
    dVar6 = (double)(((fVar3 - fVar1) - fVar2) + lbl_82002AE0);
    dVar5 = (double)fn_8280A550(dVar6);
    dVar5 = (double)(float)(dVar5 * (double)lbl_82002C5C);
    param_2[2] = (float)(dVar5 * dVar6);
    *param_2 = (float)((double)(param_1[8] + param_1[2]) * dVar5);
    param_2[1] = (float)((double)(param_1[9] + param_1[6]) * dVar5);
    fVar1 = param_1[1];
    fVar2 = param_1[4];
  }
  fVar1 = fVar1 - fVar2;
LAB_8280ee4c:
  param_2[3] = (float)((double)fVar1 * dVar5);
  return;
}

