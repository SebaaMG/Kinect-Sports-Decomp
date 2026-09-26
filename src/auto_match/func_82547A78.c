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
extern unsigned int *auStack_80;
extern unsigned int fStack_100;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_84;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern unsigned int fStack_f4;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_826311B8();
extern int fn_82F64A40();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82193E2C;
extern unsigned int lbl_821C4BD8;
extern unsigned int lbl_821C4BE8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82547A78(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  longlong lStack_90;
  float fStack_84;
  undefined1 auStack_80 [128];
  
  uVar5 = fn_82F6A544();
  if (param_7 == 0) {
    pfVar8 = (float *)&lbl_821C4BD8;
  }
  else {
    pfVar8 = (float *)&lbl_821C4BE8;
  }
  dVar13 = (double)(float)(extraout_f1 * extraout_f1);
  pfVar6 = &fStack_84;
  iVar7 = -4;
  dVar12 = (double)lbl_821CA460;
  dVar10 = (double)lbl_821916FC;
  dVar11 = (double)(float)(dVar12 / (double)SQRT((float)(dVar13 * (double)lbl_82193E2C)));
  do {
    lStack_90 = (longlong)iVar7;
    dVar9 = (double)fn_82F64A40(-(double)(((float)lStack_90 * (float)lStack_90) /
                                          (float)(dVar13 * dVar10)));
    iVar7 = iVar7 + 1;
    pfVar6 = pfVar6 + 1;
    *pfVar6 = (float)((double)(float)dVar9 * dVar11);
  } while (iVar7 < 5);
  fVar1 = (float)(dVar12 / param_2);
  fStack_108 = lbl_821CC160;
  fStack_104 = lbl_821CC160;
  fStack_f8 = lbl_821CC160;
  fVar2 = pfVar8[3] * fVar1;
  fStack_f4 = lbl_821CC160;
  fVar3 = pfVar8[2] * fVar1;
  fStack_e8 = lbl_821CC160;
  fVar4 = pfVar8[1] * fVar1;
  fStack_e4 = lbl_821CC160;
  fVar1 = *pfVar8 * fVar1;
  fStack_d8 = lbl_821CC160;
  fStack_d4 = lbl_821CC160;
  fStack_c8 = lbl_821CC160;
  fStack_c4 = lbl_821CC160;
  fStack_b8 = lbl_821CC160;
  fStack_b4 = lbl_821CC160;
  fStack_a8 = lbl_821CC160;
  fStack_a4 = lbl_821CC160;
  fStack_98 = lbl_821CC160;
  fStack_94 = lbl_821CC160;
  if (param_5 == 0) {
    fStack_e0 = -fVar1;
    fStack_10c = lbl_821CC160;
    fStack_fc = lbl_821CC160;
    fStack_ec = lbl_821CC160;
    fStack_dc = lbl_821CC160;
    fStack_cc = lbl_821CC160;
    fStack_bc = lbl_821CC160;
    fStack_ac = lbl_821CC160;
    fStack_9c = lbl_821CC160;
    fStack_110 = -fVar2;
    fStack_100 = -fVar3;
    fStack_f0 = -fVar4;
    fStack_d0 = fVar1;
    fStack_c0 = fVar4;
    fStack_b0 = fVar3;
    fStack_a0 = fVar2;
  }
  else {
    fStack_dc = -fVar1;
    fStack_110 = lbl_821CC160;
    fStack_100 = lbl_821CC160;
    fStack_f0 = lbl_821CC160;
    fStack_e0 = lbl_821CC160;
    fStack_d0 = lbl_821CC160;
    fStack_c0 = lbl_821CC160;
    fStack_b0 = lbl_821CC160;
    fStack_a0 = lbl_821CC160;
    fStack_10c = -fVar2;
    fStack_fc = -fVar3;
    fStack_ec = -fVar4;
    fStack_cc = fVar1;
    fStack_bc = fVar4;
    fStack_ac = fVar3;
    fStack_9c = fVar2;
  }
  fn_826311B8(uVar5,0,&fStack_110,8,0xc000000000000000);
  fn_826311B8(uVar5,8,auStack_80,3,0x2000000000000000);
  fn_82F6A590();
  return;
}

