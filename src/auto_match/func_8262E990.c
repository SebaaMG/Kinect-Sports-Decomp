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
extern int fn_8262E718();
extern int fn_8262E850();


double fn_8262E990(double param_1,float *param_2)

{
  float fVar1;
  
  if (((uint)param_2[4] & 2) == 0) {
    if (((uint)param_2[4] & 1) != 0) {
      fVar1 = (float)((double)param_2[2] * param_1 + (double)param_2[3]);
      param_2[3] = fVar1;
      if (param_2[1] < fVar1) {
        param_2 = (float *)fn_8262E850();
      }
    }
  }
  else {
    fVar1 = -(float)((double)param_2[2] * param_1 - (double)param_2[3]);
    param_2[3] = fVar1;
    if (fVar1 < *param_2) {
      param_2 = (float *)fn_8262E718();
    }
  }
  return (double)param_2[3];
}

