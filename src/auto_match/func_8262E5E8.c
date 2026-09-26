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


void fn_8262E5E8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = lbl_821CC160;
  fVar3 = *param_2 - *param_1;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar4 = *param_2;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar4 = *param_1;
  }
  fVar5 = param_1[1];
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar5 = fVar4;
  }
  param_1[3] = fVar5;
  fVar3 = fVar1 - param_1[5];
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar3 < fVar6) << 2) | (uint)(NAN(fVar3) || NAN(fVar6)) << 2)) < 0.0)
  {
    fVar1 = param_1[5];
  }
  fVar4 = param_1[6];
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar3 < fVar6) << 2) | (uint)(NAN(fVar3) || NAN(fVar6)) << 2)) < 0.0)
  {
    fVar4 = fVar1;
  }
  param_1[8] = fVar4;
  fVar1 = fVar2 - param_1[10];
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < fVar6) << 2) | (uint)(NAN(fVar1) || NAN(fVar6)) << 2)) < 0.0)
  {
    fVar2 = param_1[10];
  }
  fVar3 = param_1[0xb];
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < fVar6) << 2) | (uint)(NAN(fVar1) || NAN(fVar6)) << 2)) < 0.0)
  {
    fVar3 = fVar2;
  }
  param_1[0xd] = fVar3;
  return;
}

