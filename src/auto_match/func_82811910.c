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
extern unsigned int lbl_8201DD70;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_8201DF1C;
extern unsigned int lbl_8201DF20;
extern unsigned int lbl_8201DF24;
extern unsigned int lbl_8201DF28;
extern unsigned int lbl_8201DF2C;
extern unsigned int lbl_8201DF30;
extern unsigned int lbl_8201DF34;
extern unsigned int lbl_821AAD20;


double fn_82811910(float *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = (double)*param_1;
  dVar4 = (double)lbl_821AAD20;
  if ((dVar5 == dVar4) && ((double)param_1[1] == dVar4)) {
    return dVar4;
  }
  dVar4 = (double)param_1[1];
  dVar6 = (double)lbl_821AAD20;
  if ((dVar5 == dVar6) && (dVar4 == dVar6)) {
    return dVar6;
  }
  dVar3 = ABS(dVar5);
  dVar7 = ABS(dVar4);
  if (dVar7 <= dVar3) {
    fVar1 = (float)(dVar7 / dVar3);
    fVar2 = fVar1 * fVar1;
    dVar3 = -(double)(((((((fVar2 * lbl_8201DF24 - lbl_8201DF34) * fVar2 + lbl_8201DF30) * fVar2 -
                         lbl_8201DF2C) * fVar2 + lbl_8201DF28) * fVar2 - lbl_8201DF20) * fVar2 +
                      lbl_8201DF1C) * fVar1 - lbl_8201DD70);
  }
  else {
    fVar1 = (float)(dVar3 / dVar7);
    fVar2 = fVar1 * fVar1;
    dVar3 = (double)(((((((fVar2 * lbl_8201DF24 - lbl_8201DF34) * fVar2 + lbl_8201DF30) * fVar2 -
                        lbl_8201DF2C) * fVar2 + lbl_8201DF28) * fVar2 - lbl_8201DF20) * fVar2 +
                     lbl_8201DF1C) * fVar1);
  }
  if (dVar4 < dVar6) {
    if (dVar5 < dVar6) {
      return (double)(float)(dVar3 - (double)lbl_8201DD74);
    }
    return (double)(float)((double)lbl_8201DD74 - dVar3);
  }
  if (dVar5 < dVar6) {
    return -dVar3;
  }
  return dVar3;
}

