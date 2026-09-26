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
#define _fStack00000030 ((*(U64*)&fStack00000030))
#define _fStack00000038 ((*(U64*)&fStack00000038))
#define _fStack00000040 ((*(U64*)&fStack00000040))
#define _fStack00000048 ((*(U64*)&fStack00000048))
extern unsigned int fStack00000030;
extern unsigned int fStack00000034;
extern unsigned int fStack00000038;
extern unsigned int fStack00000040;
extern unsigned int fStack00000044;
extern unsigned int fStack00000048;
extern int fn_8253FD80();
extern int fn_82809D40();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000050;


float * fn_8255AA78(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  undefined8 uStack00000050;
  float afStack_30 [8];
  
  fVar3 = lbl_821CA460;
  pfVar6 = afStack_30;
  pfVar5 = (float *)((int)register0x0000000c + 0x24);
  dVar11 = (double)lbl_821CC160;
  lVar8 = 3;
  do {
    dVar9 = (double)(pfVar5[-1] * pfVar5[-1] + pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5);
    if (dVar9 == dVar11) {
      *pfVar6 = fVar3;
    }
    else {
      fVar2 = fVar3 / (float)SQRT(dVar9);
      *pfVar6 = fVar2;
      if ((double)fVar2 != dVar11) {
        *pfVar6 = fVar2;
      }
    }
    pfVar5 = pfVar5 + 4;
    pfVar6 = pfVar6 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar4 = 0;
  do {
    iVar7 = 0;
    lVar8 = 3;
    do {
      iVar1 = (iVar4 + iVar7) * 4;
      iVar7 = iVar7 + 1;
      *(float *)((int)&stack0x00000020 + iVar1) =
           *(float *)((int)afStack_30 + iVar4) * *(float *)((int)&stack0x00000020 + iVar1);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0xc);
  fStack00000044 = (float)param_6;
  dVar9 = (double)fStack00000044;
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  _fStack00000030 = param_4;
  _fStack00000038 = param_5;
  _fStack00000040 = param_6;
  _fStack00000048 = param_7;
  uStack00000050 = param_8;
  dVar10 = (double)fn_8253FD80(-dVar9);
  dVar9 = (double)fStack00000040;
  *param_1 = (float)dVar10;
  if ((dVar9 == dVar11) && ((double)fStack00000048 == dVar11)) {
    dVar9 = (double)fStack00000030;
    if ((dVar9 == dVar11) && ((double)fStack00000038 == dVar11)) {
      param_1[1] = (float)dVar11;
      goto LAB_8255abb4;
    }
  }
  dVar9 = (double)fn_82809D40(dVar9);
  param_1[1] = (float)dVar9;
LAB_8255abb4:
  if (((double)(((U64)(uStack00000020) >> 32) & 0xFFFFFFFF) == dVar11) && ((double)fStack00000034 == dVar11)) {
    param_1[2] = (float)dVar11;
  }
  else {
    dVar11 = (double)fn_82809D40();
    param_1[2] = (float)dVar11;
  }
  return param_1;
}

