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
extern unsigned int lbl_82193E2C;
extern float lbl_82195590;
extern float lbl_821955A0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


double fn_825C2F80(double param_1,double param_2)

{
  float fVar1;
  
  if (param_2 < param_1) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (float)((double)(float)(param_2 - (double)(float)(param_1 - (double)lbl_82193E2C)) *
                    (double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
                   (double)(float)(param_1 - (double)lbl_82193E2C)) * lbl_82195590;
    return (double)(float)(((double)fVar1 - (double)(longlong)fVar1) * lbl_821955A0);
  }
  if (param_2 <= param_1) {
    return param_1;
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  return (double)(float)((double)(float)(param_2 - param_1) *
                         (double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
                        param_1);
}

