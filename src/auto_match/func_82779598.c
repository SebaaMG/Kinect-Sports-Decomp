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
extern float lbl_82005328;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82015420;
extern unsigned int lbl_82021540;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82779598(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  fVar1 = lbl_821AAD20;
  dVar4 = (double)lbl_821AAD20;
  dVar5 = dVar4;
  if (*(byte *)(param_1 + 1) != 0) {
    dVar5 = (double)((float)*(byte *)(param_1 + 1) * lbl_82005328);
  }
  dVar3 = dVar4;
  if (*(byte *)(param_1 + 2) != 0) {
    dVar3 = (double)((float)*(byte *)(param_1 + 2) * lbl_82005328);
  }
  dVar6 = dVar4;
  if (*(byte *)(param_1 + 3) != 0) {
    dVar6 = (double)((float)*(byte *)(param_1 + 3) * lbl_82005328);
  }
  dVar7 = dVar6;
  if (dVar3 < dVar6) {
    dVar7 = dVar3;
  }
  if (dVar5 < dVar7) {
    dVar7 = dVar5;
  }
  dVar2 = dVar6;
  if (dVar6 < dVar3) {
    dVar2 = dVar3;
  }
  if (dVar2 < dVar5) {
    dVar2 = dVar5;
  }
  *param_4 = (float)dVar2;
  dVar7 = (double)(float)(dVar2 - dVar7);
  if (dVar2 == dVar4) {
    *param_3 = fVar1;
  }
  else {
    *param_3 = (float)(dVar7 / dVar2);
    if ((double)(float)(dVar7 / dVar2) != dVar4) {
      if (dVar5 == dVar2) {
        fVar1 = (float)((double)(float)(dVar3 - dVar6) / dVar7);
      }
      else {
        if (dVar3 == dVar2) {
          dVar6 = dVar6 - dVar5;
          fVar1 = lbl_82005344;
        }
        else {
          dVar6 = dVar5 - dVar3;
          fVar1 = lbl_82021540;
        }
        fVar1 = (float)((double)(float)dVar6 / dVar7) + fVar1;
      }
      *param_2 = fVar1;
      dVar5 = lbl_82005758;
      dVar3 = (double)(float)((double)fVar1 * lbl_82015420);
      *param_2 = (float)((double)fVar1 * lbl_82015420);
      if (dVar3 < dVar4) {
        *param_2 = (float)(dVar3 + dVar5);
      }
      if ((double)lbl_82002AE0 < (double)*param_2) {
        *param_2 = (float)((double)*param_2 - dVar5);
        return;
      }
      return;
    }
  }
  *param_2 = fVar1;
  return;
}

