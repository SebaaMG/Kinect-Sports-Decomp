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


undefined8
fn_827EC8A8(double param_1,double param_2,double param_3,double param_4,float *param_5,
             undefined8 param_6,undefined8 param_7,float *param_8)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)(float)((double)param_5[1] + param_1);
  dVar1 = (double)(float)((double)param_8[1] + param_3);
  if (dVar2 <= dVar1) {
    if (dVar2 < (double)param_8[1]) {
      return 0;
    }
  }
  else if (dVar1 < (double)param_5[1]) {
    return 0;
  }
  if ((float)(param_2 + param_4) * (float)(param_2 + param_4) <=
      (param_5[2] - param_8[2]) * (param_5[2] - param_8[2]) +
      (*param_5 - *param_8) * (*param_5 - *param_8)) {
    return 0;
  }
  return 1;
}

