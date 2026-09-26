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
extern int fn_8280A550();
extern int fn_8280A5E8();
extern unsigned int lbl_82002AE0;


void fn_8280E418(float *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = (double)(param_1[3] * param_1[3] +
                  param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  iVar2 = fn_8280A5E8((double)(float)(dVar3 - (double)lbl_82002AE0));
  if (iVar2 == 0) {
    dVar3 = (double)fn_8280A550(dVar3);
    *param_2 = (float)((double)*param_1 * dVar3);
    param_2[1] = (float)((double)param_1[1] * dVar3);
    param_2[2] = (float)((double)param_1[2] * dVar3);
    fVar1 = (float)(dVar3 * (double)param_1[3]);
  }
  else {
    if (param_1 == param_2) {
      return;
    }
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    fVar1 = param_1[3];
  }
  param_2[3] = fVar1;
  return;
}

