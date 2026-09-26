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
extern int fn_82F65018();
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DD70;
extern unsigned int lbl_821660D0;
extern unsigned int lbl_821AAD20;


void fn_83025638(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)lbl_821AAD20;
  if (param_1 == dVar4) {
    fVar1 = lbl_8201DD70;
    if (param_2 < 0.0) {
      fVar1 = lbl_821660D0;
    }
  }
  else {
    dVar3 = (double)fn_82F65018(param_2,param_1);
    dVar2 = (double)(float)dVar3;
    *param_5 = (float)dVar3;
    if (dVar4 <= dVar2) {
      return;
    }
    fVar1 = (float)(dVar2 + (double)lbl_82015468);
  }
  *param_5 = fVar1;
  return;
}

