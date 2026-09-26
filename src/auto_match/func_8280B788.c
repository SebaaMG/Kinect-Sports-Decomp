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
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_8280B788(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar3 = lbl_821AAD20;
  fVar2 = lbl_82002AE0;
  dVar4 = (double)lbl_82005344;
  param_7[4] = lbl_821AAD20;
  param_7[0xc] = fVar3;
  fVar1 = fVar2 / (float)(param_4 - param_3);
  param_7[1] = fVar3;
  fVar2 = fVar2 / (float)(param_1 - param_2);
  param_7[0xd] = fVar3;
  param_7[2] = fVar3;
  param_7[6] = fVar3;
  param_7[3] = fVar3;
  param_7[7] = fVar3;
  param_7[0xf] = fVar3;
  param_7[0xb] = lbl_8200133C;
  param_7[10] = (float)(param_6 / (double)(float)(param_5 - param_6));
  *param_7 = (float)(param_5 * dVar4) * fVar1;
  param_7[0xe] = (float)((double)(float)(param_5 * param_6) / (double)(float)(param_5 - param_6));
  param_7[8] = (float)(param_3 + param_4) * fVar1;
  param_7[5] = (float)(param_5 * dVar4) * fVar2;
  param_7[9] = (float)(param_1 + param_2) * fVar2;
  return;
}

