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
extern int fn_8280A550();
extern int fn_8280A5E8();
extern unsigned int lbl_82002AE0;


/* WARNING: Removing unreachable block (ram,0x8280e4b0) */

void fn_8281E188(double param_1,double param_2,double param_3,double param_4,float *param_5)

{
  int iVar1;
  double dVar2;
  
  *param_5 = (float)param_1;
  param_5[1] = (float)param_2;
  param_5[2] = (float)param_3;
  param_5[3] = (float)param_4;
  dVar2 = (double)(param_5[3] * param_5[3] +
                  param_5[2] * param_5[2] + *param_5 * *param_5 + param_5[1] * param_5[1]);
  iVar1 = fn_8280A5E8((double)(float)(dVar2 - (double)lbl_82002AE0));
  if (iVar1 == 0) {
    dVar2 = (double)fn_8280A550(dVar2);
    *param_5 = (float)((double)*param_5 * dVar2);
    param_5[1] = (float)((double)param_5[1] * dVar2);
    param_5[2] = (float)((double)param_5[2] * dVar2);
    param_5[3] = (float)(dVar2 * (double)param_5[3]);
  }
  return;
}

