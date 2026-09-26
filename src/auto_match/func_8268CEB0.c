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
extern unsigned int lbl_831BB388;
extern unsigned int lbl_831BB390;
extern unsigned int lbl_831BB398;
extern unsigned int lbl_831BB3A8;
extern unsigned int lbl_831BB3B8;
extern unsigned int lbl_831BB3C0;
extern unsigned int lbl_831BB3C8;
extern unsigned int lbl_831BB3D0;
extern unsigned int lbl_831BB3D8;
extern unsigned int lbl_831BB3E0;
extern unsigned int lbl_831BB3E8;
extern unsigned int lbl_831BB3F0;
extern unsigned int lbl_831BB428;
extern unsigned int lbl_831BB430;


double fn_8268CEB0(float *param_1)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (double)*param_1;
  dVar4 = (double)param_1[3];
  if (dVar5 == (double)lbl_831BB428) {
    dVar3 = lbl_831BB388;
    if (dVar4 == (double)lbl_831BB428) {
      if (((ulonglong)dVar5 & 0x8000000000000000) == 0) {
        return dVar4;
      }
      if (((ulonglong)dVar4 & 0x8000000000000000) == 0) {
        return lbl_831BB390;
      }
      return -lbl_831BB390;
    }
  }
  else {
    dVar6 = ABS(dVar5);
    uVar1 = 0;
    dVar2 = ABS(dVar4);
    dVar3 = dVar2;
    if (dVar6 < dVar2) {
      uVar1 = 2;
      dVar3 = dVar6;
      dVar6 = dVar2;
    }
    dVar3 = dVar3 / dVar6;
    if (lbl_831BB398 < dVar3) {
      uVar1 = uVar1 + 1;
      dVar3 = (lbl_831BB3A8 * dVar3 - (double)lbl_831BB430) / (lbl_831BB3A8 + dVar3);
    }
    dVar6 = dVar3 * dVar3;
    dVar3 = ((((lbl_831BB3D0 * dVar6 + lbl_831BB3C8) * dVar6 + lbl_831BB3C0) * dVar6 + lbl_831BB3B8)
             * dVar6 * dVar3) /
            ((((lbl_831BB3F0 + dVar6) * dVar6 + lbl_831BB3E8) * dVar6 + lbl_831BB3E0) * dVar6 +
            lbl_831BB3D8) + dVar3;
    if (1 < uVar1) {
      dVar3 = -dVar3;
    }
    dVar3 = *(double *)(uVar1 * 8 + -0x7ce44c00) + dVar3;
  }
  if (dVar5 < 0.0) {
    dVar3 = lbl_831BB390 - dVar3;
  }
  if (((ulonglong)dVar4 & 0x8000000000000000) != 0) {
    return -dVar3;
  }
  return dVar3;
}

