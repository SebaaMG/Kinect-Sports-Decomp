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


void fn_8262E718(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = lbl_821CC160;
  fVar4 = param_1[4];
  if (((uint)fVar4 & 4) == 0) {
    fVar3 = *param_1;
    if (((uint)fVar4 & 8) == 0) {
      param_1[4] = (float)((uint)fVar4 & 2);
      goto LAB_8262e844;
    }
    if (param_1[3] < fVar3) {
      do {
        fVar4 = param_1[3] + (param_1[1] - fVar3);
        param_1[3] = fVar4;
      } while (fVar4 < *param_1);
    }
    fVar2 = param_1[1];
    fVar1 = param_1[3] - fVar3;
    fVar4 = param_1[3];
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar4 = fVar3;
    }
    fVar1 = *(float *)(&lbl_821954D8 +
                      ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                      (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2));
  }
  else {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    param_1[4] = (float)((uint)fVar4 & 0xfffffffc | 1);
    fVar4 = (fVar1 - param_1[3]) + fVar1;
    param_1[3] = fVar4;
    fVar5 = fVar4 - fVar1;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar5 < fVar3) << 2) | (uint)(NAN(fVar5) || NAN(fVar3)) << 2)) <
        0.0) {
      fVar4 = fVar1;
    }
    fVar1 = *(float *)(&lbl_821954D8 +
                      ((uint)(byte)((fVar5 < fVar3) << 2) | (uint)(NAN(fVar5) || NAN(fVar3)) << 2));
  }
  fVar3 = fVar2;
  if (fVar1 < 0.0) {
    fVar3 = fVar4;
  }
LAB_8262e844:
  param_1[3] = fVar3;
  return;
}

