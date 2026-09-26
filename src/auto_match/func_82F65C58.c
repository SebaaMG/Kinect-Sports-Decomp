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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_831BB450;
extern unsigned int lbl_831BB454;
extern unsigned int lbl_831BB458;
extern unsigned int lbl_831BB45C;
extern unsigned int lbl_831BB460;
extern unsigned int lbl_831BB470;
extern unsigned int lbl_831BB480;
extern unsigned int lbl_831BB488;
extern unsigned int lbl_831BB490;
extern unsigned int lbl_831BB498;
extern unsigned int lbl_831BB4A0;
extern unsigned int lbl_831BB4A8;
extern unsigned int lbl_831BB4B0;
extern unsigned int lbl_831BB4B8;
extern unsigned int lbl_831BB4C0;
extern unsigned int lbl_831BB4C8;


double fn_82F65C58(double param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = ABS(param_1);
  if (dVar3 <= (double)lbl_831BB45C) {
    dVar2 = dVar3 * dVar3;
    iVar1 = param_3;
    if ((param_3 == 0) && (param_1 == (double)lbl_831BB450)) {
      return param_1;
    }
  }
  else {
    dVar2 = ((double)lbl_831BB454 - dVar3) * (double)lbl_831BB45C;
    dVar3 = -(SQRT(dVar2) * (double)lbl_831BB458);
    iVar1 = 1 - param_3;
  }
  dVar3 = (((((lbl_831BB4A0 * dVar2 + lbl_831BB498) * dVar2 + lbl_831BB490) * dVar2 + lbl_831BB488)
            * dVar2 + lbl_831BB480) * dVar2 * dVar3) /
          (((((lbl_831BB4C8 + dVar2) * dVar2 + lbl_831BB4C0) * dVar2 + lbl_831BB4B8) * dVar2 +
           lbl_831BB4B0) * dVar2 + lbl_831BB4A8) + dVar3;
  if (param_3 == 0) {
    dVar2 = (double)(&lbl_831BB460)[iVar1] + dVar3;
    if (param_1 < 0.0) {
      dVar2 = -((double)(&lbl_831BB460)[iVar1] + dVar3);
    }
    return dVar2;
  }
  dVar2 = (double)(&lbl_831BB460)[iVar1] - dVar3;
  if (param_1 < 0.0) {
    dVar2 = *(double *)(&lbl_831BB470 + iVar1 * 8) + dVar3;
  }
  return dVar2;
}

