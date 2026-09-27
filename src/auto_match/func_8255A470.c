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
extern unsigned int lbl_82195590;
extern unsigned int lbl_82195598;
extern unsigned int lbl_821955A0;


double fn_8255A470(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = (double)lbl_82195590;
  dVar5 = (double)(float)(((double)(float)(param_2 * dVar2) -
                          (double)(longlong)((double)(float)(param_2 * dVar2) - lbl_82195598)) *
                         lbl_821955A0);
  dVar4 = (double)(float)(((double)(float)(param_3 * dVar2) -
                          (double)(longlong)((double)(float)(param_3 * dVar2) - lbl_82195598)) *
                         lbl_821955A0);
  dVar3 = (double)(float)(((double)(float)(param_1 * dVar2) -
                          (double)(longlong)((double)(float)(param_1 * dVar2) - lbl_82195598)) *
                         lbl_821955A0);
  if (dVar4 < dVar5) {
    if (dVar3 <= dVar4) {
      return dVar3;
    }
    if (dVar5 <= dVar3) {
      return dVar3;
    }
  }
  else if ((dVar5 <= dVar3) && (dVar3 <= dVar4)) {
    return dVar3;
  }
  dVar1 = (double)(float)(dVar5 - dVar3) * dVar2;
  dVar2 = (double)(float)(dVar4 - dVar3) * dVar2;
  if (ABS((float)(((double)(float)dVar2 - (double)(longlong)dVar2) * lbl_821955A0)) <=
      ABS((float)(((double)(float)dVar1 - (double)(longlong)dVar1) * lbl_821955A0))) {
    return dVar4;
  }
  return dVar5;
}

