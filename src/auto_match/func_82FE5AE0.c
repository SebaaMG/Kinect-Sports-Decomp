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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82021544;


void fn_82FE5AE0(double param_1,float *param_2,undefined8 param_3,int param_4)

{
  uint uVar2;
  longlong lVar1;
  float *pfVar3;
  float *pfVar4;
  double dVar5;
  
  dVar5 = (double)lbl_82002AE0;
  if (dVar5 < param_1) {
    param_1 = dVar5;
  }
  if (ABS((float)(param_1 - dVar5)) <= lbl_82021544) {
    return;
  }
  pfVar3 = param_2 + param_4;
  if (pfVar3 <= param_2) {
    return;
  }
  uVar2 = (int)pfVar3 + (3 - (int)param_2);
  if (3 < (int)(((int)uVar2 >> 2) + (uint)((int)uVar2 < 0 && (uVar2 & 3) != 0))) {
    do {
      *param_2 = (float)((double)*param_2 * param_1);
      param_2[1] = (float)((double)param_2[1] * param_1);
      param_2[2] = (float)((double)param_2[2] * param_1);
      param_2[3] = (float)((double)param_2[3] * param_1);
      param_2 = param_2 + 4;
    } while ((int)param_2 < (int)(pfVar3 + -3));
  }
  if (pfVar3 <= param_2) {
    return;
  }
  pfVar4 = param_2 + -1;
  lVar1 = (ulonglong)((uint)((int)pfVar3 + (-1 - (int)param_2)) >> 2) + 1;
  do {
    pfVar3 = pfVar4 + 1;
    pfVar4 = pfVar4 + 1;
    *pfVar4 = (float)((double)*pfVar3 * param_1);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

