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
extern int fn_828106A0();


void fn_8281DE00(int param_1,float *param_2)

{
  float *pfVar1;
  longlong lVar2;
  double dVar3;
  
  fn_828106A0(param_2);
  pfVar1 = (float *)(param_1 + 0x14);
  lVar2 = 3;
  do {
    *param_2 = pfVar1[-5] * pfVar1[-5] + *param_2;
    param_2[1] = pfVar1[-2] * pfVar1[-2] + param_2[1];
    pfVar1 = pfVar1 + 1;
    param_2[2] = *pfVar1 * *pfVar1 + param_2[2];
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  dVar3 = (double)fn_82809558((double)*param_2);
  *param_2 = (float)dVar3;
  dVar3 = (double)fn_82809558((double)param_2[1]);
  param_2[1] = (float)dVar3;
  dVar3 = (double)fn_82809558((double)param_2[2]);
  param_2[2] = (float)dVar3;
  return;
}

