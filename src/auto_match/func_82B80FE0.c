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
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


void fn_82B80FE0(double *param_1,double *param_2,ulonglong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = lbl_82005758;
  dVar3 = lbl_82005710;
  if ((param_3 & 1) != 0) {
    if (lbl_82005710 <= *param_1) {
      if (lbl_82005758 < *param_1) {
        *param_1 = lbl_82005758;
      }
    }
    else {
      *param_1 = lbl_82005710;
    }
    if (dVar3 <= *param_2) {
      if (dVar2 < *param_2) {
        *param_2 = dVar2;
      }
    }
    else {
      *param_2 = dVar3;
    }
  }
  if (((param_3 & 2) != 0) && (dVar2 = *param_1, dVar2 < dVar3)) {
    dVar1 = *param_2;
    if (dVar3 <= dVar1) {
      *param_1 = dVar3;
      if (dVar1 < -dVar2) {
        *param_2 = -dVar2;
      }
    }
    else {
      *param_1 = -dVar1;
      *param_2 = -dVar2;
    }
  }
  if ((param_3 & 4) == 0) {
    return;
  }
  dVar3 = *param_1;
  *param_1 = -*param_2;
  *param_2 = -dVar3;
  return;
}

