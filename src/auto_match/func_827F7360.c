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


void fn_827F7360(double param_1,double param_2,double param_3,double param_4)

{
  float fVar1;
  float *in_r7;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)lbl_82002AE0;
  dVar3 = (double)lbl_821AAD20;
  if ((param_1 != dVar2) && (param_1 != dVar3)) {
    fVar1 = (float)(dVar2 / (double)(float)((double)(float)(param_1 - dVar2) * param_4 + dVar2));
    *in_r7 = *in_r7 * fVar1;
    in_r7[4] = in_r7[4] * fVar1;
    in_r7[8] = in_r7[8] * fVar1;
  }
  if ((param_2 != dVar2) && (param_2 != dVar3)) {
    fVar1 = (float)(dVar2 / (double)(float)((double)(float)(param_2 - dVar2) * param_4 + dVar2));
    in_r7[1] = in_r7[1] * fVar1;
    in_r7[5] = in_r7[5] * fVar1;
    in_r7[9] = in_r7[9] * fVar1;
  }
  if (param_3 == dVar2) {
    return;
  }
  if (param_3 == dVar3) {
    return;
  }
  fVar1 = (float)(dVar2 / (double)(float)((double)(float)(param_3 - dVar2) * param_4 + dVar2));
  in_r7[2] = in_r7[2] * fVar1;
  in_r7[6] = in_r7[6] * fVar1;
  in_r7[10] = in_r7[10] * fVar1;
  return;
}

