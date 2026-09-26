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
extern int fn_82809558();


void fn_8280BBD8(float *param_1,float *param_2)

{
  longlong lVar1;
  double dVar2;
  
  *param_2 = *param_1 * *param_1;
  param_2[1] = param_1[4] * param_1[4];
  param_2[2] = param_1[8] * param_1[8];
  param_1 = param_1 + 8;
  lVar1 = 2;
  do {
    *param_2 = param_1[-7] * param_1[-7] + *param_2;
    param_2[1] = param_1[-3] * param_1[-3] + param_2[1];
    param_1 = param_1 + 1;
    param_2[2] = *param_1 * *param_1 + param_2[2];
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  dVar2 = (double)fn_82809558((double)*param_2);
  *param_2 = (float)dVar2;
  dVar2 = (double)fn_82809558((double)param_2[1]);
  param_2[1] = (float)dVar2;
  dVar2 = (double)fn_82809558((double)param_2[2]);
  param_2[2] = (float)dVar2;
  return;
}

