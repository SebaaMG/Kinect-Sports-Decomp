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


void fn_8268CC30(double param_1,float *param_2,float *param_3,float *param_4)

{
  *param_2 = (float)((double)(float)((double)*param_4 - (double)*param_3) * param_1 +
                    (double)*param_3);
  param_2[3] = (float)((double)(float)((double)param_4[3] - (double)param_3[3]) * param_1 +
                      (double)param_3[3]);
  param_2[1] = (float)((double)(float)((double)param_4[1] - (double)param_3[1]) * param_1 +
                      (double)param_3[1]);
  param_2[4] = (float)((double)(float)((double)param_4[4] - (double)param_3[4]) * param_1 +
                      (double)param_3[4]);
  param_2[2] = (float)((double)(float)((double)param_4[2] - (double)param_3[2]) * param_1 +
                      (double)param_3[2]);
  param_2[5] = (float)((double)(float)((double)param_4[5] - (double)param_3[5]) * param_1 +
                      (double)param_3[5]);
  return;
}

