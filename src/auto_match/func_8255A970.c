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
extern float lbl_82195590;
extern unsigned int lbl_82195598;
extern float lbl_821955A0;


void fn_8255A970(double param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = (float)((double)*param_3 - (double)*param_2) * lbl_82195590;
  fVar2 = (float)((double)param_3[1] - (double)param_2[1]) * lbl_82195590;
  fVar3 = (float)((double)param_3[2] - (double)param_2[2]) * lbl_82195590;
  dVar6 = (double)((float)((double)(float)(((double)fVar1 - (double)(longlong)fVar1) * lbl_821955A0)
                           * param_1 + (double)*param_2) * lbl_82195590);
  dVar5 = (double)((float)((double)(float)(((double)fVar2 - (double)(longlong)fVar2) * lbl_821955A0)
                           * param_1 + (double)param_2[1]) * lbl_82195590);
  dVar4 = (double)((float)((double)(float)(((double)fVar3 - (double)(longlong)fVar3) * lbl_821955A0)
                           * param_1 + (double)param_2[2]) * lbl_82195590);
  dVar5 = (dVar5 - (double)(longlong)(dVar5 - lbl_82195598)) * lbl_821955A0;
  dVar4 = (dVar4 - (double)(longlong)(dVar4 - lbl_82195598)) * lbl_821955A0;
  *param_5 = (float)((dVar6 - (double)(longlong)(dVar6 - lbl_82195598)) * lbl_821955A0);
  param_5[1] = (float)dVar5;
  param_5[2] = (float)dVar4;
  return;
}

