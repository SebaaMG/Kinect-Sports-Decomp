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
extern unsigned int lbl_82021544;
extern unsigned int lbl_821AAD20;


double fn_82C2E0E0(double param_1,double param_2,int param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)lbl_821AAD20;
  dVar4 = param_1;
  if (param_1 <= dVar5) {
    dVar4 = -param_1;
  }
  dVar3 = param_2;
  if (param_2 <= dVar5) {
    dVar3 = -param_2;
  }
  if (dVar4 <= dVar3) {
    param_1 = param_2;
    if (param_2 <= dVar5) {
      param_1 = -param_2;
    }
  }
  else if (param_1 <= dVar5) {
    param_1 = -param_1;
  }
  if (param_1 < (double)*(float *)(param_3 + 0x84)) {
    dVar4 = (double)*(float *)(param_3 + 0x6c);
    if (dVar4 == (double)*(float *)(param_3 + 0x70)) {
      return dVar4;
    }
    dVar3 = (double)(float)(dVar4 - (double)*(float *)(param_3 + 0x70));
    if (dVar3 <= dVar5) {
      dVar3 = -dVar3;
    }
    if (dVar3 < (double)lbl_82021544) {
      return dVar4;
    }
  }
  else {
    fVar1 = (float)(param_1 - (double)*(float *)(param_3 + 0x8c));
    dVar4 = (double)(float)((double)(*(float *)(param_3 + 0x90) * fVar1 * fVar1 +
                                    *(float *)(param_3 + 0x68)) / param_1);
  }
  if ((double)*(float *)(param_3 + 0x70) < dVar4) {
    fVar1 = *(float *)(param_3 + 0x7c);
    fVar2 = *(float *)(param_3 + 0x80);
  }
  else {
    fVar1 = *(float *)(param_3 + 0x74);
    fVar2 = *(float *)(param_3 + 0x78);
  }
  fVar1 = (float)((double)fVar2 * (double)*(float *)(param_3 + 0x70) +
                 (double)(float)((double)fVar1 * dVar4));
  *(float *)(param_3 + 0x70) = fVar1;
  if ((double)*(float *)(param_3 + 0x68) < (double)(float)((double)fVar1 * param_1)) {
    *(float *)(param_3 + 0x70) = (float)((double)*(float *)(param_3 + 0x68) / param_1);
  }
  return (double)*(float *)(param_3 + 0x70);
}

