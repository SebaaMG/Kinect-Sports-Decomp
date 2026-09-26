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
extern unsigned int lbl_821CC160;


void fn_8253FE20(double param_1,double param_2,float *param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = (double)(float)((double)*param_5 * param_2);
  dVar5 = (double)(float)(param_1 - (double)*param_3);
  fVar1 = *param_3;
  dVar3 = (double)lbl_821CC160;
  dVar7 = (double)(float)(ABS((double)(float)(param_1 - (double)*param_3)) - dVar6);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar7 < dVar3) << 2) | (uint)(NAN(dVar7) || NAN(dVar3)) << 2)) < 0.0)
  {
    dVar6 = dVar3;
  }
  fVar2 = *(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar5 < dVar3) << 2) | (uint)(NAN(dVar5) || NAN(dVar3)) << 2));
  dVar4 = (double)*param_5;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar7 < dVar3) << 2) | (uint)(NAN(dVar7) || NAN(dVar3)) << 2)) < 0.0)
  {
    dVar4 = dVar3;
  }
  *param_5 = (float)dVar4;
  if (fVar2 < 0.0) {
    dVar6 = -dVar6;
  }
  dVar6 = (double)(float)(dVar6 + (double)fVar1);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar5 < dVar3) << 2) | (uint)(NAN(dVar5) || NAN(dVar3)) << 2)) < 0.0)
  {
    dVar6 = param_1;
  }
  *param_3 = (float)dVar6;
  return;
}

