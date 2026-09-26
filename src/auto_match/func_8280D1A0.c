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
extern int fn_82F65018();
extern int fn_82F65D50();
extern unsigned int lbl_8201DD70;
extern unsigned int lbl_8201DF4C;
extern unsigned int lbl_821AAD20;


void fn_8280D1A0(float *param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)fn_82F65D50((double)param_1[2]);
  fVar1 = (float)dVar2;
  param_2[1] = fVar1;
  if (lbl_8201DD70 <= fVar1) {
    dVar2 = (double)fn_82F65018((double)param_1[4],(double)param_1[5]);
    *param_2 = (float)dVar2;
    fVar1 = lbl_821AAD20;
  }
  else {
    if (fVar1 <= lbl_8201DF4C) {
      dVar2 = (double)fn_82F65018((double)param_1[4],(double)param_1[5]);
      param_2[2] = lbl_821AAD20;
      *param_2 = -(float)dVar2;
      return;
    }
    dVar2 = (double)fn_82F65018(-(double)param_1[6],(double)param_1[10]);
    *param_2 = (float)dVar2;
    dVar2 = (double)fn_82F65018(-(double)param_1[1],(double)*param_1);
    fVar1 = (float)dVar2;
  }
  param_2[2] = fVar1;
  return;
}

