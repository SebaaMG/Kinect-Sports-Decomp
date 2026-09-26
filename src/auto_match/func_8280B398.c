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


void fn_8280B398(double param_1,double param_2,double param_3,float *param_4,float *param_5)

{
  *param_5 = (float)((double)*param_4 * param_1);
  param_5[1] = (float)((double)param_4[1] * param_1);
  param_5[2] = (float)((double)param_4[2] * param_1);
  param_5[3] = (float)((double)param_4[3] * param_1);
  param_5[4] = (float)((double)param_4[4] * param_2);
  param_5[5] = (float)((double)param_4[5] * param_2);
  param_5[6] = (float)((double)param_4[6] * param_2);
  param_5[7] = (float)((double)param_4[7] * param_2);
  param_5[8] = (float)((double)param_4[8] * param_3);
  param_5[9] = (float)((double)param_4[9] * param_3);
  param_5[10] = (float)((double)param_4[10] * param_3);
  param_5[0xb] = (float)((double)param_4[0xb] * param_3);
  if (param_5 == param_4) {
    return;
  }
  param_5[0xc] = param_4[0xc];
  param_5[0xd] = param_4[0xd];
  param_5[0xe] = param_4[0xe];
  param_5[0xf] = param_4[0xf];
  return;
}

