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
extern unsigned int lbl_8200DD28;


longlong fn_82B63310(double param_1,double param_2,ushort *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  dVar7 = (double)lbl_8200DD28;
  lVar4 = 0;
  lVar5 = 1;
  lVar6 = 3;
  fVar1 = -(float)((double)param_3[1] * dVar7 - param_2);
  fVar2 = -(float)((double)*param_3 * dVar7 - param_1);
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
  do {
    fVar2 = -(float)((double)param_3[2] * dVar7 - param_1);
    fVar3 = -(float)((double)param_3[3] * dVar7 - param_2);
    fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
    if (fVar2 < fVar1) {
      lVar4 = lVar5;
      fVar1 = fVar2;
    }
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 + -1;
    param_3 = param_3 + 2;
  } while (lVar6 != 0);
  return lVar4;
}

