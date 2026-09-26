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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1298;
extern unsigned int lbl_831D129C;
extern unsigned int lbl_831D12A4;
extern unsigned int lbl_831D12A8;
extern unsigned int lbl_831D12B8;
extern unsigned int lbl_831D12C0;


void fn_822A23A8(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)lbl_821CA460;
  dVar2 = (double)lbl_821CC160;
  if (((lbl_831D1298 < 1) || (dVar1 = dVar2, lbl_831D129C != 0)) &&
     ((lbl_831D1298 != 0 || (dVar1 = dVar3, lbl_831D129C < 1)))) {
    dVar1 = (double)lbl_831D12C0;
  }
  else {
    lbl_831D12C0 = (float)dVar1;
  }
  lbl_831D129C = lbl_831D1298;
  if ((0 < lbl_831D1298) && (dVar1 < dVar3)) {
    lbl_831D12C0 = (float)((double)lbl_831D12A4 * param_1 + dVar1);
    if (dVar3 <= (double)lbl_831D12C0) {
      lbl_831D12C0 = lbl_821CA460;
      return;
    }
    return;
  }
  if (lbl_831D1298 != 0) {
    return;
  }
  if (dVar2 < dVar1) {
    dVar3 = -(double)(float)((double)lbl_831D12A8 * param_1 - dVar1);
    lbl_831D12C0 = (float)dVar3;
    if (dVar3 <= dVar2) {
      lbl_831D12C0 = lbl_821CC160;
      lbl_831D12B8 = 0;
      return;
    }
    return;
  }
  return;
}

