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


void fn_83023180(double param_1,float *param_2,float *param_3)

{
  *param_2 = param_3[8];
  param_2[1] = (float)((double)(*param_3 - param_3[8]) * param_1);
  param_2[2] = param_3[9];
  param_2[3] = (float)((double)(param_3[1] - param_3[9]) * param_1);
  param_2[4] = param_3[10];
  param_2[5] = (float)((double)(param_3[2] - param_3[10]) * param_1);
  param_2[6] = param_3[0xd];
  param_2[7] = (float)((double)(param_3[5] - param_3[0xd]) * param_1);
  param_2[8] = param_3[0xb];
  param_2[9] = (float)((double)(param_3[3] - param_3[0xb]) * param_1);
  param_2[10] = param_3[0xc];
  param_2[0xb] = (float)((double)(param_3[4] - param_3[0xc]) * param_1);
  return;
}

