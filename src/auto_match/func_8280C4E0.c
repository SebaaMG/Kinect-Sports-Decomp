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


void fn_8280C4E0(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,double param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  fVar4 = lbl_821AAD20;
  fVar3 = lbl_82002AE0;
  dVar5 = (double)lbl_82005344;
  param_10[4] = lbl_821AAD20;
  param_10[0xc] = fVar4;
  fVar1 = fVar3 / (float)(param_4 - param_3);
  param_10[1] = fVar4;
  fVar2 = fVar3 / (float)(param_1 - param_2);
  param_10[0xd] = fVar4;
  param_10[2] = fVar4;
  param_10[6] = fVar4;
  param_10[0xe] = fVar4;
  param_10[3] = fVar4;
  param_10[7] = fVar4;
  param_10[0xb] = fVar4;
  param_10[0xf] = fVar3;
  param_10[10] = lbl_8200133C;
  *param_10 = (float)((double)((float)(param_5 * dVar5) * fVar1) * param_6);
  param_10[8] = (float)((double)((float)(param_3 + param_4) * fVar1) * param_6 - param_8);
  param_10[5] = (float)((double)((float)(param_5 * dVar5) * fVar2) * param_7);
  param_10[9] = (float)((double)((float)(param_1 + param_2) * fVar2) * param_7 - param_9);
  return;
}

