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
extern unsigned int lbl_821AAD20;


undefined8 fn_827EC5A8(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (double)(float)(param_1 - param_3);
  dVar3 = (double)(float)(param_2 - param_4);
  if (dVar3 <= dVar1) {
    dVar4 = dVar1 * param_2 - (double)(float)(dVar3 * param_1);
    dVar2 = dVar1;
  }
  else {
    dVar4 = dVar3 * param_1 - (double)(float)(dVar1 * param_2);
    dVar2 = dVar3;
    dVar3 = dVar1;
  }
  dVar4 = (double)(float)dVar4;
  dVar1 = (double)lbl_821AAD20;
  if (dVar2 <= dVar1) {
    if ((dVar4 <= dVar1) && (dVar2 <= dVar4)) {
      return 1;
    }
  }
  else if ((dVar1 <= dVar4) && (dVar4 <= dVar2)) {
    return 1;
  }
  if (dVar3 <= dVar1) {
    if ((dVar1 <= dVar4) && (dVar3 <= -dVar4)) {
      return 1;
    }
  }
  else if ((dVar4 <= dVar1) && (-dVar4 <= dVar3)) {
    return 1;
  }
  return 0;
}

