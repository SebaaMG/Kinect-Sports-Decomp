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
extern unsigned int *auStack_70;
extern int fn_82D085B0();
extern int fn_82D08868();
extern unsigned int lbl_8200132C;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_8200D8C4;
extern unsigned int lbl_821AAD20;


double fn_82D089E0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_70 [112];
  
  dVar9 = (double)lbl_821AAD20;
  dVar5 = dVar9;
  dVar6 = dVar9;
  dVar3 = (double)fn_82D085B0();
  fn_82D08868(param_1,param_5,param_7);
  dVar4 = (double)fn_82D085B0(param_2,param_3,param_4,auStack_70);
  iVar1 = 0;
  dVar8 = (double)lbl_82002C5C;
  iVar2 = (int)param_8;
  dVar7 = param_1;
  if (dVar3 <= dVar4) {
    dVar5 = dVar4;
    if (0 < iVar2) {
      do {
        dVar7 = (double)(float)(dVar7 * dVar8);
        fn_82D08868(dVar7,param_5,param_7);
        dVar6 = (double)fn_82D085B0(param_2,param_3,param_4,auStack_70);
        if ((dVar6 < dVar3) && (dVar6 < dVar4)) break;
        if (iVar1 == iVar2 + -1) goto LAB_82d08c34;
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
  }
  else {
    dVar6 = dVar4;
    if (0 < iVar2) {
      dVar10 = (double)lbl_8200132C;
      do {
        param_1 = (double)(float)(dVar7 * dVar10);
        fn_82D08868(param_1,param_5,param_7);
        dVar5 = (double)fn_82D085B0(param_2,param_3,param_4,auStack_70);
        dVar6 = dVar4;
        if (dVar4 < dVar5) break;
        if (iVar1 == iVar2 + -1) {
          return param_1;
        }
        iVar1 = iVar1 + 1;
        dVar4 = dVar5;
        dVar6 = dVar5;
        dVar7 = param_1;
      } while (iVar1 < iVar2);
    }
  }
  if ((((dVar7 < dVar9) || (param_1 < dVar7)) || (dVar3 < dVar6)) || (dVar5 < dVar6)) {
LAB_82d08c34:
    dVar7 = (double)lbl_8200133C;
  }
  else {
    dVar5 = (double)(float)((double)(lbl_8200BF40 - SQRT(lbl_8200D8C4)) * dVar8);
    if (0 < iVar2) {
      do {
        if ((double)(float)(dVar7 - dVar9) <= (double)(float)(param_1 - dVar7)) {
          dVar10 = (double)(float)((double)(float)(param_1 - dVar7) * dVar5 + dVar7);
          fn_82D08868(dVar10,param_5,param_7);
          dVar8 = (double)fn_82D085B0(param_2,param_3,param_4,auStack_70);
          dVar4 = dVar9;
          dVar3 = dVar10;
          if (dVar8 < dVar6) {
            dVar4 = dVar7;
            dVar3 = param_1;
            dVar6 = dVar8;
            dVar7 = dVar10;
          }
        }
        else {
          dVar10 = -(double)(float)((double)(float)(dVar7 - dVar9) * dVar5 - dVar7);
          fn_82D08868(dVar10,param_5,param_7);
          dVar8 = (double)fn_82D085B0(param_2,param_3,param_4,auStack_70);
          dVar4 = dVar10;
          dVar3 = param_1;
          if (dVar8 < dVar6) {
            dVar4 = dVar9;
            dVar3 = dVar7;
            dVar6 = dVar8;
            dVar7 = dVar10;
          }
        }
        param_8 = param_8 + -1;
        dVar9 = dVar4;
        param_1 = dVar3;
      } while (param_8 != 0);
    }
  }
  return dVar7;
}

