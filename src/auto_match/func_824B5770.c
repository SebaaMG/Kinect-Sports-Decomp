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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C4610;
extern unsigned int lbl_831C4614;
extern unsigned int lbl_831C461C;
extern unsigned int lbl_831C4620;


double fn_824B5770(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    return (double)lbl_821CC160;
  }
  *(int *)(param_1 + 0x50) = param_2;
  *(int *)(param_1 + 0x54) = param_3;
  *(int *)(param_1 + 0x58) = param_4;
  if (param_4 == 0) {
    fVar1 = *(float *)(param_1 + 0x48);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x4c);
  }
  dVar3 = (double)fVar1;
  dVar5 = (double)lbl_821CC160;
  dVar4 = dVar3;
  if ((param_2 == 0) &&
     (dVar4 = dVar5,
     *(float *)(&lbl_821954D8 +
               ((uint)(byte)((dVar3 < dVar5) << 2) | (uint)(NAN(dVar3) || NAN(dVar5)) << 2)) < 0.0))
  {
    dVar4 = dVar3;
  }
  if ((param_3 == 0) &&
     (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar4 < dVar5) << 2) | (uint)(NAN(dVar4) || NAN(dVar5)) << 2)) < 0.0)
     ) {
    dVar4 = dVar5;
  }
  fVar1 = lbl_831C4620;
  if (param_4 != 0) {
    fVar1 = lbl_831C4614;
  }
  fVar2 = lbl_831C461C;
  if (param_4 != 0) {
    fVar2 = lbl_831C4610;
  }
  dVar3 = (double)fVar2;
  dVar6 = (double)lbl_821CA460;
  if ((double)fVar1 != dVar3) {
    dVar4 = (double)(float)((double)((float)(ABS(dVar4) - dVar3) / (float)((double)fVar1 - dVar3)) *
                            (double)(float)(dVar6 - dVar5) + dVar5);
    if (dVar6 <= dVar5) {
      if (dVar6 <= dVar4) {
        if (dVar5 < dVar4) {
          return dVar5;
        }
        return dVar4;
      }
    }
    else if (dVar4 <= dVar6) {
      if (dVar4 < dVar5) {
        return dVar5;
      }
      return dVar4;
    }
  }
  return dVar6;
}

