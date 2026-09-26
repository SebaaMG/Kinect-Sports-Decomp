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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8306B700(double param_1,double param_2,double param_3,undefined8 param_4,float *param_5,
                  undefined8 param_6,float *param_7,undefined8 param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)((double)(lbl_82002AE0 / (float)(param_2 - param_1)) * param_3 +
                 (double)(float)(param_1 / (double)(float)(param_1 - param_2)));
  fVar2 = lbl_821AAD20;
  if ((lbl_821AAD20 <= fVar1) && (fVar2 = fVar1, lbl_82002AE0 < fVar1)) {
    fVar2 = lbl_82002AE0;
  }
  *param_9 = (*param_7 - *param_5) * fVar2 + *param_5;
  param_9[1] = (param_7[1] - param_5[1]) * fVar2 + param_5[1];
  param_9[2] = (param_7[2] - param_5[2]) * fVar2 + param_5[2];
  param_9[3] = (param_7[3] - param_5[3]) * fVar2 + param_5[3];
  return;
}

