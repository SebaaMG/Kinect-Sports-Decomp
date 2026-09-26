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
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


bool fn_8275CF90(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((param_2 <= param_8) && (param_8 < param_6)) {
    dVar4 = (double)lbl_821AAD20;
    bVar1 = dVar4 < (double)((float)(param_4 - param_2) * (float)(param_7 - param_3) -
                            (float)((double)(float)(param_8 - param_4) *
                                   (double)(float)(param_3 - param_1)));
    bVar2 = dVar4 < (double)(float)((double)(float)(param_6 - param_4) *
                                    (double)(float)(param_7 - param_5) -
                                   (double)(float)((double)(float)(param_8 - param_6) *
                                                  (double)(float)(param_5 - param_3)));
    dVar6 = (double)(float)(param_6 - param_2);
    bVar3 = dVar4 < (double)(float)(dVar6 * (double)(float)(param_7 - param_5) -
                                   (double)(float)((double)(float)(param_5 - param_1) *
                                                  (double)(float)(param_8 - param_6)));
    if ((bVar2 && bVar3) && bVar1) {
      return true;
    }
    if ((bVar3 || bVar2) || bVar1) {
      dVar7 = (double)lbl_8200133C;
      dVar5 = (double)(float)(-(double)(float)(param_4 * (double)lbl_82005344 - param_2) + param_6);
      if (dVar5 == dVar4) {
        if (dVar6 != dVar4) {
          dVar7 = (double)(float)((double)(float)(param_8 - param_2) / dVar6);
        }
      }
      else {
        dVar6 = (double)(float)(param_6 * param_8 +
                               -(double)(float)((double)(float)(param_4 * param_8) *
                                                (double)lbl_82005344 -
                                               (double)(float)(param_4 * param_4 -
                                                              (double)(float)((double)(float)(
                                                  param_6 - param_8) * param_2))));
        if (dVar4 < dVar6) {
          dVar4 = (double)(float)SQRT(dVar6);
        }
        dVar7 = (double)(float)((double)(float)((double)(float)(dVar4 + param_2) - param_4) / dVar5)
        ;
      }
      dVar4 = (double)(float)((double)(float)(param_3 - param_1) * dVar7 + param_1);
      return (double)(float)((double)(float)((double)(float)((double)(float)(param_5 - param_3) *
                                                             dVar7 + param_3) - dVar4) * dVar7 +
                            dVar4) < param_7;
    }
  }
  return false;
}

