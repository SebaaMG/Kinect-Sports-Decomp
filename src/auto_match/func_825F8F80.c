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
#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_825F8F80(double param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = lbl_821CA460;
  fVar1 = (float)((double)param_2[6] * param_1 + (double)param_2[7]);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar1 = lbl_821CC160;
  }
  fVar2 = lbl_821CA460;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 - lbl_821CA460 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1 - lbl_821CA460) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar2 = fVar1;
  }
  param_2[7] = fVar2;
  param_2[4] = param_2[2] * fVar2 + *param_2 * (fVar3 - fVar2);
  param_2[5] = param_2[3] * fVar2 + param_2[1] * (fVar3 - fVar2);
  return;
}

