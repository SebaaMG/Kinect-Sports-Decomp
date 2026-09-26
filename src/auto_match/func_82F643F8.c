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
extern unsigned int lbl_82005758;
extern unsigned int lbl_831BB298;
extern unsigned int lbl_831BB2A0;
extern unsigned int lbl_831BB2A8;
extern unsigned int lbl_831BB2B0;
extern unsigned int lbl_831BB2B4;
extern unsigned int lbl_831BB2BC;
extern unsigned int lbl_831BB2C0;
extern unsigned int lbl_831BB2C8;
extern unsigned int lbl_831BB2D0;
extern unsigned int lbl_831BB2D8;
extern unsigned int lbl_831BB2E0;
extern unsigned int lbl_831BB2E8;
extern unsigned int lbl_831BB2F0;
extern unsigned int lbl_831BB2F8;
extern unsigned int lbl_831BB300;
extern unsigned int lbl_831BB308;
extern unsigned int lbl_831BB920;


double fn_82F643F8(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  param_1 = ABS(param_1);
  dVar2 = (double)(longlong)(lbl_831BB2A0 * (lbl_831BB298 + param_1));
  dVar1 = dVar2 - (double)lbl_831BB2BC;
  dVar1 = -(lbl_831BB2C8 * dVar1 - -(lbl_831BB2C0 * dVar1 - param_1));
  dVar3 = dVar1 * dVar1;
  dVar1 = ((((((((lbl_831BB308 * dVar3 + lbl_831BB300) * dVar3 + lbl_831BB2F8) * dVar3 +
               lbl_831BB2F0) * dVar3 + lbl_831BB2E8) * dVar3 + lbl_831BB2E0) * dVar3 + lbl_831BB2D8)
            * dVar3 + lbl_831BB2D0) * dVar3 + lbl_82005758) * dVar1;
  if (((longlong)dVar2 & 1U) != 0) {
    dVar1 = -dVar1;
  }
  if (param_1 == (double)lbl_831BB2B0) {
    return (double)lbl_831BB2B4;
  }
  dVar2 = lbl_831BB920;
  if ((lbl_831BB298 + param_1) - lbl_831BB2A8 < 0.0) {
    dVar2 = dVar1;
  }
  return dVar2;
}

