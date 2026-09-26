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
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_8280B900(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  fVar4 = lbl_821AAD20;
  fVar3 = lbl_82002AE0;
  param_7[4] = lbl_821AAD20;
  param_7[8] = fVar4;
  param_7[1] = fVar4;
  fVar1 = fVar3 / (float)(param_4 - param_3);
  param_7[9] = fVar4;
  fVar2 = fVar3 / (float)(param_1 - param_2);
  param_7[2] = fVar4;
  dVar5 = (double)(fVar3 / (float)(param_6 - param_5));
  param_7[6] = fVar4;
  param_7[3] = fVar4;
  param_7[7] = fVar4;
  param_7[0xb] = fVar4;
  param_7[0xf] = fVar3;
  fVar3 = lbl_82005344;
  *param_7 = fVar1 * lbl_82005344;
  param_7[5] = fVar2 * fVar3;
  param_7[10] = (float)-dVar5;
  param_7[0xc] = -((float)(param_3 + param_4) * fVar1);
  param_7[0xd] = -((float)(param_1 + param_2) * fVar2);
  param_7[0xe] = -(float)(dVar5 * param_5);
  return;
}

