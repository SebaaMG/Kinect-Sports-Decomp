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
extern unsigned int lbl_8201EB08;
extern unsigned int lbl_8201EB10;
extern unsigned int lbl_8201EB18;
extern unsigned int lbl_8201EB24;
extern unsigned int lbl_8201EB2C;
extern unsigned int lbl_8201EB30;
extern unsigned int lbl_8201EB38;
extern unsigned int lbl_8201EB40;
extern unsigned int lbl_8201EB48;
extern unsigned int lbl_8201EB50;
extern unsigned int lbl_8201EB58;
extern unsigned int lbl_8201EB60;
extern unsigned int lbl_8201EB68;
extern unsigned int lbl_8201EB70;
extern unsigned int lbl_8201EB78;


double fn_82809868(double param_1)

{
  double dVar1;
  double dVar2;
  
  param_1 = ABS(param_1);
  dVar1 = (double)(longlong)(lbl_8201EB08 * param_1) - (double)lbl_8201EB2C;
  dVar2 = -(lbl_8201EB38 * dVar1 - -(lbl_8201EB30 * dVar1 - param_1));
  dVar1 = dVar2 * dVar2;
  dVar2 = ((((((((lbl_8201EB78 * dVar1 + lbl_8201EB70) * dVar1 + lbl_8201EB68) * dVar1 +
               lbl_8201EB60) * dVar1 + lbl_8201EB58) * dVar1 + lbl_8201EB50) * dVar1 + lbl_8201EB48)
            * dVar1 + lbl_8201EB40) * dVar1 + (double)lbl_8201EB24) * dVar2;
  if (((longlong)(double)(longlong)(lbl_8201EB08 * param_1) & 1U) != 0) {
    dVar2 = -dVar2;
  }
  dVar1 = lbl_8201EB18;
  if (param_1 - lbl_8201EB10 < 0.0) {
    dVar1 = dVar2;
  }
  return (double)(float)dVar1;
}

