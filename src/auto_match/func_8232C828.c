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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


undefined8 fn_8232C828(double param_1,undefined8 param_2,uint param_3,float *param_4)

{
  float fVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    fVar1 = (float)((double)(float)((double)*param_4 - (double)param_4[1]) * param_1 +
                   (double)param_4[1]) * param_4[6];
  }
  else if (param_3 < 3) {
    fVar1 = (float)((double)(float)((double)param_4[2] - (double)param_4[3]) * param_1 +
                   (double)param_4[3]) * param_4[6];
  }
  else {
    if (param_3 != 3) {
      return 0;
    }
    fVar1 = (float)((double)(float)((double)param_4[4] - (double)param_4[5]) * param_1 +
                   (double)param_4[5]) * param_4[6];
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  if (fVar1 < (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) {
    return 0;
  }
  return 1;
}

