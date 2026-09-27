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
extern float lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_8280C658(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar3 = lbl_821AAD20;
  fVar2 = lbl_82002AE0;
  param_9[4] = lbl_821AAD20;
  param_9[8] = fVar3;
  param_9[1] = fVar3;
  dVar4 = (double)(fVar2 / (float)(param_4 - param_3));
  param_9[9] = fVar3;
  fVar1 = fVar2 / (float)(param_1 - param_2);
  param_9[2] = fVar3;
  param_9[6] = fVar3;
  param_9[10] = fVar3;
  param_9[3] = fVar3;
  param_9[7] = fVar3;
  param_9[0xb] = fVar3;
  param_9[0xe] = fVar2;
  param_9[0xf] = fVar2;
  fVar2 = fVar1 * lbl_82005344;
  *param_9 = (float)(dVar4 * param_5) * lbl_82005344;
  param_9[5] = (float)((double)fVar2 * param_6);
  param_9[0xc] = (float)(-(double)(float)((double)(float)(param_3 + param_4) * dVar4) * param_5 +
                        param_7);
  param_9[0xd] = (float)(-(double)((float)(param_1 + param_2) * fVar1) * param_6 + param_8);
  return;
}

