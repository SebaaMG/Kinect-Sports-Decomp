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
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_823AC278();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D2C68;
extern unsigned int lbl_831D2CB8;
extern unsigned int lbl_831D2CF8;
extern unsigned int lbl_831D2D38;


double fn_823AC5D8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if (lbl_831D2C68 == 0) {
    if (*(int *)(param_1 + 0x50) == 0) {
      if (*(int *)(param_1 + 0x54) == 0) {
        dVar4 = (double)lbl_831D2CB8;
      }
      else {
        dVar4 = (double)lbl_831D2CF8;
      }
    }
    else {
      dVar4 = (double)lbl_831D2D38;
    }
  }
  else {
    fn_823AC278(&fStack_30);
    fVar1 = (float)(ABS((double)fStack_30) - ABS((double)fStack_20));
    fVar2 = (float)(ABS((double)fStack_2c) - ABS((double)fStack_1c));
    fVar3 = (float)(ABS((double)fStack_28) - ABS((double)fStack_18));
    dVar6 = ABS((double)fStack_2c);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar6 = ABS((double)fStack_1c);
    }
    dVar5 = ABS((double)fStack_28);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar5 = ABS((double)fStack_18);
    }
    dVar4 = ABS((double)fStack_30);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar4 = ABS((double)fStack_20);
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((float)(dVar6 - dVar5) < lbl_821CC160) << 2) |
                  (uint)(NAN((float)(dVar6 - dVar5)) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar6 = dVar5;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((float)(dVar4 - dVar6) < lbl_821CC160) << 2) |
                  (uint)(NAN((float)(dVar4 - dVar6)) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar4 = dVar6;
    }
  }
  return dVar4;
}

