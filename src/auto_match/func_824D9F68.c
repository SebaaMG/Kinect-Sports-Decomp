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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern float fRam831c3edc;
extern float fRam831c3ee0;
extern float fRam831c3ee4;
extern float fRam831c3ee8;
extern unsigned int fStack_30;
extern int fn_824DA438();
extern int fn_82539560();
extern int iRam831c3e44;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_824D9F68(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  float *param_5,float *param_6,float *param_7)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fStack_30;
  float afStack_2c [11];
  
  fn_824DA438(param_1,param_2,param_4,afStack_2c,&fStack_30);
  iVar2 = iRam831c3e44;
  dVar5 = (double)fStack_30;
  dVar4 = (double)fRam831c3edc;
  fVar1 = SQRT(afStack_2c[0] * afStack_2c[0] + (float)(dVar5 * dVar5));
  dVar7 = (double)fVar1;
  dVar6 = (double)lbl_821CC160;
  dVar3 = (double)(float)((double)*(float *)(param_3 * 4 + -0x7ce3c130) - dVar7);
  if (ABS(dVar3) <= dVar4) {
    *param_6 = fVar1;
    if (iVar2 == 0) {
      dVar3 = -(double)(float)(dVar6 + dVar7);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar3 < dVar6) << 2) | (uint)(NAN(dVar3) || NAN(dVar6)) << 2)) <
          0.0) {
        dVar6 = (double)(float)(dVar6 + dVar7);
      }
      *param_7 = (float)dVar6;
    }
    else {
      *param_7 = fVar1;
    }
    *param_5 = (float)(dVar5 / dVar7);
    return;
  }
  if (dVar3 <= dVar6) {
    dVar6 = -dVar4;
    dVar7 = -(double)fRam831c3ee4;
    dVar5 = -(double)fRam831c3ee8;
    dVar4 = -(double)fRam831c3ee0;
  }
  else {
    dVar7 = (double)fRam831c3ee8;
    dVar5 = (double)fRam831c3ee4;
    dVar6 = (double)fRam831c3ee0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560(dVar3,dVar4,dVar6,dVar5,dVar7);
}

