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
extern int fn_8275CF90();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_8275F028(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar7 = (double)fn_82F6A538();
  if ((param_4 < param_2) || (param_6 < param_4)) {
    fVar1 = (float)((double)(float)(param_4 * (double)lbl_82005344 - param_2) - param_6);
    fVar2 = lbl_8200133C;
    if (fVar1 != lbl_821AAD20) {
      fVar2 = (float)(param_4 - param_2) / fVar1;
    }
    dVar6 = (double)fVar2;
    dVar12 = (double)(float)((double)(float)(param_3 - dVar7) * dVar6 + dVar7);
    dVar11 = (double)(float)((double)(float)(param_4 - param_2) * dVar6 + param_2);
    dVar8 = (double)(float)((double)(float)((double)(float)((double)(float)(param_5 - param_3) *
                                                            dVar6 + param_3) - dVar12) * dVar6 +
                           dVar12);
    dVar6 = (double)(float)((double)(float)((double)(float)((double)(float)(param_6 - param_4) *
                                                            dVar6 + param_4) - dVar11) * dVar6 +
                           dVar11);
    dVar9 = dVar6;
    dVar10 = dVar8;
    if (dVar6 < param_2) {
      dVar9 = param_2;
      param_2 = dVar6;
      dVar10 = dVar7;
      dVar7 = dVar8;
    }
    if (param_6 < dVar6) {
      dVar6 = param_6;
      dVar8 = param_5;
    }
    cVar4 = fn_8275CF90(dVar8,dVar6);
    cVar5 = fn_8275CF90(dVar7,param_2,dVar12,dVar11,dVar10,dVar9,param_7,param_8);
    uVar3 = (ulonglong)(cVar4 != cVar5);
  }
  else {
    uVar3 = fn_8275CF90();
  }
  fn_82F6A584(uVar3);
  return;
}

