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
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined8 fn_82539A78(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float *in_r8;
  float *in_r9;
  
  if ((double)lbl_82195628 <= ABS(param_5)) {
    fVar1 = (float)(param_1 - param_3) * (float)((double)lbl_821CA460 / param_5);
    fVar3 = (float)(param_2 - param_3) * (float)((double)lbl_821CA460 / param_5);
    fVar4 = fVar1;
    if (fVar3 < fVar1) {
      fVar4 = fVar3;
      fVar3 = fVar1;
    }
    fVar1 = *in_r8;
    if ((fVar1 <= fVar3) && (fVar2 = *in_r9, fVar4 <= fVar2)) {
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar4 - fVar1 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar4 - fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar4 = fVar1;
      }
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 - fVar2 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar3 - fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar2 = fVar3;
      }
      *in_r8 = fVar4;
      *in_r9 = fVar2;
      if (fVar4 <= fVar2) {
        return 1;
      }
    }
  }
  else {
    dVar5 = param_4;
    if ((double)lbl_821CC160 < param_5) {
      dVar5 = param_3;
      param_3 = param_4;
    }
    if ((param_1 <= param_3) && (dVar5 <= param_2)) {
      return 1;
    }
  }
  return 0;
}

