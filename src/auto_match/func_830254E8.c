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
extern unsigned int lbl_821AAD20;


void fn_830254E8(double param_1,int param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (0xff < param_2) {
    fVar1 = *(float *)((param_2 + -0x100) * 4 + -0x7cd9b558);
    if (0x17f < param_2) {
      param_4[1] = (lbl_82002AE0 - fVar1) + param_4[1];
      param_4[4] = fVar1 + param_4[4];
      return;
    }
    param_4[3] = (lbl_82002AE0 - fVar1) + param_4[3];
    param_4[4] = fVar1 + param_4[4];
    return;
  }
  dVar6 = (double)*(float *)(param_2 * 4 + -0x7cd9b558);
  dVar2 = (double)lbl_82002AE0;
  dVar5 = (double)(float)(dVar2 - dVar6);
  if (0x7f < param_2) {
    param_4[3] = (float)(dVar5 + (double)param_4[3]);
    *param_4 = (float)((double)*param_4 + dVar6);
    return;
  }
  if ((double)lbl_821AAD20 < param_1) {
    dVar4 = (double)*(float *)(param_2 * 8 + -0x7cd9b558);
    param_4[2] = (float)(dVar4 * param_1 + (double)param_4[2]);
    dVar3 = (double)(float)(dVar2 - param_1);
    dVar2 = (double)(float)((double)(float)(dVar2 - dVar4) * param_1);
    if (0x3f < param_2) {
      param_4[1] = (float)(dVar3 * dVar5 + (double)param_4[1]);
      *param_4 = (float)((double)(float)(dVar3 * dVar6 + dVar2) + (double)*param_4);
      return;
    }
    *param_4 = (float)(dVar3 * dVar6 + (double)*param_4);
    param_4[1] = (float)((double)(float)(dVar3 * dVar5 + dVar2) + (double)param_4[1]);
    return;
  }
  param_4[1] = (float)(dVar5 + (double)param_4[1]);
  *param_4 = (float)((double)*param_4 + dVar6);
  return;
}

