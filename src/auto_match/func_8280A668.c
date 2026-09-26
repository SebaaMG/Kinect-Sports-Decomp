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
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8201EB08;
extern unsigned int lbl_8201EB10;
extern unsigned int lbl_8201EB18;
extern unsigned int lbl_8201EB24;
extern unsigned int lbl_8201EB28;
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


void fn_8280A668(undefined8 param_1,float *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar2 = (double)fn_82F6A548();
  dVar1 = ABS(dVar2);
  dVar7 = (double)lbl_8201EB24;
  dVar8 = dVar7;
  if (dVar2 < 0.0) {
    dVar8 = (double)lbl_8201EB28;
  }
  dVar5 = (double)(longlong)(lbl_8201EB08 * dVar1);
  dVar9 = -(lbl_8201EB38 * dVar5 - -(lbl_8201EB30 * dVar5 - dVar1));
  dVar6 = -(lbl_8201EB38 * (dVar5 - (double)lbl_8201EB2C) -
           -(lbl_8201EB30 * (dVar5 - (double)lbl_8201EB2C) - dVar1));
  dVar4 = dVar9 * dVar9;
  dVar3 = dVar6 * dVar6;
  dVar9 = (dVar7 + (((((((lbl_8201EB78 * dVar4 + lbl_8201EB70) * dVar4 + lbl_8201EB68) * dVar4 +
                       lbl_8201EB60) * dVar4 + lbl_8201EB58) * dVar4 + lbl_8201EB50) * dVar4 +
                    lbl_8201EB48) * dVar4 + lbl_8201EB40) * dVar4) * dVar9;
  dVar6 = (dVar7 + (((((((lbl_8201EB78 * dVar3 + lbl_8201EB70) * dVar3 + lbl_8201EB68) * dVar3 +
                       lbl_8201EB60) * dVar3 + lbl_8201EB58) * dVar3 + lbl_8201EB50) * dVar3 +
                    lbl_8201EB48) * dVar3 + lbl_8201EB40) * dVar3) * dVar6;
  if (((longlong)dVar5 & 1U) != 0) {
    dVar9 = -dVar9;
    dVar6 = -dVar6;
  }
  dVar3 = lbl_8201EB18;
  dVar7 = lbl_8201EB18;
  if (dVar1 - lbl_8201EB10 < 0.0) {
    dVar3 = dVar9 * dVar8;
    dVar7 = dVar6;
  }
  if (dVar1 == 0.0) {
    dVar3 = dVar2;
  }
  *param_2 = (float)dVar3;
  *param_3 = (float)dVar7;
  fn_82F6A594();
  return;
}

