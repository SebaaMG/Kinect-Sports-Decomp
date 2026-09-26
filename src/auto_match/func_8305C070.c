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
extern int fn_82F655D8();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82015618;


void fn_8305C070(undefined8 param_1,double param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar1 = fn_82F6A544();
  dVar5 = lbl_82005758 / (double)(longlong)param_4;
  dVar8 = lbl_82005758;
  dVar7 = lbl_82005758;
  dVar9 = lbl_82005758;
  if ((param_7 & 0xff) == 0) {
    dVar8 = (double)fn_82F655D8(lbl_82015618,extraout_f1 * lbl_82005720);
    dVar7 = param_2;
  }
  iVar3 = 0;
  if (0 < param_4) {
    pfVar2 = (float *)(iVar1 + -4);
    dVar8 = dVar9 / dVar8;
    dVar7 = dVar9 / dVar7 - dVar9;
    uVar6 = lbl_82005730;
    do {
      dVar4 = (double)fn_82F655D8(-((double)(longlong)iVar3 * dVar5 - dVar9),uVar6);
      dVar4 = (double)fn_82F655D8(dVar8 * (dVar9 - dVar4) + dVar9,dVar7);
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 1;
      *pfVar2 = (float)dVar4;
    } while (iVar3 < param_4);
  }
  fn_82F6A590();
  return;
}

