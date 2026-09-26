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
extern int fn_82539560();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821955C8;
extern unsigned int lbl_82195674;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1538;
extern unsigned int lbl_831D1540;
extern unsigned int lbl_831D1544;
extern unsigned int lbl_831D1548;


double fn_822E6610(double param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  double dVar2;
  undefined8 in_f6;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = (double)lbl_831D1538;
  dVar4 = ABS(param_1);
  if (dVar4 < dVar6) {
    if ((double)*(float *)(param_3 + 0x260) != (double)lbl_821CC160) {
                    /* WARNING: Subroutine does not return */
      fn_82539560(dVar4,(double)lbl_821CC160,dVar6,-(double)lbl_831D1540);
    }
  }
  else {
    dVar2 = (double)lbl_821CC160;
    if (dVar2 < param_1 != dVar2 < (double)*(float *)(param_3 + 0x260)) {
      *(float *)(param_3 + 0x260) = lbl_821CC160;
      dVar6 = (double)lbl_831D1538;
    }
    dVar5 = (double)*(float *)(param_3 + 0x260);
    if ((dVar5 < (double)lbl_821955C8) || ((double)lbl_8218EC10 < dVar5)) {
      dVar3 = (double)lbl_821CA460;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((param_1 < dVar2) << 2) | (uint)(NAN(param_1) || NAN(dVar2)) << 2)
                    ) < 0.0) {
        dVar3 = (double)lbl_82192734;
      }
                    /* WARNING: Subroutine does not return */
      fn_82539560(param_2,(double)lbl_831D1544,(double)lbl_821CA460,dVar2,(double)lbl_831D1548,
                   in_f6,dVar3,dVar4,dVar5,dVar6);
    }
    fVar1 = lbl_821CA460;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((param_1 < dVar2) << 2) | (uint)(NAN(param_1) || NAN(dVar2)) << 2))
        < 0.0) {
      fVar1 = lbl_82192734;
    }
    *(float *)(param_3 + 0x260) = fVar1 * lbl_82195674;
  }
  return (double)*(float *)(param_3 + 0x260);
}

