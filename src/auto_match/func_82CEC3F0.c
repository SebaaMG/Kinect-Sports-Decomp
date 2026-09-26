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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_82CEC3F0(int param_1,float param_2,ulonglong param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  param_4[2] = param_2;
  param_4[3] = (float)param_3;
  fVar1 = *(float *)((int)(((param_3 & 0x3fffffff) * 4 + (ulonglong)(uint)param_2 & 0xffffffff) << 2
                          ) + param_1);
  if (fVar1 != lbl_821AAD20) {
    fVar1 = (*(float *)((int)((param_3 + (param_3 & 0x3fffffff) * 4 & 0xffffffff) << 2) + param_1) -
            *(float *)((int)param_2 * 0x14 + param_1)) / (fVar1 * lbl_82005344);
    fVar2 = SQRT(fVar1 * fVar1 + lbl_82002AE0);
    if (fVar1 < lbl_821AAD20) {
      fVar1 = fVar1 - fVar2;
    }
    else {
      fVar1 = fVar2 + fVar1;
    }
    fVar1 = lbl_82002AE0 / fVar1;
    fVar2 = lbl_82002AE0 / SQRT(fVar1 * fVar1 + lbl_82002AE0);
    *param_4 = fVar2;
    param_4[1] = fVar2 * fVar1;
    return;
  }
  param_4[1] = lbl_821AAD20;
  *param_4 = lbl_82002AE0;
  return;
}

