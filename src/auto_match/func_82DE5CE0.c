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


void fn_82DE5CE0(double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  float *param_6,float *param_7)

{
  float fVar1;
  
  *param_6 = *(float *)(param_3 + 0x68) / *(float *)(param_3 + 100);
  param_6[1] = *(float *)(param_3 + 0x6c) / *(float *)(param_3 + 100);
  param_6[2] = *(float *)(param_3 + 0x70) / *(float *)(param_3 + 100);
  *param_7 = (float)((double)(*(float *)(param_3 + 0x78) + *(float *)(param_3 + 0x7c)) * param_2);
  param_7[5] = (float)((double)(*(float *)(param_3 + 0x74) + *(float *)(param_3 + 0x7c)) * param_2);
  param_7[10] = (float)((double)(*(float *)(param_3 + 0x74) + *(float *)(param_3 + 0x78)) * param_2)
  ;
  fVar1 = -(float)((double)*(float *)(param_3 + 0x80) * param_2);
  param_7[1] = fVar1;
  param_7[4] = fVar1;
  fVar1 = -(float)((double)*(float *)(param_3 + 0x84) * param_2);
  param_7[6] = fVar1;
  param_7[9] = fVar1;
  fVar1 = -(float)((double)*(float *)(param_3 + 0x88) * param_2);
  param_7[8] = fVar1;
  param_7[2] = fVar1;
  *param_7 = -(float)((double)(param_6[1] * param_6[1] + param_6[2] * param_6[2]) * param_1 -
                     (double)*param_7);
  param_7[5] = -(float)((double)(*param_6 * *param_6 + param_6[2] * param_6[2]) * param_1 -
                       (double)param_7[5]);
  param_7[10] = -(float)((double)(*param_6 * *param_6 + param_6[1] * param_6[1]) * param_1 -
                        (double)param_7[10]);
  fVar1 = (float)((double)(*param_6 * param_6[1]) * param_1 + (double)param_7[1]);
  param_7[1] = fVar1;
  param_7[4] = fVar1;
  fVar1 = (float)((double)(param_6[2] * param_6[1]) * param_1 + (double)param_7[6]);
  param_7[6] = fVar1;
  param_7[9] = fVar1;
  fVar1 = (float)((double)(param_6[2] * *param_6) * param_1 + (double)param_7[8]);
  param_7[8] = fVar1;
  param_7[2] = fVar1;
  return;
}

